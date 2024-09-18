class cfgPatches
{
	class SiP_Patch_M1_helmet
	{
		addonRootClass = "SiP_UN_Gear_Patch";
		requiredAddons[] = 
		{
			"WW2_Fixes_SPE_Patch_M1_helmet"
		};
		units[] = {};
		weapons[] = {};
	};
};

class cfgWeapons
{
	class WW2_Fixes_SPE_M1_Helmet_S4;
	class WW2_Fixes_SPE_M1_Helmet_S1_net2;

	class WW2_Fixes_SPE_M1_Helmet_NS3;
	class WW2_Fixes_SPE_M1_Helmet_NS1_net2;

	class WW2_Fixes_SPE_M1_Helmet_OS5;
	class WW2_Fixes_SPE_M1_Helmet_OS1_net4;

	////M1 Strapped////
	class SiP_M1_Helmet_S1: WW2_Fixes_SPE_M1_Helmet_S4
	{
		Displayname = "US M1 Helmet - Closed";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_1_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_1.rvmat","","","","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			shade = "shade1";
			cover = "empty";
		};
	};
	class SiP_M1_Helmet_S2: SiP_M1_Helmet_S1
	{
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_2_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_2.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			shade = "shade2";
			cover = "empty";
		};
	};
	class SiP_M1_Helmet_S3: SiP_M1_Helmet_S1
	{
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_3_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_3.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			shade = "shade3";
			cover = "empty";
		};
	};
	class SiP_M1_Helmet_S4: SiP_M1_Helmet_S2
	{
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_4_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_4.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			shade = "shade4";
			cover = "empty";
		};
	};
	class SiP_M1_Helmet_S5: SiP_M1_Helmet_S2
	{
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_5_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_5.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			shade = "shade5";
			cover = "empty";
		};
	};

	class SiP_M1_Helmet_S1_net1: WW2_Fixes_SPE_M1_Helmet_S1_net2
	{
		Displayname = "US M1 Helmet - Closed";
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_1_co.paa",
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa",
			"",
			"",
			"",
			""
		};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_1.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net1";
			shade = "shade1";
		};
	};
	class SiP_M1_Helmet_S1_net2: SiP_M1_Helmet_S1_net1
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_1_co.paa",
			"\simc_lcd_43\data\lcd_helmet_net_2_co.paa",
			"",
			"",
			"",
			""
		};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_1.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net2";
			shade = "shade1";
		};
	};
	class SiP_M1_Helmet_S1_net3: SiP_M1_Helmet_S1_net1
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_1_co.paa",
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net3_mc.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net3";
			shade = "shade1";
		};
	};
	class SiP_M1_Helmet_S1_net4: SiP_M1_Helmet_S1_net1
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_1_co.paa",
			"\simc_lcd_43\data\lcd_net_79id_mc.paa",
			"",
			"",
			"",
			""
		};
		hiddenSelectionsMaterials[] = 
		{
			"simc_lcd_43\data\lcd_us_pot_1.rvmat",
			"simc_lcd_43\data\lcd_net_79id.rvmat",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net4";
			shade = "shade1";
		};
	};

	class SiP_M1_Helmet_S2_net1: SiP_M1_Helmet_S1_net3
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_2_co.paa",
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa",
			"",
			"",
			"",
			""
		};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_2.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net1";
			shade = "shade2";
		};
	};
	class SiP_M1_Helmet_S2_net2: SiP_M1_Helmet_S2_net1
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_2_co.paa",
			"\simc_lcd_43\data\lcd_helmet_net_2_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net2";
			shade = "shade2";
		};
	};
	class SiP_M1_Helmet_S2_net3: SiP_M1_Helmet_S2_net1
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_2_co.paa",
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net3_mc.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net3";
			shade = "shade2";
		};
	};
	class SiP_M1_Helmet_S2_net4: SiP_M1_Helmet_S2_net1
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_2_co.paa",
			"\simc_lcd_43\data\lcd_net_79id_mc.paa",
			"",
			"",
			"",
			""
		};
		hiddenSelectionsMaterials[] = 
		{
			"simc_lcd_43\data\lcd_us_pot_2.rvmat",
			"simc_lcd_43\data\lcd_net_79id.rvmat",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net4";
			shade = "shade2";
		};
	};
	
	class SiP_M1_Helmet_S3_net1: SiP_M1_Helmet_S1_net3
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_3_co.paa",
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa",
			"",
			"",
			"",
			""
		};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_3.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net1";
			shade = "shade3";
		};
	};
	class SiP_M1_Helmet_S3_net2: SiP_M1_Helmet_S3_net1
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_3_co.paa",
			"\simc_lcd_43\data\lcd_helmet_net_2_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net2";
			shade = "shade3";
		};
	};
	class SiP_M1_Helmet_S3_net3: SiP_M1_Helmet_S3_net1
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_3_co.paa",
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net3_mc.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net3";
			shade = "shade3";
		};
	};
	class SiP_M1_Helmet_S3_net4: SiP_M1_Helmet_S3_net1
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_3_co.paa",
			"\simc_lcd_43\data\lcd_net_79id_mc.paa",
			"",
			"",
			"",
			""
		};
		hiddenSelectionsMaterials[] = 
		{
			"simc_lcd_43\data\lcd_us_pot_3.rvmat",
			"simc_lcd_43\data\lcd_net_79id.rvmat",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net4";
			shade = "shade3";
		};
	};

	class SiP_M1_Helmet_S4_net1: SiP_M1_Helmet_S1_net3
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_4_co.paa",
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa",
			"",
			"",
			"",
			""
		};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_4.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net1";
			shade = "shade4";
		};
	};
	class SiP_M1_Helmet_S4_net2: SiP_M1_Helmet_S4_net1
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_4_co.paa",
			"\simc_lcd_43\data\lcd_helmet_net_2_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net2";
			shade = "shade4";
		};
	};
	class SiP_M1_Helmet_S4_net3: SiP_M1_Helmet_S4_net1
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_4_co.paa",
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net3_mc.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net3";
			shade = "shade4";
		};
	};
	class SiP_M1_Helmet_S4_net4: SiP_M1_Helmet_S4_net1
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_4_co.paa",
			"\simc_lcd_43\data\lcd_net_79id_mc.paa",
			"",
			"",
			"",
			""
		};
		hiddenSelectionsMaterials[] = 
		{
			"simc_lcd_43\data\lcd_us_pot_4.rvmat",
			"simc_lcd_43\data\lcd_net_79id.rvmat",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net4";
			shade = "shade4";
		};
	};

	class SiP_M1_Helmet_S5_net1: SiP_M1_Helmet_S1_net3
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_5_co.paa",
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa",
			"",
			"",
			"",
			""
		};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_5.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net1";
			shade = "shade5";
		};
	};
	class SiP_M1_Helmet_S5_net2: SiP_M1_Helmet_S5_net1
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_5_co.paa",
			"\simc_lcd_43\data\lcd_helmet_net_2_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net2";
			shade = "shade5";
		};
	};
	class SiP_M1_Helmet_S5_net3: SiP_M1_Helmet_S5_net1
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_5_co.paa",
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net3_mc.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net3";
			shade = "shade5";
		};
	};
	class SiP_M1_Helmet_S5_net4: SiP_M1_Helmet_S5_net1
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_5_co.paa",
			"\simc_lcd_43\data\lcd_net_79id_mc.paa",
			"",
			"",
			"",
			""
		};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_5.rvmat","simc_lcd_43\data\lcd_net_79id.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net4";
			shade = "shade5";
		};
	};

	////M1 Unstrapped////
	class SiP_M1_Helmet_NS1: WW2_Fixes_SPE_M1_Helmet_NS3
	{
		Displayname = "US M1 Helmet - Folded";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_1_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_1.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			shade = "shade1";
			cover = "empty";
		};
	};
	class SiP_M1_Helmet_NS2: SiP_M1_Helmet_NS1
	{
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_2_co.paa","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_2.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			shade = "shade2";
			cover = "empty";
		};
	};
	class SiP_M1_Helmet_NS3: SiP_M1_Helmet_NS1
	{
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_3_co.paa","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_3.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			shade = "shade3";
			cover = "empty";
		};
	};
	class SiP_M1_Helmet_NS4: SiP_M1_Helmet_NS2
	{
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_4_co.paa","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_4.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			shade = "shade4";
			cover = "empty";
		};
	};
	class SiP_M1_Helmet_NS5: SiP_M1_Helmet_NS2
	{
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_5_co.paa","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_5.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			shade = "shade5";
			cover = "empty";
		};
	};
	
	class SiP_M1_Helmet_NS1_net1: WW2_Fixes_SPE_M1_Helmet_NS1_net2
	{
		Displayname = "US M1 Helmet - Folded";
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_1_co.paa",
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa",
			"",
			"",
			"",
			""
		};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_1.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net1";
			shade = "shade1";
		};
	};
	class SiP_M1_Helmet_NS1_net2: SiP_M1_Helmet_NS1_net1
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_1_co.paa",
			"\simc_lcd_43\data\lcd_helmet_net_2_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net2";
			shade = "shade1";
		};
	};
	class SiP_M1_Helmet_NS1_net3: SiP_M1_Helmet_NS1_net1
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_1_co.paa",
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net3_mc.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net3";
			shade = "shade1";
		};
	};
	class SiP_M1_Helmet_NS1_net4: SiP_M1_Helmet_NS1_net3
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_1_co.paa",
			"\simc_lcd_43\data\lcd_net_79id_mc.paa",
			"",
			"",
			"",
			""
		};
		hiddenSelectionsMaterials[] = 
		{
			"simc_lcd_43\data\lcd_us_pot_3.rvmat",
			"simc_lcd_43\data\lcd_net_79id.rvmat",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net4";
			shade = "shade1";
		};
	};
	
	class SiP_M1_Helmet_NS2_net1: SiP_M1_Helmet_NS1_net1
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_2_co.paa",
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa",
			"",
			"",
			"",
			""
		};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_2.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net1";
			shade = "shade2";
		};
	};
	class SiP_M1_Helmet_NS2_net2: SiP_M1_Helmet_NS2_net1
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_2_co.paa",
			"\simc_lcd_43\data\lcd_helmet_net_2_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net2";
			shade = "shade2";
		};
	};
	class SiP_M1_Helmet_NS2_net3: SiP_M1_Helmet_NS2_net1
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_2_co.paa",
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net3_mc.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net3";
			shade = "shade2";
		};
	};
	class SiP_M1_Helmet_NS2_net4: SiP_M1_Helmet_NS2_net3
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_2_co.paa",
			"\simc_lcd_43\data\lcd_net_79id_mc.paa",
			"",
			"",
			"",
			""
		};
		hiddenSelectionsMaterials[] = 
		{
			"simc_lcd_43\data\lcd_us_pot_2.rvmat",
			"simc_lcd_43\data\lcd_net_79id.rvmat",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net4";
			shade = "shade2";
		};
	};
	
	class SiP_M1_Helmet_NS3_net1: SiP_M1_Helmet_NS1_net3
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_3_co.paa",
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa",
			"",
			"",
			"",
			""
		};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_3.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net1";
			shade = "shade3";
		};
	};
	class SiP_M1_Helmet_NS3_net2: SiP_M1_Helmet_NS3_net1
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_3_co.paa",
			"\simc_lcd_43\data\lcd_helmet_net_2_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net2";
			shade = "shade3";
		};
	};
	class SiP_M1_Helmet_NS3_net3: SiP_M1_Helmet_NS3_net1
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_3_co.paa",
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net3_mc.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net3";
			shade = "shade3";
		};
	};
	class SiP_M1_Helmet_NS3_net4: SiP_M1_Helmet_NS3_net1
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_3_co.paa",
			"\simc_lcd_43\data\lcd_net_79id_mc.paa",
			"",
			"",
			"",
			""
		};
		hiddenSelectionsMaterials[] = 
		{
			"simc_lcd_43\data\lcd_us_pot_3.rvmat",
			"simc_lcd_43\data\lcd_net_79id.rvmat",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net4";
			shade = "shade3";
		};
	};

	class SiP_M1_Helmet_NS4_net1: SiP_M1_Helmet_NS1_net3
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_4_co.paa",
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa",
			"",
			"",
			"",
			""
		};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_4.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net1";
			shade = "shade4";
		};
	};
	class SiP_M1_Helmet_NS4_net2: SiP_M1_Helmet_NS4_net1
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_4_co.paa",
			"\simc_lcd_43\data\lcd_helmet_net_2_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net2";
			shade = "shade4";
		};
	};
	class SiP_M1_Helmet_NS4_net3: SiP_M1_Helmet_NS4_net1
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_4_co.paa",
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net3_mc.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net3";
			shade = "shade4";
		};
	};
	class SiP_M1_Helmet_NS4_net4: SiP_M1_Helmet_NS4_net1
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_4_co.paa",
			"\simc_lcd_43\data\lcd_net_79id_mc.paa",
			"",
			"",
			"",
			""
		};
		hiddenSelectionsMaterials[] = 
		{
			"simc_lcd_43\data\lcd_us_pot_4.rvmat",
			"simc_lcd_43\data\lcd_net_79id.rvmat",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net4";
			shade = "shade4";
		};
	};

	class SiP_M1_Helmet_NS5_net1: SiP_M1_Helmet_NS1_net3
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_5_co.paa",
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa",
			"",
			"",
			"",
			""
		};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_5.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net1";
			shade = "shade5";
		};
	};
	class SiP_M1_Helmet_NS5_net2: SiP_M1_Helmet_NS5_net1
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_5_co.paa",
			"\simc_lcd_43\data\lcd_helmet_net_2_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net2";
			shade = "shade5";
		};
	};
	class SiP_M1_Helmet_NS5_net3: SiP_M1_Helmet_NS5_net1
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_5_co.paa",
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net3_mc.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net3";
			shade = "shade5";
		};
	};
	class SiP_M1_Helmet_NS5_net4: SiP_M1_Helmet_NS5_net1
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_5_co.paa",
			"\simc_lcd_43\data\lcd_net_79id_mc.paa",
			"",
			"",
			"",
			""
		};
		hiddenSelectionsMaterials[] = 
		{
			"simc_lcd_43\data\lcd_us_pot_5.rvmat",
			"simc_lcd_43\data\lcd_net_79id.rvmat",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net4";
			shade = "shade5";
		};
	};
 
	////M1 Strap Open////
	class SiP_M1_Helmet_OS1: WW2_Fixes_SPE_M1_Helmet_OS5
	{
		Displayname = "US M1 Helmet - Open";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_1_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_1.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			shade = "shade1";
			cover = "empty";
		};
	};
	class SiP_M1_Helmet_OS2: SiP_M1_Helmet_OS1
	{
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_2_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_2.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			shade = "shade2";
			cover = "empty";
		};
	};
	class SiP_M1_Helmet_OS3: SiP_M1_Helmet_OS1
	{
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_3_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_3.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			shade = "shade3";
			cover = "empty";
		};
	};
	class SiP_M1_Helmet_OS4: SiP_M1_Helmet_OS1
	{
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_4_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_4.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			shade = "shade4";
			cover = "empty";
		};
	};
	class SiP_M1_Helmet_OS5: SiP_M1_Helmet_OS1
	{
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_5_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_5.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			shade = "shade5";
			cover = "empty";
		};
	};

	class SiP_M1_Helmet_OS1_net1: WW2_Fixes_SPE_M1_Helmet_OS1_net4
	{
		Displayname = "US M1 Helmet - Open";
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_1_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_1.rvmat","","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net1";
			shade = "shade1";
		};
	};
	class SiP_M1_Helmet_OS1_net2: SiP_M1_Helmet_OS1_net1
	{
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_1_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_1.rvmat","","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net2";
			shade = "shade1";
		};
	};
	class SiP_M1_Helmet_OS1_net3: SiP_M1_Helmet_OS1_net1
	{
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_1_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net3_mc.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_1.rvmat","","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net3";
			shade = "shade1";
		};
	};
	class SiP_M1_Helmet_OS1_net4: SiP_M1_Helmet_OS1_net1
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_1_co.paa",
			"\simc_lcd_43\data\lcd_net_79id_mc.paa",
			"",
			"",
			"",
			""
		};
		hiddenSelectionsMaterials[] = 
		{
			"simc_lcd_43\data\lcd_us_pot_1.rvmat",
			"simc_lcd_43\data\lcd_net_79id.rvmat",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net4";
			shade = "shade1";
		};
	};
	
	class SiP_M1_Helmet_OS2_net1: SiP_M1_Helmet_OS1_net1
	{
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_2_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_2.rvmat","","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net1";
			shade = "shade2";
		};
	};
	class SiP_M1_Helmet_OS2_net2: SiP_M1_Helmet_OS2_net1
	{
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_2_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net2";
			shade = "shade2";
		};
	};
	class SiP_M1_Helmet_OS2_net3: SiP_M1_Helmet_OS2_net1
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_2_co.paa",
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net3_mc.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net3";
			shade = "shade2";
		};
	};
	class SiP_M1_Helmet_OS2_net4: SiP_M1_Helmet_OS2_net1
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_2_co.paa",
			"\simc_lcd_43\data\lcd_net_79id_mc.paa",
			"",
			"",
			"",
			""
		};
		hiddenSelectionsMaterials[] = 
		{
			"simc_lcd_43\data\lcd_us_pot_2.rvmat",
			"simc_lcd_43\data\lcd_net_79id.rvmat",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net4";
			shade = "shade2";
		};
	};

	class SiP_M1_Helmet_OS3_net1: SiP_M1_Helmet_OS1_net1
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_3_co.paa",
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa",
			"",
			"",
			"",
			""
		};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_3.rvmat","","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net1";
			shade = "shade3";
		};
	};
	class SiP_M1_Helmet_OS3_net2: SiP_M1_Helmet_OS3_net1
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_3_co.paa",
			"\simc_lcd_43\data\lcd_helmet_net_2_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net2";
			shade = "shade3";
		};
	};
	class SiP_M1_Helmet_OS3_net3: SiP_M1_Helmet_OS3_net1
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_3_co.paa",
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net3_mc.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net3";
			shade = "shade3";
		};
	};
	class SiP_M1_Helmet_OS3_net4: SiP_M1_Helmet_OS3_net1
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_3_co.paa",
			"\simc_lcd_43\data\lcd_net_79id_mc.paa",
			"",
			"",
			"",
			""
		};
		hiddenSelectionsMaterials[] = 
		{
			"simc_lcd_43\data\lcd_us_pot_3.rvmat",
			"simc_lcd_43\data\lcd_net_79id.rvmat",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net4";
			shade = "shade3";
		};
	};

	class SiP_M1_Helmet_OS4_net1: SiP_M1_Helmet_OS1_net1
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_4_co.paa",
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa",
			"",
			"",
			"",
			""
		};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_4.rvmat","","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net1";
			shade = "shade4";
		};
	};
	class SiP_M1_Helmet_OS4_net2: SiP_M1_Helmet_OS4_net1
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_4_co.paa",
			"\simc_lcd_43\data\lcd_helmet_net_2_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net2";
			shade = "shade4";
		};
	};
	class SiP_M1_Helmet_OS4_net3: SiP_M1_Helmet_OS4_net1
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_4_co.paa",
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net3_mc.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net3";
			shade = "shade4";
		};
	};
	class SiP_M1_Helmet_OS4_net4: SiP_M1_Helmet_OS4_net1
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_4_co.paa",
			"\simc_lcd_43\data\lcd_net_79id_mc.paa",
			"",
			"",
			"",
			""
		};
		hiddenSelectionsMaterials[] = 
		{
			"simc_lcd_43\data\lcd_us_pot_4.rvmat",
			"simc_lcd_43\data\lcd_net_79id.rvmat",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net4";
			shade = "shade4";
		};
	};

	class SiP_M1_Helmet_OS5_net1: SiP_M1_Helmet_OS1_net1
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_5_co.paa",
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa",
			"",
			"",
			"",
			""
		};
		hiddenSelectionsMaterials[] = {"simc_lcd_43\data\lcd_us_pot_5.rvmat","","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net1";
			shade = "shade5";
		};
	};
	class SiP_M1_Helmet_OS5_net2: SiP_M1_Helmet_OS5_net1
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_5_co.paa",
			"\simc_lcd_43\data\lcd_helmet_net_2_co.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net2";
			shade = "shade5";
		};
	};
	class SiP_M1_Helmet_OS5_net3: SiP_M1_Helmet_OS5_net1
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_5_co.paa",
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net3_mc.paa",
			"",
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net3";
			shade = "shade5";
		};
	};
	class SiP_M1_Helmet_OS5_net4: SiP_M1_Helmet_OS5_net1
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_5_co.paa",
			"\simc_lcd_43\data\lcd_net_79id_mc.paa",
			"",
			"",
			"",
			""
		};
		hiddenSelectionsMaterials[] = 
		{
			"simc_lcd_43\data\lcd_us_pot_5.rvmat",
			"simc_lcd_43\data\lcd_net_79id.rvmat",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "empty";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net4";
			shade = "shade5";
		};
	};
};

