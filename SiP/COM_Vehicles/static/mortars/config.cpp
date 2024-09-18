class cfgPatches
{
    class SiP_Patch_pva_mortars_static
    {
        addonRootClass = "SiP_Patch_Communist_vehicles";
        requiredAddons[] = 
        {
            "static_f_vietnam",
            "static_f_vietnam_c",
            "weapons_v_f_vietnam",
            "WW2_Assets_c_Vehicles_StaticWeapons_c"
        };
        units[] = 
        {
            "SiP_PVA_bm37_82mm_mortar",
            "SiP_KPA_bm37_82mm_mortar",
            "SiP_PVA_W_bm37_82mm_mortar",

            "SiP_PVA_pm41_82mm_mortar",
            "SiP_KPA_pm41_82mm_mortar",
            "SiP_PVA_w_pm41_82mm_mortar"
        };
        weapons[] = 
        {
            "SiP_rm38_50mm_mortar_weapon"
        };
    };
};

class Mode_SemiAuto;
class Mode_Burst;

class cfgVehicles
{
    class StaticMortar;

    class LIB_StaticMortar_base: StaticMortar
    {
        class Turrets;
    };
    class LIB_SU_Mortar_base: LIB_StaticMortar_base
    {
        class Turrets: Turrets
        {
            class MainTurret;
        };
    };

    class vn_static_mortar_type53_base;

    //BM-37
    class SiP_bm37_82mm_mortar_base: LIB_SU_Mortar_base
    {
        author = "Letlev";
        scope = 1;
        scopecurator = 1;
        side = 0;
        editorSubcategory = "SiP_Mortars_Editor_Subcategory";
        vehicleClass = "SiP_mortars_vehicle_class";
        icon = "\WW2\Assets_t\Weapons\Icons_t\Mortars\Icon_GrWr34_ca.paa";
        displayname = "BM-37 82mm Mortar";
        model = "\WW2\Assets_m\Weapons\Mortars_m\IF_Bm37.p3d";
        hiddenSelections[] = {"camo_0","camo_1"};
        hiddenSelectionsTextures[] = {"WW2\Assets_t\Weapons\Mortars_t\IF_Bm37\Bm37.paa","WW2\Assets_t\Weapons\Mortars_t\IF_Bm37\Mp41pris.paa"};
        mapSize = 1.96;
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = {"LIB_BM37"};
                magazines[] = 
                {
                    "LIB_8Rnd_82mmHE_BM37",
                    "LIB_8Rnd_82mmHE_BM37",
                    "LIB_8Rnd_82mmHE_BM37",
                    "LIB_8Rnd_82mmHE_BM37",
                    "LIB_8Rnd_82mmHE_BM37",
                    "LIB_8Rnd_82mmHE_BM37",
                    "LIB_8Rnd_82mmHE_BM37",
                    "LIB_8Rnd_82mmHE_BM37",
                    "LIB_8Rnd_82mmHE_BM37",
                    "LIB_8Rnd_82mmHE_BM37",
                    "LIB_8Rnd_82mmHE_BM37",
                    "LIB_8Rnd_82mmHE_BM37",
                    "LIB_8Rnd_82mmHE_BM37",
                    "LIB_8Rnd_82mmHE_BM37"
                };
            };
        };
        class UserActions
        {
            class Turn_left
            {
                displayName = "$STR_DIR_LEFT";
                priority = 4;
                radius = 2.5;
                position = "osaveze";
                showWindow = 0;
                onlyForPlayer = 1;
                shortcut = "";
                condition = "(alive this) && (((isNull gunner this) || (call ww2_fnc_findPlayer) == gunner this)) && (this getVariable ['Enable_Dir',true])";
                statement = "this setDir (getDir this - 45);";
            };
            class Turn_right: Turn_left
            {
                displayName = "$STR_DIR_RIGHT";
                statement = "this setDir (getDir this + 45);";
            };
        };
    };
    class SiP_PVA_bm37_82mm_mortar: SiP_bm37_82mm_mortar_base
    {
        scope = 2;
        scopeCurator = 2;
        faction = "SiP_PVA";
        crew = "SiP_PVA_gunner";
        typicalCargo[] = {"SiP_PVA_gunner"};
    };
    class SiP_KPA_bm37_82mm_mortar: SiP_PVA_bm37_82mm_mortar
    {
        faction = "SiP_KPA";
        crew = "SiP_KPA_gunner";
        typicalCargo[] = {"SiP_KPA_gunner"};
    };
    class SiP_PVA_W_bm37_82mm_mortar: SiP_PVA_bm37_82mm_mortar
    {
        faction = "SiP_PVA_w";
        editorCategory = "SiP_PVA_w_Editor_Category";
        crew = "SiP_PVA_gunner_w";
        typicalCargo[] = {"SiP_PVA_gunner_w"};
    };
    
    //PM-41
    class SiP_PVA_pm41_82mm_mortar: vn_static_mortar_type53_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "PM-41 82mm Mortar";
        side = 0;
        faction = "SiP_PVA";
        editorSubcategory = "SiP_Mortars_Editor_Subcategory";
        vehicleClass = "SiP_mortars_vehicle_class";
        crew = "SiP_PVA_gunner";
        typicalCargo[] = {"SiP_PVA_gunner"};
    };
    class SiP_KPA_pm41_82mm_mortar: SiP_PVA_pm41_82mm_mortar
    {
        faction = "SiP_KPA";
        crew = "SiP_KPA_gunner";
        typicalCargo[] = {"SiP_KPA_gunner"};
    };
    class SiP_PVA_w_pm41_82mm_mortar: SiP_PVA_pm41_82mm_mortar
    {
        faction = "SiP_PVA_w";
        editorCategory = "SiP_PVA_w_Editor_Category";
        crew = "SiP_PVA_gunner_w";
        typicalCargo[] = {"SiP_PVA_gunner_w"};
    };
};

