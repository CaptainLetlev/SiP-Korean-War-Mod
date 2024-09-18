class cfgPatches
{
    class SiP_Patch_willys_mb
    {
        addonRootClass = "SiP_Patch_un_vehicles";
        requiredAddons[] = 
        {
            "WW2_SPE_Assets_c_Vehicles_Wheeled_U1_c_G503_MB",
            "WW2_SPE_Assets_c_Vehicles_Weapons_c"
        };
        units[] = 
        {
            "SiP_Willys_MB_roof",
            "SiP_Willys_MB",
            "SiP_Willys_MB_stretcher",
            "SiP_Willys_MB_mg",
            "SiP_Willys_MB_mg_m2",
            "SiP_Willys_MB_Patrol",
            "SiP_Willys_MB_Patrol_M2",
            
            "SiP_Willys_MB_roof_marines",
            "SiP_Willys_MB_marines",
            "SiP_Willys_MB_stretcher_marines",
            "SiP_Willys_MB_mg_marines",
            "SiP_Willys_MB_mg_m2_marines",
            "SiP_Willys_MB_Patrol_marines",
            "SiP_Willys_MB_Patrol_M2_marines",
            
            "SiP_Willys_MB_roof_UK",
            "SiP_Willys_MB_UK",
            "SiP_Willys_MB_stretcher_UK",
            "SiP_Willys_MB_mg_UK",
            "SiP_Willys_MB_mg_m2_UK"
        };
        weapons[] = 
        {
            "SiP_Jeep_Horn",

            "SiP_m1919a4_jeep_weapon",
            "SiP_m1919a4_jeep_weapon_front",

            "SiP_m2hb_jeep_weapon"
        };
    };
};

class cfgVehicles
{
    class SPE_G503_MB_base;

    class SPE_G503_MB_Unarmed_base;
    class SPE_G503_MB_Open_base;
    class SPE_G503_MB_Ambulance_base;
    class SPE_US_G503_MB_M1919_base: SPE_G503_MB_base
    {
        class Turrets;
    };
    class SPE_US_G503_MB_M2_base: SPE_G503_MB_base
    {
        class Turrets;
    };

    class SPE_US_G503_MB_M1919_PATROL_base: SPE_G503_MB_base
    {
        class Turrets;
    };
    class SPE_US_G503_MB_M2_PATROL_base: SPE_G503_MB_base
    {
        class Turrets;
    };

    class SPE_US_G503_MB: SPE_G503_MB_Unarmed_base
    {
        class UserActions;
        class AnimationSources;
    };
    class SPE_US_G503_MB_Open: SPE_G503_MB_Open_base
    {
        class UserActions;
        class AnimationSources;
    };

    class SPE_US_G503_MB_Ambulance: SPE_G503_MB_Ambulance_base
    {
        class UserActions;
        class AnimationSources;
    };

    class SPE_US_G503_MB_M1919: SPE_US_G503_MB_M1919_base
    {
        class UserActions;
        class AnimationSources;
        class Turrets: Turrets
        {
            class MainTurret;
        };
    };
    class SPE_US_G503_MB_M2: SPE_US_G503_MB_M2_base
    {
        class UserActions;
        class AnimationSources;
        class Turrets: Turrets
        {
            class MainTurret;
        };
    };

    class SPE_US_G503_MB_M1919_PATROL: SPE_US_G503_MB_M1919_PATROL_base
    {
        class UserActions;
        class AnimationSources;
        class Turrets: Turrets
        {
            class MainTurret;
            class FrontTurret;
        };
    };
    class SPE_US_G503_MB_M2_PATROL: SPE_US_G503_MB_M2_PATROL_base
    {
        class UserActions;
        class AnimationSources;
        class Turrets: Turrets
        {
            class MainTurret;
            class FrontTurret;
        };
    };

