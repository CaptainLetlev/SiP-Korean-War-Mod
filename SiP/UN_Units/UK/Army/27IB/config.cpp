class cfgPatches
{
    class SiP_Patch_uk_27ib_units
    {
        Name = "Suicide Is Painless - Korean War Mod - BCFK 27th Infantry Brigade Units";
        addonRootClass = "SiP_Patch_uk_units";
        requiredAddons[] = 
        {
            "A3_Data_F",
            "A3_Characters_F",
            "WW2_Assets_c_Characters_Americans_c_US_Airborne",
            "simc_ua_inf_44",
            "SiP_Patch_us_army_units"
        };
        units[] = 
        {
            "SiP_BCFK_27ib_rifleman1",
            "SiP_BCFK_27ib_rifleman2",
            "SiP_BCFK_27ib_smg1",
            "SiP_BCFK_27ib_smg2",
            "SiP_BCFK_27ib_autorifleman",
            "SiP_BCFK_27ib_sniper",
            "SiP_BCFK_27ib_piat",
            "SiP_BCFK_27ib_m9_bazooka",
            "SiP_BCFK_27ib_rto",
            "SiP_BCFK_27ib_cpl",
            "SiP_BCFK_27ib_sgt",
            "SiP_BCFK_27ib_csgt",
            "SiP_BCFK_27ib_2lt",
            "SiP_BCFK_27ib_lt",
            "SiP_BCFK_driver",
            "SiP_BCFK_gunner",
            "SiP_BCFK_tank_driver",
            "SiP_BCFK_tank_bow",
            "SiP_BCFK_tank_gunner",
            "SiP_BCFK_tank_commander"
        };
        weapons[] = {};
    };
};

class CfgVehicles
{
    class SiP_US_Army_rifleman1;
    class SiP_US_Army_tank_driver;

