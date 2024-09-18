class cfgPatches
{
    class SiP_Patch_mat49
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

class CfgSoundShaders
{
    class SiP_mat49_shot_fp_soundShader
	{
		samples[] = {{"\WBK_AlterHistWeapons\sounds\MP41_Close",1}};
		volume=1;
		range=17;
		rangeCurve[]=
		{
			{0,1},
			{17,0}
		};
	};
	class SiP_mat49_shot_close_soundShader
	{
		samples[] = {{"\WBK_AlterHistWeapons\sounds\MP41_Close",1}};
		volume=1;
		range=70;
		rangeCurve[]=
		{
			{0,0},
			{17,0.89999998},
			{70,0}
		};
	};
};

class CfgSoundSets
{
    class SiP_mat49_Shot_SoundSet
	{
		soundShaders[]=
		{
			"SiP_mat49_shot_fp_soundShader",
			"SiP_mat49_shot_close_soundShader",
			"SPE_mp40_shot_mid_SoundShader",
			"SPE_mp40_shot_midFurther_SoundShader",
			"SPE_mp40_shot_far_SoundShader",
			"SPE_mp40_Interior_closeMono_SoundShader",
			"SPE_mp40_Interior_far_SoundShader"
		};
		occlusionFactor=0.34999999;
		obstructionFactor=0.18000001;
		volumeFactor=1.35;
		volumeCurve="InverseSquare2Curve";
		sound3DProcessingType="SPE_Shot_light_3DProcessingType";
		distanceFilter="SPE_rifleShotDistanceFilter";
		frequencyRandomizer=0.2;
		frequencyRandomizerMin=0.050000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
};

class cfgWeapons
{
    class vn_rifle;

    class vn_smg: vn_rifle
	{
        class FullAuto;
    };

    class vn_mat49: vn_smg
	{
        class FullAuto: FullAuto
        {
            sounds[] = {"StandardSound"};
            class StandardSound
			{
                soundsetshot[] = {"SiP_mat49_Shot_SoundSet","vn_9mm_smg_fullauto_tails_soundset","SPE_MP40_stereoLayer_SoundSet"};
            };
        };
        class aicqb: FullAuto
        {
            sounds[] = {"StandardSound"};
            class StandardSound
			{
                soundsetshot[] = {"SiP_mat49_Shot_SoundSet","vn_9mm_smg_fullauto_tails_soundset","SPE_MP40_stereoLayer_SoundSet"};
            };
        };
        class aiclose: aicqb
        {
            burst = 3;
            showToPlayer = 0;
            dispersion = 0.0126;
            minRange = 60;
            minRangeProbab = 0.5;
            midRange = 100;
            midRangeProbab = 1;
            maxRange = 160;
            maxRangeProbably = 0.5;
            aiRateOfFire = 2e-06;
            aiRateOfFireDistance = 100;
        };
        class aimedium: aicqb
        {
            burst = 3;
            showToPlayer = 0;
            dispersion = 0.0126;
            minRange = 100;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 1;
            maxRange = 230;
            maxRangeProbab = 0.1;
            aiRateOfFire = 2e-06;
            aiRateOfFireDistance = 250;
        };
        class aifar: aicqb
        {
            burst = 3;
            showToPlayer = 0;
            dispersion = 0.0126;
            minRange = 150;
            minRangeProbab = 0.5;
            midRange = 230;
            midRangeProbab = 1;
            maxRange = 250;
            maxRangeProbab = 0.5;
            aiRateOfFire = 2e-06;
            aiRateOfFireDistance = 350;
        };
    };
};

class XtdGearInfos
{
    class CfgWeapons
    {	
        class vn_mat49
        {
            model = "W_hssn_SiP_weapon_mat49_folding_stock";
            stock = "unfold_stock";
        };
        class vn_mat49_f
        {
            model = "W_hssn_SiP_weapon_mat49_folding_stock";
            stock = "fold_stock";
        };
    };
};

class XtdGearModels
{
    class CfgWeapons 
    {		
        //Folding Stock
        class W_hssn_SiP_weapon_mat49_folding_stock
        {
            label = "";
            author = "Letlev";
            options[]=
            {
                "stock"
            };
            class stock
            {
                label = "Stock";
                changeingame = 1;
                changedelay = 1;
                values[]=
                {
                    "unfold_stock",
                    "fold_stock"
                };
                class unfold_stock
                {
                    label = "Full";
                    actionLabel = "Unfold Stock";
                    icon = "\vn\weapons_f_vietnam\ui\icon_vn_mat49_ca.paa";
                };
                class fold_stock
                {
                    label = "Folded";
                    actionLabel = "Fold Stock";
                    icon = "\vn\weapons_f_vietnam\ui\icon_vn_mat49_f_ca.paa";
                    
                };
            };
        };
    };
};