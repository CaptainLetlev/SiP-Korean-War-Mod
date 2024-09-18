class cfgPatches
{
    class SiP_Patch_M20_Bazooka
    {
        addonRootClass = "SiP_Patch_un_weapons";
        requiredAddons[] = 
        {
            "weapons_f_vietnam",
            "weapons_f_vietnam_c",
            "weapons_f_vietnam_02",
            "weapons_f_vietnam_02_c",
            "weapons_f_vietnam_03",
            "weapons_f_vietnam_03_c",
            "weapons_f_vietnam_04",
            "weapons_f_vietnam_04_c",
            "sounds_f_vietnam_c",
            "sounds_f_vietnam_02_c",
            "sounds_f_vietnam_03_c",
            "sounds_f_vietnam_04_c",
            "WW2_Assets_c_Weapons_InfantryWeapons_c",
            "vn_weapons"
        };
        units[] = {};
        weapons[] = {};
        magazines[] = {};
        ammo[] = {};
    };
};

class Mode_SemiAuto;

class cfgWeapons
{
    class vn_Launcher_Base_F;

    class vn_m20a1b1_01: vn_Launcher_Base_F
    {
        displayName = "M20A1B1 Super Bazooka";
        picture = "\SiP\UN_Weapons\Bazooka\data\textures\UI\m20_superbazooka_ui_ca.paa";
        ace_reloadlaunchers_enabled = 1;
        class Single: Mode_SemiAuto
		{
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"SPE_bazooka_Shot_SoundSet","vn_launcher_rocket_tails_soundset"};
            };
        };
    };
};

class cfgMagazines
{
    class CA_LauncherMagazine;
    class vn_lmagazine;

    class vn_m20a1b1_heat_mag: vn_lmagazine
	{
        displayName = "M28A2 HEAT Rocket";
        mass = 20;
    };
    class vn_m20a1b1_wp_mag: vn_m20a1b1_heat_mag
	{
        displayName = "M30 WP Rocket";
        mass = 20;
    };
    class SPE_1Rnd_60mm_M6A3: CA_LauncherMagazine
	{
        mass = 15;
    };
};