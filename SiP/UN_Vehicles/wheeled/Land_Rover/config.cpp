class cfgPatches
{
	class SiP_Patch_land_rover
	{
		addonRootClass = "SiP_Patch_un_vehicles";
		requiredAddons[] = {"weapons_f_vietnam_04_c"};
		units[] = {"SiP_Land_Rover_Series_1_open","SiP_Land_Rover_Series_1","SiP_Land_Rover_Series_1_ambulance"};
		weapons[] = {};
	};
};

class cfgVehicles
{
	class vn_b_wheeled_lr2a_01_aus_army;
	class vn_b_wheeled_lr2a_02_aus_army;
	class vn_b_wheeled_lr2a_03_aus_army;

	class SiP_Land_Rover_Series_1_open: vn_b_wheeled_lr2a_01_aus_army
	{
		scopeCurator = 2;
		author = "Letlev";
		displayName = "Land-Rover Series I - Open";
		side = 1;
		faction = "SiP_BCFK";
		editorCategory = "SiP_BCFK_Editor_Category";
		editorSubcategory = "SiP_Jeeps_Editor_Subcategory";
		vehicleClass = "SiP_Jeeps_vehicle_class";
		crew = "SiP_BCFK_driver";
		hiddenSelectionsTextures[] = {"\SiP\UN_Vehicles\wheeled\Land_Rover\data\textures\sip_landrover_01_01_co.paa","\SiP\UN_Vehicles\wheeled\Land_Rover\data\textures\sip_landrover_02_01_co.paa","\SiP\UN_Vehicles\wheeled\Land_Rover\data\textures\sip_landrover_03_01_co.paa","\SiP\UN_Vehicles\wheeled\Land_Rover\data\textures\sip_landrover_04_01_co.paa","\SiP\UN_Vehicles\wheeled\Land_Rover\data\textures\sip_landrover_05_01_co.paa","\SiP\UN_Vehicles\wheeled\Land_Rover\data\textures\sip_landrover_06_01_co.paa",""};
		class TextureSources{};
		vn_flag = "\A3\Data_F\Flags\flag_uk_CO.paa";
		class TransportBackpacks{};
		class TransportMagazines
		{
			class _xx_fow_e_no36mk1
			{
				magazine = "fow_e_no36mk1";
				count = 2;
			};
			class _xx_SPE_US_M18_Yellow
			{
				magazine = "SPE_US_M18_Yellow";
				count = 2;
			};
			class _xx_SPE_US_M18_Red
			{
				magazine = "SPE_US_M18_Red";
				count = 2;
			};
			class _xx_vn_sten_mag
			{
				magazine = "vn_sten_mag";
				count = 4;
			};
			class _xx_vn_prop_drink_03
			{
				magazine = "vn_prop_drink_03";
				count = 2;
			};
		};
		class TransportWeapons
		{
			class _xx_vn_f1_smg
			{
				weapon = "SiP_sten_mkv";
				count = 1;
			};
		};
		class TransportItems
		{
			class _xx_vn_b_item_firstaidkit
			{
				name = "vn_b_item_firstaidkit";
				count = 2;
			};
			class _xx_vn_b_item_toolkit
			{
				name = "vn_b_item_toolkit";
				count = 1;
			};
		};
	};
	
