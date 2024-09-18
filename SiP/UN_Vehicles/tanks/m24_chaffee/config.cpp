class cfgPatches
{
    class SiP_Patch_m24_chaffee
    {
        addonRootClass = "SiP_Patch_un_vehicles";
        requiredAddons[] = 
        {
            "WW2_SPE_Assets_c_Vehicles_Tanks_c_M10",
            "WW2_SPE_Assets_c_Vehicles_Tanks_c_M18",
            "MWB_M24Chaffee"
        };
        units[] = 
        {
            "SiP_m24_chaffee_base",
            "SiP_m24_chaffee"
        };
        weapons[] = {};
        magazines[] = {};
    };
};

class CfgVehicles
{
    class Tank_F;
    class SPE_Tank_base: Tank_F
    {
        class Turrets;
    };
    class SPE_M18_Hellcat_base: SPE_Tank_base
    {
        class Turrets: Turrets
        {
            class MainTurret;
        };
    };
    class SPE_M18_Hellcat: SPE_M18_Hellcat_base
    {
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                class Turrets;
            };
        };
    };

    class MWB_M24Chaffee: SPE_M18_Hellcat
    {
        class EventHandlers;
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
            class Assist_Driver;
            class M2_Turret;
        };
        class AnimationSources;
    };

    class SiP_m24_chafee: MWB_M24Chaffee
    {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        crew = "SiP_US_Army_tank_driver";
        extCameraPosition[] = {0,1,-9};
        weapons[] = {"SiP_Light_Horn_weapon"};
        magazines[] = {"vn_ship_horn_mag"};
        hiddenSelectionsTextures[] = 
        {
            "SiP\Addons\sip_un_vehicles\tanks\m24_chaffee\textures\basic_allied_body_co.paa",
            "MWB_M24Chaffee\data\material_blank_co.paa",
            "MWB_M24Chaffee\data\tracks_co.paa",
            "SiP\Addons\sip_un_vehicles\tanks\m24_chaffee\textures\basic_allied_turret_co.paa"
        };
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
        SPE_OpenTop_Turret = 0;
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                soundAttenuationTurret = "HeliAttenuationGunner";
                gunnerType = "SiP_US_Army_tank_gunner";
                gunnerCompartments = "Compartment1";
                weapons[] = {"MWB_M24_M6","SiP_m1919a4_coax_weapon","SPE_SmokeLauncher"};
                magazines[] = 
                {
                    "SPE_27x_M61_M1_AP",
                    "SPE_10x_M72_AP",
                    "MWB_11x_M48_HE",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SmokeLauncherMag_Single",
                    "SmokeLauncherMag_Single",
                    "SmokeLauncherMag_Single",
                    "SmokeLauncherMag_Single",
                    "SmokeLauncherMag_Single",
                    "SmokeLauncherMag_Single",
                    "SmokeLauncherMag_Single",
                    "SmokeLauncherMag_Single",
                    "SmokeLauncherMag_Single",
                    "SmokeLauncherMag_Single",
                    "SmokeLauncherMag_Single",
                    "SmokeLauncherMag_Single",
                    "SmokeLauncherMag_Single"
                };
                class OpticsIn
                {
                    class Wide
                    {
                        initAngleX = 0;
                        minAngleX = -30;
                        maxAngleX = 30;
                        initAngleY = 0;
                        minAngleY = -100;
                        maxAngleY = 100;
                        opticsDisplayName = "PERISCOPE";
                        gunnerOpticsModel = "\fow\fow_tanks\m4a2\Optics\M6_Periscope";
                        visionMode[] = {"Normal"};
                        initFov = 0.75;
                        minFov = 0.75;
                        maxFov = 0.75;
                        opticsPPEffects[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
                        opticsDisablePeripherialVision = 1;
                    };
                    class Medium: Wide
                    {
                        opticsDisplayName = "TELESCOPE";
                        gunnerOpticsModel = "\WW2\SPE_Assets_m\Vehicles\Optics_m\SPE_M4_Sherman_Reticle.p3d";
                        initFov = 0.187;
                        minFov = 0.187;
                        maxFov = 0.187;
                        opticsPPEffects[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
                        opticsDisablePeripherialVision = 1;
                    };
                    class Narrow: Medium
                    {
                        opticsDisplayName = "DIRECT";
                        initFov = 0.0833;
                        minFov = 0.0833;
                        maxFov = 0.0833;
                        visionMode[] = {"Normal"};
                        thermalMode[] = {0,1};
                        gunnerOpticsModel = "\WW2\SPE_Assets_m\Vehicles\Optics_m\SPE_Optics_Scripted.p3d";
                        opticsPPEffects[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
                        OpticsFlare = 1;
                        camPos = "gunnerview";
                        camDir = "";
                        SPE_DefaultOptic = 1;
                    };
                };
                class Turrets: Turrets
                {
                    class CommanderOptics: CommanderOptics
                    {
                        soundAttenuationTurret = "TankAttenuation";
                        gunnerType = "SiP_US_Army_tank_commander";
                        gunnerCompartments = "Compartment1";
                    };
                    class Loader_place: Loader_place
                    {
                        soundAttenuationTurret = "TankAttenuation";
                        gunnerType = "SiP_US_Army_tank_gunner";
                        gunnerCompartments = "Compartment1";
                    };
                };
            };
            class Assist_Driver: Assist_Driver
            {
                soundAttenuationTurret = "TankAttenuation";
                gunnerType = "SiP_US_Army_tank_driver";
                weapons[] = {"SiP_m1919a4_bow_weapon"};
                magazines[] = {"SiP_m1919_v_250_mag","SiP_m1919_v_250_mag","SiP_m1919_v_250_mag","SiP_m1919_v_250_mag","SiP_m1919_v_250_mag","SiP_m1919_v_250_mag","SiP_m1919_v_250_mag","SiP_m1919_v_250_mag","SiP_m1919_v_250_mag","SiP_m1919_v_250_mag"};
                
            };
            class M2_Turret: M2_Turret
            {
                gunnerType = "SiP_US_Army_gunner";
                weapons[] = {"SiP_m2hb_turret_weapon_m36_jackson"};
                soundAttenuationTurret = "OpenCarAttenuation";
                startEngine = 0;
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
        class TextureSources
        {
            class US
            {
                displayName = "US Army";
                author = "Letlev";
                textures[] = 
                {
                    "SiP\Addons\sip_un_vehicles\tanks\m24_chaffee\textures\basic_allied_body_co.paa",
                    "MWB_M24Chaffee\data\material_blank_co.paa",
                    "MWB_M24Chaffee\data\tracks_co.paa",
                    "SiP\Addons\sip_un_vehicles\tanks\m24_chaffee\textures\basic_allied_turret_co.paa"
                };
                factions[] = {"SiP_US_Army"};
            };
            class USThreeRecon: US
            {
                displayName = "3rd Recon. Company, 3rd ID";
                author = "man";
                textures[] = {"MWB_M24Chaffee\data\body_usa5_co.paa","MWB_M24Chaffee\data\material_blank_co.paa","MWB_M24Chaffee\data\tracks_co.paa","MWB_M24Chaffee\data\turret_usa5_co.paa"};
            };
            class USRebelsRoost: USThreeRecon
            {
                displayName = "21st Infantry Rgt., 24th ID";
                textures[] = {"MWB_M24Chaffee\data\body_usa6_co.paa","MWB_M24Chaffee\data\material_blank_co.paa","MWB_M24Chaffee\data\tracks_co.paa","MWB_M24Chaffee\data\turret_usa6_co.paa"};
            };
            class USRakkasans: USThreeRecon
            {
                displayName = "187th RCT";
                textures[] = {"MWB_M24Chaffee\data\body_usa7_co.paa","MWB_M24Chaffee\data\material_usa7_co.paa","MWB_M24Chaffee\data\tracks_co.paa","MWB_M24Chaffee\data\turret_usa7_co.paa"};
            };
            class USTiger: USThreeRecon
            {
                displayName = "79th Tank Battalion";
                textures[] = {"MWB_M24Chaffee\data\body_ustiger_co.paa","MWB_M24Chaffee\data\material_ustiger_co.paa","MWB_M24Chaffee\data\tracks_co.paa","MWB_M24Chaffee\data\turret_ustiger_co.paa"};
            };
        };
        class AnimationSources: AnimationSources
        {
            class recoil_source
            {
                source = "reload";
                weapon = "MWB_M24_M6";
            };
            class muzzleHMG_ROT
            {
                source = "ammoRandom";
                weapon = "SiP_m2hb_turret_weapon_m36_jackson";
            };
            class muzzleCoax_ROT
            {
                source = "ammoRandom";
                weapon = "SiP_m1919a4_coax_weapon";
            };
            class muzzleKurs_ROT
            {
                source = "ammoRandom";
                weapon = "SPE_M1919A4_kurs";
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
    class SiP_m24_chafee
    {
        class SiP_m24_chafee_init
        {
            init = "[_this select 0] execVM 'SiP\Addons\sip_un_vehicles\tanks\functions\tankcargo.sqf';";
        };
    };
};