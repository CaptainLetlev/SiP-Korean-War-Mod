class cfgPatches
{
	class SiP_Patch_pva_backpacks
	{
		Name = "Suicide Is Painless - Korean War Mod - PVA Backpacks";
		addonRootClass = "SiP_Communist_Gear";
		requiredAddons[] = 
		{
			"EAW_Chinese_Infantry"
		};
		units[] = 
		{
			"SiP_PVA_backpack",
			"SiP_PVA_backpack_svt",
			"SiP_PVA_backpack_ZB26",
			"SiP_PVA_backpack_PPSh",
			"SiP_PVA_backpack_PPS",
			"SiP_PVA_backpack_type100",
			"SiP_PVA_backpack_tommy",
			"SiP_PVA_backpack_PPS_pistol",
			"SiP_PVA_backpack_dp28"
		};
		weapons[] = {};
	};
};

class cfgVehicles
{
	class EAW_Chinese_Backpack_2_1;

	class SiP_PVA_backpack: EAW_Chinese_Backpack_2_1
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[PVA] Infantry Backpack";
		maximumLoad = 50;
		class TransportMagazines
		{
			class _xx_SiP_Chinese_Frag_mag
			{
				magazine = "SiP_Chinese_Frag_mag";
				count = 3;
			};
		};
	};
	class SiP_PVA_backpack_svt: SiP_PVA_backpack
	{
		scopeArsenal = 0;
		class TransportMagazines
		{
			class _xx_SiP_svt_10_mag
			{
				magazine = "SiP_svt_10_mag";
				count = 5;
			};
			class _xx_SiP_Chinese_Frag_mag
			{
				magazine = "SiP_Chinese_Frag_mag";
				count = 3;
			};
		};
	};
	class SiP_PVA_backpack_ZB26: SiP_PVA_backpack_svt
	{
		displayName = "[PVA] ZB Ammo Bag";
		class TransportMagazines
		{
			class _xx_SiP_ZB26_20_mag
			{
				magazine = "SiP_ZB26_20_mag";
				count = 10;
			};
		};
	};
	class SiP_PVA_backpack_PPSh: SiP_PVA_backpack_svt
	{
		maximumLoad = 160;
		class TransportMagazines
		{
			class _xx_vn_ppsh41_71_mag
			{
				magazine = "vn_ppsh41_71_mag";
				count = 3;
			};
			class _xx_vn_ppsh41_35_mag
			{
				magazine = "vn_ppsh41_35_mag";
				count = 9;
			};
			class _xx_SiP_Chinese_Frag_mag
			{
				magazine = "SiP_Chinese_Frag_mag";
				count = 3;
			};
		};
	};
	class SiP_PVA_backpack_PPS: SiP_PVA_backpack_PPSh
	{
		class TransportMagazines
		{
			class _xx_vn_ppsh41_35_mag
			{
				magazine = "vn_ppsh41_35_mag";
				count = 10;
			};
			class _xx_SiP_Chinese_Frag_mag
			{
				magazine = "SiP_Chinese_Frag_mag";
				count = 3;
			};
		};
	};
	class SiP_PVA_backpack_type100: SiP_PVA_backpack_PPSh
	{
		class TransportMagazines
		{
			class _xx_SiP_type100_30_mag
			{
				magazine = "SiP_type100_30_mag";
				count = 10;
			};
			class _xx_SiP_Chinese_Frag_mag
			{
				magazine = "SiP_Chinese_Frag_mag";
				count = 3;
			};
		};
	};
	class SiP_PVA_backpack_tommy: SiP_PVA_backpack_PPSh
	{
		class TransportMagazines
		{
			class _xx_vn_m1a1_30_mag
			{
				magazine = "vn_m1a1_30_mag";
				count = 10;
			};
			class _xx_SiP_Chinese_Frag_mag
			{
				magazine = "SiP_Chinese_Frag_mag";
				count = 3;
			};
		};
	};
	class SiP_PVA_backpack_PPS_pistol: SiP_PVA_backpack_PPSh
	{
		class TransportMagazines
		{
			class _xx_vn_pps_mag
			{
				magazine = "vn_pps_mag";
				count = 10;
			};
			class _xx_SiP_Chinese_Frag_mag
			{
				magazine = "SiP_Chinese_Frag_mag";
				count = 3;
			};
		};
	};
	class SiP_PVA_backpack_dp28: SiP_PVA_backpack_PPSh
	{
		displayName = "[PVA] DP Ammo Bag";
		maximumLoad = 180;
		class TransportMagazines
		{
			class _xx_vn_dp28_mag
			{
				magazine = "vn_dp28_mag";
				count = 9;
			};
		};
	};
};