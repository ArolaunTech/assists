#ifndef MUN_H
#define MUN_H
char const *Mun_cfg = "// KittopiaTech - a Kopernicus Visual Editor\n"
"\n"
"@Kopernicus:NEEDS[!Kopernicus]\n"
"{\n"
"	Body\n"
"	{\n"
"		name = Mun\n"
"		barycenter = False\n"
"		identifier = Squad/Mun\n"
"		implements = \n"
"		finalizeOrbit = False\n"
"		randomMainMenuBody = False\n"
"		contractWeight = 30\n"
"		Properties\n"
"		{\n"
"			description = The Mun, is a large satellite orbiting Kerbin. It is mostly gray in appearance, with craters of various sizes dotting its otherwise smooth surface.The Mun’s discovery is widely regarded as one of the more important breakthroughs of Kerbal evolution. Granted, it didn’t happen all that long ago, but it’s still fair to say Kerbals are wiser and more evolved now than they were back then.\n"
"			radius = 200000\n"
"			geeASL = 0.166056700098353\n"
"			mass = 9.7599066119646E+20\n"
"			gravParameter = 65138397520.7807\n"
"			rotates = True\n"
"			rotationPeriod = 138984.376574476\n"
"			tidallyLocked = True\n"
"			initialRotation = 230\n"
"			inverseRotThresholdAltitude = 100000\n"
"			albedo = 0.1\n"
"			emissivity = 0.9\n"
"			coreTemperatureOffset = 5\n"
"			timewarpAltitudeLimits = 0 5000 5000 10000 25000 50000 100000 200000\n"
"			sphereOfInfluence = 2429559.11656475\n"
"			solarRotationPeriod = False\n"
"			navballSwitchRadiusMult = 0.06\n"
"			navballSwitchRadiusMultLow = 0.055\n"
"			biomeMap = BUILTIN/mun_biome\n"
"			nonExactThreshold = -1\n"
"			exactSearch = False\n"
"			useTheInName = True\n"
"			displayName = The Mun^N\n"
"			selectable = True\n"
"			RnDVisibility = Visible\n"
"			RnDRotation = False\n"
"			maxZoom = 60000\n"
"			ScienceValues\n"
"			{\n"
"				landedDataValue = 4 // Science multiplier for landed science.\n"
"				splashedDataValue = 1 // Science multiplier for splashed down science.\n"
"				flyingLowDataValue = 1 // Science multiplier for flying low science.\n"
"				flyingHighDataValue = 1 // Science multiplier for flying high science.\n"
"				inSpaceLowDataValue = 3 // Science multiplier for in space low science.\n"
"				inSpaceHighDataValue = 2 // Science multiplier for in space high science.\n"
"				recoveryValue = 2\n"
"				flyingAltitudeThreshold = 18000 // Altitude when \"flying at <body>\" transitions from/to \"from <body>'s upper atmosphere\"\n"
"				spaceAltitudeThreshold = 60000 // Altitude when \"in space low\" transitions from/to \"in space high\"\n"
"			}\n"
"			Biomes\n"
"			{\n"
"				Value\n"
"				{\n"
"					name = Midlands // The name of this biome.\n"
"					displayName = Midlands // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.36470589,0.458823532,0.509803951,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Northern Basin // The name of this biome.\n"
"					displayName = Northeast Basin // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.423529416,0.458823532,0.576470613,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = East Crater // The name of this biome.\n"
"					displayName = East Crater // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.580392182,0.627451003,0.796078444,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Northwest Crater // The name of this biome.\n"
"					displayName = Northwest Crater // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.407843143,0.474509805,0.694117665,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Southwest Crater // The name of this biome.\n"
"					displayName = Southwest Crater // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.65882355,0.678431392,0.737254918,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Farside Crater // The name of this biome.\n"
"					displayName = Farside Crater // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.56078434,0.647058845,0.90196079,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Canyons // The name of this biome.\n"
"					displayName = Canyons // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.325490206,0.368627459,0.521568656,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Polar Crater // The name of this biome.\n"
"					displayName = Polar Crater // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.603921592,0.647058845,0.670588255,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Poles // The name of this biome.\n"
"					displayName = Poles // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.917647064,0.925490201,0.929411769,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Polar Lowlands // The name of this biome.\n"
"					displayName = Polar Lowlands // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.811764717,0.827450991,0.839215696,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Highlands // The name of this biome.\n"
"					displayName = Highlands // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.450980395,0.53725493,0.58431375,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Highland Craters // The name of this biome.\n"
"					displayName = Highland Craters // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.694117665,0.733333349,0.870588243,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Midland Craters // The name of this biome.\n"
"					displayName = Midland Craters // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.164705887,0.247058824,0.294117659,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = East Farside Crater // The name of this biome.\n"
"					displayName = East Farside Crater // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.603921592,0.611764729,0.917647064,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Twin Craters // The name of this biome.\n"
"					displayName = Twin Craters // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.678431392,0.745098054,0.945098042,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Lowlands // The name of this biome.\n"
"					displayName = Lowlands // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.254901975,0.356862754,0.41568628,1 // The color of the biome on the biome map.\n"
"				}\n"
"				Value\n"
"				{\n"
"					name = Farside Basin // The name of this biome.\n"
"					displayName = Farside Basin // The displayed name of the biome. Can be a localization tag.\n"
"					value = 0 // A value that gets multiplied with every amount of science that is returned in the biome.\n"
"					color = 0.529411793,0.556862772,0.639215708,1 // The color of the biome on the biome map.\n"
"				}\n"
"			}\n"
"		}\n"
"		Orbit\n"
"		{\n"
"			referenceBody = Kerbin // The body that this body is orbiting around.\n"
"			inclination = 0\n"
"			eccentricity = 0\n"
"			semiMajorAxis = 12000000 // The altitude of the highest point in the orbit\n"
"			longitudeOfAscendingNode = 0 // The position of the highest point on the orbit circle\n"
"			argumentOfPeriapsis = 0\n"
"			meanAnomalyAtEpoch = 1.70000004768372\n"
"			meanAnomalyAtEpochD = 97.4028279043159\n"
"			epoch = 0\n"
"			color = 0.611764729,0.627451003,0.70588237,0.501960814 // The color of the orbit line in the Tracking Station\n"
"			nodeColor = 0.611764729,0.627451003,0.70588237,0.501960814 // The color of the circle that marks the planets current position on the orbit\n"
"			mode = REDRAW_AND_RECALCULATE\n"
"			icon = ALL\n"
"			cameraSmaRatioBounds = 0.03 25\n"
"			period = 138984.376574476\n"
"		}\n"
"		ScaledVersion\n"
"		{\n"
"			type = Vacuum\n"
"			fadeStart = 55000\n"
"			fadeEnd = 60000\n"
"			sphericalModel = False\n"
"			deferMesh = False\n"
"			invisible = False\n"
"			Material\n"
"			{\n"
"				color = 0.723880589,0.734684765,0.734684765,1\n"
"				specColor = 0,0,0,1\n"
"				shininess = 0.03\n"
"				texture = BUILTIN/NewMunSurfaceMapDiffuse\n"
"				mainTexScale = 1,1\n"
"				mainTexOffset = 0,0\n"
"				normals = BUILTIN/NewMunSurfaceMapNormals\n"
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
"			fadeStart = 60000\n"
"			fadeEnd = 120000\n"
"			deactivateAltitude = 120750\n"
"			mapMaxHeight = 9000\n"
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
"				factor = 8\n"
"				factorBlendWidth = 0.05\n"
"				factorRotation = 75\n"
"				saturation = 1\n"
"				contrast = 1\n"
"				tintColor = 1,1,1,0\n"
"				specularColor = 0.188235298,0.188235298,0.188235298,1\n"
"				albedoBrightness = 1\n"
"				steepPower = 1.5\n"
"				steepTexStart = 30000\n"
"				steepTexEnd = 60000\n"
"				steepTex = BUILTIN/MunCliff [Diffuse]\n"
"				steepTexScale = 1,1\n"
"				steepTexOffset = 0,0\n"
"				steepBumpMap = BUILTIN/MunCliff [Normal]\n"
"				steepBumpMapScale = 1,1\n"
"				steepBumpMapOffset = 0,0\n"
"				steepNearTiling = 500\n"
"				steepTiling = 350\n"
"				lowTexScale = 1,1\n"
"				lowTexOffset = 0,0\n"
"				lowTiling = 1\n"
"				midTex = BUILTIN/MunFloor [Diffuse]\n"
"				midTexScale = 1,1\n"
"				midTexOffset = 0,0\n"
"				midTiling = 150000\n"
"				midBumpMap = BUILTIN/MunFloor [Normal]\n"
"				midBumpMapScale = 1,1\n"
"				midBumpMapOffset = 0,0\n"
"				midBumpTiling = 150000\n"
"				highTexScale = 1,1\n"
"				highTexOffset = 0,0\n"
"				highTiling = 1.5\n"
"				lowStart = -1\n"
"				lowEnd = -1\n"
"				highStart = 1\n"
"				highEnd = 1\n"
"				globalDensity = 1\n"
"				fogColorRampScale = 1,1\n"
"				fogColorRampOffset = 0,0\n"
"				planetOpacity = 0.002323827\n"
"				oceanFogDistance = 1000\n"
"			}\n"
"			FallbackMaterial\n"
"			{\n"
"				saturation = 1\n"
"				contrast = 1\n"
"				tintColor = 1,1,1,0\n"
"				texTiling = 4000\n"
"				texPower = 0.75\n"
"				multiPower = 0.75\n"
"				groundTexStart = 0\n"
"				groundTexEnd = 6000\n"
"				multiFactor = 24\n"
"				mainTex = BUILTIN/RockyGround\n"
"				mainTexScale = 1,1\n"
"				mainTexOffset = 0,0\n"
"				planetOpacity = 1\n"
"			}\n"
"			Mods\n"
"			{\n"
"				VertexColorMap\n"
"				{\n"
"					map = BUILTIN/munColorMap2\n"
"					order = 10\n"
"					enabled = True\n"
"					name = _Color\n"
"				}\n"
"				VertexHeightMap\n"
"				{\n"
"					map = BUILTIN/munHeightMap2\n"
"					offset = 0\n"
"					deformity = 7500\n"
"					scaleDeformityByRadius = False\n"
"					order = 10\n"
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
"							name = Rock00\n"
"							materialType = StandardSpecular\n"
"							material = BUILTIN/terrain_rock00\n"
"							mesh = BUILTIN/boulder\n"
"							castShadows = True\n"
"							densityFactor = 1\n"
"							maxCache = 512\n"
"							maxCacheDelta = 32\n"
"							maxLevelOffset = 0\n"
"							maxScale = 2.5\n"
"							maxScatter = 20\n"
"							maxSpeed = 1000\n"
"							minScale = 0.15\n"
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
"									density = 1\n"
"									scatterName = Rock00\n"
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
"					reorientFinalAngle = -117.65\n"
"					reorientInitialUp = 0,1,0\n"
"					repositionRadial = 178121,-34319,86559\n"
"					repositionRadiusOffset = 800\n"
"					repositionToSphere = False\n"
"					repositionToSphereSurface = True\n"
"					repositionToSphereSurfaceAddHeight = False\n"
"					commnetStation = False\n"
"					isKSC = False\n"
"					order = 100\n"
"					enabled = True\n"
"					name = Monolith00\n"
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
"					reorientFinalAngle = 27.65\n"
"					reorientInitialUp = 0,1,0\n"
"					repositionRadial = -6140,-200500,26747\n"
"					repositionRadiusOffset = -189\n"
"					repositionToSphere = False\n"
"					repositionToSphereSurface = True\n"
"					repositionToSphereSurfaceAddHeight = True\n"
"					commnetStation = False\n"
"					isKSC = False\n"
"					order = 100\n"
"					enabled = True\n"
"					name = Monolith02\n"
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
"				FlattenArea\n"
"				{\n"
"					DEBUG_showColors = False\n"
"					flattenTo = 4500.25\n"
"					innerRadius = 200\n"
"					outerRadius = 1000\n"
"					position = -6140,-200500,26747\n"
"					smoothEnd = 0\n"
"					smoothStart = 0\n"
"					order = 100\n"
"					enabled = True\n"
"					name = Monolith02\n"
"				}\n"
"				City\n"
"				{\n"
"					debugOrientated = False\n"
"					frameDelta = 1\n"
"					randomizeOnSphere = False\n"
"					reorientToSphere = True\n"
"					reorientFinalAngle = -92.65\n"
"					reorientInitialUp = 0,1,0\n"
"					repositionRadial = 106480,170340,17136\n"
"					repositionRadiusOffset = 14\n"
"					repositionToSphere = False\n"
"					repositionToSphereSurface = True\n"
"					repositionToSphereSurfaceAddHeight = True\n"
"					commnetStation = False\n"
"					isKSC = False\n"
"					order = 100\n"
"					enabled = True\n"
"					name = Monolith01\n"
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
"				FlattenArea\n"
"				{\n"
"					DEBUG_showColors = False\n"
"					flattenTo = 4000.25\n"
"					innerRadius = 200\n"
"					outerRadius = 1000\n"
"					position = 106480,170340,17136\n"
"					smoothEnd = 0\n"
"					smoothStart = 0\n"
"					order = 100\n"
"					enabled = True\n"
"					name = Monolith01\n"
"				}\n"
"				City\n"
"				{\n"
"					debugOrientated = False\n"
"					frameDelta = 1\n"
"					randomizeOnSphere = False\n"
"					reorientToSphere = True\n"
"					reorientFinalAngle = 0\n"
"					reorientInitialUp = 0,1,0\n"
"					repositionRadial = 2984,872,19998\n"
"					repositionRadiusOffset = 2370\n"
"					repositionToSphere = False\n"
"					repositionToSphereSurface = True\n"
"					repositionToSphereSurfaceAddHeight = False\n"
"					commnetStation = False\n"
"					isKSC = False\n"
"					order = 100\n"
"					enabled = True\n"
"					name = RockArch02\n"
"					LOD\n"
"					{\n"
"						Value\n"
"						{\n"
"							visibleRange = 20000\n"
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
"					repositionRadial = 15233,4336,12414\n"
"					repositionRadiusOffset = 1230\n"
"					repositionToSphere = False\n"
"					repositionToSphereSurface = True\n"
"					repositionToSphereSurfaceAddHeight = False\n"
"					commnetStation = False\n"
"					isKSC = False\n"
"					order = 100\n"
"					enabled = True\n"
"					name = RockArch00\n"
"					LOD\n"
"					{\n"
"						Value\n"
"						{\n"
"							visibleRange = 20000\n"
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
"					repositionRadial = -15233,-4336,-12360\n"
"					repositionRadiusOffset = 1970\n"
"					repositionToSphere = False\n"
"					repositionToSphereSurface = True\n"
"					repositionToSphereSurfaceAddHeight = False\n"
"					commnetStation = False\n"
"					isKSC = False\n"
"					order = 100\n"
"					enabled = True\n"
"					name = RockArch01\n"
"					LOD\n"
"					{\n"
"						Value\n"
"						{\n"
"							visibleRange = 20000\n"
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
"					repositionRadial = 184640.094,2455.73901,77414.4766\n"
"					repositionRadiusOffset = 225\n"
"					repositionToSphere = False\n"
"					repositionToSphereSurface = True\n"
"					repositionToSphereSurfaceAddHeight = False\n"
"					commnetStation = False\n"
"					isKSC = False\n"
"					order = 100\n"
"					enabled = True\n"
"					name = ArmstrongMemorial\n"
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
"					reorientFinalAngle = 180\n"
"					reorientInitialUp = 0,1,0\n"
"					repositionRadial = 24581.6309,-191229.094,-61263.4883\n"
"					repositionRadiusOffset = 2300\n"
"					repositionToSphere = False\n"
"					repositionToSphereSurface = True\n"
"					repositionToSphereSurfaceAddHeight = False\n"
"					commnetStation = False\n"
"					isKSC = False\n"
"					order = 100\n"
"					enabled = True\n"
"					name = UFO\n"
"					LOD\n"
"					{\n"
"						Value\n"
"						{\n"
"							visibleRange = 8000\n"
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
"				VertexSimplexNoiseColor\n"
"				{\n"
"					blend = 0.125\n"
"					colorStart = 0,0,0,1\n"
"					colorEnd = 1,1,1,1\n"
"					frequency = 4\n"
"					octaves = 8\n"
"					persistence = 0.600000023841858\n"
"					seed = 0\n"
"					order = 200\n"
"					enabled = True\n"
"					name = _ColorNoise\n"
"				}\n"
"				VertexSimplexHeight\n"
"				{\n"
"					deformity = 400\n"
"					frequency = 12\n"
"					octaves = 8\n"
"					persistence = 0.5\n"
"					seed = 2211221\n"
"					order = 102\n"
"					enabled = True\n"
"					name = _HeightNoise\n"
"				}\n"
"				VertexHeightNoiseVertHeight\n"
"				{\n"
"					heightStart = 0\n"
"					heightEnd = 1\n"
"					deformity = 400\n"
"					frequency = 12\n"
"					octaves = 6\n"
"					persistance = 0.5\n"
"					seed = 1283704385\n"
"					mode = Low\n"
"					noiseType = Perlin\n"
"					lacunarity = 2\n"
"					order = 103\n"
"					enabled = True\n"
"					name = _HeightNoise\n"
"				}\n"
"				VoronoiCraters\n"
"				{\n"
"					colorOpacity = 0.7\n"
"					DebugColorMapping = False\n"
"					deformation = 500\n"
"					jitter = 0.1\n"
"					jitterHeight = 3\n"
"					rFactor = 1\n"
"					rOffset = 1\n"
"					simplexFrequency = 120\n"
"					simplexOctaves = 3\n"
"					simplexPersistence = 0.5\n"
"					simplexSeed = 123123\n"
"					voronoiDisplacement = 0\n"
"					voronoiFrequency = 22\n"
"					voronoiSeed = 824\n"
"					order = 101\n"
"					enabled = True\n"
"					name = _HeightNoise\n"
"					CraterCurve\n"
"					{\n"
"						key = -0.9982381 -0.7411783 -0.06500059 -0.06500059\n"
"						key = -0.9332262 -0.7678316 -0.2176399 -0.2176399\n"
"						key = -0.8990405 -0.7433339 -2.560626 -2.560626\n"
"						key = -0.7445966 -0.8581167 0.4436148 0.4436148\n"
"						key = -0.4499771 -0.1392395 5.289535 5.289535\n"
"						key = -0.4015177 0.2551735 9.069458 -2.149609\n"
"						key = -0.2297457 0.002857953 -0.4453675 -0.4453675\n"
"						key = 0.2724952 0.00423781 -0.01884932 -0.01884932\n"
"						key = 0.9998434 -0.004090764 0.01397126 0.01397126\n"
"					}\n"
"					JitterCurve\n"
"					{\n"
"						key = -1.000701 0.4278412 0.1577609 0.1577609\n"
"						key = -0.7884969 0.09487452 -0.7739663 -0.7739663\n"
"						key = -0.6091803 0.072019 0.123537 0.123537\n"
"						key = -0.3930514 0.3903495 3.300831 3.300831\n"
"						key = -0.3584836 0.8643304 0.07139917 0.07139917\n"
"						key = -0.2988068 0.002564805 -0.01814346 -0.01814346\n"
"						key = 0.9970253 0.003401639 0 0\n"
"					}\n"
"				}\n"
"				VoronoiCraters\n"
"				{\n"
"					colorOpacity = 0.7\n"
"					DebugColorMapping = False\n"
"					deformation = 200\n"
"					jitter = 0.1\n"
"					jitterHeight = 2\n"
"					rFactor = 1\n"
"					rOffset = 1.1\n"
"					simplexFrequency = 300\n"
"					simplexOctaves = 3\n"
"					simplexPersistence = 0.5\n"
"					simplexSeed = 123123\n"
"					voronoiDisplacement = 0\n"
"					voronoiFrequency = 50\n"
"					voronoiSeed = 462\n"
"					order = 100\n"
"					enabled = True\n"
"					name = _HeightNoise\n"
"					CraterCurve\n"
"					{\n"
"						key = -0.9963056 -0.7950293 -0.1902251 -0.1902251\n"
"						key = -0.9520697 -0.8223228 -0.6806358 -0.6806358\n"
"						key = -0.7445966 -0.8581167 0.4436148 0.4436148\n"
"						key = -0.4499771 -0.1392395 5.289535 5.289535\n"
"						key = -0.4015177 0.2551735 9.069458 -2.149609\n"
"						key = -0.2297457 0.08363447 -0.4453675 -0.4453675\n"
"						key = 0.2817185 0.01192154 0.01421198 0.01421198\n"
"						key = 1.000876 0.001117015 0.01397126 0.01397126\n"
"					}\n"
"					JitterCurve\n"
"					{\n"
"						key = -1.000701 0.4278412 0.1577609 0.1577609\n"
"						key = -0.7884969 0.09487452 -0.7739663 -0.7739663\n"
"						key = -0.6091803 0.072019 0.123537 0.123537\n"
"						key = -0.3930514 0.3903495 3.300831 3.300831\n"
"						key = -0.3141366 0.9276265 0 0\n"
"						key = -0.2586833 0.002564805 -0.01814346 -0.01814346\n"
"						key = 0.9970253 0.003401639 0 0\n"
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