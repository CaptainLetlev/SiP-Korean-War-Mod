class cfgPatches
{
    class SiP_Patch_uk_3RAR_units
    {
        Name = "Suicide Is Painless - Korean War Mod - BCFK - 3rd Battalion - Royal Austrailian Regiment Units";
        addonRootClass = "SiP_Patch_uk_units";
        requiredAddons[] = 
        {
            "A3_Data_F",
            "A3_Characters_F",
            "simc_ua_inf_44",
            "SiP_Patch_us_army_units"
        };
        units[] = 
        {
            "SiP_BCFK_3rar_rifleman1",
            "SiP_BCFK_3rar_rifleman2",
            "SiP_BCFK_3rar_smg1",
            "SiP_BCFK_3rar_smg2",
            "SiP_BCFK_3rar_autorifleman",
            "SiP_BCFK_3rar_sniper",
            "SiP_BCFK_3rar_m20bazooka",
            "SiP_BCFK_3rar_rto",
            "SiP_BCFK_3rar_cpl",
            "SiP_BCFK_3rar_sgt",
            "SiP_BCFK_3rar_ssgt",
            "SiP_BCFK_3rar_2lt",
            "SiP_BCFK_3rar_lt"
        };
        weapons[] = {};
    };
};

class CfgVehicles
{
    class SiP_US_Army_rifleman1;
    class SiP_US_Army_tank_driver;

