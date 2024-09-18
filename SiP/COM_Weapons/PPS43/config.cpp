class cfgPatches
{
    class SiP_Patch_pps43
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

class CfgSoundShaders
{
    class SiP_PPS43_shot_fp_soundShader
	{
		samples[] = {{"\WBK_AlterHistWeapons\sounds\ppsh_1",1},{"\WBK_AlterHistWeapons\sounds\ppsh_2",1},{"\WBK_AlterHistWeapons\sounds\ppsh_3",1}};
		volume = 1;
		range = 17;
		rangeCurve[] = {{0,1},{17,0}};
	};
    class SiP_PPS43_shot_close_soundShader
	{
		samples[] = {{"\WBK_AlterHistWeapons\sounds\ppsh_1",1},{"\WBK_AlterHistWeapons\sounds\ppsh_2",1},{"\WBK_AlterHistWeapons\sounds\ppsh_3",1}};
		volume = 1;
		range = 70;
		rangeCurve[] =
		{
			{0,0},
			{17,0.89999998},
			{70,0}
		};
	};
};

class CfgSoundSets
{
    class SiP_PPS43_Shot_SoundSet
	{
		soundShaders[]=
		{
			"SiP_PPS43_shot_fp_soundShader",
			"SiP_PPS43_shot_close_soundShader",
			"SPE_mp35_shot_mid_SoundShader",
			"SPE_mp35_shot_midFurther_SoundShader",
			"SPE_mp35_shot_far_SoundShader",
			"SPE_mp35_Interior_closeMono_SoundShader",
			"SPE_mp35_Interior_far_SoundShader"
		};
		occlusionFactor = 0.34999999;
		obstructionFactor = 0.18000001;
		volumeFactor = 1.35;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "SPE_Shot_light_3DProcessingType";
		distanceFilter = "SPE_rifleShotDistanceFilter";
		frequencyRandomizer = 0.2;
		frequencyRandomizerMin = 0.050000001;
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class cfgWeapons
{
    class vn_smg;

    class vn_pps52: vn_smg
    {
        modes[] = {"FullAuto","close","short","medium","far_optic1"};
        class FullAuto: Mode_FullAuto
        {
            reloadTime = 0.08;
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
                SoundSetShot[] = {"SiP_PPS43_Shot_SoundSet","vn_762x25mm_smg_fullauto_tails_soundset","SPE_MP35_stereoLayer_SoundSet"};
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
        class far_optic1: close
        {
            requiredOpticType = 1;
            showToPlayer = 0;
            burst = 3;
            aiRateOfFire = 9;
            aiRateOfFireDistance = 900;
            minRange = 350;
            minRangeProbab = 0.04;
            midRange = 550;
            midRangeProbab = 0.5;
            maxRange = 700;
            maxRangeProbab = 0.01;
        };
    };
};