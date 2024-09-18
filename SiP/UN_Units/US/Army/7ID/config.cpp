class cfgPatches
{
    class SiP_Patch_us_army_7thID_units
    {
        Name = "Suicide Is Painless - Korean War Mod - US Army 7th Infantry Units";
        addonRootClass = "SiP_Patch_us_units";
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
            "SiP_US_Army_7id_rifleman1",
            "SiP_US_Army_7id_rifleman2",
            "SiP_US_Army_7id_smg1",
            "SiP_US_Army_7id_smg2",
            "SiP_US_Army_7id_flamer",
            "SiP_US_Army_7id_autorifleman",
            "SiP_US_Army_7id_machinegunner",
            "SiP_US_Army_7id_sniper1",
            "SiP_US_Army_7id_sniper2",
            "SiP_US_Army_7id_m9_bazooka",
            "SiP_US_Army_7id_m20_bazooka",
            "SiP_US_Army_7id_shotgunner1",
            "SiP_US_Army_7id_shotgunner2",
            "SiP_US_Army_7id_shotgunner3",
            "SiP_US_Army_7id_grenadier",
            "SiP_US_Army_7id_rto",
            "SiP_US_Army_7id_Corporal",
            "SiP_US_Army_7id_Sergeant",
            "SiP_US_Army_7id_Sergeant_1stclass",
            "SiP_US_Army_7id_Master_Sergeant",
            "SiP_US_Army_7id_1st_Sergeant",
            "SiP_US_Army_7id_2lt",
            "SiP_US_Army_7id_1lt",
            "SiP_US_Army_7id_captain",
            "SiP_US_Army_7id_major",
            "SiP_US_Army_7id_ltcol",
            "SiP_US_Army_7id_col"
        };
        weapons[] = {};
    };
};

class CfgVehicles
{
    class B_Soldier_base_F;
    class SiP_US_Army_rifleman1;

