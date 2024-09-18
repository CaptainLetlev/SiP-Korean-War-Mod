class cfgPatches
{
    class SiP_Patch_mosin
    {
        requiredAddons[] =
        {
            "weapons_f_vietnam",
            "weapons_f_vietnam_c",
            "weapons_f_vietnam_02",
            "weapons_f_vietnam_02_c",
            "weapons_f_vietnam_03",
            "weapons_f_vietnam_03_c",
            "vn_weapons",
            "NORTH_weapons",
            "NORTH_weapons_cfg"
        };
        units[] = {};
        weapons[] = 
        {
            "SiP_mosin_m38",
            "SiP_mosin_m9130",
            "SiP_mosin_pu"
        };
        magazines[] = 
        {
            "SiP_mosin_5_mag",
            "SiP_mosin_5_t_mag"
        };
    };
};

class PointerSlot;

class cfgWeapons
{
    class Pistol_Base_F;
    class vn_melee_base: Pistol_Base_F{};
    class vn_hand_melee_base: vn_melee_base{};

    class vn_rifle_boltaction_clip_base;
    class vn_m38: vn_rifle_boltaction_clip_base
    {
        class Single;
        class aicqb;
        class aiclose;
        class aimedium;
        class aifar;
        class aiopticmode1;
        class aiopticmode2;
        class EventHandlers;
        class WeaponSlotsInfo;
    };

