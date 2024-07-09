//#include <filesystem>
#include <vector>
#include <string>
#include <stack>
#include <iostream>
#include <cmath>

#include "../debug/debug.h"
#include "system/system.h"
#include "parser.h"
#include "../constants/consts.h"

//Planet config reader
struct Statement {
	std::string key;
	std::vector<std::string> values;
};

struct ConfigTree {
	ConfigTree* parent;
	std::string name;
	std::vector<ConfigTree> children;
	std::vector<Statement> statements;
};

void logWithTabs(std::string message, int numTabs) {
	log(std::string(numTabs, '\t') + message);
}

void logConfigTreeWithTabs(ConfigTree tree, int numTabs) {
	std::string treeName = tree.name;
	std::vector<ConfigTree> treeChildren = tree.children;
	std::vector<Statement> treeStatements = tree.statements;
	std::string statementString;

	logWithTabs(treeName + " {", numTabs);
	//std::cout << treeStatements.size() << "\n";

	for (Statement treeStatement : treeStatements) {
		statementString = treeStatement.key + " =";
		for (std::string value : treeStatement.values) {
			statementString += " " + value;
		}
		logWithTabs(statementString, numTabs + 1);
	}
	//std::cout << treeChildren.size() << "\n";

	for (ConfigTree child : tree.children) {
		logConfigTreeWithTabs(child, numTabs + 1);
	}
	logWithTabs("}", numTabs);
}

void logConfigTree(ConfigTree tree) {
	logConfigTreeWithTabs(tree, 0);
}

ConfigTree getConfigTreeFromConfig(const std::string& config) {
	std::vector<std::string> words;
	std::string currentWord = "";
	char previousCharacter = ' ';
	bool commented = false;

	for (char c : config) { //Split the config into words
		if (c == '\n') {
			commented = false;
		}
		if (commented) {
			continue;
		}
		switch (c) {
			case ' ': //Split words without including the splitting character
			case '\t':
			case ',':
			case '\n':
				if (currentWord.size() > 0) {
					words.push_back(currentWord);
					currentWord = "";
				}
				break;
			case '{': //Split words and include the splitting character
			case '}':
			case '=':
				if (currentWord.size() > 0) {
					words.push_back(currentWord);
					currentWord = "";
				}
				words.push_back(std::string(1, c));
				break;
			case '/': //Leave out comments
				if (previousCharacter == '/') {
					commented = true;
				}
				break;
			default:
				currentWord += c;
		}
		previousCharacter = c;
	}
	if (currentWord.size() > 0) {
		words.push_back(currentWord);
	}

	ConfigTree root; //Turn words vector into a ConfigTree 
	ConfigTree* current = &root;
	std::string key;
	std::vector<std::string> values;
	int j;

	int numWords = words.size();
	for (int i = 0; i < numWords; i++) {
		if (words[i] == "{") {
			if ((i == 0) || (words[i - 1] == "}") || (words[i - 1] == "{") || (words[i - 1] == "=")) {
				log("ConfigTree must have a name");
				continue;
			}
			current->children.push_back(
				ConfigTree {
					current,
					words[i - 1], 
					std::vector<ConfigTree>{}, 
					std::vector<Statement>{}
				}
			);
			current = &(current->children.back());
		} else if (words[i] == "}") {
			if (current == &root) {
				log("Unmatched brackets");
				continue;
			}
			current = current->parent;
		} else if (words[i] == "=") {
			key = words[i - 1];
			values.clear();
			j = i + 1;
			while (j < numWords) {
				if ((words[j] == "=") || (words[j] == "{")) {
					if (values.size() == 0) {
						log(
							(words[j] == "=") ?
							"Two equals signs next to one another" :
							"ConfigTree must have a name"
						);
						break;
					}
					values.pop_back();
					break;
				}
				if (words[j] == "}") {
					break;
				}
				values.push_back(words[j]);
				j++;
			}
			current->statements.push_back(Statement {key, values});
		}
		//log(words[i]);
	}
	//logConfigTree(root);

	return root;
}

ConfigTree removeNodesFromConfigTree(const ConfigTree tree, std::vector<std::string> names) {
	ConfigTree res = tree;
	res.children.clear();
	bool childInNames;
	for (ConfigTree child : tree.children) {
		childInNames = false;
		for (std::string name : names) {
			if (name == child.name) {
				childInNames = true;
				break;
			}
		}
		if (childInNames) {
			continue;
		}
		res.children.push_back(removeNodesFromConfigTree(child, names));
	}
	return res;
}

std::vector<std::string> getValueFromConfigTree(const ConfigTree& tree, std::string key) {
	for (Statement statement : tree.statements) {
		if (statement.key == key) {
			return statement.values; //In statements
		}
	}
	for (ConfigTree child : tree.children) {
		std::vector<std::string> childResult = getValueFromConfigTree(child, key);
		if (childResult.size() > 0) {
			return childResult; //In child
		}
	}

	return std::vector<std::string>{}; //Not found
}

Body getBodyFromConfigTree(const ConfigTree& tree) {
	Body res;
	std::vector<std::string> searchResult = getValueFromConfigTree(tree, "name");
	if (searchResult.size() == 0) {
		log("No name detected in config");
	} else {
		res.name = searchResult[0];
	}

	bool massFound = false;
	bool radiusFound = false;

	searchResult = getValueFromConfigTree(tree, "gravParameter");
	if (searchResult.size() > 0) {
		res.gravParameter = std::stod(searchResult[0]);
		massFound = true;
	}
	if (!massFound) {
		searchResult = getValueFromConfigTree(tree, "mass");
		if (searchResult.size() > 0) {
			res.gravParameter = G * std::stod(searchResult[0]);
			massFound = true;
		}
	}

	searchResult = getValueFromConfigTree(tree, "radius");
	if (searchResult.size() > 0) {
		res.radius = std::stod(searchResult[0]);
		radiusFound = true;
	}

	if ((!massFound) && (!radiusFound)) {
		log("Neither mass nor radius specified");
		return res;
	}

	if ((!massFound) || (!radiusFound)) {
		searchResult = getValueFromConfigTree(tree, "geeASL");
		if (!massFound) {
			res.gravParameter = g * std::stod(searchResult[0]) * res.radius * res.radius;
		} else {
			res.radius = std::sqrt(res.gravParameter/(g * std::stod(searchResult[0])));
		}
	}

	return res;
}

std::vector<Body> loadStockBodies() {
	std::vector<Body> res;
	for (const std::string* config : stockSystem) {
		ConfigTree bodyTree = removeNodesFromConfigTree(
			getConfigTreeFromConfig(*config),
			std::vector<std::string> {
				"PQS", 
				"Ocean", 
				"ScaledVersion", 
				"Biomes", 
				"ScienceValues", 
				"SpaceCenter", 
				"Debug", 
				"AtmosphereFromGround"
			}
		);
		Body body = getBodyFromConfigTree(bodyTree);
		res.push_back(body);
		//logConfigTree(bodyTree);
		//log(body.name);
		//std::cout << body.gravParameter << "\n";
		//std::cout << body.radius << "\n";
	}
	return res;
}