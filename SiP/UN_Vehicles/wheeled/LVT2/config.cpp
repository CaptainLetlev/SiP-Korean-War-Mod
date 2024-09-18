class cfgPatches
{
    class SiP_Patch_lvt2
    {
        addonRootClass = "SiP_Patch_un_vehicles";
        requiredAddons[] = 
        {
            "WW2_Core_c_WW2_Core_c",
            "fow_tracked_c",
            "SiP_Patch_m1919_static"
        };
        units[] = {"SiP_lvt2_amtrack"};
        weapons[] = 
        {
            "SiP_m1919a4_lvt_weapon_left",
            "SiP_m1919a4_lvt_weapon_right"
        };
    };
};

class cfgWeapons
{
    class SiP_m1919a4_static_weapon;

    class SiP_m1919a4_lvt_weapon_left: SiP_m1919a4_static_weapon
    {
        class GunParticles
        {
            class effect_cartridge
            {
                positionName = "gun_1_nabojnicestart";
                directionName = "gun_1_nabojniceend";
                effectName = "fow_w_effect_cartridge_762";
            };
            class effect_fire
            {
                positionName = "gun_1_beg";
                directionName = "gun_1_end";
                effectName = "fow_w_effect_mg";
            };
        };
    };

    class SiP_m1919a4_lvt_weapon_right: SiP_m1919a4_static_weapon
    {
        class GunParticles
        {
            class effect_cartridge
            {
                positionName = "gun_2_nabojnicestart";
                directionName = "gun_2_nabojniceend";
                effectName = "fow_w_effect_cartridge_762";
            };
            class effect_fire
            {
                positionName = "gun_2_beg";
                directionName = "gun_2_end";
                effectName = "fow_w_effect_mg";
            };
        };
    };
};

class CfgVehicles
{
    class LandVehicle;
    class Tank: LandVehicle
    {
        class NewTurret;
        class Sounds;
        class HitPoints;
    };
    class Tank_F: Tank
    {
        class Turrets
        {
            class MainTurret: NewTurret
            {
                class Turrets
                {
                    class CommanderOptics;
                };
            };
        };
        class AnimationSources;
        class HitPoints: HitPoints
        {
            class HitHull;
            class HitFuel;
            class HitEngine;
            class HitLTrack;
            class HitRTrack;
        };
    };

    class fow_v_lvta2: Tank_F
    {
        class Turrets: Turrets
        {
            class Tuuret_1;
            class Turret_2;
        };
        class HitPoints: HitPoints
        {
            class HitHull;
            class HitFuel;
            class HitEngine;
            class HitLTrack;
            class HitRTrack;
        };
        class AnimationSources;
        class UserActions;
    };