    class SiP_US_Army_7id_rifleman1: SiP_US_Army_rifleman1
    {
        displayName = "Rifleman (Garand)";
        faction = "SiP_US_Army";
        editorSubcategory = "SiP_7id_Editor_Subcategory";
        portrait = "";
        scope = 2;
        side = 1;
        genericNames = "EnglishMen";
        model = "simc_uaf_44\m43.p3d";
        hiddenSelections[] = {"camo","camo2","rank","falg","falg_left","insignia","rank2"};
        uniformClass = "SiP_m51_uniform_7id_private";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\patches\US_Shld_1stclass_ca.paa",
            "",
            "",
            "\simc_uaf_67\patches\7id_ca.paa",
            ""
        };
        role = "Rifleman";
        icon = "iconManRifleman";
        weapons[] = {"vn_m1_garand","Throw","Put"};
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
        respawnWeapons[] = {"vn_m1_garand","Throw","Put"};
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
        editorPreview = "";
        allowedHeadgear[] =
        {
            "SiP_M1_Helmet_7ID_NS1",
            "SiP_M1_Helmet_7ID_NS2",
            "SiP_M1_Helmet_7ID_NS3",
            "SiP_M1_Helmet_7ID_NS4",
            "SiP_M1_Helmet_7ID_NS5",
            "SiP_M1_Helmet_7ID_NS6",

            "SiP_M1_Helmet_7ID_NS1_net1",
            "SiP_M1_Helmet_7ID_NS1_net2",
            "SiP_M1_Helmet_7ID_NS1_net3",
            "SiP_M1_Helmet_7ID_NS1_net4",
            "SiP_M1_Helmet_7ID_NS1_net5",
            "SiP_M1_Helmet_7ID_NS1_net6",
            "SiP_M1_Helmet_7ID_NS1_cover_canvas",

            "SiP_M1_Helmet_7ID_NS2_net1",
            "SiP_M1_Helmet_7ID_NS2_net2",
            "SiP_M1_Helmet_7ID_NS2_net3",
            "SiP_M1_Helmet_7ID_NS2_net4",
            "SiP_M1_Helmet_7ID_NS2_net5",
            "SiP_M1_Helmet_7ID_NS2_net6",
            "SiP_M1_Helmet_7ID_NS2_cover_canvas",

            "SiP_M1_Helmet_7ID_NS3_net1",
            "SiP_M1_Helmet_7ID_NS3_net2",
            "SiP_M1_Helmet_7ID_NS3_net3",
            "SiP_M1_Helmet_7ID_NS3_net4",
            "SiP_M1_Helmet_7ID_NS3_net5",
            "SiP_M1_Helmet_7ID_NS3_net6",
            "SiP_M1_Helmet_7ID_NS3_cover_canvas",

            "SiP_M1_Helmet_7ID_NS4_net1",
            "SiP_M1_Helmet_7ID_NS4_net2",
            "SiP_M1_Helmet_7ID_NS4_net3",
            "SiP_M1_Helmet_7ID_NS4_net4",
            "SiP_M1_Helmet_7ID_NS4_net5",
            "SiP_M1_Helmet_7ID_NS4_net6",
            "SiP_M1_Helmet_7ID_NS4_cover_canvas",

            "SiP_M1_Helmet_7ID_NS5_net1",
            "SiP_M1_Helmet_7ID_NS5_net2",
            "SiP_M1_Helmet_7ID_NS5_net3",
            "SiP_M1_Helmet_7ID_NS5_net4",
            "SiP_M1_Helmet_7ID_NS5_net5",
            "SiP_M1_Helmet_7ID_NS5_net6",
            "SiP_M1_Helmet_7ID_NS5_cover_canvas",

            "SiP_M1_Helmet_7ID_NS6_net1",
            "SiP_M1_Helmet_7ID_NS6_net2",
            "SiP_M1_Helmet_7ID_NS6_net3",
            "SiP_M1_Helmet_7ID_NS6_net4",
            "SiP_M1_Helmet_7ID_NS6_net5",
            "SiP_M1_Helmet_7ID_NS6_net6",
            "SiP_M1_Helmet_7ID_NS6_cover_canvas"
        };
        headgearList[] = 
        {
            "SiP_M1_Helmet_7ID_NS1",1,
            "SiP_M1_Helmet_7ID_NS2",1,
            "SiP_M1_Helmet_7ID_NS3",1,
            "SiP_M1_Helmet_7ID_NS4",1,
            "SiP_M1_Helmet_7ID_NS5",1,
            "SiP_M1_Helmet_7ID_NS6",1,

            "SiP_M1_Helmet_7ID_NS1_net1",1,
            "SiP_M1_Helmet_7ID_NS1_net2",1,
            "SiP_M1_Helmet_7ID_NS1_net3",1,
            "SiP_M1_Helmet_7ID_NS1_net4",1,
            "SiP_M1_Helmet_7ID_NS1_net5",1,
            "SiP_M1_Helmet_7ID_NS1_net6",1,
            "SiP_M1_Helmet_7ID_NS1_cover_canvas",1,

            "SiP_M1_Helmet_7ID_NS2_net1",1,
            "SiP_M1_Helmet_7ID_NS2_net2",1,
            "SiP_M1_Helmet_7ID_NS2_net3",1,
            "SiP_M1_Helmet_7ID_NS2_net4",1,
            "SiP_M1_Helmet_7ID_NS2_net5",1,
            "SiP_M1_Helmet_7ID_NS2_net6",1,
            "SiP_M1_Helmet_7ID_NS2_cover_canvas",1,

            "SiP_M1_Helmet_7ID_NS3_net1",1,
            "SiP_M1_Helmet_7ID_NS3_net2",1,
            "SiP_M1_Helmet_7ID_NS3_net3",1,
            "SiP_M1_Helmet_7ID_NS3_net4",1,
            "SiP_M1_Helmet_7ID_NS3_net5",1,
            "SiP_M1_Helmet_7ID_NS3_net6",1,
            "SiP_M1_Helmet_7ID_NS3_cover_canvas",1,

            "SiP_M1_Helmet_7ID_NS4_net1",1,
            "SiP_M1_Helmet_7ID_NS4_net2",1,
            "SiP_M1_Helmet_7ID_NS4_net3",1,
            "SiP_M1_Helmet_7ID_NS4_net4",1,
            "SiP_M1_Helmet_7ID_NS4_net5",1,
            "SiP_M1_Helmet_7ID_NS4_net6",1,
            "SiP_M1_Helmet_7ID_NS4_cover_canvas",1,

            "SiP_M1_Helmet_7ID_NS5_net1",1,
            "SiP_M1_Helmet_7ID_NS5_net2",1,
            "SiP_M1_Helmet_7ID_NS5_net3",1,
            "SiP_M1_Helmet_7ID_NS5_net4",1,
            "SiP_M1_Helmet_7ID_NS5_net5",1,
            "SiP_M1_Helmet_7ID_NS5_net6",1,
            "SiP_M1_Helmet_7ID_NS5_cover_canvas",1,

            "SiP_M1_Helmet_7ID_NS6_net1",1,
            "SiP_M1_Helmet_7ID_NS6_net2",1,
            "SiP_M1_Helmet_7ID_NS6_net3",1,
            "SiP_M1_Helmet_7ID_NS6_net4",1,
            "SiP_M1_Helmet_7ID_NS6_net5",1,
            "SiP_M1_Helmet_7ID_NS6_net6",1,
            "SiP_M1_Helmet_7ID_NS6_cover_canvas",1
        };
        SPE_RandomizeHeadgear = 1;
        linkedItems[] = {"SiP_M1_Helmet_7ID_NS1","V_SPE_US_Vest_OD7_Garand","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"SiP_M1_Helmet_7ID_NS1","V_SPE_US_Vest_OD7_Garand","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        items[] = {"vn_b_m1_garand","vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        respawnItems[] = {"vn_b_m1_garand","vn_b_item_firstaidkit"};
        backpack = "SiP_m1945_gpbag_left_od_45";
        class SpeechVariants
        {
            class Default
            {
                speechSingular[] = {"veh_infantry_MG_s"};
                speechPlural[] = {"veh_infantry_MG_p"};
            };
            class en: Default{};
        };
    };
    class SiP_US_Army_7id_rifleman2: SiP_US_Army_7id_rifleman1
    {
        displayName = "Rifleman (Carbine)";
        uniformClass = "SiP_m51_uniform_7id";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "",
            "",
            "",
            "\simc_uaf_67\patches\7id_ca.paa",
            ""
        };
        weapons[] = {"vn_m2carbine","Throw","Put"};
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
        respawnWeapons[] = {"vn_m2carbine","Throw","Put"};
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
        linkedItems[] = {"SiP_M1_Helmet_7ID_NS1","V_SPE_US_Vest_OD7_Asst_MG","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"SiP_M1_Helmet_7ID_NS1","V_SPE_US_Vest_OD7_Asst_MG","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        items[] = {"vn_b_carbine","vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        respawnItems[] = {"vn_b_carbine","vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        backpack = "SiP_m1945_gpbag";
    };
    class SiP_US_Army_7id_smg1: SiP_US_Army_7id_rifleman1
    {
        displayName = "SMG-Soldier (Thompson)";
        cost = 115000;
        threat[] = {0.7,0.1,0.1};
        icon = "iconManRecon";
        role = "Assault";
        weapons[] = {"vn_m1a1_tommy","Throw","Put"};
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
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag"
        };
        respawnWeapons[] = {"vn_m1a1_tommy","Throw","Put"};
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
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag"
        };
        linkedItems[] = {"SiP_M1_Helmet_7ID_NS1","V_SPE_US_Vest_OD7_Asst_MG","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"SiP_M1_Helmet_7ID_NS1","V_SPE_US_Vest_OD7_Asst_MG","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        items[] = {"vn_b_item_firstaidkit"};
        respawnItems[] = {"vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        backpack = "SiP_m1945_gpbag_od";
    };
    class SiP_US_Army_7id_smg2: SiP_US_Army_7id_smg1
    {
        displayName = "SMG-Soldier (Grease Gun)";
        uniformClass = "SiP_m51_uniform_7id_private";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\patches\US_Shld_1stclass_ca.paa",
            "",
            "",
            "\simc_uaf_67\patches\7id_ca.paa",
            ""
        };
        weapons[] = {"vn_m3a1","Throw","Put"};
        magazines[] = 
        {
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag"
        };
        respawnWeapons[] = {"vn_m3a1","Throw","Put"};
        respawnMagazines[] = 
        {
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag"
        };
        allowedHeadgear[] =
        {
            "SiP_M1_Helmet_7ID_pfc_NS1",
            "SiP_M1_Helmet_7ID_pfc_NS2",
            "SiP_M1_Helmet_7ID_pfc_NS3",
            "SiP_M1_Helmet_7ID_pfc_NS4",
            "SiP_M1_Helmet_7ID_pfc_NS5",
            "SiP_M1_Helmet_7ID_pfc_NS6",

            "SiP_M1_Helmet_7ID_pfc_NS1_net1",
            "SiP_M1_Helmet_7ID_pfc_NS1_net2",
            "SiP_M1_Helmet_7ID_pfc_NS1_net3",
            "SiP_M1_Helmet_7ID_pfc_NS1_net4",
            "SiP_M1_Helmet_7ID_pfc_NS1_net5",
            "SiP_M1_Helmet_7ID_pfc_NS1_net6",
            "SiP_M1_Helmet_7ID_pfc_NS1_cover_canvas",

            "SiP_M1_Helmet_7ID_pfc_NS2_net1",
            "SiP_M1_Helmet_7ID_pfc_NS2_net2",
            "SiP_M1_Helmet_7ID_pfc_NS2_net3",
            "SiP_M1_Helmet_7ID_pfc_NS2_net4",
            "SiP_M1_Helmet_7ID_pfc_NS2_net5",
            "SiP_M1_Helmet_7ID_pfc_NS2_net6",
            "SiP_M1_Helmet_7ID_pfc_NS2_cover_canvas",

            "SiP_M1_Helmet_7ID_pfc_NS3_net1",
            "SiP_M1_Helmet_7ID_pfc_NS3_net2",
            "SiP_M1_Helmet_7ID_pfc_NS3_net3",
            "SiP_M1_Helmet_7ID_pfc_NS3_net4",
            "SiP_M1_Helmet_7ID_pfc_NS3_net5",
            "SiP_M1_Helmet_7ID_pfc_NS3_net6",
            "SiP_M1_Helmet_7ID_pfc_NS3_cover_canvas",

            "SiP_M1_Helmet_7ID_pfc_NS4_net1",
            "SiP_M1_Helmet_7ID_pfc_NS4_net2",
            "SiP_M1_Helmet_7ID_pfc_NS4_net3",
            "SiP_M1_Helmet_7ID_pfc_NS4_net4",
            "SiP_M1_Helmet_7ID_pfc_NS4_net5",
            "SiP_M1_Helmet_7ID_pfc_NS4_net6",
            "SiP_M1_Helmet_7ID_pfc_NS4_cover_canvas",

            "SiP_M1_Helmet_7ID_pfc_NS5_net1",
            "SiP_M1_Helmet_7ID_pfc_NS5_net2",
            "SiP_M1_Helmet_7ID_pfc_NS5_net3",
            "SiP_M1_Helmet_7ID_pfc_NS5_net4",
            "SiP_M1_Helmet_7ID_pfc_NS5_net5",
            "SiP_M1_Helmet_7ID_pfc_NS5_net6",
            "SiP_M1_Helmet_7ID_pfc_NS5_cover_canvas",

            "SiP_M1_Helmet_7ID_pfc_NS6_net1",
            "SiP_M1_Helmet_7ID_pfc_NS6_net2",
            "SiP_M1_Helmet_7ID_pfc_NS6_net3",
            "SiP_M1_Helmet_7ID_pfc_NS6_net4",
            "SiP_M1_Helmet_7ID_pfc_NS6_net5",
            "SiP_M1_Helmet_7ID_pfc_NS6_net6",
            "SiP_M1_Helmet_7ID_pfc_NS6_cover_canvas"
        };
        headgearList[] = 
        {
            "SiP_M1_Helmet_7ID_pfc_NS1",1,
            "SiP_M1_Helmet_7ID_pfc_NS2",1,
            "SiP_M1_Helmet_7ID_pfc_NS3",1,
            "SiP_M1_Helmet_7ID_pfc_NS4",1,
            "SiP_M1_Helmet_7ID_pfc_NS5",1,
            "SiP_M1_Helmet_7ID_pfc_NS6",1,

            "SiP_M1_Helmet_7ID_pfc_NS1_net1",1,
            "SiP_M1_Helmet_7ID_pfc_NS1_net2",1,
            "SiP_M1_Helmet_7ID_pfc_NS1_net3",1,
            "SiP_M1_Helmet_7ID_pfc_NS1_net4",1,
            "SiP_M1_Helmet_7ID_pfc_NS1_net5",1,
            "SiP_M1_Helmet_7ID_pfc_NS1_net6",1,
            "SiP_M1_Helmet_7ID_pfc_NS1_cover_canvas",1,

            "SiP_M1_Helmet_7ID_pfc_NS2_net1",1,
            "SiP_M1_Helmet_7ID_pfc_NS2_net2",1,
            "SiP_M1_Helmet_7ID_pfc_NS2_net3",1,
            "SiP_M1_Helmet_7ID_pfc_NS2_net4",1,
            "SiP_M1_Helmet_7ID_pfc_NS2_net5",1,
            "SiP_M1_Helmet_7ID_pfc_NS2_net6",1,
            "SiP_M1_Helmet_7ID_pfc_NS2_cover_canvas",1,

            "SiP_M1_Helmet_7ID_pfc_NS3_net1",1,
            "SiP_M1_Helmet_7ID_pfc_NS3_net2",1,
            "SiP_M1_Helmet_7ID_pfc_NS3_net3",1,
            "SiP_M1_Helmet_7ID_pfc_NS3_net4",1,
            "SiP_M1_Helmet_7ID_pfc_NS3_net5",1,
            "SiP_M1_Helmet_7ID_pfc_NS3_net6",1,
            "SiP_M1_Helmet_7ID_pfc_NS3_cover_canvas",1,

            "SiP_M1_Helmet_7ID_pfc_NS4_net1",1,
            "SiP_M1_Helmet_7ID_pfc_NS4_net2",1,
            "SiP_M1_Helmet_7ID_pfc_NS4_net3",1,
            "SiP_M1_Helmet_7ID_pfc_NS4_net4",1,
            "SiP_M1_Helmet_7ID_pfc_NS4_net5",1,
            "SiP_M1_Helmet_7ID_pfc_NS4_net6",1,
            "SiP_M1_Helmet_7ID_pfc_NS4_cover_canvas",1,

            "SiP_M1_Helmet_7ID_pfc_NS5_net1",1,
            "SiP_M1_Helmet_7ID_pfc_NS5_net2",1,
            "SiP_M1_Helmet_7ID_pfc_NS5_net3",1,
            "SiP_M1_Helmet_7ID_pfc_NS5_net4",1,
            "SiP_M1_Helmet_7ID_pfc_NS5_net5",1,
            "SiP_M1_Helmet_7ID_pfc_NS5_net6",1,
            "SiP_M1_Helmet_7ID_pfc_NS5_cover_canvas",1,

            "SiP_M1_Helmet_7ID_pfc_NS6_net1",1,
            "SiP_M1_Helmet_7ID_pfc_NS6_net2",1,
            "SiP_M1_Helmet_7ID_pfc_NS6_net3",1,
            "SiP_M1_Helmet_7ID_pfc_NS6_net4",1,
            "SiP_M1_Helmet_7ID_pfc_NS6_net5",1,
            "SiP_M1_Helmet_7ID_pfc_NS6_net6",1,
            "SiP_M1_Helmet_7ID_pfc_NS6_cover_canvas",1
        };
        linkedItems[] = {"SiP_M1_Helmet_7ID_pfc_NS1","V_SPE_US_Vest_OD7_Asst_MG","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"SiP_M1_Helmet_7ID_pfc_NS1","V_SPE_US_Vest_OD7_Asst_MG","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
    };
    class SiP_US_Army_7id_flamer: SiP_US_Army_7id_smg2
    {
        displayName = "Flamethrower Soldier";
        weapons[] = {"SiP_M2_Flamethrower","Throw","Put"};
        magazines[] = {};
        respawnWeapons[] = {"SiP_M2_Flamethrower","Throw","Put"};
        respawnMagazines[] = {};
        linkedItems[] = {"SiP_M1_Helmet_7ID_pfc_NS1","V_SPE_US_Vest_OD7_Asst_MG_45","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"SiP_M1_Helmet_7ID_pfc_NS1","V_SPE_US_Vest_OD7_Asst_MG_45","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        backpack = "B_LIB_US_M2Flamethrower";
    };
    class SiP_US_Army_7id_autorifleman: SiP_US_Army_7id_smg1
    {
        displayName = "Auto-Rifleman";
        icon = "iconManSMG";
        role = "MachineGunner";
        cost = 125000;
        threat[] = {1,0.1,0.4};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\patches\US_Shld_Corporal_co.paa",
            "",
            "",
            "\simc_uaf_67\patches\7id_ca.paa",
            ""
        };
        uniformClass = "SiP_m51_uniform_7id_corporal";
        weapons[] = {"vn_m1918","Throw","Put"};
        magazines[] = 
        {
            "vn_m1918_t_mag",
            "vn_m1918_t_mag",
            "vn_m1918_t_mag",
            "vn_m1918_t_mag",
            "vn_m1918_t_mag",
            "vn_m1918_t_mag",
            "vn_m1918_t_mag",
            "vn_m1918_t_mag",
            "vn_m1918_t_mag",
            "vn_m1918_t_mag",
            "vn_m1918_t_mag"
        };
        respawnWeapons[] = {"vn_m1918","Throw","Put"};
        respawnMagazines[] = 
        {
            "vn_m1918_t_mag",
            "vn_m1918_t_mag",
            "vn_m1918_t_mag",
            "vn_m1918_t_mag",
            "vn_m1918_t_mag",
            "vn_m1918_t_mag",
            "vn_m1918_t_mag",
            "vn_m1918_t_mag",
            "vn_m1918_t_mag",
            "vn_m1918_t_mag",
            "vn_m1918_t_mag"
        };
        linkedItems[] = {"SiP_M1_Helmet_7ID_NS1","V_SPE_US_Vest_OD7_Bar_assist","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"SiP_M1_Helmet_7ID_NS1","V_SPE_US_Vest_OD7_Bar_assist","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        backpack = "SiP_m1945_gpbag_bar";
    };
    class SiP_US_Army_7id_machinegunner: SiP_US_Army_7id_smg1
    {
        displayName = "Machine Gunner";
        icon = "iconManMG";
        role = "MachineGunner";
        cost = 125000;
        threat[] = {1,0.1,0.4};
        weapons[] = {"SPE_M1919A6","vn_m1911","Throw","Put"};
        magazines[] = 
        {
            "ace_compat_sip_m1919_250",
            "ace_compat_sip_m1919_250",
            "ace_compat_sip_m1919_250",
            "ace_compat_sip_m1919_250",
            "ace_compat_sip_m1919_250",
            "ace_compat_sip_m1919_250",
            "ace_compat_sip_m1919_250",
            "ace_compat_sip_m1919_250",
            "ace_compat_sip_m1919_250",
            "ace_compat_sip_m1919_250",
            "ace_compat_sip_m1919_250",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag"
        };
        respawnWeapons[] = {"SPE_M1919A6","vn_m1911","Throw","Put"};
        respawnMagazines[] = 
        {
            "ace_compat_sip_m1919_250",
            "ace_compat_sip_m1919_250",
            "ace_compat_sip_m1919_250",
            "ace_compat_sip_m1919_250",
            "ace_compat_sip_m1919_250",
            "ace_compat_sip_m1919_250",
            "ace_compat_sip_m1919_250",
            "ace_compat_sip_m1919_250",
            "ace_compat_sip_m1919_250",
            "ace_compat_sip_m1919_250",
            "ace_compat_sip_m1919_250",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag"
        };
        linkedItems[] = {"SiP_M1_Helmet_7ID_NS1","SiP_m1945_Vest_MG","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"SiP_M1_Helmet_7ID_NS1","SiP_m1945_Vest_MG","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        backpack = "SiP_m1945_gpbag_mg";
    };
    class SiP_US_Army_7id_sniper1: SiP_US_Army_7id_rifleman1
    {
        displayName = "Sniper (Springfield)";
        role = "Marksman";
        cost = 350000;
        accuracy = 3.9;
        weapons[] = {"SPE_M1903A4_Springfield","vn_m1911","Throw","Put"};
        magazines[] = 
        {
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag"
        };
        respawnWeapons[] = {"SPE_M1903A4_Springfield","vn_m1911","Throw","Put"};
        respawnMagazines[] = 
        {
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag"
        };
        linkedItems[] = {"SiP_M1_Helmet_7ID_NS1","V_SPE_US_Vest_OD7_Garand_45","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"SiP_M1_Helmet_7ID_NS1","V_SPE_US_Vest_OD7_Garand_45","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        items[] = {"vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        respawnItems[] = {"vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        backpack = "SiP_m1945_gpbag_45";
    };
    class SiP_US_Army_7id_sniper2: SiP_US_Army_7id_sniper1
    {
        displayName = "Sniper (Garand)";
        weapons[] = {"SiP_m1d_garand_scope","vn_m1911","Throw","Put"};
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
        respawnWeapons[] = {"SiP_m1d_garand_scope","vn_m1911","Throw","Put"};
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
        linkedItems[] = {"SiP_M1_Helmet_7ID_NS1","V_SPE_US_Vest_OD7_Garand_45","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"SiP_M1_Helmet_7ID_NS1","V_SPE_US_Vest_OD7_Garand_45","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        items[] = {"vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        respawnItems[] = {"vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
    };
    class SiP_US_Army_7id_m9_bazooka: SiP_US_Army_7id_rifleman2
    {
        displayName = "Bazooka Soldier (M9)";
        icon = "iconManAT";
        role = "MissileSpecialist";
        cost = 190000;
        threat[] = {0.7,0.7,0.1};
        weapons[] = {"vn_m2carbine","SPE_M9A1_Bazooka","Throw","Put"};
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
        respawnWeapons[] = {"vn_m2carbine","SPE_M9A1_Bazooka","Throw","Put"};
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
        linkedItems[] = {"SiP_M1_Helmet_7ID_NS1","V_SPE_US_Vest_OD7_Asst_MG","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"SiP_M1_Helmet_7ID_NS1","V_SPE_US_Vest_OD7_Asst_MG","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        items[] = {"vn_b_carbine","vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        respawnItems[] = {"vn_b_carbine","vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        backpack = "SiP_m1945_packboard_m9bazooka";
        class SpeechVariants
        {
            class Default
            {
                speechSingular[] = {"veh_infantry_AT_s"};
                speechPlural[] = {"veh_infantry_AT_p"};
            };
            class en: Default{};
        };
    };
    class SiP_US_Army_7id_m20_bazooka: SiP_US_Army_7id_m9_bazooka
    {
        displayName = "Bazooka Soldier (M20)";
        weapons[] = {"vn_m2carbine","vn_m20a1b1_01","Throw","Put"};
        respawnWeapons[] = {"vn_m2carbine","vn_m20a1b1_01","Throw","Put"};
        backpack = "SiP_m1945_packboard_m20bazooka_full";
        class SpeechVariants
        {
            class Default
            {
                speechSingular[] = {"veh_infantry_AT_s"};
                speechPlural[] = {"veh_infantry_AT_p"};
            };
            class en: Default{};
        };
    };
    class SiP_US_Army_7id_shotgunner1: SiP_US_Army_7id_rifleman1
    {
        displayName = "Shotgunner (Trenchgun)";
        cost = 115000;
        threat[] = {0.7,0.1,0.1};
        icon = "iconManRecon";
        role = "Assault";
        weapons[] = {"vn_m1897","Throw","Put"};
        magazines[] = 
        {
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag"
        };
        respawnWeapons[] = {"vn_m1897","Throw","Put"};
        respawnMagazines[] = 
        {
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag"
        };
        linkedItems[] = {"SiP_M1_Helmet_7ID_NS1","V_SPE_US_Vest_OD7_Grenadier","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"SiP_M1_Helmet_7ID_NS1","V_SPE_US_Vest_OD7_Grenadier","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        items[] = {"vn_b_m1897","vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        respawnItems[] = {"vn_b_m1897","vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        backpack = "SiP_m1945_gpbag_shotgun";
    };
    class SiP_US_Army_7id_shotgunner2: SiP_US_Army_7id_shotgunner1
    {
        displayName = "Shotgunner (M1912)";
        weapons[] = {"SiP_m1912_shotgun","Throw","Put"};
        respawnWeapons[] = {"SiP_m1912_shotgun","Throw","Put"};
        items[] = {"vn_b_item_firstaidkit"};
        respawnItems[] = {"vn_b_item_firstaidkit"};
    };
    class SiP_US_Army_7id_shotgunner3: SiP_US_Army_7id_shotgunner2
    {
        displayName = "Shotgunner (Ithaca)";
        weapons[] = {"SPE_Model_37_Riotgun","Throw","Put"};
        respawnWeapons[] = {"SPE_Model_37_Riotgun","Throw","Put"};
    };
    class SiP_US_Army_7id_grenadier: SiP_US_Army_7id_rifleman1
    {
        displayName = "Grenadier";
        weapons[] = {"vn_m1_garand_gl","Throw","Put"};
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
        respawnWeapons[] = {"vn_m1_garand_gl","Throw","Put"};
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
        backpack = "SiP_m1945_gpbag_gren";
    };
    class SiP_US_Army_7id_rto: SiP_US_Army_7id_smg2
    {
        displayName = "Radio Operator";
        icon = "iconManRTO";
        cost = 400000;
        weapons[] = {"vn_m1carbine","Throw","Put"};
        magazines[] = 
        {
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag"
        };
        respawnWeapons[] = {"vn_m1carbine","Throw","Put"};
        respawnMagazines[] = 
        {
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag"
        };
        linkedItems[] = {"SiP_M1_Helmet_7ID_NS1","V_SPE_US_Vest_OD7_Asst_MG","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"SiP_M1_Helmet_7ID_NS1","V_SPE_US_Vest_OD7_Asst_MG","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        backpack = "SiP_m1945_packboard_prc10_radio";
    };
    class SiP_US_Army_7id_Corporal: SiP_US_Army_7id_rifleman1
    {
        displayName = "Corporal";
        icon = "iconManLeader";
        cost = 115000;
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\patches\US_Shld_Corporal_co.paa",
            "",
            "",
            "\simc_uaf_67\patches\7id_ca.paa",
            ""
        };
        uniformClass = "SiP_m51_uniform_7id_corporal";
        weapons[] = {"vn_m1_garand","vn_m1911","Throw","Put"};
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
        respawnWeapons[] = {"vn_m1_garand","vn_m1911","Throw","Put"};
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
        allowedHeadgear[] =
        {
            "SiP_M1_Helmet_7ID_cpl_NS1",
            "SiP_M1_Helmet_7ID_cpl_NS2",
            "SiP_M1_Helmet_7ID_cpl_NS3",
            "SiP_M1_Helmet_7ID_cpl_NS4",
            "SiP_M1_Helmet_7ID_cpl_NS5",
            "SiP_M1_Helmet_7ID_cpl_NS6",

            "SiP_M1_Helmet_7ID_cpl_NS1_net1",
            "SiP_M1_Helmet_7ID_cpl_NS1_net2",
            "SiP_M1_Helmet_7ID_cpl_NS1_net3",
            "SiP_M1_Helmet_7ID_cpl_NS1_net4",
            "SiP_M1_Helmet_7ID_cpl_NS1_net5",
            "SiP_M1_Helmet_7ID_cpl_NS1_net6",

            "SiP_M1_Helmet_7ID_cpl_NS2_net1",
            "SiP_M1_Helmet_7ID_cpl_NS2_net2",
            "SiP_M1_Helmet_7ID_cpl_NS2_net3",
            "SiP_M1_Helmet_7ID_cpl_NS2_net4",
            "SiP_M1_Helmet_7ID_cpl_NS2_net5",
            "SiP_M1_Helmet_7ID_cpl_NS2_net6",

            "SiP_M1_Helmet_7ID_cpl_NS3_net1",
            "SiP_M1_Helmet_7ID_cpl_NS3_net2",
            "SiP_M1_Helmet_7ID_cpl_NS3_net3",
            "SiP_M1_Helmet_7ID_cpl_NS3_net4",
            "SiP_M1_Helmet_7ID_cpl_NS3_net5",
            "SiP_M1_Helmet_7ID_cpl_NS3_net6",

            "SiP_M1_Helmet_7ID_cpl_NS4_net1",
            "SiP_M1_Helmet_7ID_cpl_NS4_net2",
            "SiP_M1_Helmet_7ID_cpl_NS4_net3",
            "SiP_M1_Helmet_7ID_cpl_NS4_net4",
            "SiP_M1_Helmet_7ID_cpl_NS4_net5",
            "SiP_M1_Helmet_7ID_cpl_NS4_net6",

            "SiP_M1_Helmet_7ID_cpl_NS5_net1",
            "SiP_M1_Helmet_7ID_cpl_NS5_net2",
            "SiP_M1_Helmet_7ID_cpl_NS5_net3",
            "SiP_M1_Helmet_7ID_cpl_NS5_net4",
            "SiP_M1_Helmet_7ID_cpl_NS5_net5",
            "SiP_M1_Helmet_7ID_cpl_NS5_net6",

            "SiP_M1_Helmet_7ID_cpl_NS6_net1",
            "SiP_M1_Helmet_7ID_cpl_NS6_net2",
            "SiP_M1_Helmet_7ID_cpl_NS6_net3",
            "SiP_M1_Helmet_7ID_cpl_NS6_net4",
            "SiP_M1_Helmet_7ID_cpl_NS6_net5",
            "SiP_M1_Helmet_7ID_cpl_NS6_net6"
        };
        headgearList[] = 
        {
            "SiP_M1_Helmet_7ID_cpl_NS1",1,
            "SiP_M1_Helmet_7ID_cpl_NS2",1,
            "SiP_M1_Helmet_7ID_cpl_NS3",1,
            "SiP_M1_Helmet_7ID_cpl_NS4",1,
            "SiP_M1_Helmet_7ID_cpl_NS5",1,
            "SiP_M1_Helmet_7ID_cpl_NS6",1,

            "SiP_M1_Helmet_7ID_cpl_NS1_net1",1,
            "SiP_M1_Helmet_7ID_cpl_NS1_net2",1,
            "SiP_M1_Helmet_7ID_cpl_NS1_net3",1,
            "SiP_M1_Helmet_7ID_cpl_NS1_net4",1,
            "SiP_M1_Helmet_7ID_cpl_NS1_net5",1,
            "SiP_M1_Helmet_7ID_cpl_NS1_net6",1,

            "SiP_M1_Helmet_7ID_cpl_NS2_net1",1,
            "SiP_M1_Helmet_7ID_cpl_NS2_net2",1,
            "SiP_M1_Helmet_7ID_cpl_NS2_net3",1,
            "SiP_M1_Helmet_7ID_cpl_NS2_net4",1,
            "SiP_M1_Helmet_7ID_cpl_NS2_net5",1,
            "SiP_M1_Helmet_7ID_cpl_NS2_net6",1,

            "SiP_M1_Helmet_7ID_cpl_NS3_net1",1,
            "SiP_M1_Helmet_7ID_cpl_NS3_net2",1,
            "SiP_M1_Helmet_7ID_cpl_NS3_net3",1,
            "SiP_M1_Helmet_7ID_cpl_NS3_net4",1,
            "SiP_M1_Helmet_7ID_cpl_NS3_net5",1,
            "SiP_M1_Helmet_7ID_cpl_NS3_net6",1,

            "SiP_M1_Helmet_7ID_cpl_NS4_net1",1,
            "SiP_M1_Helmet_7ID_cpl_NS4_net2",1,
            "SiP_M1_Helmet_7ID_cpl_NS4_net3",1,
            "SiP_M1_Helmet_7ID_cpl_NS4_net4",1,
            "SiP_M1_Helmet_7ID_cpl_NS4_net5",1,
            "SiP_M1_Helmet_7ID_cpl_NS4_net6",1,

            "SiP_M1_Helmet_7ID_cpl_NS5_net1",1,
            "SiP_M1_Helmet_7ID_cpl_NS5_net2",1,
            "SiP_M1_Helmet_7ID_cpl_NS5_net3",1,
            "SiP_M1_Helmet_7ID_cpl_NS5_net4",1,
            "SiP_M1_Helmet_7ID_cpl_NS5_net5",1,
            "SiP_M1_Helmet_7ID_cpl_NS5_net6",1,

            "SiP_M1_Helmet_7ID_cpl_NS6_net1",1,
            "SiP_M1_Helmet_7ID_cpl_NS6_net2",1,
            "SiP_M1_Helmet_7ID_cpl_NS6_net3",1,
            "SiP_M1_Helmet_7ID_cpl_NS6_net4",1,
            "SiP_M1_Helmet_7ID_cpl_NS6_net5",1,
            "SiP_M1_Helmet_7ID_cpl_NS6_net6",1
        };
        linkedItems[] = {"SiP_M1_Helmet_7ID_cpl_NS1","V_SPE_US_Vest_OD7_Garand_45","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"SiP_M1_Helmet_7ID_cpl_NS1","V_SPE_US_Vest_OD7_Garand_45","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        backpack = "SiP_m1945_gpbag_45_od";
    };
    class SiP_US_Army_7id_Sergeant: SiP_US_Army_7id_Corporal
    {
        displayName = "Sergeant";
        cost = 200000;
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\patches\US_Shld_Staff_Sergeant_ca.paa",
            "",
            "",
            "\simc_uaf_67\patches\7id_ca.paa",
            ""
        };
        uniformClass = "SiP_m51_uniform_7id_sergeant";
        weapons[] = {"vn_m1a1_tommy","vn_m1911","Throw","Put"};
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
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag"
        };
        respawnWeapons[] = {"vn_m1a1_tommy","vn_m1911","Throw","Put"};
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
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag"
        };
        allowedHeadgear[] =
        {
            "SiP_M1_Helmet_7ID_sgt_NS1",
            "SiP_M1_Helmet_7ID_sgt_NS2",
            "SiP_M1_Helmet_7ID_sgt_NS3",
            "SiP_M1_Helmet_7ID_sgt_NS4",
            "SiP_M1_Helmet_7ID_sgt_NS5",
            "SiP_M1_Helmet_7ID_sgt_NS6",

            "SiP_M1_Helmet_7ID_sgt_NS1_net1",
            "SiP_M1_Helmet_7ID_sgt_NS1_net2",
            "SiP_M1_Helmet_7ID_sgt_NS1_net3",
            "SiP_M1_Helmet_7ID_sgt_NS1_net4",
            "SiP_M1_Helmet_7ID_sgt_NS1_net5",
            "SiP_M1_Helmet_7ID_sgt_NS1_net6",

            "SiP_M1_Helmet_7ID_sgt_NS2_net1",
            "SiP_M1_Helmet_7ID_sgt_NS2_net2",
            "SiP_M1_Helmet_7ID_sgt_NS2_net3",
            "SiP_M1_Helmet_7ID_sgt_NS2_net4",
            "SiP_M1_Helmet_7ID_sgt_NS2_net5",
            "SiP_M1_Helmet_7ID_sgt_NS2_net6",

            "SiP_M1_Helmet_7ID_sgt_NS3_net1",
            "SiP_M1_Helmet_7ID_sgt_NS3_net2",
            "SiP_M1_Helmet_7ID_sgt_NS3_net3",
            "SiP_M1_Helmet_7ID_sgt_NS3_net4",
            "SiP_M1_Helmet_7ID_sgt_NS3_net5",
            "SiP_M1_Helmet_7ID_sgt_NS3_net6",

            "SiP_M1_Helmet_7ID_sgt_NS4_net1",
            "SiP_M1_Helmet_7ID_sgt_NS4_net2",
            "SiP_M1_Helmet_7ID_sgt_NS4_net3",
            "SiP_M1_Helmet_7ID_sgt_NS4_net4",
            "SiP_M1_Helmet_7ID_sgt_NS4_net5",
            "SiP_M1_Helmet_7ID_sgt_NS4_net6",

            "SiP_M1_Helmet_7ID_sgt_NS5_net1",
            "SiP_M1_Helmet_7ID_sgt_NS5_net2",
            "SiP_M1_Helmet_7ID_sgt_NS5_net3",
            "SiP_M1_Helmet_7ID_sgt_NS5_net4",
            "SiP_M1_Helmet_7ID_sgt_NS5_net5",
            "SiP_M1_Helmet_7ID_sgt_NS5_net6",

            "SiP_M1_Helmet_7ID_sgt_NS6_net1",
            "SiP_M1_Helmet_7ID_sgt_NS6_net2",
            "SiP_M1_Helmet_7ID_sgt_NS6_net3",
            "SiP_M1_Helmet_7ID_sgt_NS6_net4",
            "SiP_M1_Helmet_7ID_sgt_NS6_net5",
            "SiP_M1_Helmet_7ID_sgt_NS6_net6"
        };
        headgearList[] = 
        {
            "SiP_M1_Helmet_7ID_sgt_NS1",1,
            "SiP_M1_Helmet_7ID_sgt_NS2",1,
            "SiP_M1_Helmet_7ID_sgt_NS3",1,
            "SiP_M1_Helmet_7ID_sgt_NS4",1,
            "SiP_M1_Helmet_7ID_sgt_NS5",1,
            "SiP_M1_Helmet_7ID_sgt_NS6",1,

            "SiP_M1_Helmet_7ID_sgt_NS1_net1",1,
            "SiP_M1_Helmet_7ID_sgt_NS1_net2",1,
            "SiP_M1_Helmet_7ID_sgt_NS1_net3",1,
            "SiP_M1_Helmet_7ID_sgt_NS1_net4",1,
            "SiP_M1_Helmet_7ID_sgt_NS1_net5",1,
            "SiP_M1_Helmet_7ID_sgt_NS1_net6",1,

            "SiP_M1_Helmet_7ID_sgt_NS2_net1",1,
            "SiP_M1_Helmet_7ID_sgt_NS2_net2",1,
            "SiP_M1_Helmet_7ID_sgt_NS2_net3",1,
            "SiP_M1_Helmet_7ID_sgt_NS2_net4",1,
            "SiP_M1_Helmet_7ID_sgt_NS2_net5",1,
            "SiP_M1_Helmet_7ID_sgt_NS2_net6",1,

            "SiP_M1_Helmet_7ID_sgt_NS3_net1",1,
            "SiP_M1_Helmet_7ID_sgt_NS3_net2",1,
            "SiP_M1_Helmet_7ID_sgt_NS3_net3",1,
            "SiP_M1_Helmet_7ID_sgt_NS3_net4",1,
            "SiP_M1_Helmet_7ID_sgt_NS3_net5",1,
            "SiP_M1_Helmet_7ID_sgt_NS3_net6",1,

            "SiP_M1_Helmet_7ID_sgt_NS4_net1",1,
            "SiP_M1_Helmet_7ID_sgt_NS4_net2",1,
            "SiP_M1_Helmet_7ID_sgt_NS4_net3",1,
            "SiP_M1_Helmet_7ID_sgt_NS4_net4",1,
            "SiP_M1_Helmet_7ID_sgt_NS4_net5",1,
            "SiP_M1_Helmet_7ID_sgt_NS4_net6",1,

            "SiP_M1_Helmet_7ID_sgt_NS5_net1",1,
            "SiP_M1_Helmet_7ID_sgt_NS5_net2",1,
            "SiP_M1_Helmet_7ID_sgt_NS5_net3",1,
            "SiP_M1_Helmet_7ID_sgt_NS5_net4",1,
            "SiP_M1_Helmet_7ID_sgt_NS5_net5",1,
            "SiP_M1_Helmet_7ID_sgt_NS5_net6",1,

            "SiP_M1_Helmet_7ID_sgt_NS6_net1",1,
            "SiP_M1_Helmet_7ID_sgt_NS6_net2",1,
            "SiP_M1_Helmet_7ID_sgt_NS6_net3",1,
            "SiP_M1_Helmet_7ID_sgt_NS6_net4",1,
            "SiP_M1_Helmet_7ID_sgt_NS6_net5",1,
            "SiP_M1_Helmet_7ID_sgt_NS6_net6",1
        };
        linkedItems[] = {"SiP_M1_Helmet_7ID_sgt_NS1","V_SPE_US_Vest_OD7_Thompson_nco","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"SiP_M1_Helmet_7ID_sgt_NS1","V_SPE_US_Vest_OD7_Thompson_nco","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        items[] = {"vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        respawnItems[] = {"vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        backpack = "SiP_m1945_gpbag";
    };
    class SiP_US_Army_7id_Sergeant_1stclass: SiP_US_Army_7id_Sergeant
    {
        displayName = "Sergeant First Class";
        uniformClass = "SiP_m51_uniform_7id_sergeant_1stclass";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\patches\US_Shld_Tech_Sergeant_ca.paa",
            "",
            "",
            "\simc_uaf_67\patches\7id_ca.paa",
            ""
        };
        weapons[] = {"vn_m3a1","vn_m1911","Throw","Put"};
        magazines[] = 
        {
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag"
        };
        respawnWeapons[] = {"vn_m3a1","vn_m1911","Throw","Put"};
        respawnMagazines[] = 
        {
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag"
        };
        allowedHeadgear[] =
        {
            "SiP_M1_Helmet_7ID_sfc_NS1",
            "SiP_M1_Helmet_7ID_sfc_NS2",
            "SiP_M1_Helmet_7ID_sfc_NS3",
            "SiP_M1_Helmet_7ID_sfc_NS4",
            "SiP_M1_Helmet_7ID_sfc_NS5",
            "SiP_M1_Helmet_7ID_sfc_NS6",

            "SiP_M1_Helmet_7ID_sfc_NS1_net1",
            "SiP_M1_Helmet_7ID_sfc_NS1_net2",
            "SiP_M1_Helmet_7ID_sfc_NS1_net3",
            "SiP_M1_Helmet_7ID_sfc_NS1_net4",
            "SiP_M1_Helmet_7ID_sfc_NS1_net5",
            "SiP_M1_Helmet_7ID_sfc_NS1_net6",

            "SiP_M1_Helmet_7ID_sfc_NS2_net1",
            "SiP_M1_Helmet_7ID_sfc_NS2_net2",
            "SiP_M1_Helmet_7ID_sfc_NS2_net3",
            "SiP_M1_Helmet_7ID_sfc_NS2_net4",
            "SiP_M1_Helmet_7ID_sfc_NS2_net5",
            "SiP_M1_Helmet_7ID_sfc_NS2_net6",

            "SiP_M1_Helmet_7ID_sfc_NS3_net1",
            "SiP_M1_Helmet_7ID_sfc_NS3_net2",
            "SiP_M1_Helmet_7ID_sfc_NS3_net3",
            "SiP_M1_Helmet_7ID_sfc_NS3_net4",
            "SiP_M1_Helmet_7ID_sfc_NS3_net5",
            "SiP_M1_Helmet_7ID_sfc_NS3_net6",

            "SiP_M1_Helmet_7ID_sfc_NS4_net1",
            "SiP_M1_Helmet_7ID_sfc_NS4_net2",
            "SiP_M1_Helmet_7ID_sfc_NS4_net3",
            "SiP_M1_Helmet_7ID_sfc_NS4_net4",
            "SiP_M1_Helmet_7ID_sfc_NS4_net5",
            "SiP_M1_Helmet_7ID_sfc_NS4_net6",

            "SiP_M1_Helmet_7ID_sfc_NS5_net1",
            "SiP_M1_Helmet_7ID_sfc_NS5_net2",
            "SiP_M1_Helmet_7ID_sfc_NS5_net3",
            "SiP_M1_Helmet_7ID_sfc_NS5_net4",
            "SiP_M1_Helmet_7ID_sfc_NS5_net5",
            "SiP_M1_Helmet_7ID_sfc_NS5_net6",

            "SiP_M1_Helmet_7ID_sfc_NS6_net1",
            "SiP_M1_Helmet_7ID_sfc_NS6_net2",
            "SiP_M1_Helmet_7ID_sfc_NS6_net3",
            "SiP_M1_Helmet_7ID_sfc_NS6_net4",
            "SiP_M1_Helmet_7ID_sfc_NS6_net5",
            "SiP_M1_Helmet_7ID_sfc_NS6_net6"
        };
        headgearList[] = 
        {
            "SiP_M1_Helmet_7ID_sfc_NS1",1,
            "SiP_M1_Helmet_7ID_sfc_NS2",1,
            "SiP_M1_Helmet_7ID_sfc_NS3",1,
            "SiP_M1_Helmet_7ID_sfc_NS4",1,
            "SiP_M1_Helmet_7ID_sfc_NS5",1,
            "SiP_M1_Helmet_7ID_sfc_NS6",1,

            "SiP_M1_Helmet_7ID_sfc_NS1_net1",1,
            "SiP_M1_Helmet_7ID_sfc_NS1_net2",1,
            "SiP_M1_Helmet_7ID_sfc_NS1_net3",1,
            "SiP_M1_Helmet_7ID_sfc_NS1_net4",1,
            "SiP_M1_Helmet_7ID_sfc_NS1_net5",1,
            "SiP_M1_Helmet_7ID_sfc_NS1_net6",1,

            "SiP_M1_Helmet_7ID_sfc_NS2_net1",1,
            "SiP_M1_Helmet_7ID_sfc_NS2_net2",1,
            "SiP_M1_Helmet_7ID_sfc_NS2_net3",1,
            "SiP_M1_Helmet_7ID_sfc_NS2_net4",1,
            "SiP_M1_Helmet_7ID_sfc_NS2_net5",1,
            "SiP_M1_Helmet_7ID_sfc_NS2_net6",1,

            "SiP_M1_Helmet_7ID_sfc_NS3_net1",1,
            "SiP_M1_Helmet_7ID_sfc_NS3_net2",1,
            "SiP_M1_Helmet_7ID_sfc_NS3_net3",1,
            "SiP_M1_Helmet_7ID_sfc_NS3_net4",1,
            "SiP_M1_Helmet_7ID_sfc_NS3_net5",1,
            "SiP_M1_Helmet_7ID_sfc_NS3_net6",1,

            "SiP_M1_Helmet_7ID_sfc_NS4_net1",1,
            "SiP_M1_Helmet_7ID_sfc_NS4_net2",1,
            "SiP_M1_Helmet_7ID_sfc_NS4_net3",1,
            "SiP_M1_Helmet_7ID_sfc_NS4_net4",1,
            "SiP_M1_Helmet_7ID_sfc_NS4_net5",1,
            "SiP_M1_Helmet_7ID_sfc_NS4_net6",1,

            "SiP_M1_Helmet_7ID_sfc_NS5_net1",1,
            "SiP_M1_Helmet_7ID_sfc_NS5_net2",1,
            "SiP_M1_Helmet_7ID_sfc_NS5_net3",1,
            "SiP_M1_Helmet_7ID_sfc_NS5_net4",1,
            "SiP_M1_Helmet_7ID_sfc_NS5_net5",1,
            "SiP_M1_Helmet_7ID_sfc_NS5_net6",1,

            "SiP_M1_Helmet_7ID_sfc_NS6_net1",1,
            "SiP_M1_Helmet_7ID_sfc_NS6_net2",1,
            "SiP_M1_Helmet_7ID_sfc_NS6_net3",1,
            "SiP_M1_Helmet_7ID_sfc_NS6_net4",1,
            "SiP_M1_Helmet_7ID_sfc_NS6_net5",1,
            "SiP_M1_Helmet_7ID_sfc_NS6_net6",1
        };
        linkedItems[] = {"SiP_M1_Helmet_7ID_sfc_NS1","V_SPE_US_Vest_OD7_Asst_MG","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"SiP_M1_Helmet_7ID_sfc_NS1","V_SPE_US_Vest_OD7_Asst_MG","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        backpack = "SiP_m1945_gpbag_od";
    };
    class SiP_US_Army_7id_Master_Sergeant: SiP_US_Army_7id_Sergeant
    {
        displayName = "Master Sergeant";
        uniformClass = "SiP_m51_uniform_7id_master_sergeant";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\patches\US_Shld_Master_Sergeant_ca.paa",
            "",
            "",
            "\simc_uaf_67\patches\7id_ca.paa",
            ""
        };
        weapons[] = {"vn_m1897","vn_m1911","Throw","Put"};
        magazines[] = 
        {
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag"
        };
        respawnWeapons[] = {"vn_m1897","vn_m1911","Throw","Put"};
        respawnMagazines[] = 
        {
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag"
        };
        allowedHeadgear[] =
        {
            "SiP_M1_Helmet_7ID_msg_NS1",
            "SiP_M1_Helmet_7ID_msg_NS2",
            "SiP_M1_Helmet_7ID_msg_NS3",
            "SiP_M1_Helmet_7ID_msg_NS4",
            "SiP_M1_Helmet_7ID_msg_NS5",
            "SiP_M1_Helmet_7ID_msg_NS6",

            "SiP_M1_Helmet_7ID_msg_NS1_net1",
            "SiP_M1_Helmet_7ID_msg_NS1_net2",
            "SiP_M1_Helmet_7ID_msg_NS1_net3",
            "SiP_M1_Helmet_7ID_msg_NS1_net4",
            "SiP_M1_Helmet_7ID_msg_NS1_net5",
            "SiP_M1_Helmet_7ID_msg_NS1_net6",

            "SiP_M1_Helmet_7ID_msg_NS2_net1",
            "SiP_M1_Helmet_7ID_msg_NS2_net2",
            "SiP_M1_Helmet_7ID_msg_NS2_net3",
            "SiP_M1_Helmet_7ID_msg_NS2_net4",
            "SiP_M1_Helmet_7ID_msg_NS2_net5",
            "SiP_M1_Helmet_7ID_msg_NS2_net6",

            "SiP_M1_Helmet_7ID_msg_NS3_net1",
            "SiP_M1_Helmet_7ID_msg_NS3_net2",
            "SiP_M1_Helmet_7ID_msg_NS3_net3",
            "SiP_M1_Helmet_7ID_msg_NS3_net4",
            "SiP_M1_Helmet_7ID_msg_NS3_net5",
            "SiP_M1_Helmet_7ID_msg_NS3_net6",

            "SiP_M1_Helmet_7ID_msg_NS4_net1",
            "SiP_M1_Helmet_7ID_msg_NS4_net2",
            "SiP_M1_Helmet_7ID_msg_NS4_net3",
            "SiP_M1_Helmet_7ID_msg_NS4_net4",
            "SiP_M1_Helmet_7ID_msg_NS4_net5",
            "SiP_M1_Helmet_7ID_msg_NS4_net6",

            "SiP_M1_Helmet_7ID_msg_NS5_net1",
            "SiP_M1_Helmet_7ID_msg_NS5_net2",
            "SiP_M1_Helmet_7ID_msg_NS5_net3",
            "SiP_M1_Helmet_7ID_msg_NS5_net4",
            "SiP_M1_Helmet_7ID_msg_NS5_net5",
            "SiP_M1_Helmet_7ID_msg_NS5_net6",

            "SiP_M1_Helmet_7ID_msg_NS6_net1",
            "SiP_M1_Helmet_7ID_msg_NS6_net2",
            "SiP_M1_Helmet_7ID_msg_NS6_net3",
            "SiP_M1_Helmet_7ID_msg_NS6_net4",
            "SiP_M1_Helmet_7ID_msg_NS6_net5",
            "SiP_M1_Helmet_7ID_msg_NS6_net6"
        };
        headgearList[] = 
        {
            "SiP_M1_Helmet_7ID_msg_NS1",1,
            "SiP_M1_Helmet_7ID_msg_NS2",1,
            "SiP_M1_Helmet_7ID_msg_NS3",1,
            "SiP_M1_Helmet_7ID_msg_NS4",1,
            "SiP_M1_Helmet_7ID_msg_NS5",1,
            "SiP_M1_Helmet_7ID_msg_NS6",1,

            "SiP_M1_Helmet_7ID_msg_NS1_net1",1,
            "SiP_M1_Helmet_7ID_msg_NS1_net2",1,
            "SiP_M1_Helmet_7ID_msg_NS1_net3",1,
            "SiP_M1_Helmet_7ID_msg_NS1_net4",1,
            "SiP_M1_Helmet_7ID_msg_NS1_net5",1,
            "SiP_M1_Helmet_7ID_msg_NS1_net6",1,

            "SiP_M1_Helmet_7ID_msg_NS2_net1",1,
            "SiP_M1_Helmet_7ID_msg_NS2_net2",1,
            "SiP_M1_Helmet_7ID_msg_NS2_net3",1,
            "SiP_M1_Helmet_7ID_msg_NS2_net4",1,
            "SiP_M1_Helmet_7ID_msg_NS2_net5",1,
            "SiP_M1_Helmet_7ID_msg_NS2_net6",1,

            "SiP_M1_Helmet_7ID_msg_NS3_net1",1,
            "SiP_M1_Helmet_7ID_msg_NS3_net2",1,
            "SiP_M1_Helmet_7ID_msg_NS3_net3",1,
            "SiP_M1_Helmet_7ID_msg_NS3_net4",1,
            "SiP_M1_Helmet_7ID_msg_NS3_net5",1,
            "SiP_M1_Helmet_7ID_msg_NS3_net6",1,

            "SiP_M1_Helmet_7ID_msg_NS4_net1",1,
            "SiP_M1_Helmet_7ID_msg_NS4_net2",1,
            "SiP_M1_Helmet_7ID_msg_NS4_net3",1,
            "SiP_M1_Helmet_7ID_msg_NS4_net4",1,
            "SiP_M1_Helmet_7ID_msg_NS4_net5",1,
            "SiP_M1_Helmet_7ID_msg_NS4_net6",1,

            "SiP_M1_Helmet_7ID_msg_NS5_net1",1,
            "SiP_M1_Helmet_7ID_msg_NS5_net2",1,
            "SiP_M1_Helmet_7ID_msg_NS5_net3",1,
            "SiP_M1_Helmet_7ID_msg_NS5_net4",1,
            "SiP_M1_Helmet_7ID_msg_NS5_net5",1,
            "SiP_M1_Helmet_7ID_msg_NS5_net6",1,

            "SiP_M1_Helmet_7ID_msg_NS6_net1",1,
            "SiP_M1_Helmet_7ID_msg_NS6_net2",1,
            "SiP_M1_Helmet_7ID_msg_NS6_net3",1,
            "SiP_M1_Helmet_7ID_msg_NS6_net4",1,
            "SiP_M1_Helmet_7ID_msg_NS6_net5",1,
            "SiP_M1_Helmet_7ID_msg_NS6_net6",1
        };
        linkedItems[] = {"SiP_M1_Helmet_7ID_msg_NS1","V_SPE_US_Vest_OD7_Asst_MG","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"SiP_M1_Helmet_7ID_msg_NS1","V_SPE_US_Vest_OD7_Asst_MG","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        backpack = "SiP_m1945_gpbag_od_shotgun_pistol";
    };
    class SiP_US_Army_7id_1st_Sergeant: SiP_US_Army_7id_Sergeant
    {
        displayName = "First Sergeant";
        uniformClass = "SiP_m51_uniform_7id_first_sergeant";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\patches\US_Shld_1st_Sergeant_ca.paa",
            "",
            "",
            "\simc_uaf_67\patches\7id_ca.paa",
            ""
        };
        weapons[] = {"vn_m1_garand","vn_m1911","Throw","Put"};
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
        respawnWeapons[] = {"vn_m1_garand","vn_m1911","Throw","Put"};
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
        allowedHeadgear[] =
        {
            "SiP_M1_Helmet_7ID_first_sgt_NS1",
            "SiP_M1_Helmet_7ID_first_sgt_NS2",
            "SiP_M1_Helmet_7ID_first_sgt_NS3",
            "SiP_M1_Helmet_7ID_first_sgt_NS4",
            "SiP_M1_Helmet_7ID_first_sgt_NS5",
            "SiP_M1_Helmet_7ID_first_sgt_NS6",

            "SiP_M1_Helmet_7ID_first_sgt_NS1_net1",
            "SiP_M1_Helmet_7ID_first_sgt_NS1_net2",
            "SiP_M1_Helmet_7ID_first_sgt_NS1_net3",
            "SiP_M1_Helmet_7ID_first_sgt_NS1_net4",
            "SiP_M1_Helmet_7ID_first_sgt_NS1_net5",
            "SiP_M1_Helmet_7ID_first_sgt_NS1_net6",

            "SiP_M1_Helmet_7ID_first_sgt_NS2_net1",
            "SiP_M1_Helmet_7ID_first_sgt_NS2_net2",
            "SiP_M1_Helmet_7ID_first_sgt_NS2_net3",
            "SiP_M1_Helmet_7ID_first_sgt_NS2_net4",
            "SiP_M1_Helmet_7ID_first_sgt_NS2_net5",
            "SiP_M1_Helmet_7ID_first_sgt_NS2_net6",

            "SiP_M1_Helmet_7ID_first_sgt_NS3_net1",
            "SiP_M1_Helmet_7ID_first_sgt_NS3_net2",
            "SiP_M1_Helmet_7ID_first_sgt_NS3_net3",
            "SiP_M1_Helmet_7ID_first_sgt_NS3_net4",
            "SiP_M1_Helmet_7ID_first_sgt_NS3_net5",
            "SiP_M1_Helmet_7ID_first_sgt_NS3_net6",

            "SiP_M1_Helmet_7ID_first_sgt_NS4_net1",
            "SiP_M1_Helmet_7ID_first_sgt_NS4_net2",
            "SiP_M1_Helmet_7ID_first_sgt_NS4_net3",
            "SiP_M1_Helmet_7ID_first_sgt_NS4_net4",
            "SiP_M1_Helmet_7ID_first_sgt_NS4_net5",
            "SiP_M1_Helmet_7ID_first_sgt_NS4_net6",

            "SiP_M1_Helmet_7ID_first_sgt_NS5_net1",
            "SiP_M1_Helmet_7ID_first_sgt_NS5_net2",
            "SiP_M1_Helmet_7ID_first_sgt_NS5_net3",
            "SiP_M1_Helmet_7ID_first_sgt_NS5_net4",
            "SiP_M1_Helmet_7ID_first_sgt_NS5_net5",
            "SiP_M1_Helmet_7ID_first_sgt_NS5_net6",

            "SiP_M1_Helmet_7ID_first_sgt_NS6_net1",
            "SiP_M1_Helmet_7ID_first_sgt_NS6_net2",
            "SiP_M1_Helmet_7ID_first_sgt_NS6_net3",
            "SiP_M1_Helmet_7ID_first_sgt_NS6_net4",
            "SiP_M1_Helmet_7ID_first_sgt_NS6_net5",
            "SiP_M1_Helmet_7ID_first_sgt_NS6_net6"
        };
        headgearList[] = 
        {
            "SiP_M1_Helmet_7ID_first_sgt_NS1",1,
            "SiP_M1_Helmet_7ID_first_sgt_NS2",1,
            "SiP_M1_Helmet_7ID_first_sgt_NS3",1,
            "SiP_M1_Helmet_7ID_first_sgt_NS4",1,
            "SiP_M1_Helmet_7ID_first_sgt_NS5",1,
            "SiP_M1_Helmet_7ID_first_sgt_NS6",1,

            "SiP_M1_Helmet_7ID_first_sgt_NS1_net1",1,
            "SiP_M1_Helmet_7ID_first_sgt_NS1_net2",1,
            "SiP_M1_Helmet_7ID_first_sgt_NS1_net3",1,
            "SiP_M1_Helmet_7ID_first_sgt_NS1_net4",1,
            "SiP_M1_Helmet_7ID_first_sgt_NS1_net5",1,
            "SiP_M1_Helmet_7ID_first_sgt_NS1_net6",1,

            "SiP_M1_Helmet_7ID_first_sgt_NS2_net1",1,
            "SiP_M1_Helmet_7ID_first_sgt_NS2_net2",1,
            "SiP_M1_Helmet_7ID_first_sgt_NS2_net3",1,
            "SiP_M1_Helmet_7ID_first_sgt_NS2_net4",1,
            "SiP_M1_Helmet_7ID_first_sgt_NS2_net5",1,
            "SiP_M1_Helmet_7ID_first_sgt_NS2_net6",1,

            "SiP_M1_Helmet_7ID_first_sgt_NS3_net1",1,
            "SiP_M1_Helmet_7ID_first_sgt_NS3_net2",1,
            "SiP_M1_Helmet_7ID_first_sgt_NS3_net3",1,
            "SiP_M1_Helmet_7ID_first_sgt_NS3_net4",1,
            "SiP_M1_Helmet_7ID_first_sgt_NS3_net5",1,
            "SiP_M1_Helmet_7ID_first_sgt_NS3_net6",1,

            "SiP_M1_Helmet_7ID_first_sgt_NS4_net1",1,
            "SiP_M1_Helmet_7ID_first_sgt_NS4_net2",1,
            "SiP_M1_Helmet_7ID_first_sgt_NS4_net3",1,
            "SiP_M1_Helmet_7ID_first_sgt_NS4_net4",1,
            "SiP_M1_Helmet_7ID_first_sgt_NS4_net5",1,
            "SiP_M1_Helmet_7ID_first_sgt_NS4_net6",1,

            "SiP_M1_Helmet_7ID_first_sgt_NS5_net1",1,
            "SiP_M1_Helmet_7ID_first_sgt_NS5_net2",1,
            "SiP_M1_Helmet_7ID_first_sgt_NS5_net3",1,
            "SiP_M1_Helmet_7ID_first_sgt_NS5_net4",1,
            "SiP_M1_Helmet_7ID_first_sgt_NS5_net5",1,
            "SiP_M1_Helmet_7ID_first_sgt_NS5_net6",1,

            "SiP_M1_Helmet_7ID_first_sgt_NS6_net1",1,
            "SiP_M1_Helmet_7ID_first_sgt_NS6_net2",1,
            "SiP_M1_Helmet_7ID_first_sgt_NS6_net3",1,
            "SiP_M1_Helmet_7ID_first_sgt_NS6_net4",1,
            "SiP_M1_Helmet_7ID_first_sgt_NS6_net5",1,
            "SiP_M1_Helmet_7ID_first_sgt_NS6_net6",1
        };
        linkedItems[] = {"SiP_M1_Helmet_7ID_first_sgt_NS1","V_SPE_US_Vest_OD7_Garand_45","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"SiP_M1_Helmet_7ID_first_sgt_NS1","V_SPE_US_Vest_OD7_Garand_45","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        backpack = "SiP_m1945_gpbag_45_od";
    };
    class SiP_US_Army_7id_2lt: SiP_US_Army_7id_Sergeant
    {
        displayName = "2nd Lieutenant";
        icon = "iconManOfficer";
        cost = 450000;
        uniformClass = "SiP_m51_uniform_7id_2lt";
        hiddenSelectionsTextures[] = 
        {
            "\SiP\Addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_2ndlt_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "",
            "",
            "",
            "\simc_uaf_67\patches\7id_ca.paa",
            "\simc_uaf_44\patches\US_Shld_2lt_ca.paa"
        };
        weapons[] = {"vn_m2carbine","vn_m1911","Throw","Put"};
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
            "vn_carbine_30_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag"
        };
        respawnWeapons[] = {"vn_m2carbine","vn_m1911","Throw","Put"};
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
            "vn_carbine_30_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag"
        };
        allowedHeadgear[] =
        {
            "SiP_M1_Helmet_7ID_second_Lt_NS1",
            "SiP_M1_Helmet_7ID_second_Lt_NS2",
            "SiP_M1_Helmet_7ID_second_Lt_NS3",
            "SiP_M1_Helmet_7ID_second_Lt_NS4",
            "SiP_M1_Helmet_7ID_second_Lt_NS5",
            "SiP_M1_Helmet_7ID_second_Lt_NS6",

            "SiP_M1_Helmet_7ID_second_Lt_NS1_net1",
            "SiP_M1_Helmet_7ID_second_Lt_NS1_net2",
            "SiP_M1_Helmet_7ID_second_Lt_NS1_net3",
            "SiP_M1_Helmet_7ID_second_Lt_NS1_net4",
            "SiP_M1_Helmet_7ID_second_Lt_NS1_net5",
            "SiP_M1_Helmet_7ID_second_Lt_NS1_net6",

            "SiP_M1_Helmet_7ID_second_Lt_NS2_net1",
            "SiP_M1_Helmet_7ID_second_Lt_NS2_net2",
            "SiP_M1_Helmet_7ID_second_Lt_NS2_net3",
            "SiP_M1_Helmet_7ID_second_Lt_NS2_net4",
            "SiP_M1_Helmet_7ID_second_Lt_NS2_net5",
            "SiP_M1_Helmet_7ID_second_Lt_NS2_net6",

            "SiP_M1_Helmet_7ID_second_Lt_NS3_net1",
            "SiP_M1_Helmet_7ID_second_Lt_NS3_net2",
            "SiP_M1_Helmet_7ID_second_Lt_NS3_net3",
            "SiP_M1_Helmet_7ID_second_Lt_NS3_net4",
            "SiP_M1_Helmet_7ID_second_Lt_NS3_net5",
            "SiP_M1_Helmet_7ID_second_Lt_NS3_net6",

            "SiP_M1_Helmet_7ID_second_Lt_NS4_net1",
            "SiP_M1_Helmet_7ID_second_Lt_NS4_net2",
            "SiP_M1_Helmet_7ID_second_Lt_NS4_net3",
            "SiP_M1_Helmet_7ID_second_Lt_NS4_net4",
            "SiP_M1_Helmet_7ID_second_Lt_NS4_net5",
            "SiP_M1_Helmet_7ID_second_Lt_NS4_net6",

            "SiP_M1_Helmet_7ID_second_Lt_NS5_net1",
            "SiP_M1_Helmet_7ID_second_Lt_NS5_net2",
            "SiP_M1_Helmet_7ID_second_Lt_NS5_net3",
            "SiP_M1_Helmet_7ID_second_Lt_NS5_net4",
            "SiP_M1_Helmet_7ID_second_Lt_NS5_net5",
            "SiP_M1_Helmet_7ID_second_Lt_NS5_net6",

            "SiP_M1_Helmet_7ID_second_Lt_NS6_net1",
            "SiP_M1_Helmet_7ID_second_Lt_NS6_net2",
            "SiP_M1_Helmet_7ID_second_Lt_NS6_net3",
            "SiP_M1_Helmet_7ID_second_Lt_NS6_net4",
            "SiP_M1_Helmet_7ID_second_Lt_NS6_net5",
            "SiP_M1_Helmet_7ID_second_Lt_NS6_net6"
        };
        headgearList[] = 
        {
            "SiP_M1_Helmet_7ID_second_Lt_NS1",1,
            "SiP_M1_Helmet_7ID_second_Lt_NS2",1,
            "SiP_M1_Helmet_7ID_second_Lt_NS3",1,
            "SiP_M1_Helmet_7ID_second_Lt_NS4",1,
            "SiP_M1_Helmet_7ID_second_Lt_NS5",1,
            "SiP_M1_Helmet_7ID_second_Lt_NS6",1,

            "SiP_M1_Helmet_7ID_second_Lt_NS1_net1",1,
            "SiP_M1_Helmet_7ID_second_Lt_NS1_net2",1,
            "SiP_M1_Helmet_7ID_second_Lt_NS1_net3",1,
            "SiP_M1_Helmet_7ID_second_Lt_NS1_net4",1,
            "SiP_M1_Helmet_7ID_second_Lt_NS1_net5",1,
            "SiP_M1_Helmet_7ID_second_Lt_NS1_net6",1,

            "SiP_M1_Helmet_7ID_second_Lt_NS2_net1",1,
            "SiP_M1_Helmet_7ID_second_Lt_NS2_net2",1,
            "SiP_M1_Helmet_7ID_second_Lt_NS2_net3",1,
            "SiP_M1_Helmet_7ID_second_Lt_NS2_net4",1,
            "SiP_M1_Helmet_7ID_second_Lt_NS2_net5",1,
            "SiP_M1_Helmet_7ID_second_Lt_NS2_net6",1,

            "SiP_M1_Helmet_7ID_second_Lt_NS3_net1",1,
            "SiP_M1_Helmet_7ID_second_Lt_NS3_net2",1,
            "SiP_M1_Helmet_7ID_second_Lt_NS3_net3",1,
            "SiP_M1_Helmet_7ID_second_Lt_NS3_net4",1,
            "SiP_M1_Helmet_7ID_second_Lt_NS3_net5",1,
            "SiP_M1_Helmet_7ID_second_Lt_NS3_net6",1,

            "SiP_M1_Helmet_7ID_second_Lt_NS4_net1",1,
            "SiP_M1_Helmet_7ID_second_Lt_NS4_net2",1,
            "SiP_M1_Helmet_7ID_second_Lt_NS4_net3",1,
            "SiP_M1_Helmet_7ID_second_Lt_NS4_net4",1,
            "SiP_M1_Helmet_7ID_second_Lt_NS4_net5",1,
            "SiP_M1_Helmet_7ID_second_Lt_NS4_net6",1,

            "SiP_M1_Helmet_7ID_second_Lt_NS5_net1",1,
            "SiP_M1_Helmet_7ID_second_Lt_NS5_net2",1,
            "SiP_M1_Helmet_7ID_second_Lt_NS5_net3",1,
            "SiP_M1_Helmet_7ID_second_Lt_NS5_net4",1,
            "SiP_M1_Helmet_7ID_second_Lt_NS5_net5",1,
            "SiP_M1_Helmet_7ID_second_Lt_NS5_net6",1,

            "SiP_M1_Helmet_7ID_second_Lt_NS6_net1",1,
            "SiP_M1_Helmet_7ID_second_Lt_NS6_net2",1,
            "SiP_M1_Helmet_7ID_second_Lt_NS6_net3",1,
            "SiP_M1_Helmet_7ID_second_Lt_NS6_net4",1,
            "SiP_M1_Helmet_7ID_second_Lt_NS6_net5",1,
            "SiP_M1_Helmet_7ID_second_Lt_NS6_net6",1
        };
        linkedItems[] = {"SiP_M1_Helmet_7ID_second_Lt_NS1","V_SPE_US_Vest_OD7_Thompson_nco","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"SiP_M1_Helmet_NS_2ndlt_7id","V_SPE_US_Vest_OD7_Thompson_nco","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        backpack = "SiP_m1945_gpbag";
    };
    class SiP_US_Army_7id_1lt: SiP_US_Army_7id_2lt
    {
        displayName = "1st Lieutenant";
        cost = 500000;
        uniformClass = "SiP_m51_uniform_7id_1lt";
        hiddenSelectionsTextures[] = {"\SiP\Addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_1stlt_co.paa","\simc_uaf_44\data\m43_1_co.paa","","","","\simc_uaf_67\patches\7id_ca.paa","\simc_uaf_44\patches\US_Shld_1lt_ca.paa"};
        weapons[] = {"vn_m1928a1_tommy","vn_m1911","Throw","Put"};
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
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag"
        };
        respawnWeapons[] = {"vn_m1928a1_tommy","vn_m1911","Throw","Put"};
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
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag"
        };
        allowedHeadgear[] =
        {
            "SiP_M1_Helmet_7ID_first_Lt_NS1",
            "SiP_M1_Helmet_7ID_first_Lt_NS2",
            "SiP_M1_Helmet_7ID_first_Lt_NS3",
            "SiP_M1_Helmet_7ID_first_Lt_NS4",
            "SiP_M1_Helmet_7ID_first_Lt_NS5",
            "SiP_M1_Helmet_7ID_first_Lt_NS6",

            "SiP_M1_Helmet_7ID_first_Lt_NS1_net1",
            "SiP_M1_Helmet_7ID_first_Lt_NS1_net2",
            "SiP_M1_Helmet_7ID_first_Lt_NS1_net3",
            "SiP_M1_Helmet_7ID_first_Lt_NS1_net4",
            "SiP_M1_Helmet_7ID_first_Lt_NS1_net5",
            "SiP_M1_Helmet_7ID_first_Lt_NS1_net6",

            "SiP_M1_Helmet_7ID_first_Lt_NS2_net1",
            "SiP_M1_Helmet_7ID_first_Lt_NS2_net2",
            "SiP_M1_Helmet_7ID_first_Lt_NS2_net3",
            "SiP_M1_Helmet_7ID_first_Lt_NS2_net4",
            "SiP_M1_Helmet_7ID_first_Lt_NS2_net5",
            "SiP_M1_Helmet_7ID_first_Lt_NS2_net6",

            "SiP_M1_Helmet_7ID_first_Lt_NS3_net1",
            "SiP_M1_Helmet_7ID_first_Lt_NS3_net2",
            "SiP_M1_Helmet_7ID_first_Lt_NS3_net3",
            "SiP_M1_Helmet_7ID_first_Lt_NS3_net4",
            "SiP_M1_Helmet_7ID_first_Lt_NS3_net5",
            "SiP_M1_Helmet_7ID_first_Lt_NS3_net6",

            "SiP_M1_Helmet_7ID_first_Lt_NS4_net1",
            "SiP_M1_Helmet_7ID_first_Lt_NS4_net2",
            "SiP_M1_Helmet_7ID_first_Lt_NS4_net3",
            "SiP_M1_Helmet_7ID_first_Lt_NS4_net4",
            "SiP_M1_Helmet_7ID_first_Lt_NS4_net5",
            "SiP_M1_Helmet_7ID_first_Lt_NS4_net6",

            "SiP_M1_Helmet_7ID_first_Lt_NS5_net1",
            "SiP_M1_Helmet_7ID_first_Lt_NS5_net2",
            "SiP_M1_Helmet_7ID_first_Lt_NS5_net3",
            "SiP_M1_Helmet_7ID_first_Lt_NS5_net4",
            "SiP_M1_Helmet_7ID_first_Lt_NS5_net5",
            "SiP_M1_Helmet_7ID_first_Lt_NS5_net6",

            "SiP_M1_Helmet_7ID_first_Lt_NS6_net1",
            "SiP_M1_Helmet_7ID_first_Lt_NS6_net2",
            "SiP_M1_Helmet_7ID_first_Lt_NS6_net3",
            "SiP_M1_Helmet_7ID_first_Lt_NS6_net4",
            "SiP_M1_Helmet_7ID_first_Lt_NS6_net5",
            "SiP_M1_Helmet_7ID_first_Lt_NS6_net6"
        };
        headgearList[] = 
        {
            "SiP_M1_Helmet_7ID_first_Lt_NS1",1,
            "SiP_M1_Helmet_7ID_first_Lt_NS2",1,
            "SiP_M1_Helmet_7ID_first_Lt_NS3",1,
            "SiP_M1_Helmet_7ID_first_Lt_NS4",1,
            "SiP_M1_Helmet_7ID_first_Lt_NS5",1,
            "SiP_M1_Helmet_7ID_first_Lt_NS6",1,

            "SiP_M1_Helmet_7ID_first_Lt_NS1_net1",1,
            "SiP_M1_Helmet_7ID_first_Lt_NS1_net2",1,
            "SiP_M1_Helmet_7ID_first_Lt_NS1_net3",1,
            "SiP_M1_Helmet_7ID_first_Lt_NS1_net4",1,
            "SiP_M1_Helmet_7ID_first_Lt_NS1_net5",1,
            "SiP_M1_Helmet_7ID_first_Lt_NS1_net6",1,

            "SiP_M1_Helmet_7ID_first_Lt_NS2_net1",1,
            "SiP_M1_Helmet_7ID_first_Lt_NS2_net2",1,
            "SiP_M1_Helmet_7ID_first_Lt_NS2_net3",1,
            "SiP_M1_Helmet_7ID_first_Lt_NS2_net4",1,
            "SiP_M1_Helmet_7ID_first_Lt_NS2_net5",1,
            "SiP_M1_Helmet_7ID_first_Lt_NS2_net6",1,

            "SiP_M1_Helmet_7ID_first_Lt_NS3_net1",1,
            "SiP_M1_Helmet_7ID_first_Lt_NS3_net2",1,
            "SiP_M1_Helmet_7ID_first_Lt_NS3_net3",1,
            "SiP_M1_Helmet_7ID_first_Lt_NS3_net4",1,
            "SiP_M1_Helmet_7ID_first_Lt_NS3_net5",1,
            "SiP_M1_Helmet_7ID_first_Lt_NS3_net6",1,

            "SiP_M1_Helmet_7ID_first_Lt_NS4_net1",1,
            "SiP_M1_Helmet_7ID_first_Lt_NS4_net2",1,
            "SiP_M1_Helmet_7ID_first_Lt_NS4_net3",1,
            "SiP_M1_Helmet_7ID_first_Lt_NS4_net4",1,
            "SiP_M1_Helmet_7ID_first_Lt_NS4_net5",1,
            "SiP_M1_Helmet_7ID_first_Lt_NS4_net6",1,

            "SiP_M1_Helmet_7ID_first_Lt_NS5_net1",1,
            "SiP_M1_Helmet_7ID_first_Lt_NS5_net2",1,
            "SiP_M1_Helmet_7ID_first_Lt_NS5_net3",1,
            "SiP_M1_Helmet_7ID_first_Lt_NS5_net4",1,
            "SiP_M1_Helmet_7ID_first_Lt_NS5_net5",1,
            "SiP_M1_Helmet_7ID_first_Lt_NS5_net6",1,

            "SiP_M1_Helmet_7ID_first_Lt_NS6_net1",1,
            "SiP_M1_Helmet_7ID_first_Lt_NS6_net2",1,
            "SiP_M1_Helmet_7ID_first_Lt_NS6_net3",1,
            "SiP_M1_Helmet_7ID_first_Lt_NS6_net4",1,
            "SiP_M1_Helmet_7ID_first_Lt_NS6_net5",1,
            "SiP_M1_Helmet_7ID_first_Lt_NS6_net6",1
        };
        linkedItems[] = {"SiP_M1_Helmet_7ID_first_Lt_NS1","V_SPE_US_Vest_OD7_Asst_MG","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch","mapcas_addon_od7"};
        respawnLinkedItems[] = {"SiP_M1_Helmet_7ID_first_Lt_NS1","V_SPE_US_Vest_OD7_Asst_MG","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch","mapcas_addon_od7"};
        backpack = "SiP_m1945_gpbag_45_od";
    };
    class SiP_US_Army_7id_captain: SiP_US_Army_7id_2lt
    {
        displayName = "Captain";
        cost = 500000;
        uniformClass = "SiP_m51_uniform_7id_captain";
        hiddenSelectionsTextures[] = {"\SiP\Addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_cap_co.paa","\simc_uaf_44\data\m43_1_co.paa","","","","\simc_uaf_67\patches\7id_ca.paa","\simc_uaf_44\patches\US_Shld_cpt_ca.paa"};
        weapons[] = {"vn_m1_garand","vn_m1911","Throw","Put"};
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
        respawnWeapons[] = {"vn_m1_garand","vn_m1911","Throw","Put"};
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
        allowedHeadgear[] =
        {
            "SiP_M1_Helmet_7ID_Captain_NS1",
            "SiP_M1_Helmet_7ID_Captain_NS2",
            "SiP_M1_Helmet_7ID_Captain_NS3",
            "SiP_M1_Helmet_7ID_Captain_NS4",
            "SiP_M1_Helmet_7ID_Captain_NS5",
            "SiP_M1_Helmet_7ID_Captain_NS6",

            "SiP_M1_Helmet_7ID_Captain_NS1_net1",
            "SiP_M1_Helmet_7ID_Captain_NS1_net2",
            "SiP_M1_Helmet_7ID_Captain_NS1_net3",
            "SiP_M1_Helmet_7ID_Captain_NS1_net4",
            "SiP_M1_Helmet_7ID_Captain_NS1_net5",
            "SiP_M1_Helmet_7ID_Captain_NS1_net6",

            "SiP_M1_Helmet_7ID_Captain_NS2_net1",
            "SiP_M1_Helmet_7ID_Captain_NS2_net2",
            "SiP_M1_Helmet_7ID_Captain_NS2_net3",
            "SiP_M1_Helmet_7ID_Captain_NS2_net4",
            "SiP_M1_Helmet_7ID_Captain_NS2_net5",
            "SiP_M1_Helmet_7ID_Captain_NS2_net6",

            "SiP_M1_Helmet_7ID_Captain_NS3_net1",
            "SiP_M1_Helmet_7ID_Captain_NS3_net2",
            "SiP_M1_Helmet_7ID_Captain_NS3_net3",
            "SiP_M1_Helmet_7ID_Captain_NS3_net4",
            "SiP_M1_Helmet_7ID_Captain_NS3_net5",
            "SiP_M1_Helmet_7ID_Captain_NS3_net6",

            "SiP_M1_Helmet_7ID_Captain_NS4_net1",
            "SiP_M1_Helmet_7ID_Captain_NS4_net2",
            "SiP_M1_Helmet_7ID_Captain_NS4_net3",
            "SiP_M1_Helmet_7ID_Captain_NS4_net4",
            "SiP_M1_Helmet_7ID_Captain_NS4_net5",
            "SiP_M1_Helmet_7ID_Captain_NS4_net6",

            "SiP_M1_Helmet_7ID_Captain_NS5_net1",
            "SiP_M1_Helmet_7ID_Captain_NS5_net2",
            "SiP_M1_Helmet_7ID_Captain_NS5_net3",
            "SiP_M1_Helmet_7ID_Captain_NS5_net4",
            "SiP_M1_Helmet_7ID_Captain_NS5_net5",
            "SiP_M1_Helmet_7ID_Captain_NS5_net6",

            "SiP_M1_Helmet_7ID_Captain_NS6_net1",
            "SiP_M1_Helmet_7ID_Captain_NS6_net2",
            "SiP_M1_Helmet_7ID_Captain_NS6_net3",
            "SiP_M1_Helmet_7ID_Captain_NS6_net4",
            "SiP_M1_Helmet_7ID_Captain_NS6_net5",
            "SiP_M1_Helmet_7ID_Captain_NS6_net6"
        };
        headgearList[] = 
        {
            "SiP_M1_Helmet_7ID_Captain_NS1",1,
            "SiP_M1_Helmet_7ID_Captain_NS2",1,
            "SiP_M1_Helmet_7ID_Captain_NS3",1,
            "SiP_M1_Helmet_7ID_Captain_NS4",1,
            "SiP_M1_Helmet_7ID_Captain_NS5",1,
            "SiP_M1_Helmet_7ID_Captain_NS6",1,

            "SiP_M1_Helmet_7ID_Captain_NS1_net1",1,
            "SiP_M1_Helmet_7ID_Captain_NS1_net2",1,
            "SiP_M1_Helmet_7ID_Captain_NS1_net3",1,
            "SiP_M1_Helmet_7ID_Captain_NS1_net4",1,
            "SiP_M1_Helmet_7ID_Captain_NS1_net5",1,
            "SiP_M1_Helmet_7ID_Captain_NS1_net6",1,

            "SiP_M1_Helmet_7ID_Captain_NS2_net1",1,
            "SiP_M1_Helmet_7ID_Captain_NS2_net2",1,
            "SiP_M1_Helmet_7ID_Captain_NS2_net3",1,
            "SiP_M1_Helmet_7ID_Captain_NS2_net4",1,
            "SiP_M1_Helmet_7ID_Captain_NS2_net5",1,
            "SiP_M1_Helmet_7ID_Captain_NS2_net6",1,

            "SiP_M1_Helmet_7ID_Captain_NS3_net1",1,
            "SiP_M1_Helmet_7ID_Captain_NS3_net2",1,
            "SiP_M1_Helmet_7ID_Captain_NS3_net3",1,
            "SiP_M1_Helmet_7ID_Captain_NS3_net4",1,
            "SiP_M1_Helmet_7ID_Captain_NS3_net5",1,
            "SiP_M1_Helmet_7ID_Captain_NS3_net6",1,

            "SiP_M1_Helmet_7ID_Captain_NS4_net1",1,
            "SiP_M1_Helmet_7ID_Captain_NS4_net2",1,
            "SiP_M1_Helmet_7ID_Captain_NS4_net3",1,
            "SiP_M1_Helmet_7ID_Captain_NS4_net4",1,
            "SiP_M1_Helmet_7ID_Captain_NS4_net5",1,
            "SiP_M1_Helmet_7ID_Captain_NS4_net6",1,

            "SiP_M1_Helmet_7ID_Captain_NS5_net1",1,
            "SiP_M1_Helmet_7ID_Captain_NS5_net2",1,
            "SiP_M1_Helmet_7ID_Captain_NS5_net3",1,
            "SiP_M1_Helmet_7ID_Captain_NS5_net4",1,
            "SiP_M1_Helmet_7ID_Captain_NS5_net5",1,
            "SiP_M1_Helmet_7ID_Captain_NS5_net6",1,

            "SiP_M1_Helmet_7ID_Captain_NS6_net1",1,
            "SiP_M1_Helmet_7ID_Captain_NS6_net2",1,
            "SiP_M1_Helmet_7ID_Captain_NS6_net3",1,
            "SiP_M1_Helmet_7ID_Captain_NS6_net4",1,
            "SiP_M1_Helmet_7ID_Captain_NS6_net5",1,
            "SiP_M1_Helmet_7ID_Captain_NS6_net6",1
        };
        linkedItems[] = {"SiP_M1_Helmet_7ID_Captain_NS1","V_SPE_US_Vest_OD7_Asst_MG","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch","mapcas_addon_od7"};
        respawnLinkedItems[] = {"SiP_M1_Helmet_NS_captain_7id","V_SPE_US_Vest_OD7_Asst_MG","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch","mapcas_addon_od7"};
        backpack = "SiP_m1945_gpbag_45_od";
    };
    class SiP_US_Army_7id_major: SiP_US_Army_7id_2lt
    {
        displayName = "Major";
        cost = 550000;
        uniformClass = "SiP_m51_uniform_7id_major";
        hiddenSelectionsTextures[] = {"\SiP\Addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_maj_co.paa","\simc_uaf_44\data\m43_1_co.paa","","","","\simc_uaf_67\patches\7id_ca.paa","\simc_uaf_44\patches\US_Shld_major_ca.paa"};
        weapons[] = {"vn_m1911","Throw","Put"};
        magazines[] = 
        {
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag"
        };
        respawnWeapons[] = {"vn_m1911","Throw","Put"};
        respawnMagazines[] = 
        {
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag"
        };
        allowedHeadgear[] =
        {
            "SiP_M1_Helmet_7ID_Major_NS1",
            "SiP_M1_Helmet_7ID_Major_NS2",
            "SiP_M1_Helmet_7ID_Major_NS3",
            "SiP_M1_Helmet_7ID_Major_NS4",
            "SiP_M1_Helmet_7ID_Major_NS5",
            "SiP_M1_Helmet_7ID_Major_NS6",

            "SiP_M1_Helmet_7ID_Major_NS1_net1",
            "SiP_M1_Helmet_7ID_Major_NS1_net2",
            "SiP_M1_Helmet_7ID_Major_NS1_net3",
            "SiP_M1_Helmet_7ID_Major_NS1_net4",
            "SiP_M1_Helmet_7ID_Major_NS1_net5",
            "SiP_M1_Helmet_7ID_Major_NS1_net6",
            "SiP_M1_Helmet_7ID_Major_NS1_cover_canvas",

            "SiP_M1_Helmet_7ID_Major_NS2_net1",
            "SiP_M1_Helmet_7ID_Major_NS2_net2",
            "SiP_M1_Helmet_7ID_Major_NS2_net3",
            "SiP_M1_Helmet_7ID_Major_NS2_net4",
            "SiP_M1_Helmet_7ID_Major_NS2_net5",
            "SiP_M1_Helmet_7ID_Major_NS2_net6",
            "SiP_M1_Helmet_7ID_Major_NS2_cover_canvas",

            "SiP_M1_Helmet_7ID_Major_NS3_net1",
            "SiP_M1_Helmet_7ID_Major_NS3_net2",
            "SiP_M1_Helmet_7ID_Major_NS3_net3",
            "SiP_M1_Helmet_7ID_Major_NS3_net4",
            "SiP_M1_Helmet_7ID_Major_NS3_net5",
            "SiP_M1_Helmet_7ID_Major_NS3_net6",
            "SiP_M1_Helmet_7ID_Major_NS3_cover_canvas",

            "SiP_M1_Helmet_7ID_Major_NS4_net1",
            "SiP_M1_Helmet_7ID_Major_NS4_net2",
            "SiP_M1_Helmet_7ID_Major_NS4_net3",
            "SiP_M1_Helmet_7ID_Major_NS4_net4",
            "SiP_M1_Helmet_7ID_Major_NS4_net5",
            "SiP_M1_Helmet_7ID_Major_NS4_net6",
            "SiP_M1_Helmet_7ID_Major_NS4_cover_canvas",

            "SiP_M1_Helmet_7ID_Major_NS5_net1",
            "SiP_M1_Helmet_7ID_Major_NS5_net2",
            "SiP_M1_Helmet_7ID_Major_NS5_net3",
            "SiP_M1_Helmet_7ID_Major_NS5_net4",
            "SiP_M1_Helmet_7ID_Major_NS5_net5",
            "SiP_M1_Helmet_7ID_Major_NS5_net6",
            "SiP_M1_Helmet_7ID_Major_NS5_cover_canvas",

            "SiP_M1_Helmet_7ID_Major_NS6_net1",
            "SiP_M1_Helmet_7ID_Major_NS6_net2",
            "SiP_M1_Helmet_7ID_Major_NS6_net3",
            "SiP_M1_Helmet_7ID_Major_NS6_net4",
            "SiP_M1_Helmet_7ID_Major_NS6_net5",
            "SiP_M1_Helmet_7ID_Major_NS6_net6",
            "SiP_M1_Helmet_7ID_Major_NS6_cover_canvas"
        };
        headgearList[] = 
        {
            "SiP_M1_Helmet_7ID_Major_NS1",1,
            "SiP_M1_Helmet_7ID_Major_NS2",1,
            "SiP_M1_Helmet_7ID_Major_NS3",1,
            "SiP_M1_Helmet_7ID_Major_NS4",1,
            "SiP_M1_Helmet_7ID_Major_NS5",1,
            "SiP_M1_Helmet_7ID_Major_NS6",1,

            "SiP_M1_Helmet_7ID_Major_NS1_net1",1,
            "SiP_M1_Helmet_7ID_Major_NS1_net2",1,
            "SiP_M1_Helmet_7ID_Major_NS1_net3",1,
            "SiP_M1_Helmet_7ID_Major_NS1_net4",1,
            "SiP_M1_Helmet_7ID_Major_NS1_net5",1,
            "SiP_M1_Helmet_7ID_Major_NS1_net6",1,
            "SiP_M1_Helmet_7ID_Major_NS1_cover_canvas",1,

            "SiP_M1_Helmet_7ID_Major_NS2_net1",1,
            "SiP_M1_Helmet_7ID_Major_NS2_net2",1,
            "SiP_M1_Helmet_7ID_Major_NS2_net3",1,
            "SiP_M1_Helmet_7ID_Major_NS2_net4",1,
            "SiP_M1_Helmet_7ID_Major_NS2_net5",1,
            "SiP_M1_Helmet_7ID_Major_NS2_net6",1,
            "SiP_M1_Helmet_7ID_Major_NS2_cover_canvas",1,

            "SiP_M1_Helmet_7ID_Major_NS3_net1",1,
            "SiP_M1_Helmet_7ID_Major_NS3_net2",1,
            "SiP_M1_Helmet_7ID_Major_NS3_net3",1,
            "SiP_M1_Helmet_7ID_Major_NS3_net4",1,
            "SiP_M1_Helmet_7ID_Major_NS3_net5",1,
            "SiP_M1_Helmet_7ID_Major_NS3_net6",1,
            "SiP_M1_Helmet_7ID_Major_NS3_cover_canvas",1,

            "SiP_M1_Helmet_7ID_Major_NS4_net1",1,
            "SiP_M1_Helmet_7ID_Major_NS4_net2",1,
            "SiP_M1_Helmet_7ID_Major_NS4_net3",1,
            "SiP_M1_Helmet_7ID_Major_NS4_net4",1,
            "SiP_M1_Helmet_7ID_Major_NS4_net5",1,
            "SiP_M1_Helmet_7ID_Major_NS4_net6",1,
            "SiP_M1_Helmet_7ID_Major_NS4_cover_canvas",1,

            "SiP_M1_Helmet_7ID_Major_NS5_net1",1,
            "SiP_M1_Helmet_7ID_Major_NS5_net2",1,
            "SiP_M1_Helmet_7ID_Major_NS5_net3",1,
            "SiP_M1_Helmet_7ID_Major_NS5_net4",1,
            "SiP_M1_Helmet_7ID_Major_NS5_net5",1,
            "SiP_M1_Helmet_7ID_Major_NS5_net6",1,
            "SiP_M1_Helmet_7ID_Major_NS5_cover_canvas",1,

            "SiP_M1_Helmet_7ID_Major_NS6_net1",1,
            "SiP_M1_Helmet_7ID_Major_NS6_net2",1,
            "SiP_M1_Helmet_7ID_Major_NS6_net3",1,
            "SiP_M1_Helmet_7ID_Major_NS6_net4",1,
            "SiP_M1_Helmet_7ID_Major_NS6_net5",1,
            "SiP_M1_Helmet_7ID_Major_NS6_net6",1,
            "SiP_M1_Helmet_7ID_Major_NS6_cover_canvas",1
        };
        linkedItems[] = {"SiP_M1_Helmet_7ID_Major_NS1","V_SPE_US_Vest_OD7_45","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"SiP_M1_Helmet_7ID_Major_NS1","V_SPE_US_Vest_OD7_45","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        backpack = "";
    };
    class SiP_US_Army_7id_ltcol: SiP_US_Army_7id_major
    {
        displayName = "Lieutenant Colonel";
        cost = 600000;
        uniformClass = "SiP_m51_uniform_7id_ltcol";
        hiddenSelectionsTextures[] = 
        {
            "\SiP\Addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_ltcol_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "",
            "",
            "",
            "\simc_uaf_67\patches\7id_ca.paa",
            "\simc_uaf_44\patches\US_Shld_ltcol_ca.paa"
        };
        allowedHeadgear[] =
        {
            "SiP_M1_Helmet_7ID_Lt_Col_NS1",
            "SiP_M1_Helmet_7ID_Lt_Col_NS2",
            "SiP_M1_Helmet_7ID_Lt_Col_NS3",
            "SiP_M1_Helmet_7ID_Lt_Col_NS4",
            "SiP_M1_Helmet_7ID_Lt_Col_NS5",
            "SiP_M1_Helmet_7ID_Lt_Col_NS6",

            "SiP_M1_Helmet_7ID_Lt_Col_NS1_net1",
            "SiP_M1_Helmet_7ID_Lt_Col_NS1_net2",
            "SiP_M1_Helmet_7ID_Lt_Col_NS1_net3",
            "SiP_M1_Helmet_7ID_Lt_Col_NS1_net4",
            "SiP_M1_Helmet_7ID_Lt_Col_NS1_net5",
            "SiP_M1_Helmet_7ID_Lt_Col_NS1_net6",

            "SiP_M1_Helmet_7ID_Lt_Col_NS2_net1",
            "SiP_M1_Helmet_7ID_Lt_Col_NS2_net2",
            "SiP_M1_Helmet_7ID_Lt_Col_NS2_net3",
            "SiP_M1_Helmet_7ID_Lt_Col_NS2_net4",
            "SiP_M1_Helmet_7ID_Lt_Col_NS2_net5",
            "SiP_M1_Helmet_7ID_Lt_Col_NS2_net6",

            "SiP_M1_Helmet_7ID_Lt_Col_NS3_net1",
            "SiP_M1_Helmet_7ID_Lt_Col_NS3_net2",
            "SiP_M1_Helmet_7ID_Lt_Col_NS3_net3",
            "SiP_M1_Helmet_7ID_Lt_Col_NS3_net4",
            "SiP_M1_Helmet_7ID_Lt_Col_NS3_net5",
            "SiP_M1_Helmet_7ID_Lt_Col_NS3_net6",

            "SiP_M1_Helmet_7ID_Lt_Col_NS4_net1",
            "SiP_M1_Helmet_7ID_Lt_Col_NS4_net2",
            "SiP_M1_Helmet_7ID_Lt_Col_NS4_net3",
            "SiP_M1_Helmet_7ID_Lt_Col_NS4_net4",
            "SiP_M1_Helmet_7ID_Lt_Col_NS4_net5",
            "SiP_M1_Helmet_7ID_Lt_Col_NS4_net6",

            "SiP_M1_Helmet_7ID_Lt_Col_NS5_net1",
            "SiP_M1_Helmet_7ID_Lt_Col_NS5_net2",
            "SiP_M1_Helmet_7ID_Lt_Col_NS5_net3",
            "SiP_M1_Helmet_7ID_Lt_Col_NS5_net4",
            "SiP_M1_Helmet_7ID_Lt_Col_NS5_net5",
            "SiP_M1_Helmet_7ID_Lt_Col_NS5_net6",

            "SiP_M1_Helmet_7ID_Lt_Col_NS6_net1",
            "SiP_M1_Helmet_7ID_Lt_Col_NS6_net2",
            "SiP_M1_Helmet_7ID_Lt_Col_NS6_net3",
            "SiP_M1_Helmet_7ID_Lt_Col_NS6_net4",
            "SiP_M1_Helmet_7ID_Lt_Col_NS6_net5",
            "SiP_M1_Helmet_7ID_Lt_Col_NS6_net6"
        };
        headgearList[] = 
        {
            "SiP_M1_Helmet_7ID_Lt_Col_NS1",1,
            "SiP_M1_Helmet_7ID_Lt_Col_NS2",1,
            "SiP_M1_Helmet_7ID_Lt_Col_NS3",1,
            "SiP_M1_Helmet_7ID_Lt_Col_NS4",1,
            "SiP_M1_Helmet_7ID_Lt_Col_NS5",1,
            "SiP_M1_Helmet_7ID_Lt_Col_NS6",1,

            "SiP_M1_Helmet_7ID_Lt_Col_NS1_net1",1,
            "SiP_M1_Helmet_7ID_Lt_Col_NS1_net2",1,
            "SiP_M1_Helmet_7ID_Lt_Col_NS1_net3",1,
            "SiP_M1_Helmet_7ID_Lt_Col_NS1_net4",1,
            "SiP_M1_Helmet_7ID_Lt_Col_NS1_net5",1,
            "SiP_M1_Helmet_7ID_Lt_Col_NS1_net6",1,

            "SiP_M1_Helmet_7ID_Lt_Col_NS2_net1",1,
            "SiP_M1_Helmet_7ID_Lt_Col_NS2_net2",1,
            "SiP_M1_Helmet_7ID_Lt_Col_NS2_net3",1,
            "SiP_M1_Helmet_7ID_Lt_Col_NS2_net4",1,
            "SiP_M1_Helmet_7ID_Lt_Col_NS2_net5",1,
            "SiP_M1_Helmet_7ID_Lt_Col_NS2_net6",1,

            "SiP_M1_Helmet_7ID_Lt_Col_NS3_net1",1,
            "SiP_M1_Helmet_7ID_Lt_Col_NS3_net2",1,
            "SiP_M1_Helmet_7ID_Lt_Col_NS3_net3",1,
            "SiP_M1_Helmet_7ID_Lt_Col_NS3_net4",1,
            "SiP_M1_Helmet_7ID_Lt_Col_NS3_net5",1,
            "SiP_M1_Helmet_7ID_Lt_Col_NS3_net6",1,

            "SiP_M1_Helmet_7ID_Lt_Col_NS4_net1",1,
            "SiP_M1_Helmet_7ID_Lt_Col_NS4_net2",1,
            "SiP_M1_Helmet_7ID_Lt_Col_NS4_net3",1,
            "SiP_M1_Helmet_7ID_Lt_Col_NS4_net4",1,
            "SiP_M1_Helmet_7ID_Lt_Col_NS4_net5",1,
            "SiP_M1_Helmet_7ID_Lt_Col_NS4_net6",1,

            "SiP_M1_Helmet_7ID_Lt_Col_NS5_net1",1,
            "SiP_M1_Helmet_7ID_Lt_Col_NS5_net2",1,
            "SiP_M1_Helmet_7ID_Lt_Col_NS5_net3",1,
            "SiP_M1_Helmet_7ID_Lt_Col_NS5_net4",1,
            "SiP_M1_Helmet_7ID_Lt_Col_NS5_net5",1,
            "SiP_M1_Helmet_7ID_Lt_Col_NS5_net6",1,

            "SiP_M1_Helmet_7ID_Lt_Col_NS6_net1",1,
            "SiP_M1_Helmet_7ID_Lt_Col_NS6_net2",1,
            "SiP_M1_Helmet_7ID_Lt_Col_NS6_net3",1,
            "SiP_M1_Helmet_7ID_Lt_Col_NS6_net4",1,
            "SiP_M1_Helmet_7ID_Lt_Col_NS6_net5",1,
            "SiP_M1_Helmet_7ID_Lt_Col_NS6_net6",1
        };
        linkedItems[] = {"SiP_M1_Helmet_7ID_Lt_Col_NS1","V_SPE_US_Vest_OD7_45","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"SiP_M1_Helmet_7ID_Lt_Col_NS1","V_SPE_US_Vest_OD7_45","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
    };
    class SiP_US_Army_7id_col: SiP_US_Army_7id_major
    {
        displayName = "Colonel";
        cost = 650000;
        uniformClass = "SiP_m51_uniform_7id_col";
        hiddenSelectionsTextures[] = 
        {
            "\SiP\Addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_col_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "",
            "",
            "",
            "\simc_uaf_67\patches\7id_ca.paa",
            "\simc_uaf_44\patches\US_Shld_col_ca.paa"
        };
        allowedHeadgear[] =
        {
            "SiP_M1_Helmet_7ID_Col_NS1",
            "SiP_M1_Helmet_7ID_Col_NS2",
            "SiP_M1_Helmet_7ID_Col_NS3",
            "SiP_M1_Helmet_7ID_Col_NS4",
            "SiP_M1_Helmet_7ID_Col_NS5",
            "SiP_M1_Helmet_7ID_Col_NS6",

            "SiP_M1_Helmet_7ID_Col_NS1_net1",
            "SiP_M1_Helmet_7ID_Col_NS1_net2",
            "SiP_M1_Helmet_7ID_Col_NS1_net3",
            "SiP_M1_Helmet_7ID_Col_NS1_net4",
            "SiP_M1_Helmet_7ID_Col_NS1_net5",
            "SiP_M1_Helmet_7ID_Col_NS1_net6",

            "SiP_M1_Helmet_7ID_Col_NS2_net1",
            "SiP_M1_Helmet_7ID_Col_NS2_net2",
            "SiP_M1_Helmet_7ID_Col_NS2_net3",
            "SiP_M1_Helmet_7ID_Col_NS2_net4",
            "SiP_M1_Helmet_7ID_Col_NS2_net5",
            "SiP_M1_Helmet_7ID_Col_NS2_net6",

            "SiP_M1_Helmet_7ID_Col_NS3_net1",
            "SiP_M1_Helmet_7ID_Col_NS3_net2",
            "SiP_M1_Helmet_7ID_Col_NS3_net3",
            "SiP_M1_Helmet_7ID_Col_NS3_net4",
            "SiP_M1_Helmet_7ID_Col_NS3_net5",
            "SiP_M1_Helmet_7ID_Col_NS3_net6",

            "SiP_M1_Helmet_7ID_Col_NS4_net1",
            "SiP_M1_Helmet_7ID_Col_NS4_net2",
            "SiP_M1_Helmet_7ID_Col_NS4_net3",
            "SiP_M1_Helmet_7ID_Col_NS4_net4",
            "SiP_M1_Helmet_7ID_Col_NS4_net5",
            "SiP_M1_Helmet_7ID_Col_NS4_net6",

            "SiP_M1_Helmet_7ID_Col_NS5_net1",
            "SiP_M1_Helmet_7ID_Col_NS5_net2",
            "SiP_M1_Helmet_7ID_Col_NS5_net3",
            "SiP_M1_Helmet_7ID_Col_NS5_net4",
            "SiP_M1_Helmet_7ID_Col_NS5_net5",
            "SiP_M1_Helmet_7ID_Col_NS5_net6",

            "SiP_M1_Helmet_7ID_Col_NS6_net1",
            "SiP_M1_Helmet_7ID_Col_NS6_net2",
            "SiP_M1_Helmet_7ID_Col_NS6_net3",
            "SiP_M1_Helmet_7ID_Col_NS6_net4",
            "SiP_M1_Helmet_7ID_Col_NS6_net5",
            "SiP_M1_Helmet_7ID_Col_NS6_net6"
        };
        headgearList[] = 
        {
            "SiP_M1_Helmet_7ID_Col_NS1",1,
            "SiP_M1_Helmet_7ID_Col_NS2",1,
            "SiP_M1_Helmet_7ID_Col_NS3",1,
            "SiP_M1_Helmet_7ID_Col_NS4",1,
            "SiP_M1_Helmet_7ID_Col_NS5",1,
            "SiP_M1_Helmet_7ID_Col_NS6",1,

            "SiP_M1_Helmet_7ID_Col_NS1_net1",1,
            "SiP_M1_Helmet_7ID_Col_NS1_net2",1,
            "SiP_M1_Helmet_7ID_Col_NS1_net3",1,
            "SiP_M1_Helmet_7ID_Col_NS1_net4",1,
            "SiP_M1_Helmet_7ID_Col_NS1_net5",1,
            "SiP_M1_Helmet_7ID_Col_NS1_net6",1,

            "SiP_M1_Helmet_7ID_Col_NS2_net1",1,
            "SiP_M1_Helmet_7ID_Col_NS2_net2",1,
            "SiP_M1_Helmet_7ID_Col_NS2_net3",1,
            "SiP_M1_Helmet_7ID_Col_NS2_net4",1,
            "SiP_M1_Helmet_7ID_Col_NS2_net5",1,
            "SiP_M1_Helmet_7ID_Col_NS2_net6",1,

            "SiP_M1_Helmet_7ID_Col_NS3_net1",1,
            "SiP_M1_Helmet_7ID_Col_NS3_net2",1,
            "SiP_M1_Helmet_7ID_Col_NS3_net3",1,
            "SiP_M1_Helmet_7ID_Col_NS3_net4",1,
            "SiP_M1_Helmet_7ID_Col_NS3_net5",1,
            "SiP_M1_Helmet_7ID_Col_NS3_net6",1,

            "SiP_M1_Helmet_7ID_Col_NS4_net1",1,
            "SiP_M1_Helmet_7ID_Col_NS4_net2",1,
            "SiP_M1_Helmet_7ID_Col_NS4_net3",1,
            "SiP_M1_Helmet_7ID_Col_NS4_net4",1,
            "SiP_M1_Helmet_7ID_Col_NS4_net5",1,
            "SiP_M1_Helmet_7ID_Col_NS4_net6",1,

            "SiP_M1_Helmet_7ID_Col_NS5_net1",1,
            "SiP_M1_Helmet_7ID_Col_NS5_net2",1,
            "SiP_M1_Helmet_7ID_Col_NS5_net3",1,
            "SiP_M1_Helmet_7ID_Col_NS5_net4",1,
            "SiP_M1_Helmet_7ID_Col_NS5_net5",1,
            "SiP_M1_Helmet_7ID_Col_NS5_net6",1,

            "SiP_M1_Helmet_7ID_Col_NS6_net1",1,
            "SiP_M1_Helmet_7ID_Col_NS6_net2",1,
            "SiP_M1_Helmet_7ID_Col_NS6_net3",1,
            "SiP_M1_Helmet_7ID_Col_NS6_net4",1,
            "SiP_M1_Helmet_7ID_Col_NS6_net5",1,
            "SiP_M1_Helmet_7ID_Col_NS6_net6",1
        };
        linkedItems[] = {"SiP_M1_Helmet_7ID_Col_NS1","V_SPE_US_Vest_OD7_45","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"SiP_M1_Helmet_7ID_Col_NS1","V_SPE_US_Vest_OD7_45","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
    };
};

class CfgGroups
{
    class West
    {
        class SiP_US_Army
        {
            name = "US Army [Korea]";
            class SiP_7ID_Infantry_Squads
            {
                name = "7th Infantry Division Squads";
                class SiP_7ID_Rifle_Squad_1
                {
                    name = "Rifle Squad 1";
                    side = 1;
                    faction = "SiP_US_Army";
                    rarityGroup = 0.8;
                    class Unit0
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_7id_Sergeant";
                        rank = "SERGEANT";
                        position[] = {0,5,0};
                    };
                    class Unit1
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_7id_Corporal";
                        rank = "CORPORAL";
                        position[] = {3,0,0};
                    };
                    class Unit2
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_7id_rifleman1";
                        rank = "PRIVATE";
                        position[] = {5,0,0};
                    };
                    class Unit3
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_7id_autorifleman";
                        rank = "CORPORAL";
                        position[] = {7,0,0};
                    };
                    class Unit4
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_7id_autorifleman";
                        rank = "CORPORAL";
                        position[] = {9,0,0};
                    };
                    class Unit5
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_7id_rifleman2";
                        rank = "PRIVATE";
                        position[] = {-3,0,0};
                    };
                    class Unit6
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_7id_rifleman2";
                        rank = "PRIVATE";
                        position[] = {-5,0,0};
                    };
                    class Unit7
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_7id_grenadier";
                        rank = "PRIVATE";
                        position[] = {-7,0,0};
                    };
                    class Unit8
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_7id_grenadier";
                        rank = "PRIVATE";
                        position[] = {-9,0,0};
                    };
                };
                class SiP_7ID_Rifle_Squad_2: SiP_7ID_Rifle_Squad_1
                {
                    name = "Rifle Squad 2";
                    class Unit0
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_7id_Sergeant_1stclass";
                        rank = "SERGEANT";
                        position[] = {0,5,0};
                    };
                    class Unit1
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_7id_Corporal";
                        rank = "CORPORAL";
                        position[] = {3,0,0};
                    };
                    class Unit2
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_7id_rifleman1";
                        rank = "PRIVATE";
                        position[] = {5,0,0};
                    };
                    class Unit3
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_7id_autorifleman";
                        rank = "CORPORAL";
                        position[] = {7,0,0};
                    };
                    class Unit4
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_7id_autorifleman";
                        rank = "CORPORAL";
                        position[] = {9,0,0};
                    };
                    class Unit5
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_7id_rifleman2";
                        rank = "PRIVATE";
                        position[] = {-3,0,0};
                    };
                    class Unit6
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_7id_smg2";
                        rank = "PRIVATE";
                        position[] = {-5,0,0};
                    };
                    class Unit7
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_7id_grenadier";
                        rank = "PRIVATE";
                        position[] = {-7,0,0};
                    };
                    class Unit8
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_7id_sniper2";
                        rank = "PRIVATE";
                        position[] = {-9,0,0};
                    };
                };
                class SiP_7ID_Rifle_Squad_3: SiP_7ID_Rifle_Squad_2
                {
                    name = "Rifle Squad 3";
                    class Unit0
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_7id_Master_Sergeant";
                        rank = "SERGEANT";
                        position[] = {0,5,0};
                    };
                    class Unit1
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_7id_Sergeant";
                        rank = "CORPORAL";
                        position[] = {3,0,0};
                    };
                    class Unit2
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_7id_rifleman1";
                        rank = "PRIVATE";
                        position[] = {5,0,0};
                    };
                    class Unit3
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_7id_autorifleman";
                        rank = "CORPORAL";
                        position[] = {7,0,0};
                    };
                    class Unit4
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_7id_autorifleman";
                        rank = "CORPORAL";
                        position[] = {9,0,0};
                    };
                    class Unit5
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_7id_smg1";
                        rank = "PRIVATE";
                        position[] = {-3,0,0};
                    };
                    class Unit6
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_7id_m20_bazooka";
                        rank = "PRIVATE";
                        position[] = {-5,0,0};
                    };
                    class Unit7
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_7id_grenadier";
                        rank = "PRIVATE";
                        position[] = {-7,0,0};
                    };
                    class Unit8
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_7id_sniper1";
                        rank = "PRIVATE";
                        position[] = {-9,0,0};
                    };
                };
            };
        };
    };
};