
class cfgPatches
{
    class SiP_Patch_fn49
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
            "sp_fwa_mas",
            "vn_weapons"
        };
        units[] = {};
        weapons[] = 
        {
            "SiP_fn49"
        };
        magazines[] = 
        {
            "SiP_fn49_10_mag",
            "SiP_fn49_10_t_mag"
        };
    };
};

class PointerSlot;

class cfgWeapons
{
    class Pistol_Base_F;
    class vn_melee_base: Pistol_Base_F{};
    class vn_hand_melee_base: vn_melee_base{};

    class sp_fwa_fn49_base;
    class sp_fwa_fn49: sp_fwa_fn49_base
    {
        class Single;
        class WeaponSlotsInfo;
    };
    
    class SiP_fn49: sp_fwa_fn49
    {
        scope = 2;
        author = "Letlev";
        displayName = "FN-49";
        baseWeapon = "SiP_fn49";
        magazines[] = {"SiP_fn49_10_mag","SiP_fn49_10_t_mag"};
        magazineWell[] = {};
        reloadAction = "vn_m4956_reloadmagazine";
        vn_melee_bayonet_startpos[] = {-0.03,0.3,-0.02};
        muzzles[] = {"this","vn_melee_muzzle"};
        weaponInfoType = "vn_melee_zeroing_overwrite";
        class vn_melee_muzzle: vn_melee_base{};
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 100;
            class MuzzleSlot{};
            class CowsSlot{};
            class PointerSlot: PointerSlot
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                compatibleItems[] = {"vn_b_m4956"};
                iconPosition[] = {0.35,0.5};
                iconScale = 0.25;
            };
            class UnderBarrelSlot{};
        };
        modes[] = {"Single","AICQB","AIClose","AIMedium","AIFar"};
        class Single: Single
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"jsrs_svt40_shot_soundset","vn_762x39mm_rifle_tails_soundset","vn_sks_rifle_trigger_reset_soundset"};
            };
            reloadTime = 0.1;
            dispersion = 0.0012;
            aiDispersionCoefY = 1.7;
            aiDispersionCoefX = 1.6;
        };
        class aicqb: Single
        {
            showToPlayer = 0;
            dispersion = 0.022;
            minRange = 0;
            minRangeProbab = 1;
            midRange = 50;
            midRangeProbab = 1;
            maxRange = 100;
            maxRangeProbab = 0.5;
            burst = 1;
            burstRangeMax = -1;
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
    class sp_fwa_10rnd_3006_fn49;

    class SiP_fn49_10_mag: sp_fwa_10rnd_3006_fn49
    {
        author = "Letlev";
        displayName = "10Rnd FN-49 Magazine";
        displayNameShort = "10Rnd .30-06";
        modelSpecial = "sp_fwa_fn49\sp_fwa_fn49_10";
        picture = "\sp_fwa_fn49\icons\fn_49_10mag_icon_ca.paa";
        modelSpecialIsProxy = 1;
        ammo = "vn_762x63";
        mass = 2.5;
        weight = 0;
    };
    class SiP_fn49_10_t_mag: SiP_fn49_10_mag
    {
        displayName = "10Rnd. MAS49 Magazine (Tracer)";
        tracersEvery = 1;
        lastRoundsTracer = 10;
    };
};