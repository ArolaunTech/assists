//#include <filesystem>
#include <vector>
#include <string>
#include <stack>
#include <iostream>
#include <cmath>
#include <unordered_map>

#include "../debug/debug.h"
#include "../debug/perft.h"
#include "system/system.h"
#include "parser.h"
#include "../engine/consts.h"

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
	//PerftAnalyzer perft;
	//TagID start = perft.tagTime();

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

	//std::cout << perft.elapsed(start).count() << "\n";
	//TagID end = perft.tagTime();

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

	//std::cout << perft.elapsed(start).count() << "\n";

	return root;
}

ConfigTree removeNodesFromConfigTree(const ConfigTree& tree, std::vector<std::string> names) {
	//PerftAnalyzer perft;
	//TagID start = perft.tagTime();

	ConfigTree res{nullptr, tree.name, std::vector<ConfigTree>{}, tree.statements};
	//res.children.clear();
	//res.statements = tree.statements;
	bool childInNames;
	for (ConfigTree child : tree.children) {
		childInNames = false;
		for (std::string name : names) {
			if (name == child.name) {
				childInNames = true;
				break;
			}
		}
		if (!childInNames) {
			res.children.push_back(removeNodesFromConfigTree(child, names));
		}
	}

	//std::cout << perft.elapsed(start).count() << "\n";
	return res;
}