class XtdGearModels 
{
	class CfgWeapons 
	{
		class SiP_M1_Helmet_GearModel
		{
			label = "1950-53 Variant";
			author = "Letlev";
			options[]=
			{
				"era",
				"shade",
				"cover",
				"units",
				"rank",
				"straps"
			};
			class shade
			{
				label = "Paint";
				values[]=
				{
					"shade1",
					"shade2",
					"shade3",
					"shade4",
					"shade5"
				};
				class shade1
				{
					label = "1";
				};
				class shade2
				{
					label = "2";
				};
				class shade3
				{
					label = "3";
				};
				class shade4
				{
					label = "4";
				};
				class shade5
				{
					label = "5";
				};
			};
			class straps
			{
				label = "Straps";
				changeingame = 1;
				changedelay = 1;
				values[]=
				{
					"ns",
					"rs",
					"os",
					"hook"
				};
				class ns
				{
					label = "Folded";
					actionlabel = "Fold Strap";
					icon = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_CO_Net_ca.paa";
				};
				class hook
				{
					label = "Hooked";
					actionlabel = "Hook Strap";
					icon = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Net_up_ca.paa";;
				};
				class os
				{
					label = "Unbuttoned";
					actionlabel = "Unbutton Strap";
					icon = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Net_os_ca.paa";
				};
				class rs
				{
					label = "Buttoned";
					actionlabel = "Button Strap";
					icon = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Net_ca.paa";
				};
			};
			class cover
			{
				label = "Cover";
				values[]=
				{
					"empty",
					"Net1",
					"Net2",
					"Net3",
					"Net4"
				};
				class empty
				{
					label = "Empty";
				};
				class Net1
				{
					label = "Standard";
				};
				class Net2
				{
					label = "Small";
				};
				class Net3
				{
					label = "Shrimp";
				};
				class Net4
				{
					label = "Large";
				};
			};
			class rank
			{
				label = "Rank";
				values[]=
				{
					"empty",
					"pfc",
                    "cpl",
                    "sgt",
                    "sfc",
                    "msgt",
                    "first_sgt",
					"second_Lt",
					"first_Lt",
					"Captain",
					"Major",
					"LtCol",
					"Colonel"
				};
				class empty
                {
                    label = "Empty";
                };
				class pfc
                {
                    label = "Pfc";
                };
                class cpl
                {
                    label = "Cpl";
                };
                class sgt
                {
                    label = "Sgt";
                };
                class sfc
                {
                    label = "Sfc";
                };
                class msgt
                {
                    label = "M/Sgt";
                };
                class first_sgt
                {
                    label = "1st Sgt";
                };
				class second_Lt
				{
					label = "2nd Lt";
				};
				class first_Lt
				{
					label = "1st Lt";
				};
				class Captain
				{
					label = "Captain";
				};
				class Major
				{
					label = "Major";
				};
				class LtCol
				{
					label = "Lt.Colonel";
				};
				class Colonel
				{
					label = "Colonel";
				};
			};
			class era
			{
				label = "Era";
				values[]=
				{
					"early",
					"late"
				};
				class early
				{
					label = "Early";
				};
				class late
				{
					label = "Band";
				};
			};
			class units
			{
				label = "Units";
				hiddenselection = "right";
				values[]=
				{
					"empty",
					"Korea_7ID"
				};
				class empty
				{
					label = "Empty";
				};
				class Korea_7ID
				{
					label = "7th ID";
				};
			};
		};
	};
};