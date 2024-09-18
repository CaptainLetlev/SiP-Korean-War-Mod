class cfgPatches
{
    class SiP_Patch_un_statics_antiair
    {
        Name = " Suicide Is Painless - Korean War Mod - UN Statics - AA";
        addonRootClass = "SiP_Patch_un_statics";
        requiredAddons[] =
        {
            "static_f_vietnam_02",
            "static_f_vietnam_02_c",
            "weapons_v_f_vietnam",
            "WW2_SPE_Assets_c_Vehicles_StaticWeapons_c_M45"
        };
        units[] = 
        {
            "SiP_m45_quadmount_night_USARMY",
            "SiP_m45_quadmount_night_Marines",

            "SiP_m45_quadmount_USARMY",
            "SiP_m45_quadmount_Marines",
            
            "SiP_bofors_USARMY",
            "SiP_m45_quadmount_Marines",
            "SiP_bofors_Marines",
            "SiP_bofors_UK"
        };
        weapons[] = 
        {
            "SiP_m2hb_quad_static_weapon",
            "SiP_m2hb_quad_static_weapon_SPE"
        };
    };
};

class CfgSoundShaders
{
    class SiP_m45quad_close_shot_soundshader
    {
        samples[] = {{"\SiP\UN_Vehicles\static\m2\M2HB_shot.wss",1}};
        volume = "3.25";
        range = 50;
        rangecurve = "vn_weapon_close_volumecurve";
    };
    class SiP_m45quad_close_left_shot_soundshader
    {
        samples[] = {{"\SiP\UN_Vehicles\static\m2\M2HB_shot.wss",1}};
        volume = "3";
        range = 50;
        rangecurve = "vn_weapon_close_volumecurve";
    };
    class SiP_m45quad_close_right_shot_soundshader
    {
        samples[] = {{"\SiP\UN_Vehicles\static\m2\M2HB_shot.wss",1}};
        volume = "3";
        range = 50;
        rangecurve = "vn_weapon_close_volumecurve";
    };
    class SiP_m45quad_close_distance_shot_soundshader
    {
        samples[] = {{"\SiP\UN_Vehicles\static\m2\M2HB_shot.wss",1}};
        volume = "3*(1-interior)";
        range = 150;
        rangecurve[] = {{0,0.2},{50,1},{100,0}};
    };
    class SiP_m45quad_medium_distance_shot_soundshader
    {
        samples[] = {{"\SiP\UN_Vehicles\static\m2\M2HB_shot.wss",1}};
        volume = "5";
        range = 500;
        rangecurve[] = {{0,0},{50,0.2},{75,1},{200,0}};
    };
};

class cfgsoundsets
{
    class vn_m45quad_shot_soundset;
    class SiP_m45quad_shot_soundset: vn_m45quad_shot_soundset
    {
        soundshaders[] = 
        {
            "vn_hmg_distance_tail_soundshader",
            "vn_chainbox_big_soundshader",
            "SiP_m45quad_close_left_shot_soundshader",
            "SiP_m45quad_close_right_shot_soundshader",
            "SiP_m45quad_close_distance_shot_soundshader",
            "SiP_m45quad_medium_distance_shot_soundshader",
            "vn_m45quad_far_distance_shot_soundshader"
        };
    };
};

class cfgWeapons
{
    class vn_m2_v_01;
    class vn_m2_v_quad: vn_m2_v_01
    {
        class FullAuto;
        class AImode1;
        class AImode2;
        class AImode3;
        class AImode4;
    };

    class vn_cannon_20mm_base;
    class vn_mk3_v_01: vn_cannon_20mm_base
    {
        class manual;
        class close;
        class short;
        class medium;
        class far;
    };

    class SiP_m2hb_quad_static_weapon: vn_m2_v_quad
    {
        class FullAuto: FullAuto
        {
            recoil = "recoil_auto_machinegun_5outof10";
            recoilProne = "recoil_auto_machinegun_prone_3outof10";
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundsetshot[] = {"SiP_m45quad_shot_soundset"};
            };
        };
        class AImode1: AImode1
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundsetshot[] = {"SiP_m45quad_shot_soundset"};
            };
        };
        class AImode2: AImode2
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundsetshot[] = {"SiP_m45quad_shot_soundset"};
            };
        };
        class AImode3: AImode3
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundsetshot[] = {"SiP_m45quad_shot_soundset"};
            };
        };
        class AImode4: AImode4
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundsetshot[] = {"SiP_m45quad_shot_soundset"};
            };
        };
    };
    class SiP_m2hb_quad_static_weapon_SPE: SiP_m2hb_quad_static_weapon
    {
        class GunParticles
        {
            class MGCloud0
            {
                effectName = "";
                positionName = "muzzle_effect_pos";
                directionName = "muzzle_effect_dir";
            };
            class casingEjection
            {
                effectName = "MachineGunCartridge2";
                positionName = "case_eject_pos 0";
                directionName = "case_eject_dir 0";
            };
        };
    };

    class SiP_bofors_40mm_weapon: vn_mk3_v_01
    {
        class manual: manual
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundsetshot[] = {"vn_mk3_40mm_cannon_shot_soundset","SPE_cannon_20mm_Tail_SoundSet"};
            };
        };
        class close: close
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundsetshot[] = {"vn_mk3_40mm_cannon_shot_soundset","SPE_cannon_20mm_Tail_SoundSet"};
            };
        };
        class short: short
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundsetshot[] = {"vn_mk3_40mm_cannon_shot_soundset","SPE_cannon_20mm_Tail_SoundSet"};
            };
        };
        class medium: medium
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundsetshot[] = {"vn_mk3_40mm_cannon_shot_soundset","SPE_cannon_20mm_Tail_SoundSet"};
            };
        };
        class far: far
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundsetshot[] = {"vn_mk3_40mm_cannon_shot_soundset","SPE_cannon_20mm_Tail_SoundSet"};
            };
        };
    };
};

