class cfgPatches
{
    class SiP_Patch_M8_Greyhound
    {
        addonRootClass = "SiP_Patch_un_vehicles";
        requiredAddons[] = 
        {
            "WW2_SPE_Assets_m_Vehicles_ArmoredCar_U1_c_M8_LAC"
        };
        units[] = 
        {
            "SiP_M8_Greyhound",
            "SiP_M8_Greyhound_ringMount"
        };
        weapons[] = {};
    };
};

class CfgVehicles
{
    class Car_F;

    class Wheeled_Apc_F: Car_F
    {
        class Turrets;
    };

    class SPE_ArmoredCar_base: Wheeled_Apc_F
    {
        class Turrets: Turrets
        {
            class MainTurret;
        };
    };

    class SPE_M8_LAC_base: SPE_ArmoredCar_base
    {
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                class Turrets;
            };
        };
    };

    class SPE_M8_LAC: SPE_M8_LAC_base
    {
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                class Turrets: Turrets
                {
                    class CommanderOptics;
                };
            };
            class kurs_MG_turret;
        };
        class UserActions;
    };
    class SPE_M8_LAC_ringMount: SPE_M8_LAC_base
    {
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                class Turrets: Turrets
                {
                    class CommanderOptics;
                    class CommanderMG;
                };
            };
            class kurs_MG_turret;
        };
        class UserActions;
    };

    class SiP_M8_Greyhound: SPE_M8_LAC
    {
        scope = 2;
        scopeCurator = 2;
        author = "Letlev";
        side = 1;
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        crew = "SiP_US_Army_tank_driver";
        weapons[] = {"SiP_Light_Horn_weapon"}; 
        magazines[] = {"vn_ship_horn_mag"};
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                gunnerType = "SiP_US_Army_tank_gunner";
                class Turrets: Turrets
                {
                    class CommanderOptics: CommanderOptics
                    {
                        gunnerType = "SiP_US_Army_tank_commander";
                    };
                };
            };
            class kurs_MG_turret: kurs_MG_turret
            {
                gunnerType = "SiP_US_Army_tank_bow";
            };
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
    class SiP_M8_Greyhound_ringMount: SPE_M8_LAC_ringMount
    {
        scope = 2;
        scopeCurator = 2;
        author = "Letlev";
        side = 1;
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        crew = "SiP_US_Army_tank_driver";
        weapons[] = {"SiP_Light_Horn_weapon"}; 
        magazines[] = {"vn_ship_horn_mag"};
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                gunnerType = "SiP_US_Army_tank_gunner";
                class Turrets: Turrets
                {
                    class CommanderOptics: CommanderOptics
                    {
                        gunnerType = "SiP_US_Army_tank_commander";
                    };
                    class CommanderMG: CommanderMG{};
                };
            };
            class kurs_MG_turret: kurs_MG_turret
            {
                gunnerType = "SiP_US_Army_tank_bow";
            };
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