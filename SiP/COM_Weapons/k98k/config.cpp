class cfgPatches
{
    class SiP_Patch_k98k
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
            "vn_weapons",
            "NORTH_weapons",
            "NORTH_weapons_cfg",
            "EAW_WeaponConfig"
        };
        units[] = {};
        weapons[] = 
        {
            "SiP_kar98k",
            "SiP_Hanyang88",
            "SiP_Type24_rifle"
        };
        magazines[] = {};
    };
};
class cfgWeapons
{
    class Rifle_Base_F;
    class Pistol_Base_F;
    class vn_melee_base: Pistol_Base_F{};
    class vn_hand_melee_base: vn_melee_base{};
    
    class vn_rifle762;
    
    class vn_k98k: vn_rifle762
	{
        class Single;
        class EventHandlers;
    };

    class EAW_Hanyang88_Base: Rifle_Base_F
    {
        class Single;
    };
    class EAW_Type24_Rifle_Base: EAW_Hanyang88_Base
    {
        class Single;
    };

    class SiP_kar98k: vn_k98k
    {
        author = "Letlev";
        displayName = "Kar98K";
        muzzles[] = {"this","vn_melee_muzzle"};
        weaponInfoType = "vn_melee_zeroing_overwrite";
        class vn_melee_muzzle: vn_melee_base{};
        magazines[] = {"vn_k98k_mag","SiP_k98k_5_t_mag"};
        modes[] = {"Single","AICQB","AIClose","AIMedium","AIFar","AIOpticmode1","AIOpticmode2"};
        class EventHandlers: EventHandlers
		{
			class vn
			{
				fired = "[_this, 'vn_k98k_rechamber', 'vn_k98k_boltingsound',true] spawn vn_fnc_bolt_fired";
			};
		};
        class Single: Single
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"EAW_Hanyang88_SoundSet"};
            };
            reloadTime = 1.6;
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
    };

    class SiP_Hanyang88: EAW_Hanyang88_Base
    {
        author = "Letlev";
        scope = 2;
        baseWeapon = "SiP_Hanyang88";
        displayName = "Hanyang 88";
        muzzles[] = {"this","vn_melee_muzzle"};
        weaponInfoType = "vn_melee_zeroing_overwrite";
        class vn_melee_muzzle: vn_melee_base{};
        magazines[] = {"vn_k98k_mag","vn_k98k_t_mag"};
        modes[] = {"Single","AICQB","AIClose","AIMedium","AIFar","AIOpticmode1","AIOpticmode2"};
        class Single: Single
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"EAW_Hanyang88_SoundSet"};
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
    };

    class SiP_Type24_rifle: EAW_Type24_Rifle_Base
    {
        author = "Letlev";
        scope = 2;
        scopeArsenal = 2;
        baseWeapon = "SiP_Type24_rifle";
        displayName = "Type 24 Rifle";
        muzzles[] = {"this","vn_melee_muzzle"};
        weaponInfoType = "vn_melee_zeroing_overwrite";
        class vn_melee_muzzle: vn_melee_base{};
        magazines[] = {"vn_k98k_mag","vn_k98k_t_mag"};
        modes[] = {"Single","AICQB","AIClose","AIMedium","AIFar","AIOpticmode1","AIOpticmode2"};
        class Single: Single
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"EAW_Hanyang88_SoundSet"};
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
    };
};
