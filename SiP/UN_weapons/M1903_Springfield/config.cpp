class cfgPatches
{
    class SiP_Patch_M1903A4_Springfield
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
            "weapons_f_vietnam_04",
            "weapons_f_vietnam_04_c",
            "sounds_f_vietnam_c",
            "sounds_f_vietnam_02_c",
            "sounds_f_vietnam_03_c",
            "sounds_f_vietnam_04_c",
            "vn_weapons",
            "WW2_SPE_Core_c_Core_c_Eventhandlers"
        };
        units[] = {};
        weapons[] = {};
        magazines[] = {};
    };
};

class CowsSlot;
class PointerSlot;

class cfgWeapons
{
    class optic_dms;

    class vn_rifle;
    class vn_rifle762: vn_rifle
    {
        class Single;
    };

    class vn_optic_base: optic_dms
    {
        class ItemInfo;
    };
    class vn_o_8x_m1903: vn_optic_base
    {
        class ItemInfo: ItemInfo
        {
            modelOptics="\WW2\SPE_Assets_m\Weapons\Optics_m\SPE_Optika_M82.p3d";
        };
    };

    class SPE_RIFLE;
    class SPE_SRIFLE;

    class vn_m1903: vn_rifle762
    {
        displayName = "M1903A4 Springfield";
        class Single: Single
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"SPE_springfield_Shot_SoundSet","vn_bolt_rifle_tails_soundset","SPE_springfield_stereoLayer_SoundSet","vn_boltaction_trigger_reset_soundset"};
            };
        };
        class aicqb: Single
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"SPE_springfield_Shot_SoundSet","vn_bolt_rifle_tails_soundset","SPE_springfield_stereoLayer_SoundSet","vn_boltaction_trigger_reset_soundset"};
            };
        };
        class aiclose: aicqb
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"SPE_springfield_Shot_SoundSet","vn_bolt_rifle_tails_soundset","SPE_springfield_stereoLayer_SoundSet","vn_boltaction_trigger_reset_soundset"};
            };
        };
        class aimedium: aicqb
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"SPE_springfield_Shot_SoundSet","vn_bolt_rifle_tails_soundset","SPE_springfield_stereoLayer_SoundSet","vn_boltaction_trigger_reset_soundset"};
            };
        };
        class aifar: aicqb
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"SPE_springfield_Shot_SoundSet","vn_bolt_rifle_tails_soundset","SPE_springfield_stereoLayer_SoundSet","vn_boltaction_trigger_reset_soundset"};
            };
        };
        class aiopticmode1: aicqb
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"SPE_springfield_Shot_SoundSet","vn_bolt_rifle_tails_soundset","SPE_springfield_stereoLayer_SoundSet","vn_boltaction_trigger_reset_soundset"};
            };
        };
        class aiopticmode2: aicqb
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"SPE_springfield_Shot_SoundSet","vn_bolt_rifle_tails_soundset","SPE_springfield_stereoLayer_SoundSet","vn_boltaction_trigger_reset_soundset"};
            };
        };
        class SPE_M1903A3_Springfield: SPE_RIFLE
        {
            magazines[]=
        {
            "SPE_5Rnd_762x63",
            "SPE_5Rnd_762x63_t",
            "SPE_5Rnd_762x63_M1",
            "SPE_5Rnd_762x63_M2_AP"
        };
        magazineWell[]=
        {
            "SPE_3006_Spring"
        };
        };
    };
    
    class SiP_m1903a4_Springfield_scope: vn_m1903
    {
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "vn_o_8x_m1903";
            };
        };
    };

    class SPE_M1903A3_Springfield: SPE_RIFLE
    {
        magazines[]=
        {
            "SPE_5Rnd_762x63",
            "SPE_5Rnd_762x63_t",
            "SPE_5Rnd_762x63_M1",
            "SPE_5Rnd_762x63_M2_AP",
            "vn_m1903_mag",
            "vn_m1903_t_mag"
        };
        magazineWell[]=
        {
            
        };
    };

    class SPE_M1903A4_Springfield: SPE_SRIFLE
    {
        maxZeroing = 1200;
		discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
        magazines[]=
        {
            "SPE_5Rnd_762x63",
            "SPE_5Rnd_762x63_t",
            "SPE_5Rnd_762x63_M1",
            "SPE_5Rnd_762x63_M2_AP",
            "vn_m1903_mag",
            "vn_m1903_t_mag"
        };
        magazineWell[]=
        {
            
        };
    };
};