class cfgPatches
{
    class SiP_Patch_arisaka
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
            "SiP_type99",
            "SiP_type38",
            "SiP_type97",
            "SiP_type30"
        };
        magazines[] = 
        {
            "SiP_arisaka_5_mag",
            "SiP_arisaka_5_t_mag"
        };
    };
};

class PointerSlot;
class MuzzleSlot;

class cfgWeapons
{
    class Pistol_Base_F;
    class vn_melee_base: Pistol_Base_F{};
    class vn_hand_melee_base: vn_melee_base{};

    class EAW_Type38_Base;
    class EAW_Type38_NoCover: EAW_Type38_Base
    {
        class Single;
        class WeaponSlotsInfo;
    };
    class EAW_Type99_Short: EAW_Type38_Base
    {
        class Single;
        class WeaponSlotsInfo;
    };

    class SiP_type99: EAW_Type99_Short
    {
        author = "Letlev";
        displayName = "Type 99 Rifle";
        baseWeapon = "SiP_type99";
        class CSA38_BoltAction
		{
			param[] = {"GestureBolt_EAW_Type38",0.75,"Csa38_FxCartridge792x57",0.6,0.065,-0.18,0.1};
			sounds[] = {"EAW_Bolting","EAW_Bolting","EAW_Bolting"};
		};
        muzzles[] = {"this"};
        magazines[] = {"SiP_arisaka_5_mag","SiP_arisaka_5_t_mag"};
        modes[] = {"Single","AICQB","AIClose","AIMedium","AIFar","AIOpticmode1","AIOpticmode2"};
        class Single: Single
        {
            reloadTime = 1;
            dispersion = 0.00035;
            aiDispersionCoefY = 1.7;
            aiDispersionCoefX = 1.4;
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"EAW_Type99_SoundSet"};
            };
        };
        class aicqb: Single
        {
            showToPlayer = 0;
            dispersion = 0.0021;
            minRange = 0;
            minRangeProbab = 1;
            midRange = 50;
            midRangeProbab = 1;
            maxRange = 100;
            maxRangeProbab = 0.5;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 50;
        };
        class aiclose: aicqb
        {
            dispersion = 0.00105;
            minRange = 50;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 1;
            maxRange = 250;
            maxRangeProbably = 0.5;
            aiRateOfFire = 1.5;
            aiRateOfFireDistance = 100;
        };
        class aimedium: aicqb
        {
            dispersion = 0.000525;
            minRange = 250;
            minRangeProbab = 0.5;
            midRange = 350;
            midRangeProbab = 1;
            maxRange = 450;
            maxRangeProbab = 0.1;
            aiRateOfFire = 2.5;
            aiRateOfFireDistance = 250;
            requiredOpticType = 0;
        };
        class aifar: aicqb
        {
            dispersion = 0.00085;
            minRange = 350;
            minRangeProbab = 0.5;
            midRange = 500;
            midRangeProbab = 1;
            maxRange = 600;
            maxRangeProbab = 0.5;
            aiRateOfFire = 3.5;
            aiRateOfFireDistance = 450;
            requiredOpticType = 0;
        };
        class aiopticmode1: aicqb
        {
            dispersion = 0.00085;
            minRange = 400;
            minRangeProbab = 0.5;
            midRange = 600;
            midRangeProbab = 1;
            maxRange = 1000;
            maxRangeProbab = 0.5;
            aiRateOfFire = 4.5;
            aiRateOfFireDistance = 450;
            requiredOpticType = 1;
        };
        class aiopticmode2: aicqb
        {
            dispersion = 0.00085;
            minRange = 600;
            minRangeProbab = 0.5;
            midRange = 1000;
            midRangeProbab = 1;
            maxRange = 1500;
            maxRangeProbab = 0.5;
            aiRateOfFire = 5;
            aiRateOfFireDistance = 550;
            requiredOpticType = 1;
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                compatibleItems[] = {"EAW_Type30_Bayonet_Attach"};
                iconPosition[] = {0.0,0.45};
                iconScale = 0.2;
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
                iconPinpoint = "Center";
            };
        };
    };

    class SiP_type38: EAW_Type38_NoCover
    {
        author = "Letlev";
        displayName = "Type 38 Rifle";
        baseWeapon = "SiP_type38";
        model = "EAW_Chinese_Weapons\EAW_Type38_NoCover.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"EAW_Chinese_Weapons\data\EAW_Type38_Stock2_co.paa"};
        handAnim[] = {"OFP2_ManSkeleton","\EAW_Chinese_Weapons\Anim\EAW_Type38.rtm"};
        reloadAction = "GestureReload_EAW_Type38";
        magazineReloadSwitchPhase = 0.4;
        magazines[] = {"SiP_arisaka_5_mag","SiP_arisaka_5_t_mag"};
        class CSA38_BoltAction
		{
			param[] = {"GestureBolt_EAW_Type38",0.75,"Csa38_FxCartridge792x57",0.6,0.065,-0.18,0.1};
			sounds[] = {"EAW_Bolting","EAW_Bolting","EAW_Bolting"};
		};
        class Single: Single
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"EAW_Type38_SoundSet"};
            };
            reloadTime = 1.35;
            dispersion = 0.00035;
            aiDispersionCoefY = 1.7;
            aiDispersionCoefX = 1.4;
        };
        class aicqb: Single
        {
            showToPlayer = 0;
            dispersion = 0.0021;
            minRange = 0;
            minRangeProbab = 1;
            midRange = 50;
            midRangeProbab = 1;
            maxRange = 100;
            maxRangeProbab = 0.5;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 50;
        };
        class aiclose: aicqb
        {
            dispersion = 0.00105;
            minRange = 50;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 1;
            maxRange = 250;
            maxRangeProbably = 0.5;
            aiRateOfFire = 1.5;
            aiRateOfFireDistance = 100;
        };
        class aimedium: aicqb
        {
            dispersion = 0.000525;
            minRange = 250;
            minRangeProbab = 0.5;
            midRange = 350;
            midRangeProbab = 1;
            maxRange = 450;
            maxRangeProbab = 0.1;
            aiRateOfFire = 2.5;
            aiRateOfFireDistance = 250;
            requiredOpticType = 0;
        };
        class aifar: aicqb
        {
            dispersion = 0.00085;
            minRange = 350;
            minRangeProbab = 0.5;
            midRange = 500;
            midRangeProbab = 1;
            maxRange = 600;
            maxRangeProbab = 0.5;
            aiRateOfFire = 3.5;
            aiRateOfFireDistance = 450;
            requiredOpticType = 0;
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 100;
            class PointerSlot: PointerSlot
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                compatibleItems[] = {};
                iconPosition[] = {0.35,0.5};
                iconScale = 0.25;
            };
            class MuzzleSlot{};
        };
    };

    class SiP_type97: SiP_type38
    {
        displayName = "Type 97 Rifle";
        baseWeapon = "SiP_type97";
        model = "\EAW_Chinese_Weapons\EAW_Type97_Sniper";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"EAW_Chinese_Weapons\data\EAW_Type38_Stock2_co.paa"};
    };

    class SiP_type30: SiP_type38
    {
        baseWeapon = "SiP_type30";
        displayName = "Type 30 Rifle";
        model = "EAW_Chinese_Weapons\EAW_Type30.p3d";
    };
};

class cfgMagazines
{
    class fow_5Rnd_77x58;
    
    class SiP_arisaka_5_mag: fow_5Rnd_77x58
    {
        author = "Letlev";
        displayName = "5Rnd. 7.62x58 Clip";
        ammo = "vn_77x58";
    };
    class SiP_arisaka_5_t_mag: SiP_arisaka_5_mag
    {
        displayName = "5Rnd. 7.62x58 Clip (Tracer)";
        tracersEvery = 1;
        lastRoundsTracer = 10;
    };
};