    class SiP_BCFK_3rar_rifleman1: SiP_US_Army_rifleman1
    {
        scope = 2;
        displayName = "Rifleman (Enfield)";
        identityTypes[] = 
        {
            "LanguageENGB_F",
            "Head_EURO"
        };
        faction = "SiP_BCFK";
        editorCategory = "SiP_BCFK_Editor_Category";
        editorSubcategory = "SiP_3bn_rar_Editor_Subcategory";
        genericNames = "EnglishMen";
        model = "simc_uaf_44\m43_legging.p3d";
        hiddenSelections[] = 
        {
            "camo",
            "camo2",
            "rank",
            "falg",
            "falg_left",
            "insignia",
            "bots"
        };
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa",
            "",
            "",
            "",
            "\SiP\Addons\sip_uk_army_units\3RAR\patches\rar_patch_ca.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bot_od7_co.paa"
        };
        weapons[] = 
        {
            "SiP_lee_enfield_no1_mkiii",
            "Throw",
            "Put"
        };
        magazines[] = 
        {
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag"
        };
        respawnWeapons[] = 
        {
            "SiP_lee_enfield_no1_mkiii",
            "Throw",
            "Put"
        };
        respawnMagazines[] = 
        {
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag"
        };
        allowedHeadgear[] = 
        {
            "fow_h_uk_jungle_hat_01",1,
            "fow_h_uk_jungle_hat_02",1
        };
        headgearList[] = 
        {
            "fow_h_uk_jungle_hat_01",0.5,
            "fow_h_uk_jungle_hat_02",0.5
        };
        SPE_RandomizeHeadgear = 1;
        linkedItems[] = 
        {
            "fow_h_uk_jungle_hat_01",
            "SiP_P37_uk_vest",
            "Big_Three_uk_fieldgear_od",
            "vn_b_item_map",
            "vn_b_item_compass",
            "vn_b_item_watch"
        };
        respawnLinkedItems[] = 
        {
            "fow_h_uk_jungle_hat_01",
            "SiP_P37_uk_vest",
            "Big_Three_uk_fieldgear_od",
            "vn_b_item_map",
            "vn_b_item_compass",
            "vn_b_item_watch"
        };
        items[] = 
        {
            "lib_acc_no4_mk2_bayo",
            "fow_i_fak_uk",
            "fow_i_fak_uk",
            "fow_i_fak_uk"
        };
        respawnItems[] = 
        {
            "lib_acc_no4_mk2_bayo",
            "fow_i_fak_uk",
            "fow_i_fak_uk",
            "fow_i_fak_uk"
        };
        backpack = "SiP_bcfk_37_backpack";
        uniformClass = "SiP_m43_rar_uniform";
    };
    class SiP_BCFK_3rar_rifleman2: SiP_BCFK_3rar_rifleman1
    {
        displayName = "Rifleman (Garand)";
        weapons[] = 
        {
            "vn_m1_garand",
            "Throw",
            "Put"
        };
        magazines[] = 
        {
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag"
        };
        respawnWeapons[] = 
        {
            "vn_m1_garand",
            "Throw",
            "Put"
        };
        respawnMagazines[] = 
        {
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag"
        };
        items[] = 
        {
            "vn_b_m1_garand",
            "fow_i_fak_uk",
            "fow_i_fak_uk",
            "fow_i_fak_uk"
        };
        respawnItems[] = 
        {
            "vn_b_m1_garand",
            "fow_i_fak_uk",
            "fow_i_fak_uk",
            "fow_i_fak_uk"
        };
    };
    class SiP_BCFK_3rar_smg1: SiP_BCFK_3rar_rifleman1
    {
        displayName = "SMG-Soldier (Thompson)";
        cost = 115000;
        threat[] = {0.7,0.1,0.1};
        icon = "iconManRecon";
        role = "Assault";
        weapons[] = 
        {
            "vn_m1a1_tommy",
            "Throw",
            "Put"
        };
        magazines[] = 
        {
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag"
        };
        respawnWeapons[] = 
        {
            "vn_m1a1_tommy",
            "Throw",
            "Put"
        };
        respawnMagazines[] = 
        {
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag"
        };
        items[] = 
        {
            "fow_i_fak_uk",
            "fow_i_fak_uk",
            "fow_i_fak_uk"
        };
        respawnItems[] = 
        {
            "fow_i_fak_uk",
            "fow_i_fak_uk",
            "fow_i_fak_uk"
        };
        backpack = "SiP_bcfk_44_backpack_tommy";
    };
    class SiP_BCFK_3rar_smg2: SiP_BCFK_3rar_smg1
    {
        displayName = "SMG-Soldier (Sten)";
        weapons[] = 
        {
            "SiP_sten_mkv",
            "Throw",
            "Put"
        };
        magazines[] = 
        {
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag"
        };
        respawnWeapons[] = 
        {
            "SiP_sten_mkv",
            "Throw",
            "Put"
        };
        respawnMagazines[] = 
        {
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag"
        };
        backpack = "SiP_bcfk_37_backpack_sten";
    };
    class SiP_BCFK_3rar_autorifleman: SiP_BCFK_3rar_smg1
    {
        displayName = "Bren-Gunner";
        icon = "iconManSMG";
        role = "MachineGunner";
        cost = 125000;
        threat[] = {1,0.1,0.4};
        uniformClass = "SiP_m43_rar_lcpl";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\ranks\uk_rank_Lcpl_ca.paa",
            "",
            "",
            "\SiP\Addons\sip_uk_army_units\3RAR\patches\rar_patch_ca.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bot_od7_co.paa"
        };
        weapons[] = 
        {
            "SPE_LMG_303_Mk2",
            "Throw",
            "Put"
        };
        magazines[] = 
        {
            "SPE_30Rnd_770x56",
            "SPE_30Rnd_770x56",
            "SPE_30Rnd_770x56",
            "SPE_30Rnd_770x56",
            "SPE_30Rnd_770x56",
            "SPE_30Rnd_770x56",
            "SPE_30Rnd_770x56",
            "SPE_30Rnd_770x56",
            "SPE_30Rnd_770x56",
            "SPE_30Rnd_770x56",
            "SPE_30Rnd_770x56"
        };
        respawnWeapons[] = 
        {
            "SPE_LMG_303_Mk2",
            "Throw",
            "Put"
        };
        respawnMagazines[] = 
        {
            "SPE_30Rnd_770x56",
            "SPE_30Rnd_770x56",
            "SPE_30Rnd_770x56",
            "SPE_30Rnd_770x56",
            "SPE_30Rnd_770x56",
            "SPE_30Rnd_770x56",
            "SPE_30Rnd_770x56",
            "SPE_30Rnd_770x56",
            "SPE_30Rnd_770x56",
            "SPE_30Rnd_770x56",
            "SPE_30Rnd_770x56"
        };
        backpack = "SiP_bcfk_44_backpack_bren";
    };
    class SiP_BCFK_3rar_sniper: SiP_BCFK_3rar_rifleman1
    {
        displayName = "Sniper";
        role = "Marksman";
        cost = 350000;
        accuracy = 3.9;
        weapons[] = 
        {
            "SiP_m1c_garand_scope",
            "Throw",
            "Put"
        };
        magazines[] = 
        {
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag"
        };
        respawnWeapons[] = 
        {
            "SiP_m1c_garand_scope",
            "Throw",
            "Put"
        };
        respawnMagazines[] = 
        {
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag"
        };
        items[] = 
        {
            "fow_i_fak_uk",
            "fow_i_fak_uk",
            "fow_i_fak_uk"
        };
        respawnItems[] = 
        {
            "fow_i_fak_uk",
            "fow_i_fak_uk",
            "fow_i_fak_uk"
        };
        backpack = "SiP_bcfk_37_backpack";
    };
    class SiP_BCFK_3rar_m20bazooka: SiP_BCFK_3rar_rifleman1
    {
        displayName = "AT Soldier (Bazooka)";
        icon = "iconManAT";
        role = "MissileSpecialist";
        cost = 190000;
        threat[] = {0.7,0.7,0.1};
        weapons[] = 
        {
            "SiP_sten_mkv",
            "vn_m20a1b1_01",
            "Throw",
            "Put"
        };
        magazines[] = 
        {
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_m20a1b1_heat_mag"
        };
        respawnWeapons[] = 
        {
            "SiP_sten_mkv",
            "vn_m20a1b1_01",
            "Throw",
            "Put"
        };
        respawnMagazines[] = 
        {
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_m20a1b1_heat_mag"
        };
        items[] = 
        {
            "fow_i_fak_uk",
            "fow_i_fak_uk",
            "fow_i_fak_uk"
        };
        respawnItems[] = 
        {
            "fow_i_fak_uk",
            "fow_i_fak_uk",
            "fow_i_fak_uk"
        };
        backpack = "SiP_m1945_packboard_m20bazooka_full";
    };
    class SiP_BCFK_3rar_rto: SiP_BCFK_3rar_rifleman1
    {
        displayName = "Radio Operator";
        icon = "iconManRTO";
        cost = 400000;
        backpack = "SiP_SCR300_radio_uk";
    };
    class SiP_BCFK_3rar_cpl: SiP_BCFK_3rar_rifleman1
    {
        scope = 2;
        displayName = "Corporal";
        icon = "iconManLeader";
        cost = 115000;
        uniformClass = "SiP_m43_rar_cpl";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\ranks\uk_rank_cpl_ca.paa",
            "",
            "",
            "\SiP\Addons\sip_uk_army_units\3RAR\patches\rar_patch_ca.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bot_od7_co.paa"
        };
        weapons[] = 
        {
            "vn_m1_garand",
            "SiP_webley_mkvi",
            "Throw",
            "Put"
        };
        magazines[] = 
        {
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag"
        };
        respawnWeapons[] = 
        {
            "vn_m1_garand",
            "SiP_webley_mkvi",
            "Throw",
            "Put"
        };
        respawnMagazines[] = 
        {
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag"
        };
        linkedItems[] = 
        {
            "fow_h_uk_jungle_hat_01",
            "V_LIB_UK_P37_Holster_Blanco",
            "vn_b_item_map",
            "vn_b_item_compass",
            "vn_b_item_watch"
        };
        respawnLinkedItems[] = 
        {
            "fow_h_uk_jungle_hat_01",
            "V_LIB_UK_P37_Holster_Blanco",
            "vn_b_item_map",
            "vn_b_item_compass",
            "vn_b_item_watch"
        };
    };
    class SiP_BCFK_3rar_sgt: SiP_BCFK_3rar_cpl
    {
        displayName = "Sergeant";
        cost = 200000;
        uniformClass = "SiP_m43_rar_sgt";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\ranks\uk_rank_sgt_ca.paa",
            "",
            "",
            "\SiP\Addons\sip_uk_army_units\3RAR\patches\rar_patch_ca.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bot_od7_co.paa"
        };
        weapons[] = 
        {
            "SiP_sten_mkv",
            "SiP_webley_mkvi",
            "Throw",
            "Put"
        };
        magazines[] = 
        {
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag"
        };
        respawnWeapons[] = 
        {
            "SiP_sten_mkv",
            "SiP_webley_mkvi",
            "Throw",
            "Put"
        };
        respawnMagazines[] = 
        {
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag"
        };
        items[] = 
        {
            "vn_b_item_firstaidkit"
        };
        respawnItems[] = 
        {
            "vn_b_item_firstaidkit"
        };
        backpack = "SiP_bcfk_37_backpack_sten";
    };
    class SiP_BCFK_3rar_ssgt: SiP_BCFK_3rar_cpl
    {
        displayName = "Colour Sergeant";
        uniformClass = "SiP_m43_rar_ssgt";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\ranks\uk_rank_csgt_ca.paa",
            "",
            "",
            "\SiP\Addons\sip_uk_army_units\3RAR\patches\rar_patch_ca.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bot_od7_co.paa"
        };
        weapons[] = 
        {
            "vn_m1928a1_tommy",
            "SiP_webley_mkvi",
            "Throw",
            "Put"
        };
        magazines[] = 
        {
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag"
        };
        respawnWeapons[] = 
        {
            "vn_m1928a1_tommy",
            "SiP_webley_mkvi",
            "Throw",
            "Put"
        };
        respawnMagazines[] = 
        {
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag"
        };
        backpack = "SiP_bcfk_44_backpack_tommy";
    };
    class SiP_BCFK_3rar_2lt: SiP_BCFK_3rar_sgt
    {
        displayName = "2nd Lieutenant";
        icon = "iconManOfficer";
        cost = 450000;
        hiddenSelections[] = 
        {
            "camo",
            "camo2",
            "rank2",
            "falg",
            "falg_left",
            "insignia",
            "bots"
        };
        uniformClass = "SiP_m43_rar_2lt";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\ranks\uk_rank_2lt_ca.paa",
            "",
            "",
            "\SiP\Addons\sip_uk_army_units\3RAR\patches\rar_patch_ca.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bot_od7_co.paa"
        };
        weapons[] = 
        {
            "SiP_lee_enfield_no1_mkiii",
            "SiP_webley_mkvi",
            "Throw",
            "Put"
        };
        magazines[] = 
        {
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag"
        };
        respawnWeapons[] = 
        {
            "SiP_lee_enfield_no1_mkiii",
            "SiP_webley_mkvi",
            "Throw",
            "Put"
        };
        respawnMagazines[] = 
        {
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag"
        };
        linkedItems[] = 
        {
            "fow_h_uk_jungle_hat_01",
            "V_LIB_UK_P37_Officer_Blanco",
            "vn_b_item_map",
            "vn_b_item_compass",
            "vn_b_item_watch"
        };
        respawnLinkedItems[] = 
        {
            "fow_h_uk_jungle_hat_01",
            "V_LIB_UK_P37_Officer_Blanco",
            "vn_b_item_map",
            "vn_b_item_compass",
            "vn_b_item_watch"
        };
        items[] = 
        {
            "lib_acc_no4_mk2_bayo",
            "fow_i_fak_uk",
            "fow_i_fak_uk",
            "fow_i_fak_uk"
        };
        respawnItems[] = 
        {
            "lib_acc_no4_mk2_bayo",
            "fow_i_fak_uk",
            "fow_i_fak_uk",
            "fow_i_fak_uk"
        };
        backpack = "SiP_bcfk_44_backpack";
    };
    class SiP_BCFK_3rar_lt: SiP_BCFK_3rar_2lt
    {
        displayName = "Lieutenant";
        cost = 500000;
        uniformClass = "SiP_m43_rar_2lt";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\ranks\uk_rank_lt_ca.paa",
            "",
            "",
            "\SiP\Addons\sip_uk_army_units\3RAR\patches\rar_patch_ca.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bot_od7_co.paa"
        };
        weapons[] = 
        {
            "SiP_sten_mkv",
            "SiP_webley_mkvi",
            "Throw",
            "Put"
        };
        magazines[] = 
        {
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag"
        };
        respawnWeapons[] = 
        {
            "SiP_sten_mkv",
            "SiP_webley_mkvi",
            "Throw",
            "Put"
        };
        respawnMagazines[] = 
        {
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "vn_sten_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag"
        };
        items[] = 
        {
            "fow_i_fak_uk",
            "fow_i_fak_uk",
            "fow_i_fak_uk"
        };
        respawnItems[] = 
        {
            "fow_i_fak_uk",
            "fow_i_fak_uk",
            "fow_i_fak_uk"
        };
        backpack = "SiP_bcfk_44_backpack_sten2";
    };
};

