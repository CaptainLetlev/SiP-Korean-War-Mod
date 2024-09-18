class cfgPatches
{
    class SiP_Patch_t34_85
    {
        addonRootClass = "SiP_Patch_pva_tanks";
        requiredAddons[] = 
        {
            "A3_Data_F",
            "A3_Characters_F",
            "A3_Sounds_F",
            "A3_Anims_F",
            "A3_Soft_F",
            "A3_Cargoposes_F",
            "WW2_SPE_Assets_c_Vehicles_Tanks_c",
            "WW2_SPE_Assets_c_Vehicles_Weapons_c",
            "armor_f_vietnam_c"
        };
        units[] = 
        {
            "SiP_t34_85_base",
            "SiP_KPA_t34_85_base",

            "SiP_PVA_t34_85",
            "SiP_KPA_t34_85"
        };
        weapons[] = 
        {
            "SiP_dt29_coax",
            "SiP_dt29_bow",

            "SiP_ZIS_S_53_85mm_base",
            "SiP_ZIS_S_53_85mm_HE_AI",
            "SiP_ZIS_S_53_85mm_APCR_AI",
            "SiP_ZIS_S_53_85mm"
        };
        magazines[] = 
        {
            "SiP_63rnd_DT_mag",

            "SiP_20rnd_O365K_HE_mag",
            "SiP_20rnd_BR365K_AP_mag",
            "SiP_10rnd_BR367P_APCR_mag"
        };
    };
};

class VScrollbar;
class HScrollbar;
class RscControlsGroup;
class IGUIBack;

class RscInGameUI
{
    class RscUnitInfo;
    class SiP_T34_RscOptics_gunner: RscUnitInfo
    {
        onload = "['onLoad', _this, 'RscUnitInfo', 'IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call SPE_Get_Control_Parameter;";
        controls[] = {"CA_IGUI_elements_group"};
        class CA_IGUI_elements_group: RscControlsGroup
        {
            idc = 170;
            class VScrollbar: VScrollbar
            {
                width = 0;
            };
            class HScrollbar: HScrollbar
            {
                height = 0;
            };
            x = "0 * (0.01875 * SafezoneH) + (SafezoneX + ((SafezoneW - SafezoneH) / 2))";
            y = "0 * (0.025 * SafezoneH) + (SafezoneY)";
            w = "53.5 * (0.01875 * SafezoneH)";
            h = "40 * (0.025 * SafezoneH)";
            class Controls
            {
                class CA_ZeroingLine: IGUIBack
                {
                    idc = 180;
                    colorBackground[] = {0,0,0,1};
                    x = 0;
                    y = "16.1 * (0.025 * SafezoneH)";
                    w = "safeZoneW";
                    h = "0.002";
                };
            };
        };
    };
};

class cfgVehicles
{
    class All
    {
        class ViewOptics;
    };
    class AllVehicles: All
    {
        class NewTurret
        {
            class ViewGunner;
            class HitPoints
            {
                class HitTurret;
                class HitGun;
            };
            class Turrets;
        };
    };
    class Land: AllVehicles{};
    class LandVehicle: Land{};
    class Car: LandVehicle{};
    class Tank: LandVehicle
    {
        class HitPoints;
    };
    class Tank_F: Tank
    {
        class HitPoints: HitPoints
        {
            class HitHull;
            class HitEngine;
            class HitLTrack;
            class HitRTrack;
        };
        class Turrets
        {
            class MainTurret: NewTurret
            {
                class HitPoints;
                class Turrets;
            };
        };
    };

