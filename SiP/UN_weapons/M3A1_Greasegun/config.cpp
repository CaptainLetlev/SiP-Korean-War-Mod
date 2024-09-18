class cfgPatches
{
    class SiP_Patch_M3a1_greasegun
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
        weapons[] = {};
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class cfgWeapons
{
    class vn_rifle;
    class vn_smg: vn_rifle
    {
        class WeaponSlotsInfo;
        class Eventhandlers;
    };

    class vn_m3a1: vn_smg
    {
        displayName = "M3A1 Greasegun";
        class Eventhandlers: Eventhandlers
        {
            class SPE_mg42_ROF
            {
                fired = "_this spawn SPE_fnc_mgROF;";
            };
        };
        modes[] = {"FullAuto","aiclose","aimedium","aifar"};
        class FullAuto: Mode_FullAuto
        {
            sounds[] = {"StandardSound","SilencedSound"};
            class StandardSound
            {
                soundSetShot[] = {"SPE_m3_Shot_SoundSet","SPE_rifle_small_ob_Tail_SoundSet","SPE_m3_stereoLayer_SoundSet"};
            };
            class SilencedSound
            {
                soundSetShot[] = {"SPE_sd_subs_m3_Shot_SoundSet","SPE_sd_subsonic_ob_Tail_SoundSet"};
            };
            reloadTime = 0.133;
            dispersion = 0.00102;
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
        class aiclose: FullAuto
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
    class vn_smgmag_base;

    class vn_m3a1_mag: vn_smgmag_base
    {
        displayName = "30Rnd .45 Grease Gun Mag";
        mass = 4.5;
    };
    class vn_m3a1_t_mag: vn_m3a1_mag
    {
        displayName = "30Rnd .45 Grease Gun Mag (Tracer)";
        mass = 4.5;
    };
};