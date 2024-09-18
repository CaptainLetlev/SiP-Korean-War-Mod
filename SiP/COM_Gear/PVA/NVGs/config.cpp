class cfgPatches
{
    class SiP_Patch_pva_nvg
    {
        Name = "Suicide Is Painless - Korean War Mod - PVA NVG Gear";
        addonRootClass = "SiP_Communist_Gear";
        requiredAddons[] =
        {
            "simc_uaf_44_gare"
        };
        units[] = {};
        weapons[] = 
        {
            "SiP_PVA_ppsh_belt_nvg_slot",
            "SiP_PVA_pps_belt_nvg_slot",
            "SiP_PVA_pps_pistol_belt_nvg_slot",
            "SiP_PVA_bedroll_nvg_slot",
            "SiP_PVA_pistol_nvg_slot"
        };
    };
};

class cfgWeapons
{
    class bandolier_addon_ligt;
    
    class SiP_PVA_ppsh_belt_nvg_slot: bandolier_addon_ligt
    {
        author = "Letlev";
        displayName = "[PVA] PPSh Pouch";
        picture = "NORTH\NF_SOV_Bags\data\UI\sov_meshok_x_ca.paa";
        model = "NORTH\NF_Sov_Gear\Sov_gear_assault_2.p3d";
        hiddenSelections[] = {""};
        hiddenSelectionsTextures[] = {"NORTH\NF_SOV_Gear\data\Sov_officer_CO.paa","NORTH\NF_SOV_Gear\data\Soviet_Gearing_1_CO.paa","north\nf_sov_gear\data\soviet_gearing_2_co.paa"};
        modelOptics = "\A3\Weapons_F\empty";
        visionMode[] = {"Normal","Normal"};
        descriptionShort = "PVA PPSh Pouch";
        class ItemInfo
        {
            type = 616;
            hmdType = 0;
            uniformModel = "NORTH\NF_Sov_Gear\Sov_gear_assault_2.p3d";
            modelOff = "NORTH\NF_Sov_Gear\Sov_gear_assault_2.p3d";
            hiddenSelections[] = {""};
            hiddenSelectionsTextures[] = {"NORTH\NF_SOV_Gear\data\Sov_officer_CO.paa","NORTH\NF_SOV_Gear\data\Soviet_Gearing_1_CO.paa","north\nf_sov_gear\data\soviet_gearing_2_co.paa"};
            mass = 2;
        };
    };

    class SiP_PVA_pps_belt_nvg_slot: SiP_PVA_ppsh_belt_nvg_slot
    {
        displayName = "[PVA] PPS Pouch";
        model = "NORTH\NF_Sov_Gear\Sov_gear_assault_6.p3d";
        hiddenSelections[] = {""};
        hiddenSelectionsTextures[] = {"NORTH\NF_SOV_Gear\data\Soviet_Gearing_1_CO.paa","north\nf_sov_gear\data\soviet_gearing_2_co.paa"};
        descriptionShort = "PVA PPS Pouch";
        class ItemInfo: ItemInfo
        {
            uniformModel = "NORTH\NF_Sov_Gear\Sov_gear_assault_6.p3d";
            modelOff = "NORTH\NF_Sov_Gear\Sov_gear_assault_6.p3d";
            hiddenSelections[] = {""};
            hiddenSelectionsTextures[] = {"NORTH\NF_SOV_Gear\data\Soviet_Gearing_1_CO.paa","north\nf_sov_gear\data\soviet_gearing_2_co.paa"};
        };
    };

    class SiP_PVA_pps_pistol_belt_nvg_slot: SiP_PVA_ppsh_belt_nvg_slot
    {
        displayName = "[PVA] PPS Pouch";
        model = "\NORTH\NF_Sov_Gear\Sov_gear_pistol_8.p3d";
        hiddenSelections[] = {""};
        hiddenSelectionsTextures[] = {"\NORTH\NF_SOV_Gear\data\Sov_officer_CO.paa","\NORTH\NF_SOV_Gear\data\Soviet_Gearing_1_CO.paa","\north\nf_sov_gear\data\soviet_gearing_2_co.paa"};
        descriptionShort = "PVA PPS Pistol Pouch";
        class ItemInfo: ItemInfo
        {
            uniformModel = "\NORTH\NF_Sov_Gear\Sov_gear_pistol_8.p3d";
            modelOff = "\NORTH\NF_Sov_Gear\Sov_gear_pistol_8.p3d";
            hiddenSelections[] = {""};
            hiddenSelectionsTextures[] = {"\NORTH\NF_SOV_Gear\data\Sov_officer_CO.paa","\NORTH\NF_SOV_Gear\data\Soviet_Gearing_1_CO.paa","\north\nf_sov_gear\data\soviet_gearing_2_co.paa"};
        };
    };

    class SiP_PVA_bedroll_nvg_slot: SiP_PVA_ppsh_belt_nvg_slot
    {
        displayName = "[PVA] Bedroll";
        picture = "\NORTH\NF_SOV_Bags\data\UI\sov_shinel_x_ca.paa";
        model = "\NORTH\NF_SOV_Bags\shinel.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\NORTH\NF_SOV_Bags\data\Shinel_CO.paa"};
        descriptionShort = "Chinese Bedroll";
        class ItemInfo: ItemInfo
        {
            uniformModel = "\NORTH\NF_SOV_Bags\shinel.p3d";
            modelOff = "\NORTH\NF_SOV_Bags\shinel.p3d";
            hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = {"\NORTH\NF_SOV_Bags\data\Shinel_CO.paa"};
        };
    };

    class SiP_PVA_pistol_nvg_slot: SiP_PVA_ppsh_belt_nvg_slot
    {
        displayName = "[PVA] Pistol Holster";
        model = "\NORTH\NF_Sov_Gear\Sov_gear_pistol_5.p3d";
        hiddenSelections[] = {""};
        hiddenSelectionsTextures[] = {"\NORTH\NF_SOV_Gear\data\Sov_officer_CO.paa","\NORTH\NF_SOV_Gear\data\Soviet_Gearing_1_CO.paa","\north\nf_sov_gear\data\soviet_gearing_2_co.paa"};
        descriptionShort = "PVA Pistol Holster";
        class ItemInfo: ItemInfo
        {
            uniformModel = "\NORTH\NF_Sov_Gear\Sov_gear_pistol_5.p3d";
            modelOff = "\NORTH\NF_Sov_Gear\Sov_gear_pistol_5.p3d";
            hiddenSelections[] = {""};
            hiddenSelectionsTextures[] = {"\NORTH\NF_SOV_Gear\data\Sov_officer_CO.paa","\NORTH\NF_SOV_Gear\data\Soviet_Gearing_1_CO.paa","\north\nf_sov_gear\data\soviet_gearing_2_co.paa"};
        };
    };
};