    class SPE_Tank_base: Tank_F
    {
        class HitPoints: HitPoints
        {
            class HitHull;
            class HitEngine;
            class HitLTrack;
            class HitRTrack;
        };
        class ViewOptics;
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                class HitPoints: HitPoints
                {
                    class HitTurret;
                    class HitGun;
                };
                class Turrets: Turrets
                {
                    class CommanderOptics;
                    class Loader_place;
                };
            };
        };
        class Animationsources;
        class EventHandlers;
    };

    class SiP_t34_85_base: SPE_Tank_base
    {   
        author = "Letlev";
        side = 0;
        scope = 1;
        scopeCurator = 0;
        armor = 300;
        armorStructural = 2;
        commanding = 1;
        maxSpeed = 50;
        editorSubcategory = "SiP_Tanks_Editor_Subcategory";
        vehicleClass = "SiP_tanks_vehicle_class";
        editorPreview = "\WW2\Core_t\IF_EditorPreviews_t\lib_t34_85.jpg";
        icon = "\WW2\Assets_t\Vehicles\Icons_t\icon_t34_85_ca.paa";
        model = "\NORTH\NF_vehicles2\fin\t34\T34_85_1945.p3d";
        displayName = "T-34-85";
        driverInAction = "crew_tank01_in";
        GunnerInAction = "crew_tank01_in";
        driverAction = "ManActTestDriverOut";

        transportSoldier = 10;
        cargoAction[] = {"NORTH_T34_Desant1","NORTH_T34_Desant2","NORTH_T34_Desant3","NORTH_T34_Desant4","NORTH_T34_Desant5","NORTH_T34_Desant6","NORTH_T34_Desant7","NORTH_T34_Desant8","NORTH_T34_Desant9","NORTH_T34_Desant10"};
        fuelCapacity = 86.79;
        brakeIdleSpeed = 0.1;
        normalSpeedForwardCoef = 0.75;
        slowSpeedForwardCoef = 0.25;
        waterResistanceCoef = 0.3;
        enginePower = 422.85;
        engineMOI = 50;
        maxOmega = 314.16;
        minOmega = 104.72;
        idleRPM = 700;
        redRPM = 3000;
        peakTorque = 4950;
        torqueCurve[] = {{0.33333334,0.68},{0.42833334,0.8},{0.5233333,0.949899},{0.61833334,0.98},{0.7133333,1},{0.80833334,0.94},{0.9033333,0.8},{1,0.64}};
        thrustDelay = 0.5;
        dampingRateFullThrottle = 1.4;
        dampingRateZeroThrottleClutchEngaged = 5.0;
        dampingRateZeroThrottleClutchDisengaged = 0.8;
        clutchStrength = 40.0;
        latency = 1.3;
        switchTime = 0.3;
        changeGearType = "rpmratio";
        changeGearOmegaRatios[] = {1,0.33333334,0.33333334,0,0.99333334,0.33333334,0.98333335,0.7,0.98333335,0.73333335,0.98333335,0.73333335};
        class complexGearbox
        {
            GearboxRatios[] = {"R1",-4,"N",0,"D1",4.4,"D2",2.2,"D3",1.5,"D4",1.0};
            transmissionRatios[] = {"High",16};
            gearBoxMode = "auto";
            moveOffGear = 1;
            driveString = "D";
            neutralString = "N";
            reverseString = "R";
        };
        tankTurnForce = 286000;
        tankTurnForceAngMinSpd = 0.7;
        tankTurnForceAngSpd = 0.76;
        accelAidForceCoef = 2.0;
        accelAidForceYOffset = -2.0;
        accelAidForceSpd = 1.4;
        numberPhysicalWheels = 10;
        class Wheels
        {
            class L2
            {
                boneName = "Wheel_podkoloL1";
                center = "wheel_1_2_axis";
                boundary = "wheel_1_2_bound";
                damping = 75;
                steering = 0;
                side = "left";
                width = 0.5;
                mass = 200;
                moi = 25.603598;
                latStiffY = 30;
                latStiffX = 1.5;
                longitudinalStiffnessPerUnitGravity = 12000;
                maxBrakeTorque = 5000;
                sprungMass = 2812;
                springStrength = 281200;
                springDamperRate = 44992;
                dampingRate = 200;
                dampingRateInAir = 200;
                dampingRateDestroyed = 10000;
                suspTravelDirection[] = {0,-1,0};
                maxDroop = 0.14;
                maxCompression = 0.14;
                frictionVsSlipGraph[] = {{0,1},{0.5,1},{1,1}};
            };
            class L3: L2
            {
                boneName = "Wheel_podkoloL2";
                center = "wheel_1_3_axis";
                boundary = "wheel_1_3_bound";
            };
            class L4: L2
            {
                boneName = "Wheel_podkoloL3";
                center = "wheel_1_4_axis";
                boundary = "wheel_1_4_bound";
            };
            class L5: L2
            {
                boneName = "Wheel_podkoloL4";
                center = "wheel_1_5_axis";
                boundary = "wheel_1_5_bound";
            };
            class L6: L2
            {
                boneName = "Wheel_podkoloL5";
                center = "wheel_1_6_axis";
                boundary = "wheel_1_6_bound";
            };
            class R2: L2
            {
                boneName = "Wheel_podkolop1";
                center = "wheel_2_2_axis";
                boundary = "wheel_2_2_bound";
                side = "right";
            };
            class R3: R2
            {
                boneName = "Wheel_podkolop2";
                center = "wheel_2_3_axis";
                boundary = "wheel_2_3_bound";
            };
            class R4: R2
            {
                boneName = "Wheel_podkolop3";
                center = "wheel_2_4_axis";
                boundary = "wheel_2_4_bound";
            };
            class R5: R2
            {
                boneName = "Wheel_podkolop4";
                center = "wheel_2_5_axis";
                boundary = "wheel_2_5_bound";
            };
            class R6: R2
            {
                boneName = "Wheel_podkolop5";
                center = "wheel_2_6_axis";
                boundary = "wheel_2_6_bound";
            };
        };
        soundEngineOnInt[]=
        {
            "vn\sounds_f_vietnam_04\vehicles\land\t54\engine_start_int.ogg",
            1,
            1
        };
        soundEngineOffInt[]=
        {
            "vn\sounds_f_vietnam_04\vehicles\land\t54\engine_stop_int.ogg",
            1,
            1
        };
        soundEngineOnExt[]=
        {
            "vn\sounds_f_vietnam_04\vehicles\land\t54\engine_start_ext.ogg",
            2,
            1,
            150
        };
        soundEngineOffExt[]=
        {
            "vn\sounds_f_vietnam_04\vehicles\land\t54\engine_stop_ext.ogg",
            2,
            1,
            150
        };
        soundGetIn[] = {"\WW2\Assets_s\Vehicles\Tanks_s\T34_76\T34_76_GetInOut.wss",0.5623,1,20};
        soundGetOut[] = {"\WW2\Assets_s\Vehicles\Tanks_s\T34_76\T34_76_GetInOut.wss",0.5623,1,20};
        class Sounds
        {
            soundSetsExt[] = 
            {
                "vn_t54_engine_idle_ext_soundset",
                "vn_t54_engine_high_ext_soundset",
                "vn_t54_engine_high_exh_soundset",
                "vn_t54_rattle_ext_soundset",
                "vn_t54_engine_rev_ext_soundset",
                "vn_t54_engine_distance_soundset",
                "vn_t54_start_exterior_soundset",
                "vn_tank_treads_pavn_distance_soundset",
                "vn_t54_track_left_slow_soundset",
                "vn_t54_track_left_fast_soundset",
                "vn_t54_track_right_slow_soundset",
                "vn_t54_track_right_fast_soundset"
            };
            soundSetsInt[] = 
            {
                "vn_t54_engine_idle_int_soundset",
                "vn_t54_engine_high_int_soundset",
                "vn_t54_engine_high_int_res_soundset",
                "vn_t54_rattle_int_soundset",
                "vn_t54_rattle_drive_soundset",
                "vn_t54_start_interior_soundset",
                "vn_t54_int_track_left_slow_soundset",
                "vn_t54_int_track_left_fast_soundset",
                "vn_t54_int_track_right_slow_soundset",
                "vn_t54_int_track_right_fast_soundset",
                "vn_truck_rainint_soundset",
                "tanks_material_strain_int_soundset"
            };
        };
        class HitPoints: HitPoints
        {
            class HitHull: HitHull
            {
                armor = 1;
                radius = 0.16;
                material = -1;
                name = "firegeo_hull";
                visual = "damage_hull";
                passThrough = 1;
                minimalHit = 0.4;
            };
            class HitLTrack: HitLTrack
            {
                armor = 1;
                radius = 0.18;
                material = -1;
                name = "firegeo_track_L";
                visual = "firegeo_track_L";
                passThrough = 0;
                minimalHit = 0.02;
            };
            class HitRTrack: HitRTrack
            {
                armor = 1;
                radius = 0.18;
                material = -1;
                name = "firegeo_track_R";
                visual = "firegeo_track_R";
                passThrough = 0;
                minimalHit = 0.02;
            };
            class HitEngine: HitEngine
            {
                armor = 1.5;
                radius = 0.14;
                material = -1;
                name = "firegeo_engine";
                visual = "firegeo_engine";
                passThrough = 0;
                minimalHit = 0.3;
            };
        };
        hiddenSelections[] = {"camo","camo1","camo2","pasoffsetl","pasoffsetp"};
        hiddenSelectionsTextures[] = 
        {
            "\NORTH\NF_vehicles2\ru\t34\data\T34_76_1943_CO.paa",
            "\NORTH\NF_vehicles2\ru\t34\data\T34_85_turret_CO.paa",
            "\NORTH\NF_vehicles2\fin\t34\data\T34_attachments_CO.paa",
            "\NORTH\NF_vehicles\fin\t26\data\Tracks_CA_nosnow.paa",
            "\NORTH\NF_vehicles\fin\t26\data\Tracks_CA_nosnow.paa"
        };
        
        class Damage
        {
            tex[] = {};
            mat[] = {"NORTH\NF_vehicles2\fin\t34\data\T34_76_1943.rvmat","NORTH\NF_vehicles2\fin\t34\data\T34_76_1943_damage.rvmat","NORTH\NF_vehicles\fin\t26\data\T26_destruct.rvmat","NORTH\NF_vehicles2\fin\t34\data\T34_85_turret.rvmat","NORTH\NF_vehicles2\fin\t34\data\T34_85_turret_damage.rvmat","NORTH\NF_vehicles\fin\t26\data\T26_destruct.rvmat","NORTH\NF_vehicles2\fin\t34\data\T34_attachments.rvmat","NORTH\NF_vehicles2\fin\t34\data\T34_attachments_damage.rvmat","NORTH\NF_vehicles\fin\t26\data\T26_destruct.rvmat"};
        };
        class EventHandlers: EventHandlers
        {
            postInit = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
        };
        
        class textureSources
        {
            class Green
            {
                displayName = "Green";
                textures[] = 
                {
                    "\NORTH\NF_vehicles2\ru\t34\data\T34_76_1943_CO.paa",
                    "\NORTH\NF_vehicles2\ru\t34\data\T34_85_turret_CO.paa",
                    "\NORTH\NF_vehicles2\fin\t34\data\T34_attachments_CO.paa",
                    "\NORTH\NF_vehicles\fin\t26\data\Tracks_CA_nosnow.paa",
                    "\NORTH\NF_vehicles\fin\t26\data\Tracks_CA_nosnow.paa"
                };
                factions[] = {"SiP_PVA"};
            };
            class Green2: Green
            {
                displayName = "Green - Washed Out";
                textures[] = 
                {
                    "\NORTH\NF_vehicles2\ru\t34\data\T34_76_1943_winter_1_CO.paa",
                    "\NORTH\NF_vehicles2\ru\t34\data\T34_85_turret_winter_1_CO.paa",
                    "\NORTH\NF_vehicles2\fin\t34\data\T34_attachments_winter_3_CO.paa",
                    "\NORTH\NF_vehicles\fin\t26\data\Tracks_CA_nosnow.paa",
                    "\NORTH\NF_vehicles\fin\t26\data\Tracks_CA_nosnow.paa"
                };
                factions[] = {"SiP_KPA"};
            };
        };
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                maxHorizontalRotSpeed = "((360/21)/40)";
                maxVerticalRotSpeed = 0.5;
                canUseScanners = 0;
                commanding = 3;
                isPersonTurret = 1;
                personTurretAction = "vehicle_turnout_1";
                proxyIndex = 1;
                proxyType = "CPGunner";
                primaryGunner = 1;
                primaryObserver = 0;
                stabilizedInAxes = 0;
                lodTurnedIn = 1200;
                lodTurnedOut = 1000;
                lodOpticsIn = 1000;
                animationSourceHatch = "hatchGunner";
                gunnerName = "Gunner";
                body = "mainTurret";
                gun = "mainGun";
                animationSourceBody = "mainTurret";
                animationSourceGun = "mainGun";
                gunnerType = "SiP_PVA_tank_crew";
                weapons[] = {"SiP_ZIS_S_53_85mm","SiP_dt29_coax"};
                magazines[] = 
                {
                    "SiP_20rnd_BR365K_AP_mag",
                    "SiP_20rnd_BR365K_AP_mag",
                    "SiP_10rnd_BR367P_APCR_mag",
                    "SiP_20rnd_O365K_HE_mag",
                    "SiP_20rnd_O365K_HE_mag",
                    
                    "SiP_63rnd_DT_mag",
                    "SiP_63rnd_DT_mag",
                    "SiP_63rnd_DT_mag",
                    "SiP_63rnd_DT_mag",
                    "SiP_63rnd_DT_mag",
                    "SiP_63rnd_DT_mag",
                    "SiP_63rnd_DT_mag",
                    "SiP_63rnd_DT_mag",
                    "SiP_63rnd_DT_mag",
                    "SiP_63rnd_DT_mag",
                    "SiP_63rnd_DT_mag",
                    "SiP_63rnd_DT_mag",
                    "SiP_63rnd_DT_mag",
                    "SiP_63rnd_DT_mag",
                    "SiP_63rnd_DT_mag",
                    "SiP_63rnd_DT_mag"
                };
                gunnerOpticsModel = "";
                gunnerOpticsEffect[] = {};
                discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000,3100,3200,3300,3400};
                discreteDistanceInitIndex = 4;
                turretInfoType = "SiP_T34_RscOptics_gunner";
                memoryPointGunnerOptics = "Gunnerview";
                usePip = 2;
                class OpticsIn
                {
                    class periscope
                    {
                        initAngleX = 0;
                        minAngleX = 0;
                        maxAngleX = 0;
                        initAngleY = 0;
                        minAngleY = 0;
                        maxAngleY = 0;
                        initFov = 0.75;
                        minFov = 0.75;
                        maxFov = 0.75;
                        directionStabilized = 0;
                        visionMode[] = {"Normal"};
                        thermalMode[] = {0};
                        gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_T34_Driver_Optic.p3d";
                        gunnerOpticsEffect[] = {};
                    };
                    class gunsight: periscope
                    {
                        opticsDisplayName = "1.5x";
                        gunnerOpticsModel = "vn\armor_f_vietnam\pt76\vn_armor_type63_gunner_optic4.p3d";
                        minAngleX = -30;
                        maxAngleX = 30;
                        initAngleY = 0;
                        minAngleY = -100;
                        maxAngleY = 100;
                        initFov = 0.3;
                        minFov = 0.3;
                        maxFov = 0.3;
                    };
                };
                class ViewOptics: ViewOptics
                {
                    visionMode[] = {"Normal"};
                };
                outGunnerMayFire = 1;
                inGunnerMayFire = 1;
                minElev = -10;
                maxElev = 15;
                initElev = 0;
                minTurn = -360;
                maxTurn = 360;
                gunnerAction = "T72_GunnerOut";
                GunnerInAction = "crew_tank01_in";
                CommanderInAction = "crew_tank01_in";
                forcehidegunner = 0;
                forcehidecommander = 0;
                gunnerOutForceOptics = 0;
                gunnerOutOpticsShowCursor = 1;
                class HitPoints: HitPoints
                {
                    class HitTurret: HitTurret
                    {
                        armor = 1;
                        material = -1;
                        name = "firegeo_turret";
                        visual = "damage_turret";
                        passThrough = 0;
                        minimalHit = 0.4;
                        radius = 0.1;
                    };
                    class HitGun: HitGun
                    {
                        armor = 1;
                        material = -1;
                        name = "firegeo_gun";
                        visual = "damage_gun";
                        passThrough = 0;
                        minimalHit = 0.4;
                        radius = 0.05;
                    };
                };
                class Turrets: Turrets
                {
                    class CommanderOptics: CommanderOptics
                    {
                        commanding = 3;
                        canUseScanners = 0;
                        gunnerType = "SiP_PVA_tank_commander";
                        turretInfoType = "RscWeaponZeroing";
                        startEngine = 0;
                        isPersonTurret = 1;
                        personTurretAction = "vehicle_turnout_2";
                        animationSourceHatch = "hatchCommander";
                        primaryGunner = 0;
                        primaryObserver = 1;
                        proxyIndex = 1;
                        proxyType = "CPCommander";
                        memoryPointGunnerOptics = "Commanderview";
                        gunnerName = "Commander";
                        body = "otocvelitele";
                        gun = "obsGun";
                        animationSourceBody = "otocvelitele";
                        animationSourceGun = "obsGun";
                        gunnerAction = "T72_GunnerOut";
                        GunnerInAction = "crew_tank01_in";
                        CommanderInAction = "crew_tank01_in";
                        soundServo[] = {"","db-50",1.0};
                        forcehidecommander = 0;
                        gunnerOpticsColor[] = {1,1,1,1};
                        minElev = -5;
                        maxElev = 15;
                        initElev = 0;
                        minTurn = -360;
                        maxTurn = 360;
                        initTurn = 0;
                        maxHorizontalRotSpeed = 1.0;
                        maxVerticalRotSpeed = 1.2;
                        outGunnerMayFire = 1;
                        inGunnerMayFire = 1;
                        viewGunnerInExternal = 0;
                        class OpticsIn
                        {
                            class Near
                            {
                                opticsDisplayName = "2.5x";
                                useModelOptics = 1;
                                gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_T34_Commander_Optic.p3d";
                                gunnerOpticsEffect[] = {"OpticsCHAbera1","OpticsBlur1"};
                                initAngleX = 0;
                                minAngleX = -30;
                                maxAngleX = 30;
                                initAngleY = 0;
                                minAngleY = -360;
                                maxAngleY = 360;
                                initFov = 0.65;
                                minFov = 0.15;
                                maxFov = 0.65;
                                memoryPointGunnerOptics = "Commanderview";
                                visionMode[] = {"Normal"};
                                opticsFlare = 1;
                                opticsDisablePeripherialVision = 1;
                                cameraDir = "";
                            };
                        };
                        gunnerOutOpticsColor[] = {0,0,0,1};
                        gunnerOutForceOptics = 0;
                        gunnerGetInAction = "GetInHemttBack";
                        gunnerGetOutAction = "GetOutHighZamak";
                        class ViewOptics: ViewOptics
                        {
                            initAngleX = 0;
                            minAngleX = -30;
                            maxAngleX = 30;
                            initAngleY = 0;
                            minAngleY = -360;
                            maxAngleY = 360;
                            initFov = 0.15;
                            minFov = 0.15;
                            maxFov = 0.15;
                        };
                        weapons[] = {};
                        magazines[] = {};
                    };
                };
            };
            class BowMG: NewTurret
            {
                commanding = 2;
                canUseScanners = 0;
                turretInfoType = "RscWeaponZeroing";
                startEngine = 0;
                isPersonTurret = 0;
                personTurretAction = "vehicle_turnout_2";
                proxyType = "CPGunner";
                primaryGunner = 0;
                primaryObserver = 0;
                memoryPointGunnerOptics = "Gunnerview2";
                gunnerName = "Hull Gunner";
                gunnerType = "SiP_PVA_tank_crew";
                body = "mainTurret2";
                gun = "mainGun2";
                animationSourceBody = "mainTurret2";
                animationSourceGun = "mainGun2";
                gunnerAction = "T72_GunnerOut";
                GunnerInAction = "crew_tank01_in";
                CommanderInAction = "crew_tank01_in";
                soundServo[] = {"","db-50",1.0};
                forcehidecommander = 1;
                forcehidegunner = 1;
                gunnerOpticsColor[] = {1,1,1,1};
                class HitPoints
                {
                    class HitComTurret
                    {
                        armor = 1;
                        material = -1;
                        name = "firegeo_turret2";
                        visual = "damage_turret2";
                        passThrough = 0;
                        minimalHit = 0.02;
                        radius = 0.1;
                    };
                    class HitComGun
                    {
                        armor = 1;
                        material = -1;
                        name = "firegeo_gun2";
                        visual = "damage_gun2";
                        passThrough = 0;
                        minimalHit = 0.02;
                        radius = 0.05;
                    };
                };
                minElev = -10;
                maxElev = 16;
                initElev = 0;
                minTurn = -22;
                maxTurn = 22;
                initTurn = 0;
                maxHorizontalRotSpeed = 1.2;
                maxVerticalRotSpeed = 1.6;
                outGunnerMayFire = 1;
                inGunnerMayFire = 1;
                viewGunnerInExternal = 0;
                class OpticsIn
                {
                    class Near
                    {
                        opticsDisplayName = "1.5x";
                        useModelOptics = 1;
                        gunnerOpticsModel = "NORTH\NF_vehicles_late\fin\t34\dt_optics.p3d";
                        gunnerOpticsEffect[] = {"OpticsCHAbera1","OpticsBlur1"};
                        initAngleX = 0;
                        minAngleX = -30;
                        maxAngleX = 30;
                        initAngleY = 0;
                        minAngleY = -100;
                        maxAngleY = 100;
                        initFov = 0.3;
                        minFov = 0.3;
                        maxFov = 0.3;
                        memoryPointGunnerOptics = "Gunnerview2";
                        visionMode[] = {"Normal"};
                        opticsFlare = 1;
                        opticsDisablePeripherialVision = 1;
                        cameraDir = "";
                    };
                };
                gunnerOutOpticsColor[] = {0,0,0,1};
                gunnerOutForceOptics = 0;
                gunnerGetInAction = "GetInHemttBack";
                gunnerGetOutAction = "GetOutHighZamak";
                class ViewOptics: ViewOptics
                {
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    initFov = 0.6;
                    minFov = 0.6;
                    maxFov = 0.6;
                };
                weapons[] = {"SiP_dt29_bow"};
                magazines[] = 
                {
                    "SiP_63rnd_DT_mag",
                    "SiP_63rnd_DT_mag",
                    "SiP_63rnd_DT_mag",
                    "SiP_63rnd_DT_mag",
                    "SiP_63rnd_DT_mag",
                    "SiP_63rnd_DT_mag",
                    "SiP_63rnd_DT_mag",
                    "SiP_63rnd_DT_mag",
                    "SiP_63rnd_DT_mag",
                    "SiP_63rnd_DT_mag",
                    "SiP_63rnd_DT_mag",
                    "SiP_63rnd_DT_mag",
                    "SiP_63rnd_DT_mag",
                    "SiP_63rnd_DT_mag",
                    "SiP_63rnd_DT_mag",
                    "SiP_63rnd_DT_mag"
                };
                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
                gunBeg = "usti hlavne2";
                gunEnd = "konec hlavne2";
                memoryPointGun = "usti hlavne2";
            };
        };
        animationList[] = 
        {
            "HideAttachCable",0.5,
            "HideAdditionalTanks",0.2,
            "HideAttachAntenna",0,
            "HideAttachAxe",0,
            "HideAttachShovel",0.5,
            "HideAttachJackhammer",0.5,
            "HideAttachFrontTracks",0,
            "HideAttachSideTracks",0,
            "HideAttachTurretTracksL",0,
            "HideAttachTurretTracksR",0,
            "HideAttachSandbags",0,
            "HideAttachSupplies",1,
            "HideAttachTarp",0.,
            "HideAttachTarpSide",0,
            "HideAttachCopiumFront",1,
            "HideAttachCopiumRear",1,
            "HideAttachCopiumTurret",1,
            "HideAttachCopiumTurretRear",1,
            "HideAttachCopiumTurretTop",1,
            "HideAttachFenders",0,
            "HideAttachToolboxLFront",0,
            "HideAttachFueltanks1",0,
            "HideAttachFueltanks2",0
        };
        class AnimationSources: AnimationSources
        {
            class muzzle_rot_cannon
            {
                source = "ammorandom";
                weapon = "SiP_ZIS_S_53_85mm";
            };
            class recoil_source
            {
                source = "reload";
                weapon = "SiP_ZIS_S_53_85mm";
            };
            
            class HideAttachAntenna
            {
                author = "$STR_NORTH_author";
                displayName = "Hide Antenna";
                initPhase = 0;
                mass = 0;
                source = "user";
                animPeriod = 1e-06;
            };
            class HideAttachFenders: HideAttachAntenna
            {
                displayName = "Hide Fenders";
            };
            class HideAttachCable: HideAttachAntenna
            {
                displayName = "Hide - Misc (Cables)";
            };
            
            class HideAdditionalTanks: HideAttachAntenna
            {
                displayName = "Hide Smoke Canisters";
            };
            
            class HideAttachToolboxLFront: HideAttachAntenna
            {
                displayName = "Hide Toolbox";
            };
            class HideAttachFueltanks1: HideAttachAntenna
            {
                displayName = "Hide Fuel tanks #1";
            };
            class HideAttachFueltanks2: HideAttachAntenna
            {
                displayName = "Hide Fuel tanks #2";
            };
            class HideAttachAxe: HideAttachAntenna
            {
                displayName = "Hide - Tools (Axe)";
            };
            class HideAttachShovel: HideAttachAntenna
            {
                displayName = "Hide - Tools (Shovel)";
            };
            class HideAttachJackhammer: HideAttachAntenna
            {
                displayName = "Hide - Tools (Jackhammer)";
            };
            
            class HideAttachFrontTracks: HideAttachAntenna
            {
                displayName = "Hide - Armor (Tracks)";
            };
            class HideAttachTurretTracksL: HideAttachAntenna
            {
                displayName = "Hide - Misc (Tracks - Left)";
            };
            class HideAttachTurretTracksR: HideAttachAntenna
            {
                displayName = "Hide - Misc (Tracks - Left)";
            };
            class HideAttachSideTracks: HideAttachAntenna
            {
                displayName = "Hide - Armor (Tracks - Left)";
            };
            
            class HideAttachSandbags: HideAttachAntenna
            {
                displayName = "Hide - Misc (Sandbags)";
            };
            class HideAttachSupplies: HideAttachAntenna
            {
                displayName = "Hide - Misc (Supplies)";
            };
            class HideAttachTarp: HideAttachAntenna
            {
                displayName = "Hide - Misc (Tarp - Turret)";
            };
            class HideAttachTarpSide: HideAttachAntenna
            {
                displayName = "Hide - Misc (Tarp - Side)";
            };
            
            class HideAttachCopiumFront: HideAttachAntenna
            {
                displayName = "Hide - Armor (Cages - Side)";
            };
            class HideAttachCopiumRear: HideAttachAntenna
            {
                displayName = "Hide - Armor (Cages - Side - Rear)";
            };
            class HideAttachCopiumTurret: HideAttachAntenna
            {
                displayName = "Hide - Armor (Cages - Turret)";
            };
            class HideAttachCopiumTurretRear: HideAttachAntenna
            {
                displayName = "Hide - Armor (Cages - Turret - Rear)";
            };
            class HideAttachCopiumTurretTop: HideAttachAntenna
            {
                displayName = "Hide - Armor (Cages - Turret - Top)";
            };
        };
        class Exhausts
        {
            class Exhaust_left
            {
                position = "vyfuk start";
                direction = "vyfuk konec";
                effect = "ExhaustsEffect";
            };
            class Exhaust_right
            {
                position = "vyfuk start2";
                direction = "vyfuk konec2";
                effect = "ExhaustsEffect";
            };
        };
        class Reflectors
        {
            class Left
            {
                color[] = {1900,1300,950};
                ambient[] = {5,5,5};
                position = "L svetlo";
                direction = "konec L svetla";
                hitpoint = "L svetlo";
                selection = "L svetlo";
                size = 0.6;
                innerAngle = 100;
                outerAngle = 179;
                coneFadeCoef = 10;
                intensity = 1;
                useFlare = 0;
                dayLight = 0;
                flareSize = 1.0;
                class Attenuation
                {
                    start = 1.0;
                    constant = 0;
                    linear = 0;
                    quadratic = 0.25;
                    hardLimitStart = 30;
                    hardLimitEnd = 60;
                };
            };
            class Right: Left
            {
                position = "R svetlo";
                direction = "konec R svetla";
                hitpoint = "R svetlo";
                selection = "R svetlo";
            };
        };
        aggregateReflectors[] = {{"Left"}};

        class Tower_Settings
        {
            SPE_Crew[] = {"commander","gunner"};
            SPE_SelectionPos = "osaveze";
            SPE_Model = "SPE_M4A1_75_destruct_Turret";
            class Weapons
            {
                class Main_Weapon
                {
                    SPE_Modes[] = {"SiP_ZIS_S_53_85mm","SiP_ZIS_S_53_85mm_AP","SiP_ZIS_S_53_85mm_APCR","SiP_ZIS_S_53_85mm_HE"};
                };
                class Coaxial_Machine_Gun
                {
                    SPE_Modes[] = {"SiP_dt29_coax"};
                };
            };
        };
        LIB_Preload_Proxy[] = {};
        LIB_HitPoints[] = {};
        LIB_ArmorPoints[] = {};
        LIB_CrewPoints[] = {};
        LIB_Cargo_Dir[] = {};
        LIB_Layers_Array[] = {};
        SPE_Layers_Array[] = {"Background","Engine_Status","Fuel_Status","Fuel_Arrow","Speed_Arrow","Vehicle","Compass","Commander_View","Hit_Indicator"};
        class SPE_Veh_HudLayers
        {
            SPE_Layers_Array[] = {"Background","Engine_Status","Fuel_Status","Fuel_Arrow","Speed_Arrow","Vehicle","Compass","Commander_View"};
            class Background
            {
                Type[] = {1,0,1,0};
                Text = "\WW2\SPE_Core_t\System_Tank_Interface_t\UI\Base\Base.paa";
                Color[] = {{"text",{},"hudcolor"},"SPE_Get_Control_Parameter"};
                Angle = 0;
                x = "0 * (((safezoneW / safezoneH) min 1.2) / 40) + (profileNamespace getVariable ['IGUI_SPE_VEHICLE_HUD_X', (safezoneX + 0.5 * (((safezoneW / safezoneH) min 1.2) / 40))])";
                y = "0 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (profileNamespace getVariable ['IGUI_SPE_VEHICLE_HUD_Y', (safezoneY + 0.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
                w = "((safeZoneW*0.43)/(getResolution select 4)*(getResolution select 5))";
                h = "((safeZoneH*0.43)*(getResolution select 5))";
            };
            class Compass: Background
            {
                Type[] = {1,0,1,1};
                Color[] = {{"text",{},"hudcolor"},"SPE_Get_Control_Parameter"};
                Angle[] = {{"angle","hud_compass"},"SPE_Get_Control_Parameter"};
                Text = "\WW2\SPE_Core_t\System_Tank_Interface_t\UI\Base\Compass.paa";
            };
            class Engine_Status: Background
            {
                Color[] = {{"color",{},"enginestatus"},"SPE_Get_Control_Parameter"};
                Text = "\WW2\SPE_Core_t\System_Tank_Interface_t\UI\Base\Engine.paa";
            };
            class Fuel_Status: Background
            {
                Color[] = {{"color",{{0.71,0.71,0.71,1},{0.706,0.0745,0.0196,1},{1,1,1,0.15}},"fuel"},"SPE_Get_Control_Parameter"};
                Text = "\WW2\SPE_Core_t\System_Tank_Interface_t\UI\Base\Fuel.paa";
            };
            class Fuel_Arrow: Background
            {
                Type[] = {1,0,1,1};
                Color[] = {{"text",{},"hudcolor"},"SPE_Get_Control_Parameter"};
                Text = "\WW2\SPE_Core_t\System_Tank_Interface_t\UI\Base\Needle_R.paa";
                Angle[] = {{"angle",{42,-85},"fuelgauge"},"SPE_Get_Control_Parameter"};
            };
            class Speed_Arrow: Fuel_Arrow
            {
                Text = "\WW2\SPE_Core_t\System_Tank_Interface_t\UI\Base\Needle_L.paa";
                Angle[] = {{"angle",{-42,85},"speed"},"SPE_Get_Control_Parameter"};
            };
            class Throttle_Arrow: Speed_Arrow
            {
                Angle[] = {{"angle",{-42,85},"throttle"},"SPE_Get_Control_Parameter"};
            };
            class Commander_View: Fuel_Arrow
            {
                x = "0 * (((safezoneW / safezoneH) min 1.2) / 40) + (profileNamespace getVariable ['IGUI_SPE_VEHICLE_HUD_X', (safezoneX + 0.5 * (((safezoneW / safezoneH) min 1.2) / 40))])";
                y = "0 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (profileNamespace getVariable ['IGUI_SPE_VEHICLE_HUD_Y', (safezoneY + 0.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
                Text = "\WW2\SPE_Core_t\System_Tank_Interface_t\UI\Base\Comm_View.paa";
                Color[] = {{"color",{},"commander_view_direction"},"SPE_Get_Control_Parameter"};
                Angle[] = {{"angle_turret","commander_view_direction"},"SPE_Get_Control_Parameter"};
            };
            class Hit_Indicator: Fuel_Arrow
            {
                Type[] = {1,0,1,1};
                Text = "\WW2\SPE_Core_t\System_Tank_Interface_t\UI\Tanks\Hit_Direction.paa";
                Color[] = {{"color",{},"hit_indicator"},"SPE_Get_Control_Parameter"};
                Angle[] = {{"angle","hit_indicator"},"SPE_Get_Control_Parameter"};
            };
            class Vehicle
            {
                SPE_Layers_Array[] = {"ltrack","rtrack","hull","engine","turret","gun"};
                class SPE_Veh_HudLayers
                {
                    class ltrack: Background
                    {
                        Type[] = {1,0,1,1};
                        x = "1.85 * (((safezoneW / safezoneH) min 1.2) / 40) + (profileNamespace getVariable ['IGUI_SPE_VEHICLE_HUD_X', (safezoneX + 0.5 * (((safezoneW / safezoneH) min 1.2) / 40))])";
                        y = "1.85 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (profileNamespace getVariable ['IGUI_SPE_VEHICLE_HUD_Y', (safezoneY + 0.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
                        w = "(((safeZoneW*0.43)/(getResolution select 4)*(getResolution select 5))*0.65)";
                        h = "(((safeZoneH*0.43)*(getResolution select 5))*0.65)";
                        Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\T34_85\Ltrack.paa";
                        Color[] = {{"color",{{0.71,0.71,0.71,1},{0.706,0.0745,0.0196,1},{0.2,0.2,0.2,1}},"ltrack"},"SPE_Get_Control_Parameter"};
                        Angle[] = {{"angle","hull"},"SPE_Get_Control_Parameter"};
                    };
                    class rtrack: ltrack
                    {
                        Color[] = {{"color",{{0.71,0.71,0.71,1},{0.706,0.0745,0.0196,1},{0.2,0.2,0.2,1}},"rtrack"},"SPE_Get_Control_Parameter"};
                        Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\T34_85\Rtrack.paa";
                    };
                    class hull: ltrack
                    {
                        Color[] = {{"color",{{0.71,0.71,0.71,1},{0.706,0.0745,0.0196,1},{0.2,0.2,0.2,1}},"hull"},"SPE_Get_Control_Parameter"};
                        Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\T34_85\Hull.paa";
                    };
                    class engine: ltrack
                    {
                        Color[] = {{"color",{{0.71,0.71,0.71,1},{0.706,0.0745,0.0196,1},{0.2,0.2,0.2,1}},"engine"},"SPE_Get_Control_Parameter"};
                        Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\T34_85\Engine.paa";
                    };
                    class turret: ltrack
                    {
                        Color[] = {{"color",{{0.71,0.71,0.71,1},{0.706,0.0745,0.0196,1},{0.2,0.2,0.2,1}},"turret"},"SPE_Get_Control_Parameter"};
                        Angle[] = {{"angle","turret"},"SPE_Get_Control_Parameter"};
                        Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\T34_85\Turret.paa";
                    };
                    class gun: turret
                    {
                        Color[] = {{"color",{{0.71,0.71,0.71,1},{0.706,0.0745,0.0196,1},{0.2,0.2,0.2,1}},"gun"},"SPE_Get_Control_Parameter"};
                        Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\T34_85\Gun.paa";
                    };
                };
            };
        };

        commanderCanSee = "2 + 4 + 8 + 32";
        gunnerCanSee = "2 + 4 + 8 + 32";
        driverCanSee = "2 + 4 + 8 + 32";
        hideWeaponsDriver = 1;
        hideWeaponsGunner = 1;
        hideWeaponsCommander = 1;
        sensitivity = 2.5;
        accuracy = 0.7;
        irScanRangeMax = 5000;
        irScanRangeMin = 0;
        crewVulnerable = 0;
        CommanderInAction = "crew_tank01_in";
        forceHideDriver = 1;
        radarType = 0;
        destrType = "DestructDefault";
        attenuationEffectType = "TankAttenuation";
        maxFordingDepth = 0.55;
        cost = 1200000;
        canUseScanners = 0;
        tf_encryptionCode = "tf_east_radio_code";
        tf_dialog = "WW2_Radios_RBM1_radio_dialogue";
        tf_hasLRradio = 1;
        class SpeechVariants
        {
            class Default
            {
                speechSingular[] = {"veh_vehicle_tank_s"};
                speechPlural[] = {"veh_vehicle_tank_p"};
            };
        };
        nameSound = "veh_vehicle_tank_s";
        class SimpleObject
        {
            eden = 1;
            animate[] = 
            {
                {"damagehide",0},
                {"wheel_koll1",0},
                {"wheel_kolol1",0},
                {"wheel_podkolol1",0},
                {"wheel_kolp1",0},
                {"wheel_kolop1",0},
                {"wheel_podkolop1",0},
                {"wheel_koll2",0},
                {"wheel_kolp2",0},
                {"wheel_kolol2",0},
                {"wheel_kolol3",0},
                {"wheel_kolol4",0},
                {"wheel_kolol5",0},
                {"wheel_kolol6",0},
                {"wheel_kolop2",0},
                {"wheel_kolop3",0},
                {"wheel_kolop4",0},
                {"wheel_kolop5",0},
                {"wheel_kolop6",0},
                {"wheel_podkolol2",0},
                {"wheel_podkolol3",0},
                {"wheel_podkolol4",0},
                {"wheel_podkolol5",0},
                {"wheel_podkolol6",0},
                {"wheel_podkolop2",0},
                {"wheel_podkolop3",0},
                {"wheel_podkolop4",0},
                {"wheel_podkolop5",0},
                {"wheel_podkolop6",0},
                {"podkolol1_hide_damage",0},
                {"podkolol2_hide_damage",0},
                {"podkolol3_hide_damage",0},
                {"podkolol4_hide_damage",0},
                {"podkolol5_hide_damage",0},
                {"podkolol6_hide_damage",0},
                {"podkolol7_hide_damage",0},
                {"podkolol8_hide_damage",0},
                {"podkolop1_hide_damage",0},
                {"podkolop2_hide_damage",0},
                {"podkolop3_hide_damage",0},
                {"podkolop4_hide_damage",0},
                {"podkolop5_hide_damage",0},
                {"podkolop6_hide_damage",0},
                {"podkolop7_hide_damage",0},
                {"podkolop8_hide_damage",0},
                {"damagevez",0},
                {"mainturret",0},
                {"maingun",0.17},
                {"hatchcommander",0},
                {"recoil",0},
                {"obsturret",0},
                {"obsgun",0},
                {"maingunoptics",0.17},
                {"maingunint",0.17},
                {"damagevezvelitele",0},
                {"poklop_commander_damage",0},
                {"poklop_driver_damage",0},
                {"hatchdriver",0},
                {"plates_1_y",0},
                {"plates_2_y",0},
                {"plates_1_x",0},
                {"plates_2_x",0},
                {"plates_1_bank",0},
                {"plates_2_bank",0},
                {"drivingwheel",0},
                {"indicatorspeed_mfd_driver",0},
                {"indicatorrpm",0},
                {"indicatorrpm_mfd_driver",0},
                {"lights_driver",0},
                {"lights_driver_off",0},
                {"lights_turret",0},
                {"dmg_com_halo_unhide",0},
                {"engine_damage_indicator",0},
                {"main_gun_damage_indicator",0},
                {"track_damage_indicator",0},
                {"pedal_thrust",0},
                {"pedal_brake",0},
                {"indicatortempwater_mfd_driver",0},
                {"indicatorfuel_mfd_driver",1},
                {"indicator_hull_direction_mfd_driver",0},{"indicator_main_turret_mfd_driver",0},{"indicator_hull_direction_mfd_com",0},{"indicator_main_turret_mfd_com",0},{"indicator_main_turret_onscreen_com",0},{"indicator_com_turret_mfd_com",0},{"indicator_com_turret_onscreen_com",0},{"indicator_hull_direction_mfd_gunner",0},{"indicator_main_turret_mfd_gunner",0},{"indicator_com_smoke_1",1},{"indicator_com_smoke_2",1},{"indicator_damage_engine",0},{"indicator_damage_fuel",0},{"indicator_damage_tracks",0},{"indicator_turret_damage_hull",0},{"lights_turret2",0},{"indicator_turret_damage_engine",0},{"indicator_turret_damage_fuel",0},{"indicator_turret_damage_main_gun",0},{"indicator_turret_damage_track",0},{"indicator_turret_damage_turret",0},{"indicator_turret_damage_comturret",0},{"hide_mfd_and_pip_screen_driver",1},{"hide_mfd_and_pip_screen_gunner",1},{"hide_mfd_elements",1},{"cannon_muzzle_flash",0},{"zaslehrot_cannon",521},{"cannon_ready_light",0},{"turret_control_x",0},{"turret_control_y",0},{"com_turret_control_x",0},{"com_turret_control_y",0}};
            hide[] = {"clan","zasleh","zasleh_1","light_l","light_r","zadni svetlo","brzdove svetlo","podsvit pristroju","poskozeni","nr_hr_Ps","nr_hf_Ps","nr_hf_1","nr_hf_2","nr_hf_3","nr_hf_4","nr_hf_5","nr_hf_6","nr_hf_7","nr_hr_1","nr_hr_2","nr_hr_3","nr_hr_4","nr_hr_5","nr_hr_6","nr_hr_7","nr_tur_1","nr_tur_2","nr_tur_3"};
            verticalOffset = 2.477;
            verticalOffsetWorld = 0;
            init = "[this, '', []] call bis_fnc_initVehicle";
        };
        memoryPointsGetInCargo = "pos cargo";
        memoryPointsGetInCargoDir = "pos cargo dir";
        memoryPointsGetInDriver = "pos driver";
        memoryPointsGetInDriverDir = "pos driver dir";
        memoryPointsGetInGunner = "pos gunner";
        memoryPointsGetInGunnerDir = "pos gunner dir";
        memoryPointsGetInCommander = "pos commander";
        memoryPointsGetInCommanderDir = "pos commander dir";
        NORTH_moloHitProbability[] = {0.9,0.3};
        NORTH_moloHitProbabilityCoef[] = {{0.85,0.9,1},{0.5,0.7,1}};
        driverOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_T34_Driver_Optic.p3d";
        proxyType = "CPDriver";
        mapSize = 8;
        threat[] = {0.9,1,0.9};
        nightVision = 0;
        driverForceOptics = 1;
        memoryPointDriverOptics = "driverview";
        memoryPointDriverOutOptics = "driverview";
        unloadInCombat = 1;
        typicalCargo[] = {};
        getInAction = "GetInMedium";
        getOutAction = "GetOutMedium";
        cargoGetInAction[] = {"GetInLow"};
        cargoGetOutAction[] = {"GetOutLow"};
        insideSoundCoef = 0.9;
        enableGPS = 0;
        damperSize = 0.35;
        damperForce = 0.4;
        damperDamping = 0.25;
        terrainCoef = 2.0;
        supplyRadius = 4.0;
        memoryPointSupply = "doplnovani";
        getInRadius = 2.5;
        bounding = "light_L";
        alphaTracks = 1;
        memoryPointTrack1L = "Stopa ll";
        memoryPointTrack1R = "Stopa lr";
        memoryPointTrack2L = "Stopa rl";
        memoryPointTrack2R = "Stopa rr";
        selectionLeftOffset = "pasoffsetL";
        selectionRightOffset = "pasoffsetP";
        class Attributes{};
    };

    class SiP_KPA_t34_85_base: SiP_t34_85_base
    {
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                gunnerType = "SiP_KPA_tank_crew";
                class Turrets: Turrets
                {
                    class CommanderOptics: CommanderOptics
                    {
                        gunnerType = "SiP_KPA_tank_commander";
                    };
                };
            };
            class BowMG: BowMG
            {
                gunnerType = "SiP_KPA_tank_crew";
            };
        };
    };

    class SiP_PVA_t34_85: SiP_t34_85_base
    {
        author = "Letlev";
        displayname = "T-34-85";
        scope = 2;
        scopeCurator = 2;
        side = 0;
        faction = "SiP_PVA";
        editorCategory = "SiP_PVA_Editor_Category";
        crew = "SiP_PVA_tank_crew";
        textureList[] = 
        {
            "Green",1
        };
    };
    class SiP_KPA_t34_85: SiP_KPA_t34_85_base
    {
        author = "Letlev";
        displayname = "T-34-85";
        scope = 2;
        scopeCurator = 2;
        side = 0;
        faction = "SiP_KPA";
        editorCategory = "SiP_KPA_Editor_Category";
        crew = "SiP_KPA_tank_crew";
        textureList[] = 
        {
            "Green2",1
        };
    };
};

