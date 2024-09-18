class cfgPatches
{
    class SiP_Patch_ppsh41
    {
        addonRootClass = "SiP_Patch_Communist_weapons";
        requiredAddons[] =
        {
            "weapons_f_vietnam","weapons_f_vietnam_c",
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
    class SiP_PPSh_shot_fp_soundShader
	{
		samples[] = 
        {
            {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shot\pdw2000\close_1.ogg",1},
            {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shot\pdw2000\close_2.ogg",1},
            {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shot\pdw2000\close_3.ogg",1},
            {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shot\pdw2000\close_4.ogg",1}
        };
		volume = 1;
		range = 17;
		rangeCurve[] = {{0,1},{17,0}};
	};
    class SiP_PPSh_shot_close_soundShader
	{
		samples[] = 
        {
            {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shot\pdw2000\close_1.ogg",1},
            {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shot\pdw2000\close_2.ogg",1},
            {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shot\pdw2000\close_3.ogg",1},
            {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shot\pdw2000\close_4.ogg",1}
        };
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
    class SiP_PPSh_Shot_SoundSet
	{
		soundShaders[]=
		{
			"SiP_PPSh_shot_fp_soundShader",
			"SiP_PPSh_shot_close_soundShader",
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

class Mode_FullAuto;

class cfgWeapons
{
    class vn_smg;

    class vn_ppsh41: vn_smg
	{
        class Eventhandlers
        {
            class SPE_mg42_ROF
            {
                fired = "_this spawn SPE_fnc_mgROF;";
            };
        };
        magazines[] = {"vn_ppsh41_71_mag","vn_ppsh41_71_t_mag","vn_ppsh41_35_mag","vn_ppsh41_35_t_mag"};
        modes[] = {"FullAuto","close","short","medium","far_optic1","far_optic2"};
        class FullAuto: Mode_FullAuto
        {
            reloadTime = 0.05;
            dispersion = 0.002;
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"SiP_PPSh_Shot_SoundSet","vn_762x25mm_smg_fullauto_tails_soundset","SPE_MP35_stereoLayer_SoundSet","vn_ppsh_smg_trigger_reset_soundset"};
            };
            soundContinuous = 0;
            soundBurst = 0;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-06;
            showToPlayer = 1;
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
        class far_optic2: far_optic1
        {
            requiredOpticType = 2;
            autoFire = 0;
            burst = 1;
            minRange = 400;
            minRangeProbab = 0.05;
            midRange = 800;
            midRangeProbab = 0.5;
            maxRange = 1000;
            maxRangeProbab = 0.01;
        };
    };
};