class cfgWeapons
{
    class NORTH_wep_50mm_mortar;

    class SiP_rm38_50mm_mortar_weapon: NORTH_wep_50mm_mortar
	{
        displayName = "50mm RM-38";
        modes[] = {"Single2","Single3"};
        class Single1: Mode_SemiAuto
		{
			displayName = "$STR_A3_mortar_120mm_AMOS_Single10";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\sochor_155mm_distant",2.5118864,1,1500};
				soundBegin[] = {"begin1",1};
				soundSetShot[] = {"SPE_mortar_Shot_SoundSet","vn_mortar_tails_soundset"};
			};
			reloadSound[] = {"A3\sounds_f\dummysound",1,1,20};
			reloadTime = 3;
			artilleryDispersion = 5;
			artilleryCharge = 0.3;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
		class Single2: Single1
		{
			displayName = "$STR_A3_mortar_120mm_AMOS_Single30";
			artilleryCharge = 0.48;
			minRange = 56;
			minRangeProbab = 0.2;
			midRange = 100;
			midRangeProbab = 0.5;
			maxRange = 230;
			maxRangeProbab = 1;
		};
		class Single3: Single1
		{
			displayName = "$STR_A3_mortar_120mm_AMOS_Single50";
			artilleryCharge = 0.85;
			minRange = 150;
			minRangeProbab = 0.2;
			midRange = 300;
			midRangeProbab = 0.5;
			maxRange = 736;
			maxRangeProbab = 1;
		};
		class Burst1: Mode_Burst
		{
			showToPlayer = 0;
			displayName = "$STR_A3_mortar_120mm_AMOS_Burst10";
			burst = 6;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\sochor_155mm_distant",2.5118864,1,1500};
				soundBegin[] = {"begin1",1};
                soundSetShot[] = {"SPE_mortar_Shot_SoundSet","vn_mortar_tails_soundset"};
			};
			reloadSound[] = {"A3\sounds_f\dummysound",1,1,20};
			soundBurst = 0;
			reloadTime = 3;
			minRange = 800;
			minRangeProbab = 0.5;
			midRange = 1500;
			midRangeProbab = 0.7;
			maxRange = 2000;
			maxRangeProbab = 0.5;
			artilleryDispersion = 5.3;
			artilleryCharge = 0.19;
		};
		class Burst2: Burst1
		{
			showToPlayer = 0;
			displayName = "$STR_A3_mortar_120mm_AMOS_Burst30";
			minRange = 5200;
			minRangeProbab = 0.3;
			midRange = 8000;
			midRangeProbab = 0.4;
			maxRange = 13300;
			maxRangeProbab = 0.3;
			artilleryCharge = 0.48;
		};
		class Burst3: Burst1
		{
			showToPlayer = 0;
			displayName = "$STR_A3_mortar_120mm_AMOS_Burst50";
			minRange = 25000;
			minRangeProbab = 0.1;
			midRange = 40000;
			midRangeProbab = 0.2;
			maxRange = 58000;
			maxRangeProbab = 0.1;
			artilleryCharge = 1;
		};
    };
};