    class SiP_BCFK_27ib_rifleman1: SiP_US_Army_rifleman1
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
        editorSubcategory = "SiP_27ib_Editor_Subcategory";
        genericNames = "EnglishMen";
        model = "\simc_uaf_44\m43_trop.p3d";
        hiddenSelections[] = 
        {
            "camo",
            "camo2",
            "rank",
            "falg",
            "falg_left",
            "insignia",
            "bots",
            "rank2"
        };
        hiddenSelectionsTextures[] = 
        {
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa",
            "",
            "",
            "",
            "\SiP\Addons\sip_uk_army_units\27IB\patches\27IN_Brig_ca.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bot_od7_co.paa",
            ""
        };
        weapons[] = 
        {
            "SiP_lee_enfield_no4_mki",
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
            "SiP_lee_enfield_no4_mki",
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
            "fow_h_uk_jungle_hat_03",1,"H_LIB_UK_Helmet_Mk3_Net",1};
        headgearList[] = 
        {
            "fow_h_uk_jungle_hat_03",0.5,"H_LIB_UK_Helmet_Mk3_Net",0.5};
        SPE_RandomizeHeadgear = 1;
        linkedItems[] = 
        {
            "fow_h_uk_jungle_hat_03",
            "SiP_P37_uk_vest",
            "Big_Three_uk_fieldgear_od",
            "vn_b_item_map",
            "vn_b_item_compass",
            "vn_b_item_watch"
        };
        respawnLinkedItems[] = 
        {
            "fow_h_uk_jungle_hat_03",
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
        uniformClass = "SiP_m50_bush_jacket_uk_uniform";
    };
    class SiP_BCFK_27ib_rifleman2: SiP_BCFK_27ib_rifleman1
    {
        displayName = "Rifleman (Carbine)";
        weapons[] = 
        {
            "vn_m1carbine",
            "Throw",
            "Put"
        };
        magazines[] = 
        {
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag"
        };
        respawnWeapons[] = 
        {
            "vn_m1carbine",
            "Throw",
            "Put"
        };
        respawnMagazines[] = 
        {
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag"
        };
        items[] = 
        {
            "vn_b_carbine",
            "fow_i_fak_uk",
            "fow_i_fak_uk",
            "fow_i_fak_uk"
        };
        respawnItems[] = 
        {
            "vn_b_carbine",
            "fow_i_fak_uk",
            "fow_i_fak_uk",
            "fow_i_fak_uk"
        };
    };
    class SiP_BCFK_27ib_smg1: SiP_BCFK_27ib_rifleman1
    {
        displayName = "SMG-Soldier (Thompson)";
        cost = 115000;
        threat[] = {0.7,0.1,0.1};
        icon = "iconManRecon";
        role = "Assault";
        hiddenSelectionsTextures[] = 
        {
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\ranks\uk_rank_Lcpl_ca.paa",
            "",
            "",
            "\SiP\Addons\sip_uk_army_units\27IB\patches\27IN_Brig_ca.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bot_od7_co.paa",
            ""
        };
        uniformClass = "SiP_m50_bush_jacket_uk_lcpl";
        weapons[] = 
        {
            "vn_m1928a1_tommy",
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
            "vn_m1928a1_tommy",
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
        backpack = "SiP_bcfk_37_backpack_tommy";
    };
    class SiP_BCFK_27ib_smg2: SiP_BCFK_27ib_smg1
    {
        displayName = "SMG-Soldier (Sten)";
        weapons[] = 
        {
            "SPE_Sten_Mk2",
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
            "SPE_Sten_Mk2",
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
    class SiP_BCFK_27ib_autorifleman: SiP_BCFK_27ib_smg1
    {
        displayName = "Bren-Gunner";
        icon = "iconManSMG";
        role = "MachineGunner";
        cost = 125000;
        threat[] = {1,0.1,0.4};
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
        backpack = "SiP_bcfk_37_backpack_bren";
    };
    class SiP_BCFK_27ib_sniper: SiP_BCFK_27ib_rifleman1
    {
        displayName = "Sniper";
        role = "Marksman";
        cost = 350000;
        accuracy = 3.9;
        weapons[] = 
        {
            "SiP_lee_enfield_no4_mkI_sniper_scope",
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
            "SiP_lee_enfield_no4_mkI_sniper_scope",
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
    class SiP_BCFK_27ib_piat: SiP_BCFK_27ib_rifleman1
    {
        displayName = "AT Soldier (PIAT)";
        icon = "iconManAT";
        role = "MissileSpecialist";
        cost = 190000;
        threat[] = {0.7,0.7,0.1};
        weapons[] = 
        {
            "SiP_sten_mkv",
            "LIB_PIAT",
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
            "vn_sten_mag"
        };
        respawnWeapons[] = 
        {
            "SiP_sten_mkv",
            "LIB_PIAT",
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
            "vn_sten_mag"
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
        backpack = "SiP_bcfk_m1945_packboard_piat";
    };
    class SiP_BCFK_27ib_m9_bazooka: SiP_BCFK_27ib_piat
    {
        displayName = "AT Soldier (M9)";
        weapons[] = 
        {
            "SPE_Sten_Mk2",
            "SPE_M9A1_Bazooka",
            "Throw",
            "Put"
        };
        respawnWeapons[] = 
        {
            "SPE_Sten_Mk2",
            "SPE_M9A1_Bazooka",
            "Throw",
            "Put"
        };
        backpack = "SiP_m1945_packboard_m9bazooka";
    };
    class SiP_BCFK_27ib_rto: SiP_BCFK_27ib_rifleman1
    {
        displayName = "Radio Operator";
        icon = "iconManRTO";
        cost = 400000;
        backpack = "SiP_SCR300_radio_uk";
    };
    class SiP_BCFK_27ib_cpl: SiP_BCFK_27ib_rifleman1
    {
        scope = 2;
        displayName = "Corporal";
        icon = "iconManLeader";
        cost = 115000;
        uniformClass = "SiP_m50_bush_jacket_uk_cpl";
        hiddenSelectionsTextures[] = 
        {
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\ranks\uk_rank_cpl_ca.paa",
            "",
            "",
            "\SiP\Addons\sip_uk_army_units\27IB\patches\27IN_Brig_ca.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bot_od7_co.paa",
            ""
        };
        weapons[] = 
        {
            "SiP_lee_enfield_no4_mki",
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
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag"
        };
        respawnWeapons[] = 
        {
            "SiP_lee_enfield_no4_mki",
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
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_enfield_10_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag"
        };
        linkedItems[] = 
        {
            "fow_h_uk_jungle_hat_03",
            "V_LIB_UK_P37_Holster_Blanco",
            "vn_b_item_map",
            "vn_b_item_compass",
            "vn_b_item_watch"
        };
        respawnLinkedItems[] = 
        {
            "fow_h_uk_jungle_hat_03",
            "V_LIB_UK_P37_Holster_Blanco",
            "vn_b_item_map",
            "vn_b_item_compass",
            "vn_b_item_watch"
        };
    };
    class SiP_BCFK_27ib_sgt: SiP_BCFK_27ib_cpl
    {
        displayName = "Sergeant";
        cost = 200000;
        uniformClass = "SiP_m50_bush_jacket_uk_sgt";
        hiddenSelectionsTextures[] = 
        {
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\ranks\uk_rank_sgt_ca.paa",
            "",
            "",
            "\SiP\Addons\sip_uk_army_units\27IB\patches\27IN_Brig_ca.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bot_od7_co.paa",
            ""
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
    class SiP_BCFK_27ib_csgt: SiP_BCFK_27ib_cpl
    {
        displayName = "Colour Sergeant";
        uniformClass = "SiP_m50_bush_jacket_uk_csgt";
        hiddenSelectionsTextures[] = 
        {
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\ranks\uk_rank_csgt_ca.paa",
            "",
            "",
            "\SiP\Addons\sip_uk_army_units\27IB\patches\27IN_Brig_ca.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bot_od7_co.paa",
            ""
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
        backpack = "SiP_bcfk_37_backpack_tommy";
    };
    class SiP_BCFK_27ib_2lt: SiP_BCFK_27ib_sgt
    {
        displayName = "2nd Lieutenant";
        icon = "iconManOfficer";
        cost = 450000;
        uniformClass = "SiP_m50_bush_jacket_uk_2lt";
        hiddenSelectionsTextures[] = 
        {
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa",
            "",
            "",
            "",
            "\SiP\Addons\sip_uk_army_units\27IB\patches\27IN_Brig_ca.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bot_od7_co.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\ranks\uk_rank_2lt_ca.paa"
        };
        weapons[] = 
        {
            "SiP_lee_enfield_no4_mki",
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
            "SiP_lee_enfield_no4_mki",
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
            "fow_h_uk_jungle_hat_03",
            "V_LIB_UK_P37_Officer_Blanco",
            "vn_b_item_map",
            "vn_b_item_compass",
            "vn_b_item_watch"
        };
        respawnLinkedItems[] = 
        {
            "fow_h_uk_jungle_hat_03",
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
        backpack = "SiP_bcfk_37_backpack";
    };
    class SiP_BCFK_27ib_lt: SiP_BCFK_27ib_2lt
    {
        displayName = "Lieutenant";
        cost = 500000;
        uniformClass = "SiP_m50_bush_jacket_uk_lt";
        hiddenSelectionsTextures[] = 
        {
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa",
            "",
            "",
            "",
            "\SiP\Addons\sip_uk_army_units\27IB\patches\27IN_Brig_ca.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bot_od7_co.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\ranks\uk_rank_lt_ca.paa"
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
        backpack = "SiP_bcfk_37_backpack_sten2";
    };
    
    class SiP_BCFK_driver: SiP_BCFK_27ib_rifleman1
    {
        displayName = "Driver";
        role = "Rifleman";
        icon = "iconMan";
        editorSubcategory = "SiP_Vehicle_Crews_Editor_Subcategory";
        hiddenSelectionsTextures[] = 
        {
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa",
            "",
            "",
            "",
            "",
            "\SiP\Addons\sip_uk_army_units\27IB\patches\27IN_Brig_ca.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bot_od7_co.paa",
            ""
        };
        backpack = "";
    };
    class SiP_BCFK_gunner: SiP_BCFK_driver
    {
        displayName = "Gunner";
        weapons[] = 
        {
            "vn_l2a3_f",
            "Throw",
            "Put"
        };
        magazines[] = 
        {
            "vn_f1_smg_t_mag",
            "vn_f1_smg_t_mag",
            "vn_f1_smg_t_mag",
            "vn_f1_smg_t_mag",
            "vn_f1_smg_t_mag",
            "vn_f1_smg_t_mag",
            "vn_f1_smg_t_mag",
            "vn_f1_smg_t_mag",
            "vn_f1_smg_t_mag",
            "vn_f1_smg_t_mag",
            "vn_f1_smg_t_mag"
        };
        respawnWeapons[] = 
        {
            "vn_l2a3_f",
            "Throw",
            "Put"
        };
        respawnMagazines[] = 
        {
            "vn_f1_smg_t_mag",
            "vn_f1_smg_t_mag",
            "vn_f1_smg_t_mag",
            "vn_f1_smg_t_mag",
            "vn_f1_smg_t_mag",
            "vn_f1_smg_t_mag",
            "vn_f1_smg_t_mag",
            "vn_f1_smg_t_mag",
            "vn_f1_smg_t_mag",
            "vn_f1_smg_t_mag",
            "vn_f1_smg_t_mag"
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
    };
    
    class SiP_BCFK_tank_driver: SiP_US_Army_tank_driver
    {
        faction = "SiP_BCFK";
        displayName = "Tank Driver";
        identityTypes[] = 
        {
            "LanguageENGB_F",
            "Head_EURO",
            "LIB_Glasses"
        };
        model = "simc_uaf_44\swatter_late.p3d";
        editorCategory = "SiP_BCFK_Editor_Category";
        uniformClass = "SiP_m50_tanker";
        hiddenSelections[] = 
        {
            "camo",
            "bots"
        };
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\swatter_co.paa",
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
        headgearList[] = 
        {
            "fow_h_uk_beret_rtr"
        };
        linkedItems[] = 
        {
            "fow_h_uk_beret_rtr",
            "SiP_P37_crew_vest",
            "vn_b_item_map",
            "vn_b_item_compass",
            "vn_b_item_watch",
            "vn_b_item_radio_urc10",
            "nomex_3_addon"
        };
        respawnLinkedItems[] = 
        {
            "fow_h_uk_beret_rtr",
            "SiP_P37_crew_vest",
            "vn_b_item_map",
            "vn_b_item_compass",
            "vn_b_item_watch",
            "vn_b_item_radio_urc10",
            "nomex_3_addon"
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
        backpack = "";
    };
    class SiP_BCFK_tank_bow: SiP_BCFK_tank_driver
    {
        displayName = "Tank Bow Gunner";
    };
    class SiP_BCFK_tank_gunner: SiP_BCFK_tank_bow
    {
        displayName = "Tank Gunner";
    };
    class SiP_BCFK_tank_commander: SiP_BCFK_tank_driver
    {
        displayName = "Tank Commander";
        weapons[] = 
        {
            "vn_l2a3_f",
            "SiP_webley_mkvi",
            "Throw",
            "Put"
        };
        magazines[] = 
        {
            "vn_f1_smg_t_mag",
            "vn_f1_smg_t_mag",
            "vn_f1_smg_t_mag",
            "vn_f1_smg_t_mag",
            "vn_f1_smg_t_mag",
            "vn_f1_smg_t_mag",
            "vn_f1_smg_t_mag",
            "vn_f1_smg_t_mag",
            "vn_f1_smg_t_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag"
        };
        respawnWeapons[] = 
        {
            "vn_l2a3_f",
            "SiP_webley_mkvi",
            "Throw",
            "Put"
        };
        respawnMagazines[] = 
        {
            "vn_f1_smg_t_mag",
            "vn_f1_smg_t_mag",
            "vn_f1_smg_t_mag",
            "vn_f1_smg_t_mag",
            "vn_f1_smg_t_mag",
            "vn_f1_smg_t_mag",
            "vn_f1_smg_t_mag",
            "vn_f1_smg_t_mag",
            "vn_f1_smg_t_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag",
            "SiP_webley_6_mag"
        };
        headgearList[] = 
        {
            "fow_h_uk_beret_rtr_headset"
        };
        linkedItems[] = 
        {
            "fow_h_uk_beret_rtr_headset",
            "SiP_P37_crew_vest",
            "vn_b_item_map",
            "vn_b_item_compass",
            "vn_b_item_watch",
            "vn_b_item_radio_urc10",
            "nomex_3_addon"
        };
        respawnLinkedItems[] = 
        {
            "fow_h_uk_beret_rtr_headset",
            "SiP_P37_crew_vest",
            "vn_b_item_map",
            "vn_b_item_compass",
            "vn_b_item_watch",
            "vn_b_item_radio_urc10",
            "nomex_3_addon"
        };
    };
};

class CfgGroups
{
    class West
    {
        class SiP_BCFK
        {
            name = "BCF [Korea]";
            class SiP_27IB_Infantry_Sections
            {
                name = "27th Infantry Brigade";
                class SiP_27IB_Rifle_Section_1
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
                        vehicle = "SiP_BCFK_27ib_cpl";
                    };
                    class unit_2
                    {
                        side = 1;
                        rank = "CORPORAL";
                        position[] = {0,-10,0};
                        vehicle = "SiP_BCFK_27ib_smg1";
                    };
                    class unit_3
                    {
                        side = 1;
                        rank = "CORPORAL";
                        position[] = {0,-15,0};
                        vehicle = "SiP_BCFK_27ib_autorifleman";
                    };
                    class unit_4
                    {
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {0,-20,0};
                        vehicle = "SiP_BCFK_27ib_rifleman1";
                    };
                    class unit_5
                    {
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {0,-25,0};
                        vehicle = "SiP_BCFK_27ib_rifleman1";
                    };
                    class unit_6
                    {
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {0,-30,0};
                        vehicle = "SiP_BCFK_27ib_rifleman2";
                    };
                    class unit_7
                    {
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {0,-35,0};
                        vehicle = "SiP_BCFK_27ib_rifleman1";
                    };
                    class unit_8
                    {
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {0,-40,0};
                        vehicle = "SiP_BCFK_27ib_rifleman1";
                    };
                    class unit_9
                    {
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {0,-45,0};
                        vehicle = "SiP_BCFK_27ib_rifleman2";
                    };
                    class unit_10
                    {
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {0,-50,0};
                        vehicle = "SiP_BCFK_27ib_rifleman1";
                    };
                    class unit_11
                    {
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {0,-55,0};
                        vehicle = "SiP_BCFK_27ib_piat";
                    };
                };
                class SiP_27IB_Rifle_Section_2
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
                        vehicle = "SiP_BCFK_27ib_sgt";
                    };
                    class unit_2
                    {
                        side = 1;
                        rank = "CORPORAL";
                        position[] = {0,-10,0};
                        vehicle = "SiP_BCFK_27ib_cpl";
                    };
                    class unit_3
                    {
                        side = 1;
                        rank = "CORPORAL";
                        position[] = {0,-15,0};
                        vehicle = "SiP_BCFK_27ib_autorifleman";
                    };
                    class unit_4
                    {
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {0,-20,0};
                        vehicle = "SiP_BCFK_27ib_rifleman1";
                    };
                    class unit_5
                    {
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {0,-25,0};
                        vehicle = "SiP_BCFK_27ib_rifleman1";
                    };
                    class unit_6
                    {
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {0,-30,0};
                        vehicle = "SiP_BCFK_27ib_rifleman1";
                    };
                    class unit_7
                    {
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {0,-35,0};
                        vehicle = "SiP_BCFK_27ib_rifleman1";
                    };
                    class unit_8
                    {
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {0,-40,0};
                        vehicle = "SiP_BCFK_27ib_rifleman1";
                    };
                    class unit_9
                    {
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {0,-45,0};
                        vehicle = "SiP_BCFK_27ib_rifleman1";
                    };
                    class unit_10
                    {
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {0,-50,0};
                        vehicle = "SiP_BCFK_27ib_rifleman1";
                    };
                    class unit_11
                    {
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {0,-55,0};
                        vehicle = "SiP_BCFK_27ib_rifleman1";
                    };
                };
                class SiP_27IB_Rifle_Section_3
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
                        vehicle = "SiP_BCFK_27ib_cpl";
                    };
                    class unit_2
                    {
                        side = 1;
                        rank = "CORPORAL";
                        position[] = {0,-10,0};
                        vehicle = "SiP_BCFK_27ib_smg1";
                    };
                    class unit_3
                    {
                        side = 1;
                        rank = "CORPORAL";
                        position[] = {0,-15,0};
                        vehicle = "SiP_BCFK_27ib_autorifleman";
                    };
                    class unit_4
                    {
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {0,-20,0};
                        vehicle = "SiP_BCFK_27ib_rifleman1";
                    };
                    class unit_5
                    {
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {0,-25,0};
                        vehicle = "SiP_BCFK_27ib_rifleman1";
                    };
                    class unit_6
                    {
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {0,-30,0};
                        vehicle = "SiP_BCFK_27ib_rifleman2";
                    };
                    class unit_7
                    {
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {0,-35,0};
                        vehicle = "SiP_BCFK_27ib_rifleman1";
                    };
                    class unit_8
                    {
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {0,-40,0};
                        vehicle = "SiP_BCFK_27ib_rifleman2";
                    };
                    class unit_9
                    {
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {0,-45,0};
                        vehicle = "SiP_BCFK_27ib_rifleman1";
                    };
                    class unit_10
                    {
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {0,-50,0};
                        vehicle = "SiP_BCFK_27ib_rifleman1";
                    };
                    class unit_11
                    {
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {0,-55,0};
                        vehicle = "SiP_BCFK_27ib_m9_bazooka";
                    };
                };
            };
            class SiP_Vehicle_Crews
            {
                name = "Vehicle Crews";
                class BCFK_UK_Tank_Crew
                {
                    name = "British Tank Crew";
                    side = 1;
                    faction = "SiP_BCFK";
                    rarityGroup = 0.8;
                    class Unit1
                    {
                        side = 1;
                        vehicle = "SiP_BCFK_tank_driver";
                        rank = "PRIVATE";
                        position[] = {0,5,0};
                    };
                    class Unit2
                    {
                        side = 1;
                        vehicle = "SiP_BCFK_tank_gunner";
                        rank = "CORPORAL";
                        position[] = {3,0,0};
                    };
                    class Unit3
                    {
                        side = 1;
                        vehicle = "SiP_BCFK_tank_commander";
                        rank = "SERGEANT";
                        position[] = {5,0,0};
                    };
                    class Unit4
                    {
                        side = 1;
                        vehicle = "SiP_BCFK_tank_gunner";
                        rank = "PRIVATE";
                        position[] = {7,0,0};
                    };
                    class Unit5
                    {
                        side = 1;
                        vehicle = "SiP_BCFK_tank_bow";
                        rank = "PRIVATE";
                        position[] = {9,0,0};
                    };
                };
                class BCFK_vehicle_Crew
                {
                    name = "Standard Vehicle Crew";
                    side = 1;
                    faction = "SiP_BCFK";
                    rarityGroup = 0.8;
                    class Unit1
                    {
                        side = 1;
                        vehicle = "SiP_BCFK_driver";
                        rank = "PRIVATE";
                        position[] = {0,5,0};
                    };
                    class Unit2
                    {
                        side = 1;
                        vehicle = "SiP_BCFK_gunner";
                        rank = "PRIVATE";
                        position[] = {3,0,0};
                    };
                };
            };
        };
    };
};