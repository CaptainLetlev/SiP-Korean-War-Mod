class cfgPatches
{
    class SiP_Patch_un_planes_c119
    {
        Name = " Suicide Is Painless - Korean War Mod - UN Planes - C-119";
        Author = "Letlev";
        addonRootClass = "SiP_Patch_un_vehicles";
        requiredAddons[] = 
        {
            "air_f_vietnam_04_c"
        };
        units[] = 
        {
            "SiP_C119_Transport_Plane"
        };
        weapons[] = {};
    };
};

class CfgVehicles
{
    class vnx_air_c119_doors_base;
    class vnx_air_c119_transport_base: vnx_air_c119_doors_base
    {
        class Turrets;
    };

    class vnx_b_air_ac119_02_01: vnx_air_c119_transport_base
    {
        class Turrets: Turrets
        {
            class CopilotTurret;
            class CommanderTurret;
            class Jumper_Turret_01;
            class Jumper_Turret_02;
        };
        class UserActions;
    };

    class SiP_C119_Transport_Plane: vnx_b_air_ac119_02_01
    {
        scope = 2;
        scopecurator = 2;
        author = "Letlev";
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        displayname = "C-119 Flying Boxcar";
        crew = "SiP_USAF_Transport_Pilot";
        hiddenSelectionsTextures[] = {"vnx\air_f_vietnam_04\ac119\data\vnx_air_ac119_ext_01_02_co.paa","vnx\air_f_vietnam_04\ac119\data\vnx_air_ac119_ext_02_02_co.paa","vnx\air_f_vietnam_04\ac119\data\vnx_air_ac119_ext_03_02_co.paa","vnx\air_f_vietnam_04\ac119\data\vnx_air_ac119_ext_04_02_co.paa","vnx\air_f_vietnam_04\ac119\data\vnx_air_ac119_ext_05_02_co.paa","vnx\air_f_vietnam_04\ac119\data\vnx_air_ac119_ext_06_02_co.paa","vnx\air_f_vietnam_04\ac119\decal\vnx_air_ac119_decal_08_ca.paa"};
        availableForSupportTypes[] = {"Transport"};
        class Turrets: Turrets
        {
            class CopilotTurret: CopilotTurret
            {
                gunnerType = "SiP_USAF_Transport_Pilot";
            };
            class CommanderTurret: CommanderTurret
            {
                gunnerType = "SiP_USAF_Transport_Radio_Operator";
            };
            class Jumper_Turret_01: Jumper_Turret_01{};
            class Jumper_Turret_02: Jumper_Turret_02{};
        };
        class UserActions: UserActions
        {
            class music_player
            {
                displayName = "$STR_VN_VEHICLE_RADIO_DN";
                position = "zamerny";
                showWindow = 0;
                onlyForPlayer = 0;
                radius = 2;
                priority = -99;
                condition = "alive this && { local this && { missionnamespace getvariable ['vn_jukebox_enable', true] && { driver this isEqualTo player } } }";
                statement = "['open'] call vn_fnc_music";
            };
        };
    };
};