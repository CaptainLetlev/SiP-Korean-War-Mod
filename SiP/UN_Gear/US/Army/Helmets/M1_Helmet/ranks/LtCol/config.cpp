class cfgPatches
{
    class SiP_Patch_M1_helmet_LtCol
    {
        addonRootClass = "SiP_UN_Gear_Patch";
        requiredAddons[] = 
        {
            "SiP_Patch_M1_helmet"
        };
        units[] = {};
        weapons[] = {};
    };
};

class cfgWeapons
{
	class SiP_M1_Helmet_S1;
	class SiP_M1_Helmet_S1_net1;

	class SiP_M1_Helmet_NS1;
	class SiP_M1_Helmet_NS1_net1;

	class SiP_M1_Helmet_OS1;
	class SiP_M1_Helmet_OS1_net1;

	////M1 Strapped////
	class SiP_M1_Helmet_LtCol_S1: SiP_M1_Helmet_S1
	{
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_1_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"\SiP\UN_Gear\US\Army\Helmets\Textures\ranks\Officer\US_Pot_1_LtCOL.rvmat","","","","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			shade = "shade1";
			cover = "empty";
		};
	};
	class SiP_M1_Helmet_LtCol_S2: SiP_M1_Helmet_LtCol_S1
	{
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_2_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"\SiP\UN_Gear\US\Army\Helmets\Textures\ranks\Officer\US_Pot_2_LtCol.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			shade = "shade2";
			cover = "empty";
		};
	};
	class SiP_M1_Helmet_LtCol_S3: SiP_M1_Helmet_LtCol_S1
	{
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_3_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"\SiP\UN_Gear\US\Army\Helmets\Textures\ranks\Officer\US_Pot_3_LtCol.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			shade = "shade3";
			cover = "empty";
		};
	};
	class SiP_M1_Helmet_LtCol_S4: SiP_M1_Helmet_LtCol_S1
	{
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_4_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"\SiP\UN_Gear\US\Army\Helmets\Textures\ranks\Officer\US_Pot_4_LtCol.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			shade = "shade4";
			cover = "empty";
		};
	};
	class SiP_M1_Helmet_LtCol_S5: SiP_M1_Helmet_LtCol_S1
	{
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_5_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"\SiP\UN_Gear\US\Army\Helmets\Textures\ranks\Officer\US_Pot_5_LtCol.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			shade = "shade5";
			cover = "empty";
		};
	};

	class SiP_M1_Helmet_LtCol_S1_net1: SiP_M1_Helmet_S1_net1
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_1_co.paa",
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa",
			"",
			"",
			"",
			""
		};
		hiddenSelectionsMaterials[] = {"\SiP\UN_Gear\US\Army\Helmets\Textures\ranks\Officer\US_Pot_1_LtCol.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net1";
			shade = "shade1";
		};
	};
	class SiP_M1_Helmet_LtCol_S1_net2: SiP_M1_Helmet_LtCol_S1_net1
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
		hiddenSelectionsMaterials[] = {"\SiP\UN_Gear\US\Army\Helmets\Textures\ranks\Officer\US_Pot_1_LtCol.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net2";
			shade = "shade1";
		};
	};
	class SiP_M1_Helmet_LtCol_S1_net3: SiP_M1_Helmet_LtCol_S1_net1
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
			rank = "LtCol";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net3";
			shade = "shade1";
		};
	};
	class SiP_M1_Helmet_LtCol_S1_net4: SiP_M1_Helmet_LtCol_S1_net1
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
			"\SiP\UN_Gear\US\Army\Helmets\Textures\ranks\Officer\US_Pot_1_LtCOL.rvmat",
			"simc_lcd_43\data\lcd_net_79id.rvmat",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net4";
			shade = "shade1";
		};
	};

	class SiP_M1_Helmet_LtCol_S2_net1: SiP_M1_Helmet_LtCol_S1_net3
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
		hiddenSelectionsMaterials[] = {"\SiP\UN_Gear\US\Army\Helmets\Textures\ranks\Officer\US_Pot_2_LtCol.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net1";
			shade = "shade2";
		};
	};
	class SiP_M1_Helmet_LtCol_S2_net2: SiP_M1_Helmet_LtCol_S2_net1
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
			rank = "LtCol";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net2";
			shade = "shade2";
		};
	};
	class SiP_M1_Helmet_LtCol_S2_net3: SiP_M1_Helmet_LtCol_S2_net1
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
			rank = "LtCol";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net3";
			shade = "shade2";
		};
	};
	class SiP_M1_Helmet_LtCol_S2_net4: SiP_M1_Helmet_LtCol_S2_net1
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
			"\SiP\UN_Gear\US\Army\Helmets\Textures\ranks\Officer\US_Pot_2_MAJ.rvmat",
			"simc_lcd_43\data\lcd_net_79id.rvmat",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net4";
			shade = "shade2";
		};
	};
	
	class SiP_M1_Helmet_LtCol_S3_net1: SiP_M1_Helmet_LtCol_S1_net3
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
		hiddenSelectionsMaterials[] = {"\SiP\UN_Gear\US\Army\Helmets\Textures\ranks\Officer\US_Pot_3_LtCol.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net1";
			shade = "shade3";
		};
	};
	class SiP_M1_Helmet_LtCol_S3_net2: SiP_M1_Helmet_LtCol_S3_net1
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
			rank = "LtCol";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net2";
			shade = "shade3";
		};
	};
	class SiP_M1_Helmet_LtCol_S3_net3: SiP_M1_Helmet_LtCol_S3_net1
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
			rank = "LtCol";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net3";
			shade = "shade3";
		};
	};
	class SiP_M1_Helmet_LtCol_S3_net4: SiP_M1_Helmet_LtCol_S3_net1
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
			"\SiP\UN_Gear\US\Army\Helmets\Textures\ranks\Officer\US_Pot_3_LtCOL.rvmat",
			"simc_lcd_43\data\lcd_net_79id.rvmat",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net4";
			shade = "shade3";
		};
	};

	class SiP_M1_Helmet_LtCol_S4_net1: SiP_M1_Helmet_LtCol_S1_net3
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
		hiddenSelectionsMaterials[] = {"\SiP\UN_Gear\US\Army\Helmets\Textures\ranks\Officer\US_Pot_4_LtCol.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net1";
			shade = "shade4";
		};
	};
	class SiP_M1_Helmet_LtCol_S4_net2: SiP_M1_Helmet_LtCol_S4_net1
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
			rank = "LtCol";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net2";
			shade = "shade4";
		};
	};
	class SiP_M1_Helmet_LtCol_S4_net3: SiP_M1_Helmet_LtCol_S4_net1
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
			rank = "LtCol";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net3";
			shade = "shade4";
		};
	};
	class SiP_M1_Helmet_LtCol_S4_net4: SiP_M1_Helmet_LtCol_S4_net1
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
			"\SiP\UN_Gear\US\Army\Helmets\Textures\ranks\Officer\US_Pot_4_LtCOL.rvmat",
			"simc_lcd_43\data\lcd_net_79id.rvmat",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net4";
			shade = "shade4";
		};
	};

	class SiP_M1_Helmet_LtCol_S5_net1: SiP_M1_Helmet_LtCol_S1_net3
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
		hiddenSelectionsMaterials[] = {"\SiP\UN_Gear\US\Army\Helmets\Textures\ranks\Officer\US_Pot_5_LtCol.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net1";
			shade = "shade5";
		};
	};
	class SiP_M1_Helmet_LtCol_S5_net2: SiP_M1_Helmet_LtCol_S5_net1
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
			rank = "LtCol";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net2";
			shade = "shade5";
		};
	};
	class SiP_M1_Helmet_LtCol_S5_net3: SiP_M1_Helmet_LtCol_S5_net1
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
			rank = "LtCol";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net3";
			shade = "shade5";
		};
	};
	class SiP_M1_Helmet_LtCol_S5_net4: SiP_M1_Helmet_LtCol_S5_net1
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
		hiddenSelectionsMaterials[] = {"\SiP\UN_Gear\US\Army\Helmets\Textures\ranks\Officer\US_Pot_5_LtCOL.rvmat","simc_lcd_43\data\lcd_net_79id.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "rs";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net4";
			shade = "shade5";
		};
	};

	////M1 Unstrapped////
	class SiP_M1_Helmet_LtCol_NS1: SiP_M1_Helmet_NS1
	{
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_1_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"\SiP\UN_Gear\US\Army\Helmets\Textures\ranks\Officer\US_Pot_1_LtCol.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			shade = "shade1";
			cover = "empty";
		};
	};
	class SiP_M1_Helmet_LtCol_NS2: SiP_M1_Helmet_LtCol_NS1
	{
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_2_co.paa","",""};
		hiddenSelectionsMaterials[] = {"\SiP\UN_Gear\US\Army\Helmets\Textures\ranks\Officer\US_Pot_2_LtCol.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			shade = "shade2";
			cover = "empty";
		};
	};
	class SiP_M1_Helmet_LtCol_NS3: SiP_M1_Helmet_LtCol_NS1
	{
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_3_co.paa","",""};
		hiddenSelectionsMaterials[] = {"\SiP\UN_Gear\US\Army\Helmets\Textures\ranks\Officer\US_Pot_3_LtCol.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			shade = "shade3";
			cover = "empty";
		};
	};
	class SiP_M1_Helmet_LtCol_NS4: SiP_M1_Helmet_LtCol_NS2
	{
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_4_co.paa","",""};
		hiddenSelectionsMaterials[] = {"\SiP\UN_Gear\US\Army\Helmets\Textures\ranks\Officer\US_Pot_4_LtCol.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			shade = "shade4";
			cover = "empty";
		};
	};
	class SiP_M1_Helmet_LtCol_NS5: SiP_M1_Helmet_LtCol_NS2
	{
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_5_co.paa","",""};
		hiddenSelectionsMaterials[] = {"\SiP\UN_Gear\US\Army\Helmets\Textures\ranks\Officer\US_Pot_5_LtCol.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			shade = "shade5";
			cover = "empty";
		};
	};
	
	class SiP_M1_Helmet_LtCol_NS1_net1: SiP_M1_Helmet_NS1_net1
	{
		hiddenSelectionsTextures[] = 
		{
			"\simc_lcd_43\data\lcd_us_pot_1_co.paa",
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa",
			"",
			"",
			"",
			""
		};
		hiddenSelectionsMaterials[] = {"\SiP\UN_Gear\US\Army\Helmets\Textures\ranks\Officer\US_Pot_1_LtCol.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net1";
			shade = "shade1";
		};
	};
	class SiP_M1_Helmet_LtCol_NS1_net2: SiP_M1_Helmet_LtCol_NS1_net1
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
			rank = "LtCol";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net2";
			shade = "shade1";
		};
	};
	class SiP_M1_Helmet_LtCol_NS1_net3: SiP_M1_Helmet_LtCol_NS1_net1
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
			rank = "LtCol";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net3";
			shade = "shade1";
		};
	};
	class SiP_M1_Helmet_LtCol_NS1_net4: SiP_M1_Helmet_LtCol_NS1_net3
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
			"\SiP\UN_Gear\US\Army\Helmets\Textures\ranks\Officer\US_Pot_3_LtCOL.rvmat",
			"simc_lcd_43\data\lcd_net_79id.rvmat",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net4";
			shade = "shade1";
		};
	};
	
	class SiP_M1_Helmet_LtCol_NS2_net1: SiP_M1_Helmet_LtCol_NS1_net1
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
		hiddenSelectionsMaterials[] = {"\SiP\UN_Gear\US\Army\Helmets\Textures\ranks\Officer\US_Pot_2_LtCol.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net1";
			shade = "shade2";
		};
	};
	class SiP_M1_Helmet_LtCol_NS2_net2: SiP_M1_Helmet_LtCol_NS2_net1
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
			rank = "LtCol";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net2";
			shade = "shade2";
		};
	};
	class SiP_M1_Helmet_LtCol_NS2_net3: SiP_M1_Helmet_LtCol_NS2_net1
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
			rank = "LtCol";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net3";
			shade = "shade2";
		};
	};
	class SiP_M1_Helmet_LtCol_NS2_net4: SiP_M1_Helmet_LtCol_NS2_net3
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
			"\SiP\UN_Gear\US\Army\Helmets\Textures\ranks\Officer\US_Pot_2_MAJ.rvmat",
			"simc_lcd_43\data\lcd_net_79id.rvmat",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net4";
			shade = "shade2";
		};
	};
	
	class SiP_M1_Helmet_LtCol_NS3_net1: SiP_M1_Helmet_LtCol_NS1_net3
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
		hiddenSelectionsMaterials[] = {"\SiP\UN_Gear\US\Army\Helmets\Textures\ranks\Officer\US_Pot_3_LtCol.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net1";
			shade = "shade3";
		};
	};
	class SiP_M1_Helmet_LtCol_NS3_net2: SiP_M1_Helmet_LtCol_NS3_net1
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
			rank = "LtCol";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net2";
			shade = "shade3";
		};
	};
	class SiP_M1_Helmet_LtCol_NS3_net3: SiP_M1_Helmet_LtCol_NS3_net1
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
			rank = "LtCol";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net3";
			shade = "shade3";
		};
	};
	class SiP_M1_Helmet_LtCol_NS3_net4: SiP_M1_Helmet_LtCol_NS3_net1
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
			"\SiP\UN_Gear\US\Army\Helmets\Textures\ranks\Officer\US_Pot_3_LtCOL.rvmat",
			"simc_lcd_43\data\lcd_net_79id.rvmat",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net4";
			shade = "shade3";
		};
	};

	class SiP_M1_Helmet_LtCol_NS4_net1: SiP_M1_Helmet_LtCol_NS1_net3
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
		hiddenSelectionsMaterials[] = {"\SiP\UN_Gear\US\Army\Helmets\Textures\ranks\Officer\US_Pot_4_LtCol.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net1";
			shade = "shade4";
		};
	};
	class SiP_M1_Helmet_LtCol_NS4_net2: SiP_M1_Helmet_LtCol_NS4_net1
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
			rank = "LtCol";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net2";
			shade = "shade4";
		};
	};
	class SiP_M1_Helmet_LtCol_NS4_net3: SiP_M1_Helmet_LtCol_NS4_net1
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
			rank = "LtCol";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net3";
			shade = "shade4";
		};
	};
	class SiP_M1_Helmet_LtCol_NS4_net4: SiP_M1_Helmet_LtCol_NS4_net1
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
			"\SiP\UN_Gear\US\Army\Helmets\Textures\ranks\Officer\US_Pot_4_LtCOL.rvmat",
			"simc_lcd_43\data\lcd_net_79id.rvmat",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net4";
			shade = "shade4";
		};
	};

	class SiP_M1_Helmet_LtCol_NS5_net1: SiP_M1_Helmet_LtCol_NS1_net3
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
		hiddenSelectionsMaterials[] = {"\SiP\UN_Gear\US\Army\Helmets\Textures\ranks\Officer\US_Pot_5_LtCol.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net1";
			shade = "shade5";
		};
	};
	class SiP_M1_Helmet_LtCol_NS5_net2: SiP_M1_Helmet_LtCol_NS5_net1
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
			rank = "LtCol";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net2";
			shade = "shade5";
		};
	};
	class SiP_M1_Helmet_LtCol_NS5_net3: SiP_M1_Helmet_LtCol_NS5_net1
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
			rank = "LtCol";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net3";
			shade = "shade5";
		};
	};
	class SiP_M1_Helmet_LtCol_NS5_net4: SiP_M1_Helmet_LtCol_NS5_net1
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
			"\SiP\UN_Gear\US\Army\Helmets\Textures\ranks\Officer\US_Pot_5_LtCOL.rvmat",
			"simc_lcd_43\data\lcd_net_79id.rvmat",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "ns";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net4";
			shade = "shade5";
		};
	};
 
	////M1 Strap Open////
	class SiP_M1_Helmet_LtCol_OS1: SiP_M1_Helmet_OS1
	{
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_1_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"\SiP\UN_Gear\US\Army\Helmets\Textures\ranks\Officer\US_Pot_1_LtCol.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			shade = "shade1";
			cover = "empty";
		};
	};
	class SiP_M1_Helmet_LtCol_OS2: SiP_M1_Helmet_LtCol_OS1
	{
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_2_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"\SiP\UN_Gear\US\Army\Helmets\Textures\ranks\Officer\US_Pot_2_LtCol.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			shade = "shade2";
			cover = "empty";
		};
	};
	class SiP_M1_Helmet_LtCol_OS3: SiP_M1_Helmet_LtCol_OS1
	{
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_3_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"\SiP\UN_Gear\US\Army\Helmets\Textures\ranks\Officer\US_Pot_3_LtCol.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			shade = "shade3";
			cover = "empty";
		};
	};
	class SiP_M1_Helmet_LtCol_OS4: SiP_M1_Helmet_LtCol_OS1
	{
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_4_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"\SiP\UN_Gear\US\Army\Helmets\Textures\ranks\Officer\US_Pot_4_LtCol.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			shade = "shade4";
			cover = "empty";
		};
	};
	class SiP_M1_Helmet_LtCol_OS5: SiP_M1_Helmet_LtCol_OS1
	{
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_5_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"\SiP\UN_Gear\US\Army\Helmets\Textures\ranks\Officer\US_Pot_5_LtCol.rvmat","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			shade = "shade5";
			cover = "empty";
		};
	};

	class SiP_M1_Helmet_LtCol_OS1_net1: SiP_M1_Helmet_OS1_net1
	{
		hiddenSelectionsMaterials[] = {"\SiP\UN_Gear\US\Army\Helmets\Textures\ranks\Officer\US_Pot_1_LtCOL.rvmat","","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net1";
			shade = "shade1";
		};
	};
	class SiP_M1_Helmet_LtCol_OS1_net2: SiP_M1_Helmet_LtCol_OS1_net1
	{
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_1_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		hiddenSelectionsMaterials[] = {"\SiP\UN_Gear\US\Army\Helmets\Textures\ranks\Officer\US_Pot_1_LtCOL.rvmat","","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net2";
			shade = "shade1";
		};
	};
	class SiP_M1_Helmet_LtCol_OS1_net3: SiP_M1_Helmet_LtCol_OS1_net1
	{
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_1_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net3_mc.paa","","","",""};
		hiddenSelectionsMaterials[] = {"\SiP\UN_Gear\US\Army\Helmets\Textures\ranks\Officer\US_Pot_1_LtCOL.rvmat","","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net3";
			shade = "shade1";
		};
	};
	class SiP_M1_Helmet_LtCol_OS1_net4: SiP_M1_Helmet_LtCol_OS1_net1
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
			"\SiP\UN_Gear\US\Army\Helmets\Textures\ranks\Officer\US_Pot_1_LtCOL.rvmat",
			"simc_lcd_43\data\lcd_net_79id.rvmat",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net4";
			shade = "shade1";
		};
	};
	
	class SiP_M1_Helmet_LtCol_OS2_net1: SiP_M1_Helmet_LtCol_OS1_net1
	{
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_2_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Helmet_Net1_mc.paa","","","",""};
		hiddenSelectionsMaterials[] = {"\SiP\UN_Gear\US\Army\Helmets\Textures\ranks\Officer\US_Pot_2_MAJ.rvmat","","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net1";
			shade = "shade2";
		};
	};
	class SiP_M1_Helmet_LtCol_OS2_net2: SiP_M1_Helmet_LtCol_OS2_net1
	{
		hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_2_co.paa","\simc_lcd_43\data\lcd_helmet_net_2_co.paa","","","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net2";
			shade = "shade2";
		};
	};
	class SiP_M1_Helmet_LtCol_OS2_net3: SiP_M1_Helmet_LtCol_OS2_net1
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
			rank = "LtCol";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net3";
			shade = "shade2";
		};
	};
	class SiP_M1_Helmet_LtCol_OS2_net4: SiP_M1_Helmet_LtCol_OS2_net1
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
			"\SiP\UN_Gear\US\Army\Helmets\Textures\ranks\Officer\US_Pot_2_MAJ.rvmat",
			"simc_lcd_43\data\lcd_net_79id.rvmat",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net4";
			shade = "shade2";
		};
	};

	class SiP_M1_Helmet_LtCol_OS3_net1: SiP_M1_Helmet_LtCol_OS1_net1
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
		hiddenSelectionsMaterials[] = {"\SiP\UN_Gear\US\Army\Helmets\Textures\ranks\Officer\US_Pot_3_LtCOL.rvmat","","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net1";
			shade = "shade3";
		};
	};
	class SiP_M1_Helmet_LtCol_OS3_net2: SiP_M1_Helmet_LtCol_OS3_net1
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
			rank = "LtCol";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net2";
			shade = "shade3";
		};
	};
	class SiP_M1_Helmet_LtCol_OS3_net3: SiP_M1_Helmet_LtCol_OS3_net1
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
			rank = "LtCol";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net3";
			shade = "shade3";
		};
	};
	class SiP_M1_Helmet_LtCol_OS3_net4: SiP_M1_Helmet_LtCol_OS3_net1
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
			"\SiP\UN_Gear\US\Army\Helmets\Textures\ranks\Officer\US_Pot_3_LtCOL.rvmat",
			"simc_lcd_43\data\lcd_net_79id.rvmat",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net4";
			shade = "shade3";
		};
	};

	class SiP_M1_Helmet_LtCol_OS4_net1: SiP_M1_Helmet_LtCol_OS1_net1
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
		hiddenSelectionsMaterials[] = {"\SiP\UN_Gear\US\Army\Helmets\Textures\ranks\Officer\US_Pot_4_LtCOL.rvmat","","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net1";
			shade = "shade4";
		};
	};
	class SiP_M1_Helmet_LtCol_OS4_net2: SiP_M1_Helmet_LtCol_OS4_net1
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
			rank = "LtCol";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net2";
			shade = "shade4";
		};
	};
	class SiP_M1_Helmet_LtCol_OS4_net3: SiP_M1_Helmet_LtCol_OS4_net1
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
			rank = "LtCol";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net3";
			shade = "shade4";
		};
	};
	class SiP_M1_Helmet_LtCol_OS4_net4: SiP_M1_Helmet_LtCol_OS4_net1
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
			"\SiP\UN_Gear\US\Army\Helmets\Textures\ranks\Officer\US_Pot_4_LtCOL.rvmat",
			"simc_lcd_43\data\lcd_net_79id.rvmat",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net4";
			shade = "shade4";
		};
	};

	class SiP_M1_Helmet_LtCol_OS5_net1: SiP_M1_Helmet_LtCol_OS1_net1
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
		hiddenSelectionsMaterials[] = {"\SiP\UN_Gear\US\Army\Helmets\Textures\ranks\Officer\US_Pot_5_LtCOL.rvmat","","",""};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net1";
			shade = "shade5";
		};
	};
	class SiP_M1_Helmet_LtCol_OS5_net2: SiP_M1_Helmet_LtCol_OS5_net1
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
			rank = "LtCol";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net2";
			shade = "shade5";
		};
	};
	class SiP_M1_Helmet_LtCol_OS5_net3: SiP_M1_Helmet_LtCol_OS5_net1
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
			rank = "LtCol";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net3";
			shade = "shade5";
		};
	};
	class SiP_M1_Helmet_LtCol_OS5_net4: SiP_M1_Helmet_LtCol_OS5_net1
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
			"\SiP\UN_Gear\US\Army\Helmets\Textures\ranks\Officer\US_Pot_5_LtCOL.rvmat",
			"simc_lcd_43\data\lcd_net_79id.rvmat",
			""
		};
		class XtdGearInfo
		{
			units = "empty";
			rank = "LtCol";
			straps = "os";
			model = "SiP_M1_Helmet_GearModel";
			era = "early";
			cover = "Net4";
			shade = "shade5";
		};
	};
};