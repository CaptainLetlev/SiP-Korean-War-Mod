class cfgPatches
{
    class SiP_Patch_churchill
    {
        addonRootClass = "SiP_Patch_un_vehicles";
        requiredAddons[] = 
        {
            "WW2_Assets_c_Vehicles_Tanks_c_Churchill"
        };
        units[] = 
        {
            "SiP_mkvii_churchill",
            "SiP_mkvii_churchill_croc"
        };
        weapons[] = 
        {
            "SiP_Tank_Flamethrower"
        };
    };
};

class cfgVehicles
{
    class Tank;
    class Tank_F: Tank
    {
        class Turrets
        {
            class MainTurret;
        };
    };

    class LIB_Tank_base: Tank_F
    {
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                class Turrets;
            };
        };
    };

    class LIB_Churchill_base: LIB_Tank_base
    {
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                class Turrets: Turrets
                {
                    class CommanderOptics;
                    class Loader_place;
                };
            };
            class kurs_MG_turret;
        };
        class AnimationSources;
    };
    class LIB_Churchill_Mk7: LIB_Churchill_base
    {
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                class Turrets: Turrets
                {
                    class CommanderOptics;
                    class Loader_place;
                };
            };
            class kurs_MG_turret;
        };
        class AnimationSources;
    };
    class LIB_Churchill_Mk7_Crocodile: LIB_Churchill_base
    {
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                class Turrets: Turrets
                {
                    class CommanderOptics;
                    class Loader_place;
                };
            };
            class kurs_MG_turret;
        };
        class AnimationSources;
    };

    class SiP_mkvii_churchill: LIB_Churchill_Mk7
    {
        author = "Letlev";
        displayname = "Mk.VII Churchill";
        armor = 600;
        armorStructural = 250;
        scope = 2;
        side = 1;
        faction = "SiP_BCFK";
        editorCategory = "SiP_BCFK_Editor_Category";
        editorSubcategory = "SiP_Tanks_Editor_Subcategory";
        vehicleClass = "SiP_tanks_vehicle_class";
        crew = "SiP_BCFK_tank_driver";
        weapons[] = {"SiP_Medium_Horn_weapon"}; 
        magazines[] = {"vn_ship_horn_mag"};
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = {"LIB_OQF_75","SiP_Besa_coax"};
                magazines[] = {"LIB_30x_M61_M1_AP","LIB_14x_T45_M1_APCR","LIB_60x_M42A1_M1_HE","SiP_besa_225_mag_t","SiP_besa_225_mag_t","SiP_besa_225_mag_t","SiP_besa_225_mag_t","SiP_besa_225_mag_t","SiP_besa_225_mag_t","SiP_besa_225_mag_t","SiP_besa_225_mag_t","SiP_besa_225_mag_t","SiP_besa_225_mag_t"};
                gunnerType = "SiP_BCFK_tank_gunner";
                class Turrets: Turrets
                {
                    class CommanderOptics: CommanderOptics
                    {
                        gunnerType = "SiP_BCFK_tank_commander";
                    };
                    class Loader_place: Loader_place
                    {
                        gunnerType = "SiP_BCFK_tank_gunner";
                    };
                };
            };
            class kurs_MG_turret: kurs_MG_turret
            {
                gunnerName = "Bow Gunner";
                gunnerType = "SiP_BCFK_tank_bow";
                weapons[] = {"SiP_Besa_bow"};
                magazines[] = {"SiP_besa_225_mag_t","SiP_besa_225_mag_t","SiP_besa_225_mag_t","SiP_besa_225_mag_t","SiP_besa_225_mag_t","SiP_besa_225_mag_t","SiP_besa_225_mag_t","SiP_besa_225_mag_t","SiP_besa_225_mag_t","SiP_besa_225_mag_t"};
                proxyIndex = 2;
            };
        };
        class AnimationSources: Animationsources
        {
            class recoil_source
            {
                source = "reload";
                weapon = "LIB_OQF_75";
            };
            class muzzle_rot_cannon
            {
                source = "ammorandom";
                weapon = "LIB_OQF_75";
            };
            class muzzle_rot_coax
            {
                source = "ammorandom";
                weapon = "SiP_Besa_bow";
            };
            class muzzle_hide_coax
            {
                source = "reload";
                weapon = "SiP_Besa_bow";
            };
            class ACE_Turret
            {
                source = "user";
                animPeriod = 1e-05;
                initPhase = 0;
            };
        };
    };
    
    class SiP_mkvii_churchill_croc: LIB_Churchill_Mk7_Crocodile
    {
        author = "Letlev";
        displayname = "Mk.VII Crocodile";
        armor = 600;
        armorStructural = 250;
        scope = 2;
        side = 1;
        faction = "SiP_BCFK";
        editorCategory = "SiP_BCFK_Editor_Category";
        editorSubcategory = "SiP_Tanks_Editor_Subcategory";
        vehicleClass = "SiP_tanks_vehicle_class";
        crew = "SiP_BCFK_tank_driver";
        weapons[] = {"SiP_Medium_Horn_weapon"}; 
        magazines[] = {"vn_ship_horn_mag"};
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                gunnerType = "SiP_BCFK_tank_gunner";
                weapons[] = {"LIB_OQF_75","SiP_Besa_coax"};
                magazines[] = {"LIB_30x_M61_M1_AP","LIB_14x_T45_M1_APCR","LIB_60x_M42A1_M1_HE","SiP_besa_225_mag_t","SiP_besa_225_mag_t","SiP_besa_225_mag_t","SiP_besa_225_mag_t","SiP_besa_225_mag_t","SiP_besa_225_mag_t","SiP_besa_225_mag_t","SiP_besa_225_mag_t","SiP_besa_225_mag_t","SiP_besa_225_mag_t"};
                class Turrets: Turrets
                {
                    class CommanderOptics: CommanderOptics
                    {
                        gunnerType = "SiP_BCFK_tank_commander";
                    };
                    class Loader_place: Loader_place
                    {
                        gunnerType = "SiP_BCFK_tank_gunner";
                    };
                };
            };
            class kurs_MG_turret: kurs_MG_turret
            {
                gunnerName = "Flamethrower";
                gunnerType = "SiP_BCFK_tank_bow";
                weapons[] = {"SiP_Tank_Flamethrower"};
                magazines[] = {"vn_m10_v_999_mag","vn_m10_v_999_mag"};
            };
        };
        class AnimationSources: Animationsources
        {
            class recoil_source
            {
                source = "reload";
                weapon = "LIB_OQF_75";
            };
            class muzzle_rot_cannon
            {
                source = "ammorandom";
                weapon = "LIB_OQF_75";
            };
        };
    };
};

