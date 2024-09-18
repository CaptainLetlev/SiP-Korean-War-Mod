class cfgPatches
{
    class SiP_Patch_M1C_helmet_HQ_187RCT_1LT
    {
        addonRootClass = "SiP_UN_Gear_Patch";
        requiredAddons[] = 
        {
            "SiP_Patch_M1C_helmet"
        };
        units[] = {};
        weapons[] = {};
    };
};

class cfgWeapons
{
    class SiP_M1C_helmet_JS1;
    class SiP_M1C_helmet_JS1_net1;

    class SiP_M1C_helmet_OJS1;
    class SiP_M1C_helmet_OJS1_net1;

    class SiP_M1C_helmet_SJS1;
    class SiP_M1C_helmet_SJS1_net1;

    class SiP_M1C_helmet_NJS1;
    class SiP_M1C_helmet_NJS1_net1;

    //Jump Strap//
    class SiP_M1C_Helmet_HQ_187RCT_1LT_JS1: SiP_M1C_helmet_JS1
    {
		hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_1_1LT.rvmat","","","","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "js";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            shade = "shade1";
            cover = "empty";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_JS2: SiP_M1C_Helmet_HQ_187RCT_1LT_JS1
    {
        hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_2_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_2_1LT.rvmat","","","","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "js";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            shade = "shade2";
            cover = "empty";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_JS3: SiP_M1C_Helmet_HQ_187RCT_1LT_JS1
    {
        hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_3_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_3_1LT.rvmat","","","","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "js";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            shade = "shade3";
            cover = "empty";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_JS4: SiP_M1C_Helmet_HQ_187RCT_1LT_JS1
    {
        hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_4_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_4_1LT.rvmat","","","","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "js";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            shade = "shade4";
            cover = "empty";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_JS5: SiP_M1C_Helmet_HQ_187RCT_1LT_JS1
    {
        hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_5_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_5_1LT.rvmat","","","","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "js";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            shade = "shade5";
            cover = "empty";
        };
    };
    
    class SiP_M1C_Helmet_HQ_187RCT_1LT_JS1_net1: SiP_M1C_helmet_JS1_net1
    {
        hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_1_1LT.rvmat","","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "js";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net1";
            shade = "shade1";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_JS1_net2: SiP_M1C_Helmet_HQ_187RCT_1LT_JS1_net1
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
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "js";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net2";
            shade = "shade1";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_JS1_net3: SiP_M1C_Helmet_HQ_187RCT_1LT_JS1_net1
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
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "js";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net3";
            shade = "shade1";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_JS1_net4: SiP_M1C_Helmet_HQ_187RCT_1LT_JS1_net1
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
        hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_1_1LT.rvmat","simc_lcd_43\data\lcd_net_79id.rvmat","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "js";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net4";
            shade = "shade1";
        };
    };

    class SiP_M1C_Helmet_HQ_187RCT_1LT_JS2_net1: SiP_M1C_Helmet_HQ_187RCT_1LT_JS1_net1
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
        hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_2_1LT.rvmat","","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "js";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net1";
            shade = "shade2";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_JS2_net2: SiP_M1C_Helmet_HQ_187RCT_1LT_JS2_net1
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
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "js";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net2";
            shade = "shade2";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_JS2_net3: SiP_M1C_Helmet_HQ_187RCT_1LT_JS2_net1
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
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "js";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net3";
            shade = "shade2";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_JS2_net4: SiP_M1C_Helmet_HQ_187RCT_1LT_JS2_net1
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
        hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_2_1LT.rvmat","simc_lcd_43\data\lcd_net_79id.rvmat","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "js";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net4";
            shade = "shade2";
        };
    };
    
