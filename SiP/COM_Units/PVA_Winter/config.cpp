class cfgPatches
{
    class SiP_Patch_pva_winter_units
    {
        Name = "Suicide Is Painless - Korean War Mod - People's Volunteer Army Winter Units";
        addonRootClass = "SiP_Patch_PVA";
        requiredAddons[] = 
        {
            "characters_f_vietnam",
            "characters_f_vietnam_02",
            "characters_f_vietnam_03"
        };
        units[] = 
        {
            "SiP_PVA_rifleman1_w",
            "SiP_PVA_rifleman2_w",
            "SiP_PVA_rifleman3_w",
            "SiP_PVA_rifleman4_w",
            "SiP_PVA_rifleman5_w",
            "SiP_PVA_rifleman6_w",
            "SiP_PVA_rifleman7_w",
            "SiP_PVA_rifleman8_w",
            "SiP_PVA_rifleman9_w",
            "SiP_PVA_smg1_w",
            "SiP_PVA_smg2_w",
            "SiP_PVA_smg3_w",
            "SiP_PVA_smg4_w",
            "SiP_PVA_machinegunner1_w",
            "SiP_PVA_machinegunner2_w",
            "SiP_PVA_sniper_w",
            "SiP_PVA_nco_w",
            "SiP_PVA_Officer_w",
            "SiP_PVA_Driver_w",
            "SiP_PVA_gunner_w"
        };
        weapons[] = {};
    };
};

class CfgVehicles
{
    class LIB_SOV_Soldier_base;

