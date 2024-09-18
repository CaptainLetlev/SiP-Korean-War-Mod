class cfgPatches
{
    class SiP_Patch_m2hb_static
    {
        addonRootClass = "SiP_Patch_un_statics";
        requiredAddons[] = 
        {
            "static_f_vietnam",
            "static_f_vietnam_c",
            "weapons_v_f_vietnam",
            "WW2_SPE_Assets_c_Vehicles_StaticWeapons_U1_c"
        };
        units[] = 
        {
            "SiP_m2hb_high_base",
            "SiP_m2hb_low_base",

            "SiP_m2hb_high",
            "SiP_m2hb_low",

            "SiP_m2hb_high_marines",
            "SiP_m2hb_low_marines"
        };
        weapons[] = 
        {
            "SiP_m2hb_static_weapon"
        };
        magazines[] = 
        {
            "SiP_m2_v_100_mag",
            "ace_compat_sip_m2hb_100"
        };
    };
};

class CfgSoundShaders
{
    class SiP_M2_close_distance_shot_soundshader
    {
        samples[] = {{"\SiP\UN_Vehicles\static\m2\M2HB_shot.wss",1}};
        volume = "5*(1-interior)";
        range = 150;
        rangecurve[] = {{0,0.2},{50,1},{100,0}};
    };
    class SiP_M2_closeShot_SoundShader
    {
        samples[] = {{"\SiP\UN_Vehicles\static\m2\M2HB_shot.wss",1}};
        volume = 5;
        range = 50;
        rangecurve = "vn_weapon_close_volumecurve";
    };
};

class cfgsoundsets
{
    class vn_m2_shot_soundset;

    class SiP_m2_shot_soundset: vn_m2_shot_soundset
    {
        soundshaders[] = {"vn_chainbox_big_soundshader","vn_regular_mg_shells_soundshader","vn_m2_closure_soundshader","vn_m2_interior_shot_soundshader","vn_m2_interior_distance_shot_soundshader","SiP_M2_closeShot_SoundShader","SiP_M2_close_distance_shot_soundshader","vn_m2_medium_distance_shot_soundshader","vn_m2_far_distance_shot_soundshader"};
    };
};

class cfgWeapons
{
    class vn_hmg_v;
    class vn_m2_v_01: vn_hmg_v
    {
        class FullAuto;
        class AImode1;
        class AImode2;
        class AImode3;
        class AImode4;
    };

