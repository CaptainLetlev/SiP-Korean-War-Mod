class cfgPatches
{
    class SiP_Patch_enfield_rifle
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
            "fow_anims_c",
            "fow_anims",
            "vn_weapons"
        };
        units[] = {};
        weapons[] = 
        {
            "SiP_No4_Mk2_Bayo",
            "SiP_P1907_Bayo",

            "SiP_scope_enfield_no32",

            "SiP_lee_enfield_no4_mkI",

            "SiP_lee_enfield_no1_mkiii",

            "SiP_lee_enfield_no4_mkI_sniper_scope",
            "SiP_lee_enfield_no4_mkI_sniper_scope"
        };
        magazines[] = 
        {
            "SiP_enfield_10_mag",
            "SiP_enfield_10_t_mag"
        };
    };
};

class Mode_SemiAuto;

class CowsSlot;
class PointerSlot;

class CfgGesturesMale
{
    class States
    {
        class fow_gestureReload_basic;

        class fow_gesture_enfield_bolt: fow_gestureReload_basic
        {
            enableOptics = 0;
            file = "\fow\fow_anims\weapons\w_enfield_bolt.rtm";
            rightHandIKCurve[] = {0,1,0.013,0,0.017,0,0.992,0,0.996,1};
            speed = -0.9;
        };
    };
};

class cfgWeapons
{
    class ItemCore;
    class InventoryFlashLightItem_Base_F;
    class InventoryOpticsItem_Base_F;
    class optic_dms;

    class Pistol_Base_F;
    class vn_melee_base: Pistol_Base_F{};
    class vn_hand_melee_base: vn_melee_base{};

    class vn_acc_bayo_base: ItemCore
    {
        class ItemInfo: InventoryFlashLightItem_Base_F{};
    };

    class vn_rifle762;
    class vn_rifle_boltaction_base: vn_rifle762
    {
        class EventHandlers;
    };

    class SiP_No4_Mk2_Bayo: vn_acc_bayo_base
    {
        scope = 2;
        scopeArsenal = 2;
        author = "Letlev";
        displayName = "No.4 Mk.II Bayonet";
        picture = "\WW2\Assets_t\Weapons\Equipment_t\Weapons\MuzzleItem\Gear_ACC_No4_Bayo_ca.paa";
        model = "\fow\fow_weapons\lee_enfield\no4_bayonet.p3d";
        vn_melee_bayonet_length = 0.19;
        IMS_Bayonet_Item = "true";
        class ItemInfo: ItemInfo
        {
            mass = 6.6;
        };
    };
    class SiP_P1907_Bayo: vn_acc_bayo_base
    {
        scope = 2;
        scopeArsenal = 2;
        author = "Letlev";
        displayName = "P1907 Bayonet";
        picture = "\WW2\Assets_t\Weapons\Equipment_t\Weapons\MuzzleItem\Gear_ACC_P1903_Bayo_ca.paa";
        model = "\WW2\Assets_m\Weapons\Rifles_m\WW2_Enfield_P1903_Bayonet.p3d";
        IMS_Bayonet_Item = "true";
        vn_melee_bayonet_length = 0.22;
        class ItemInfo: ItemInfo
        {
            mass = 6.6;
        };
    };

