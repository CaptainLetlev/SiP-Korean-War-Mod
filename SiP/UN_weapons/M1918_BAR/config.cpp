class cfgPatches
{
    class SiP_Patch_M1918_BAR
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
            "vn_weapons"
        };
        units[] = {};
        weapons[] = 
        {
            "vn_m1918",
            "vn_m1918_bipod"
        };
    };
};

class Mode_FullAuto;

class cfgWeapons
{
    class vn_lmg;
    
    class vn_m1918: vn_lmg
    {
        displayName = "M1918A2 BAR";
        modes[] = {"FullAutoSlow","FullAuto","AIClose","AIMedium","AIFar"};
        class FullAuto: Mode_FullAuto
        {
            textureType = "fastAuto";
            sounds[] = {"StandardSound"};
            class BaseSoundModeType
            {
                weaponSoundEffect = "";
                closure1[] = {};
                closure2[] = {};
                soundClosure[] = {};
            };
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"SPE_bar_Shot_SoundSet","vn_762x39mm_lmg_tails_soundset","SPE_bar_stereoLayer_SoundSet"};
            };
            reloadTime = 0.1;
            dispersion = 0.00102;
            soundContinuous = 0;
            soundBurst = 0;
            minRange = 0;
            minRangeProbab = 0.3;
            midRange = 5;
            midRangeProbab = 0.7;
            maxRange = 10;
            maxRangeProbab = 0.04;
            showToPlayer = 1;
        };
        class FullAutoSlow: FullAuto
        {
            reloadTime = 0.16;
            textureType = "fullAuto";
            dispersion = 0.002;
            soundBurst = 0;
            ffCount = 1;
            soundContinuous = 0;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-06;
            aiRateOfFireDistance = 50;
            showToPlayer = 1;
        };
        class aiclose: FullAutoSlow
        {
            burst = 10;
            aiRateOfFire = 1e-06;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.05;
            midRange = 70;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.04;

            showToPlayer = 0;
        };
        class aimedium: aiclose
        {
            burst = 10;
            aiRateOfFireDistance = 300;
            minRange = 75;
            minRangeProbab = 0.05;
            midRange = 250;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.04;
        };
        class aifar: aiclose 
        {
            burst = 10;
            aiRateOfFireDistance = 600;
            minRange = 300;
            minRangeProbab = 0.05;
            midRange = 700;
            midRangeProbab = 0.6;
            maxRange = 1000;
            maxRangeProbab = 0.1;
        };
    };
};

class cfgMagazines
{
    class vn_lmgmag_base;

    class vn_m1918_mag: vn_lmgmag_base
	{
        displayName = "20Rnd .30-06 BAR Mag";
        mass = 8;
    };
    class vn_m1918_t_mag: vn_m1918_mag
	{
        displayName = "20Rnd .30-06 BAR Mag (Tracer)";
    };
};