class cfgPatches
{
    class SiP_Patch_Communist_Howitzers
    {
        addonRootClass = "SiP_Patch_Communist_vehicles";
        requiredAddons[] = 
        {
            "static_f_vietnam_c",
            "weapons_v_f_vietnam_c",
            "NORTH_StaticWeapons_cfg"
        };
        units[] = 
        {
            "SiP_ML10_152mm_base",
            "SiP_ML10_152mm_PVA",
            "SiP_ML10_152mm_KPA",
            "SiP_ML10_152mm_PVA_w"
        };
        weapons[] = 
        {
            "SiP_ML10_152mm_weapon"
        };
        magazines[] = 
        {
            "SiP_30x_152mm_HE",
            "SiP_30x_152mm_SMK"
        };
    };
};

class Mode_SemiAuto;

class cfgWeapons
{
    class vn_howitzer_105mm_base;

    class vn_howitzer_105mm: vn_howitzer_105mm_base
	{
		class Single1;
		class Burst1;
	};

    class SiP_ML10_152mm_weapon: vn_howitzer_105mm
    {
        displayName = "ML-20 152mm Howizter";
        magazines[] = 
        {
            "SiP_30x_152mm_HE",
            "SiP_30x_152mm_SMK"
        };
        class GunParticles
        {
            class effect1
            {
                positionName = "usti hlavne";
                directionName = "usti hlavne";
                effectName = "CannonFired";
            };
        };
        reloadTime = 7;
        magazineReloadTime = 7;
        autoReload = 1;
        modes[] = {"Single1","Single2","Single3","Single4","Single5"};
        class Single1: Mode_SemiAuto
        {
            displayName = "$STR_A3_mortar_120mm_AMOS_Single10";
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"WW2_cannon_huge_Shot_SoundSet","WW2_cannon_large_Tail_SoundSet"};
            };
            reloadSound[] = {"A3\sounds_f\dummysound",1,1,20};
            reloadTime = 7;
            artilleryDispersion = 5.2;
            artilleryCharge = 0.19;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 10;
            minRange = 1;
            minRangeProbab = 0.2;
            midRange = 500;
            midRangeProbab = 0.5;
            maxRange = 930;
            maxRangeProbab = 1;
        };
        class Single2: Single1
        {
            displayName = "$STR_A3_mortar_120mm_AMOS_Single20";
            artilleryCharge = 0.3;
            artilleryDispersion = 6.2;
            minRange = 800;
            minRangeProbab = 0.2;
            midRange = 1500;
            midRangeProbab = 0.5;
            maxRange = 2300;
            maxRangeProbab = 1;
        };
        class Single3: Single1
        {
            displayName = "$STR_A3_mortar_120mm_AMOS_Single30";
            artilleryCharge = 0.48;
            artilleryDispersion = 7.2;
            minRange = 2000;
            minRangeProbab = 0.2;
            midRange = 4000;
            midRangeProbab = 0.5;
            maxRange = 6000;
            maxRangeProbab = 1;
        };
        class Single4: Single1
        {
            displayName = "$STR_A3_mortar_120mm_AMOS_Single40";
            artilleryCharge = 0.8;
            artilleryDispersion = 9;
            minRange = 5000;
            minRangeProbab = 0.2;
            midRange = 10000;
            midRangeProbab = 0.5;
            maxRange = 16500;
            maxRangeProbab = 1;
        };
        class Single5: Single1
        {
            displayName = "$STR_A3_mortar_120mm_AMOS_Single50";
            artilleryCharge = 1;
        };
    };
};

class cfgMagazines
{
    class SPE_20x_Shell_105L28_Gr38_HE;

    class SiP_30x_152mm_HE: SPE_20x_Shell_105L28_Gr38_HE
    {
        displayName = "30x 152mm HE shell crate";
        displayNameShort = "152mm HE";
        descriptionShort = "30rnd 152mm HE shell crate";
        count = 30;
        ammo = "SPE_S_105L28_Gr38";
    };
    class SiP_30x_152mm_SMK: SiP_30x_152mm_HE
    {
        displayName = "30x 152mm SMK shell crate";
        displayNameShort = "152mm SMK";
        descriptionShort = "30rnd 152mm Smoke shell crate";
        ammo = "SPE_S_105L28_Gr38_NB";
    };
};

