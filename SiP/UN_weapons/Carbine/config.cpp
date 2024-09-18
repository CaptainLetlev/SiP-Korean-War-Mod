class cfgPatches
{
    class SiP_Patch_Carbine
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
        magazines[] = {};
    };
};

class CfgRecoils
{
    class recoil_default;

    class SiP_recoil_carbine: recoil_default
	{
		muzzleOuter[] = {0.1,0.6,0.2,0.2};
        muzzleInner[] = {0,0,0.1,0.1};
        kickBack[] = {0.01,0.03};
        temporary = 0.01;
		permanent = 0.1;
	};
};

class CowsSlot;
class PointerSlot;

class Mode_FullAuto;

class cfgWeapons
{
    class vn_rifle;

    class vn_rifle762: vn_rifle
	{
        class Single;
        class WeaponSlotsInfo;
    };

    class vn_m1carbine: vn_rifle762
    {
        recoil = "vn_recoil_smg_m1928_tommy";
        recoilProne = "vn_recoil_smg_m1928_tommy";
        class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot{};
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {};
				iconPosition[] = {0.45,0.38};
				iconScale = 0.2;
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[] = {"vn_b_carbine"};
			};
		};
        modes[] = {"Single","AICQB","AIClose","AIMedium","AIFar"};
        class Single: Single
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"SPE_m1car_Shot_SoundSet","SPE_rifle_med_ob_Tail_SoundSet","SPE_m1car_stereoLayer_SoundSet","vn_m45_smg_trigger_reset_soundset"};
            };  
        };
        class aicqb: Single
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"SPE_m1car_Shot_SoundSet","SPE_rifle_med_ob_Tail_SoundSet","SPE_m1car_stereoLayer_SoundSet","vn_m45_smg_trigger_reset_soundset"};
            };
            burst = 1;
            burstRangeMax = -1;
            dispersion = 0.01;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
        };
        class aiclose: aicqb
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"SPE_m1car_Shot_SoundSet","SPE_rifle_med_ob_Tail_SoundSet","SPE_m1car_stereoLayer_SoundSet","vn_m45_smg_trigger_reset_soundset"};
            };
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
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"SPE_m1car_Shot_SoundSet","SPE_rifle_med_ob_Tail_SoundSet","SPE_m1car_stereoLayer_SoundSet","vn_m45_smg_trigger_reset_soundset"};
            };
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
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"SPE_m1car_Shot_SoundSet","SPE_rifle_med_ob_Tail_SoundSet","SPE_m1car_stereoLayer_SoundSet","vn_m45_smg_trigger_reset_soundset"};
            };
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
    class vn_m1carbine_sniper: vn_m1carbine
	{
        class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {"vn_o_3x_m84"};
				iconPosition[] = {0.45,0.38};
				iconScale = 0.2;
			};
		};
    };

    class vn_m2carbine: vn_m1carbine
    {
        modes[] = {"FullAuto","Single","close","short","medium"};
        class FullAuto: Mode_FullAuto
        {
            reloadTime = 0.081;
            dispersion = 0.0021;
            minRange = 0;
            minRangeProbab = 1;
            midRange = 10;
            midRangeProbab = 1;
            maxRange = 20;
            maxRangeProbab = 1;
            aiRateOfFire = 0;
            aiRateOfFireDistance = 600;
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"SPE_m1car_Shot_SoundSet","SPE_rifle_med_ob_Tail_SoundSet","SPE_m1car_stereoLayer_SoundSet","vn_m45_smg_trigger_reset_soundset"};
            };
        };
        class Single: Single
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"SPE_m1car_Shot_SoundSet","SPE_rifle_med_ob_Tail_SoundSet","SPE_m1car_stereoLayer_SoundSet","vn_m45_smg_trigger_reset_soundset"};
            };
        };
        class close: FullAuto
        {
            burst = 20;
            aiRateOfFire = 0.01;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.05;
            midRange = 30;
            midRangeProbab = 0.7;
            maxRange = 50;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class short: close
        {
            burst = 15;
            aiRateOfFire = 0.2;
            aiRateOfFireDistance = 300;
            minRange = 50;
            minRangeProbab = 0.05;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.04;
        };
        class medium: close
        {
            burst = 15;
            aiRateOfFire = 0.25;
            aiRateOfFireDistance = 600;
            minRange = 200;
            minRangeProbab = 0.05;
            midRange = 400;
            midRangeProbab = 0.6;
            maxRange = 600;
            maxRangeProbab = 0.1;
        };
    };
    class vn_m2carbine_sniper: vn_m2carbine
	{
        class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {"vn_o_3x_m84"};
				iconPosition[] = {0.45,0.38};
				iconScale = 0.2;
			};
		};
    };

    class vn_m3carbine: vn_m2carbine
	{
        displayName = "M3 Carbine";
        modelOptics = "sp_fwa_m1carbine\sp_fwa_m3_scope_ir_reticle.p3d";
    };
};

class cfgMagazines
{
    class vn_riflemag_base;

    class vn_carbine_15_mag: vn_riflemag_base
	{
        displayName = "15Rnd .30 Carbine Mag";
        mass = 2.5;
    };
    class vn_carbine_15_t_mag: vn_carbine_15_mag
	{
        displayName = "15Rnd .30 Carbine Mag (Tracer)";
        tracersEvery = 1;
        lastRoundsTracer = 15;
    };
    class vn_carbine_30_mag: vn_riflemag_base
	{
        displayName = "30Rnd .30 Carbine Mag";
        mass = 3;
    };
    class vn_carbine_30_t_mag: vn_carbine_30_mag
	{
        displayName = "30Rnd .30 Carbine Mag (Tracer)";
        tracersEvery = 1;
        lastRoundsTracer = 15;
    };
};