class cfgPatches
{
    class SiP_Patch_M1919
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
            "vn_weapons",
            "WW2_SPE_Assets_c_Weapons_InfantryWeapons_c",
            "WW2_Fixes_SPE_Weapons_Patch"
        };
        units[] = {};
        weapons[] = {};
        magazines[] = 
        {
            "SiP_m1919_v_250_mag",
            "SiP_m1919_v_100_mag",
            "SiP_m1919_v_50_mag",
            
            "ace_compat_sip_m1919_250",
            "ace_compat_sip_m1919_100",
            "ace_compat_sip_m1919_50"
        };
    };
};

class Mode_FullAuto;

class cfgWeapons
{
    class SPE_LMG;

    class SPE_M1919A4: SPE_LMG
	{
        class Eventhandlers
        {
            class fow_mgRoF
            {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
        magazines[] = 
        {
            "SPE_100Rnd_762x63",
            "SPE_100Rnd_762x63_M1",
            "SPE_100Rnd_762x63_M2_AP",
            "SPE_50Rnd_762x63",
            "SPE_50Rnd_762x63_M1",
            "SPE_50Rnd_762x63_M2_AP",
            
            "ace_compat_sip_m1919_250",
            "ace_compat_sip_m1919_100",
            "ace_compat_sip_m1919_50"
        };
        modes[] = {"FullAuto","aiclose","aimedium","aifar"};
        class FullAuto: Mode_FullAuto
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"SPE_M1919_Shot_SoundSet","vn_762x39mm_lmg_tails_soundset"};
            };
            reloadTime = 0.1;
            dispersion = 0.002;
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
            dispersion = 0.00125;
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
            burst = 4;
            aiRateOfFire = 1e-06;
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
            burst = 3;
            aiRateOfFire = 1e-06;
            aiRateOfFireDistance = 600;
            minRange = 300;
            minRangeProbab = 0.05;
            midRange = 700;
            midRangeProbab = 0.6;
            maxRange = 1000;
            maxRangeProbab = 0.1;
        };
    };
    class SPE_M1919A6: SPE_M1919A4
	{
        magazines[] = 
        {
            "ace_compat_sip_m1919_250",
            "ace_compat_sip_m1919_100",
            "ace_compat_sip_m1919_50"
        };
    };
};

class cfgMagazines
{
    class vn_m1919_v_250_mag;
    class SPE_100Rnd_762x63;
    class SPE_50Rnd_762x63;

    class SiP_m1919_v_250_mag: vn_m1919_v_250_mag
    {
        scope = 1;
        scopeArsenal = 1;
        author = "Letlev";
        displayName = "250Rnd .30-06 M1919 Belt";
        model = "\WW2\SPE_Assets_m\Weapons\WeaponsMagazines_m\SPE_M1919_Mag.p3d";
        picture = "\WW2\SPE_Assets_t\Weapons\Equipment_t\Magazines\MachineGun_Light\M_50Rnd_762x63_ca.paa";
        mass = 20;
    };

    class SiP_m1919_v_100_mag: SPE_100Rnd_762x63
    {
        scope = 1;
        scopeArsenal = 1;
        author = "Letlev";
        displayName = "100Rnd .30-06 M1919 Belt";
        ammo = "vn_762x63";
        mass = 15;
    };
    
    class SiP_m1919_v_50_mag: SPE_50Rnd_762x63
    {
        scope = 1;
        scopeArsenal = 1;
        author = "Letlev";
        displayName = "50Rnd .30-06 M1919 Belt";
        ammo = "vn_762x63";
        mass = 10;
    };

    class ace_compat_sip_m1919_250: SiP_m1919_v_250_mag
    {
        scope = 2;
        scopeArsenal = 2;
        type = 256;
        count = 250;
        ACE_isBelt = 1;
    };
    class ace_compat_sip_m1919_100: SiP_m1919_v_100_mag
    {
        scope = 2;
        scopeArsenal = 2;
        type = 256;
        count = 250;
        ACE_isBelt = 1;
    };
    class ace_compat_sip_m1919_50: SiP_m1919_v_50_mag
    {
        scope = 2;
        scopeArsenal = 2;
        type = 256;
        count = 250;
        ACE_isBelt = 1;
    };
};

class ACE_CSW_Groups
{
    class ace_compat_sip_m1919_250
    {
        SiP_m1919_v_250_mag = 1;
    };
    class ace_compat_sip_m1919_100
    {
        SiP_m1919_v_100_mag = 1;
    };
    class ace_compat_sip_m1919_50
    {
        SiP_m1919_v_50_mag = 1;
    };
};
