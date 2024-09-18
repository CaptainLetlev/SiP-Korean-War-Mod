class cfgPatches
{
    class SiP_Patch_Communist_statics_antitank
    {
        addonRootClass = "SiP_Patch_Communist_vehicles";
        requiredAddons[] = 
        {
            "WW2_Assets_c_Vehicles_Weapons_c",
            "WW2_Assets_c_Vehicles_StaticWeapons_c_Zis3",
        };
        units[] = 
        {
            "SiP_zis3_at_gun",
            "SiP_KPA_zis3_at_gun",
            "SiP_PVA_w_zis3_at_gun",
            "SiP_m42_at_gun",
            "SiP_KPA_m42_at_gun",
            "SiP_PVA_w_m42_at_gun"
        };
        weapons[] = 
        {
            "SiP_zis3_cannon"
        };
        magazines[] = 
        {
            "SiP_BR350B_AP",
            "SiP_50x_BR350B_ZiS3_AP"
        };
    };
};

class cfgWeapons
{
    class LIB_StaticGunCannon_base;
    class LIB_ZIS3_base: LIB_StaticGunCannon_base
    {
        class player;
        class close;
        class short;
        class medium;
        class far;
    };

    class SiP_zis3_cannon_base: LIB_ZIS3_base
    {
        class player: player
        {
            sounds[] = {"standardsound"};
            class standardsound
            {
                soundsetshot[] = {"vn_cannon_76mm_shot_soundset","vn_cannon_shot_tails_soundset"};
            };
        };
        class close: close
        {
            sounds[] = {"standardsound"};
            class standardsound
            {
                soundsetshot[] = {"vn_cannon_76mm_shot_soundset","vn_cannon_shot_tails_soundset"};
            };
        };
        class short: short
        {
            sounds[] = {"standardsound"};
            class standardsound
            {
                soundsetshot[] = {"vn_cannon_76mm_shot_soundset","vn_cannon_shot_tails_soundset"};
            };
        };
        class medium: medium
        {
            sounds[] = {"standardsound"};
            class standardsound
            {
                soundsetshot[] = {"vn_cannon_76mm_shot_soundset","vn_cannon_shot_tails_soundset"};
            };
        };
        class far: far
        {
            sounds[] = {"standardsound"};
            class standardsound
            {
                soundsetshot[] = {"vn_cannon_76mm_shot_soundset","vn_cannon_shot_tails_soundset"};
            };
        };
        magazines[] = {"SiP_50x_BR350B_ZiS3_AP","LIB_10x_BR350P_ZiS3_APCR","LIB_50x_OF350_ZiS3_HE","SiP_BR350B_AP","LIB_BR350P_APCR","LIB_OF350_HE"};
    };

    class SiP_ZIS3_HE_AI: SiP_zis3_cannon_base
    {
        magazines[] = {"LIB_50x_OF350_ZiS3_HE","LIB_OF350_HE"};
        modes[] = {"close","short","medium","far"};
    };
    class SiP_zis3_cannon: SiP_zis3_cannon_base
    {
        muzzles[] = {"MODE_AI_HE","MODE_PLAYER_ALL"};
        class MODE_AI_HE: SiP_ZIS3_HE_AI{};
        class MODE_PLAYER_ALL: SiP_zis3_cannon_base{};
    };
};

class cfgMagazines
{
    class LIB_BR350B_AP;
    class LIB_40x_BR350B_ZiS3_AP;

    class SiP_BR350B_AP: LIB_BR350B_AP
    {
        displayname = "BR350B AP";
        count = 1;
        tracerScale = 2.3;
        initSpeed = 680;
        tracersEvery = 1;
        nameSound = "cannon";
    };
    class SiP_50x_BR350B_ZiS3_AP: SiP_BR350B_AP
    {
        count = 50;
    };
};

class cfgVehicles
{
    class StaticCannon;
    class LIB_StaticCannon_base: StaticCannon
    {
        class Turrets;
    };
    class LIB_Zis3_base: LIB_StaticCannon_base
    {
        class Turrets: Turrets
        {
            class MainTurret;
            class CommanderOptics;
        };
        class AnimationSources;
    };

    class NORTH_SOV_45mm1937;

    class SiP_zis3_at_gun: LIB_Zis3_base
    {
        displayName = "ZIS-3 76mm AT Gun";
        scope = 2;
        side = 0;
        editorSubcategory = "SiP_Antitank_Editor_Subcategory";
        vehicleClass = "SiP_Antitank_vehicle_class";
        faction = "SiP_PVA";
        editorCategory = "SiP_PVA_Editor_Category";
        crew = "SiP_PVA_gunner";
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = {"SiP_zis3_cannon"};
                magazines[] = {"SiP_50x_BR350B_ZiS3_AP","SiP_50x_BR350B_ZiS3_AP","LIB_50x_OF350_ZiS3_HE"};
            };
            class CommanderOptics: CommanderOptics
			{
				gunnerType = "SiP_PVA_gunner";
            };
        };
        class AnimationSources: AnimationSources
        {
            class LIB_ZIS3_reload_weapon_state
            {
                source = "reload";
                weapon = "SiP_zis3_cannon";
            };
            class recoil_source
            {
                source = "reload";
                weapon = "SiP_zis3_cannon";
            };
            class LIB_ZIS3_reload_magazine_state: LIB_ZIS3_reload_weapon_state
            {
                source = "reloadmagazine";
            };
            class LIB_ZIS3_count_magazine_state: LIB_ZIS3_reload_weapon_state
            {
                source = "revolving";
            };
            class PanoramaY: recoil_source
            {
                animPeriod = 0.001;
            };
            class Reflector: recoil_source
            {
                animPeriod = 0.001;
                initPhase = 0;
            };
        };
    };
    class SiP_KPA_zis3_at_gun: SiP_zis3_at_gun
    {
        scope = 2;
        scopeCurator = 2;
        faction = "SiP_KPA";
        editorCategory = "SiP_KPA_Editor_Category";
        crew = "SiP_KPA_gunner";
    };
    class SiP_PVA_w_zis3_at_gun: SiP_zis3_at_gun
    {
        faction = "SiP_PVA_w";
        editorCategory = "SiP_PVA_w_Editor_Category";
        crew = "SiP_PVA_gunner_w";
    };

    class SiP_m42_at_gun: NORTH_SOV_45mm1937
    {
        displayName = "M-42 45mm AT Gun";
        scope = 2;
        scopeCurator = 2;
        side = 0;
        editorCategory = "SiP_PVA_Editor_Category";
        editorSubcategory = "SiP_Antitank_Editor_Subcategory";
        vehicleClass = "SiP_Antitank_vehicle_class";
        faction = "SiP_PVA";
        crew = "SiP_PVA_gunner";
        ejectDeadGunner = 1;
    };
    class SiP_KPA_m42_at_gun: SiP_m42_at_gun
    {
        scope = 2;
        scopeCurator = 2;
        faction = "SiP_KPA";
        editorCategory = "SiP_KPA_Editor_Category";
        crew = "SiP_KPA_gunner";
    };
    class SiP_PVA_w_m42_at_gun: SiP_m42_at_gun
    {
        faction = "SiP_PVA_w";
        editorCategory = "SiP_PVA_w_Editor_Category";
        crew = "SiP_PVA_gunner_w";
    };
};