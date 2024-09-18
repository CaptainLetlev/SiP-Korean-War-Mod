class cfgPatches
{
    class SiP_Patch_btr_40
    {
        addonRootClass = "SiP_Patch_Communist_vehicles";
        requiredAddons[] = 
        {
            "wheeled_f_vietnam_c"
        };
        units[] = 
        {
            "SiP_btr_40",
            "SiP_btr_40_w"
        };
        weapons[] = {};
    };
};

class cfgVehicles
{
    class vn_wheeled_car_base;
    class vn_wheeled_btr40_base: vn_wheeled_car_base
    {
        class Turrets;
    };
    class vn_wheeled_btr40_mg_02_base: vn_wheeled_btr40_base
    {
        class Turrets: Turrets
        {
            class MainTurret;
        };
        class AnimationSources;
    };

    class SiP_btr_40: vn_wheeled_btr40_mg_02_base
    {
        author = "Letlev";
        displayname = "BTR-40 (MG)";
        scope = 2;
        scopeCurator = 2;
        side = 0;
        faction = "SiP_PVA";
        editorSubcategory = "EdSubcat_APCs";
        crew = "SiP_PVA_driver";
        weapons[] = {"vn_CivVanHorn1"}; 
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                soundAttenuationTurret = "vn_openvehicle_attenuation";
                weapons[] = {"SiP_dshkm_weapon"};
                magazines[] = 
                {
                    "SiP_dshkm_v_100_mag",
                    "SiP_dshkm_v_100_mag",
                    "SiP_dshkm_v_100_mag",
                    "SiP_dshkm_v_100_mag",
                    "SiP_dshkm_v_100_mag",
                    "SiP_dshkm_v_100_mag",
                    "SiP_dshkm_v_100_mag",
                    "SiP_dshkm_v_100_mag"
                };
                gunnerType = "SiP_PVA_gunner";
            };
        };
        class AnimationSources: AnimationSources
        {
            class mg1_reload
            {
                source = "reload";
                weapon = "SiP_dshkm_weapon";
            };
            class mg1_muzzle_source
            {
                source = "user";
                animperiod = 0.1;
                initphase = 0;
            };
            class mg1_muzzleflash_rot: mg1_reload
            {
                source = "ammoRandom";
            };
            class mg1_reloadmagazine: mg1_reload
            {
                source = "reloadMagazine";
            };
            class mg1_revolving: mg1_reload
            {
                source = "revolving";
            };
        };
        class TransportMagazines
        {
            class _xx_SiP_Chinese_Frag_mag
            {
                magazine = "SiP_Chinese_Frag_mag";
                count = 8;
            };
            class _xx_vn_rg42_grenade_mag
            {
                magazine = "vn_rg42_grenade_mag";
                count = 4;
            };
            class _xx_vn_ppsh41_71_mag
            {
                magazine = "vn_ppsh41_71_mag";
                count = 3;
            };
        };
        class TransportWeapons
        {
            class _xx_vn_ppsh41
            {
                weapon = "vn_ppsh41";
                count = 1;
            };
        };
        class TransportItems
        {
            class _xx_vn_o_item_firstaidkit
            {
                name = "vn_o_item_firstaidkit";
                count = 2;
            };
            class _xx_vn_b_item_toolkit
            {
                name = "vn_b_item_toolkit";
                count = 1;
            };
        };
    };

    class SiP_btr_40_w: SiP_btr_40
    {
        faction = "SiP_PVA_w";
        editorCategory = "SiP_PVA_w_Editor_Category";
        crew = "SiP_PVA_Driver_w";
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                gunnerType = "SiP_PVA_gunner_w";
            };
        };
    };
};