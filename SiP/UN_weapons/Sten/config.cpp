class cfgPatches
{
    class SiP_Patch_sten
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
            "WW2_SPE_Assets_c_Weapons_InfantryWeapons_c",
            "vn_weapons"
        };
        units[] = {};
        weapons[] = 
        {
            "SiP_sten_mkv"
        };
    };
};

class CfgRecoils
{
    class recoil_default;

    class WW2_Fixes_SPE_recoil_sten: recoil_default
    {
        muzzleOuter[] = {0.2,0.4,0.4,0.15};
        kickBack[] = {0.03,0.04};
        temporary = 0.015;
        permanent = 0.045;
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class cfgWeapons
{
    class SPE_SMG;

    class SPE_Sten_Mk2: SPE_SMG
    {
        magazines[] = {"SPE_32Rnd_9x19_Sten"};
        magazineWell[] = {};
        modes[] = {"FullAuto","Single","aiclose","aimedium","aifar"};
        class Eventhandlers
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
                soundSetShot[] = {"SPE_Sten_Shot_SoundSet","vn_9mm_smg_fullauto_tails_soundset","SPE_Sten_stereoLayer_SoundSet","vn_smg_trigger_reset_soundset"};
            };
        };
        class FullAuto: Mode_FullAuto
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"SPE_Sten_Shot_SoundSet","vn_9mm_smg_fullauto_tails_soundset","SPE_Sten_stereoLayer_SoundSet","vn_smg_trigger_reset_soundset"};
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

    class SiP_sten_mkv: SPE_Sten_Mk2
    {
        author = "Letlev";
        displayName = "Sten Mk.V";
        model = "\WW2\Assets_m\Weapons\MachineGun_Sub_m\WW2_Sten_Mk5.p3d";
        picture = "\WW2\Assets_t\Weapons\Equipment_t\Weapons\MachineGun_Sub\Gear_Sten_Mk5_X_ca.paa";
        hiddenSelectionsTextures[] = {"ww2\assets_t\weapons\machinegun_sub_t\ww2_sten\sten_mk5_co.paa"};
        handAnim[] = {"OFP2_ManSkeleton","\WW2\Core_a\IF_Animations_a\Weapons\Sten\Sten_mk5_handanim.rtm"};
        reloadAction = "LIB_GestureReload_Sten";
        discreteDistance[] = {100};
        discreteDistanceInitIndex = 0;
    };
};

class cfgMagazines
{
    class vn_smgmag_base;

    class vn_sten_mag: vn_smgmag_base
    {
        displayName = "32Rnd 9mm Sten Mag";
    };
    class vn_sten_t_mag: vn_sten_mag
    {
        displayName = "32Rnd 9mm Sten Mag (Tracer)";
    };
};