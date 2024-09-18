
class cfgPatches
{
    class SiP_Patch_l2a1_sterling
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
            "WW2_Assets_c_Weapons_InfantryWeapons_c",
            "vn_weapons"
        };
        units[] = {};
        weapons[] = {};
        magazines[] = {};
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

    class vn_l2a3: vn_smg
	{
        displayName = "L2A3 Sterling";
        class Eventhandlers: Eventhandlers
        {
            class SPE_mg42_ROF
			{
				fired = "_this spawn SPE_fnc_mgROF;";
			};
        };
        class Single: Mode_SemiAuto
        {
            reloadTime = 0.1;
            dispersion = 0.00131;
            minRange = 400;
            minRangeProbab = 0.3;
            midRange = 600;
            midRangeProbab = 0.7;
            maxRange = 800;
            maxRangeProbab = 0.05;
            aiRateOfFire = 0.05;
            aiRateOfFireDistance = 500;
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"WW2_Sten_Shot_SoundSet","vn_9mm_smg_fullauto_tails_soundset","SPE_Sten_stereoLayer_SoundSet"};
            };
        };
        class FullAuto: Mode_FullAuto
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"WW2_Sten_Shot_SoundSet","vn_9mm_smg_fullauto_tails_soundset","SPE_Sten_stereoLayer_SoundSet"};
            };
            reloadTime = 0.1;
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

    class vn_l2a3_f: vn_l2a3
	{
        displayName = "L2A3 Sterling (Folded)";
    };
};

class XtdGearInfos
{
    class CfgWeapons
    {	
        ////Sterling////
        class vn_l2a3
        {
            model = "W_hssn_SiP_weapon_sterling_folding_stock";
            stock = "unfold_stock";
        };
        class vn_l2a3_f
        {
            model = "W_hssn_SiP_weapon_sterling_folding_stock";
            stock = "fold_stock";
        };
    };
};

class XtdGearModels
{
    class CfgWeapons 
    {		
        //Folding Stock
        class W_hssn_SiP_weapon_sterling_folding_stock
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
                changedelay = 3;
                values[]=
                {
                    "unfold_stock",
                    "fold_stock"
                };
                class unfold_stock
                {
                    label = "Full";
                    actionLabel = "Unfold Stock";
                    icon = "\vn\weapons_f_vietnam_04\ui\icon_vn_l2a3_ca.paa";
                };
                class fold_stock
                {
                    label = "Folded";
                    actionLabel = "Fold Stock";
                    icon = "\vn\weapons_f_vietnam_04\ui\icon_vn_l2a3_f_ca.paa";
                };
            };
        };
    };
};