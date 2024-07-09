#include <string>
#ifndef EELOO_H
#define EELOO_H
std::string Eeloo_cfg = "// KittopiaTech - a Kopernicus Visual Editor\n"
"\n"
"@Kopernicus:NEEDS[!Kopernicus]\n"
"{\n"
"	Body\n"
"	{\n"
"		name = Eeloo\n"
"		barycenter = False\n"
"		identifier = Squad/Eeloo\n"
"		implements = \n"
"		finalizeOrbit = False\n"
"		randomMainMenuBody = False\n"
"		contractWeight = 30\n"
"		Properties\n"
"		{\n"
"			description = There’s been a considerable amount of controversy around the status of Eeloo as being a proper planet or a just “lump of ice going around the Sun”. The debate is still ongoing, since most academic summits held to address the issue have devolved into, on good days, petty name calling, and on worse ones, all-out brawls.\n"
"			radius = 210000\n"
"			geeASL = 0.172058761891442\n"
"			mass = 1.11492242417007E+21\n"
"			gravParameter = 74410814527.0496\n"
"			rotates = True\n"
"			rotationPeriod = 19460\n"
"			tidallyLocked = False\n"
"			initialRotation = 25\n"
"			inverseRotThresholdAltitude = 100000\n"
"			albedo = 0.5\n"
"			emissivity = 0.5\n"
"			coreTemperatureOffset = 0\n"
"			timewarpAltitudeLimits = 0 4000 4000 20000 30000 40000 70000 150000\n"
"			sphereOfInfluence = 119082941.647812\n"
"			solarRotationPeriod = False\n"
"			navballSwitchRadiusMult = 0.06\n"
"			navballSwitchRadiusMultLow = 0.055\n"
"			biomeMap = BUILTIN/eeloo_biome\n"
"			nonExactThreshold = -1\n"
"			exactSearch = False\n"
"			useTheInName = False\n"
"			displayName = Eeloo^N\n"
"			selectable = True\n"
"			RnDVisibility = Visible\n"
"			RnDRotation = False\n"
"			maxZoom = 60000\n"
"			ScienceValues\n"
"			{\n"
"				landedDataValue = 15 // Science multiplier for landed science.\n"
"				splashedDataValue = 1 // Science multiplier for splashed down science.\n"
"				flyingLowDataValue = 1 // Science multiplier for flying low science.\n"
"				flyingHighDataValue = 1 // Science multiplier for flying high science.\n"
"				inSpaceLowDataValue = 12 // Science multiplier for in space low science.\n"
"				inSpaceHighDataValue = 10 // Science multiplier for in space high science.\n"
"				recoveryValue = 10\n"
"				flyingAltitudeThreshold = 18000 // Altitude when \"flying at <body>\" transitions from/to \"from <body>'s upper atmosphere\"\n"
"				spaceAltitudeThreshold = 60000 // Altitude when \"in space low\" transitions from/to \"in space high\"\n"
"			}\n"
"			Biomes\n"
"			{\n"
"				Value\n"
"				{\n"
"					name = Poles // The name of this biome.\n"
"					displayName = Poles // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 1,1,1,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Northern Glaciers // The name of this biome.\n"
"					displayName = Northern Glaciers // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.792156875,0.792156875,0.792156875,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Lowlands // The name of this biome.\n"
"					displayName = Lowlands // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.482352942,0.639215708,0.905882359,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Highlands // The name of this biome.\n"
"					displayName = Highlands // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.835294127,0.854901969,0.882352948,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Ice Canyons // The name of this biome.\n"
"					displayName = Ice Canyons // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 1,0.709803939,0.388235301,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Craters // The name of this biome.\n"
"					displayName = Craters // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.87843138,0.533333361,0.13333334,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Midlands // The name of this biome.\n"
"					displayName = Midlands // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.745098054,0.807843149,0.909803927,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Fragipan // The name of this biome.\n"
"					displayName = Fragipan // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 1,0.80392158,0.580392182,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Babbage Patch // The name of this biome.\n"
"					displayName = Babbage Patch // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.592156887,0.701960802,0.894117653,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Southern Glaciers // The name of this biome.\n"
"					displayName = Southern Glaciers // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.87843138,0.87843138,0.87843138,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Mu Glacier // The name of this biome.\n"
"					displayName = Mu Glacier // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.486274511,0.486274511,0.486274511,1 // The color of the biome on the biome map.\n"
"				}\n"
"			}\n"
"		}\n"
"		Orbit\n"
"		{\n"
"			referenceBody = Sun // The body that this body is orbiting around.\n"
"			inclination = 6.15\n"
"			eccentricity = 0.26\n"
"			semiMajorAxis = 90118820000 // The altitude of the highest point in the orbit\n"
"			longitudeOfAscendingNode = 50 // The position of the highest point on the orbit circle\n"
"			argumentOfPeriapsis = 260\n"
"			meanAnomalyAtEpoch = 3.14000010490417\n"
"			meanAnomalyAtEpochD = 179.908753681645\n"
"			epoch = 0\n"
"			color = 0.407843143,0.41568628,0.41568628,0.501960814 // The color of the orbit line in the Tracking Station\n"
"			nodeColor = 0.407843143,0.41568628,0.41568628,0.501960814 // The color of the circle that marks the planets current position on the orbit\n"
"			mode = REDRAW_AND_RECALCULATE\n"
"			icon = ALL\n"
"			cameraSmaRatioBounds = 0.03 25\n"
"			period = 156992048.397359\n"
"		}\n"
"		ScaledVersion\n"
"		{\n"
"			type = Vacuum\n"
"			fadeStart = 95000\n"
"			fadeEnd = 100000\n"
"			sphericalModel = False\n"
"			deferMesh = False\n"
"			invisible = False\n"
"			Material\n"
"			{\n"
"				color = 1,1,1,1\n"
"				specColor = 0.074626863,0.074626863,0.074626863,1\n"
"				shininess = 0.4605465\n"
"				texture = BUILTIN/snowydwarfplanet00\n"
"				mainTexScale = 1,1\n"
"				mainTexOffset = 0,0\n"
"				normals = BUILTIN/snowydwarfplanet01\n"
"				bumpMapScale = 1,1\n"
"				bumpMapOffset = 0,0\n"
"				opacity = 1\n"
"				resourceMapScale = 1,1\n"
"				resourceMapOffset = 0,0\n"
"			}\n"
"		}\n"
"		PQS\n"
"		{\n"
"			minLevel = 2\n"
"			maxLevel = 9\n"
"			minDetailDistance = 8\n"
"			maxQuadLengthsPerFrame = 0.03\n"
"			fadeStart = 100000\n"
"			fadeEnd = 110000\n"
"			deactivateAltitude = 120000\n"
"			mapMaxHeight = 6000\n"
"			materialType = AtmosphericBasic\n"
"			PhysicsMaterial\n"
"			{\n"
"				bounceCombine = Average\n"
"				frictionCombine = Maximum\n"
"				bounciness = 0\n"
"				staticFriction = 0.8\n"
"				dynamicFriction = 0.6\n"
"			}\n"
"			Material\n"
"			{\n"
"				saturation = 1\n"
"				contrast = 1.1\n"
"				tintColor = 1,1,1,0\n"
"				texTiling = 1000\n"
"				texPower = 0.6\n"
"				multiPower = 0.2\n"
"				groundTexStart = 2000\n"
"				groundTexEnd = 15000\n"
"				steepTiling = 300\n"
"				steepPower = 1\n"
"				steepTexStart = 100000\n"
"				steepTexEnd = 200000\n"
"				deepTex = BUILTIN/snow\n"
"				deepTexScale = 1,1\n"
"				deepTexOffset = 0,0\n"
"				deepMultiTex = BUILTIN/snow\n"
"				deepMultiTexScale = 1,1\n"
"				deepMultiTexOffset = 0,0\n"
"				deepMultiFactor = 1\n"
"				mainTex = BUILTIN/distantground\n"
"				mainTexScale = 1,1\n"
"				mainTexOffset = 0,0\n"
"				mainMultiTex = BUILTIN/distantground\n"
"				mainMultiTexScale = 1,1\n"
"				mainMultiTexOffset = 0,0\n"
"				mainMultiFactor = 1\n"
"				highTex = BUILTIN/distantground\n"
"				highTexScale = 1,1\n"
"				highTexOffset = 0,0\n"
"				highMultiTex = BUILTIN/distantground\n"
"				highMultiTexScale = 1,1\n"
"				highMultiTexOffset = 0,0\n"
"				highMultiFactor = 1\n"
"				snowTex = BUILTIN/snow\n"
"				snowTexScale = 1,1\n"
"				snowTexOffset = 0,0\n"
"				snowMultiTex = BUILTIN/snow\n"
"				snowMultiTexScale = 1,1\n"
"				snowMultiTexOffset = 0,0\n"
"				snowMultiFactor = 1\n"
"				steepTex = BUILTIN/snow\n"
"				steepTexScale = 1,1\n"
"				steepTexOffset = 0,0\n"
"				deepStart = 0\n"
"				deepEnd = 0.2\n"
"				mainLoStart = 0\n"
"				mainLoEnd = 0.2\n"
"				mainHiStart = 0.2\n"
"				mainHiEnd = 0.5\n"
"				hiLoStart = 0.2\n"
"				hiLoEnd = 0.5\n"
"				hiHiStart = 0.8\n"
"				hiHiEnd = 1\n"
"				snowStart = 0.8\n"
"				snowEnd = 1\n"
"				fogColor = 0.731343269,0.731343269,0.731343269,1\n"
"				heightFallOff = 1\n"
"				globalDensity = -5E-06\n"
"				atmosphereDepth = 55000\n"
"				fogColorRampScale = 1,1\n"
"				fogColorRampOffset = 0,0\n"
"				planetOpacity = 0\n"
"			}\n"
"			FallbackMaterial\n"
"			{\n"
"				saturation = 1\n"
"				contrast = 1.55\n"
"				tintColor = 1,1,1,0\n"
"				texTiling = 1000\n"
"				texPower = 0.3\n"
"				multiPower = 0.3\n"
"				groundTexStart = 20000\n"
"				groundTexEnd = 60000\n"
"				multiFactor = 0.5\n"
"				mainTex = BUILTIN/SandyGround\n"
"				mainTexScale = 1,1\n"
"				mainTexOffset = 0,0\n"
"				planetOpacity = 0\n"
"			}\n"
"			Mods\n"
"			{\n"
"				AltitudeAlpha\n"
"				{\n"
"					atmosphereDepth = 4000\n"
"					invert = False\n"
"					order = 999999999\n"
"					enabled = False\n"
"					name = _Material_ModProjection\n"
"				}\n"
"				LandControl\n"
"				{\n"
"					altitudeBlend = 0.05\n"
"					altitudeFrequency = 12\n"
"					altitudeOctaves = 2\n"
"					altitudePersistance = 0.6\n"
"					altitudeSeed = 212121\n"
"					createColors = True\n"
"					createScatter = True\n"
"					heightMap = BUILTIN/snowydwarfplanet_height\n"
"					latitudeBlend = 0.02\n"
"					latitudeFrequency = 4\n"
"					latitudeOctaves = 4\n"
"					latitudePersistance = 0.6\n"
"					latitudeSeed = 47373\n"
"					longitudeBlend = 0.05\n"
"					longitudeFrequency = 4\n"
"					longitudeOctaves = 4\n"
"					longitudePersistance = 0.6\n"
"					longitudeSeed = 768453\n"
"					useHeightMap = False\n"
"					vHeightMax = 3500\n"
"					order = 9999991\n"
"					enabled = True\n"
"					name = _LandClass\n"
"					Scatters\n"
"					{\n"
"						Value\n"
"						{\n"
"							name = boulder\n"
"							materialType = StandardSpecular\n"
"							material = BUILTIN/snowboulder\n"
"							mesh = BUILTIN/boulder\n"
"							castShadows = True\n"
"							densityFactor = 0.0199999995529652\n"
"							maxCache = 512\n"
"							maxCacheDelta = 32\n"
"							maxLevelOffset = 0\n"
"							maxScale = 4\n"
"							maxScatter = 20\n"
"							maxSpeed = 1000\n"
"							minScale = 0.1\n"
"							recieveShadows = True\n"
"							seed = 4565677\n"
"							verticalOffset = 0.2\n"
"							instancing = False\n"
"							rotation = 0 360\n"
"							useBetterDensity = False\n"
"							spawnChance = 1\n"
"							ignoreDensityGameSetting = False\n"
"							densityVariance = -0.5 0.5\n"
"							delete = False\n"
"							Material\n"
"							{\n"
"								color = 0.904411793,0.884461522,0.884461522,1\n"
"								mainTex = BUILTIN/Duna Snow Boulder [Diffuse]\n"
"								mainTexScale = 3,3\n"
"								mainTexOffset = 0,0\n"
"								cutoff = 0.5\n"
"								glossiness = 0.5\n"
"								glossMapScale = 1\n"
"								smoothnessTextureChannel = AlbedoAlpha\n"
"								specColor = 0.0661764741,0.0661764741,0.0661764741,1\n"
"								metallicGlossMapScale = 1,1\n"
"								metallicGlossMapOffset = 0,0\n"
"								specularHighlights = True\n"
"								glossyReflections = True\n"
"								bumpScale = 1\n"
"								bumpMap = BUILTIN/Duna Snow Boulder [Normal]\n"
"								bumpMapScale = 3,3\n"
"								bumpMapOffset = 0,0\n"
"								parallax = 0.02\n"
"								parallaxMapScale = 1,1\n"
"								parallaxMapOffset = 0,0\n"
"								occlusionStrength = 1\n"
"								occlusionMapScale = 1,1\n"
"								occlusionMapOffset = 0,0\n"
"								emissionColor = 0,0,0,1\n"
"								emissionMapScale = 1,1\n"
"								emissionMapOffset = 0,0\n"
"								detailMaskScale = 1,1\n"
"								detailMaskOffset = 0,0\n"
"								detailAlbedoMapScale = 1,1\n"
"								detailAlbedoMapOffset = 0,0\n"
"								detailNormalMapScale = 1,1\n"
"								detailNormalMapOffset = 0,0\n"
"								UVSec = Uv0\n"
"								mode = Opaque\n"
"								srcBlend = 1\n"
"								dstBlend = 0\n"
"								ZWrite = 1\n"
"							}\n"
"						}\n"
"					}\n"
"					LandClasses\n"
"					{\n"
"						Value\n"
"						{\n"
"							alterApparentHeight = 0\n"
"							alterRealHeight = 0\n"
"							color = 0.595997214,0.641892254,0.679104447,0\n"
"							coverageBlend = 0.5\n"
"							coverageFrequency = 8\n"
"							coverageOctaves = 3\n"
"							coveragePersistance = 0.2\n"
"							coverageSeed = 34535345\n"
"							name = Snow\n"
"							latDelta = 1\n"
"							latitudeDouble = False\n"
"							lonDelta = 1\n"
"							minimumRealHeight = 0\n"
"							noiseBlend = 0.8\n"
"							noiseColor = 0.373134315,0.361236542,0.311815023,0\n"
"							noiseFrequency = 0.5\n"
"							noiseOctaves = 8\n"
"							noisePersistance = 0.7\n"
"							noiseSeed = 45656745\n"
"							delete = False\n"
"							altitudeRange\n"
"							{\n"
"								endEnd = 10\n"
"								endStart = 10\n"
"								startEnd = 1\n"
"								startStart = 0\n"
"							}\n"
"							latitudeDoubleRange\n"
"							{\n"
"								endEnd = 11\n"
"								endStart = 11\n"
"								startEnd = -9\n"
"								startStart = -9\n"
"							}\n"
"							latitudeRange\n"
"							{\n"
"								endEnd = 10\n"
"								endStart = 10\n"
"								startEnd = -10\n"
"								startStart = -10\n"
"							}\n"
"							longitudeRange\n"
"							{\n"
"								endEnd = 10\n"
"								endStart = 10\n"
"								startEnd = -10\n"
"								startStart = -10\n"
"							}\n"
"							Scatters\n"
"							{\n"
"								Value\n"
"								{\n"
"									density = 0.0199999995529652\n"
"									scatterName = boulder\n"
"									delete = False\n"
"								}\n"
"							}\n"
"						}\n"
"						Value\n"
"						{\n"
"							alterApparentHeight = 0\n"
"							alterRealHeight = 0\n"
"							color = 0.373134315,0.326146901,0.207441822,0\n"
"							coverageBlend = 0.5\n"
"							coverageFrequency = 8\n"
"							coverageOctaves = 3\n"
"							coveragePersistance = 0.2\n"
"							coverageSeed = 34535345\n"
"							name = MoreSnow\n"
"							latDelta = 1\n"
"							latitudeDouble = False\n"
"							lonDelta = 1\n"
"							minimumRealHeight = 0\n"
"							noiseBlend = 0.8\n"
"							noiseColor = 0.24626863,0.227543369,0.205797896,0\n"
"							noiseFrequency = 0.5\n"
"							noiseOctaves = 8\n"
"							noisePersistance = 0.7\n"
"							noiseSeed = 45656745\n"
"							delete = False\n"
"							altitudeRange\n"
"							{\n"
"								endEnd = 0.300000011920929\n"
"								endStart = 0.100000001490116\n"
"								startEnd = -1\n"
"								startStart = -1\n"
"							}\n"
"							latitudeDoubleRange\n"
"							{\n"
"								endEnd = 11\n"
"								endStart = 11\n"
"								startEnd = -9\n"
"								startStart = -9\n"
"							}\n"
"							latitudeRange\n"
"							{\n"
"								endEnd = 10\n"
"								endStart = 10\n"
"								startEnd = -10\n"
"								startStart = -10\n"
"							}\n"
"							longitudeRange\n"
"							{\n"
"								endEnd = 10\n"
"								endStart = 10\n"
"								startEnd = -10\n"
"								startStart = -10\n"
"							}\n"
"							Scatters\n"
"							{\n"
"								Value\n"
"								{\n"
"									density = 0.0199999995529652\n"
"									scatterName = boulder\n"
"									delete = False\n"
"								}\n"
"							}\n"
"						}\n"
"						Value\n"
"						{\n"
"							alterApparentHeight = 0\n"
"							alterRealHeight = 0\n"
"							color = 0.597014904,0.597014904,0.597014904,0\n"
"							coverageBlend = 0.5\n"
"							coverageFrequency = 8\n"
"							coverageOctaves = 3\n"
"							coveragePersistance = 0.2\n"
"							coverageSeed = 456567834\n"
"							name = EvenMoreSnow\n"
"							latDelta = 1\n"
"							latitudeDouble = False\n"
"							lonDelta = 1\n"
"							minimumRealHeight = 0\n"
"							noiseBlend = 0.8\n"
"							noiseColor = 0.201492548,0.192007825,0.172607258,0\n"
"							noiseFrequency = 0.5\n"
"							noiseOctaves = 8\n"
"							noisePersistance = 0.7\n"
"							noiseSeed = 1232343\n"
"							delete = False\n"
"							altitudeRange\n"
"							{\n"
"								endEnd = 2\n"
"								endStart = 1\n"
"								startEnd = 0.800000011920929\n"
"								startStart = 0.699999988079071\n"
"							}\n"
"							latitudeDoubleRange\n"
"							{\n"
"								endEnd = 11\n"
"								endStart = 11\n"
"								startEnd = -9\n"
"								startStart = -9\n"
"							}\n"
"							latitudeRange\n"
"							{\n"
"								endEnd = 10\n"
"								endStart = 10\n"
"								startEnd = -10\n"
"								startStart = -10\n"
"							}\n"
"							longitudeRange\n"
"							{\n"
"								endEnd = 10\n"
"								endStart = 10\n"
"								startEnd = -10\n"
"								startStart = -10\n"
"							}\n"
"							Scatters\n"
"							{\n"
"								Value\n"
"								{\n"
"									density = 0.0199999995529652\n"
"									scatterName = boulder\n"
"									delete = False\n"
"								}\n"
"							}\n"
"						}\n"
"					}\n"
"				}\n"
"				AerialPerspectiveMaterial\n"
"				{\n"
"					atmosphereDepth = 150000\n"
"					DEBUG_SetEveryFrame = True\n"
"					globalDensity = -1E-05\n"
"					heightFalloff = 6.75\n"
"					oceanDepth = 0\n"
"					order = 100\n"
"					enabled = True\n"
"					name = _Material_AerialPerspective\n"
"				}\n"
"				VertexHeightMap\n"
"				{\n"
"					map = BUILTIN/snowydwarfplanet_height\n"
"					offset = -300\n"
"					deformity = 4100\n"
"					scaleDeformityByRadius = False\n"
"					order = 10\n"
"					enabled = True\n"
"					name = _Height\n"
"				}\n"
"				VertexSimplexHeight\n"
"				{\n"
"					deformity = 600\n"
"					frequency = 8\n"
"					octaves = 10\n"
"					persistence = 0.5\n"
"					seed = 435213423\n"
"					order = 20\n"
"					enabled = True\n"
"					name = _HeightNoise\n"
"				}\n"
"				VertexHeightNoise\n"
"				{\n"
"					deformity = 400\n"
"					frequency = 3\n"
"					octaves = 6\n"
"					persistence = 0.5\n"
"					seed = 783456456\n"
"					noiseType = RiggedMultifractal\n"
"					mode = Low\n"
"					lacunarity = 1.5\n"
"					order = 22\n"
"					enabled = True\n"
"					name = _HeightNoise\n"
"				}\n"
"				VertexVoronoi\n"
"				{\n"
"					deformation = 250\n"
"					displacement = 0.00499999988824129\n"
"					enableDistance = True\n"
"					frequency = 12\n"
"					seed = 56457563\n"
"					order = 23\n"
"					enabled = True\n"
"					name = _HeightNoise\n"
"				}\n"
"				FlattenOcean\n"
"				{\n"
"					oceanRadius = 1\n"
"					order = 21\n"
"					enabled = True\n"
"					name = _HeightNoise\n"
"				}\n"
"				VertexHeightNoiseVertHeight\n"
"				{\n"
"					heightStart = 0.2\n"
"					heightEnd = 1\n"
"					deformity = 140\n"
"					frequency = 70\n"
"					octaves = 4\n"
"					persistance = 0.7\n"
"					seed = 78967456\n"
"					mode = Low\n"
"					noiseType = RiggedMultifractal\n"
"					lacunarity = 3\n"
"					order = 30\n"
"					enabled = True\n"
"					name = _FineDetail\n"
"				}\n"
"				City\n"
"				{\n"
"					debugOrientated = False\n"
"					frameDelta = 1\n"
"					randomizeOnSphere = True\n"
"					reorientToSphere = True\n"
"					reorientFinalAngle = 45\n"
"					reorientInitialUp = 0,1,0\n"
"					repositionRadial = 513856,-290549,-122798\n"
"					repositionRadiusOffset = 2948.5\n"
"					repositionToSphere = True\n"
"					repositionToSphereSurface = True\n"
"					repositionToSphereSurfaceAddHeight = False\n"
"					commnetStation = False\n"
"					isKSC = False\n"
"					order = 100\n"
"					enabled = True\n"
"					name = Randolith\n"
"					LOD\n"
"					{\n"
"						Value\n"
"						{\n"
"							visibleRange = 10000\n"
"							scale = 0,0,0\n"
"							delete = False\n"
"						}\n"
"					}\n"
"				}\n"
"			}\n"
"		}\n"
"		Debug\n"
"		{\n"
"			exportMesh = True // Whether Kopernicus should save a .bin file with the ScaledSpace mesh.\n"
"			update = False // Setting this to true will force Kopernicus to update the ScaledSpace mesh.\n"
"			showSOI = False\n"
"		}\n"
"	}\n"
"}\n";
#endif