class cfgVehicles
{
    class StaticWeapon;
    class StaticCannon: StaticWeapon
    {
        class Turrets
        {
            class MainTurret;
        };
    };
    class SiP_howitzer_base: StaticCannon
    {
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                class ViewOptics;
            };
        };
        class EventHandlers;
        class HitPoints;
    };

    class SiP_ML10_152mm_base: SiP_howitzer_base
    {
        mapSize = 2;
        scope = 1;
        scopeCurator = 1;
        side = 0;
        artilleryScanner = 1;
        availableforsupporttypes[] = {"Artillery"};
        cargoAction[] = {"NORTH_76k02_Assistant"};
        transportSoldier = 1;
        getInRadius = 5;
        hideWeaponsGunner = 1;
        hideWeaponsCargo = 1;
        memoryPointsGetInCargo = "pos_cargo";
        memoryPointsGetInGunner = "pos_gunner";
        ace_dragging_canDrag = 1;
        ace_dragging_canCarry = 0;
        author = "Letlev";
        displayName = "ML-10 152mm Howitzer";
        descriptionShort = "$STR_NORTH_descShortWep152h38";
        model = "\NORTH\NF_Static\152h38\152h38.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"NORTH\NF_Static\152H38\data\152H38_CO.paa"};
        editorSubcategory = "SiP_Artillery_Editor_Subcategory";
        vehicleClass = "SiP_Artillery_vehicle_class";
        icon = "\WW2\Assets_t\Vehicles\Icons_t\Icon_LeFH18_ca.paa";
        class EventHandlers: EventHandlers
        {
            postInit = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
        };
        class Library
        {
            libTextDesc = "$STR_NORTH_libDescWep152h38";
        };
        editorPreview = "\NORTH\north_editorPreviewsSTC\data\NORTH_SOV_152mm1938.jpg";
        class HitPoints: HitPoints
        {
            class HitHull
            {
                armor = 1;
                radius = 0.1;
                material = -1;
                name = "firegeo_hull";
                visual = "camo";
                passThrough = 1;
                minimalHit = 0.02;
            };
        };
        class Damage
        {
            tex[] = {};
            mat[] = {"NORTH\NF_Static\152h38\data\152h38.rvmat","NORTH\NF_Static\152h38\data\152h38_damage.rvmat","NORTH\NF_Static\152h38\data\152h38_destruct.rvmat"};
        };
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                memoryPointsGetInGunner = "pos_gunner";
                getInRadius = 5;
                elevationMode = 3;
                minElev = 30;
                maxelev = 90;
                initelev = 45;
                minturn = -180;
                maxturn = 180;
                turretInfoType = "RscWeaponZeroing";
                discreteDistance[] = {100,150,200,250,300,350,400,450,500,550,600,700,800,900,1000,1200,1400,1600,1800,2000};
                discreteDistanceInitIndex = 1;
                weapons[] = {"SiP_ML10_152mm_weapon"};
                magazines[] = 
                {
                    "SiP_30x_152mm_HE",
                    "SiP_30x_152mm_HE",
                    "SiP_30x_152mm_HE",
                    "SiP_30x_152mm_HE",
                    "SiP_30x_152mm_HE",
                    "SiP_30x_152mm_HE",
                    "SiP_30x_152mm_SMK"
                };
                gunnerAction = "NORTH_76k02_Gunner";
                selectionFireAnim = "zasleh";
                gunnerOpticsModel = "NORTH\NF_vehicles\fin\t26\simple_optics.p3d";
                discreteDistanceCameraPoint[] = {"eye"};
                class ViewOptics: ViewOptics
                {
                    initFov = 0.096;
                    maxFov = 0.096;
                    minFov = 0.096;
                };
            };
        };
        class AnimationSources
        {
            class muzzle_source
            {
                source = "reload";
                weapon = "SiP_ML10_152mm_weapon";
            };
            class ReloadAnim
            {
                source = "reload";
                weapon = "SiP_ML10_152mm_weapon";
            };
            class ReloadMagazine
            {
                source = "reloadmagazine";
                weapon = "SiP_ML10_152mm_weapon";
            };
        };
    };

    class SiP_ML10_152mm_PVA: SiP_ML10_152mm_base
    {
        scope = 2;
        scopeCurator = 2;
        side = 0;
        faction = "SiP_PVA";
        editorCategory = "SiP_PVA_Editor_Category";
        crew = "SiP_PVA_gunner";
        typicalCargo[] = {"SiP_PVA_gunner"};
    };

    class SiP_ML10_152mm_KPA: SiP_ML10_152mm_PVA
    {
        faction = "SiP_KPA";
        editorCategory = "SiP_KPA_Editor_Category";
        crew = "SiP_KPA_gunner";
        typicalCargo[] = {"SiP_KPA_gunner"};
    };

    class SiP_ML10_152mm_PVA_w: SiP_ML10_152mm_PVA
    {
        faction = "SiP_PVA_w";
        editorCategory = "SiP_PVA_w_Editor_Category";
        crew = "SiP_PVA_gunner_w";
        typicalCargo[] = {"SiP_PVA_gunner_w"};
        hiddenSelectionsTextures[] = {"NORTH\NF_Static\152H38\data\152H38_winter_2_CO.paa"};
        editorPreview = "\NORTH\north_editorPreviewsSTC\data\NORTH_SOV_W_152mm1938.jpg";
    };
};