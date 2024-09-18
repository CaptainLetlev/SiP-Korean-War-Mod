class cfgPatches
{
    class SiP_Patch_US_army_vests
    {
        Name = "Suicide Is Painless - Korean War Mod - US Army Vests";
        addonRootClass = "SiP_UN_Gear_Patch";
        requiredAddons[] = 
        {
            "simc_uaf_44_gare"
        };
        units[] = {};
        weapons[] = 
        {
            "SiP_USAF_Fighter_mask"
        };
    };
};

class CfgWeapons
{
    class NVGoggles;
    
    class SiP_USAF_Fighter_mask: NVGoggles
    {
        author = "Letlev";
        displayName = "[US] Fighter facemask";
        picture = "\vn\characters_f_vietnam\ui\icon_vn_b_acc_ms22001_01_ca.paa";
        model = "\vn\characters_f_vietnam\BLUFOR\accessories\vn_b_acc_ms22001_01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\vn\characters_f_vietnam\blufor\accessories\data\vn_b_acc_ms22001_01_co.paa"};
        modelOptics = "\A3\Weapons_F\empty";
        visionMode[] = {"Normal","Normal"};
        descriptionShort = "USAF Fighter Mask";
        class ItemInfo
        {
            type = 616;
            hmdType = 0;
            uniformModel = "\vn\characters_f_vietnam\BLUFOR\accessories\vn_b_acc_ms22001_01";
            modelOff = "\vn\characters_f_vietnam\BLUFOR\accessories\vn_b_acc_ms22001_01";
            hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = {"\vn\characters_f_vietnam\blufor\accessories\data\vn_b_acc_ms22001_01_co.paa"};
            mass = 1;
        };
    };

    class SiP_US_Lifevest: NVGoggles
    {
        author = "Letlev";
        displayName = "[US] B3 Lifevest";
        picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Vest\V_US_LifeVest_ca.paa";
		model = "\WW2\SPE_Assets_m\Characters\Americans_m\US_Airforce\SPE_US_B3_Lifevest.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Airforce\SPE_US_B3_harness_co.paa"};
        modelOptics = "\A3\Weapons_F\empty";
        visionMode[] = {"Normal","Normal"};
        descriptionShort = "Standard Pilot Lifevest";
        class ItemInfo
        {
            type = 616;
            hmdType = 0;
            uniformModel = "\WW2\SPE_Assets_m\Characters\Americans_m\US_Airforce\SPE_US_B3_Lifevest.p3d";
            modelOff = "\WW2\SPE_Assets_m\Characters\Americans_m\US_Airforce\SPE_US_B3_Lifevest.p3d";
		    hiddenSelections[] = {"camo"};
		    hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Airforce\SPE_US_B3_harness_co.paa"};
            mass = 1;
        };
    };
    class m1945_cargopack_NVG: NVGoggles
    {
        author = "Letlev";
        displayname = "[US] M1945 Cargopack";
        picture = "\simc_uaf_67_preview\icons\pack_ass_ca.paa";
		model = "\simc_uaf_65\pack_ass_56.p3d";
        hiddenSelections[] = {"botol"};
        hiddenSelectionsTextures[] = {""};
        modelOptics = "\A3\Weapons_F\empty";
        visionMode[] = {"Normal","Normal"};
        descriptionShort = "Standard US Army Cargopack";
        class ItemInfo
        {
            type = 616;
            hmdType = 0;
            uniformModel = "\simc_uaf_65\pack_ass_56.p3d";
            modelOff = "\simc_uaf_65\pack_ass_56.p3d";
		    hiddenSelections[] = {"botol"};
            hiddenSelectionsTextures[] = {""};
            mass = 1;
        };
    };
};

class CfgGlasses
{
    class None;

    class SiP_m1945_suspender_facewear: None
    {
        scope = 2;
        author = "Letlev";
        displayname = "[US] M1945 Suspenders";
        picture = "\simc_uaf_44_preview\icons\zusp_ca.paa";
        model = "\simc_uaf_44\paket_m44.p3d";
        hiddenSelections[] = {"bright","paket"};
        hiddenSelectionsTextures[] = {""};
        identityTypes[] = {"Simc_UA44",1};
        mass = 2;
    };

    class SiP_m1945_cargopack_facewear: None
    {
        scope = 2;
        author = "Letlev";
        displayname = "[US] M1945 Cargopack";
        picture = "\simc_uaf_67_preview\icons\pack_ass_ca.paa";
        hiddenSelections[] = {"botol"};
        hiddenSelectionsTextures[] = {""};
        model = "\simc_uaf_65\pack_ass_56.p3d";
        identityTypes[] = {"Simc_UA44",1};
        mass = 2;
    };

    class SiP_US_QAC_Reserve_parachute: None
    {
        scope = 2;
        author = "Letlev";
        displayName = "[US] QAC Reserve Parachute";
        picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Backpacks\B_US_QAC_ca.paa";
        model = "\WW2\SPE_Assets_m\Characters\Americans_m\US_Airforce\SPE_US_QAC_Parachute.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Airforce\SPE_US_B3_harness_co.paa"};
        identityTypes[] = {"Simc_UA44",1};
        mass = 2;
    };

    class SiP_m1945_medic_armband_facewear: None
    {
        scope = 2;
        author = "Letlev";
        displayname = "[US] Medic Arm Band";
        picture = "\NORTH\NF_Misc\Cosmetics\ui\ui_fin_balaclava.paa";
		model = "\NORTH\NF_Misc\Cosmetics\fin_medicalarmband.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\NORTH\NF_Misc\Cosmetics\data\Medical_armband_CO.paa"};
        identityTypes[] = {"Simc_UA44",1};
        mass = 2;
    };
};