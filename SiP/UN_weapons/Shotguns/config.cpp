class cfgPatches
{
    class SiP_Patch_Shotguns
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
            "sounds_f_vietnam_c",
            "sounds_f_vietnam_02_c",
            "sounds_f_vietnam_03_c",
            "sounds_f_vietnam_04_c",
            "vn_weapons",
            "fow_weapons",
            "fow_weapons_c"
        };
        units[] = {};
        weapons[] = 
        {
            "SiP_m1912_shotgun"
        };
    };
};

class Mode_SemiAuto;

class PointerSlot;
class MuzzleSlot;

class cfgWeapons
{
    class Pistol_Base_F;
    class vn_melee_base: Pistol_Base_F{};
    class vn_hand_melee_base: vn_melee_base{};

    class vn_rifle;
    class SPE_Shotgun;

    class vn_shotgun: vn_rifle
	{
        class FullAuto;
    };

    class vn_m1897: vn_shotgun
    {
        author = "Letlev";
        displayName = "Winchester M1897 Trenchgun";
        magazineWell[] = {};
        class fullauto: fullauto
		{
            sounds[] = {"standardsound"};
            class basesoundmodetype;
            class standardsound: basesoundmodetype
            {
                soundsetshot[] = {"WBK_M30_Rifle_SoundSet","vn_shotgun_tails_soundset","vn_pumpgun_trigger_reset_soundset"};
            };
        };
        class WeaponSlotsInfo;
    };
    
    class SiP_m1912_shotgun: vn_m1897
    {
        author = "Letlev";
        displayName = "Winchester M1912 Shotgun";
        model = "\fow\fow_weapons\m1912\M1912";
        handAnim[] = {"OFP2_ManSkeleton","\fow\fow_anims\weapons\w_m12.rtm"};
        magazines[] = {"vn_m1897_fl_mag","vn_m1897_buck_mag"};
        magazineWell[] = {};
        muzzles[] = {"this","vn_melee_muzzle"};
        weaponInfoType = "vn_melee_zeroing_overwrite";
        class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot: PointerSlot
			{
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"vn_b_m1897"};
			};
		};
    };

    class SPE_Model_37_Trenchgun: SPE_Shotgun
	{
        displayName = "Ithaca Model 37 Trenchgun";
        recoil = "vn_recoil_shotgun_m1897";
        recoilProne = "vn_recoil_shotgun_m1897";
        class Single: Mode_SemiAuto
		{
            sounds[] = {"standardsound"};
            class basesoundmodetype;
            class standardsound: basesoundmodetype
            {
                soundsetshot[] = 
                {
                    "SPE_m37_Shot_SoundSet",
					"vn_shotgun_tails_soundset",
					"SPE_m37_stereoLayer_SoundSet",
                    "vn_pumpgun_trigger_reset_soundset"
                };
            };
        };
    };
    class SPE_Model_37_Riotgun: SPE_Model_37_Trenchgun
	{
        displayName = "Ithaca Model 37 Shotgun";
    };
};

class CfgSoundShaders
{
    class SiP_m1897_close_shot_soundshader
    {
        samples[] = {{"\SiP\UN_Weapons\Shotguns\data\sounds\trenchgun_shot.wss",1}};
        volume = "5.5*(1-interior)";
        range = 50;
        rangecurve[] = {{0,1.0},{4,0.75},{10,0},{30,0}};
    };
    class SiP_m1897_close_distance_shot_soundshader
    {
        samples[] = {{"\SiP\UN_Weapons\Shotguns\data\sounds\trenchgun_shot.wss",1}};
        volume = "5*(1-interior)";
        range = 100;
        rangecurve[] = {{0,0},{10,1},{100,0}};
    };
};