    class SiP_m2hb_static_weapon: vn_m2_v_01
    {
        magazines[] = {"SiP_m2_v_100_mag"};
        class FullAuto: FullAuto
        {
            recoil = "recoil_auto_machinegun_5outof10";
            recoilProne = "recoil_auto_machinegun_prone_3outof10";
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundsetshot[] = {"SiP_m2_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
        class AImode1: AImode1
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundsetshot[] = {"SiP_m2_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
        class AImode2: AImode2
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundsetshot[] = {"SiP_m2_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
        class AImode3: AImode3
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundsetshot[] = {"SiP_m2_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
        class AImode4: AImode4
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundsetshot[] = {"SiP_m2_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
    };
    class SiP_m2hb_static_weapon_m3: SiP_m2hb_static_weapon
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

class cfgMagazines
{
    class vn_m2_v_100_mag;

    class SiP_m2_v_100_mag: vn_m2_v_100_mag
    {
        author = "Letlev";
        displayName = "100Rnd Belt .50";
        mass = 20;
    };
    class ace_compat_sip_m2hb_100: SiP_m2_v_100_mag
    {
        scope = 2;
        scopeArsenal = 2;
        type = 256;
        count = 250;
        model = "\A3\Structures_F_EPB\Items\Military\Ammobox_rounds_F.p3d";
        picture = "\WW2\Assets_t\Weapons\Equipment_t\Magazines\MachineGun_Light\M_M1919_ca.paa";
        ACE_isBelt = 1;
    };
};

class ACE_CSW_Groups
{
    class ace_compat_sip_m2hb_100
    {
        SiP_m2_v_100_mag = 1;
    };
};

class cfgVehicles
{
    class StaticWeapon;
    class StaticMGWeapon: StaticWeapon
    {
        class Turrets;
        class ACE_Actions;
    };

    class SPE_StaticMGWeapon_base: StaticMGWeapon
    {
        class Turrets;
        class ACE_Actions;
    };

    class SPE_M2_M3: SPE_StaticMGWeapon_base
    {
        class Turrets: Turrets
        {
            class MainTurret;
        };
        class AnimationSources;
        class ACE_Actions: ACE_Actions
        {
            class ACE_MainActions;
        };
        class ACE_CSW;
        class assembleInfo;
    };
    class SPE_M2_M3_Trench: SPE_M2_M3{};

    class vn_static_m2_high_base: StaticMGWeapon
    {
        class Turrets: Turrets
        {
            class MainTurret;
        };
        class AnimationSources;
        class ACE_Actions: ACE_Actions
        {
            class ACE_MainActions;
        };
        class ACE_CSW;
        class assembleInfo;
    };

    class SiP_m2hb_high_base: vn_static_m2_high_base
    {
        scope = 1;
        scopeCurator = 1;
        author = "Letlev";
        displayName = "M2HB - Tripod";
        side = 1;
        editorSubcategory = "SiP_Machineguns_Editor_Subcategory";
        vehicleClass = "SiP_Machineguns_vehicle_class";
        hiddenSelectionsTextures[] = {"\SiP\UN_Vehicles\static\m2\data\m2_gun_co.paa","vn\static_f_vietnam\m2\data\vn_static_m2_high_02_co.paa"};
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = {"SiP_m2hb_static_weapon"};
                magazines[] = {"SiP_m2_v_100_mag","SiP_m2_v_100_mag","SiP_m2_v_100_mag","SiP_m2_v_100_mag","SiP_m2_v_100_mag","SiP_m2_v_100_mag"};
            };
        };
        class AnimationSources: AnimationSources
        {
            class mg1_reload
            {
                source = "reload";
                weapon = "SiP_m2hb_static_weapon";
            };
            class mg1_reloadmagazine: mg1_reload
            {
                source = "reloadmagazine";
            };
            class mg1_revolving: mg1_reload
            {
                source = "revolving";
            };
            class mg1_muzzleflash_rot: mg1_reload
            {
                source = "ammorandom";
            };
        };
        class ACE_Actions: ACE_Actions
        {
            class ACE_MainActions: ACE_MainActions
            {
                position = "";
                selection = "mg1_otochlaven_recoil";
            };
        };
        class ACE_CSW: ACE_CSW
        {
            enabled = 1;
            proxyWeapon = "SiP_m2hb_static_weapon";
            magazineLocation = "_target selectionPosition 'mg1_magazine' vectorAdd [-0.3, 0, 0]";
            disassembleWeapon = "";
            disassembleTurret = "";
            ammoLoadTime = 1;
            ammoUnloadTime = 1;
            desiredAmmo = 100;
        };
    };

    class SiP_m2hb_low_base: SPE_M2_M3
    {
        scope = 1;
        scopeCurator = 1;
        author = "Letlev";
        side = 1;
        displayName = "M2 - Low";
        editorSubcategory = "SiP_Machineguns_Editor_Subcategory";
        vehicleClass = "SiP_Machineguns_vehicle_class";
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = {"SiP_m2hb_static_weapon_m3"};
                magazines[] = {"SiP_m2_v_100_mag","SiP_m2_v_100_mag","SiP_m2_v_100_mag","SiP_m2_v_100_mag","SiP_m2_v_100_mag","SiP_m2_v_100_mag"};
            };
        };
        class AnimationSources: AnimationSources
        {
            class m2_reloadanim
            {
                source="reload";
                weapon="SiP_m2hb_static_weapon_m3";
            };
            class m2_reloadmagazine
            {
                source="reloadmagazine";
                weapon="SiP_m2hb_static_weapon_m3";
            };
            class m2_revolving
            {
                source="revolving";
                weapon="SiP_m2hb_static_weapon_m3";
                sourceAddress="mirror";
            };
            class m2_ammorandom
            {
                source="ammorandom";
                weapon="SiP_m2hb_static_weapon_m3";
            };
            class m2_ammo
            {
                source="ammo";
                weapon="SiP_m2hb_static_weapon_m3";
            };
        };
        class ACE_Actions: ACE_Actions
        {
            class ACE_MainActions: ACE_MainActions
            {
                position = "";
                selection = "osaveze";
            };
        };
        class ACE_CSW: ACE_CSW
        {
            enabled = 1;
            proxyWeapon = "SiP_m2hb_static_weapon";
            magazineLocation = "_target selectionPosition 'bullet001_rot_axis'";
            disassembleWeapon = "";
            disassembleTurret = "";
            ammoLoadTime = 1;
            ammoUnloadTime = 1;
            desiredAmmo = 250;
        };
    };
    class SiP_m2hb_tripod_base: SPE_M2_M3_Trench
    {
        author = "Letlev";
        side = 1;
        displayName = "M2 - Tripod";
        editorSubcategory = "SiP_Machineguns_Editor_Subcategory";
        vehicleClass = "SiP_Machineguns_vehicle_class";
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = {"SiP_m2hb_static_weapon_m3"};
                magazines[] = {"SiP_m2_v_100_mag","SiP_m2_v_100_mag","SiP_m2_v_100_mag","SiP_m2_v_100_mag","SiP_m2_v_100_mag","SiP_m2_v_100_mag"};
            };
        };
        class AnimationSources: AnimationSources
        {
            class m2_reloadanim
            {
                source="reload";
                weapon="SiP_m2hb_static_weapon_m3";
            };
            class m2_reloadmagazine
            {
                source="reloadmagazine";
                weapon="SiP_m2hb_static_weapon_m3";
            };
            class m2_revolving
            {
                source="revolving";
                weapon="SiP_m2hb_static_weapon_m3";
                sourceAddress="mirror";
            };
            class m2_ammorandom
            {
                source="ammorandom";
                weapon="SiP_m2hb_static_weapon_m3";
            };
            class m2_ammo
            {
                source="ammo";
                weapon="SiP_m2hb_static_weapon_m3";
            };
        };
        class ACE_Actions: ACE_Actions
        {
            class ACE_MainActions: ACE_MainActions
            {
                position = "";
                selection = "osaveze";
            };
        };
        class ACE_CSW: ACE_CSW
        {
            enabled = 1;
            proxyWeapon = "SiP_m2hb_static_weapon";
            magazineLocation = "_target selectionPosition 'bullet001_rot_axis'";
            disassembleWeapon = "";
            disassembleTurret = "";
            ammoLoadTime = 1;
            ammoUnloadTime = 1;
            desiredAmmo = 250;
        };
    };