    class SiP_scope_enfield_no32: optic_dms
    {
        scope = 2;
        displayName = "No.32 3.5x Scope";
        author = "Letlev";
        model = "sp_fwa_no32\sp_no32";
        picture = "\sp_fwa_no32\icons\no32_icon_ca.paa";
        weaponInfoType = "sp_fwa_scope_handler";
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            mass = 10;
            modelOptics = "\NORTH\NF_Misc\Attachments\Finoptics\reticle_noroptics.p3d";
            optics = 1;
            opticType = 1;
            class OpticsModes
            {
                class Scope
                {
                    cameraDir = "";
                    distanceZoomMax = 300;
                    distanceZoomMin = 300;
                    discreteDistance[] = {50,100,150,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000};
                    discreteDistanceInitIndex = 5;
                    opticsZoomMin = "0.249 / 3.5";
                    opticsZoomMax = "0.249 / 3.5";
                    opticsZoomInit = "0.249 / 3.5";
                    memoryPointCamera = "opticView";
                    opticsDisablePeripherialVision = 1;
                    opticsFlare = 1;
                    opticsID = 1;
                    opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
                    useModelOptics = 1;
                    visionMode[] = {"Normal"};
                };
            };
        };
    };

    class SiP_lee_enfield_no4_mki: vn_rifle_boltaction_base
    {
        author = "Letlev";
        scope = 2;
        scopearesenal = 2;
        displayName = "Lee-Enfield No.4 Mk.I";
        picture = "\fow\fow_weapons\lee_enfield\data\ui\w_enfield_ca.paa";
        model = "fow\fow_weapons\lee_enfield\lodu_enfield";
        handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_Mark\LongRangeRifles\DMR_06\data\Anim\DMR_06.rtm"};
        reloadAction = "fow_gesture_enfield_reload";
        magazineReloadTime = 8.5;
        reloadMagazineSound[] = {"fow\fow_sounds\weapons\smle\reload.wav",1.0,1,10};
        drySound[] = {"fow\fow_sounds\weapons\smle\dry.wav",0.5011872,1,10};
        aimTransitionSpeed = 0.8;
        inertia = 0.7;
        magazines[] = {"SiP_enfield_10_mag","SiP_enfield_10_t_mag"};
        recoil = "recoil_rifle_1";
        selectionFireAnim = "muzzleFlash";
        discreteDistance[] = {300,600};
        discreteDistanceInitIndex = 0;
        class EventHandlers: EventHandlers
        {
            class vn
            {
                fired = "[_this, 'fow_gesture_enfield_bolt', 'SPE_k98_bolting',true] spawn vn_fnc_bolt_fired";
            };
        };
        class GunParticles
        {
            class FirstEffect
            {
                positionName = "usti hlavne";
                directionName = "konec hlavne";
                effectName = "RifleAssaultCloud";
            };
        };
        muzzles[] = {"this","vn_melee_muzzle"};
        weaponInfoType = "vn_melee_zeroing_overwrite";
        class vn_melee_muzzle: vn_melee_base{};
        vn_melee_bayonet_startpos[] = {-0.03,0.3,-0.02};
        class WeaponSlotsInfo
        {
            mass = 90.83;
            class PointerSlot: PointerSlot
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                compatibleItems[] = {"SiP_No4_Mk2_Bayo"};
                iconPosition[] = {0.35,0.5};
                iconScale = 0.25;
            };
            class MuzzleSlot{};
            class CowsSlot{};
        };
        modes[] = {"Single","AICQB","AIClose","AIMedium","AIFar"};
        class Single: Mode_SemiAuto
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"SPE_enfield_Shot_SoundSet","SPE_enfield_stereoLayer_SoundSet","vn_bolt_rifle_tails_soundset","vn_boltaction_trigger_reset_soundset"};

            };
            reloadTime = 1;
            dispersion = 0.00035;
            aiDispersionCoefY = 1.7;
            aiDispersionCoefX = 1.4;
            aiRateOfFire = 0.001;
            aiRateOfFireDistance = 10;
            minRange = 0;
            minRangeProbab = 0.2;
            midRange = 5;
            midRangeProbab = 0.7;
            maxRange = 10;
            maxRangeProbab = 0.05;
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

    class SiP_lee_enfield_no1_mkiii: SiP_lee_enfield_no4_mki
    {
        author = "Letlev";
        displayName = "Lee-Enfield No.1 Mk.III";
        picture = "\WW2\Assets_t\Weapons\Equipment_t\Weapons\Rifles\Gear_LeeEnfield_No1_X_ca.paa";
        model = "\WW2\Assets_m\Weapons\Rifles_m\CSA_Enfield_No1.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"ww2\assets_t\weapons\rifles_t\csa38_enfield\smlemetal_co.paa"};
        selectionFireAnim = "zasleh";
        deployedPivot = "bipod";
        hasBipod = 0;
        cameraDir = "eye_look";
        memoryPointCamera = "eye";
        discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
        discreteDistanceInitIndex = 0;
        discreteDistanceCameraPoint[] = {"eye"};
        distanceZoomMax = 300;
        distanceZoomMin = 300;
        class EventHandlers: EventHandlers
        {
            class vn
            {
                fired = "[_this, 'SPE_GestureReload_Common_bolt_action', 'SPE_k98_bolting',true] spawn vn_fnc_bolt_fired";
            };
        };
        class Single: Single
        {
            reloadTime = 1.6;
        };
        class WeaponSlotsInfo
        {
            mass = 90.83;
            class PointerSlot: PointerSlot
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                compatibleItems[] = {"SiP_P1907_Bayo"};
                iconPosition[] = {0.35,0.5};
                iconScale = 0.25;
            };
            class MuzzleSlot{};
            class CowsSlot{};
        };
    };

    class SiP_lee_enfield_no4_mkI_sniper_scope: SiP_lee_enfield_no4_mki
    {
        displayName = "Lee-Enfield No.4 Mk.I (T)";
        picture = "\sp_fwa_enfield\icons\no4t_walnut_icon_ca.paa";
        model = "\sp_fwa_enfield\sp_fwa_enfield_no4t";
        hiddenSelections[] = {"wood","woodextra"};
        hiddenSelectionsTextures[] = {"sp_fwa_enfield\textures\sp_LeeEnfieldMat_walnut_co.paa","sp_fwa_enfield\textures\sp_LeeEnfieldExtras_walnut_co.paa"};
        hiddenSelectionsMaterials[] = {"sp_fwa_enfield\textures\sp_LeeEnfieldMat.rvmat","sp_fwa_enfield\textures\sp_LeeEnfieldExtras.rvmat"};
        reloadAction = "LIB_GestureReload_Common_sniper";
        deployedPivot = "bipod";
        discreteDistanceInitIndex = 0;
        discreteDistance[] = {180,275,365,460,550,640,730,820,915,1000,1100,1190};
        maxZeroing = 1190;
        memoryPointCamera = "eye";
        class Single: Single
        {
            reloadTime = 1;
        };
        class WeaponSlotsInfo
        {
            mass = 90.83;
            class CowsSlot: CowsSlot
            {
                iconPosition[] = {0.3,0.7};
                iconScale = 0.25;
                linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                compatibleItems[] = {"SiP_scope_enfield_no32"};
            };
            //class PointerSlot{};
            class MuzzleSlot{};
        };
    };

    class SiP_lee_enfield_no4_mkI_sniper_scope_scope: SiP_lee_enfield_no4_mkI_sniper_scope
    {
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "SiP_scope_enfield_no32";
            };
        };
    };
};

class cfgMagazines
{
    class LIB_10Rnd_770x56;

    class SiP_enfield_10_mag: LIB_10Rnd_770x56
    {
        author = "Letlev";
        displayName = "2x 5Rnd .303 Lee-Enfield Clips";
        picture = "\NORTH\NF_weapons\nor\smle\data\UI\SMLE_mag_CA.paa";
        model = "\NORTH\NF_weapons\nor\smle\smle_mag.p3d";
        ammo = "vn_77x56";
    };
    class SiP_enfield_10_t_mag: SiP_enfield_10_mag
    {
        displayName = "2x 5Rnd .303 Lee-Enfield Clips (Tracer)";
        tracersEvery = 1;
        lastRoundsTracer = 10;
    };
};