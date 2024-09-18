class cfgPatches
{
    class SiP_Patch_dshkm_static
    {
        addonRootClass = "SiP_Patch_Communist_vehicles";
        requiredAddons[] = 
        {
            "static_f_vietnam",
            "static_f_vietnam_c",
            "static_f_vietnam_03",
            "static_f_vietnam_03_c",
            "weapons_v_f_vietnam_03"
        };
        units[] = 
        {
            "SiP_dshkm_high_aa_PVA",
            "SiP_dshkm_high_aa_PVA_w"
        };
        weapons[] = 
        {
            "SiP_dshkm_weapon"
        };
        magazines[] = 
        {
            "SiP_dshkm_v_100_mag"
        };
    };
};

class cfgWeapons
{
    class vn_dshkm_v_01;

    class SiP_dshkm_weapon: vn_dshkm_v_01
    {
        magazines[] = {"vn_dshkm_v_50_mag","SiP_dshkm_v_100_mag"};
    };
};

class cfgMagazines
{
    class vn_dshkm_v_50_mag;
    
    class SiP_dshkm_v_100_mag: vn_dshkm_v_50_mag
    {
        count = 100;
    };
};

class cfgVehicles
{
    class vn_static_dp28_high_base;
    class vn_static_dshkm_high_01_base: vn_static_dp28_high_base
    {
        class Turrets;
    };

    class vn_static_dshkm_high_02_base: vn_static_dshkm_high_01_base
    {
        class Turrets: Turrets
        {
            class MainTurret;
        };
        class AnimationSources;
    };

    class SiP_dshkm_high_aa_base: vn_static_dshkm_high_02_base
    {
        scope = 1;
        scopeCurator = 1;
        side = 0;
        author = "Letlev";
        displayName = "DShKM (AA)";
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
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
                    "SiP_dshkm_v_100_mag",
                    "SiP_dshkm_v_100_mag",
                    "SiP_dshkm_v_100_mag"
                };
                ejectDeadGunner = 1;
            };
        };
        class AnimationSources: AnimationSources
        {
            class mg1_reload
            {
                source = "reload";
                weapon = "SiP_dshkm_weapon";
            };
            class mg1_muzzleflash_rot: mg1_reload
            {
                source = "ammorandom";
            };
            class mg1_reloadmagazine: mg1_reload
            {
                source = "reloadmagazine";
            };
            class mg1_revolving: mg1_reload
            {
                source = "revolving";
            };
        };
    };

    class SiP_dshkm_high_aa_PVA: SiP_dshkm_high_aa_base
    {
        scope = 2;
        scopeCurator = 2;
        faction = "SiP_PVA";
        editorSubcategory = "SiP_Machineguns_Editor_Subcategory";
        crew = "SiP_PVA_gunner";
        typicalCargo[] = {"SiP_PVA_gunner"};
    };
    class SiP_dshkm_high_aa_PVA_w: SiP_dshkm_high_aa_PVA
    {
        faction = "SiP_PVA_w";
        editorCategory = "SiP_PVA_w_Editor_Category";
        crew = "SiP_PVA_gunner_w";
        typicalCargo[] = {"SiP_PVA_gunner_w"};
    };
};