    class SiP_mosin_m38: vn_m38
    {
        author = "Letlev";
        displayName = "Mosin Nagant M38";
        picture = "\NORTH\NF_weapons\fin\m91_30\data\UI\m9130SOV_x_ca";
        model = "\NORTH\NF_weapons\fin\M38\M38.p3d";
        handanim[] = {"OFP2_ManSkeleton","NORTH\NF_weapons\fin\m39\anim\reload\M39handanimv2.rtm"};
        reloadAction = "NORTH_GestureReloadM39";
        selectionFireAnim = "muzzleFlash";
        reloadmagazinesound[] = {"\vn\sounds_f_vietnam_04\weapons\rifles\k98k\reload.ogg",2.25,1,50};
        memoryPointCamera = "eye";
        discreteDistance[] = {150,200,300,400,500,600,700,800};
        discreteDistanceInitIndex = 0;
        discreteDistanceCameraPoint[] = {"eye1","eye2","eye3","eye4","eye5","eye6","eye7","eye8"};
        distanceZoomMin = 200;
        distanceZoomMax = 800;
        magazines[] = {"SiP_mosin_5_mag","SiP_mosin_5_t_mag"};
        magazineWell[] = {};
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 110;
            class PointerSlot: PointerSlot
            {
                compatibleItems[] = {"vn_b_m38"};
                linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
                iconPosition[] = {0.35,0.5};
                iconScale = 0.25;
            };
        };
        class EventHandlers: EventHandlers
        {
            class vn
            {
                fired = "[_this, 'NORTH_M39Boltinganim', 'SPE_springfield_bolting',true] spawn vn_fnc_bolt_fired";
            };
        };
        modes[] = {"Single","AICQB","AIClose","AIMedium","AIFar"};
        class Single: Single
        {
            reloadTime = 1.6;
            aiRateOfFire = 0;
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = 
                {
                    "SPE_mas36_Shot_SoundSet",
                    "SPE_mas36_stereoLayer_SoundSet",
                    "vn_bolt_rifle_tails_soundset",
                    "vn_boltaction_trigger_reset_soundset"
                };
            };
        };
        class aicqb: aicqb
        {
            reloadTime = 1.6;
            aaiRateOfFire = 0;
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = 
                {
                    "SPE_mas36_Shot_SoundSet",
                    "SPE_mas36_stereoLayer_SoundSet",
                    "vn_bolt_rifle_tails_soundset",
                    "vn_boltaction_trigger_reset_soundset"
                };
            };
        };
        class aiclose: aiclose
        {
            reloadTime = 1.6;
            aiRateOfFire = 0;
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = 
                {
                    "SPE_mas36_Shot_SoundSet",
                    "SPE_mas36_stereoLayer_SoundSet",
                    "vn_bolt_rifle_tails_soundset",
                    "vn_boltaction_trigger_reset_soundset"
                };
            };
        };
        class aimedium: aimedium
        {
            reloadTime = 1.6;
            aiRateOfFire = 0;
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = 
                {
                    "SPE_mas36_Shot_SoundSet",
                    "SPE_mas36_stereoLayer_SoundSet",
                    "vn_bolt_rifle_tails_soundset",
                    "vn_boltaction_trigger_reset_soundset"
                };
            };
        };
        class aifar: aifar
        {
            reloadTime = 1.6;
            aiRateOfFire = 0;
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = 
                {
                    "SPE_mas36_Shot_SoundSet",
                    "SPE_mas36_stereoLayer_SoundSet",
                    "vn_bolt_rifle_tails_soundset",
                    "vn_boltaction_trigger_reset_soundset"
                };
            };
        };
        class aiopticmode1: aiopticmode1
        {
            reloadTime = 1.6;
            aiRateOfFire = 0;
            ssounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = 
                {
                    "SPE_mas36_Shot_SoundSet",
                    "SPE_mas36_stereoLayer_SoundSet",
                    "vn_bolt_rifle_tails_soundset",
                    "vn_boltaction_trigger_reset_soundset"
                };
            };
        };
        class aiopticmode2: aiopticmode2
        {
            reloadTime = 1.6;
            aiRateOfFire = 0;
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = 
                {
                    "SPE_mas36_Shot_SoundSet",
                    "SPE_mas36_stereoLayer_SoundSet",
                    "vn_bolt_rifle_tails_soundset",
                    "vn_boltaction_trigger_reset_soundset"
                };
            };
        };
    };
    
    class SiP_mosin_m9130: SiP_mosin_m38
    {
        displayName = "Mosin Nagant M1891/30";
        picture = "\NORTH\NF_weapons\fin\m91_30\data\UI\m9130SOV_x_ca";
        model = "\NORTH\NF_weapons\fin\M91_30\M9130SOV.p3d";
        memoryPointCamera = "eye1";
        discreteDistance[] = {150,200,300,400,500,600,800};
        discreteDistanceInitIndex = 0;
        discreteDistanceCameraPoint[] = {"eye1","eye2","eye3","eye4","eye5","eye6","eye7"};
        distanceZoomMin = 200;
        distanceZoomMax = 800;
    };

    class SiP_mosin_pu: SiP_mosin_m9130
    {
        displayName = "Mosin Nagant M1891/30 PU";
        model = "NORTH\NF_weapons\fin\m91_30\m9130PU.p3d";
        picture = "\NORTH\NF_weapons\fin\m91_30\data\UI\m9130PU_x_ca";
        reloadAction = "NORTH_GestureReloadMosin_Sniper";
        modes[] = {"Single","AICQB","AIClose","AIMedium","AIFar","AIOpticmode1","AIOpticmode2"};
        magazineReloadTime = 3.0;
        modelOptics = "\NORTH\NF_Misc\Attachments\PU\reticle_PU.p3d";
        class EventHandlers: EventHandlers
        {
            class vn
            {
                fired = "[_this, 'NORTH_GestureBoltingMosin_Sniper', 'LIB_Kar98K_Bolt',true] spawn vn_fnc_bolt_fired";
            };
        };
        class OpticsModes
        {
            class Scope
            {
                OpticsID = 1;
                UseModelOptics = 1;
                MemoryPointCamera = "Eye_optics";
                opticsPPEffects[] = {"OpticsBlur1"};
                OpticsFlare = 1;
                opticsDisablePeripherialVision = 1;
                opticsZoomMin = 0.15;
                opticsZoomMax = 0.15;
                opticsZoomInit = 0.15;
                distanceZoomMin = 100;
                distanceZoomMax = 1300;
                discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300};
                modelOptics = "\NORTH\NF_Misc\Attachments\PU\reticle_PU.p3d";
                discreteDistanceInitIndex = 0;
                VisionMode[] = {"Normal"};
                CameraDir = "";
            };
            class Ironsights
            {
                OpticsID = 0;
                UseModelOptics = 0;
                MemoryPointCamera = "Eye";
                OpticsPPEffects[] = {};
                OpticsFlare = 0;
                OpticsDisablePeripherialVision = 0;
                OpticsZoomMin = 0.25;
                OpticsZoomInit = 0.5;
                OpticsZoomMax = 1.1;
                DistanceZoomMin = 100;
                DistanceZoomMax = 100;
                VisionMode[] = {};
                CameraDir = "eye_look";
            };
        };
    };
};

class cfgMagazines
{
    class vn_m36_mag;

    class SiP_mosin_5_mag: vn_m36_mag
    {
        author = "Letlev";
        displayName = "5Rnd. 7.62x54R Clip";
        picture = "\NORTH\NF_weapons\fin\m39\data\UI\m39_mag_ca.paa";
        ammo = "vn_762x54";
    };
    class SiP_mosin_5_t_mag: SiP_mosin_5_mag
    {
        displayName = "5Rnd. 7.62x54R Clip (Tracer)";
        tracersEvery = 1;
        lastRoundsTracer = 10;
    };
};