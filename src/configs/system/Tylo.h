#include <string>
#ifndef TYLO_H
#define TYLO_H
std::string Tylo_cfg = "// KittopiaTech - a Kopernicus Visual Editor\n"
"\n"
"@Kopernicus:NEEDS[!Kopernicus]\n"
"{\n"
"	Body\n"
"	{\n"
"		name = Tylo\n"
"		barycenter = False\n"
"		identifier = Squad/Tylo\n"
"		implements = \n"
"		finalizeOrbit = False\n"
"		randomMainMenuBody = False\n"
"		contractWeight = 30\n"
"		Properties\n"
"		{\n"
"			description = Tylo was the first moon of Jool to be discovered by the Kerbal Astronomical Society. After many failed attempts to take a flawless picture of Jool to hang on the office walls, it was finally discovered that the wandering white smear was indeed a moon.Scientists speculate that the view from the surface with Laythe, Vall and Jool overhead must be “quite something”.\n"
"			radius = 600000\n"
"			geeASL = 0.800273295870079\n"
"			mass = 4.23321273059351E+22\n"
"			gravParameter = 2825280042099.95\n"
"			rotates = True\n"
"			rotationPeriod = 211926.35802123\n"
"			tidallyLocked = True\n"
"			initialRotation = 0\n"
"			inverseRotThresholdAltitude = 100000\n"
"			albedo = 0.1\n"
"			emissivity = 0.9\n"
"			coreTemperatureOffset = 20\n"
"			timewarpAltitudeLimits = 0 30000 30000 60000 120000 240000 480000 600000\n"
"			sphereOfInfluence = 10856518.3683586\n"
"			solarRotationPeriod = False\n"
"			navballSwitchRadiusMult = 0.06\n"
"			navballSwitchRadiusMultLow = 0.055\n"
"			biomeMap = BUILTIN/tylo_biome\n"
"			nonExactThreshold = -1\n"
"			exactSearch = False\n"
"			useTheInName = False\n"
"			displayName = Tylo^N\n"
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
"				inSpaceLowDataValue = 10 // Science multiplier for in space low science.\n"
"				inSpaceHighDataValue = 8 // Science multiplier for in space high science.\n"
"				recoveryValue = 8\n"
"				flyingAltitudeThreshold = 18000 // Altitude when \"flying at <body>\" transitions from/to \"from <body>'s upper atmosphere\"\n"
"				spaceAltitudeThreshold = 250000 // Altitude when \"in space low\" transitions from/to \"in space high\"\n"
"			}\n"
"			Biomes\n"
"			{\n"
"				Value\n"
"				{\n"
"					name = Midlands // The name of this biome.\n"
"					displayName = Midlands // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.701960802,0.639215708,0.603921592,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Highlands // The name of this biome.\n"
"					displayName = Highlands // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.792156875,0.733333349,0.701960802,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Lowlands // The name of this biome.\n"
"					displayName = Lowlands // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.619607866,0.556862772,0.517647088,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Mara // The name of this biome.\n"
"					displayName = Mara // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.53725493,0.474509805,0.435294122,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Minor Craters // The name of this biome.\n"
"					displayName = Minor Craters // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.447058827,0.388235301,0.352941185,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Tycho Crater // The name of this biome.\n"
"					displayName = Tycho Crater // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.827450991,0.643137276,0.533333361,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Galileio Crater // The name of this biome.\n"
"					displayName = Galileio Crater // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.741176486,0.541176498,0.423529416,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Grissom Crater // The name of this biome.\n"
"					displayName = Grissom Crater // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.666666687,0.458823532,0.337254912,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Gagarin Crater // The name of this biome.\n"
"					displayName = Gagarin Crater // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.58431375,0.388235301,0.274509817,1 // The color of the biome on the biome map.\n"
"				}\n"
"			}\n"
"		}\n"
"		Orbit\n"
"		{\n"
"			referenceBody = Jool // The body that this body is orbiting around.\n"
"			inclination = 0.025000000372529\n"
"			eccentricity = 0\n"
"			semiMajorAxis = 68500000 // The altitude of the highest point in the orbit\n"
"			longitudeOfAscendingNode = 0 // The position of the highest point on the orbit circle\n"
"			argumentOfPeriapsis = 0\n"
"			meanAnomalyAtEpoch = 3.14000010490417\n"
"			meanAnomalyAtEpochD = 179.908753681645\n"
"			epoch = 0\n"
"			color = 0.827450991,0.666666687,0.666666687,0.501960814 // The color of the orbit line in the Tracking Station\n"
"			nodeColor = 0.827450991,0.666666687,0.666666687,0.501960814 // The color of the circle that marks the planets current position on the orbit\n"
"			mode = REDRAW_AND_RECALCULATE\n"
"			icon = ALL\n"
"			cameraSmaRatioBounds = 0.03 25\n"
"			period = 211926.35802123\n"
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
"				specColor = 0,0,0,1\n"
"				shininess = 0.078125\n"
"				texture = BUILTIN/rockyMoon00\n"
"				mainTexScale = 1,1\n"
"				mainTexOffset = 0,0\n"
"				normals = BUILTIN/rockyMoon01\n"
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
"			fadeEnd = 125000\n"
"			deactivateAltitude = 330000\n"
"			mapMaxHeight = 16000\n"
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
"				contrast = 1.2\n"
"				tintColor = 1,1,1,0\n"
"				texTiling = 400\n"
"				texPower = 0.75\n"
"				multiPower = 0.75\n"
"				groundTexStart = 0\n"
"				groundTexEnd = 20000\n"
"				steepTiling = 10\n"
"				steepPower = 0.76\n"
"				steepTexStart = 200000\n"
"				steepTexEnd = 300000\n"
"				deepTex = BUILTIN/RockyGround\n"
"				deepTexScale = 1,1\n"
"				deepTexOffset = 0,0\n"
"				deepMultiTex = BUILTIN/distantground\n"
"				deepMultiTexScale = 1,1\n"
"				deepMultiTexOffset = 0,0\n"
"				deepMultiFactor = 8\n"
"				mainTex = BUILTIN/RockyGround\n"
"				mainTexScale = 1,1\n"
"				mainTexOffset = 0,0\n"
"				mainMultiTex = BUILTIN/distantground\n"
"				mainMultiTexScale = 1,1\n"
"				mainMultiTexOffset = 0,0\n"
"				mainMultiFactor = 10\n"
"				highTex = BUILTIN/RockyGround\n"
"				highTexScale = 1,1\n"
"				highTexOffset = 0,0\n"
"				highMultiTex = BUILTIN/distantground\n"
"				highMultiTexScale = 1,1\n"
"				highMultiTexOffset = 0,0\n"
"				highMultiFactor = 12\n"
"				snowTex = BUILTIN/RockyGround\n"
"				snowTexScale = 1,1\n"
"				snowTexOffset = 0,0\n"
"				snowMultiTex = BUILTIN/distantground\n"
"				snowMultiTexScale = 1,1\n"
"				snowMultiTexOffset = 0,0\n"
"				snowMultiFactor = 14\n"
"				steepTex = BUILTIN/terrain_rock00\n"
"				steepTexScale = 1,1\n"
"				steepTexOffset = 0,0\n"
"				deepStart = 0\n"
"				deepEnd = 0.01\n"
"				mainLoStart = 0\n"
"				mainLoEnd = 0.05\n"
"				mainHiStart = 0.1\n"
"				mainHiEnd = 0.15\n"
"				hiLoStart = 0.1\n"
"				hiLoEnd = 0.15\n"
"				hiHiStart = 0.2\n"
"				hiHiEnd = 0.25\n"
"				snowStart = 0.2\n"
"				snowEnd = 0.25\n"
"				planetOpacity = 0\n"
"			}\n"
"			FallbackMaterial\n"
"			{\n"
"				saturation = 1\n"
"				contrast = 1.2\n"
"				tintColor = 1,1,1,0\n"
"				texTiling = 1024\n"
"				texPower = 0.75\n"
"				multiPower = 0.75\n"
"				groundTexStart = 0\n"
"				groundTexEnd = 20000\n"
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
"					deformity = 1000\n"
"					frequency = 24\n"
"					octaves = 8\n"
"					persistence = 0.5\n"
"					seed = 4447895\n"
"					order = 50\n"
"					enabled = True\n"
"					name = _Height\n"
"				}\n"
"				VertexSimplexHeight\n"
"				{\n"
"					deformity = 2000\n"
"					frequency = 4\n"
"					octaves = 8\n"
"					persistence = 0.5\n"
"					seed = 98374\n"
"					order = 59\n"
"					enabled = True\n"
"					name = _Height\n"
"				}\n"
"				VertexHeightMap\n"
"				{\n"
"					map = BUILTIN/rockymoon_height\n"
"					offset = 0\n"
"					deformity = 6000\n"
"					scaleDeformityByRadius = False\n"
"					order = 49\n"
"					enabled = True\n"
"					name = _Height\n"
"				}\n"
"				FlattenOcean\n"
"				{\n"
"					oceanRadius = 1\n"
"					order = 60\n"
"					enabled = True\n"
"					name = _Height\n"
"				}\n"
"				VertexHeightNoiseVertHeightCurve2\n"
"				{\n"
"					deformity = 8000\n"
"					ridgedAddFrequency = 12\n"
"					ridgedAddLacunarity = 2\n"
"					ridgedAddOctaves = 4\n"
"					ridgedAddSeed = 1530393239\n"
"					ridgedMode = Low\n"
"					ridgedSubFrequency = 12\n"
"					ridgedSubLacunarity = 2\n"
"					ridgedSubOctaves = 4\n"
"					ridgedSubSeed = 1212096306\n"
"					simplexFrequency = 4\n"
"					simplexHeightEnd = 9000\n"
"					simplexHeightStart = 0\n"
"					simplexOctaves = 6\n"
"					simplexPersistence = 0.699999988079071\n"
"					simplexSeed = 1909396195\n"
"					order = 100\n"
"					enabled = True\n"
"					name = _Height\n"
"					simplexCurve\n"
"					{\n"
"						key = 0 0 0 0\n"
"						key = 1 1 2 2\n"
"					}\n"
"				}\n"
"				AltitudeAlpha\n"
"				{\n"
"					atmosphereDepth = 8000\n"
"					invert = False\n"
"					order = 999999999\n"
"					enabled = False\n"
"					name = _Material_ModProjection\n"
"				}\n"
"				HeightColorMap\n"
"				{\n"
"					blend = 0.4\n"
"					order = 201\n"
"					enabled = True\n"
"					name = _Color\n"
"					LandClasses\n"
"					{\n"
"						Value\n"
"						{\n"
"							name = AbyPl\n"
"							color = 0.0895522237,0.0818317235,0.0710781664,1\n"
"							altitudeStart = 0\n"
"							altitudeEnd = 0.100000001490116\n"
"							lerpToNext = True\n"
"							delete = False\n"
"						}\n"
"						Value\n"
"						{\n"
"							name = Beach\n"
"							color = 0.186567187,0.175477535,0.175477535,1\n"
"							altitudeStart = 0.100000001490116\n"
"							altitudeEnd = 0.699999988079071\n"
"							lerpToNext = True\n"
"							delete = False\n"
"						}\n"
"						Value\n"
"						{\n"
"							name = Beach\n"
"							color = 0.76119405,0.715948284,0.715948284,1\n"
"							altitudeStart = 0.699999988079071\n"
"							altitudeEnd = 1\n"
"							lerpToNext = False\n"
"							delete = False\n"
"						}\n"
"					}\n"
"				}\n"
"				VertexColorMap\n"
"				{\n"
"					map = BUILTIN/rockymoon_color\n"
"					order = 200\n"
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
"							materialType = StandardSpecular\n"
"							material = BUILTIN/terrain_rock00\n"
"							mesh = BUILTIN/boulder\n"
"							castShadows = True\n"
"							densityFactor = 1\n"
"							maxCache = 512\n"
"							maxCacheDelta = 32\n"
"							maxLevelOffset = 0\n"
"							maxScale = 3\n"
"							maxScatter = 20\n"
"							maxSpeed = 1000\n"
"							minScale = 0.5\n"
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
"								color = 0.519999981,0.513417721,0.490379721,1\n"
"								mainTex = BUILTIN/MunBoulder [Diffuse]\n"
"								mainTexScale = 4,4\n"
"								mainTexOffset = 0,0\n"
"								cutoff = 0.5\n"
"								glossiness = 0.078\n"
"								glossMapScale = 1\n"
"								smoothnessTextureChannel = AlbedoAlpha\n"
"								specColor = 0.117647052,0.117647052,0.117647052,1\n"
"								metallicGlossMapScale = 1,1\n"
"								metallicGlossMapOffset = 0,0\n"
"								specularHighlights = True\n"
"								glossyReflections = True\n"
"								bumpScale = 1\n"
"								bumpMap = BUILTIN/MunBoulder [Normal]\n"
"								bumpMapScale = 1,1\n"
"								bumpMapOffset = 0,0\n"
"								parallax = 0.02\n"
"								parallaxMapScale = 1,1\n"
"								parallaxMapOffset = 0,0\n"
"								occlusionStrength = 1\n"
"								occlusionMapScale = 1,1\n"
"								occlusionMapOffset = 0,0\n"
"								emissionColor = 0,0,0,1\n"
"								emissionMapScale = 4,4\n"
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
"									density = 0.5\n"
"									scatterName = boulder\n"
"									delete = False\n"
"								}\n"
"							}\n"
"						}\n"
"					}\n"
"				}\n"
"				MapDecal\n"
"				{\n"
"					absolute = False\n"
"					absoluteOffset = 0\n"
"					angle = 70\n"
"					cullBlack = False\n"
"					DEBUG_HighlightInclusion = False\n"
"					heightMap = BUILTIN/saganface\n"
"					heightMapDeformity = 50\n"
"					position = 569917.375,-94669.7969,181300.906\n"
"					removeScatter = True\n"
"					radius = 6000\n"
"					smoothColor = 0\n"
"					smoothHeight = 0.125\n"
"					useAlphaHeightSmoothing = False\n"
"					order = 200\n"
"					enabled = True\n"
"					name = Sagan\n"
"				}\n"
"				City\n"
"				{\n"
"					debugOrientated = False\n"
"					frameDelta = 1\n"
"					randomizeOnSphere = False\n"
"					reorientToSphere = True\n"
"					reorientFinalAngle = 30\n"
"					reorientInitialUp = 0,1,0\n"
"					repositionRadial = -457335.5,388660.5,48087.0898\n"
"					repositionRadiusOffset = 2085\n"
"					repositionToSphere = True\n"
"					repositionToSphereSurface = False\n"
"					repositionToSphereSurfaceAddHeight = False\n"
"					commnetStation = False\n"
"					isKSC = False\n"
"					order = 100\n"
"					enabled = True\n"
"					name = Cave\n"
"					LOD\n"
"					{\n"
"						Value\n"
"						{\n"
"							visibleRange = 12000\n"
"							scale = 0,0,0\n"
"							delete = False\n"
"						}\n"
"					}\n"
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