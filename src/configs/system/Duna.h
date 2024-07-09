#include <string>
#ifndef DUNA_H
#define DUNA_H
std::string Duna_cfg = "// KittopiaTech - a Kopernicus Visual Editor\n"
"\n"
"@Kopernicus:NEEDS[!Kopernicus]\n"
"{\n"
"	Body\n"
"	{\n"
"		name = Duna\n"
"		barycenter = False\n"
"		identifier = Squad/Duna\n"
"		implements = \n"
"		finalizeOrbit = False\n"
"		randomMainMenuBody = False\n"
"		contractWeight = 30\n"
"		Properties\n"
"		{\n"
"			description = Also known as the red dot that you can see if you squint at it really hard, Duna has long been a wonder to Kerbalkind. The planet has been held in much awe, due to its striking red color and stark contrast to the color green.\n"
"			radius = 320000\n"
"			geeASL = 0.300102493404406\n"
"			mass = 4.51542702477492E+21\n"
"			gravParameter = 301363211975.098\n"
"			rotates = True\n"
"			rotationPeriod = 65517.859375\n"
"			tidallyLocked = False\n"
"			initialRotation = 90\n"
"			inverseRotThresholdAltitude = 100000\n"
"			albedo = 0.170000001788139\n"
"			emissivity = 0.829999983310699\n"
"			coreTemperatureOffset = 0\n"
"			timewarpAltitudeLimits = 0 30000 30000 60000 100000 300000 600000 800000\n"
"			sphereOfInfluence = 47921949.369738\n"
"			solarRotationPeriod = False\n"
"			navballSwitchRadiusMult = 0.06\n"
"			navballSwitchRadiusMultLow = 0.055\n"
"			biomeMap = BUILTIN/duna_biome\n"
"			nonExactThreshold = -1\n"
"			exactSearch = False\n"
"			useTheInName = False\n"
"			displayName = Duna^N\n"
"			selectable = True\n"
"			RnDVisibility = Visible\n"
"			RnDRotation = False\n"
"			maxZoom = 60000\n"
"			ScienceValues\n"
"			{\n"
"				landedDataValue = 8 // Science multiplier for landed science.\n"
"				splashedDataValue = 1 // Science multiplier for splashed down science.\n"
"				flyingLowDataValue = 5 // Science multiplier for flying low science.\n"
"				flyingHighDataValue = 5 // Science multiplier for flying high science.\n"
"				inSpaceLowDataValue = 7 // Science multiplier for in space low science.\n"
"				inSpaceHighDataValue = 5 // Science multiplier for in space high science.\n"
"				recoveryValue = 5\n"
"				flyingAltitudeThreshold = 12000 // Altitude when \"flying at <body>\" transitions from/to \"from <body>'s upper atmosphere\"\n"
"				spaceAltitudeThreshold = 140000 // Altitude when \"in space low\" transitions from/to \"in space high\"\n"
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
"					name = Midlands // The name of this biome.\n"
"					displayName = Midlands // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.988235295,0.549019635,0.349019617,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Lowlands // The name of this biome.\n"
"					displayName = Lowlands // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.913725495,0.41568628,0.192156866,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Craters // The name of this biome.\n"
"					displayName = Craters // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.717647076,0.396078438,0.00392156886,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Highlands // The name of this biome.\n"
"					displayName = Highlands // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 1,0.666666687,0.513725519,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Midland Sea // The name of this biome.\n"
"					displayName = Midland Sea // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 1,0.568627477,0.00784313772,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Northern Basin // The name of this biome.\n"
"					displayName = Northeast Basin // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.709803939,0.160784319,0.13333334,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Southern Basin // The name of this biome.\n"
"					displayName = Southern Basin // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.823529422,0.290196091,0.262745112,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Northern Shelf // The name of this biome.\n"
"					displayName = Northern Shelf // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.580392182,0.0705882385,0.0431372561,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Midland Canyon // The name of this biome.\n"
"					displayName = Midland Canyon // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.733333349,0.345098048,0.0352941193,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Eastern Canyon // The name of this biome.\n"
"					displayName = Eastern Canyon // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.600000024,0.266666681,0,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Western Canyon // The name of this biome.\n"
"					displayName = Western Canyon // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.435294122,0.192156866,0,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Polar Highlands // The name of this biome.\n"
"					displayName = Polar Highlands // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.90196079,0.90196079,0.90196079,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Polar Craters // The name of this biome.\n"
"					displayName = Polar Craters // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.745098054,0.745098054,0.745098054,1 // The color of the biome on the biome map.\n"
"				}\n"
"			}\n"
"		}\n"
"		Orbit\n"
"		{\n"
"			referenceBody = Sun // The body that this body is orbiting around.\n"
"			inclination = 0.0599999986588955\n"
"			eccentricity = 0.0509999990463257\n"
"			semiMajorAxis = 20726155264 // The altitude of the highest point in the orbit\n"
"			longitudeOfAscendingNode = 135.5 // The position of the highest point on the orbit circle\n"
"			argumentOfPeriapsis = 0\n"
"			meanAnomalyAtEpoch = 3.14000010490417\n"
"			meanAnomalyAtEpochD = 179.908753681645\n"
"			epoch = 0\n"
"			color = 0.639215708,0.247058824,0.156862751,0.501960814 // The color of the orbit line in the Tracking Station\n"
"			nodeColor = 0.639215708,0.247058824,0.156862751,0.501960814 // The color of the circle that marks the planets current position on the orbit\n"
"			mode = REDRAW_AND_RECALCULATE\n"
"			icon = ALL\n"
"			cameraSmaRatioBounds = 0.03 25\n"
"			period = 17315400.1425698\n"
"		}\n"
"		ScaledVersion\n"
"		{\n"
"			type = Atmospheric\n"
"			fadeStart = 30000\n"
"			fadeEnd = 100000\n"
"			sphericalModel = False\n"
"			deferMesh = False\n"
"			invisible = False\n"
"			Material\n"
"			{\n"
"				color = 1,1,1,1\n"
"				specColor = 0.0294117928,0.0294117928,0.0294117928,1\n"
"				shininess = 0.051\n"
"				texture = BUILTIN/Duna [Albedo]\n"
"				mainTexScale = 1,1\n"
"				mainTexOffset = 0,0\n"
"				normals = BUILTIN/Duna5_01\n"
"				bumpMapScale = 1,1\n"
"				bumpMapOffset = 0,0\n"
"				opacity = 1\n"
"				rimPower = 1.62\n"
"				rimBlend = 0.3\n"
"				rimColorRamp = BUILTIN/desert_atmogradient\n"
"				rimColorRampScale = 1,1\n"
"				rimColorRampOffset = 0,0\n"
"				localLightDirection = 0.640664756,1.59069477E-05,-0.767820835,0\n"
"				resourceMapScale = 1,1\n"
"				resourceMapOffset = 0,0\n"
"			}\n"
"		}\n"
"		Atmosphere\n"
"		{\n"
"			enabled = True // Whether the body has an atmosphere.\n"
"			oxygen = False // Whether the atmosphere contains oxygen.\n"
"			staticDensityASL = 0.149935108881759 // Atmospheric density at sea level. Used to calculate the parameters of the atmosphere if no curves are used.\n"
"			adiabaticIndex = 1.20000004768372\n"
"			atmosphereDepth = 50000 // The height of the atmosphere.\n"
"			gasMassLapseRate = 3.04406677337964\n"
"			atmosphereMolarMass = 0.0430000014603138\n"
"			pressureCurveIsNormalized = False // Whether the pressure curve should use absolute (0 - atmosphereDepth) or relative (0 - 1) values.\n"
"			staticPressureASL = 6.75500011444092 // The static pressure at sea level. Used to calculate the parameters of the atmosphere if no curves are used.\n"
"			temperatureCurveIsNormalized = False // Whether the temperature curve should use absolute (0 - atmosphereDepth) or relative (0 - 1) values.\n"
"			temperatureLapseRate = 0.005\n"
"			temperatureSeaLevel = 250 // The static temperature at sea level. Used to calculate the parameters of the atmosphere if no curves are used.\n"
"			ambientColor = 0.323529422,0.220170617,0.173659176,1 // All objects inside of the atmosphere will slightly shine in this color.\n"
"			lightColor = 0.509465635,0.588402689,0.643137276,0\n"
"			addAFG = True\n"
"			pressureCurve // Assigns a pressure value to a height value inside of the atmosphere.\n"
"			{\n"
"				key = 0 6.755 0 -0.0007\n"
"				key = 12000 1.276 -0.000223 -0.000223\n"
"				key = 20000 0.241 -4.22E-05 -4.22E-05\n"
"				key = 35000 0.015 -2.787075E-06 -2.787075E-06\n"
"				key = 50000 0 0 0\n"
"			}\n"
"			temperatureCurve // Assigns a temperature value to a height value inside of the atmosphere.\n"
"			{\n"
"				key = 0 233 0 -0.0004261126\n"
"				key = 1000 232.8 -0.000573325 -0.000573325\n"
"				key = 25000 153.7 -0.001877083 -0.001877083\n"
"				key = 30000 150 0 0\n"
"				key = 45000 150 0 0\n"
"				key = 50000 160 0.003746914 0\n"
"			}\n"
"			temperatureSunMultCurve\n"
"			{\n"
"				key = 0 1 0 0\n"
"				key = 1000 1 0 0\n"
"				key = 25000 0 0 0\n"
"				key = 45000 0 0 0\n"
"				key = 47350 0.4551345 0.0006885778 0.0006885778\n"
"				key = 50000 1 0 0\n"
"			}\n"
"			temperatureLatitudeBiasCurve\n"
"			{\n"
"				key = 0 20 0 -0.0957164\n"
"				key = 50 0 -0.950278 -0.950278\n"
"				key = 70 -30 -1.955704 -1.955704\n"
"				key = 90 -50 -0.02418368 0\n"
"			}\n"
"			temperatureLatitudeSunMultCurve\n"
"			{\n"
"				key = 0 18 0 0.06497125\n"
"				key = 40 25 0 0\n"
"				key = 65 20 -0.5202533 -0.5202533\n"
"				key = 90 5 0 0\n"
"			}\n"
"			temperatureAxialSunBiasCurve\n"
"			{\n"
"				key = 0 0 0 0\n"
"			}\n"
"			temperatureAxialSunMultCurve\n"
"			{\n"
"				key = 0 0 0 0\n"
"			}\n"
"			temperatureEccentricityBiasCurve\n"
"			{\n"
"				key = 0 0 0 0\n"
"			}\n"
"			AtmosphereFromGround // The atmosphere effect that is seen on the horizon.\n"
"			{\n"
"				DEBUG_alwaysUpdateAll = False // Whether all parameters should get recalculated and reapplied every frame.\n"
"				doScale = True // Whether the atmosphere mesh should be scaled automatically.\n"
"				innerRadius = 322920 // The lower bound of the atmosphere effect.\n"
"				invWaveLength = 14.8436403,8.34259987,5.84501028,0.5\n"
"				outerRadius = 331200 // The upper bound of the atmosphere effect.\n"
"				samples = 4\n"
"				transformScale = 1.03499997,1.03499997,1.03499997 // The scale of the atmosphere mesh in all three directions. Automatically set if doScale is enabled.\n"
"				waveLength = 0.509465635,0.588402689,0.643137276,0\n"
"				outerRadiusMult = 1.035 // A multiplier that automatically sets outerRadius based on the planets radius.\n"
"				innerRadiusMult = 0.975 // A multiplier that automatically sets innerRadius based on the planets radius.\n"
"			}\n"
"		}\n"
"		PQS\n"
"		{\n"
"			minLevel = 2\n"
"			maxLevel = 9\n"
"			minDetailDistance = 8\n"
"			maxQuadLengthsPerFrame = 0.03\n"
"			fadeStart = 50000\n"
"			fadeEnd = 110000\n"
"			deactivateAltitude = 120000\n"
"			mapMaxHeight = 10500\n"
"			materialType = AtmosphericTriplanarZoomRotation\n"
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
"				factor = 7.5\n"
"				factorBlendWidth = 0.05\n"
"				factorRotation = 135\n"
"				saturation = 1.1\n"
"				contrast = 1\n"
"				tintColor = 1,1,1,0\n"
"				specularColor = 0.0367646813,0.0367646813,0.0367646813,0.200000003\n"
"				albedoBrightness = 1.6\n"
"				steepPower = 1.2\n"
"				steepTexStart = 12500\n"
"				steepTexEnd = 36500\n"
"				steepTex = BUILTIN/Duna Cliff [Diffuse]\n"
"				steepTexScale = 1,1\n"
"				steepTexOffset = 0,0\n"
"				steepBumpMap = BUILTIN/Duna Boulder [Normal]\n"
"				steepBumpMapScale = 1,1\n"
"				steepBumpMapOffset = 0,0\n"
"				steepNearTiling = 1000\n"
"				steepTiling = 100\n"
"				lowTex = BUILTIN/Duna Floor - low [Diffuse]\n"
"				lowTexScale = 1,1\n"
"				lowTexOffset = 0,0\n"
"				lowTiling = 38000\n"
"				midTex = BUILTIN/Duna Floor [Diffuse]\n"
"				midTexScale = 1,1\n"
"				midTexOffset = 0,0\n"
"				midTiling = 38000\n"
"				midBumpMap = BUILTIN/Duna Floor [Normal]\n"
"				midBumpMapScale = 1,1\n"
"				midBumpMapOffset = 0,0\n"
"				midBumpTiling = 38000\n"
"				highTexScale = 1,1\n"
"				highTexOffset = 0,0\n"
"				highTiling = 1\n"
"				lowStart = 0\n"
"				lowEnd = 0.3\n"
"				highStart = 1\n"
"				highEnd = 1\n"
"				globalDensity = -5E-06\n"
"				fogColorRamp = BUILTIN/desert_atmogradient\n"
"				fogColorRampScale = 1,1\n"
"				fogColorRampOffset = 0,0\n"
"				planetOpacity = 0\n"
"				oceanFogDistance = 1000\n"
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
"				VertexHeightMap\n"
"				{\n"
"					map = BUILTIN/desertplanet_height\n"
"					offset = 0\n"
"					deformity = 6000\n"
"					scaleDeformityByRadius = False\n"
"					order = 10\n"
"					enabled = True\n"
"					name = _Height\n"
"				}\n"
"				VertexSimplexHeightAbsolute\n"
"				{\n"
"					deformity = 500\n"
"					frequency = 12\n"
"					octaves = 6\n"
"					persistence = 0.800000011920929\n"
"					seed = 23893455\n"
"					order = 12\n"
"					enabled = True\n"
"					name = _Height\n"
"				}\n"
"				VertexHeightNoiseVertHeightCurve2\n"
"				{\n"
"					deformity = 1000\n"
"					ridgedAddFrequency = 12\n"
"					ridgedAddLacunarity = 2\n"
"					ridgedAddOctaves = 4\n"
"					ridgedAddSeed = 1212\n"
"					ridgedMode = Low\n"
"					ridgedSubFrequency = 12\n"
"					ridgedSubLacunarity = 2\n"
"					ridgedSubOctaves = 4\n"
"					ridgedSubSeed = 23234423\n"
"					simplexFrequency = 12\n"
"					simplexHeightEnd = 6500\n"
"					simplexHeightStart = 0\n"
"					simplexOctaves = 4\n"
"					simplexPersistence = 0.600000023841858\n"
"					simplexSeed = 654786\n"
"					order = 13\n"
"					enabled = True\n"
"					name = _Height\n"
"					simplexCurve\n"
"					{\n"
"						key = 0 0 0.1466263 0.1466263\n"
"						key = 0.7922793 0.2448772 0.6761706 1.497418\n"
"						key = 1 1 6.106985 6.106985\n"
"					}\n"
"				}\n"
"				VertexHeightNoiseVertHeightCurve2\n"
"				{\n"
"					deformity = 1000\n"
"					ridgedAddFrequency = 18\n"
"					ridgedAddLacunarity = 2\n"
"					ridgedAddOctaves = 4\n"
"					ridgedAddSeed = 1212\n"
"					ridgedMode = Low\n"
"					ridgedSubFrequency = 18\n"
"					ridgedSubLacunarity = 2\n"
"					ridgedSubOctaves = 4\n"
"					ridgedSubSeed = 23234423\n"
"					simplexFrequency = 18\n"
"					simplexHeightEnd = 7500\n"
"					simplexHeightStart = 0\n"
"					simplexOctaves = 4\n"
"					simplexPersistence = 0.600000023841858\n"
"					simplexSeed = 654786\n"
"					order = 14\n"
"					enabled = True\n"
"					name = _Height\n"
"					simplexCurve\n"
"					{\n"
"						key = 0 0 2 2\n"
"						key = 1 1 0 0\n"
"					}\n"
"				}\n"
"				VertexHeightNoiseVertHeightCurve2\n"
"				{\n"
"					deformity = 2000\n"
"					ridgedAddFrequency = 22\n"
"					ridgedAddLacunarity = 3\n"
"					ridgedAddOctaves = 6\n"
"					ridgedAddSeed = 534543\n"
"					ridgedMode = Low\n"
"					ridgedSubFrequency = 22\n"
"					ridgedSubLacunarity = 3\n"
"					ridgedSubOctaves = 6\n"
"					ridgedSubSeed = 435436\n"
"					simplexFrequency = 22\n"
"					simplexHeightEnd = 8500\n"
"					simplexHeightStart = 0\n"
"					simplexOctaves = 4\n"
"					simplexPersistence = 0.600000023841858\n"
"					simplexSeed = 546567\n"
"					order = 15\n"
"					enabled = True\n"
"					name = _Height\n"
"					simplexCurve\n"
"					{\n"
"						key = 0 0 0 0\n"
"						key = 1 1 0 0\n"
"					}\n"
"				}\n"
"				AltitudeAlpha\n"
"				{\n"
"					atmosphereDepth = 11500\n"
"					invert = False\n"
"					order = 999999999\n"
"					enabled = True\n"
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
"					heightMap = BUILTIN/desertplanet_height\n"
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
"							material = BUILTIN/red_cliff\n"
"							mesh = BUILTIN/boulder\n"
"							castShadows = True\n"
"							densityFactor = 0.25\n"
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
"								color = 0.595588207,0.429113448,0.367863297,1\n"
"								mainTex = BUILTIN/Duna Boulder [Diffuse]\n"
"								mainTexScale = 2,2\n"
"								mainTexOffset = 0,0\n"
"								cutoff = 0.5\n"
"								glossiness = 0.5\n"
"								glossMapScale = 1\n"
"								smoothnessTextureChannel = AlbedoAlpha\n"
"								specColor = 0.0735294223,0.0735294223,0.0735294223,1\n"
"								metallicGlossMapScale = 1,1\n"
"								metallicGlossMapOffset = 0,0\n"
"								specularHighlights = True\n"
"								glossyReflections = True\n"
"								bumpScale = 1\n"
"								bumpMap = BUILTIN/Duna Boulder [Normal]\n"
"								bumpMapScale = 2,2\n"
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
"						Value\n"
"						{\n"
"							name = iceboulder\n"
"							materialType = StandardSpecular\n"
"							material = BUILTIN/snowboulder\n"
"							mesh = BUILTIN/boulder\n"
"							castShadows = True\n"
"							densityFactor = 0.25\n"
"							maxCache = 512\n"
"							maxCacheDelta = 32\n"
"							maxLevelOffset = 0\n"
"							maxScale = 4\n"
"							maxScatter = 20\n"
"							maxSpeed = 1000\n"
"							minScale = 0.1\n"
"							recieveShadows = True\n"
"							seed = 324234645\n"
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
"							color = 0.470149279,0.180532217,0.0969888344,0\n"
"							coverageBlend = 0.5\n"
"							coverageFrequency = 8\n"
"							coverageOctaves = 3\n"
"							coveragePersistance = 0.2\n"
"							coverageSeed = 34535345\n"
"							name = Badlands\n"
"							latDelta = 1\n"
"							latitudeDouble = False\n"
"							lonDelta = 1\n"
"							minimumRealHeight = 0\n"
"							noiseBlend = 0.8\n"
"							noiseColor = 0.335820913,0.19791387,0.120942496,0\n"
"							noiseFrequency = 2\n"
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
"									density = 0.25\n"
"									scatterName = boulder\n"
"									delete = False\n"
"								}\n"
"							}\n"
"						}\n"
"						Value\n"
"						{\n"
"							alterApparentHeight = 0\n"
"							alterRealHeight = 0\n"
"							color = 0.283582091,0.0993807092,0.0677210912,0\n"
"							coverageBlend = 0.01\n"
"							coverageFrequency = 8\n"
"							coverageOctaves = 3\n"
"							coveragePersistance = 0.9\n"
"							coverageSeed = 34535345\n"
"							name = Craters\n"
"							latDelta = 1\n"
"							latitudeDouble = False\n"
"							lonDelta = 1\n"
"							minimumRealHeight = 0\n"
"							noiseBlend = 0.1\n"
"							noiseColor = 0.216417909,0.150523514,0.134049892,0\n"
"							noiseFrequency = 9\n"
"							noiseOctaves = 6\n"
"							noisePersistance = 0.7\n"
"							noiseSeed = 45656745\n"
"							delete = False\n"
"							altitudeRange\n"
"							{\n"
"								endEnd = 1\n"
"								endStart = 0\n"
"								startEnd = -10\n"
"								startStart = -10\n"
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
"									density = 0.5\n"
"									scatterName = boulder\n"
"									delete = False\n"
"								}\n"
"							}\n"
"						}\n"
"						Value\n"
"						{\n"
"							alterApparentHeight = 100\n"
"							alterRealHeight = 100\n"
"							color = 0.865671635,0.865671635,0.865671635,0\n"
"							coverageBlend = 0\n"
"							coverageFrequency = 8\n"
"							coverageOctaves = 3\n"
"							coveragePersistance = 0.8\n"
"							coverageSeed = 93747294\n"
"							name = Ice Caps\n"
"							latDelta = 0\n"
"							latitudeDouble = True\n"
"							lonDelta = 1\n"
"							minimumRealHeight = 0.100000001490116\n"
"							noiseBlend = 0.2\n"
"							noiseColor = 0.768656731,0.768656731,0.768656731,0\n"
"							noiseFrequency = 9\n"
"							noiseOctaves = 6\n"
"							noisePersistance = 0.2\n"
"							noiseSeed = 6288946\n"
"							delete = False\n"
"							altitudeRange\n"
"							{\n"
"								endEnd = 10\n"
"								endStart = 10\n"
"								startEnd = -10\n"
"								startStart = -10\n"
"							}\n"
"							latitudeDoubleRange\n"
"							{\n"
"								endEnd = 11\n"
"								endStart = 11\n"
"								startEnd = 0.754999995231628\n"
"								startStart = 0.75\n"
"							}\n"
"							latitudeRange\n"
"							{\n"
"								endEnd = 0.25\n"
"								endStart = 0.245000004768372\n"
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
"									density = -2\n"
"									scatterName = boulder\n"
"									delete = False\n"
"								}\n"
"								Value\n"
"								{\n"
"									density = 1\n"
"									scatterName = iceboulder\n"
"									delete = False\n"
"								}\n"
"							}\n"
"						}\n"
"						Value\n"
"						{\n"
"							alterApparentHeight = 0\n"
"							alterRealHeight = 0\n"
"							color = 0.134328365,0.112456717,0.104254849,0\n"
"							coverageBlend = 0.5\n"
"							coverageFrequency = 4\n"
"							coverageOctaves = 5\n"
"							coveragePersistance = 0.2\n"
"							coverageSeed = 93747294\n"
"							name = Frost\n"
"							latDelta = 1\n"
"							latitudeDouble = True\n"
"							lonDelta = 1\n"
"							minimumRealHeight = 0.100000001490116\n"
"							noiseBlend = 1\n"
"							noiseColor = 0.074626863,0.0649333894,0.0640454441,0\n"
"							noiseFrequency = 9\n"
"							noiseOctaves = 6\n"
"							noisePersistance = 0.2\n"
"							noiseSeed = 6288946\n"
"							delete = False\n"
"							altitudeRange\n"
"							{\n"
"								endEnd = 0.150000005960464\n"
"								endStart = 0.100000001490116\n"
"								startEnd = 0.100000001490116\n"
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
"						}\n"
"					}\n"
"				}\n"
"				VertexColorMapBlend\n"
"				{\n"
"					map = BUILTIN/duna_coloraddition\n"
"					blend = 0.5\n"
"					order = 9999993\n"
"					enabled = True\n"
"					name = _LandClass\n"
"				}\n"
"				VertexSimplexNoiseColor\n"
"				{\n"
"					blend = 0.125\n"
"					colorStart = 1,1,1,1\n"
"					colorEnd = 0,0,0,1\n"
"					frequency = 24\n"
"					octaves = 4\n"
"					persistence = 0.600000023841858\n"
"					seed = 452635\n"
"					order = 9999992\n"
"					enabled = True\n"
"					name = _LandClass\n"
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
"				City\n"
"				{\n"
"					debugOrientated = False\n"
"					frameDelta = 1\n"
"					randomizeOnSphere = False\n"
"					reorientToSphere = True\n"
"					reorientFinalAngle = 230\n"
"					reorientInitialUp = 0,1,0\n"
"					repositionRadial = 24275.75,94091.4766,-305676.094\n"
"					repositionRadiusOffset = 510\n"
"					repositionToSphere = True\n"
"					repositionToSphereSurface = True\n"
"					repositionToSphereSurfaceAddHeight = False\n"
"					commnetStation = False\n"
"					isKSC = False\n"
"					order = 100\n"
"					enabled = True\n"
"					name = Face\n"
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
"				City\n"
"				{\n"
"					debugOrientated = False\n"
"					frameDelta = 1\n"
"					randomizeOnSphere = False\n"
"					reorientToSphere = True\n"
"					reorientFinalAngle = 0\n"
"					reorientInitialUp = 0,1,0\n"
"					repositionRadial = 242934.5,-162286.297,-133611.5\n"
"					repositionRadiusOffset = -5\n"
"					repositionToSphere = True\n"
"					repositionToSphereSurface = True\n"
"					repositionToSphereSurfaceAddHeight = True\n"
"					commnetStation = False\n"
"					isKSC = False\n"
"					order = 100\n"
"					enabled = True\n"
"					name = MSL\n"
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
"				MapDecal\n"
"				{\n"
"					absolute = False\n"
"					absoluteOffset = 0\n"
"					angle = 0\n"
"					colorMap = BUILTIN/pyramidcolor\n"
"					cullBlack = False\n"
"					DEBUG_HighlightInclusion = False\n"
"					heightMap = BUILTIN/pyramid\n"
"					heightMapDeformity = 100\n"
"					position = -123617.5,-294525.688,-42850.8008\n"
"					removeScatter = False\n"
"					radius = 400\n"
"					smoothColor = 0.125\n"
"					smoothHeight = 0.125\n"
"					useAlphaHeightSmoothing = False\n"
"					order = 8000\n"
"					enabled = True\n"
"					name = Pyramid\n"
"				}\n"
"				City\n"
"				{\n"
"					debugOrientated = False\n"
"					frameDelta = 1\n"
"					randomizeOnSphere = False\n"
"					reorientToSphere = True\n"
"					reorientFinalAngle = 0\n"
"					reorientInitialUp = 0,1,0\n"
"					repositionRadial = -123617.5,-294525.688,-42850.8008\n"
"					repositionRadiusOffset = 0\n"
"					repositionToSphere = True\n"
"					repositionToSphereSurface = True\n"
"					repositionToSphereSurfaceAddHeight = False\n"
"					commnetStation = False\n"
"					isKSC = False\n"
"					order = 8001\n"
"					enabled = True\n"
"					name = Pyramid\n"
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