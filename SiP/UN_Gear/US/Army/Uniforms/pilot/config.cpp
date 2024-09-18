class cfgPatches
{
	class SiP_Patch_Pilot_uniform
	{
		addonRootClass = "SiP_Patch_US_Army_Uniforms";
		requiredAddons[] = 
		{
			"WW2_SPE_Assets_c_Characters_Americans_c_US_Airforce_Gear",
			"WW2_SPE_Assets_c_Characters_Americans_c_US_Airforce"
		};
		units[] = {};
		weapons[] = {};
	};
};

class cfgWeapons
{
	class U_Simc_51_BasicBody;
	
	class SiP_M1947_uniform: U_Simc_51_BasicBody
	{
		class ItemInfo;
	};

	class SiP_heli_pilot_uniform: SiP_M1947_uniform
	{
		displayName = "[US] Helicopter Pilot Uniform";
		descriptionShort = "Old Leather jacket with 47 HBT";
		picture = "\simc_uaf_51_preview\icons\hbt_47_ca.paa";
		hiddenSelections[] = {"camo","front","back","left","right"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "SiP_heli_pilot_uniform_base";
			hiddenSelections[] = {"camo","front","back","left","right"};
		};
		class XtdGearInfo{};
	};

	class SiP_USAF_Transport_pilot_uniform: SiP_heli_pilot_uniform
	{
		displayName = "[US] USAF Transport Pilot Uniform";
		descriptionShort = "Bomber Leather jacket with 47 HBT";
		class ItemInfo: ItemInfo
		{
			uniformClass = "SiP_USAF_Transport_Pilot";
		};
	};

	class SiP_US_Fighter_pilot_uniform: SiP_heli_pilot_uniform
	{
		displayName = "[US] USAF Fighter Pilot Uniform";
		class ItemInfo: ItemInfo
		{
			uniformClass = "SiP_USAF_Fighter_Pilot";
		};
	};

	class SiP_USN_Fighter_pilot_uniform: SiP_heli_pilot_uniform
	{
		displayName = "[US] USN Fighter Pilot Uniform";
		class ItemInfo: ItemInfo
		{
			uniformClass = "SiP_USN_Fighter_Pilot";
		};
	};
};

class cfgVehicles
{
	class simc_hbt_47;

	class SiP_heli_pilot_uniform_base: simc_hbt_47
	{
		uniformClass = "SiP_heli_pilot_uniform";
		model = "WW2\Assets_m\Characters\Americans_m\US_Army\IF_US_Pilot.p3d";
		hiddenSelections[] = {"camo","front","back","left","right"};
		hiddenSelectionsTextures[] = 
		{
			"SiP\addons\sip_us_army_gear\Uniforms\textures\uniform\us_heli_pilot_co.paa",
			"",
			"",
			"",
			""
		};
	};
};