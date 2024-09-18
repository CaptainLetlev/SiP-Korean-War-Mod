class cfgPatches
{
    class SiP_Patch_cromwell
    {
        addonRootClass = "SiP_Patch_un_vehicles";
        requiredAddons[] = 
        {
            "WW2_Assets_c_Vehicles_Tanks_c_Cromwell",
            "WW2_Assets_c_Vehicles_Tanks_c_M4_Sherman"
        };
        units[] = 
        {
            "SiP_mkviii_cromwell"
        };
        weapons[] = 
        {
            "SiP_Besa_coax"
        };
        magazines[] = 
        {
            "SiP_besa_225_mag_t"
        };
    };
};

class cfgWeapons
{
    class LIB_TankMGun_base;
    class LIB_Besa_coax: LIB_TankMGun_base
    {
        class manual;
        class close;
        class short;
        class medium;
        class far;
    };

    class SPE_M3_L40_base;

    class SiP_Besa_coax: LIB_Besa_coax
    {
        magazines[] = {"SiP_besa_225_mag_t"};
        class manual: manual
        {
            reloadTime = 0.075;
            sounds[] = {"StandardSound"};
            class standardsound
            {
                soundsetshot[] = {"vn_m63a_shot_soundset","vn_556x45mm_rifle_tails_soundset","vn_m16_rifle_trigger_reset_soundset"};
            };
        };
        class close: close
        {
            reloadTime = 0.075;
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundsetshot[] = {"vn_m63a_shot_soundset","vn_556x45mm_rifle_tails_soundset","vn_m16_rifle_trigger_reset_soundset"};
            };
        };
        class short: short
        {
            reloadTime = 0.075;
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundsetshot[] = {"vn_m63a_shot_soundset","vn_556x45mm_rifle_tails_soundset","vn_m16_rifle_trigger_reset_soundset"};
            };
        };
        class medium: medium
        {
            reloadTime = 0.075;
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundsetshot[] = {"vn_m63a_shot_soundset","vn_556x45mm_rifle_tails_soundset","vn_m16_rifle_trigger_reset_soundset"};
            };
        };
        class far: far
        {
            reloadTime = 0.075;
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundsetshot[] = {"vn_m63a_shot_soundset","vn_556x45mm_rifle_tails_soundset","vn_m16_rifle_trigger_reset_soundset"};
            };
        };
    };
    class SiP_Besa_bow: SiP_Besa_coax
    {
        class GunParticles
        {
            class FirstEffect
            {
                positionName = "kulas_kursMG";
                directionName = "kulas_kursMG";
            };
        };
    };

    class SiP_QF75_base: SPE_M3_L40_base
    {
        scope = 1;
        displayName = "QF 75mm";
        magazineReloadTime = 6;
    };
    class SiP_QF75_HE_AI: SiP_QF75_base
    {
        magazines[] = {"SPE_45x_M48_HE","SPE_M48_HE"};
        magazineWell[] = {"SPE_75x350mm_M3_HE"};
        modes[] = {"close","short","medium","far"};
    };
    class SiP_QF75_SMK_AI: SiP_QF75_base
    {
        magazines[] = {"SPE_10x_M89_SMK"};
        magazineWell[] = {"SPE_75x350mm_M3_SMK"};
        modes[] = {"close","short","medium","far"};
    };
    class SiP_QF75_AP_AI: SiP_QF75_base
    {
        magazines[] = {"SPE_10x_M72_AP"};
        magazineWell[] = {"SPE_M61_M1_AP"};
        modes[] = {"close","short","medium","far"};
    };
    class SiP_QF75: SiP_QF75_base
    {
        magazines[] = {};
        magazineWell[] = {};
        muzzles[] = {"MODE_PLAYER_ALL","MODE_AI_AP","MODE_AI_HE","MODE_AI_WP","MODE_AI_SMOKE"};
        class MODE_AI_HE: SiP_QF75_HE_AI{};
        class MODE_AI_SMOKE: SiP_QF75_SMK_AI{};
        class MODE_AI_AP: SiP_QF75_AP_AI{};
        class MODE_PLAYER_ALL: SiP_QF75_base{};
        class GunParticles
        {
            class FirstEffect
            {
                effectName = "CannonFired";
                positionName = "Usti hlavne";
                directionName = "Konec hlavne";
            };
        };
    };
};