    class SiP_PVA_rifleman1_w: LIB_SOV_Soldier_base
    {
        displayName = "Rifleman (Mosin)";
        identityTypes[] = {"LanguageCHI_F","vn_o_asian_viet","Head_Asian"};
        faction = "SiP_PVA_w";
        editorCategory = "SiP_PVA_w_Editor_Category";
        editorSubcategory = "SiP_Infantry_Editor_Subcategory";
        editorPreview = "";
        portrait = "";
        scope = 2;
        side = 0;
        accuracy = 3.9;
        genericNames = "ChineseMen";
        model = "\NORTH\NF_Uniforms\Telogreika\Telogreika.p3d";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\SiP\Addons\sip_pva_gear\uniforms\data\textures\telogreika2.paa",""};
        role = "Rifleman";
        icon = "iconManRifleman";
        weapons[] = {"SiP_mosin_m9130","Throw","Put"};
        magazines[] = {"SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag"};
        respawnWeapons[] = {"SiP_mosin_m9130","Throw","Put"};
        respawnMagazines[] = {"SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag"};
        allowedHeadgear[] = {"SiP_PVA_Ushanka",1,"SiP_PVA_Ushanka2",1};
        headgearList[] = {"SiP_PVA_Ushanka",0.5,"SiP_PVA_Ushanka2",0.5};
        linkedItems[] = {"SiP_PVA_Ushanka","EAW_Chinese_Bandolier_Rifle"};
        respawnLinkedItems[] = {"SiP_PVA_Ushanka","EAW_Chinese_Bandolier_Rifle"};
        items[] = {"vn_o_item_firstaidkit"};
        respawnItems[] = {"vn_o_item_firstaidkit"};
        backpack = "SiP_PVA_backpack";
        uniformClass = "SiP_PVA_Uniform_Winter";
    };
    class SiP_PVA_rifleman2_w: SiP_PVA_rifleman1_w
    {
        displayName = "Rifleman (SVT)";
        weapons[] = {"SiP_svt40","Throw","Put"};
        magazines[] = {"SiP_svt_10_mag","SiP_svt_10_mag","SiP_svt_10_mag","SiP_svt_10_mag","SiP_svt_10_mag","SiP_svt_10_mag","SiP_svt_10_mag","SiP_svt_10_mag","SiP_svt_10_mag","SiP_svt_10_mag","SiP_svt_10_mag"};
        respawnWeapons[] = {"SiP_svt40","Throw","Put"};
        respawnMagazines[] = {"SiP_svt_10_mag","SiP_svt_10_mag","SiP_svt_10_mag","SiP_svt_10_mag","SiP_svt_10_mag","SiP_svt_10_mag","SiP_svt_10_mag","SiP_svt_10_mag","SiP_svt_10_mag","SiP_svt_10_mag","SiP_svt_10_mag"};
        backpack = "SiP_PVA_backpack_svt";
    };
    class SiP_PVA_rifleman3_w: SiP_PVA_rifleman1_w
    {
        displayName = "Rifleman (Type 99)";
        weapons[] = {"SiP_type99","Throw","Put"};
        magazines[] = {"SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag"};
        respawnWeapons[] = {"SiP_type99","Throw","Put"};
        respawnMagazines[] = {"SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag"};
    };
    class SiP_PVA_rifleman4_w: SiP_PVA_rifleman3_w
    {
        displayName = "Rifleman (Type 30)";
        weapons[] = {"SiP_type30","Throw","Put"};
        respawnWeapons[] = {"SiP_type30","Throw","Put"};
    };
    class SiP_PVA_rifleman5_w: SiP_PVA_rifleman3_w
    {
        displayName = "Rifleman (Type 38)";
        weapons[] = {"SiP_type38","Throw","Put"};
        respawnWeapons[] = {"SiP_type38","Throw","Put"};
    };
    class SiP_PVA_rifleman6_w: SiP_PVA_rifleman3_w
    {
        displayName = "Rifleman (Type 97)";
        weapons[] = {"EAW_Type97_Sniper_Stock2","Throw","Put"};
        respawnWeapons[] = {"EAW_Type97_Sniper_Stock2","Throw","Put"};
    };
    class SiP_PVA_rifleman7_w: SiP_PVA_rifleman1_w
    {
        displayName = "Rifleman (Kar98)";
        weapons[] = {"SiP_kar98k","Throw","Put"};
        magazines[] = {"vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag"};
        respawnWeapons[] = {"SiP_kar98k","Throw","Put"};
        respawnMagazines[] = {"vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag"};
    };
    class SiP_PVA_rifleman8_w: SiP_PVA_rifleman7_w
    {
        displayName = "Rifleman (Hanyang 88)";
        weapons[] = {"SiP_Hanyang88","Throw","Put"};
        respawnWeapons[] = {"SiP_Hanyang88","Throw","Put"};
    };
    class SiP_PVA_rifleman9_w: SiP_PVA_rifleman7_w
    {
        displayName = "Rifleman (Type 24)";
        weapons[] = {"SiP_Type24_rifle","Throw","Put"};
        respawnWeapons[] = {"SiP_Type24_rifle","Throw","Put"};
    };
    class SiP_PVA_smg1_w: SiP_PVA_rifleman1_w
    {
        displayName = "SMG-Soldier (PPSh)";
        cost = 115000;
        threat[] = {0.7,0.1,0.1};
        icon = "iconManSMG";
        role = "Assault";
        weapons[] = {"vn_ppsh41","Throw","Put"};
        magazines[] = {"vn_ppsh41_71_mag","vn_ppsh41_71_mag","vn_ppsh41_71_mag","vn_ppsh41_71_mag","vn_ppsh41_71_mag"};
        respawnWeapons[] = {"vn_ppsh41","Throw","Put"};
        respawnMagazines[] = {"vn_ppsh41_71_mag","vn_ppsh41_71_mag","vn_ppsh41_71_mag","vn_ppsh41_71_mag","vn_ppsh41_71_mag"};
        linkedItems[] = {"SiP_PVA_Ushanka2","V_NORTH_SOV_Belt_SMG_2","SiP_PVA_pps_belt_nvg_slot"};
        respawnLinkedItems[] = {"SiP_PVA_Ushanka2","V_NORTH_SOV_Belt_SMG_2","SiP_PVA_pps_belt_nvg_slot"};
        backpack = "SiP_PVA_backpack_PPSh";
    };
    class SiP_PVA_smg2_w: SiP_PVA_smg1_w
    {
        displayName = "SMG-Soldier (PPS)";
        weapons[] = {"vn_pps43","Throw","Put"};
        magazines[] = {"vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag"};
        respawnWeapons[] = {"vn_pps43","Throw","Put"};
        respawnMagazines[] = {"vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag"};
        linkedItems[] = {"SiP_PVA_Ushanka","V_LIB_SOV_RA_PPShBelt_Mag","SiP_PVA_bedroll_nvg_slot"};
        respawnLinkedItems[] = {"SiP_PVA_Ushanka","V_LIB_SOV_RA_PPShBelt_Mag","SiP_PVA_bedroll_nvg_slot"};
        backpack = "SiP_PVA_backpack_PPS";
    };
    class SiP_PVA_smg3_w: SiP_PVA_smg2_w
    {
        displayName = "SMG-Soldier (Type 100)";
        weapons[] = {"SiP_type100","Throw","Put"};
        magazines[] = {"SiP_type100_30_mag","SiP_type100_30_mag","SiP_type100_30_mag","SiP_type100_30_mag","SiP_type100_30_mag","SiP_type100_30_mag"};
        respawnWeapons[] = {"SiP_type100","Throw","Put"};
        respawnMagazines[] = {"SiP_type100_30_mag","SiP_type100_30_mag","SiP_type100_30_mag","SiP_type100_30_mag","SiP_type100_30_mag","SiP_type100_30_mag"};
        backpack = "SiP_PVA_backpack_type100";
    };
    class SiP_PVA_smg4_w: SiP_PVA_smg3_w
    {
        displayName = "SMG-Soldier (Thompson)";
        weapons[] = {"SiP_m1928A1_late_thompson","Throw","Put"};
        magazines[] = {"NORTH_20rnd_Thompson_mag","NORTH_20rnd_Thompson_mag","NORTH_20rnd_Thompson_mag","NORTH_20rnd_Thompson_mag","NORTH_20rnd_Thompson_mag","NORTH_20rnd_Thompson_mag"};
        respawnWeapons[] = {"SiP_m1928A1_late_thompson","Throw","Put"};
        respawnMagazines[] = {"NORTH_20rnd_Thompson_mag","NORTH_20rnd_Thompson_mag","NORTH_20rnd_Thompson_mag","NORTH_20rnd_Thompson_mag","NORTH_20rnd_Thompson_mag","NORTH_20rnd_Thompson_mag"};
        backpack = "SiP_PVA_backpack_tommy";
    };
    class SiP_PVA_machinegunner1_w: SiP_PVA_smg1_w
    {
        displayName = "Machinegunner (DP28)";
        icon = "iconManMG";
        role = "MachineGunner";
        cost = 125000;
        threat[] = {1,0.1,0.4};
        weapons[] = {"vn_dp28","Throw","Put"};
        magazines[] = {"vn_dp28_mag","vn_dp28_mag","vn_dp28_mag","vn_dp28_mag","vn_dp28_mag","vn_dp28_mag"};
        respawnWeapons[] = {"vn_dp28","Throw","Put"};
        respawnMagazines[] = {"vn_dp28_mag","vn_dp28_mag","vn_dp28_mag","vn_dp28_mag","vn_dp28_mag","vn_dp28_mag"};
        linkedItems[] = {"SiP_type56_cap2","EAW_Chinese_Bandolier_Rifle_Grey_Alt"};
        respawnLinkedItems[] = {"SiP_type56_cap2","EAW_Chinese_Bandolier_Rifle_Grey_Alt"};
        backpack = "SiP_PVA_backpack_dp28";
    };
    class SiP_PVA_machinegunner2_w: SiP_PVA_machinegunner1_w
    {
        displayName = "Machinegunner (ZB26)";
        weapons[] = {"SiP_ZB26","Throw","Put"};
        magazines[] = {"SiP_ZB26_20_mag","SiP_ZB26_20_mag","SiP_ZB26_20_mag","SiP_ZB26_20_mag","SiP_ZB26_20_mag","SiP_ZB26_20_mag","SiP_ZB26_20_mag","SiP_ZB26_20_mag","SiP_ZB26_20_mag"};
        respawnWeapons[] = {"SiP_ZB26","Throw","Put"};
        respawnMagazines[] = {"SiP_ZB26_20_mag","SiP_ZB26_20_mag","SiP_ZB26_20_mag","SiP_ZB26_20_mag","SiP_ZB26_20_mag","SiP_ZB26_20_mag","SiP_ZB26_20_mag","SiP_ZB26_20_mag","SiP_ZB26_20_mag"};
        linkedItems[] = {"SiP_type56_cap2","EAW_ZB_Bandolier"};
        respawnLinkedItems[] = {"SiP_type56_cap2","EAW_ZB_Bandolier"};
        backpack = "SiP_PVA_backpack_ZB26";
    };
    class SiP_PVA_sniper_w: SiP_PVA_rifleman1_w
    {
        displayName = "Sniper";
        role = "Marksman";
        cost = 350000;
        accuracy = 3.9;
        weapons[] = {"SiP_mosin_pu","Throw","Put"};
        respawnWeapons[] = {"SiP_mosin_pu","Throw","Put"};
        backpack = "SiP_PVA_backpack";
    };
    class SiP_PVA_nco_w: SiP_PVA_smg2_w
    {
        displayName = "NCO";
        icon = "iconManLeader";
        cost = 115000;
        weapons[] = {"vn_pps43","vn_tt33","Throw","Put"};
        magazines[] = {"vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag"};
        respawnWeapons[] = {"vn_pps43","Throw","Put"};
        respawnMagazines[] = {"vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag"};
        linkedItems[] = {"SiP_PVA_Ushanka2","SiP_PVA_fieldbelt","V_NORTH_SOV_Belt_Pistol_5"};
		respawnLinkedItems[] = {"SiP_PVA_Ushanka2","SiP_PVA_fieldbelt","V_NORTH_SOV_Belt_Pistol_5"};
        backpack = "SiP_PVA_backpack_PPS_pistol";
    };
    class SiP_PVA_Officer_w: SiP_PVA_nco_w
    {
        displayName = "Officer";
        icon = "iconManOfficer";
        cost = 600000;
        model = "\NORTH\NF_Uniforms\Officer_Jacket\Officer_Jacket.p3d";
		hiddenSelectionsTextures[] = {"\NORTH\NF_SOV_Uniforms\data\Obr31_Polushubuk\obr31_w_Polushubuk_2_CO",""};
		uniformClass = "U_NORTH_SOV_Obr31_W_Polushubuk_2";
        weapons[] = {"vn_tt33","Throw","Put"};
        magazines[] = {"vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag"};
        respawnWeapons[] = {"vn_tt33","Throw","Put"};
        respawnMagazines[] = {"vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag"};
        allowedHeadgear[] = {"SiP_PVA_Ushanka"};
        headgearList[] = {"SiP_PVA_Ushanka",1};
        linkedItems[] = {"SiP_PVA_Ushanka","V_NORTH_SOV_Belt_Pistol_5"};
        respawnLinkedItems[] = {"SiP_PVA_Ushanka","V_NORTH_SOV_Belt_Pistol_5"};
        backpack = "EAW_Bedroll_Brown";
    };
    class SiP_PVA_gunner_w: SiP_PVA_smg1_w
    {
        displayName = "Gunner";
        accuracy = 3.9;
        icon = "iconMan";
        editorSubcategory = "SiP_Vehicle_Crews_Editor_Subcategory";
        weapons[] = {"vn_ppsh41","Throw","Put"};
        magazines[] = {"vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag"};
        respawnWeapons[] = {"vn_ppsh41","Throw","Put"};
        respawnMagazines[] = {"vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag"};
        backpack = "";
    };
    class SiP_PVA_Driver_w: SiP_PVA_rifleman1_w
    {
        displayName = "Driver";
        icon = "iconMan";
        editorSubcategory = "SiP_Vehicle_Crews_Editor_Subcategory";
        weapons[] = {"SiP_mosin_m38","Throw","Put"};
        magazines[] = {"SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag"};
        respawnWeapons[] = {"SiP_mosin_m38","Throw","Put"};
        respawnMagazines[] = {"SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag"};
    };
};

