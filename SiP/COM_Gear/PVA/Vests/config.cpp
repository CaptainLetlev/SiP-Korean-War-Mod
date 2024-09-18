class cfgPatches
{
	class SiP_Patch_pva_vests
	{
		Name = "Suicide Is Painless - Korean War Mod - PVA vests";
		addonRootClass = "SiP_Communist_Gear";
		requiredAddons[] = 
		{
			"simc_uaf_44_gare"
		};
		units[] = {};
		weapons[] = 
		{
			"SiP_PVA_fieldbelt"
		};
	};
};

class cfgWeapons
{
	class VestItem;
	class EAW_Type90_Belt;

	class SiP_PVA_fieldbelt: EAW_Type90_Belt
	{
		author = "Letlev";
		displayName = "[PVA] Field Belt";
		scope = 2;
		model = "\EAW_Japanese_Infantry\EAW_Type90_Belt.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\EAW_Japanese_Infantry\Data\EAW_Type90_RifleKit_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\EAW_Japanese_Infantry\EAW_Type90_Belt.p3d";
			hiddenSelections[] = {};
			containerClass = "Supply120";
			mass = 2;
		};
	};
};