class cfgWeapons
{
    class MGun;

    class LIB_TankMGun_base: MGun
    {
        class manual;
        class close;
        class short;
        class medium;
        class far;
    };

    class SiP_Tank_Flamethrower: LIB_TankMGun_base
    {
        scope = 1;
        displayName = "$STR_LIB_Tank_Flamethrower";
        magazines[] = {"vn_m10_v_999_mag"};
        fireSpreadAngle = 0.784825;
        fireLightDuration = 0.2;
        fireLightIntensity = 0.02;
        class manual: manual
        {
            displayName = "$STR_DN_MODE_FULLAUTO_300";
            dispersion = 0.05;
            reloadTime = 0.12;
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                begin1[] = {"A3\Sounds_F\weapons\Rockets\new_rocket_8",1.77828,1.2,1600};
                soundBegin[] = {"begin1",1};
                soundSetShot[] = {"vn_m10_flamethrower_shot_soundset"};
            };
        };
        class close: close
        {
            reloadTime = 0.12;
            dispersion = 0.0015;
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                begin1[] = {"A3\Sounds_F\weapons\Rockets\new_rocket_8",1.77828,1.2,1600};
                soundBegin[] = {"begin1",1};
                soundSetShot[] = {"vn_m10_flamethrower_shot_soundset"};
            };
        };
        class short: short
        {
            reloadTime = 0.12;
            dispersion = 0.0015;
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                begin1[] = {"A3\Sounds_F\weapons\Rockets\new_rocket_8",1.77828,1.2,1600};
                soundBegin[] = {"begin1",1};
                soundSetShot[] = {"vn_m10_flamethrower_shot_soundset"};
            };
        };
        class medium: medium
        {
            reloadTime = 0.12;
            dispersion = 0.0015;
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                begin1[] = {"A3\Sounds_F\weapons\Rockets\new_rocket_8",1.77828,1.2,1600};
                soundBegin[] = {"begin1",1};
                soundSetShot[] = {"vn_m10_flamethrower_shot_soundset"};
            };
        };
        class far: far
        {
            reloadTime = 0.12;
            dispersion = 0.0015;
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                begin1[] = {"A3\Sounds_F\weapons\Rockets\new_rocket_8",1.77828,1.2,1600};
                soundBegin[] = {"begin1",1};
                soundSetShot[] = {"vn_m10_flamethrower_shot_soundset"};
            };
        };
        class GunParticles
        {
            class FirstEffect
            {
                effectName = "vn_fx_flamethrower_Fire_small_Stream";
                positionName = "kursmg_beg";
                directionName = "kulas_kursmg";
            };
        };
    };
};

class Extended_init_EventHandlers
{
    class SiP_mkvii_churchill
    {
        class SiP_mkvii_churchill_init
        {
            init = "[_this select 0] execVM 'SiP\Addons\sip_un_vehicles\tanks\functions\tankcargo.sqf';";
        };
    };
};