ConfigTree findConfigTreeNode(const ConfigTree& tree, std::string name) {
	if (tree.name == name) {
		return tree;
	}
	for (ConfigTree child : tree.children) {
		ConfigTree childRes = findConfigTreeNode(child, name);
		if (childRes.name == name) {
			return childRes;
		}
	}
	ConfigTree res;
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

std::unordered_map<std::string, std::vector<std::string> > flattenTree(const ConfigTree& tree) {
	std::unordered_map<std::string, std::vector<std::string> > res;

	for (Statement statement : tree.statements) {
		res[statement.key] = statement.values;
	}
	for (ConfigTree child : tree.children) {
		std::unordered_map<std::string, std::vector<std::string> > childResult = flattenTree(child);
		for (auto pair : childResult) {
			res[pair.first] = pair.second;
		}
	}

	return res;
}

std::vector<std::string> getValueFromFlattenedTree(std::unordered_map<std::string, std::vector<std::string> >& tree, std::string key) {
	if (tree.find(key) == tree.end()) {
		return std::vector<std::string>{};
	}
	return tree[key];
}

Body getBodyFromConfigTree(const ConfigTree& tree) {
	Body res;

	std::unordered_map<std::string, std::vector<std::string> > flattenedTree = flattenTree(tree);

	std::vector<std::string> searchResult = getValueFromFlattenedTree(flattenedTree, "name");
	if (searchResult.size() == 0) {
		log("No name detected in config");
		return res;
	} else {
		res.name = searchResult[0];
	}

	//Find mass and radius
	bool massFound = false;
	bool radiusFound = false;

	searchResult = getValueFromFlattenedTree(flattenedTree, "gravParameter");
	if (searchResult.size() > 0) {
		res.gravParameter = std::stod(searchResult[0]);
		massFound = true;
	}
	if (!massFound) {
		searchResult = getValueFromFlattenedTree(flattenedTree, "mass");
		if (searchResult.size() > 0) {
			res.gravParameter = G * std::stod(searchResult[0]);
			massFound = true;
		}
	}

	searchResult = getValueFromFlattenedTree(flattenedTree, "radius");
	if (searchResult.size() > 0) {
		res.radius = std::stod(searchResult[0]);
		radiusFound = true;
	}

	if ((!massFound) && (!radiusFound)) {
		log("Neither mass nor radius specified");
		return res;
	}

	if ((!massFound) || (!radiusFound)) {
		searchResult = getValueFromFlattenedTree(flattenedTree, "geeASL");
		if (searchResult.size() > 0) {
			if (!massFound) {
				res.gravParameter = g * std::stod(searchResult[0]) * res.radius * res.radius;
			} else {
				res.radius = std::sqrt(res.gravParameter/(g * std::stod(searchResult[0])));
			}
		}
	}

	if (!massFound) {
		log("Mass not specified");
		return res;
	}

	if (!radiusFound) {
		log("Radius not specified");
		return res;
	}

	//Find orbital parameters and color
	searchResult = getValueFromFlattenedTree(flattenedTree, "referenceBody");
	if (searchResult.size() > 0) {
		Orbit orbit;
		res.orbit = orbit;
		res.orbit.referenceBody = searchResult[0];
	} else {
		if (res.name == "Sun") {
			res.color[0] = 1.0; //Random color I found in Kittopia Dumps
			res.color[1] = 0.863;
			res.color[2] = 0.584;
		} else {
			log("No orbital parent specified");
		}
		return res;
	}

	searchResult = getValueFromFlattenedTree(flattenedTree, "semiMajorAxis");
	if (searchResult.size() > 0) {
		res.orbit.sma = std::stod(searchResult[0]);
	} else {
		log("No semi major axis specified for orbit");
		return res;
	}

	searchResult = getValueFromFlattenedTree(flattenedTree, "eccentricity");
	if (searchResult.size() > 0) {
		res.orbit.eccentricity = std::stod(searchResult[0]);
	} else {
		log("No eccentricity specified");
		return res;
	}

	searchResult = getValueFromFlattenedTree(flattenedTree, "inclination");
	if (searchResult.size() > 0) {
		res.orbit.inclination = std::stod(searchResult[0]) * pi/180.0;
	} else {
		log("No inclination specified");
		return res;
	}

	searchResult = getValueFromFlattenedTree(flattenedTree, "longitudeOfAscendingNode");
	if (searchResult.size() > 0) {
		res.orbit.lan = std::stod(searchResult[0]) * pi/180.0;
	} else {
		log("No longitude of ascending node specified");
		return res;
	}

	searchResult = getValueFromFlattenedTree(flattenedTree, "argumentOfPeriapsis");
	if (searchResult.size() > 0) {
		res.orbit.argp = std::stod(searchResult[0]) * pi/180.0;
	} else {
		log("No argument of periapsis specified");
		return res;
	}

	searchResult = getValueFromFlattenedTree(flattenedTree, "period");
	res.orbit.period = -1.0;
	if (searchResult.size() > 0) {
		res.orbit.period = std::stod(searchResult[0]);
	}

	double meanAnomalyAtEpoch = 0.0;

	searchResult = getValueFromFlattenedTree(flattenedTree, "meanAnomalyAtEpoch");
	if (searchResult.size() > 0) {
		meanAnomalyAtEpoch = std::stod(searchResult[0]);
	} else {
		searchResult = getValueFromFlattenedTree(flattenedTree, "meanAnomalyAtEpochD");
		if (searchResult.size() > 0) {
			meanAnomalyAtEpoch = std::stod(searchResult[0]) * pi/180.0;
		}
	}

	res.orbit.meanAnomalyAtEpoch = meanAnomalyAtEpoch;

	searchResult = getValueFromFlattenedTree(flattenedTree, "epoch");
	res.orbit.epoch = 0.0;
	if (searchResult.size() > 0) {
		res.orbit.epoch = std::stod(searchResult[0]);
	}

	//Color
	searchResult = getValueFromConfigTree(findConfigTreeNode(tree, "Orbit"), "color");
	if (searchResult.size() > 0) {
		//Detect color type
		if (searchResult[0].rfind("RGBA(", 0) == 0) {
			if (searchResult[0].size() == 5) {
				res.color[0] = std::stod(searchResult[1])/255.0;
				res.color[1] = std::stod(searchResult[2])/255.0;
				res.color[2] = std::stod(searchResult[3])/255.0;
			} else {
				res.color[0] = std::stod(searchResult[0].substr(5))/255.0;
				res.color[1] = std::stod(searchResult[1])/255.0;
				res.color[2] = std::stod(searchResult[2])/255.0;
			}
			//log("RGBA color");
		} else if (searchResult[0].rfind("RGB(", 0) == 0) {
			if (searchResult[0].size() == 4) {
				res.color[0] = std::stod(searchResult[1])/255.0;
				res.color[1] = std::stod(searchResult[2])/255.0;

				int blueSize = searchResult[3].size();
				if (searchResult[3][blueSize - 1] == ')') {
					res.color[2] = std::stod(searchResult[3].substr(0, blueSize - 1))/255.0;
				} else {
					res.color[2] = std::stod(searchResult[3])/255.0;
				}
			} else {
				res.color[0] = std::stod(searchResult[0].substr(4))/255.0;
				res.color[1] = std::stod(searchResult[1])/255.0;

				int blueSize = searchResult[2].size();
				if (searchResult[2][blueSize - 1] == ')') {
					res.color[2] = std::stod(searchResult[2].substr(0, blueSize - 1))/255.0;
				} else {
					res.color[2] = std::stod(searchResult[2])/255.0;
				}
			}
			//log("RGB color");
		} else if (searchResult[0].rfind("HSBA(", 0) == 0) {
			//log("HSBA color");
			double h, s, b;

			if (searchResult[0].size() == 5) {
				h = 360.0*std::stod(searchResult[1])/255.0; //Kopernicus, why???
				s = std::stod(searchResult[2])/255.0;
				b = std::stod(searchResult[3])/255.0;
			} else {
				h = 360.0*std::stod(searchResult[0].substr(5))/255.0;
				s = std::stod(searchResult[1])/255.0;
				b = std::stod(searchResult[2])/255.0;
			}

			//Line-by-line copy of Kopernicus's HSBA parser
			double max = b;
			double dif = b * s;
			double min = b - dif;

			if (h < 60.0) {
				res.color[0] = max;
				res.color[1] = h * dif/60.0 + min;
				res.color[2] = min;
			} else if (h < 120.0) {
				res.color[0] = -(h - 120.0) * dif/60.0 + min;
				res.color[1] = max;
				res.color[2] = min;
			} else if (h < 180.0) {
				res.color[0] = min;
				res.color[1] = max;
				res.color[2] = (h - 120.0) * dif/60.0 + min;
			} else if (h < 240.0) {
				res.color[0] = min;
				res.color[1] = -(h - 240.0) * dif/60.0 + min;
				res.color[2] = max;
			} else if (h < 300.0) {
				res.color[0] = (h - 240.0) * dif/60.0 + min;
				res.color[1] = min;
				res.color[2] = max;
			} else {
				res.color[0] = max;
				res.color[1] = min;
				res.color[2] = -(h - 360.0) * dif/60.0 + min;
			}
		} else if (searchResult[0].rfind("XKCD.", 0) == 0) {
			log("XKCD color is not supported right now because I'm too lazy to make it");
		} else if (searchResult[0][0] == '#') {
			res.color[0] = (double)std::stoi("0x" + searchResult[0].substr(1, 2))/255.0;
			res.color[1] = (double)std::stoi("0x" + searchResult[0].substr(3, 2))/255.0;
			res.color[2] = (double)std::stoi("0x" + searchResult[0].substr(5, 2))/255.0;
		} else {
			res.color[0] = std::stod(searchResult[0]);
			res.color[1] = std::stod(searchResult[1]);
			res.color[2] = std::stod(searchResult[2]);
		}
	} else {
		log("No orbit color provided");
		return res;
	}

	return res;
}

std::unordered_map<std::string, Body> loadStockBodies() {
	//PerftAnalyzer perft;

	std::unordered_map<std::string, Body> res;
	for (const std::string* config : stockSystem) {
		//TagID startparse = perft.tagTime();

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

		//std::cout << perft.elapsed(startparse).count() << "\n";
		//TagID endparse = perft.tagTime();

		Body body = getBodyFromConfigTree(bodyTree);
		res[body.name] = body;
		
		//std::cout << perft.elapsed(endparse).count() << "\n";
		//logConfigTree(bodyTree);
		//log(body.name);
		//std::cout << body.gravParameter << "\n";
		//std::cout << body.radius << "\n";
		//std::cout << body.color[0]*255.0 << " " << body.color[1]*255.0 << " " << body.color[2]*255.0 << "\n";
	}
	for (auto& iter : res) {
		if (iter.second.orbit.period == -1.0) {
			if (iter.second.orbit.sma < 0.0) {
				iter.second.orbit.period = INFINITY;
			} else {
				iter.second.orbit.period = 
					2.0 * pi * iter.second.orbit.sma * 
					std::sqrt(
						iter.second.orbit.sma / 
						res[iter.second.orbit.referenceBody].gravParameter
					);
			}
		}
		if (iter.first == "Sun") {
			continue;
		}
		iter.second.orbit.parentGravParameter = res[iter.second.orbit.referenceBody].gravParameter;
		//std::cout << res[iter.first].orbit.period << "\n";
	}

	return res;
}