class cfgVehicles
{
    class StaticCanon;

    class StaticMGWeapon;

    class StaticWeapon;

    class StaticCannon: StaticWeapon
    {
        class NewTurret;
    };

    class vn_static_m2_high_base: StaticMGWeapon
    {
        class Turrets;
    };
    class vn_static_m45_base: vn_static_m2_high_base
    {
        class Turrets: Turrets
        {
            class MainTurret;
        };
        class AnimationSources;
    };

    class SPE_StaticCanon_base: StaticCanon
    {
        class Turrets;
    };
    class SPE_M45_Quadmount_base: SPE_StaticCanon_base
    {
        class Turrets: Turrets
        {
            class MainTurret;
        };
        class AnimationSources;
    };

    class vn_static_l60mk3_base: StaticCannon
    {
        class Turrets: NewTurret
        {
            class MainTurret;
        };
        class AnimationSources;
    };

    class SiP_m45_quadmount_night_base: vn_static_m45_base
    {
        scope = 1;
        scopeCurator = 1;
        side = 1;
        author = "Letlev";
        displayName = "M45 Quadmount (Night)";
        editorSubcategory = "SiP_AntiAir_Editor_Subcategory";
        vehicleClass = "SiP_AntiAir_vehicle_class";
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = {"SiP_m2hb_quad_static_weapon"};
            };
        };
        class AnimationSources: AnimationSources
        {
            class mg1_reload
            {
                source = "reload";
                weapon = "SiP_m2hb_quad_static_weapon";
            };
            class mg1_muzzleflash_rot: mg1_reload
            {
                source = "ammorandom";
            };
            class mg1_reloadmagazine: mg1_reload
            {
                source = "reloadmagazine";
            };
            class mg1_revolving: mg1_reload
            {
                source = "revolving";
            };
        };
    };
    class SiP_m45_quadmount_night_USARMY: SiP_m45_quadmount_night_base
    {
        scope = 2;
        scopeCurator = 2;
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        crew = "SiP_US_Army_gunner";
        typicalCargo[] = {"SiP_US_Army_gunner"};
    };
    class SiP_m45_quadmount_night_Marines: SiP_m45_quadmount_night_USARMY
    {
        faction = "SiP_US_Marines";
        editorCategory = "SiP_US_Marines_Editor_Category";
        crew = "SiP_US_Marines_gunner";
        typicalCargo[] = {"SiP_US_Marines_gunner"};
    };


    class SiP_m45_quadmount_base: SPE_M45_Quadmount_base
    {
        scope = 1;
        scopeCurator = 2;
        side = 1;
        author = "Letlev";
        editorSubcategory = "SiP_AntiAir_Editor_Subcategory";
        vehicleClass = "SiP_AntiAir_vehicle_class";
        displayName = "M45 Quadmount";
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = {"SiP_m2hb_quad_static_weapon_SPE"};
                magazines[] = {"vn_m2_v_800_mag","vn_m2_v_800_mag","vn_m2_v_800_mag","vn_m2_v_800_mag","vn_m2_v_800_mag"};
            };
        };
        class AnimationSources: AnimationSources
        {
            class muzzle_rot_cannon
            {
                source = "ammorandom";
                weapon = "SiP_m2hb_quad_static_weapon";
            };
            class reloadMagazine
            {
                source = "reloadMagazine";
                weapon = "SiP_m2hb_quad_static_weapon";
            };
        };
    };
    class SiP_m45_quadmount_USARMY: SiP_m45_quadmount_base
    {
        scope = 2;
        scopeCurator = 2;
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        crew = "SiP_US_Army_gunner";
        typicalCargo[] = {"SiP_US_Army_gunner"};
    };
    class SiP_m45_quadmount_Marines: SiP_m45_quadmount_USARMY
    {
        faction = "SiP_US_Marines";
        editorCategory = "SiP_US_Marines_Editor_Category";
        crew = "SiP_US_Marines_gunner";
        typicalCargo[] = {"SiP_US_Marines_gunner"};
    };
    
    class SiP_bofors_USARMY: vn_static_l60mk3_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Bofors 40mm L/60";
        side = 1;
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        editorSubcategory = "SiP_AntiAir_Editor_Subcategory";
        vehicleClass = "SiP_AntiAir_vehicle_class";
        crew = "SiP_US_Army_gunner";
        typicalCargo[] = {"SiP_US_Army_gunner"};
        editorPreview = "\vn\editorpreviews_f_vietnam\static\preview_vn_b_navy_static_l60mk3.jpg";
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = {"SiP_bofors_40mm_weapon"};
            };
        };
        class AnimationSources: AnimationSources
        {
            class mg1_reload
            {
                weapon = "SiP_bofors_40mm_weapon";
                source = "reload";
            };
        };
    };
    class SiP_bofors_Marines: SiP_bofors_USARMY
    {
        faction = "SiP_US_Marines";
        editorCategory = "SiP_US_Marines_Editor_Category";
        crew = "SiP_US_Marines_gunner";
        typicalCargo[] = {"SiP_US_Marines_gunner"};
    };
    class SiP_bofors_UK: SiP_bofors_USARMY
    {
        faction = "SiP_BCFK";
        editorCategory = "SiP_BCFK_Editor_Category";
        crew = "SiP_BCFK_gunner";
        typicalCargo[] = {"SiP_BCFK_gunner"};
    };
};