    class SiP_Willys_MB_roof: SPE_US_G503_MB
    {
        author = "Letlev";
        scope = 2;
        scopecurator = 2;
        displayName = "Willys MB - Roof";
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        editorSubcategory = "SiP_Jeeps_Editor_Subcategory";
        vehicleClass = "SiP_Jeeps_vehicle_class";
        side = 1;
        crew = "SiP_US_Army_driver";
        weapons[] = {"SiP_Jeep_Horn"};
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
        attenuationEffectType = "vn_openvehicle_attenuation";
        class TransportWeapons
		{
			class _xx_vn_m1carbine
			{
				weapon = "vn_m1carbine";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_vn_carbine_15_mag
			{
				magazine = "vn_carbine_15_mag";
				count=10;
			};
			class _xx_SPE_US_M18
			{
				magazine="SPE_US_M18";
				count=4;
			};
			class _xx_SPE_US_M18_Green
			{
				magazine="SPE_US_M18_Green";
				count=1;
			};
			class _xx_SPE_US_M18_Red
			{
				magazine="SPE_US_M18_Red";
				count=1;
			};
			class _xx_SPE_US_M18_Yellow
			{
				magazine="SPE_US_M18_Yellow";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_SiP_m1945_gpbag_spe_OD
			{
				backpack = "SiP_m1945_gpbag_spe_OD";
				count = 1;
			};
		};
		class TransportItems
		{
			class _xx_SPE_US_FirstAidKit
			{
				name = "SPE_US_FirstAidKit";
				count = 5;
			};
			class _xx_SPE_ToolKit
			{
				name = "SPE_ToolKit";
				count = 1;
			};
			class _xx_SPE_US_FL_TL122
			{
				name = "SPE_US_FL_TL122";
				count = 1;
			};
		};
        class AnimationSources: AnimationSources
		{
            class hide_bridge_marking_source
			{
				displayName = "$STR_SPE_DN_HIDE_BRIDGE_MARKING";
				source = "user";
				animPeriod=9.9999997e-006;
				initPhase = 1;
				useSource = 1;
			};
            class hide_straps_source: hide_bridge_marking_source
			{
				displayName="$STR_SPE_DN_HIDE_STRAPS";
			};
        };
        hiddenSelectionsTextures[]=
        {
            "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_1_co.paa",
            "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_2_co.paa",
            "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_3_co.paa",
            "SiP\Addons\sip_un_vehicles\wheeled\Willys_MB\data\textures\willys_mb_decals_ca.paa",
            "\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\Usa_ca.paa"
        };
    };
    class SiP_Willys_MB: SPE_US_G503_MB_Open
    {
        author = "Letlev";
        scope = 2;
        scopecurator = 2;
        displayName = "Willys MB";
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        side = 1;
        editorSubcategory = "SiP_Jeeps_Editor_Subcategory";
        vehicleClass = "SiP_Jeeps_vehicle_class";
        crew = "SiP_US_Army_driver";
        weapons[] = {"SiP_Jeep_Horn"};
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
        attenuationEffectType = "vn_openvehicle_attenuation";
        class AnimationSources: AnimationSources
		{
            class hide_bridge_marking_source
			{
				displayName = "$STR_SPE_DN_HIDE_BRIDGE_MARKING";
				source = "user";
				animPeriod=9.9999997e-006;
				initPhase = 1;
				useSource = 1;
			};
            class hide_straps_source: hide_bridge_marking_source
			{
				displayName="$STR_SPE_DN_HIDE_STRAPS";
			};
        };
        hiddenSelectionsTextures[]=
        {
            "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_1_co.paa",
            "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_2_co.paa",
            "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_3_co.paa",
            "SiP\Addons\sip_un_vehicles\wheeled\Willys_MB\data\textures\willys_mb_decals_ca.paa",
            "\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\Usa_ca.paa"
        };
    };
    class SiP_Willys_MB_stretcher: SPE_US_G503_MB_Ambulance
    {
        author = "Letlev";
        scope = 2;
        scopecurator = 2;
        displayName = "Willys MB - Stretchers";
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        editorSubcategory = "SiP_Jeeps_Editor_Subcategory";
        vehicleClass = "SiP_Jeeps_vehicle_class";
        side = 1;
        crew = "SiP_US_Army_driver";
        weapons[] = {"SiP_Jeep_Horn"};
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
        attenuationEffectType = "vn_openvehicle_attenuation";
        class AnimationSources: AnimationSources
		{
            class hide_bridge_marking_source
			{
				displayName = "$STR_SPE_DN_HIDE_BRIDGE_MARKING";
				source = "user";
				animPeriod=9.9999997e-006;
				initPhase = 1;
				useSource = 1;
			};
            class hide_straps_source: hide_bridge_marking_source
			{
				displayName="$STR_SPE_DN_HIDE_STRAPS";
			};
        };
        hiddenSelectionsTextures[]=
        {
            "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_1_co.paa",
            "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_2_co.paa",
            "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_3_co.paa",
            "SiP\Addons\sip_un_vehicles\wheeled\Willys_MB\data\textures\Willys_MB_Ambulance_ca.paa",
            "\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\Usa_ca.paa"
        };
    };
    class SiP_Willys_MB_mg: SPE_US_G503_MB_M1919
    {
        author = "Letlev";
        scope = 2;
        scopecurator = 2;
        displayName = "Willys MB - M1919";
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        side = 1;
        editorSubcategory = "SiP_Jeeps_Editor_Subcategory";
        vehicleClass = "SiP_Jeeps_vehicle_class";
        crew = "SiP_US_Army_driver";
        weapons[] = {"SiP_Jeep_Horn"};
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
        attenuationEffectType = "vn_openvehicle_attenuation";
        hiddenSelectionsTextures[]=
        {
            "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_1_co.paa",
            "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_2_co.paa",
            "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_3_co.paa",
            "SiP\Addons\sip_un_vehicles\wheeled\Willys_MB\data\textures\willys_mb_decals_ca.paa",
            "\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\Usa_ca.paa"
        };
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                attenuationEffectType = "vn_openvehicle_attenuation";
                gunnerType = "SiP_US_Army_gunner";
                weapons[] = {"SiP_m1919a4_jeep_weapon"};
                magazines[] = 
                {
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag"
                };
                minTurn = -45;
                maxTurn = 45;
            };
        };
        class AnimationSources: AnimationSources
        {
            class m1919_r_ammoRandom
            {
                source="ammorandom";
                weapon="SiP_m1919a4_jeep_weapon";
            };
            class m1919_r_reloadmagazine
            {
                source="reloadmagazine";
                weapon="SiP_m1919a4_jeep_weapon";
            };
            class m1919_r_reloadanim
            {
                source="reload";
                weapon="SiP_m1919a4_jeep_weapon";
            };
            class m1919_r_revolving
            {
                source="revolving";
                weapon="SiP_m1919a4_jeep_weapon";
            };
            class hide_bridge_marking_source
			{
				displayName = "$STR_SPE_DN_HIDE_BRIDGE_MARKING";
				source = "user";
				animPeriod=9.9999997e-006;
				initPhase = 1;
				useSource = 1;
			};
            class hide_straps_source: hide_bridge_marking_source
			{
				displayName="$STR_SPE_DN_HIDE_STRAPS";
			};
        };
    };
    class SiP_Willys_MB_mg_m2: SPE_US_G503_MB_M2
    {
        author = "Letlev";
        scope = 2;
        scopecurator = 2;
        displayName = "Willys MB - M2";
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        side = 1;
        editorSubcategory = "SiP_Jeeps_Editor_Subcategory";
        vehicleClass = "SiP_Jeeps_vehicle_class";
        crew = "SiP_US_Army_driver";
        weapons[] = {"SiP_Jeep_Horn"};
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
        attenuationEffectType = "vn_openvehicle_attenuation";
        hiddenSelectionsTextures[]=
        {
            "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_1_co.paa",
            "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_2_co.paa",
            "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_3_co.paa",
            "SiP\Addons\sip_un_vehicles\wheeled\Willys_MB\data\textures\willys_mb_decals_ca.paa",
            "\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\Usa_ca.paa"
        };
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                attenuationEffectType = "vn_openvehicle_attenuation";
                gunnerType = "SiP_US_Army_gunner";
                weapons[]=
                {
                    "SiP_m2hb_jeep_weapon"
                };
                magazines[]=
                {
                    "SiP_m2_v_100_mag",
                    "SiP_m2_v_100_mag",
                    "SiP_m2_v_100_mag",
                    "SiP_m2_v_100_mag",
                    "SiP_m2_v_100_mag",
                    "SiP_m2_v_100_mag",
                    "SiP_m2_v_100_mag"
                };
                minTurn = -45;
                maxTurn = 45;
            };
        };
        class AnimationSources: AnimationSources
        {
            class m2_reloadanim
            {
                source="reload";
                weapon="SiP_m2hb_jeep_weapon";
            };
            class m2_reloadmagazine
            {
                source="reloadmagazine";
                weapon="SiP_m2hb_jeep_weapon";
            };
            class m2_revolving
            {
                source="revolving";
                weapon="SiP_m2hb_jeep_weapon";
                sourceAddress="mirror";
            };
            class m2_ammorandom
            {
                source="ammorandom";
                weapon="SiP_m2hb_jeep_weapon";
            };
            class hide_bridge_marking_source
			{
				displayName = "$STR_SPE_DN_HIDE_BRIDGE_MARKING";
				source = "user";
				animPeriod=9.9999997e-006;
				initPhase = 1;
				useSource = 1;
			};
            class hide_straps_source: hide_bridge_marking_source
			{
				displayName="$STR_SPE_DN_HIDE_STRAPS";
			};
        };
    };
    class SiP_Willys_MB_Patrol: SPE_US_G503_MB_M1919_PATROL
    {
        author = "Letlev";
        scope = 2;
        scopecurator = 2;
        displayName = "Willys MB Patrol - M1919";
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        side = 1;
        editorSubcategory = "SiP_Jeeps_Editor_Subcategory";
        vehicleClass = "SiP_Jeeps_vehicle_class";
        crew = "SiP_US_Army_driver";
        weapons[] = {"SiP_Jeep_Horn"};
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
        attenuationEffectType = "vn_openvehicle_attenuation";
        animationList[] = {"hide_bridge_marking_source",1};
        hiddenSelectionsTextures[]=
        {
            "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_1_co.paa",
            "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_2_co.paa",
            "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_3_co.paa",
            "SiP\Addons\sip_un_vehicles\wheeled\Willys_MB\data\textures\willys_mb_decals_ca.paa",
            "\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\Usa_ca.paa"
        };
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                attenuationEffectType = "vn_openvehicle_attenuation";
                gunnerType = "SiP_US_Army_gunner";
                weapons[] = {"SiP_m1919a4_jeep_weapon"};
                magazines[] = 
                {
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag"
                };
                minTurn = -45;
                maxTurn = 45;
            };
            class FrontTurret: FrontTurret
            {
                attenuationEffectType = "vn_openvehicle_attenuation";
                gunnerType = "SiP_US_Army_gunner";
                weapons[] = {"SiP_m1919a4_jeep_weapon_front"};
                magazines[] = 
                {
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag"
                };
            };
        };
        class AnimationSources: AnimationSources
        {
            class m1919_r_ammoRandom
            {
                source="ammorandom";
                weapon="SiP_m1919a4_jeep_weapon";
            };
            class m1919_r_reloadmagazine
            {
                source="reloadmagazine";
                weapon="SiP_m1919a4_jeep_weapon";
            };
            class m1919_r_reloadanim
            {
                source="reload";
                weapon="SiP_m1919a4_jeep_weapon";
            };
            class m1919_r_revolving
            {
                source="revolving";
                weapon="SiP_m1919a4_jeep_weapon";
            };
            class m1919_f_ammoRandom
            {
                source="ammorandom";
                weapon="SiP_m1919a4_jeep_weapon_front";
            };
            class m1919_f_reloadmagazine
            {
                source="reloadmagazine";
                weapon="SiP_m1919a4_jeep_weapon_front";
            };
            class m1919_f_reloadanim
            {
                source="reload";
                weapon="SiP_m1919a4_jeep_weapon_front";
            };
            class m1919_f_revolving
            {
                source="revolving";
                weapon="SiP_m1919a4_jeep_weapon_front";
            };
            class hide_bridge_marking_source
			{
				displayName = "$STR_SPE_DN_HIDE_BRIDGE_MARKING";
				source = "user";
				animPeriod=9.9999997e-006;
				initPhase = 1;
				useSource = 1;
			};
            class hide_straps_source: hide_bridge_marking_source
			{
				displayName="$STR_SPE_DN_HIDE_STRAPS";
			};
        };
    };
    class SiP_Willys_MB_Patrol_M2: SPE_US_G503_MB_M2_PATROL
    {
        author = "Letlev";
        scope = 2;
        scopecurator = 2;
        displayName = "Willys MB Patrol - M2";
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        side = 1;
        editorSubcategory = "SiP_Jeeps_Editor_Subcategory";
        vehicleClass = "SiP_Jeeps_vehicle_class";
        crew = "SiP_US_Army_driver";
        weapons[] = {"SiP_Jeep_Horn"};
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
        attenuationEffectType = "vn_openvehicle_attenuation";
        animationList[] = {"hide_bridge_marking_source",1};
        hiddenSelectionsTextures[]=
        {
            "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_1_co.paa",
            "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_2_co.paa",
            "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_3_co.paa",
            "SiP\Addons\sip_un_vehicles\wheeled\Willys_MB\data\textures\willys_mb_decals_ca.paa",
            "\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\Usa_ca.paa"
        };
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                attenuationEffectType = "vn_openvehicle_attenuation";
                gunnerType = "SiP_US_Army_gunner";
                weapons[]=
                {
                    "SiP_m2hb_jeep_weapon"
                };
                magazines[]=
                {
                    "SiP_m2_v_100_mag",
                    "SiP_m2_v_100_mag",
                    "SiP_m2_v_100_mag",
                    "SiP_m2_v_100_mag",
                    "SiP_m2_v_100_mag",
                    "SiP_m2_v_100_mag",
                    "SiP_m2_v_100_mag"
                };
                minTurn = -45;
                maxTurn = 45;
            };
            class FrontTurret: FrontTurret
            {
                attenuationEffectType = "vn_openvehicle_attenuation";
                gunnerType = "SiP_US_Army_gunner";
                weapons[] = {"SiP_m1919a4_jeep_weapon_front"};
                magazines[] = 
                {
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag"
                };
            };
        };
        class AnimationSources: AnimationSources
        {
            class m2_reloadanim
            {
                source="reload";
                weapon="SiP_m2hb_jeep_weapon";
            };
            class m2_reloadmagazine
            {
                source="reloadmagazine";
                weapon="SiP_m2hb_jeep_weapon";
            };
            class m2_revolving
            {
                source="revolving";
                weapon="SiP_m2hb_jeep_weapon";
                sourceAddress="mirror";
            };
            class m2_ammorandom
            {
                source="ammorandom";
                weapon="SiP_m2hb_jeep_weapon";
            };
            class m1919_f_ammoRandom
            {
                source="ammorandom";
                weapon="SiP_m1919a4_jeep_weapon_front";
            };
            class m1919_f_reloadmagazine
            {
                source="reloadmagazine";
                weapon="SiP_m1919a4_jeep_weapon_front";
            };
            class m1919_f_reloadanim
            {
                source="reload";
                weapon="SiP_m1919a4_jeep_weapon_front";
            };
            class m1919_f_revolving
            {
                source="revolving";
                weapon="SiP_m1919a4_jeep_weapon_front";
            };
            class hide_bridge_marking_source
			{
				displayName = "$STR_SPE_DN_HIDE_BRIDGE_MARKING";
				source = "user";
				animPeriod=9.9999997e-006;
				initPhase = 1;
				useSource = 1;
			};
            class hide_straps_source: hide_bridge_marking_source
			{
				displayName="$STR_SPE_DN_HIDE_STRAPS";
			};
        };
    };
    
    class SiP_Willys_MB_roof_marines: SiP_Willys_MB_roof
    {
        faction = "SiP_US_Marines";
        editorCategory = "SiP_US_Marines_Editor_Category";
        crew = "SiP_US_Marines_driver";
    };
    class SiP_Willys_MB_marines: SiP_Willys_MB
    {
        faction = "SiP_US_Marines";
        editorCategory = "SiP_US_Marines_Editor_Category";
        crew = "SiP_US_Marines_driver";
    };
    class SiP_Willys_MB_stretcher_marines: SiP_Willys_MB_stretcher
    {
        faction = "SiP_US_Marines";
        editorCategory = "SiP_US_Marines_Editor_Category";
        crew = "SiP_US_Marines_driver";
    };
    class SiP_Willys_MB_mg_marines: SiP_Willys_MB_mg
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
    class SiP_Willys_MB_mg_m2_marines: SiP_Willys_MB_mg_m2
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
    class SiP_Willys_MB_Patrol_marines: SiP_Willys_MB_Patrol
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
            class FrontTurret: FrontTurret
            {
                gunnerType = "SiP_US_Marines_gunner";
            };
        };
    };
    class SiP_Willys_MB_Patrol_M2_marines: SiP_Willys_MB_Patrol_M2
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
            class FrontTurret: FrontTurret
            {
                gunnerType = "SiP_US_Marines_gunner";
            };
        };
    };
    
    class SiP_Willys_MB_roof_UK: SiP_Willys_MB_roof
    {
        faction = "SiP_BCFK";
        editorCategory = "SiP_BCFK_Editor_Category";
        crew = "SiP_BCFK_driver";
        hiddenSelectionsTextures[]=
        {
            "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_1_co.paa",
            "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_2_co.paa",
            "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_3_co.paa",
            "SiP\Addons\sip_un_vehicles\wheeled\Willys_MB\data\textures\willys_mb_decals_ca.paa",
            ""
        };
    };
    class SiP_Willys_MB_UK: SiP_Willys_MB
    {
        faction = "SiP_BCFK";
        editorCategory = "SiP_BCFK_Editor_Category";
        crew = "SiP_BCFK_driver";
        hiddenSelectionsTextures[]=
        {
            "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_1_co.paa",
            "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_2_co.paa",
            "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_3_co.paa",
            "SiP\Addons\sip_un_vehicles\wheeled\Willys_MB\data\textures\willys_mb_decals_ca.paa",
            ""
        };
    };
    class SiP_Willys_MB_stretcher_UK: SiP_Willys_MB_stretcher
    {
        faction = "SiP_BCFK";
        editorCategory = "SiP_BCFK_Editor_Category";
        crew = "SiP_BCFK_driver";
        hiddenSelectionsTextures[]=
        {
            "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_1_co.paa",
            "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_2_co.paa",
            "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_3_co.paa",
            "SiP\Addons\sip_un_vehicles\wheeled\Willys_MB\data\textures\Willys_MB_Ambulance_ca.paa",
            ""
        };
    };
    class SiP_Willys_MB_mg_UK: SiP_Willys_MB_mg
    {
        faction = "SiP_BCFK";
        editorCategory = "SiP_BCFK_Editor_Category";
        crew = "SiP_BCFK_driver";
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                gunnerType = "SiP_BCFK_gunner";
            };
        };
        hiddenSelectionsTextures[]=
        {
            "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_1_co.paa",
            "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_2_co.paa",
            "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_3_co.paa",
            "SiP\Addons\sip_un_vehicles\wheeled\Willys_MB\data\textures\willys_mb_decals_ca.paa",
            ""
        };
    };
    class SiP_Willys_MB_mg_m2_UK: SiP_Willys_MB_mg_m2
    {
        faction = "SiP_BCFK";
        editorCategory = "SiP_BCFK_Editor_Category";
        crew = "SiP_BCFK_driver";
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                gunnerType = "SiP_BCFK_gunner";
            };
        };
        hiddenSelectionsTextures[]=
        {
            "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_1_co.paa",
            "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_2_co.paa",
            "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_3_co.paa",
            "SiP\Addons\sip_un_vehicles\wheeled\Willys_MB\data\textures\willys_mb_decals_ca.paa",
            ""
        };
    };
};

