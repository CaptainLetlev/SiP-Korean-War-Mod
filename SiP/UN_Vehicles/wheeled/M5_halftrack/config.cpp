class cfgPatches
{
    class SiP_Patch_m3_halftrack
    {
        addonRootClass = "SiP_Patch_un_vehicles";
        requiredAddons[] = 
        {
            "WW2_SPE_Core_c_Core_c",
            "WW2_SPE_Assets_c_Vehicles_WheeledAPC_c_M3_Halftrack"
        };
        units[] = 
        {
            "SiP_M3A1_Halftrack",
            "SiP_M3_Halftrack",
            "SiP_M3_Halftrack_open",

            "SiP_M16_Halftrack",

            "SiP_M5A1_Halftrack",
            "SiP_M5_Halftrack",
            "SiP_M5_Halftrack_open",

            "SiP_M16_Halftrack_UK"
        };
        weapons[] = 
        {
            "SiP_M2_m5"
        };
    };
};

class cfgWeapons
{
    class SPE_MLMG_base;
    class SPE_M2: SPE_MLMG_base
    {
        class manual;
        class close;
        class short;
        class medium;
        class far;
    };

    class SiP_M2_m5: SPE_M2
    {
        magazines[] = {"SiP_m2_v_100_mag"};
        class manual: manual
        {
            reloadTime = 0.124;
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundsetshot[] = {"SiP_m2_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
        class close: close
        {
            reloadTime = 0.124;
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundsetshot[] = {"SiP_m2_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
        class short: short
        {
            reloadTime = 0.124;
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundsetshot[] = {"SiP_m2_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
        class medium: medium
        {
            reloadTime = 0.124;
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundsetshot[] = {"SiP_m2_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
        class far: far
        {
            reloadTime = 0.124;
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundsetshot[] = {"SiP_m2_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
    };
};

class cfgVehicles
{
    class SPE_Truck_base;
    class SPE_WheeledTracked_APC_base: SPE_Truck_base
	{
        class Turrets;
    };
    class SPE_Halftrack_base: SPE_WheeledTracked_APC_base
	{
        class UserActions;
        class Turrets: Turrets
		{
			class MainTurret;
        };
        class AnimationSources;
    };
    class SPE_M3A1_Halftrack_base: SPE_Halftrack_base
	{
        class Turrets: Turrets
        {
            class MainTurret;
        };
        class AnimationSources;
        class UserActions;
    };

    class SPE_US_M16_Halftrack_base: SPE_Halftrack_base
	{
        class Turrets: Turrets
        {
            class MainTurret;
        };
        class AnimationSources;
        class UserActions;
    };

    class SPE_US_M3_Halftrack_Unarmed: SPE_Halftrack_base
	{
        class UserActions;
    };

    class SPE_US_M3_Halftrack_Unarmed_Open: SPE_Halftrack_base
    {
        class UserActions;
    };

    class SiP_M3A1_Halftrack: SPE_M3A1_Halftrack_base
    {
        author = "Letlev";
        scope = 2;
        scopecurator = 2;
        displayname = "M3A1 Half-Track";
        side = 1;
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        crew = "SiP_US_Army_driver";
        typicalCargo[] = {"SiP_US_Army_driver"};
        weapons[] = {"SiP_Light_Horn_weapon"}; 
        magazines[] = {"vn_ship_horn_mag"};
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
                    "SiP_m2_v_100_mag"
                };
            };
        };
        animationList[] = {"canopy_frame_hide_source",0,"canopy_hide_source",1,"winch_hide_source",0,"stowage_hide_source",1};
        class textureSources{};
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
        class TransportWeapons
        {
            class _xx_vn_m3a1
            {
                weapon = "vn_m3a1";
                count = 1;
            };
            class _xx_SPE_M9A1_Bazooka
            {
                weapon = "SPE_M9A1_Bazooka";
                count = 1;
            };
            class _xx_vn_m2carbine
            {
                weapon = "vn_m2carbine";
                count = 2;
            };
        };
        class TransportMagazines
        {
            class _xx_vn_m1903_mag
            {
                magazine = "vn_m1903_mag";
                count = 12;
            };
            class _xx_vn_m1_garand_mag
            {
                magazine = "vn_m1_garand_mag";
                count = 48;
            };
            class _xx_vn_m1918_t_mag
            {
                magazine = "vn_m1918_t_mag";
                count = 10;
            };
            class _xx_vn_carbine_15_mag
            {
                magazine = "vn_carbine_15_mag";
                count = 15;
            };
            class _xx_vn_m3a1_mag
            {
                magazine = "vn_m3a1_mag";
                count = 10;
            };
            class _xx_ace_compat_sip_m1919_50
            {
                magazine = "ace_compat_sip_m1919_50";
                count = 3;
            };
            class _xx_SPE_US_Mk_2
            {
                magazine = "SPE_US_Mk_2";
                count = 10;
            };
            class _xx_SPE_US_M18
            {
                magazine = "SPE_US_M18";
                count = 4;
            };
            class _xx_SPE_US_M18_Green
            {
                magazine = "SPE_US_M18_Green";
                count = 1;
            };
            class _xx_SPE_US_M18_Red
            {
                magazine = "SPE_US_M18_Red";
                count = 1;
            };
            class _xx_SPE_US_M18_Yellow
            {
                magazine = "SPE_US_M18_Yellow";
                count = 1;
            };
            class _xx_SPE_1Rnd_60mm_M6A3
            {
                magazine = "SPE_1Rnd_60mm_M6A3";
                count = 6;
            };
        };
        class TransportBackpacks
        {
            class _xx_SiP_m1945_backpack_roll
            {
                backpack = "SiP_m1945_backpack_roll";
                count = 4;
            };
            class _xx_SiP_m1945_packboard_m20bazooka
            {
                backpack = "SiP_m1945_packboard_m20bazooka";
                count = 2;
            };
        };
        class TransportItems
        {
            class _xx_SiP_ACE_Items_personalAidKit
            {
                name = "SiP_ACE_Items_personalAidKit";
                count = 1;
            };
            class _xx_SPE_ToolKit_NoMass
            {
                name = "SPE_ToolKit_NoMass";
                count = 1;
            };
        };
    };
    class SiP_M3_Halftrack: SPE_US_M3_Halftrack_Unarmed
    {
        author = "Letlev";
        displayname = "M3 Half-Track";
        scope = 2;
        scopecurator = 2;
        side = 1;
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        crew = "SiP_US_Army_driver";
        typicalCargo[] = {"SiP_US_Army_driver"};
        class textureSources{};
        weapons[] = {"SiP_Light_Horn_weapon"}; 
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
        class TransportWeapons
        {
            class _xx_vn_m3a1
            {
                weapon = "vn_m3a1";
                count = 1;
            };
            class _xx_SPE_M9A1_Bazooka
            {
                weapon = "SPE_M9A1_Bazooka";
                count = 1;
            };
            class _xx_vn_m2carbine
            {
                weapon = "vn_m2carbine";
                count = 2;
            };
        };
        class TransportMagazines
        {
            class _xx_vn_m1903_mag
            {
                magazine = "vn_m1903_mag";
                count = 12;
            };
            class _xx_vn_m1_garand_mag
            {
                magazine = "vn_m1_garand_mag";
                count = 48;
            };
            class _xx_vn_m1918_t_mag
            {
                magazine = "vn_m1918_t_mag";
                count = 10;
            };
            class _xx_vn_carbine_15_mag
            {
                magazine = "vn_carbine_15_mag";
                count = 15;
            };
            class _xx_vn_m3a1_mag
            {
                magazine = "vn_m3a1_mag";
                count = 10;
            };
            class _xx_ace_compat_sip_m1919_50
            {
                magazine = "ace_compat_sip_m1919_50";
                count = 3;
            };
            class _xx_SPE_US_Mk_2
            {
                magazine = "SPE_US_Mk_2";
                count = 10;
            };
            class _xx_SPE_US_M18
            {
                magazine = "SPE_US_M18";
                count = 4;
            };
            class _xx_SPE_US_M18_Green
            {
                magazine = "SPE_US_M18_Green";
                count = 1;
            };
            class _xx_SPE_US_M18_Red
            {
                magazine = "SPE_US_M18_Red";
                count = 1;
            };
            class _xx_SPE_US_M18_Yellow
            {
                magazine = "SPE_US_M18_Yellow";
                count = 1;
            };
            class _xx_SPE_1Rnd_60mm_M6A3
            {
                magazine = "SPE_1Rnd_60mm_M6A3";
                count = 6;
            };
        };
        class TransportBackpacks
        {
            class _xx_SiP_m1945_backpack_roll
            {
                backpack = "SiP_m1945_backpack_roll";
                count = 4;
            };
            class _xx_SiP_m1945_packboard_m20bazooka
            {
                backpack = "SiP_m1945_packboard_m20bazooka";
                count = 2;
            };
        };
        class TransportItems
        {
            class _xx_SiP_ACE_Items_personalAidKit
            {
                name = "SiP_ACE_Items_personalAidKit";
                count = 1;
            };
            class _xx_SPE_ToolKit
            {
                name = "SPE_ToolKit";
                count = 1;
            };
        };
    };
    class SiP_M3_Halftrack_open: SPE_US_M3_Halftrack_Unarmed_Open
    {
        author = "Letlev";
        displayname = "M3 Half-Track (Open)";
        scope = 2;
        scopecurator = 2;
        side = 1;
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        crew = "SiP_US_Army_driver";
        typicalCargo[] = {"SiP_US_Army_driver"};
        weapons[] = {"SiP_Light_Horn_weapon"}; 
        magazines[] = {"vn_ship_horn_mag"};
        class textureSources{};
        
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
        class TransportWeapons
        {
            class _xx_vn_m3a1
            {
                weapon = "vn_m3a1";
                count = 1;
            };
            class _xx_SPE_M9A1_Bazooka
            {
                weapon = "SPE_M9A1_Bazooka";
                count = 1;
            };
            class _xx_vn_m2carbine
            {
                weapon = "vn_m2carbine";
                count = 2;
            };
        };
        class TransportMagazines
        {
            class _xx_vn_m1903_mag
            {
                magazine = "vn_m1903_mag";
                count = 12;
            };
            class _xx_vn_m1_garand_mag
            {
                magazine = "vn_m1_garand_mag";
                count = 48;
            };
            class _xx_vn_m1918_t_mag
            {
                magazine = "vn_m1918_t_mag";
                count = 10;
            };
            class _xx_vn_carbine_15_mag
            {
                magazine = "vn_carbine_15_mag";
                count = 15;
            };
            class _xx_vn_m3a1_mag
            {
                magazine = "vn_m3a1_mag";
                count = 10;
            };
            class _xx_ace_compat_sip_m1919_50
            {
                magazine = "ace_compat_sip_m1919_50";
                count = 3;
            };
            class _xx_SPE_US_Mk_2
            {
                magazine = "SPE_US_Mk_2";
                count = 10;
            };
            class _xx_SPE_US_M18
            {
                magazine = "SPE_US_M18";
                count = 4;
            };
            class _xx_SPE_US_M18_Green
            {
                magazine = "SPE_US_M18_Green";
                count = 1;
            };
            class _xx_SPE_US_M18_Red
            {
                magazine = "SPE_US_M18_Red";
                count = 1;
            };
            class _xx_SPE_US_M18_Yellow
            {
                magazine = "SPE_US_M18_Yellow";
                count = 1;
            };
            class _xx_SPE_1Rnd_60mm_M6A3
            {
                magazine = "SPE_1Rnd_60mm_M6A3";
                count = 6;
            };
        };
        class TransportBackpacks
        {
            class _xx_SiP_m1945_backpack_roll
            {
                backpack = "SiP_m1945_backpack_roll";
                count = 4;
            };
            class _xx_SiP_m1945_packboard_m20bazooka
            {
                backpack = "SiP_m1945_packboard_m20bazooka";
                count = 2;
            };
        };
        class TransportItems
        {
            class _xx_SiP_ACE_Items_personalAidKit
            {
                name = "SiP_ACE_Items_personalAidKit";
                count = 1;
            };
            class _xx_SPE_ToolKit
            {
                name = "SPE_ToolKit";
                count = 1;
            };
        };
    };  
    
    class SiP_M16_Halftrack: SPE_US_M16_Halftrack_base
    {
        author = "Letlev";
        scope = 2;
        scopecurator = 2;
        side = 1;
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        crew = "SiP_US_Army_driver";
        typicalCargo[] = {"SiP_US_Army_driver"};
        weapons[] = {"SiP_Light_Horn_weapon"}; 
        magazines[] = {"vn_ship_horn_mag"};
        hiddenSelectionsTextures[] = 
        {
            "WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Exterior_co.paa",
            "WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Exterior_2_co.paa",
            "WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Interior_co.paa",
            "WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Wheels_co.paa",
            "WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Winch_co.paa",
            "WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Tracks_co.paa",
            "WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_M16_co.paa",
            "WW2\SPE_Assets_t\Vehicles\StaticWeapons_t\M45\Turret_star_co.paa",
            "WW2\SPE_Assets_t\Vehicles\StaticWeapons_t\M45\Supports_co.paa",
            "WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1_decals\decal_AAA_alt_mc.paa",
            "WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\Usa_ca.paa"
        };
        attenuationEffectType = "vn_openvehicle_attenuation";
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                soundAttenuationTurret = "vn_openvehicle_attenuation";
                gunnerType = "SiP_US_Army_gunner";
                weapons[] = {"SiP_m2hb_quad_static_weapon_SPE"};
                magazines[] = {"vn_m2_v_800_mag","vn_m2_v_800_mag","vn_m2_v_800_mag","vn_m2_v_800_mag","vn_m2_v_800_mag","vn_m2_v_800_mag","vn_m2_v_800_mag","vn_m2_v_800_mag","vn_m2_v_800_mag","vn_m2_v_800_mag","vn_m2_v_800_mag","vn_m2_v_800_mag"};
            };
        };
        class textureSources{};
        class AnimationSources: AnimationSources
        {
            class muzzle_rot_cannon
			{
				source = "ammorandom";
				weapon = "SiP_m2hb_quad_static_weapon_SPE";
			};
			class reloadMagazine
			{
				source = "reloadMagazine";
				weapon = "SiP_m2hb_quad_static_weapon_SPE";
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
        class TransportWeapons
		{
			class _xx_vn_m3a1
			{
				weapon = "vn_m3a1";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_vn_m3a1_mag
			{
				magazine = "vn_m3a1_mag";
				count = 10;
			};
			class _xx_SPE_US_Mk_2
			{
				magazine = "SPE_US_Mk_2";
				count = 4;
			};
			class _xx_SPE_US_M18
			{
				magazine = "SPE_US_M18";
				count = 2;
			};
			class _xx_SPE_US_M18_Green
			{
				magazine = "SPE_US_M18_Green";
				count = 1;
			};
			class _xx_SPE_US_M18_Red
			{
				magazine = "SPE_US_M18_Red";
				count = 1;
			};
			class _xx_SPE_US_M18_Yellow
			{
				magazine = "SPE_US_M18_Yellow";
				count = 1;
			};
		};
        class TransportItems
        {
            class _xx_SiP_ACE_Items_personalAidKit
            {
                name = "SiP_ACE_Items_personalAidKit";
                count = 1;
            };
            class _xx_SPE_ToolKit
            {
                name = "SPE_ToolKit";
                count = 1;
            };
        };
    };

    class SiP_M5A1_Halftrack: SiP_M3A1_Halftrack
    {
        displayname = "M5A1 Half-Track";
        faction = "SiP_BCFK";
        editorCategory = "SiP_BCFK_Editor_Category";
        crew = "SiP_BCFK_driver";
        typicalCargo[] = {"SiP_BCFK_driver"};
        attenuationEffectType = "vn_openvehicle_attenuation";
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                soundAttenuationTurret = "vn_openvehicle_attenuation";
                gunnerType = "SiP_BCFK_gunner";
            };
        };
        hiddenSelectionsTextures[] = 
        {
            "WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Exterior_co.paa",
            "WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Exterior_2_co.paa",
            "WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Interior_co.paa",
            "WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Wheels_co.paa",
            "WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Dash_co.paa",
            "WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Tracks_co.paa",
            "WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_M2Mount_co.paa",
            "WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1_decals\decal_alt_mc.paa",
            ""
        };
    };
    class SiP_M5_Halftrack: SiP_M3_Halftrack
    {
        displayname = "M5 Half-Track";
        faction = "SiP_BCFK";
        editorCategory = "SiP_BCFK_Editor_Category";
        crew = "SiP_BCFK_driver";
        typicalCargo[] = {"SiP_BCFK_driver"};
        hiddenSelectionsTextures[] = 
        {
            "WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Exterior_co.paa",
            "WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Exterior_2_co.paa",
            "WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Interior_co.paa",
            "WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Wheels_co.paa",
            "WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Winch_co.paa",
            "WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Tracks_co.paa",
            "WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1_decals\decal_alt_mc.paa",
            ""
        };
    };
    class SiP_M5_Halftrack_open: SiP_M3_Halftrack_open
    {
        displayname = "M5 Half-Track (Open)";
        faction = "SiP_BCFK";
        editorCategory = "SiP_BCFK_Editor_Category";
        crew = "SiP_BCFK_driver";
        typicalCargo[] = {"SiP_BCFK_driver"};
        hiddenSelectionsTextures[] = 
        {
            "WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Exterior_co.paa",
            "WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Exterior_2_co.paa",
            "WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Interior_co.paa",
            "WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Wheels_co.paa",
            "WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Dash_co.paa",
            "WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Tracks_co.paa",
            "WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_M2Mount_co.paa",
            "WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1_decals\decal_alt_mc.paa",
            ""
        };
    };
    
    class SiP_M16_Halftrack_UK: SiP_M16_Halftrack
    {
        faction = "SiP_BCFK";
        editorCategory = "SiP_BCFK_Editor_Category";
        crew = "SiP_BCFK_driver";
        typicalCargo[] = {"SiP_BCFK_driver"};
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                gunnerType = "SiP_BCFK_gunner";
            };
        };
        hiddenSelectionsTextures[] = 
        {
            "WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Exterior_co.paa",
            "WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Exterior_2_co.paa",
            "WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Interior_co.paa",
            "WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Wheels_co.paa",
            "WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Winch_co.paa",
            "WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Tracks_co.paa",
            "WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_M16_co.paa",
            "WW2\SPE_Assets_t\Vehicles\StaticWeapons_t\M45\Turret_star_co.paa",
            "WW2\SPE_Assets_t\Vehicles\StaticWeapons_t\M45\Supports_co.paa",
            "WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1_decals\decal_AAA_alt_mc.paa",
            ""
        };
    };
};