    class SiP_M1C_Helmet_HQ_187RCT_1LT_JS3_net1: SiP_M1C_Helmet_HQ_187RCT_1LT_JS1_net1
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
        hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_3_1LT.rvmat","","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "js";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net1";
            shade = "shade3";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_JS3_net2: SiP_M1C_Helmet_HQ_187RCT_1LT_JS3_net1
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
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "js";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net2";
            shade = "shade3";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_JS3_net3: SiP_M1C_Helmet_HQ_187RCT_1LT_JS3_net1
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
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "js";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net3";
            shade = "shade3";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_JS3_net4: SiP_M1C_Helmet_HQ_187RCT_1LT_JS3_net1
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
        hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_3_1LT.rvmat","simc_lcd_43\data\lcd_net_79id.rvmat","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "js";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net4";
            shade = "shade3";
        };
    };

    class SiP_M1C_Helmet_HQ_187RCT_1LT_JS4_net1: SiP_M1C_Helmet_HQ_187RCT_1LT_JS1_net1
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
        hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_4_1LT.rvmat","","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "js";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net1";
            shade = "shade4";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_JS4_net2: SiP_M1C_Helmet_HQ_187RCT_1LT_JS4_net1
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
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "js";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net2";
            shade = "shade4";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_JS4_net3: SiP_M1C_Helmet_HQ_187RCT_1LT_JS4_net1
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
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "js";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net3";
            shade = "shade4";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_JS4_net4: SiP_M1C_Helmet_HQ_187RCT_1LT_JS4_net1
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
        hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_4_1LT.rvmat","simc_lcd_43\data\lcd_net_79id.rvmat","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "js";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net4";
            shade = "shade4";
        };
    };

    class SiP_M1C_Helmet_HQ_187RCT_1LT_JS5_net1: SiP_M1C_Helmet_HQ_187RCT_1LT_JS1_net1
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
        hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_5_1LT.rvmat","","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "js";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net1";
            shade = "shade5";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_JS5_net2: SiP_M1C_Helmet_HQ_187RCT_1LT_JS5_net1
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
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "js";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net2";
            shade = "shade5";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_JS5_net3: SiP_M1C_Helmet_HQ_187RCT_1LT_JS5_net1
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
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "js";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net3";
            shade = "shade5";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_JS5_net4: SiP_M1C_Helmet_HQ_187RCT_1LT_JS5_net1
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
        hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_5_1LT.rvmat","simc_lcd_43\data\lcd_net_79id.rvmat","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "js";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net4";
            shade = "shade5";
        };
    };

    //M2 Opened Jump strap//
    class SiP_M1C_Helmet_HQ_187RCT_1LT_OJS1: SiP_M1C_helmet_OJS1
    {
		hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_1_1LT.rvmat","","","","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "ojs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            shade = "shade1";
            cover = "empty";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_OJS2: SiP_M1C_Helmet_HQ_187RCT_1LT_OJS1
    {
        hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_2_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_2_1LT.rvmat","","","","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "ojs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            shade = "shade2";
            cover = "empty";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_OJS3: SiP_M1C_Helmet_HQ_187RCT_1LT_OJS1
    {
        hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_3_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_3_1LT.rvmat","","","","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "ojs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            shade = "shade3";
            cover = "empty";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_OJS4: SiP_M1C_Helmet_HQ_187RCT_1LT_OJS1
    {
        hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_4_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_4_1LT.rvmat","","","","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "ojs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            shade = "shade4";
            cover = "empty";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_OJS5: SiP_M1C_Helmet_HQ_187RCT_1LT_OJS1
    {
        hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_5_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_5_1LT.rvmat","","","","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "ojs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            shade = "shade5";
            cover = "empty";
        };
    };
    
    class SiP_M1C_Helmet_HQ_187RCT_1LT_OJS1_net1: SiP_M1C_helmet_OJS1_net1
    {
        hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_1_1LT.rvmat","","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "ojs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net1";
            shade = "shade1";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_OJS1_net2: SiP_M1C_Helmet_HQ_187RCT_1LT_OJS1_net1
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
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "ojs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net2";
            shade = "shade1";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_OJS1_net3: SiP_M1C_Helmet_HQ_187RCT_1LT_OJS1_net1
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
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "ojs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net3";
            shade = "shade1";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_OJS1_net4: SiP_M1C_Helmet_HQ_187RCT_1LT_OJS1_net1
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
        hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_1_1LT.rvmat","simc_lcd_43\data\lcd_net_79id.rvmat","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "ojs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net4";
            shade = "shade1";
        };
    };

    class SiP_M1C_Helmet_HQ_187RCT_1LT_OJS2_net1: SiP_M1C_Helmet_HQ_187RCT_1LT_OJS1_net1
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
        hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_2_1LT.rvmat","","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "ojs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net1";
            shade = "shade2";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_OJS2_net2: SiP_M1C_Helmet_HQ_187RCT_1LT_OJS2_net1
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
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "ojs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net2";
            shade = "shade2";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_OJS2_net3: SiP_M1C_Helmet_HQ_187RCT_1LT_OJS2_net1
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
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "ojs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net3";
            shade = "shade2";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_OJS2_net4: SiP_M1C_Helmet_HQ_187RCT_1LT_OJS2_net1
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
        hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_2_1LT.rvmat","simc_lcd_43\data\lcd_net_79id.rvmat","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "ojs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net4";
            shade = "shade2";
        };
    };
    
    class SiP_M1C_Helmet_HQ_187RCT_1LT_OJS3_net1: SiP_M1C_Helmet_HQ_187RCT_1LT_OJS1_net1
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
        hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_3_1LT.rvmat","","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "ojs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net1";
            shade = "shade3";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_OJS3_net2: SiP_M1C_Helmet_HQ_187RCT_1LT_OJS3_net1
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
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "ojs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net2";
            shade = "shade3";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_OJS3_net3: SiP_M1C_Helmet_HQ_187RCT_1LT_OJS3_net1
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
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "ojs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net3";
            shade = "shade3";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_OJS3_net4: SiP_M1C_Helmet_HQ_187RCT_1LT_OJS3_net1
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
        hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_3_1LT.rvmat","simc_lcd_43\data\lcd_net_79id.rvmat","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "ojs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net4";
            shade = "shade3";
        };
    };

    class SiP_M1C_Helmet_HQ_187RCT_1LT_OJS4_net1: SiP_M1C_Helmet_HQ_187RCT_1LT_OJS1_net1
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
        hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_4_1LT.rvmat","","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "ojs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net1";
            shade = "shade4";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_OJS4_net2: SiP_M1C_Helmet_HQ_187RCT_1LT_OJS4_net1
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
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "ojs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net2";
            shade = "shade4";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_OJS4_net3: SiP_M1C_Helmet_HQ_187RCT_1LT_OJS4_net1
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
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "ojs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net3";
            shade = "shade4";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_OJS4_net4: SiP_M1C_Helmet_HQ_187RCT_1LT_OJS4_net1
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
        hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_4_1LT.rvmat","simc_lcd_43\data\lcd_net_79id.rvmat","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "ojs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net4";
            shade = "shade4";
        };
    };

    class SiP_M1C_Helmet_HQ_187RCT_1LT_OJS5_net1: SiP_M1C_Helmet_HQ_187RCT_1LT_OJS1_net1
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
        hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_5_1LT.rvmat","","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "ojs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net1";
            shade = "shade5";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_OJS5_net2: SiP_M1C_Helmet_HQ_187RCT_1LT_OJS5_net1
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
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "ojs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net2";
            shade = "shade5";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_OJS5_net3: SiP_M1C_Helmet_HQ_187RCT_1LT_OJS5_net1
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
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "ojs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net3";
            shade = "shade5";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_OJS5_net4: SiP_M1C_Helmet_HQ_187RCT_1LT_OJS5_net1
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
        hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_5_1LT.rvmat","simc_lcd_43\data\lcd_net_79id.rvmat","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "ojs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net4";
            shade = "shade5";
        };
    };

    //M2 Folded Rear strap//
    class SiP_M1C_Helmet_HQ_187RCT_1LT_SJS1: SiP_M1C_helmet_SJS1
    {
		hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_1_1LT.rvmat","","","","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "sjs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            shade = "shade1";
            cover = "empty";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_SJS2: SiP_M1C_Helmet_HQ_187RCT_1LT_SJS1
    {
        hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_2_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_2_1LT.rvmat","","","","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "sjs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            shade = "shade2";
            cover = "empty";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_SJS3: SiP_M1C_Helmet_HQ_187RCT_1LT_SJS1
    {
        hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_3_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_3_1LT.rvmat","","","","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "sjs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            shade = "shade3";
            cover = "empty";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_SJS4: SiP_M1C_Helmet_HQ_187RCT_1LT_SJS1
    {
        hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_4_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_4_1LT.rvmat","","","","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "sjs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            shade = "shade4";
            cover = "empty";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_SJS5: SiP_M1C_Helmet_HQ_187RCT_1LT_SJS1
    {
        hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_5_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_5_1LT.rvmat","","","","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "sjs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            shade = "shade5";
            cover = "empty";
        };
    };
    
    class SiP_M1C_Helmet_HQ_187RCT_1LT_SJS1_net1: SiP_M1C_helmet_SJS1_net1
    {
        hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_1_1LT.rvmat","","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "sjs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net1";
            shade = "shade1";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_SJS1_net2: SiP_M1C_Helmet_HQ_187RCT_1LT_SJS1_net1
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
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "sjs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net2";
            shade = "shade1";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_SJS1_net3: SiP_M1C_Helmet_HQ_187RCT_1LT_SJS1_net1
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
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "sjs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net3";
            shade = "shade1";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_SJS1_net4: SiP_M1C_Helmet_HQ_187RCT_1LT_SJS1_net1
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
        hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_1_1LT.rvmat","simc_lcd_43\data\lcd_net_79id.rvmat","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "sjs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net4";
            shade = "shade1";
        };
    };

    class SiP_M1C_Helmet_HQ_187RCT_1LT_SJS2_net1: SiP_M1C_Helmet_HQ_187RCT_1LT_SJS1_net1
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
        hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_2_1LT.rvmat","","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "sjs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net1";
            shade = "shade2";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_SJS2_net2: SiP_M1C_Helmet_HQ_187RCT_1LT_SJS2_net1
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
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "sjs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net2";
            shade = "shade2";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_SJS2_net3: SiP_M1C_Helmet_HQ_187RCT_1LT_SJS2_net1
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
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "sjs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net3";
            shade = "shade2";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_SJS2_net4: SiP_M1C_Helmet_HQ_187RCT_1LT_SJS2_net1
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
        hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_2_1LT.rvmat","simc_lcd_43\data\lcd_net_79id.rvmat","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "sjs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net4";
            shade = "shade2";
        };
    };
    
    class SiP_M1C_Helmet_HQ_187RCT_1LT_SJS3_net1: SiP_M1C_Helmet_HQ_187RCT_1LT_SJS1_net1
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
        hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_3_1LT.rvmat","","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "sjs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net1";
            shade = "shade3";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_SJS3_net2: SiP_M1C_Helmet_HQ_187RCT_1LT_SJS3_net1
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
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "sjs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net2";
            shade = "shade3";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_SJS3_net3: SiP_M1C_Helmet_HQ_187RCT_1LT_SJS3_net1
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
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "sjs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net3";
            shade = "shade3";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_SJS3_net4: SiP_M1C_Helmet_HQ_187RCT_1LT_SJS3_net1
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
        hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_3_1LT.rvmat","simc_lcd_43\data\lcd_net_79id.rvmat","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "sjs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net4";
            shade = "shade3";
        };
    };

    class SiP_M1C_Helmet_HQ_187RCT_1LT_SJS4_net1: SiP_M1C_Helmet_HQ_187RCT_1LT_SJS1_net1
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
        hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_4_1LT.rvmat","","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "sjs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net1";
            shade = "shade4";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_SJS4_net2: SiP_M1C_Helmet_HQ_187RCT_1LT_SJS4_net1
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
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "sjs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net2";
            shade = "shade4";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_SJS4_net3: SiP_M1C_Helmet_HQ_187RCT_1LT_SJS4_net1
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
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "sjs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net3";
            shade = "shade4";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_SJS4_net4: SiP_M1C_Helmet_HQ_187RCT_1LT_SJS4_net1
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
        hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_4_1LT.rvmat","simc_lcd_43\data\lcd_net_79id.rvmat","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "sjs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net4";
            shade = "shade4";
        };
    };

    class SiP_M1C_Helmet_HQ_187RCT_1LT_SJS5_net1: SiP_M1C_Helmet_HQ_187RCT_1LT_SJS1_net1
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
        hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_5_1LT.rvmat","","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "sjs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net1";
            shade = "shade5";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_SJS5_net2: SiP_M1C_Helmet_HQ_187RCT_1LT_SJS5_net1
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
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "sjs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net2";
            shade = "shade5";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_SJS5_net3: SiP_M1C_Helmet_HQ_187RCT_1LT_SJS5_net1
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
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "sjs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net3";
            shade = "shade5";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_SJS5_net4: SiP_M1C_Helmet_HQ_187RCT_1LT_SJS5_net1
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
        hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_5_1LT.rvmat","simc_lcd_43\data\lcd_net_79id.rvmat","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "sjs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            cover = "Net4";
            shade = "shade5";
        };
    };

    //M2 W/Jumpstrap//
    class SiP_M1C_Helmet_HQ_187RCT_1LT_NJS1: SiP_M1C_helmet_NJS1
    {
        Displayname = "US M1C AB Helmet";
        hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_1_1LT.rvmat","","","","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "njs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            shade = "shade1";
            cover = "empty";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_NJS2: SiP_M1C_Helmet_HQ_187RCT_1LT_NJS1
    {
        hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_2_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_2_1LT.rvmat","","","","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "njs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            shade = "shade2";
            cover = "empty";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_NJS3: SiP_M1C_Helmet_HQ_187RCT_1LT_NJS1
    {
        hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_3_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_3_1LT.rvmat","","","","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "njs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            shade = "shade3";
            cover = "empty";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_NJS4: SiP_M1C_Helmet_HQ_187RCT_1LT_NJS1
    {
        hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_4_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_4_1LT.rvmat","","","","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "njs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            shade = "shade4";
            cover = "empty";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_NJS5: SiP_M1C_Helmet_HQ_187RCT_1LT_NJS1
    {
        hiddenSelectionsTextures[] = {"\simc_lcd_43\data\lcd_us_pot_5_co.paa","","","","",""};
		hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_5_1LT.rvmat","","","","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "njs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            shade = "shade5";
            cover = "empty";
        };
    };

    class SiP_M1C_Helmet_HQ_187RCT_1LT_NJS1_net1: SiP_M1C_helmet_NJS1_net1
    {
        Displayname = "US M1C AB Helmet";
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "njs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            shade = "shade1";
            cover = "Net1";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_NJS1_net2: SiP_M1C_Helmet_HQ_187RCT_1LT_NJS1_net1
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
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "njs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            shade = "shade1";
            cover = "Net2";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_NJS1_net3: SiP_M1C_Helmet_HQ_187RCT_1LT_NJS1_net1
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
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "njs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            shade = "shade1";
            cover = "Net3";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_NJS1_net4: SiP_M1C_Helmet_HQ_187RCT_1LT_NJS1_net1
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
        hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_1_1LT.rvmat","simc_lcd_43\data\lcd_net_79id.rvmat","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "njs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            shade = "shade1";
            cover = "Net4";
        };
    };

    class SiP_M1C_Helmet_HQ_187RCT_1LT_NJS2_net1: SiP_M1C_Helmet_HQ_187RCT_1LT_NJS1_net1
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
        hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_2_1LT.rvmat","","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "njs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            shade = "shade2";
            cover = "Net1";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_NJS2_net2: SiP_M1C_Helmet_HQ_187RCT_1LT_NJS2_net1
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
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "njs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            shade = "shade2";
            cover = "Net2";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_NJS2_net3: SiP_M1C_Helmet_HQ_187RCT_1LT_NJS2_net1
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
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "njs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            shade = "shade2";
            cover = "Net3";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_NJS2_net4: SiP_M1C_Helmet_HQ_187RCT_1LT_NJS2_net1
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
        hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_2_1LT.rvmat","simc_lcd_43\data\lcd_net_79id.rvmat","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "njs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            shade = "shade2";
            cover = "Net4";
        };
    };

    class SiP_M1C_Helmet_HQ_187RCT_1LT_NJS3_net1: SiP_M1C_Helmet_HQ_187RCT_1LT_NJS1_net1
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
        hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_3_1LT.rvmat","","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "njs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            shade = "shade3";
            cover = "Net1";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_NJS3_net2: SiP_M1C_Helmet_HQ_187RCT_1LT_NJS3_net1
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
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "njs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            shade = "shade3";
            cover = "Net2";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_NJS3_net3: SiP_M1C_Helmet_HQ_187RCT_1LT_NJS3_net1
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
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "njs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            shade = "shade3";
            cover = "Net3";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_NJS3_net4: SiP_M1C_Helmet_HQ_187RCT_1LT_NJS3_net1
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
        hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_3_1LT.rvmat","simc_lcd_43\data\lcd_net_79id.rvmat","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "njs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            shade = "shade3";
            cover = "Net4";
        };
    };

    class SiP_M1C_Helmet_HQ_187RCT_1LT_NJS4_net1: SiP_M1C_Helmet_HQ_187RCT_1LT_NJS1_net1
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
        hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_4_1LT.rvmat","","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "njs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            shade = "shade4";
            cover = "Net1";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_NJS4_net2: SiP_M1C_Helmet_HQ_187RCT_1LT_NJS3_net1
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
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "njs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            shade = "shade4";
            cover = "Net2";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_NJS4_net3: SiP_M1C_Helmet_HQ_187RCT_1LT_NJS3_net1
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
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "njs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            shade = "shade4";
            cover = "Net3";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_NJS4_net4: SiP_M1C_Helmet_HQ_187RCT_1LT_NJS3_net1
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
        hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_4_1LT.rvmat","simc_lcd_43\data\lcd_net_79id.rvmat","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "njs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            shade = "shade4";
            cover = "Net4";
        };
    };

    class SiP_M1C_Helmet_HQ_187RCT_1LT_NJS5_net1: SiP_M1C_Helmet_HQ_187RCT_1LT_NJS1_net1
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
        hiddenSelectionsMaterials[] = {"\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_5_1LT.rvmat","","",""};
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "njs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            shade = "shade5";
            cover = "Net1";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_NJS5_net2: SiP_M1C_Helmet_HQ_187RCT_1LT_NJS3_net1
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
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "njs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            shade = "shade5";
            cover = "Net2";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_NJS5_net3: SiP_M1C_Helmet_HQ_187RCT_1LT_NJS3_net1
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
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "njs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            shade = "shade5";
            cover = "Net3";
        };
    };
    class SiP_M1C_Helmet_HQ_187RCT_1LT_NJS5_net4: SiP_M1C_Helmet_HQ_187RCT_1LT_NJS3_net1
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
            "\\SiP\UN_Gear\US\Army\Helmets\Textures\units\187RCT\ranks\Officer\HQ\US_Pot_5_1LT.rvmat",
            "simc_lcd_43\data\lcd_net_79id.rvmat",
            "",
            ""
        };
        class XtdGearInfo
        {	
            unit = "Korea_187RCT_HQ";
            rank = "first_Lt";
            straps = "njs";
            model = "SiP_M1C_Helmet_GearModel";
            accesories = "empty";
            era = "early";
            shade = "shade5";
            cover = "Net4";
        };
    };
};