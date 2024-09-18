class cfgPatches
{
    class SiP_Patch_m36b2_jackson
    {
        addonRootClass = "SiP_Patch_un_vehicles";
        requiredAddons[] = 
        {
            "WW2_SPE_Assets_c_Vehicles_Tanks_c_M10",
            "MWB_M36Jackson"
        };
        units[] = 
        {
            "SiP_m36b2_jackson"
        };
        weapons[] = 
        {
            "SiP_m2hb_turret_weapon_m36_jackson"
        };
        magazines[] = {};
    };
};

class cfgWeapons
{
    class SiP_m2hb_static_weapon;

    class SiP_m2hb_turret_weapon_m36_jackson: SiP_m2hb_static_weapon
    {
        class GunParticles
        {
            class AmmoBeltEject
            {
                directionName = "Nabojniceend";
                effectName = "MachineGunEject1";
                positionName = "Nabojnicestart";
            };
            class EjectEffect
            {
                directionName = "nabojniceend2";
                effectName = "MachineGunCartridge2";
                positionName = "nabojnicestart2";
            };
            class FireEffect
            {
                directionName = "konec hlavne M2";
                effectName = "MachineGunCloud";
                positionName = "usti hlavne M2";
            };
            class RifleAmmoCloud
            {
                directionName = "nabojniceend2";
                effectName = "SPE_RifleAmmoCloud";
                positionName = "nabojnicestart2";
            };
        };
    };
};

class CfgVehicles
{
    class Tank_F;

    class SPE_Tank_base: Tank_F
    {
        class Turrets;
    };

    class SPE_M10_base: SPE_Tank_base
    {
        class Turrets: Turrets
        {
            class MainTurret;
        };
    };
    class SPE_M10: SPE_M10_base
    {
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                class Turrets;
            };
        };
    };
    class MWB_M36B2: SPE_M10
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
            class M2_Turret;
        };
        class AnimationSources;
    };
    
    class SiP_m36b2_jackson: MWB_M36B2
    {
        author = "Letlev";
        scope = 2;
        scopeCurator = 2;
        displayname = "M36B2 Jackson";
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        crew = "SiP_US_Army_tank_driver";
        side = 1;
        weapons[] = {"SiP_Heavy_Horn_weapon"}; 
        magazines[] = {"vn_ship_horn_mag"};
        extCameraPosition[] = {0,1,-9};
        hiddenSelectionsTextures[] = {"MWB_M36Jackson\data\m36b2_turret_us_co.paa","MWB_M36Jackson\data\m10a_m36b2_us_ca.paa","MWB_M36Jackson\data\m101_m36b2_us_ca.paa"};
        SPE_System_VehicleLoadout_AvailableAmmunition[] = {"SiP_40x_M77_AP","SiP_20x_M71_HE","SiP_10x_M82_APCR","SiP_10x_M82_APCR"};
        class TransportItems
        {
            class _xx_vn_b_item_toolkit
            {
                name = "vn_b_item_toolkit";
                count = 1;
            };
            class _xx_SPE_US_FirstAidKit
            {
                name = "SPE_US_FirstAidKit";
                count = 10;
            };
            class _xx_vn_b_item_medikit_01
            {
                name = "vn_b_item_medikit_01";
                count = 1;
            };
        };
        class TransportBackpacks
        {
            class _xx_SiP_m1945_gpbag_spe_OD
            {
                backpack = "SiP_m1945_gpbag_spe_OD";
                count = 5;
            };
        };
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                class Turrets: Turrets
                {
                    class CommanderOptics: CommanderOptics
                    {
                        gunnerType = "SiP_US_Army_tank_commander";
                    };
                    class Loader_place: Loader_place
                    {
                        gunnerType = "SiP_US_Army_tank_gunner";
                    };
                };
                gunnerType = "SiP_US_Army_tank_gunner";
                weapons[] = {"SiP_M3A1_90mm"};
                magazines[] = 
                {
                    "SiP_40x_M77_AP",
                    "SiP_20x_M71_HE",
                    "SiP_10x_M82_APCR",
                    "SiP_10x_M82_APCR"
                };
                turretInfoType = "SiP_M26_RscOptics_gunner";
                class OpticsIn
                {
                    class Periscope
                    {
                        initAngleX = 0;
                        minAngleX = 0;
                        maxAngleX = 0;
                        initAngleY = 0;
                        minAngleY = 0;
                        maxAngleY = 0;
                        initFov = 0.25;
                        minFov = 0.25;
                        maxFov = 0.25;
                        directionStabilized = 0;
                        visionMode[] = {"Normal"};
                        thermalMode[] = {0};
                        gunnerOpticsModel = "\fow\fow_tanks\m4a2\Optics\M6_Periscope";
                        gunnerOpticsEffect[] = {};
                    };
                    
                    class Sight2: Periscope
                    {
                        initFov = 0.1;
                        minFov = 0.1;
                        maxFov = 0.1;
                        gunnerOpticsModel = "vn\armor_f_vietnam_04\m48\vn_armor_m48_gunner_optic2.p3d";
                    };
                    class Sight8: Sight2
                    {
                        initFov = 0.0313;
                        minFov = 0.0313;
                        maxFov = 0.0313;
                        gunnerOpticsModel = "vn\armor_f_vietnam_04\m48\vn_armor_m48_gunner_optic8.p3d";
                    };
                };
            };
            class kurs_MG_turret: kurs_MG_turret
            {
               gunnerType = "SiP_US_Army_tank_driver";
            };
            class M2_Turret: M2_Turret
            {
                gunnerType = "SiP_US_Army_gunner";
                weapons[] = {"SiP_m2hb_turret_weapon_m36_jackson"};
                magazines[] = 
                {
                    "SiP_m2_v_100_mag",
                    "SiP_m2_v_100_mag",
                    "SiP_m2_v_100_mag",
                    "SiP_m2_v_100_mag",
                    "SiP_m2_v_100_mag",
                    "SiP_m2_v_100_mag",
                    "SiP_m2_v_100_mag",
                    "SiP_m2_v_100_mag",
                    "SiP_m2_v_100_mag",
                    "SiP_m2_v_100_mag",
                    "SiP_m2_v_100_mag",
                    "SiP_m2_v_100_mag",
                    "SiP_m2_v_100_mag"
                };
            };
        };
        class AnimationSources: AnimationSources
        {
            class recoil_source
            {
                source = "reload";
                weapon = "SiP_M3A1_90mm";
            };
            class muzzleHMG_ROT
            {
                source = "ammoRandom";
                weapon = "SiP_m2hb_turret_weapon_m36_jackson";
            };
            class ReloadAnim
            {
                source = "reload";
                weapon = "SiP_m2hb_turret_weapon_m36_jackson";
            };
            class ReloadMagazine
            {
                source = "reloadMagazine";
                weapon = "SiP_m2hb_turret_weapon_m36_jackson";
            };
            class revolving
            {
                source = "revolving";
                weapon = "SiP_m2hb_turret_weapon_m36_jackson";
            };
        };
    };
};

class Extended_init_EventHandlers
{
    class SiP_m36b2_jackson
    {
        class SiP_m36b2_jackson_init
        {
            init = "[_this select 0] execVM 'SiP\Addons\sip_un_vehicles\tanks\functions\tankcargo.sqf';";
        };
    };
};