class CfgGroups
{
    class West
    {
        class SiP_BCFK
        {
            name = "BCF [Korea]";
            class SiP_3rar_Infantry_Sections
            {
                name = "3 R.A.R Infantry Sections";
                class SiP_3rar_Rifle_Section_1
                {
                    name = "Infantry Section 1";
                    side = 1;
                    faction = "SiP_BCFK";
                    rarityGroup = 0.8;
                    class unit_1
                    {
                        side = 1;
                        rank = "SERGEANT";
                        position[] = {0,-5,0};
                        vehicle = "SiP_BCFK_3rar_cpl";
                    };
                    class unit_2
                    {
                        side = 1;
                        rank = "CORPORAL";
                        position[] = {0,-10,0};
                        vehicle = "SiP_BCFK_3rar_smg1";
                    };
                    class unit_3
                    {
                        side = 1;
                        rank = "CORPORAL";
                        position[] = {0,-15,0};
                        vehicle = "SiP_BCFK_3rar_autorifleman";
                    };
                    class unit_4
                    {
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {0,-20,0};
                        vehicle = "SiP_BCFK_3rar_rifleman1";
                    };
                    class unit_5
                    {
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {0,-25,0};
                        vehicle = "SiP_BCFK_3rar_rifleman1";
                    };
                    class unit_6
                    {
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {0,-30,0};
                        vehicle = "SiP_BCFK_3rar_rifleman2";
                    };
                    class unit_7
                    {
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {0,-35,0};
                        vehicle = "SiP_BCFK_3rar_rifleman1";
                    };
                    class unit_8
                    {
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {0,-40,0};
                        vehicle = "SiP_BCFK_3rar_rifleman1";
                    };
                    class unit_9
                    {
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {0,-45,0};
                        vehicle = "SiP_BCFK_3rar_rifleman2";
                    };
                    class unit_10
                    {
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {0,-50,0};
                        vehicle = "SiP_BCFK_3rar_rifleman1";
                    };
                    class unit_11
                    {
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {0,-55,0};
                        vehicle = "SiP_BCFK_3rar_m20bazooka";
                    };
                };
                class SiP_3rar_Rifle_Section_2
                {
                    name = "Infantry Section 2";
                    side = 1;
                    faction = "SiP_BCFK";
                    rarityGroup = 0.8;
                    class unit_1
                    {
                        side = 1;
                        rank = "SERGEANT";
                        position[] = {0,-5,0};
                        vehicle = "SiP_BCFK_3rar_sgt";
                    };
                    class unit_2
                    {
                        side = 1;
                        rank = "CORPORAL";
                        position[] = {0,-10,0};
                        vehicle = "SiP_BCFK_3rar_cpl";
                    };
                    class unit_3
                    {
                        side = 1;
                        rank = "CORPORAL";
                        position[] = {0,-15,0};
                        vehicle = "SiP_BCFK_3rar_autorifleman";
                    };
                    class unit_4
                    {
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {0,-20,0};
                        vehicle = "SiP_BCFK_3rar_rifleman1";
                    };
                    class unit_5
                    {
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {0,-25,0};
                        vehicle = "SiP_BCFK_3rar_rifleman1";
                    };
                    class unit_6
                    {
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {0,-30,0};
                        vehicle = "SiP_BCFK_3rar_rifleman1";
                    };
                    class unit_7
                    {
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {0,-35,0};
                        vehicle = "SiP_BCFK_3rar_rifleman1";
                    };
                    class unit_8
                    {
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {0,-40,0};
                        vehicle = "SiP_BCFK_3rar_rifleman1";
                    };
                    class unit_9
                    {
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {0,-45,0};
                        vehicle = "SiP_BCFK_3rar_rifleman1";
                    };
                    class unit_10
                    {
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {0,-50,0};
                        vehicle = "SiP_BCFK_3rar_rifleman1";
                    };
                    class unit_11
                    {
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {0,-55,0};
                        vehicle = "SiP_BCFK_3rar_rifleman1";
                    };
                };
                class SiP_3rar_Rifle_Section_3
                {
                    name = "Infantry Section 3";
                    side = 1;
                    faction = "SiP_BCFK";
                    rarityGroup = 0.8;
                    class unit_1
                    {
                        side = 1;
                        rank = "SERGEANT";
                        position[] = {0,-5,0};
                        vehicle = "SiP_BCFK_3rar_cpl";
                    };
                    class unit_2
                    {
                        side = 1;
                        rank = "CORPORAL";
                        position[] = {0,-10,0};
                        vehicle = "SiP_BCFK_3rar_smg1";
                    };
                    class unit_3
                    {
                        side = 1;
                        rank = "CORPORAL";
                        position[] = {0,-15,0};
                        vehicle = "SiP_BCFK_3rar_autorifleman";
                    };
                    class unit_4
                    {
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {0,-20,0};
                        vehicle = "SiP_BCFK_3rar_rifleman1";
                    };
                    class unit_5
                    {
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {0,-25,0};
                        vehicle = "SiP_BCFK_3rar_rifleman1";
                    };
                    class unit_6
                    {
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {0,-30,0};
                        vehicle = "SiP_BCFK_3rar_rifleman2";
                    };
                    class unit_7
                    {
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {0,-35,0};
                        vehicle = "SiP_BCFK_3rar_rifleman1";
                    };
                    class unit_8
                    {
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {0,-40,0};
                        vehicle = "SiP_BCFK_3rar_rifleman2";
                    };
                    class unit_9
                    {
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {0,-45,0};
                        vehicle = "SiP_BCFK_3rar_rifleman1";
                    };
                    class unit_10
                    {
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {0,-50,0};
                        vehicle = "SiP_BCFK_3rar_rifleman1";
                    };
                    class unit_11
                    {
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {0,-55,0};
                        vehicle = "SiP_BCFK_3rar_m20bazooka";
                    };
                };
            };
        };
    };
};