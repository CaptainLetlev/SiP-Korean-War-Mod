class cfgPatches
{
    class SiP_Patch_un_trucks_GMC_CCKW
    {
        addonRootClass = "SiP_Patch_un_vehicles";
        requiredAddons[] = 
        {
            "WW2_Core_c_WW2_Core_c",
            "WW2_Assets_c_Vehicles_Wheeled_c",
            "HQ_Trucks"
        };
        units[] = 
        {            
            "SiP_GMC_CCKW_transport_open",
            "SiP_GMC_CCKW_transport",
            "SiP_GMC_CCKW_ammo",
            "SiP_GMC_CCKW_fuel",
            "SiP_GMC_CCKW_repair",
            "SiP_GMC_CCKW_ambulance",

            "SiP_GMC_CCKW_transport_open_marines",
            "SiP_GMC_CCKW_transport_marines",
            "SiP_GMC_CCKW_ammo_marines",
            "SiP_GMC_CCKW_fuel_marines",
            "SiP_GMC_CCKW_repair_marines",
            "SiP_GMC_CCKW_ambulance_marines",

            "SiP_GMC_CCKW_repair_uk",
            "SiP_GMC_CCKW_ambulance_uk"
        };
        weapons[] = {};
    };
};

class cfgVehicles
{
    class Truck_F;

    class SPE_Truck_base: Truck_F
    {
        class Turrets;
    };
    class SPE_CCKW_353_Base: SPE_Truck_base
    {
        class Turrets: Turrets
        {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };
    class SPE_CCKW_353: SPE_CCKW_353_Base
    {
        class UserActions;
    };
    class SPE_CCKW_353_Open: SPE_CCKW_353_Base
    {
        class UserActions;
    };
    class SPE_CCKW_353_Ammo: SPE_CCKW_353_Base
    {
        class UserActions;
    };
    class SPE_CCKW_353_Ambulance: SPE_CCKW_353_Base
    {
        class UserActions;
    };
    class SPE_CCKW_353_Repair: SPE_CCKW_353_Base
    {
        class UserActions;
    };
    class SPE_CCKW_353_Fuel: SPE_CCKW_353_Base
    {
        class UserActions;
    };

    class SPE_CCKW_353_M2: SPE_CCKW_353_Base
    {
        class Turrets: Turrets
        {
            class MainTurret;
        };
        class UserActions;
        class AnimationSources;
    };
     