class CfgGroups
{
    class East
    {
        class SiP_PVA_w_group
        {
            name = "People's Volunteer Army - Winter";
            class PVA_Infantry_Squads
            {
                name = "Infantry Squads";
                class PVA_SMG_Squad_w
                {
                    name = "SMG Squad - Winter";
                    side = 0;
                    faction = "SiP_PVA";
                    rarityGroup = 0.8;
                    class Unit0
                    {
                        side = 0;
                        vehicle = "SiP_PVA_nco_w";
                        rank = "SERGEANT";
                        position[] = {0,5,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "SiP_PVA_machinegunner1_w";
                        rank = "CORPORAL";
                        position[] = {3,0,0};
                    };
                    class Unit2
                    {
                        side = 0;
                        vehicle = "SiP_PVA_machinegunner2_w";
                        rank = "PRIVATE";
                        position[] = {5,0,0};
                    };
                    class Unit3
                    {
                        side = 0;
                        vehicle = "SiP_PVA_smg1_w";
                        rank = "PRIVATE";
                        position[] = {7,0,0};
                    };
                    class Unit4
                    {
                        side = 0;
                        vehicle = "SiP_PVA_smg1_w";
                        rank = "PRIVATE";
                        position[] = {9,0,0};
                    };
                    class Unit5
                    {
                        side = 0;
                        vehicle = "SiP_PVA_smg1_w";
                        rank = "PRIVATE";
                        position[] = {-3,0,0};
                    };
                    class Unit6
                    {
                        side = 0;
                        vehicle = "SiP_PVA_smg4_w";
                        rank = "PRIVATE";
                        position[] = {-5,0,0};
                    };
                    class Unit7
                    {
                        side = 0;
                        vehicle = "SiP_PVA_smg2_w";
                        rank = "PRIVATE";
                        position[] = {-7,0,0};
                    };
                    class Unit8
                    {
                        side = 0;
                        vehicle = "SiP_PVA_smg2_w";
                        rank = "PRIVATE";
                        position[] = {-9,0,0};
                    };
                    class Unit9
                    {
                        side = 0;
                        vehicle = "SiP_PVA_smg1_w";
                        rank = "PRIVATE";
                        position[] = {-11,0,0};
                    };
                    class Unit10
                    {
                        side = 0;
                        vehicle = "SiP_PVA_smg3_w";
                        rank = "PRIVATE";
                        position[] = {-13,0,0};
                    };
                };
                class PVA_Rifle_Squad_w
                {
                    name = "Rifle Squad - Winter";
                    side = 0;
                    faction = "SiP_PVA";
                    rarityGroup = 0.8;
                    class Unit0
                    {
                        side = 0;
                        vehicle = "SiP_PVA_nco_w";
                        rank = "SERGEANT";
                        position[] = {0,5,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "SiP_PVA_rifleman2_w";
                        rank = "CORPORAL";
                        position[] = {3,0,0};
                    };
                    class Unit2
                    {
                        side = 0;
                        vehicle = "SiP_PVA_rifleman3_w";
                        rank = "PRIVATE";
                        position[] = {5,0,0};
                    };
                    class Unit3
                    {
                        side = 0;
                        vehicle = "SiP_PVA_machinegunner2_w";
                        rank = "PRIVATE";
                        position[] = {7,0,0};
                    };
                    class Unit4
                    {
                        side = 0;
                        vehicle = "SiP_PVA_rifleman1_w";
                        rank = "PRIVATE";
                        position[] = {9,0,0};
                    };
                    class Unit5
                    {
                        side = 0;
                        vehicle = "SiP_PVA_rifleman6_w";
                        rank = "PRIVATE";
                        position[] = {-3,0,0};
                    };
                    class Unit6
                    {
                        side = 0;
                        vehicle = "SiP_PVA_rifleman4";
                        rank = "PRIVATE";
                        position[] = {-5,0,0};
                    };
                    class Unit7
                    {
                        side = 0;
                        vehicle = "SiP_PVA_rifleman1_w";
                        rank = "PRIVATE";
                        position[] = {-7,0,0};
                    };
                    class Unit8
                    {
                        side = 0;
                        vehicle = "SiP_PVA_rifleman7_w";
                        rank = "PRIVATE";
                        position[] = {-9,0,0};
                    };
                    class Unit9
                    {
                        side = 0;
                        vehicle = "SiP_PVA_rifleman9_w";
                        rank = "PRIVATE";
                        position[] = {-11,0,0};
                    };
                    class Unit10
                    {
                        side = 0;
                        vehicle = "SiP_PVA_rifleman1_w";
                        rank = "PRIVATE";
                        position[] = {-13,0,0};
                    };
                };
                class PVA_Mixed_Squad_w
                {
                    name = "Mixed Arms Squad - Winter";
                    side = 0;
                    faction = "SiP_PVA";
                    rarityGroup = 0.8;
                    class Unit0
                    {
                        side = 0;
                        vehicle = "SiP_PVA_nco_w";
                        rank = "SERGEANT";
                        position[] = {0,5,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "SiP_PVA_machinegunner1_w";
                        rank = "CORPORAL";
                        position[] = {3,0,0};
                    };
                    class Unit2
                    {
                        side = 0;
                        vehicle = "SiP_PVA_rifleman9_w";
                        rank = "PRIVATE";
                        position[] = {5,0,0};
                    };
                    class Unit3
                    {
                        side = 0;
                        vehicle = "SiP_PVA_smg1_w";
                        rank = "PRIVATE";
                        position[] = {7,0,0};
                    };
                    class Unit4
                    {
                        side = 0;
                        vehicle = "SiP_PVA_smg1_w";
                        rank = "PRIVATE";
                        position[] = {9,0,0};
                    };
                    class Unit5
                    {
                        side = 0;
                        vehicle = "SiP_PVA_smg1_w";
                        rank = "PRIVATE";
                        position[] = {-3,0,0};
                    };
                    class Unit6
                    {
                        side = 0;
                        vehicle = "SiP_PVA_rifleman7_w";
                        rank = "PRIVATE";
                        position[] = {-5,0,0};
                    };
                    class Unit7
                    {
                        side = 0;
                        vehicle = "SiP_PVA_rifleman1_w";
                        rank = "PRIVATE";
                        position[] = {-7,0,0};
                    };
                    class Unit8
                    {
                        side = 0;
                        vehicle = "SiP_PVA_rifleman6_w";
                        rank = "PRIVATE";
                        position[] = {-9,0,0};
                    };
                    class Unit9
                    {
                        side = 0;
                        vehicle = "SiP_PVA_rifleman2_w";
                        rank = "PRIVATE";
                        position[] = {-11,0,0};
                    };
                    class Unit10
                    {
                        side = 0;
                        vehicle = "SiP_PVA_smg2_w";
                        rank = "PRIVATE";
                        position[] = {-13,0,0};
                    };
                };
            };
            class PVA_Infantry_platoons
            {
                name = "Infantry Platoons";
                class PVA_Infantry_platoon_w
                {
                    name = "Rifle Platoon - Winter";
                    side = 0;
                    faction = "SiP_PVA";
                    rarityGroup = 0.8;
                    class unit_1
                    {
                        side = 0;
                        rank = "LIEUTENANT";
                        position[] = {0,-5,0};
                        vehicle = "SiP_PVA_Officer_w";
                    };
                    class unit_2
                    {
                        side = 0;
                        rank = "SERGEANT";
                        position[] = {0,-10,0};
                        vehicle = "SiP_PVA_nco_w";
                    };
                    class unit_3
                    {
                        side = 0;
                        rank = "SERGEANT";
                        position[] = {0,-15,0};
                        vehicle = "SiP_PVA_rifleman7_w";
                    };
                    class unit_4
                    {
                        side = 0;
                        rank = "CORPORAL";
                        position[] = {0,-20,0};
                        vehicle = "SiP_PVA_smg1_w";
                    };
                    class unit_5
                    {
                        side = 0;
                        rank = "CORPORAL";
                        position[] = {0,-25,0};
                        vehicle = "SiP_PVA_rifleman2_w";
                    };
                    class unit_6
                    {
                        side = 0;
                        rank = "PRIVATE";
                        position[] = {0,-30,0};
                        vehicle = "SiP_PVA_rifleman5";
                    };
                    class unit_7
                    {
                        side = 0;
                        rank = "PRIVATE";
                        position[] = {0,-35,0};
                        vehicle = "SiP_PVA_smg1_w";
                    };
                    class unit_8
                    {
                        side = 0;
                        rank = "PRIVATE";
                        position[] = {0,-40,0};
                        vehicle = "SiP_PVA_rifleman1_w";
                    };
                    class unit_9
                    {
                        side = 0;
                        rank = "PRIVATE";
                        position[] = {0,-45,0};
                        vehicle = "SiP_PVA_smg1_w";
                    };
                    class unit_10
                    {
                        side = 0;
                        rank = "PRIVATE";
                        position[] = {0,-50,0};
                        vehicle = "SiP_PVA_rifleman6_w";
                    };
                    class unit_11
                    {
                        side = 0;
                        rank = "PRIVATE";
                        position[] = {0,-55,0};
                        vehicle = "SiP_PVA_machinegunner1_w";
                    };
                    class unit_12
                    {
                        side = 0;
                        rank = "PRIVATE";
                        position[] = {0,-60,0};
                        vehicle = "SiP_PVA_sniper_w";
                    };
                    class unit_13
                    {
                        side = 0;
                        rank = "SERGEANT";
                        position[] = {0,-65,0};
                        vehicle = "SiP_PVA_smg1_w";
                    };
                    class unit_14
                    {
                        side = 0;
                        rank = "SERGEANT";
                        position[] = {0,-70,0};
                        vehicle = "SiP_PVA_nco_w";
                    };
                    class unit_15
                    {
                        side = 0;
                        rank = "SERGEANT";
                        position[] = {0,-75,0};
                        vehicle = "SiP_PVA_rifleman2_w";
                    };
                    class unit_16
                    {
                        side = 0;
                        rank = "CORPORAL";
                        position[] = {0,-80,0};
                        vehicle = "SiP_PVA_rifleman5";
                    };
                    class unit_17
                    {
                        side = 0;
                        rank = "CORPORAL";
                        position[] = {0,-85,0};
                        vehicle = "SiP_PVA_smg2_w";
                    };
                    class unit_18
                    {
                        side = 0;
                        rank = "PRIVATE";
                        position[] = {0,-90,0};
                        vehicle = "SiP_PVA_rifleman4";
                    };
                    class unit_19
                    {
                        side = 0;
                        rank = "PRIVATE";
                        position[] = {0,-95,0};
                        vehicle = "SiP_PVA_smg1_w";
                    };
                    class unit_20
                    {
                        side = 0;
                        rank = "PRIVATE";
                        position[] = {0,-100,0};
                        vehicle = "SiP_PVA_rifleman9_w";
                    };
                    class unit_21
                    {
                        side = 0;
                        rank = "PRIVATE";
                        position[] = {0,-105,0};
                        vehicle = "SiP_PVA_smg2_w";
                    };
                    class unit_22
                    {
                        side = 0;
                        rank = "PRIVATE";
                        position[] = {0,-110,0};
                        vehicle = "SiP_PVA_smg1_w";
                    };
                    class unit_23
                    {
                        side = 0;
                        rank = "PRIVATE";
                        position[] = {0,-115,0};
                        vehicle = "SiP_PVA_machinegunner2_w";
                    };
                };
            };
            class PVA_Vehicle_Crews
            {
                name = "Vehicle Crews";
                class PVA_vehicle_Crew_w
                {
                    name = "Standard Vehicle Crew - Winter";
                    side = 0;
                    faction = "SiP_PVA";
                    rarityGroup = 0.8;
                    class Unit0
                    {
                        side = 0;
                        vehicle = "SiP_PVA_Driver_w";
                        rank = "SERGEANT";
                        position[] = {0,5,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "SiP_PVA_gunner_w";
                        rank = "CORPORAL";
                        position[] = {3,0,0};
                    };
                };
            };
        };
    };
};
