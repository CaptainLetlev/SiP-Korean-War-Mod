class cfgPatches
{
    class SiP_Patch_dp28
    {
        addonRootClass = "SiP_Patch_Communist_weapons";
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
            "vn_weapons"
        };
        units[] = {};
        weapons[] = {};
    };
};

class cfgWeapons
{
    class vn_rifle;
    class vn_lmg: vn_rifle
	{
        class FullAuto;
    };
    
    class vn_dp28: vn_lmg
    {
        displayName = "DP-28";
        SPE_HipFire_Only = 1;
        class FullAuto: FullAuto
		{
            reloadTime = 0.109;
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"NORTH_DP27_Shot_soundSet","vn_762x39mm_lmg_tails_soundset"};
            };
        };
        class aicqb: FullAuto
        {
            aiRateOfFire = 1e-06;
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"NORTH_DP27_Shot_soundSet","vn_762x39mm_lmg_tails_soundset"};
            };
        };
        class aiclose: aicqb
        {
            aiRateOfFire = 1e-06;
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"NORTH_DP27_Shot_soundSet","vn_762x39mm_lmg_tails_soundset"};
            };
        };
        class aimedium: aicqb
        {
            aiRateOfFire = 1e-06;
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"NORTH_DP27_Shot_soundSet","vn_762x39mm_lmg_tails_soundset"};
            };
        };
        class aifar: aicqb
        {
            aiRateOfFire = 1e-06;
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"NORTH_DP27_Shot_soundSet","vn_762x39mm_lmg_tails_soundset"};
            };
        };
    };
};