    class SiP_lvt2_amtrack: fow_v_lvta2
    {
        author = "Letlev";
        displayname = "LVT-2 AmTrack";
        scope = 2;
        side = 1;
        faction = "SiP_US_Marines";
        editorCategory = "SiP_US_Marines_Editor_Category";
        editorSubcategory = "EdSubcat_APCs";
        crew = "SiP_US_Marines_driver";
        typicalCargo[] = {"SiP_US_Marines_driver"};
        attenuationEffectType = "OpenCarAttenuation";
        armor = 300;
		armorStructural = 2;
        weapons[] = {"SiP_Medium_Horn_weapon"}; 
        magazines[] = {"vn_ship_horn_mag"};
        class Turrets: Turrets
        {
            class Turret1: Tuuret_1
            {
                soundAttenuationTurret = "vn_openvehicle_attenuation";
                gunnerType = "SiP_US_Marines_gunner";
                weapons[] = {"SiP_m1919a4_lvt_weapon_left"};
                magazines[] = {"SiP_m1919_v_250_mag","SiP_m1919_v_250_mag","SiP_m1919_v_250_mag","SiP_m1919_v_250_mag","SiP_m1919_v_250_mag"};
            };
            class Turret2: Turret_2
            {
                soundAttenuationTurret = "vn_openvehicle_attenuation";
                gunnerType = "SiP_US_Marines_gunner";
                weapons[] = {"SiP_m1919a4_lvt_weapon_right"};
                magazines[] = {"SiP_m1919_v_250_mag","SiP_m1919_v_250_mag","SiP_m1919_v_250_mag","SiP_m1919_v_250_mag","SiP_m1919_v_250_mag"};
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
        class HitPoints: HitPoints
        {
            class HitHull: HitHull
            {
                armor = 30;
                material = -1;
                name = "hull";
                visual = "zbytek";
                passThrough = 1;
                minimalHit = 0.14;
                explosionShielding = 2.0;
                radius = 0.2;
            };
            class HitEngine: HitEngine
            {
                armor = 20;
                material = -1;
                name = "engine";
                passThrough = 0.2;
                minimalHit = 0.24;
                explosionShielding = 1;
                radius = 0.33;
            };
            class HitLTrack: HitLTrack
            {
                armor = 5.5;
                material = -1;
                name = "track_l";
                passThrough = 0;
                minimalHit = 0.08;
                explosionShielding = 1.44;
                radius = 0.3;
            };
            class HitRTrack: HitRTrack
            {
                armor = 5.5;
                material = -1;
                name = "track_r";
                passThrough = 0;
                minimalHit = 0.08;
                explosionShielding = 1.44;
                radius = 0.3;
            };
        };
        class AnimationSources: AnimationSources
        {
            class Top_Hatch_Driver
            {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class Front_Hatch_Driver
            {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class Top_Hatch_CoDriver
            {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class gun_1_reloadanim
            {
                source = "reload";
                weapon = "SiP_m1919a4_lvt_weapon_left";
            };
            class gun_1_reloadMagazine
            {
                source = "reloadmagazine";
                weapon = "SiP_m1919a4_lvt_weapon_left";
            };
            class gun_1_revolving
            {
                source = "revolving";
                weapon = "SiP_m1919a4_lvt_weapon_left";
            };
            class gun_1_ammoRandom
            {
                source = "ammoRandom";
                weapon = "SiP_m1919a4_lvt_weapon_left";
            };
            class gun_2_reloadanim
            {
                source = "reload";
                weapon = "SiP_m1919a4_lvt_weapon_right";
            };
            class gun_2_reloadmagazine
            {
                source = "reloadmagazine";
                weapon = "SiP_m1919a4_lvt_weapon_right";
            };
            class gun_2_revolving
            {
                source = "revolving";
                weapon = "SiP_m1919a4_lvt_weapon_right";
            };
            class gun_2_ammoRandom
            {
                source = "ammoRandom";
                weapon = "SiP_m1919a4_lvt_weapon_right";
            };
        };
        class Sounds
        {
            soundsetsint[] = 
            {
                "vn_m113_engine_idle_int_soundset",
                "vn_m113_engine_idle_water_int_soundset",
                "vn_m113_engine_high_int_soundset",
                "vn_m113_engine_high_int_res_soundset",
                "vn_m113_engine_high_water_int_soundset",
                "vn_m113_water_standing_int_soundset",
                "vn_m113_rattle_int_soundset",
                "vn_m113_rattle_drive_soundset",
                "vn_m113_start_interior_soundset",
                "vn_m113_int_track_left_slow_soundset",
                "vn_m113_int_track_left_fast_soundset",
                "vn_m113_int_track_right_slow_soundset",
                "vn_m113_int_track_right_fast_soundset",
                "vn_truck_rainint_soundset",
                "tanks_material_strain_int_soundset"
            };
            soundsetsext[] = 
            {
                "vn_m113_engine_idle_ext_soundset",
                "vn_m113_engine_idle_water_soundset",
                "vn_m113_engine_high_ext_soundset",
                "vn_m113_engine_high_exh_soundset",
                "vn_m113_engine_high_water_ext_soundset",
                "vn_m113_engine_high_water_exh_soundset",
                "vn_m113_water_standing_ext_soundset",
                "vn_m113_rattle_ext_soundset",
                "vn_m113_engine_rev_ext_soundset",
                "vn_m113_engine_distance_soundset",
                "vn_m113_start_exterior_soundset",
                "vn_boat_waternoise_ext_0_soundset",
                "vn_boat_waternoise_ext_1_soundset",
                "vn_boat_waternoise_ext_2_soundset",
                "vn_boat_waternoise_ext_3_soundset",
                "vn_boat_waternoise_ext_4_soundset",
                "vn_boat_waternoise_ext_5_soundset",
                "vn_tank_treads_pavn_soundset",
                "vn_tank_treads_pavn_distance_soundset",
                "vn_m113_track_left_slow_soundset",
                "vn_m113_track_left_fast_soundset",
                "vn_m113_track_right_slow_soundset",
                "vn_m113_track_right_fast_soundset"
            };
        };
    };
};