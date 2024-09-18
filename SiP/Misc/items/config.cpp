
class cfgPatches
{
	class SiP_Patch_misc_items
	{
		Name = " Suicide Is Painless - Korean War Mod - Items";
		addonRootClass = "SiP_Patch_misc";
		requiredAddons[] = 
		{
			"ace_flashlights",
			"ace_trenches",
			"ace_explosives"
		};
		units[] = {};
		weapons[] = 
		{
			"SiP_EntrenchingTool"
		};
	};
};

class CfgWeapons
{
	class ACE_EntrenchingTool;

	class WW2_ACE_Items_EntrenchingTool_m43: ACE_EntrenchingTool
    {
		model = "\vn\characters_f_vietnam_04\BLUFOR\packs\items\vn_b_item_m43_etool_02.p3d";
	};
	
	class SiP_EntrenchingTool: WW2_ACE_Items_EntrenchingTool_m43
	{
		author = "Letlev";
		displayName = "US M1951 Entrenching Tool";
		descriptionShort = "$STR_VN_M_M51_ETOOL_01_DS";
		picture = "SiP\Misc\items\data\UI\etool_ui_ca.paa";
		model = "\vn\characters_f_vietnam\BLUFOR\vests\items\vn_b_item_m51_etool_02.p3d";
	};
};

class cfgVehicles
{
	class TargetP_Inf_Acc2_F;

	class SiP_Props_Pop_Up_Target: TargetP_Inf_Acc2_F
	{
		author = "Letlev";
		displayName = "Range Target - Pop-up";
		editorCategory = "SiP_Korean_War_Items_Editor_Category";
        editorSubcategory = "SiP_Range_Props_Subcategory";
		hiddenSelectionsTextures[] = 
		{
			"\SiP\Misc\items\data\range_targets\range_target_co.paa",
			"#(argb,8,8,3)color(0,0,0,0,ca)",
			"#(argb,8,8,3)color(0,0,0,0,ca)"
		};
	};
};