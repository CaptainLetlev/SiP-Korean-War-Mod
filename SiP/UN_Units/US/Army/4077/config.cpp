class cfgPatches
{
	class SiP_Patch_us_army_units_4077_MASH
	{
		Name = "Suicide Is Painless - Korean War Mod - 4077 M*A*S*H Units";
		addonRootClass = "SiP_Patch_us_units";
		requiredAddons[] = {"A3_Data_F","A3_Characters_F","WW2_Assets_c_Characters_Americans_c_US_Army","simc_ua_inf_44"};
		units[] = {"SiP_col_potter","SiP_hawkeye_pierce","SiP_trapper_john","SiP_beej"};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class SiP_US_Army_col;
	class SiP_col_potter: SiP_US_Army_col
	{
		displayName = "Colonel Potter";
		cost = 650000;
		rank = "COLONEL";
		editorSubcategory = "SiP_Special_Editor_Subcategory";
		identityTypes[] = {"LanguageENG_F","SiP_Potter"};
		genericNames = "colpotter";
		model = "\simc_uaf_65\og107_mk1.p3d";
		hiddenSelections[] = {"camo","insignia","rank","gas","nom","clan"};
		hiddenSelectionsTextures[] = {"\simc_uaf_67\data\og107_mk1_co.paa","","\SiP\Addons\sip_us_army_gear\Uniforms\textures\uniform\shirt_ranks\US_med_COL_ca.paa","","",""};
		headgearList[] = {"SiP_m51_cap_colonel"};
		linkedItems[] = {"SiP_m51_cap_colonel"};
		respawnLinkedItems[] = {"SiP_m51_cap_colonel"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		uniformClass = "SiP_mash_uniform_potter";
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
	};
	class SiP_hawkeye_pierce: SiP_col_potter
	{
		displayName = "Hawkeye";
		model = "\simc_uaf_65\og107_mk1_trop.p3d";
		identityTypes[] = {"LanguageENG_F","SiP_Hawkeye"};
		genericNames = "HawkeyePierce";
		hiddenSelections[] = {"camo","camo2","rank","insignia","nom","gas"};
		hiddenSelectionsTextures[] = {"\simc_hillwilliam\data\og107_surf_co.paa","\simc_hillwilliam\data\og107_surf_co.paa","",""};
		headgearList[] = {""};
		linkedItems[] = {""};
		respawnLinkedItems[] = {""};
		uniformClass = "U_Simc_surf";
	};
	class SiP_trapper_john: SiP_hawkeye_pierce
	{
		displayName = "Trapper";
		identityTypes[] = {"LanguageENG_F","SiP_Trapper"};
		genericNames = "TrapperMcIntyre";
		hiddenSelectionsTextures[] = {"\SiP\Addons\sip_us_units\Army\data\civ_clothes\red_hawaii_co.paa","\SiP\Addons\sip_us_units\Army\data\civ_clothes\red_hawaii_co.paa","",""};
		uniformClass = "SiP_Hawaii_Shirt_Red";
	};
	class SiP_beej: SiP_hawkeye_pierce
	{
		displayName = "B.J.";
		identityTypes[] = {"LanguageENG_F","SiP_BJ"};
		genericNames = "BeejHunicut";
		hiddenSelectionsTextures[] = {"\SiP\Addons\sip_us_units\Army\data\civ_clothes\yellow_hawaii_co.paa","\SiP\Addons\sip_us_units\Army\data\civ_clothes\yellow_hawaii_co.paa","",""};
		uniformClass = "SiP_Hawaii_Shirt_yellow";
	};
};