    class SiP_m2hb_high: SiP_m2hb_high_base
    {
        scope = 2;
        scopeCurator = 2;
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        crew = "SiP_US_Army_gunner";
        typicalCargo[] = {"SiP_US_Army_gunner"};
    };
    class SiP_m2hb_low: SiP_m2hb_low_base
    {
        scope = 2;
        scopeCurator = 2;
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        crew = "SiP_US_Army_gunner";
        typicalCargo[] = {"SiP_US_Army_gunner"};
    };
    class SiP_m2hb_tripod: SiP_m2hb_tripod_base
    {
        scope = 2;
        scopeCurator = 2;
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        crew = "SiP_US_Army_gunner";
        typicalCargo[] = {"SiP_US_Army_gunner"};
    };
    
    class SiP_m2hb_high_marines: SiP_m2hb_high
    {
        faction = "SiP_US_Marines";
        editorCategory = "SiP_US_Marines_Editor_Category";
        crew = "SiP_US_Marines_gunner";
        typicalCargo[] = {"SiP_US_Marines_gunner"};
    };
    class SiP_m2hb_low_marines: SiP_m2hb_low
    {
        faction = "SiP_US_Marines";
        editorCategory = "SiP_US_Marines_Editor_Category";
        crew = "SiP_US_Marines_gunner";
        typicalCargo[] = {"SiP_US_Marines_gunner"};
    };
    class SiP_m2hb_tripod_marines: SiP_m2hb_tripod
    {
        faction = "SiP_US_Marines";
        editorCategory = "SiP_US_Marines_Editor_Category";
        crew = "SiP_US_Marines_gunner";
        typicalCargo[] = {"SiP_US_Marines_gunner"};
    };
};