class cfgsoundsets
{
    class vn_basic_weapon_heavy_shot_soundset;

    class SiP_ZIS_S_53_85mm_shot_soundset: vn_basic_weapon_heavy_shot_soundset
    {
        soundshaders[] = 
        {
            "vn_cannon_85mm_internal_shot_soundshader",
            "WW2_int_cannon_large_shot_fp_SoundShader",
            "vn_cannon_85mm_close_distance_shot_soundshader",
            "vn_cannon_shared_medium_distance_shot_soundshader",
            "vn_cannon_shared_far_distance_shot_soundshader"
        };
    };
};

class cfgWeapons
{
    class LIB_TankMGun_base;
    class LIB_DT29: LIB_TankMGun_base
    {
        class manual;
        class close;
        class short;
        class medium;
        class far;
    };

    class SiP_dt29_coax: LIB_DT29
    {
        displayname = "DT-29 MG";
        magazines[] = {"SiP_63rnd_DT_mag"};
        class manual: manual
        {
            reloadTime = 0.109;
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"NORTH_dtvic_Shot_soundSet","jsrs_ww2_mg_reverb_soundset"};
            };
        };
        class close: close
        {
            reloadTime = 0.109;
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"NORTH_dtvic_Shot_soundSet","jsrs_ww2_mg_reverb_soundset"};
            };
        };
        class short: short
        {
            reloadTime = 0.109;
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"NORTH_dtvic_Shot_soundSet","jsrs_ww2_mg_reverb_soundset"};
            };
        };
        class medium: medium
        {
            reloadTime = 0.109;
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"NORTH_dtvic_Shot_soundSet","jsrs_ww2_mg_reverb_soundset"};
            };
        };
        class far: far
        {
            reloadTime = 0.109;
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"NORTH_dtvic_Shot_soundSet","jsrs_ww2_mg_reverb_soundset"};
            };
        };
        class GunParticles
        {
            class effect1
            {
                positionName = "usti hlavne1";
                directionName = "konec hlavne1";
                effectName = "machineguncloud";
            };
        };
    };
    class SiP_dt29_bow: SiP_dt29_coax
    {
        class GunParticles
        {
            class effect1
            {
                positionName = "usti hlavne2";
                directionName = "konec hlavne2";
                effectName = "machineguncloud";
            };
        };
    };

    class SPE_TankCannon_base;
    class SPE_M1_76mm_base: SPE_TankCannon_base
    {
        class player;
        class close;
        class short;
        class medium;
        class far;
    };

    class SiP_ZIS_S_53_85mm_base: SPE_M1_76mm_base
    {
        displayName = "ZiS-S-53 85mm";
        magazines[] = 
        {
            "SiP_20rnd_O365K_HE_mag",
            "SiP_20rnd_BR365K_AP_mag",
            "SiP_10rnd_BR367P_APCR_mag"
        };
        magazineWell[] = {};
        class player: player
        {
            sounds[] = {"standardsound"};
            class standardsound
            {
                soundsetshot[] = {"SiP_ZIS_S_53_85mm_shot_soundset","vn_cannon_shot_tails_soundset"};
            };
        };
        class close: close
        {
            sounds[] = {"standardsound"};
            class standardsound
            {
                soundsetshot[] = {"SiP_ZIS_S_53_85mm_shot_soundset","vn_cannon_shot_tails_soundset"};
            };
        };
        class short: short
        {
            sounds[] = {"standardsound"};
            class standardsound
            {
                soundsetshot[] = {"SiP_ZIS_S_53_85mm_shot_soundset","vn_cannon_shot_tails_soundset"};
            };
        };
        class medium: medium
        {
            sounds[] = {"standardsound"};
            class standardsound
            {
                soundsetshot[] = {"SiP_ZIS_S_53_85mm_shot_soundset","vn_cannon_shot_tails_soundset"};
            };
        };
        class far: far
        {
            sounds[] = {"standardsound"};
            class standardsound
            {
                soundsetshot[] = {"SiP_ZIS_S_53_85mm_shot_soundset","vn_cannon_shot_tails_soundset"};
            };
        };
        class GunParticles
        {
            class FirstEffect
            {
                positionName = "Usti hlavne";
                directionName = "Konec hlavne";
                effectName = "CannonFired";
            };
        };
    };
    class SiP_ZIS_S_53_85mm_AP_AI: SiP_ZIS_S_53_85mm_base
    {
        magazines[] = {"SiP_20rnd_BR365K_AP_mag"};
        magazineWell[] = {};
        modes[] = {"close","short","medium","far"};
    };
    class SiP_ZIS_S_53_85mm_HE_AI: SiP_ZIS_S_53_85mm_base
    {
        magazines[] = {"SiP_20rnd_O365K_HE_mag"};
        magazineWell[] = {};
        modes[] = {"close","short","medium","far"};
    };
    class SiP_ZIS_S_53_85mm_APCR_AI: SiP_ZIS_S_53_85mm_base
    {
        magazines[] = {"SiP_10rnd_BR367P_APCR_mag"};
        magazineWell[] = {};
        modes[] = {"close","short","medium","far"};
    };
    class SiP_ZIS_S_53_85mm: SiP_ZIS_S_53_85mm_base
    {
        ballisticsComputer = "2";
        muzzles[] = {"MODE_PLAYER_ALL","MODE_AI_AP","MODE_AI_APCR","MODE_AI_HE"};
        class MODE_AI_AP: SiP_ZIS_S_53_85mm_AP_AI{};
        class MODE_AI_HE: SiP_ZIS_S_53_85mm_HE_AI{};
        class MODE_AI_APCR: SiP_ZIS_S_53_85mm_APCR_AI{};
        class MODE_PLAYER_ALL: SiP_ZIS_S_53_85mm_base{};
    };
};

class cfgMagazines
{
    class LIB_63rnd_DT;

    class SiP_63rnd_DT_mag: LIB_63rnd_DT
    {
        displayName = "DT MG Ammo";
        ammo = "vn_762x54";
    };

    class vn_t62_v_20_he_mag;
    class vn_t62_v_4_aphe_mag;
    class vn_t62_v_6_hvapt_mag;

    class SiP_20rnd_O365K_HE_mag: vn_t62_v_20_he_mag
    {
        displayname = "O-365K 85mm HE";
        displaynameshort = "O-365K HE";
        muzzleImpulseFactor[] = {1,39.84};
    };
    class SiP_20rnd_BR365K_AP_mag: vn_t62_v_4_aphe_mag
    {
        displayname = "BR-365K 85mm AP";
        displaynameshort = "BR-365K AP";
        count = 20;
        muzzleImpulseFactor[] = {1,7.5};
    };
    class SiP_10rnd_BR367P_APCR_mag: vn_t62_v_6_hvapt_mag
    {
        displayname = "BR-367P 85mm APCR";
        displaynameshort = "BR-365K APCR";
        muzzleImpulseFactor[] = {1,10.95};
        count = 10;
    };
};