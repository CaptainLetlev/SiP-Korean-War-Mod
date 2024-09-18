class cfgPatches
{
    class SiP_Patch_vickers_static
    {
        addonRootClass = "SiP_Patch_un_statics";
        requiredAddons[] = {"fow_statics_c","fow_veh_weapons_c"};
        units[] = 
        {
            "SiP_vickers_uk"
        };
        weapons[] = 
        {
            "SiP_vickers_static_weapon"
        };
        magazines[] = 
        {
            "SiP_250Rnd_vickers",
            "ace_compat_sip_vickers_250"
        };
    };
};

class Mode_FullAuto;

class cfgWeapons
{
    class vn_m1919_v_int;
    class vn_m1919_v_01: vn_m1919_v_int
    {
        class FullAuto;
        class AImode1;
        class AImode2;
        class AImode3;
        class AImode4;
        class AImode5;
        class AImode6;
    };
    class SiP_vickers_static_weapon: vn_m1919_v_01
    {
        displayname = "Vickers .303";
        magazineReloadTime = 3.6;
        magazines[] = {"SiP_250Rnd_vickers"};
        class FullAuto: FullAuto
        {
            reloadTime = 0.12;
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"vn_m1919_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
        class AImode1: AImode1
        {
            reloadTime = 0.12;
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"vn_m1919_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
        class AImode2: AImode2
        {
            reloadTime = 0.12;
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"vn_m1919_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
        class AImode3: AImode3
        {
            reloadTime = 0.12;
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"vn_m1919_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
        class AImode4: AImode4
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"vn_m1919_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
            reloadTime = 0.12;
        };
        class AImode5: AImode5
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"vn_m1919_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
            reloadTime = 0.12;
        };
        class AImode6: AImode6
        {
            reloadTime = 0.12;
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"vn_m1919_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
        class GunParticles
        {
            class Effect
            {
                effectName = "RifleAssaultCloud";
                positionName = "Usti hlavne";
                directionName = "Konec hlavne";
            };
        };
    };
};

class cfgMagazines
{
    class vn_m1919_v_250_mag;
    class SiP_250Rnd_vickers: vn_m1919_v_250_mag
    {
        author = "Letlev";
        displayName = "250Rnd Belt .303";
        mass = 15;
        ammo = "vn_77x56";
    };
    class ace_compat_sip_vickers_250: SiP_250Rnd_vickers
    {
        scope = 2;
        scopeArsenal = 2;
        type = 256;
        count = 250;
        model = "\WW2\Assets_m\Weapons\WeaponsMagazines_m\WW2_M1919_Mag.p3d";
        picture = "\WW2\Assets_t\Weapons\Equipment_t\Magazines\MachineGun_Light\M_M1919_ca.paa";
        ACE_isBelt = 1;
    };
};

class ACE_CSW_Groups
{
    class ace_compat_sip_vickers_250
    {
        SiP_250Rnd_vickers = 1;
    };
};

class cfgVehicles
{
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
	};

	class StaticMGWeapon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
        class ACE_Actions;
	};

	class fow_w_vickers: StaticMGWeapon
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

	class SiP_vickers_base: fow_w_vickers
	{
		scope = 1;
		author = "Letlev";
        icon = "\NORTH\NF_Static\Maxim\data\ui\Maxim_icomap_CA.paa";
        editorSubcategory = "SiP_Machineguns_Editor_Subcategory";
        vehicleClass = "SiP_Machineguns_vehicle_class";
        class Turrets: Turrets
        {
			class MainTurret: MainTurret
			{
				weapons[] = {"SiP_vickers_static_weapon"};
				magazines[] = {"SiP_250Rnd_vickers","SiP_250Rnd_vickers","SiP_250Rnd_vickers","SiP_250Rnd_vickers","SiP_250Rnd_vickers","SiP_250Rnd_vickers"};
			};
        };
        class AnimationSources: AnimationSources
		{
			class reloadanim
			{
				source = "reload";
				weapon = "SiP_vickers_static_weapon";
			};
			class reloadmagazine
			{
				source = "reloadmagazine";
				weapon = "SiP_vickers_static_weapon";
			};
			class revolving
			{
				source = "revolving";
				weapon = "SiP_vickers_static_weapon";
			};
		};
        class UserActions
        {
            class Turn_left
            {
                displayName = "$STR_DIR_LEFT";
                priority = 4;
                radius = 2.5;
                position = "osaveze";
                showWindow = 0;
                onlyForPlayer = 1;
                shortcut = "";
                condition = "(alive this) && (((isNull gunner this) || (call ww2_fnc_findPlayer) == gunner this)) && (this getVariable ['Enable_Dir',true])";
                statement = "this setDir (getDir this - 45);";
            };
            class Turn_right: Turn_left
            {
                displayName = "$STR_DIR_RIGHT";
                statement = "this setDir (getDir this + 45);";
            };
        };
        class ACE_Actions: ACE_Actions
        {
            class ACE_MainActions: ACE_MainActions
            {
                position = "";
                selection = "feedtray_axis";
            };
        };
        class ACE_CSW: ACE_CSW
        {
            enabled = 1;
            proxyWeapon = "SiP_vickers_static_weapon";
            magazineLocation = "_target selectionPosition 'bullet_copy_beg'";
            disassembleWeapon = "SiP_vickers_carry";
            disassembleTurret = "SiP_vickers_tripod";
            ammoLoadTime = 1;
            ammoUnloadTime = 1;
            desiredAmmo = 250;
        };
        class assembleInfo: assembleInfo
        {
            dissasembleTo[] = {};
        };
    };
    class SiP_vickers_uk: SiP_vickers_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Vickers .303";
        faction = "SiP_BCFK";
        editorCategory = "SiP_BCFK_Editor_Category";
        crew = "SiP_BCFK_gunner";
        typicalCargo[] = {"SiP_BCFK_gunner"};
        side = 1;
    };
};