    class SiP_GMC_CCKW_transport: SPE_CCKW_353
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "GMC CCKW Truck";
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        side = 1;
        editorSubcategory = "SiP_Trucks_Editor_Subcategory";
        vehicleClass = "SiP_Trucks_vehicle_class";
        crew = "SiP_US_Army_driver";
        attenuationEffectType = "vn_openvehicle_attenuation";
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_1_co.paa",
            "\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_2_co.paa",
            "\SiP\UN_Vehicles\wheeled\Trucks\GMC_CCKW\textures\CCKW_us_army_decal_ca.paa",
            "\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\Usa_ca.paa"
        };
        weapons[] = {"SiP_ooga_horn_weapon"};
        magazines[] = {"vn_ship_horn_mag"};
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
    class SiP_GMC_CCKW_transport_open: SPE_CCKW_353_Open
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "GMC CCKW Truck - Open";
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        side = 1;
        editorSubcategory = "SiP_Trucks_Editor_Subcategory";
        vehicleClass = "SiP_Trucks_vehicle_class";
        crew = "SiP_US_Army_driver";
        attenuationEffectType = "vn_openvehicle_attenuation";
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_1_co.paa",
            "\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_2_co.paa",
            "\SiP\UN_Vehicles\wheeled\Trucks\GMC_CCKW\textures\CCKW_us_army_decal_ca.paa",
            "\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\Usa_ca.paa"
        };
        weapons[] = {"SiP_ooga_horn_weapon"};
        magazines[] = {"vn_ship_horn_mag"};
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
    class SiP_GMC_CCKW_ammo: SPE_CCKW_353_Ammo
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "GMC CCKW Truck - Ammo";
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        side = 1;
        editorSubcategory = "SiP_Trucks_Editor_Subcategory";
        vehicleClass = "SiP_Trucks_vehicle_class";
        crew = "SiP_US_Army_driver";
        attenuationEffectType = "vn_openvehicle_attenuation";
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_1_co.paa",
            "\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_2_co.paa",
            "\SiP\UN_Vehicles\wheeled\Trucks\GMC_CCKW\textures\CCKW_us_army_decal_ca.paa",
            "\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\Usa_ca.paa"
        };
        weapons[] = {"SiP_ooga_horn_weapon"};
        magazines[] = {"vn_ship_horn_mag"};
        animationList[] = {"tent_hide_source",0,"tent_cabin_hide_source",0.5,"tent_bars_hide_source",0};
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
        class TransportMagazines
        {
            class _xx_vn_m1903_mag
            {
                magazine = "vn_m1903_mag";
                count = 25;
            };
            class _xx_vn_carbine_15_mag
            {
                magazine = "vn_carbine_15_mag";
                count = 30;
            };
            class _xx_vn_carbine_30_mag
            {
                magazine = "vn_carbine_30_mag";
                count = 25;
            };
            class _xx_vn_m1a1_30_mag
            {
                magazine = "vn_m1a1_30_mag";
                count = 25;
            };
            class _xx_vn_m3a1_mag
            {
                magazine = "vn_m3a1_mag";
                count = 25;
            };
            class _xx_vn_m1_garand_mag
            {
                magazine = "vn_m1_garand_mag";
                count = 100;
            };
            class _xx_vn_m1918_t_mag
            {
                magazine = "vn_m1918_t_mag";
                count = 25;
            };
            class _xx_vn_m1911_mag
            {
                magazine = "vn_m1911_mag";
                count = 10;
            };
            class _xx_SPE_1Rnd_60mm_M6A3
            {
                magazine = "SPE_1Rnd_60mm_M6A3";
                count = 20;
            };
            class _xx_vn_m20a1b1_heat_mag
            {
                magazine = "vn_m20a1b1_heat_mag";
                count = 20;
            };
            class _xx_SPE_US_Mk_2
            {
                magazine = "SPE_US_Mk_2";
                count = 10;
            };
            class _xx_SPE_US_M18
            {
                magazine = "SPE_US_M18";
                count = 10;
            };
            class _xx_SPE_US_M18_Red
            {
                magazine = "SPE_US_M18_Red";
                count = 10;
            };
            class _xx_SPE_US_M18_Green
            {
                magazine = "SPE_US_M18_Green";
                count = 10;
            };
            class _xx_SPE_US_M18_Yellow
            {
                magazine = "SPE_US_M18_Yellow";
                count = 10;
            };
        };
        class TransportWeapons
        {
            class _xx_vn_m_wrench_01
            {
                weapon = "vn_m_wrench_01";
                count = 1;
            };
            class _xx_vn_m_shovel_01
            {
                weapon = "vn_m_shovel_01";
                count = 1;
            };
            class _xx_vn_m_axe_01
            {
                weapon = "vn_m_axe_01";
                count = 1;
            };
            class _xx_vn_m_machete_02
            {
                weapon = "vn_m_machete_02";
                count = 1;
            };
            class _xx_vn_mx991_red
            {
                weapon = "vn_mx991_red";
                count = 1;
            };
            class _xx_vn_m1911
            {
                weapon = "vn_m1911";
                count = 5;
            };
            class _xx_vn_m1_garand
            {
                weapon = "vn_m1_garand";
                count = 5;
            };
            class _xx_vn_m1carbine
            {
                weapon = "vn_m1carbine";
                count = 5;
            };
            class _xx_vn_m2carbine
            {
                weapon = "vn_m2carbine";
                count = 5;
            };
            class _xx_vn_m1a1_tommy
            {
                weapon = "vn_m1a1_tommy";
                count = 2;
            };
            class _xx_vn_m1928a1_tommy
            {
                weapon = "vn_m1928a1_tommy";
                count = 2;
            };
            class _xx_vn_m1918
            {
                weapon = "vn_m1918";
                count = 5;
            };
            class _xx_SPE_M1919A6
            {
                weapon = "SPE_M1919A6";
                count = 2;
            };
            class _xx_vn_m3a1
            {
                weapon = "vn_m3a1";
                count = 5;
            };
            class _xx_SiP_m1903a4_Springfield_scope
            {
                weapon = "SiP_m1903a4_Springfield_scope";
                count = 2;
            };
            class _xx_SiP_m1c_garand_scope
            {
                weapon = "SiP_m1c_garand_scope";
                count = 2;
            };
            class _xx_vn_m1_garand_gl
            {
                weapon = "vn_m1_garand_gl";
                count = 3;
            };
            class _xx_vn_m1897
            {
                weapon = "vn_m1897";
                count = 1;
            };
            class _xx_SiP_m1912_shotgun
            {
                weapon = "SiP_m1912_shotgun";
                count = 1;
            };
            class _xx_SPE_M9A1_Bazooka
            {
                weapon = "SPE_M9A1_Bazooka";
                count = 2;
            };
            class _xx_vn_m20a1b1_01
            {
                weapon = "vn_m20a1b1_01";
                count = 2;
            };
        };
    };
    class SiP_GMC_CCKW_ambulance: SPE_CCKW_353_Ambulance
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "GMC CCKW Truck - Ambu";
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        side = 1;
        editorSubcategory = "SiP_Trucks_Editor_Subcategory";
        vehicleClass = "SiP_Trucks_vehicle_class";
        crew = "SiP_US_Army_driver";
        attenuationEffectType = "vn_openvehicle_attenuation";
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_1_co.paa",
            "\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_2_co.paa",
            "\SiP\UN_Vehicles\wheeled\Trucks\GMC_CCKW\textures\CCKW_us_army_med_decal_ca.paa",
            "\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\Usa_ca.paa"
        };
        class Turrets: Turrets
        {
            class CargoTurret_01: CargoTurret_01
            {
            };
            class CargoTurret_02: CargoTurret_02
            {
            };
        };
        weapons[] = {"SiP_ooga_horn_weapon"};
        magazines[] = {"vn_ship_horn_mag"};
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
    class SiP_GMC_CCKW_repair: SPE_CCKW_353_Repair
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "GMC CCKW Truck - Repair";
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        side = 1;
        editorSubcategory = "SiP_Trucks_Editor_Subcategory";
        vehicleClass = "SiP_Trucks_vehicle_class";
        crew = "SiP_US_Army_driver";
        attenuationEffectType = "vn_openvehicle_attenuation";
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_1_co.paa",
            "\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_2_co.paa",
            "\SiP\UN_Vehicles\wheeled\Trucks\GMC_CCKW\textures\CCKW_us_army_decal_ca.paa",
            "\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_Repair_co.paa",
            "\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\Usa_ca.paa"
        };
        weapons[] = {"SiP_ooga_horn_weapon"};
        magazines[] = {"vn_ship_horn_mag"};
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
    class SiP_GMC_CCKW_fuel: SPE_CCKW_353_Fuel
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "GMC CCKW Truck - Fuel";
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        side = 1;
        editorSubcategory = "SiP_Trucks_Editor_Subcategory";
        vehicleClass = "SiP_Trucks_vehicle_class";
        crew = "SiP_US_Army_driver";
        attenuationEffectType = "vn_openvehicle_attenuation";
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_1_co.paa",
            "\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_2_co.paa",
            "\SiP\UN_Vehicles\wheeled\Trucks\GMC_CCKW\textures\CCKW_us_army_decal_ca.paa",
            "\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_Fuel_co.paa",
            "\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\Usa_ca.paa"
        };
        weapons[] = {"SiP_ooga_horn_weapon"};
        magazines[] = {"vn_ship_horn_mag"};
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
    class SiP_GMC_CCKW_m2: SPE_CCKW_353_M2
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "GMC CCKW Truck - M2";
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        side = 1;
        editorSubcategory = "SiP_Trucks_Editor_Subcategory";
        vehicleClass = "SiP_Trucks_vehicle_class";
        crew = "SiP_US_Army_driver";
        attenuationEffectType = "vn_openvehicle_attenuation";
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_1_co.paa",
            "\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_2_co.paa",
            "\SiP\UN_Vehicles\wheeled\Trucks\GMC_CCKW\textures\CCKW_us_army_decal_ca.paa",
            "\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\Usa_ca.paa"
        };
        animationList[] = {"tent_hide_source",1,"tent_bars_hide_source",0};
        weapons[] = {"SiP_ooga_horn_weapon"};
        magazines[] = {"vn_ship_horn_mag"};
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
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                gunnerType = "SiP_US_Army_gunner";
                weapons[] = {"SiP_M2_m5"};
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
            class ReloadAnim
            {
                source = "reload";
                weapon = "SiP_M2_m5";
            };
            class ReloadMagazine
            {
                source = "reloadmagazine";
                weapon = "SiP_M2_m5";
            };
            class Revolving
            {
                source = "revolving";
                weapon = "SiP_M2_m5";
                sourceAddress = "mirror";
            };
            class ammorandom
            {
                source = "ammorandom";
                weapon = "SiP_M2_m5";
            };
        };
    };

    class SiP_GMC_CCKW_transport_open_marines: SiP_GMC_CCKW_transport_open
    {
        faction = "SiP_US_Marines";
        editorCategory = "SiP_US_Marines_Editor_Category";
        crew = "SiP_US_Marines_driver";
    };
    class SiP_GMC_CCKW_transport_marines: SiP_GMC_CCKW_transport
    {
        faction = "SiP_US_Marines";
        editorCategory = "SiP_US_Marines_Editor_Category";
        crew = "SiP_US_Marines_driver";
    };
    class SiP_GMC_CCKW_ammo_marines: SiP_GMC_CCKW_ammo
    {
        faction = "SiP_US_Marines";
        editorCategory = "SiP_US_Marines_Editor_Category";
        crew = "SiP_US_Marines_driver";
    };
    class SiP_GMC_CCKW_fuel_marines: SiP_GMC_CCKW_fuel
    {
        faction = "SiP_US_Marines";
        editorCategory = "SiP_US_Marines_Editor_Category";
        crew = "SiP_US_Marines_driver";
    };
    class SiP_GMC_CCKW_repair_marines: SiP_GMC_CCKW_repair
    {
        faction = "SiP_US_Marines";
        editorCategory = "SiP_US_Marines_Editor_Category";
        crew = "SiP_US_Marines_driver";
    };
    class SiP_GMC_CCKW_ambulance_marines: SiP_GMC_CCKW_ambulance
    {
        faction = "SiP_US_Marines";
        editorCategory = "SiP_US_Marines_Editor_Category";
        crew = "SiP_US_Marines_driver";
    };
    class SiP_GMC_CCKW_m2_marines: SiP_GMC_CCKW_m2
    {
        faction = "SiP_US_Marines";
        editorCategory = "SiP_US_Marines_Editor_Category";
        crew = "SiP_US_Marines_driver";
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                gunnerType = "SiP_US_Marines_gunner";
            };
        };
    };

    class SiP_GMC_CCKW_repair_uk: SiP_GMC_CCKW_repair
    {
        faction = "SiP_BCFK";
        editorCategory = "SiP_BCFK_Editor_Category";
        crew = "SiP_BCFK_driver";
    };
    class SiP_GMC_CCKW_ambulance_uk: SiP_GMC_CCKW_ambulance
    {
        faction = "SiP_BCFK";
        editorCategory = "SiP_BCFK_Editor_Category";
        crew = "SiP_BCFK_driver";
    };
};