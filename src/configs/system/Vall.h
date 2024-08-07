#include <string>
#ifndef VALL_H
#define VALL_H
std::string Vall_cfg = "// KittopiaTech - a Kopernicus Visual Editor\n"
"\n"
"@Kopernicus:NEEDS[!Kopernicus]\n"
"{\n"
"	Body\n"
"	{\n"
"		name = Vall\n"
"		barycenter = False\n"
"		identifier = Squad/Vall\n"
"		implements = \n"
"		finalizeOrbit = False\n"
"		randomMainMenuBody = False\n"
"		contractWeight = 30\n"
"		Properties\n"
"		{\n"
"			description = Vall was one of the last Moons of Jool to be discovered. Frustrated scientists kept attempting to wipe it off the lenses of their telescopes. Eventually after a rash of returned telescopes, Advanced Optics Co. finally decided to just tell them it was an actual object in the sky.\n"
"			radius = 300000\n"
"			geeASL = 0.235080276562617\n"
"			mass = 3.10876554482042E+21\n"
"			gravParameter = 207481499473.751\n"
"			rotates = True\n"
"			rotationPeriod = 105962.088893924\n"
"			tidallyLocked = True\n"
"			initialRotation = 0\n"
"			inverseRotThresholdAltitude = 100000\n"
"			albedo = 0.5\n"
"			emissivity = 0.7\n"
"			coreTemperatureOffset = 40\n"
"			timewarpAltitudeLimits = 0 24500 24500 24500 40000 60000 80000 100000\n"
"			sphereOfInfluence = 2406401.44479404\n"
"			solarRotationPeriod = False\n"
"			navballSwitchRadiusMult = 0.06\n"
"			navballSwitchRadiusMultLow = 0.055\n"
"			biomeMap = BUILTIN/vall_biome\n"
"			nonExactThreshold = -1\n"
"			exactSearch = False\n"
"			useTheInName = False\n"
"			displayName = Vall^N\n"
"			selectable = True\n"
"			RnDVisibility = Visible\n"
"			RnDRotation = False\n"
"			maxZoom = 60000\n"
"			ScienceValues\n"
"			{\n"
"				landedDataValue = 12 // Science multiplier for landed science.\n"
"				splashedDataValue = 1 // Science multiplier for splashed down science.\n"
"				flyingLowDataValue = 1 // Science multiplier for flying low science.\n"
"				flyingHighDataValue = 1 // Science multiplier for flying high science.\n"
"				inSpaceLowDataValue = 9 // Science multiplier for in space low science.\n"
"				inSpaceHighDataValue = 8 // Science multiplier for in space high science.\n"
"				recoveryValue = 8\n"
"				flyingAltitudeThreshold = 18000 // Altitude when \"flying at <body>\" transitions from/to \"from <body>'s upper atmosphere\"\n"
"				spaceAltitudeThreshold = 90000 // Altitude when \"in space low\" transitions from/to \"in space high\"\n"
"			}\n"
"			Biomes\n"
"			{\n"
"				Value\n"
"				{\n"
"					name = Poles // The name of this biome.\n"
"					displayName = Poles // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.745098054,0.968627453,0.988235295,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Midlands // The name of this biome.\n"
"					displayName = Midlands // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.419607848,0.776470602,0.807843149,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Highlands // The name of this biome.\n"
"					displayName = Highlands // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.270588249,0.698039234,0.737254918,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Lowlands // The name of this biome.\n"
"					displayName = Lowlands // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 1,1,1,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Northeast Basin // The name of this biome.\n"
"					displayName = Northeast Basin // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.698039234,0.698039234,0.698039234,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Northwest Basin // The name of this biome.\n"
"					displayName = Northwest Basin // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.588235319,0.588235319,0.588235319,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Southern Basin // The name of this biome.\n"
"					displayName = Southern Basin // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.866666675,0.866666675,0.866666675,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Southern Valleys // The name of this biome.\n"
"					displayName = Southern Valleys // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.78039217,0.78039217,0.78039217,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Mountains // The name of this biome.\n"
"					displayName = Mountains // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.611764729,0.850980401,0.870588243,1 // The color of the biome on the biome map.\n"
"				}\n"
"			}\n"
"		}\n"
"		Orbit\n"
"		{\n"
"			referenceBody = Jool // The body that this body is orbiting around.\n"
"			inclination = 0\n"
"			eccentricity = 0\n"
"			semiMajorAxis = 43152000 // The altitude of the highest point in the orbit\n"
"			longitudeOfAscendingNode = 0 // The position of the highest point on the orbit circle\n"
"			argumentOfPeriapsis = 0\n"
"			meanAnomalyAtEpoch = 0.899999976158142\n"
"			meanAnomalyAtEpochD = 51.5662001957363\n"
"			epoch = 0\n"
"			color = 0.431372553,0.607843161,0.70588237,0.501960814 // The color of the orbit line in the Tracking Station\n"
"			nodeColor = 0.431372553,0.607843161,0.70588237,0.501960814 // The color of the circle that marks the planets current position on the orbit\n"
"			mode = REDRAW_AND_RECALCULATE\n"
"			icon = ALL\n"
"			cameraSmaRatioBounds = 0.12 12\n"
"			period = 105962.088893924\n"
"		}\n"
"		ScaledVersion\n"
"		{\n"
"			type = Vacuum\n"
"			fadeStart = 295000\n"
"			fadeEnd = 300000\n"
"			sphericalModel = False\n"
"			deferMesh = False\n"
"			invisible = False\n"
"			Material\n"
"			{\n"
"				color = 0.604477644,0.604477644,0.604477644,1\n"
"				specColor = 0,0,0,1\n"
"				shininess = 0.078125\n"
"				texture = BUILTIN/gp1icemoon00\n"
"				mainTexScale = 1,1\n"
"				mainTexOffset = 0,0\n"
"				normals = BUILTIN/gp1icemoon01\n"
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
"			fadeStart = 300000\n"
"			fadeEnd = 325000\n"
"			deactivateAltitude = 330000\n"
"			mapMaxHeight = 20000\n"
"			materialType = Vacuum\n"
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
"				contrast = 0.8\n"
"				tintColor = 1,1,1,0\n"
"				texTiling = 2000\n"
"				texPower = 0.36\n"
"				multiPower = 0.25\n"
"				groundTexStart = 5000\n"
"				groundTexEnd = 12000\n"
"				steepTiling = 50\n"
"				steepPower = 2\n"
"				steepTexStart = 100000\n"
"				steepTexEnd = 200000\n"
"				deepTex = BUILTIN/ice\n"
"				deepTexScale = 1,1\n"
"				deepTexOffset = 0,0\n"
"				deepMultiTex = BUILTIN/ice\n"
"				deepMultiTexScale = 1,1\n"
"				deepMultiTexOffset = 0,0\n"
"				deepMultiFactor = 1\n"
"				mainTex = BUILTIN/ice\n"
"				mainTexScale = 1,1\n"
"				mainTexOffset = 0,0\n"
"				mainMultiTex = BUILTIN/terrain_sand00\n"
"				mainMultiTexScale = 1,1\n"
"				mainMultiTexOffset = 0,0\n"
"				mainMultiFactor = 1\n"
"				highTex = BUILTIN/snow\n"
"				highTexScale = 1,1\n"
"				highTexOffset = 0,0\n"
"				highMultiTex = BUILTIN/terrain_sand00\n"
"				highMultiTexScale = 1,1\n"
"				highMultiTexOffset = 0,0\n"
"				highMultiFactor = 1\n"
"				snowTex = BUILTIN/snow\n"
"				snowTexScale = 1,1\n"
"				snowTexOffset = 0,0\n"
"				snowMultiTex = BUILTIN/terrain_sand00\n"
"				snowMultiTexScale = 1,1\n"
"				snowMultiTexOffset = 0,0\n"
"				snowMultiFactor = 1\n"
"				steepTex = BUILTIN/snow\n"
"				steepTexScale = 1,1\n"
"				steepTexOffset = 0,0\n"
"				deepStart = 0\n"
"				deepEnd = 0.3\n"
"				mainLoStart = 0.3\n"
"				mainLoEnd = 0.4\n"
"				mainHiStart = 0.4\n"
"				mainHiEnd = 0.6\n"
"				hiLoStart = 0.6\n"
"				hiLoEnd = 0.8\n"
"				hiHiStart = 0.8\n"
"				hiHiEnd = 0.9\n"
"				snowStart = 0.9\n"
"				snowEnd = 1\n"
"				planetOpacity = 1\n"
"			}\n"
"			FallbackMaterial\n"
"			{\n"
"				saturation = 1\n"
"				contrast = 0.8\n"
"				tintColor = 1,1,1,0\n"
"				texTiling = 2000\n"
"				texPower = 0.36\n"
"				multiPower = 0.25\n"
"				groundTexStart = 5000\n"
"				groundTexEnd = 12000\n"
"				multiFactor = 0.5\n"
"				mainTex = BUILTIN/RockyGround\n"
"				mainTexScale = 1,1\n"
"				mainTexOffset = 0,0\n"
"				planetOpacity = 1\n"
"			}\n"
"			Mods\n"
"			{\n"
"				VertexSimplexHeightAbsolute\n"
"				{\n"
"					deformity = 3000\n"
"					frequency = 3\n"
"					octaves = 8\n"
"					persistence = 0.5\n"
"					seed = 56499778\n"
"					order = 10\n"
"					enabled = True\n"
"					name = _Height\n"
"				}\n"
"				VertexHeightNoise\n"
"				{\n"
"					deformity = 2000\n"
"					frequency = 4\n"
"					octaves = 8\n"
"					persistence = 0.5\n"
"					seed = 56930927\n"
"					noiseType = RiggedMultifractal\n"
"					mode = Low\n"
"					lacunarity = 2\n"
"					order = 11\n"
"					enabled = True\n"
"					name = _Height\n"
"				}\n"
"				VertexHeightMap\n"
"				{\n"
"					map = BUILTIN/genericoffset\n"
"					offset = 0\n"
"					deformity = 1000\n"
"					scaleDeformityByRadius = False\n"
"					order = 9\n"
"					enabled = True\n"
"					name = _Height\n"
"				}\n"
"				VertexSimplexHeightAbsolute\n"
"				{\n"
"					deformity = 100\n"
"					frequency = 25\n"
"					octaves = 6\n"
"					persistence = 0.5\n"
"					seed = 8008135\n"
"					order = 12\n"
"					enabled = True\n"
"					name = _Height\n"
"				}\n"
"				VertexHeightMap\n"
"				{\n"
"					map = BUILTIN/icemoon_mountains\n"
"					offset = 0\n"
"					deformity = 2000\n"
"					scaleDeformityByRadius = False\n"
"					order = 100\n"
"					enabled = True\n"
"					name = _Height\n"
"				}\n"
"				AltitudeAlpha\n"
"				{\n"
"					atmosphereDepth = 8000\n"
"					invert = False\n"
"					order = 999999999\n"
"					enabled = True\n"
"					name = _Material_ModProjection\n"
"				}\n"
"				HeightColorMap\n"
"				{\n"
"					blend = 1\n"
"					order = 500\n"
"					enabled = True\n"
"					name = _Color\n"
"					LandClasses\n"
"					{\n"
"						Value\n"
"						{\n"
"							name = Ice\n"
"							color = 0.115671635,0.195087969,0.231343269,1\n"
"							altitudeStart = -1\n"
"							altitudeEnd = 0.600000023841858\n"
"							lerpToNext = True\n"
"							delete = False\n"
"						}\n"
"						Value\n"
"						{\n"
"							name = Snow\n"
"							color = 0.503757417,0.670200825,0.731343269,1\n"
"							altitudeStart = 0.600000023841858\n"
"							altitudeEnd = 0.699999988079071\n"
"							lerpToNext = True\n"
"							delete = False\n"
"						}\n"
"						Value\n"
"						{\n"
"							name = Snow\n"
"							color = 0.748277843,0.868349135,0.902985096,1\n"
"							altitudeStart = 0.699999988079071\n"
"							altitudeEnd = 1\n"
"							lerpToNext = False\n"
"							delete = False\n"
"						}\n"
"					}\n"
"				}\n"
"				VertexSimplexNoiseColor\n"
"				{\n"
"					blend = 0.3\n"
"					colorStart = 0.274258614,0.283582091,0.238962531,0\n"
"					colorEnd = 0.634328365,0.628634572,0.538957298,0\n"
"					frequency = 12\n"
"					octaves = 8\n"
"					persistence = 0.5\n"
"					seed = 777834934\n"
"					order = 501\n"
"					enabled = True\n"
"					name = _Color\n"
"				}\n"
"				LandControl\n"
"				{\n"
"					altitudeBlend = 0\n"
"					altitudeFrequency = 1\n"
"					altitudeOctaves = 1\n"
"					altitudePersistance = 1\n"
"					altitudeSeed = 1\n"
"					createColors = False\n"
"					createScatter = True\n"
"					heightMap = BUILTIN/icemoon_mountains\n"
"					latitudeBlend = 0\n"
"					latitudeFrequency = 1\n"
"					latitudeOctaves = 1\n"
"					latitudePersistance = 1\n"
"					latitudeSeed = 1\n"
"					longitudeBlend = 0\n"
"					longitudeFrequency = 1\n"
"					longitudeOctaves = 1\n"
"					longitudePersistance = 1\n"
"					longitudeSeed = 1\n"
"					useHeightMap = False\n"
"					vHeightMax = 10000\n"
"					order = 999999\n"
"					enabled = True\n"
"					name = Scatter\n"
"					Scatters\n"
"					{\n"
"						Value\n"
"						{\n"
"							name = boulder\n"
"							materialType = BumpedDiffuse\n"
"							material = BUILTIN/ice_cliff\n"
"							mesh = BUILTIN/boulder\n"
"							castShadows = True\n"
"							densityFactor = 1\n"
"							maxCache = 512\n"
"							maxCacheDelta = 32\n"
"							maxLevelOffset = 0\n"
"							maxScale = 2\n"
"							maxScatter = 20\n"
"							maxSpeed = 1000\n"
"							minScale = 0.1\n"
"							recieveShadows = True\n"
"							seed = 231123\n"
"							verticalOffset = 0\n"
"							instancing = False\n"
"							rotation = 0 360\n"
"							useBetterDensity = False\n"
"							spawnChance = 1\n"
"							ignoreDensityGameSetting = False\n"
"							densityVariance = -0.5 0.5\n"
"							delete = False\n"
"							Material\n"
"							{\n"
"								color = 1,1,1,1\n"
"								mainTex = BUILTIN/ice\n"
"								mainTexScale = 1,1\n"
"								mainTexOffset = 0,0\n"
"								bumpMap = BUILTIN/bouldernormal\n"
"								bumpMapScale = 1,1\n"
"								bumpMapOffset = 0,0\n"
"							}\n"
"						}\n"
"					}\n"
"					LandClasses\n"
"					{\n"
"						Value\n"
"						{\n"
"							alterApparentHeight = 0\n"
"							alterRealHeight = 0\n"
"							color = 0,0,0,0\n"
"							coverageBlend = 0\n"
"							coverageFrequency = 1\n"
"							coverageOctaves = 1\n"
"							coveragePersistance = 1\n"
"							coverageSeed = 1\n"
"							name = Base\n"
"							latDelta = 1\n"
"							latitudeDouble = False\n"
"							lonDelta = 1\n"
"							minimumRealHeight = 0\n"
"							noiseBlend = 0\n"
"							noiseColor = 0,0,0,0\n"
"							noiseFrequency = 1\n"
"							noiseOctaves = 1\n"
"							noisePersistance = 1\n"
"							noiseSeed = 1\n"
"							delete = False\n"
"							altitudeRange\n"
"							{\n"
"								endEnd = 1\n"
"								endStart = 1\n"
"								startEnd = 0\n"
"								startStart = 0\n"
"							}\n"
"							latitudeDoubleRange\n"
"							{\n"
"								endEnd = 1\n"
"								endStart = 1\n"
"								startEnd = 0\n"
"								startStart = 0\n"
"							}\n"
"							latitudeRange\n"
"							{\n"
"								endEnd = 1\n"
"								endStart = 1\n"
"								startEnd = 0\n"
"								startStart = 0\n"
"							}\n"
"							longitudeRange\n"
"							{\n"
"								endEnd = 2\n"
"								endStart = 2\n"
"								startEnd = -1\n"
"								startStart = -1\n"
"							}\n"
"							Scatters\n"
"							{\n"
"								Value\n"
"								{\n"
"									density = 0.200000002980232\n"
"									scatterName = boulder\n"
"									delete = False\n"
"								}\n"
"							}\n"
"						}\n"
"					}\n"
"				}\n"
"				City\n"
"				{\n"
"					debugOrientated = False\n"
"					frameDelta = 1\n"
"					randomizeOnSphere = False\n"
"					reorientToSphere = True\n"
"					reorientFinalAngle = 190\n"
"					reorientInitialUp = 0,1,0\n"
"					repositionRadial = 16294.5498,-261408.797,149497.906\n"
"					repositionRadiusOffset = 1575\n"
"					repositionToSphere = True\n"
"					repositionToSphereSurface = False\n"
"					repositionToSphereSurfaceAddHeight = False\n"
"					commnetStation = False\n"
"					isKSC = False\n"
"					order = 100\n"
"					enabled = True\n"
"					name = Icehenge\n"
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