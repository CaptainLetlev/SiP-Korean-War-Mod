class cfgPatches
{
    class SiP_Patch_svt40
    {
        addonRootClass = "SiP_Patch_Communist_weapons";
        requiredAddons[] =
        {
            "weapons_f_vietnam","weapons_f_vietnam_c",
            "weapons_f_vietnam_02",
            "weapons_f_vietnam_02_c",
            "weapons_f_vietnam_03",
            "weapons_f_vietnam_03_c",
            "vn_weapons",
            "NORTH_weapons",
            "NORTH_weapons_cfg"
        };
        units[] = {};
        weapons[] = 
        {
            "SiP_svt40"
        };
        magazines[] = 
        {
            "SiP_svt_10_mag",
            "SiP_svt_10_t_mag"
        };
    };
};

class CfgSoundShaders
{
    class SiP_SVT40_closeShot_soundShader
    {
        samples[] = 
        {
            {"\SiP\Addons\sip_pva_weapons\SVT40\data\sounds\svt_shot_close.wss",1}
        };
        volume = "(1-interior)";
        range = 50;
        rangeCurve[] = {{0,1.52},{50,0}};
        limitation = 0;
    };
    class SiP_SVT40_midShot_soundShader
    {
        samples[] = 
        {
            {"\SiP\Addons\sip_pva_weapons\SVT40\data\sounds\svt_shot_mid.wss",1}
        };
        volume = "(1-interior)";
        range = 150;
        rangeCurve[] = {{0,0},{25,1.2},{150,0}};
        limitation = 0;
    };
    class SiP_SVT40_farShot_soundShader
    {
        samples[] = 
        {
            {"\SiP\Addons\sip_pva_weapons\SVT40\data\sounds\svt_shot_far.wss",1}
        };
        volume = "(1-interior)";
        range = 3000;
        rangeCurve[] = {{0,0},{70,0},{150,1.2},{2700,0.6}};
        limitation = 0;
    };
};

class CfgSoundSets
{
    class SiP_SVT40_Shot_soundSet
    {
        soundShaders[] = 
        {
            "SiP_SVT40_closeShot_soundShader",
            "SiP_SVT40_midShot_soundShader",
            "SiP_SVT40_farShot_soundShader"
        };
        volumeFactor = 1;
        volumeCurve = "InverseSquare1Curve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        spatial = 1;
        doppler = 0;
        loop = 0;
        frequencyFactor = 1.06;
        frequencyRandomizer = 0.8;
        frequencyRandomizerMin = 0.4;
        distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
        soundShadersLimit = 7;
        obstructionFactor = 0.24;
        occlusionFactor = 0.18;
    };
};

class cfgWeapons
{
    class Pistol_Base_F;
    class vn_melee_base: Pistol_Base_F{};
    class vn_hand_melee_base: vn_melee_base{};

    class NORTH_SVT38;
    class NORTH_SVT40: NORTH_SVT38
    {
        class single;
    };

    class SiP_svt40: NORTH_SVT40
    {
        author = "Letlev";
        displayName = "SVT-40";
        muzzles[] = {"this","vn_melee_muzzle"};
        weaponInfoType = "vn_melee_zeroing_overwrite";
        class vn_melee_muzzle: vn_melee_base{};
        modes[] = {"Single","AICQB","AIClose","AIMedium","AIFar"};
        magazines[] = {"vn_m38_mag","vn_m38_t_mag","SiP_svt_10_mag","SiP_svt_10_t_mag"};
        class Single: single
        {
            reloadTime = 0.1;
            dispersion = 0.0008;
            aiDispersionCoefY = 1.7;
            aiDispersionCoefX = 1.4;
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"SiP_SVT40_Shot_soundSet","vn_762x39mm_rifle_tails_soundset","vn_sks_rifle_trigger_reset_soundset"};
            };
        };
        class aicqb: Single
        {
            burst = 1;
            burstRangeMax = -1;
            dispersion = 0.01;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
        };
        class aiclose: aicqb
        {
            burst = 1;
            burstRangeMax = -1;
            minRange = 0;
            minRangeProbab = 1;
            midRange = 50;
            midRangeProbab = 1;
            maxRange = 100;
            maxRangeProbab = 0.5;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
        };
        class aimedium: aicqb
        {
            burst = 1;
            burstRangeMax = -1;
            dispersion = 0.01;
            minRange = 100;
            minRangeProbab = 0.05;
            midRange = 200;
            midRangeProbab = 0.5;
            maxRange = 300;
            maxRangeProbab = 0.04;
            aiRateOfFire = 5;
            aiRateOfFireDistance = 300;
        };
        class aifar: aicqb
        {
            burst = 1;
            burstRangeMax = -1;
            dispersion = 0.01;
            minRange = 300;
            minRangeProbab = 0.05;
            midRange = 400;
            midRangeProbab = 0.5;
            maxRange = 500;
            maxRangeProbab = 0.04;
            aiRateOfFire = 10;
            aiRateOfFireDistance = 500;
        };
    };
};

class cfgMagazines
{
    class NORTH_10rnd_SVT_mag;

    class SiP_svt_10_mag: NORTH_10rnd_SVT_mag
    {
        author = "Letlev";
        displayName = "10Rnd. SVT40 Mag";
        ammo = "vn_762x54";
    };
    class SiP_svt_10_t_mag: SiP_svt_10_mag
    {
        author = "Letlev";
        displayName = "10Rnd. SVT40 Mag (Tracer)";
        ammo = "vn_762x54";
        tracersEvery = 1;
        lastRoundsTracer = 10;
    };
};