class CfgWeapons
{
    class CarHorn;

    class SPE_M1919A6_static_weapon;

    class SiP_m2hb_static_weapon;

    class SiP_Jeep_Horn: CarHorn
    {
        drySound[] = {"SiP\Addons\sip_un_vehicles\wheeled\Willys_MB\data\JeepHorn.wss",+7db,1,200};
    };

    class SiP_m1919a4_jeep_weapon: SPE_M1919A6_static_weapon
    {
        class GunParticles
        {
            class FireEffect
            {
                positionName="m1919_r_end";
                directionName="m1919_r_start";
                effectName="MachineGunCloud";
            };
            class EjectEffect
            {
                positionName="m1919_r_casing_start";
                directionName="m1919_r_casing_end";
                effectName="SPE_30_06_Cartridge";
            };
            class AmmoBeltEject
            {
                effectName="MachineGunEject1";
                positionName="m1919_r_link_start";
                directionName="m1919_r_link_end";
            };
            class RifleAmmoCloud
            {
                positionName="m1919_r_casing_start";
                directionName="m1919_r_casing_end";
                effectName="SPE_RifleAmmoCloud";
            };
            class SmokeEffect
            {
                positionName="m1919_r_end";
                directionName="m1919_r_start";
                effectName="SPE_RifleSmokeTrail";
            };
        };
    };
    class SiP_m1919a4_jeep_weapon_front: SiP_m1919a4_jeep_weapon
    {
        class GunParticles
        {
            class FireEffect
            {
                positionName="m1919_f_end";
                directionName="m1919_f_start";
                effectName="MachineGunCloud";
            };
            class EjectEffect
            {
                positionName="m1919_f_casing_start";
                directionName="m1919_f_casing_end";
                effectName="SPE_30_06_Cartridge";
            };
            class AmmoBeltEject
            {
                effectName="MachineGunEject1";
                positionName="m1919_f_link_start";
                directionName="m1919_f_link_end";
            };
            class RifleAmmoCloud
            {
                positionName="m1919_f_casing_start";
                directionName="m1919_f_casing_end";
                effectName="SPE_RifleAmmoCloud";
            };
            class SmokeEffect
            {
                positionName="m1919_f_end";
                directionName="m1919_f_start";
                effectName="SPE_RifleSmokeTrail";
            };
        };
    };
    
    class SiP_m2hb_jeep_weapon: SiP_m2hb_static_weapon
    {
        class GunParticles
        {
            class FireEffect
            {
                positionName="m2_end";
                directionName="m2_start";
                effectName="MachineGunCloud";
            };
            class EjectEffect
            {
                positionName="m2_casing_start";
                directionName="m2_casing_end";
                effectName="MachineGunCartridge2";
            };
            class AmmoBeltEject
            {
                effectName="MachineGunEject1";
                positionName="m2_link_start";
                directionName="m2_link_end";
            };
            class RifleAmmoCloud
            {
                positionName="m2_casing_start";
                directionName="m2_casing_end";
                effectName="SPE_RifleAmmoCloud";
            };
        };
    };
};