class cfgMagazines
{
    class LIB_225Rnd_Besa;

    class SiP_besa_225_mag_t: LIB_225Rnd_Besa
    {
        author = "Letlev";
        displayName = "225Rnd. Besa Mag";
        ammo = "vn_77x56";
        tracersEvery = 1;
        lastRoundsTracer = 225;
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
    class LIB_Cromwell_Base: LIB_Tank_base
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
        class EventHandlers;
    };
    
    class SiP_mkviii_cromwell: LIB_Cromwell_Base
    {
        author = "Letlev";
        displayname = "Mk.VIII Cromwell";
        armor = 800;
        armorStructural = 250;
        scope = 2;
        side = 1;
        faction = "SiP_BCFK";
        editorCategory = "SiP_BCFK_Editor_Category";
        editorSubcategory = "SiP_Tanks_Editor_Subcategory";
        vehicleClass = "SiP_tanks_vehicle_class";
        crew = "SiP_BCFK_tank_driver";
        weapons[] = {"SiP_Light_Horn_weapon"}; 
        magazines[] = {"vn_ship_horn_mag"};
        class EventHandlers: EventHandlers
        {
            postInit = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
        };
        class textureSources
		{
			class standard
			{
				displayName = "$STR_LIB_DN_ASSETS_VEHICLES_STANDARD";
				author = "IFA3 Team";
				textures[] = {"ww2\assets_t\vehicles\tanks_t\ww2_cromwell\cromwellhull_co.paa","ww2\assets_t\vehicles\tanks_t\ww2_cromwell\cromwellturret_co.paa","ww2\assets_t\vehicles\tanks_t\ww2_cromwell\cromwellwheel_co.paa","ww2\assets_t\vehicles\tanks_t\ww2_cromwell\cromwellclutter_co.paa"};
				factions[] = {"LIB_UK_ARMY"};
			};
			class winter
			{
				displayName = "$STR_LIB_DN_ASSETS_VEHICLES_WINTER";
				author = "DontShootMe!!";
				textures[] = {"ww2\assets_t\vehicles\tanks_t\ww2_cromwell\dsm_cromwellhull_w_co.paa","ww2\assets_t\vehicles\tanks_t\ww2_cromwell\dsm_cromwellturret_w_co.paa","ww2\assets_t\vehicles\tanks_t\ww2_cromwell\dsm_cromwellwheel_w_co.paa","ww2\assets_t\vehicles\tanks_t\ww2_cromwell\dsm_cromwellclutter_w_co.paa"};
				factions[] = {"LIB_UK_ARMY_w"};
			};
		};
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = 
                {
                    "SiP_QF75",
                    "SiP_Besa_coax"
                };
                magazines[] = 
                {
                    "SPE_27x_M61_M1_AP",
                    "SPE_10x_M72_AP",
                    "SPE_45x_M48_HE",
                    "SiP_besa_225_mag_t",
                    "SiP_besa_225_mag_t",
                    "SiP_besa_225_mag_t",
                    "SiP_besa_225_mag_t",
                    "SiP_besa_225_mag_t",
                    "SiP_besa_225_mag_t",
                    "SiP_besa_225_mag_t",
                    "SiP_besa_225_mag_t",
                    "SiP_besa_225_mag_t",
                    "SiP_besa_225_mag_t"
                };
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
                magazines[] = 
                {
                    "SiP_besa_225_mag_t",
                    "SiP_besa_225_mag_t",
                    "SiP_besa_225_mag_t",
                    "SiP_besa_225_mag_t",
                    "SiP_besa_225_mag_t",
                    "SiP_besa_225_mag_t",
                    "SiP_besa_225_mag_t",
                    "SiP_besa_225_mag_t",
                    "SiP_besa_225_mag_t",
                    "SiP_besa_225_mag_t"
                };
                proxyIndex = 2;
            };
        };
    };
};

class Extended_init_EventHandlers
{
    class SiP_mkviii_cromwell
    {
        class SiP_mkviii_cromwell_init
        {
            init = "[_this select 0] execVM 'SiP\Addons\sip_un_vehicles\tanks\functions\tankcargo.sqf';";
        };
    };
};