	class SiP_Land_Rover_Series_1: vn_b_wheeled_lr2a_02_aus_army
	{
		scopeCurator = 2;
		author = "Letlev";
		displayName = "Land-Rover Series I";
		side = 1;
		faction = "SiP_BCFK";
		editorCategory = "SiP_BCFK_Editor_Category";
		editorSubcategory = "SiP_Jeeps_Editor_Subcategory";
		vehicleClass = "SiP_Jeeps_vehicle_class";
		crew = "SiP_BCFK_driver";
		hiddenSelectionsTextures[] = {"\SiP\UN_Vehicles\wheeled\Land_Rover\data\textures\sip_landrover_01_01_co.paa","\SiP\UN_Vehicles\wheeled\Land_Rover\data\textures\sip_landrover_02_01_co.paa","\SiP\UN_Vehicles\wheeled\Land_Rover\data\textures\sip_landrover_03_01_co.paa","\SiP\UN_Vehicles\wheeled\Land_Rover\data\textures\sip_landrover_04_01_co.paa","\SiP\UN_Vehicles\wheeled\Land_Rover\data\textures\sip_landrover_05_01_co.paa","\SiP\UN_Vehicles\wheeled\Land_Rover\data\textures\sip_landrover_06_01_co.paa",""};
		class TextureSources{};
		vn_flag = "\A3\Data_F\Flags\flag_uk_CO.paa";
		class TransportBackpacks{};
		class TransportMagazines
		{
			class _xx_fow_e_no36mk1
			{
				magazine = "fow_e_no36mk1";
				count = 2;
			};
			class _xx_SPE_US_M18_Yellow
			{
				magazine = "SPE_US_M18_Yellow";
				count = 2;
			};
			class _xx_SPE_US_M18_Red
			{
				magazine = "SPE_US_M18_Red";
				count = 2;
			};
			class _xx_vn_sten_mag
			{
				magazine = "vn_sten_mag";
				count = 4;
			};
			class _xx_vn_prop_drink_03
			{
				magazine = "vn_prop_drink_03";
				count = 2;
			};
		};
		class TransportWeapons
		{
			class _xx_vn_f1_smg
			{
				weapon = "SiP_sten_mkv";
				count = 1;
			};
		};
		class TransportItems
		{
			class _xx_vn_b_item_firstaidkit
			{
				name = "vn_b_item_firstaidkit";
				count = 2;
			};
			class _xx_vn_b_item_toolkit
			{
				name = "vn_b_item_toolkit";
				count = 1;
			};
		};
	};
	
	class SiP_Land_Rover_Series_1_ambulance: vn_b_wheeled_lr2a_03_aus_army
	{
		scopeCurator = 2;
		author = "Letlev";
		displayName = "Land-Rover Series I - Ambu";
		side = 1;
		faction = "SiP_BCFK";
		editorCategory = "SiP_BCFK_Editor_Category";
		editorSubcategory = "SiP_Jeeps_Editor_Subcategory";
		vehicleClass = "SiP_Jeeps_vehicle_class";
		crew = "SiP_BCFK_driver";
		hiddenSelectionsTextures[] = {"\SiP\UN_Vehicles\wheeled\Land_Rover\data\textures\sip_landrover_01_01_co.paa","\SiP\UN_Vehicles\wheeled\Land_Rover\data\textures\sip_landrover_02_01_co.paa","\SiP\UN_Vehicles\wheeled\Land_Rover\data\textures\sip_landrover_03_01_co.paa","\SiP\UN_Vehicles\wheeled\Land_Rover\data\textures\sip_landrover_04_01_co.paa","\SiP\UN_Vehicles\wheeled\Land_Rover\data\textures\sip_landrover_05_01_co.paa","\SiP\UN_Vehicles\wheeled\Land_Rover\data\textures\sip_landrover_06_01_co.paa","\SiP\UN_Vehicles\wheeled\Land_Rover\data\textures\sip_landrover_medical_decal_co.paa"};
		class TextureSources{};
		vn_flag = "\A3\Data_F\Flags\flag_uk_CO.paa";
		class TransportMagazines
		{
			class _xx_fow_e_no36mk1
			{
				magazine = "fow_e_no36mk1";
				count = 2;
			};
			class _xx_SPE_US_M18_Yellow
			{
				magazine = "SPE_US_M18_Yellow";
				count = 2;
			};
			class _xx_SPE_US_M18_Red
			{
				magazine = "SPE_US_M18_Red";
				count = 2;
			};
			class _xx_vn_sten_mag
			{
				magazine = "vn_sten_mag";
				count = 4;
			};
			class _xx_vn_prop_drink_03
			{
				magazine = "vn_prop_drink_03";
				count = 2;
			};
		};
		class TransportWeapons
		{
			class _xx_vn_f1_smg
			{
				weapon = "SiP_sten_mkv";
				count = 1;
			};
		};
		class TransportItems
		{
			class _xx_vn_b_item_medikit_01
			{
				name = "vn_b_item_medikit_01";
				count = 1;
			};
			class _xx_vn_b_item_firstaidkit
			{
				name = "vn_b_item_firstaidkit";
				count = 12;
			};
			class _xx_vn_b_item_toolkit
			{
				name = "vn_b_item_toolkit";
				count = 1;
			};
		};
	};
};