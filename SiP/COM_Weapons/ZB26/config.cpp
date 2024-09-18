class cfgPatches
{
    class SiP_Patch_zb26
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
            "vn_weapons",
            "EAW_WeaponConfig"
        };
        units[] = {};
        weapons[] = 
        {
            "SiP_ZB26"
        };
        magazines[] = 
        {
            "SiP_ZB26_20_mag",
            "SiP_ZB26_20_t_mag"
        };
    };
};

class cfgWeapons
{
    class Rifle_Base_F;
    class EAW_ZB26_Base: Rifle_Base_F
    {
        class FullAuto;
    };
    
    class SiP_ZB26: EAW_ZB26_Base
    {
        author = "Letlev";
        baseWeapon = "SiP_ZB26";
        displayName = "ZB26 Machinegun";
        SPE_HipFire_Only = 1;
        magazines[] = {"SiP_ZB26_20_mag","SiP_ZB26_20_t_mag"};
        modes[] = {"FullAuto","aicqb","aiclose","aimedium","aifar"};
        class FullAuto: FullAuto
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundsetshot[] = {"jsrs_zafir_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
            reloadTime = 0.096;
            soundBurst = 0;
            aiRateOfFire = 1e-06;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.05;
            midRange = 25;
            midRangeProbab = 0.7;
            maxRange = 50;
            maxRangeProbab = 0.04;
            dispersion = 0.002;
            showToPlayer = 1;
        };
        class aicqb: FullAuto
        {
            burst = 8;
            showToPlayer = 0;
            dispersion = 0.01;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 50;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-06;
            aiRateOfFireDistance = 50;
        };
        class aiclose: aicqb
        {
            burst = 6;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 150;
            dispersion = 0.007;
            minRange = 100;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 1;
            maxRange = 250;
            maxRangeProbably = 0.5;
        };
        class aimedium: aicqb
        {
            burst = 4;
            dispersion = 0.0047;
            minRange = 150;
            minRangeProbab = 0.5;
            midRange = 250;
            midRangeProbab = 1;
            maxRange = 350;
            maxRangeProbab = 0.1;
            aiRateOfFire = 3;
            aiRateOfFireDistance = 250;
            requiredOpticType = 0;
        };
        class aifar: aicqb
        {
            burst = 3;
            dispersion = 0.0025;
            minRange = 300;
            minRangeProbab = 0.5;
            midRange = 500;
            midRangeProbab = 1;
            maxRange = 800;
            maxRangeProbab = 0.5;
            aiRateOfFire = 5;
            aiRateOfFireDistance = 500;
            requiredOpticType = 0;
        };
    };
};

class cfgMagazines
{
    class EAW_ZB26_Magazine;

    class SiP_ZB26_20_mag: EAW_ZB26_Magazine
    {
        author = "Letlev";
        displayName = "20Rnd. ZB26 Magazine";
        ammo = "vn_792x57";
    };
    class SiP_ZB26_20_t_mag: SiP_ZB26_20_mag
    {
        displayName = "20Rnd. ZB26 Magazine (Tracer)";
        tracersEvery = 1;
        lastRoundsTracer = 10;
    };
};
