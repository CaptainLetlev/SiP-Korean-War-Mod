class cfgPatches
{
    class SiP_Patch_1950_uk_uniform
    {
        addonRootClass = "SiP_Patch_UK_Uniforms";
        requiredAddons[] = 
        {
            "simc_uaf_44_gare",
            "fow_characters_c",
            "SiP_Patch_M1951_uniform"
        };
        units[] = {};
        weapons[] = 
        {
            "SiP_m50_bush_jacket_uk_uniform",
            "SiP_m50_bush_jacket_uk_lcpl",
            "SiP_m50_bush_jacket_uk_cpl",
            "SiP_m50_bush_jacket_uk_sgt",
            "SiP_m50_bush_jacket_uk_csgt",
            "SiP_m50_bush_jacket_uk_2lt",
            "SiP_m50_bush_jacket_uk_lt",

            "SiP_m43_rar_uniform",
            "SiP_m43_rar_lcpl",
            "SiP_m43_rar_cpl",
            "SiP_m43_rar_sgt",
            "SiP_m43_rar_ssgt",
            "SiP_m43_rar_2lt",
            "SiP_m43_rar_lt",

            "SiP_m43_uk_uniform_w",
            "SiP_m43_uk_uniform_w",
            "SiP_m43_uk_lcpl_w",
            "SiP_m43_uk_cpl_w",
            "SiP_m43_uk_sgt_w",
            "SiP_m43_uk_csgt_w",
            "SiP_m43_uk_2lt_w",
            "SiP_m43_uk_lt_w",

            "SiP_m50_tanker",

            "SiP_m37_can_tanker",
            "SiP_m37_can_tanker_lcpl",
            "SiP_m37_can_tanker_cpl",
            "SiP_m37_can_tanker_sgt"
        };
    };
};

class cfgWeapons
{
    class Uniform_Base;
    class U_Simc_BasicBody;
    class U_Simc_US_Swatter;

    class SiP_m51_uniform: U_Simc_BasicBody
    {
        class ItemInfo;
    };
    class SiP_m51_uniform_w_scarf: U_Simc_BasicBody
    {
        class ItemInfo;
    };

    class fow_u_uk_bd40_private;

    class fow_u_uk_bd40_seac_02_private: fow_u_uk_bd40_private
	{
		class ItemInfo;
	};

    class U_Simc_US_Swatter_late: U_Simc_US_Swatter
    {
        class ItemInfo;
    };

    class SiP_m50_bush_jacket_uk_uniform: SiP_m51_uniform
    {
        displayName = "[BCFK] Jungle Bush Jacket";
        descriptionShort = "jacket, Field, 1950";
        hiddenSelections[] = {"camo","camo2","rank","falg","falg_left","insignia","bots","rank2"};
        hiddenSelectionsTextures[] = {"\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m50_bush_jacket_uk_uniform_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1950_uk";
            nco_ranks = "empty";
            officer_ranks = "empty";
            scarf = "noscarf";
        };
    };
    class SiP_m50_bush_jacket_uk_lcpl: SiP_m50_bush_jacket_uk_uniform
    {
        displayName = "[BCFK] Jungle Bush Jacket 01 (L/Cpl)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m50_bush_jacket_uk_lcpl_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1950_uk";
            nco_ranks = "lcpl";
            officer_ranks = "empty";
            scarf = "noscarf";
        };
    };
    class SiP_m50_bush_jacket_uk_cpl: SiP_m50_bush_jacket_uk_uniform
    {
        displayName = "[BCFK] Jungle Bush Jacket 02 (Cpl)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m50_bush_jacket_uk_cpl_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1950_uk";
            nco_ranks = "cpl";
            officer_ranks = "empty";
            scarf = "noscarf";
        };
    };
    class SiP_m50_bush_jacket_uk_sgt: SiP_m50_bush_jacket_uk_uniform
    {
        displayName = "[BCFK] Jungle Bush Jacket 03 (Sgt)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m50_bush_jacket_uk_sgt_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1950_uk";
            nco_ranks = "sgt";
            officer_ranks = "empty";
            scarf = "noscarf";
        };
    };
    class SiP_m50_bush_jacket_uk_csgt: SiP_m50_bush_jacket_uk_uniform
    {
        displayName = "[BCFK] Jungle Bush Jacket 04 (C/Sgt)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m50_bush_jacket_uk_csgt_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1950_uk";
            nco_ranks = "csgt";
            officer_ranks = "empty";
            scarf = "noscarf";
        };
    };
    class SiP_m50_bush_jacket_uk_2lt: SiP_m50_bush_jacket_uk_uniform
    {
        displayName = "[BCFK] Jungle Bush Jacket 05 (2nd Lt)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m50_bush_jacket_uk_2lt_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1950_uk";
            nco_ranks = "empty";
            officer_ranks = "second_Lt";
            scarf = "noscarf";
        };
    };
    class SiP_m50_bush_jacket_uk_lt: SiP_m50_bush_jacket_uk_uniform
    {
        displayName = "[BCFK] Jungle Bush Jacket 06 (Lt)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m50_bush_jacket_uk_lt_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1950_uk";
            nco_ranks = "empty";
            officer_ranks = "first_Lt";
            scarf = "noscarf";
        };
    };

    class SiP_m43_rar_uniform: SiP_m50_bush_jacket_uk_uniform
    {
        displayName = "[BCFK] M1943 RAR Jacket";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m43_rar_uniform_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1943_uk";
            uniform = "Aussie";
            nco_ranks = "empty";
            officer_ranks = "empty";
            scarf = "noscarf";
        };
    };
    class SiP_m43_rar_lcpl: SiP_m43_rar_uniform
    {
        displayName = "[BCFK] M1943 RAR Jacket 01 (L/Cpl)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m43_rar_lcpl_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1943_uk";
            uniform = "Aussie";
            nco_ranks = "lcpl";
            officer_ranks = "empty";
            scarf = "noscarf";
        };
    };
    class SiP_m43_rar_cpl: SiP_m43_rar_uniform
    {
        displayName = "[BCFK] M1943 RAR Jacket 02 (Cpl)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m43_rar_cpl_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1943_uk";
            uniform = "Aussie";
            nco_ranks = "cpl";
            officer_ranks = "empty";
            scarf = "noscarf";
        };
    };
    class SiP_m43_rar_sgt: SiP_m43_rar_uniform
    {
        displayName = "[BCFK] M1943 RAR Jacket 03 (Sgt)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m43_rar_sgt_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1943_uk";
            uniform = "Aussie";
            nco_ranks = "sgt";
            officer_ranks = "empty";
            scarf = "noscarf";
        };
    };
    class SiP_m43_rar_ssgt: SiP_m43_rar_uniform
    {
        displayName = "[BCFK] M1943 RAR Jacket 04 (SSgt)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m43_rar_ssgt_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1943_uk";
            uniform = "Aussie";
            nco_ranks = "ssgt";
            officer_ranks = "empty";
            scarf = "noscarf";
        };
    };
    class SiP_m43_rar_2lt: SiP_m43_rar_uniform
    {
        displayName = "[BCFK] M1943 RAR Jacket 05 (2nd Lt)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m43_rar_2lt_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1943_uk";
            uniform = "Aussie";
            nco_ranks = "empty";
            officer_ranks = "second_Lt";
            scarf = "noscarf";
        };
    };
    class SiP_m43_rar_lt: SiP_m43_rar_uniform
    {
        displayName = "[BCFK] M1943 RAR Jacket 06 (Lt)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m43_rar_2lt_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1943_uk";
            uniform = "Aussie";
            nco_ranks = "empty";
            officer_ranks = "first_Lt";
            scarf = "noscarf";
        };
    };
    
    class SiP_m43_uk_uniform_w: SiP_m51_uniform_w_scarf
    {
        scope = 2;
        author = "Letlev";
        displayName = "[BCFK] M1943 Field Jacket";
        descriptionShort = "jacket, Field, 1943";
        model = "\simc_uaf_44\suitpack_m43.p3d";
        hiddenSelections[] = {"camo","camo2","rank","falg","falg_left","insignia","rank2"};
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m43_uk_uniform_w_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1943_uk";
            uniform = "British";
            nco_ranks = "empty";
            officer_ranks = "empty";
            scarf = "scarf";
        };
    };
    class SiP_m43_uk_lcpl_w: SiP_m43_uk_uniform_w
    {
        displayName = "[BCFK] M1943 Field Jacket 01 (L/Cpl)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m43_uk_lcpl_w_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1943_uk";
            uniform = "British";
            nco_ranks = "lcpl";
            officer_ranks = "empty";
            scarf = "scarf";
        };
    };
    class SiP_m43_uk_cpl_w: SiP_m43_uk_uniform_w
    {
        displayName = "[BCFK] M1943 Field Jacket 02 (Cpl)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m43_uk_cpl_w_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1943_uk";
            uniform = "British";
            nco_ranks = "cpl";
            officer_ranks = "empty";
            scarf = "scarf";
        };
    };
    class SiP_m43_uk_sgt_w: SiP_m43_uk_uniform_w
    {
        displayName = "[BCFK] M1943 Field Jacket 03 (Sgt)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m43_uk_sgt_w_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1943_uk";
            uniform = "British";
            nco_ranks = "cpl";
            officer_ranks = "empty";
            scarf = "scarf";
        };
    };
    class SiP_m43_uk_csgt_w: SiP_m43_uk_uniform_w
    {
        displayName = "[BCFK] M1943 Field Jacket 04 (C/Sgt)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m43_uk_csgt_w_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1943_uk";
            uniform = "British";
            nco_ranks = "csgt";
            officer_ranks = "empty";
            scarf = "scarf";
        };
    };
    class SiP_m43_uk_2lt_w: SiP_m43_uk_uniform_w
    {
        displayName = "[BCFK] M1943 Field Jacket 05 (2nd Lt)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m43_uk_2lt_w_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1943_uk";
            uniform = "British";
            nco_ranks = "empty";
            officer_ranks = "second_Lt";
            scarf = "scarf";
        };
    };
    class SiP_m43_uk_lt_w: SiP_m43_uk_uniform_w
    {
        displayName = "[BCFK] M1943 Field Jacket 06 (Lt)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m43_uk_lt_w_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1943_uk";
            uniform = "British";
            nco_ranks = "empty";
            officer_ranks = "first_Lt";
            scarf = "scarf";
        };
    };

    class SiP_m50_tanker: U_Simc_US_Swatter_late
    {
        scope = 2;
        displayName = "[BCFK] Wool Sweater (Tanker)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m50_tanker_base";
        };
    };

    class SiP_m37_can_tanker: fow_u_uk_bd40_seac_02_private
	{
		displayName = "[BCFK] P37 OD";
		class ItemInfo: ItemInfo
		{
			uniformClass = "SiP_m37_can_tanker_base";
		};
        class XtdGearInfo
        {
            model = "u_hssn_SiP_p37_uk_od";
            ranks = "empty";
        };
	};
	class SiP_m37_can_tanker_lcpl: SiP_m37_can_tanker
	{
		displayName = "[BCFK] P37 OD 01 (L/Cpl)";
		class ItemInfo: ItemInfo
		{
			uniformClass = "SiP_m37_can_tanker_lcpl_base";
		};
        class XtdGearInfo
        {
            model = "u_hssn_SiP_p37_uk_od";
            ranks = "lcpl";
        };
	};
	class SiP_m37_can_tanker_cpl: SiP_m37_can_tanker
	{
		displayName = "[BCFK] P37 OD 02 (Cpl)";
		class ItemInfo: ItemInfo
		{
			uniformClass = "SiP_m37_can_tanker_cpl_base";
		};
        class XtdGearInfo
        {
            model = "u_hssn_SiP_p37_uk_od";
            ranks = "cpl";
        };
	};
	class SiP_m37_can_tanker_sgt: SiP_m37_can_tanker
	{
		displayName = "[BCFK] P37 OD 03 (Sgt)";
		class ItemInfo: ItemInfo
		{
			uniformClass = "SiP_m37_can_tanker_sgt_base";
		};
        class XtdGearInfo
        {
            model = "u_hssn_SiP_p37_uk_od";
            ranks = "sgt";
        };
	};
};

class cfgVehicles
{
    class SiP_m51_uniform_private_base;
    class SiP_m51_uniform_w_scarf_base;

    class fow_s_uk_seac_02_private;
	class fow_s_uk_seac_02_lance_corporal;
	class fow_s_uk_seac_02_corporal;
	class fow_s_uk_seac_02_sergeant;

    class Simc_US_swatter_late;

    class SiP_m50_bush_jacket_uk_uniform_base: SiP_m51_uniform_private_base
    {
        model = "\simc_uaf_44\m43_trop.p3d";
        uniformClass = "SiP_m50_bush_jacket_uk_uniform";
        hiddenSelections[] = {"camo","camo2","rank","falg","falg_left","insignia","bots","rank2"};
        hiddenSelectionsTextures[] = 
        {
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa",
            "",
            "",
            "",
            "",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bot_od7_co.paa",
            ""
        };
    };
    class SiP_m50_bush_jacket_uk_lcpl_base: SiP_m50_bush_jacket_uk_uniform_base
    {
        uniformClass = "SiP_m50_bush_jacket_uk_lcpl";
        hiddenSelectionsTextures[] = 
        {
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\ranks\uk_rank_Lcpl_ca.paa","","","","\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bot_od7_co.paa",""};
    };
    class SiP_m50_bush_jacket_uk_cpl_base: SiP_m50_bush_jacket_uk_uniform_base
    {
        uniformClass = "SiP_m50_bush_jacket_uk_cpl";
        hiddenSelectionsTextures[] = 
        {
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\ranks\uk_rank_cpl_ca.paa",
            "",
            "",
            "",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bot_od7_co.paa",
            ""
        };
    };
    class SiP_m50_bush_jacket_uk_sgt_base: SiP_m50_bush_jacket_uk_uniform_base
    {
        uniformClass = "SiP_m50_bush_jacket_uk_sgt";
        hiddenSelectionsTextures[] = 
        {"\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa","\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa","\SiP\Addons\sip_uk_army_gear\Uniforms\textures\ranks\uk_rank_sgt_ca.paa","","","","\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bot_od7_co.paa",""};
    };
    class SiP_m50_bush_jacket_uk_csgt_base: SiP_m50_bush_jacket_uk_uniform_base
    {
        uniformClass = "SiP_m50_bush_jacket_uk_csgt";
        hiddenSelectionsTextures[] = 
        {
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\ranks\uk_rank_csgt_ca.paa",
            "",
            "",
            "",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bot_od7_co.paa",
            ""
        };
    };
    class SiP_m50_bush_jacket_uk_2lt_base: SiP_m50_bush_jacket_uk_uniform_base
    {
        uniformClass = "SiP_m50_bush_jacket_uk_2lt";
        hiddenSelectionsTextures[] = {"\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa","\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa","","","","","\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bot_od7_co.paa","\SiP\Addons\sip_uk_army_gear\Uniforms\textures\ranks\uk_rank_2lt_ca.paa"};
    };
    class SiP_m50_bush_jacket_uk_lt_base: SiP_m50_bush_jacket_uk_2lt_base
    {
        uniformClass = "SiP_m50_bush_jacket_uk_lt";
        hiddenSelectionsTextures[] = {"\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa","\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa","","","","","\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bot_od7_co.paa","\SiP\Addons\sip_uk_army_gear\Uniforms\textures\ranks\uk_rank_lt_ca.paa"};
    };
    
    class SiP_m43_uk_uniform_w_base: SiP_m51_uniform_w_scarf_base
    {
        uniformClass = "SiP_m43_uk_uniform_w";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa","","","","","\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bot_od7_co.paa"};
    };
    class SiP_m43_uk_lcpl_w_base: SiP_m51_uniform_w_scarf_base
    {
        uniformClass = "SiP_m43_uk_lcpl_w";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa","\SiP\Addons\sip_uk_army_gear\Uniforms\textures\ranks\uk_rank_Lcpl_ca.paa","","","","\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bot_od7_co.paa"};
    };
    class SiP_m43_uk_cpl_w_base: SiP_m51_uniform_w_scarf_base
    {
        uniformClass = "SiP_m43_uk_cpl_w";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa","\SiP\Addons\sip_uk_army_gear\Uniforms\textures\ranks\uk_rank_cpl_ca.paa","","","","\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bot_od7_co.paa"};
    };
    class SiP_m43_uk_sgt_w_base: SiP_m51_uniform_w_scarf_base
    {
        uniformClass = "SiP_m43_uk_sgt_w";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa","\SiP\Addons\sip_uk_army_gear\Uniforms\textures\ranks\uk_rank_sgt_ca.paa","","","","\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bot_od7_co.paa"};
    };
    class SiP_m43_uk_csgt_w_base: SiP_m51_uniform_w_scarf_base
    {
        uniformClass = "SiP_m43_uk_csgt_w";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa","\SiP\Addons\sip_uk_army_gear\Uniforms\textures\ranks\uk_rank_csgt_ca.paa","","","","\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bot_od7_co.paa"};
    };
    class SiP_m43_uk_2lt_w_base: SiP_m51_uniform_w_scarf_base
    {
        hiddenSelections[] = {"camo","camo2","rank2","falg","falg_left","insignia","bots"};
        uniformClass = "SiP_m43_uk_2lt_w";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa","\SiP\Addons\sip_uk_army_gear\Uniforms\textures\ranks\uk_rank_2lt_ca.paa","","","","\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bot_od7_co.paa"};
    };
    class SiP_m43_uk_lt_w_base: SiP_m43_uk_2lt_w_base
    {
        uniformClass = "SiP_m43_uk_lt_w";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa","\SiP\Addons\sip_uk_army_gear\Uniforms\textures\ranks\uk_rank_lt_ca.paa","","","","\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bot_od7_co.paa"};
    };
    
    class SiP_m43_rar_uniform_base: SiP_m51_uniform_w_scarf_base
    {
        uniformClass = "SiP_m43_rar_uniform";
        model = "simc_uaf_44\m43_legging.p3d";
        hiddenSelections[] = {"camo","camo2","rank","falg","falg_left","insignia","bots"};
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa","","","","\SiP\Addons\sip_uk_army_units\3RAR\patches\rar_patch_ca.paa","\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bot_od7_co.paa"};
    };
    class SiP_m43_rar_lcpl_base: SiP_m43_rar_uniform_base
    {
        uniformClass = "SiP_m43_rar_lcpl";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa","\SiP\Addons\sip_uk_army_gear\Uniforms\textures\ranks\uk_rank_Lcpl_ca.paa","","","\SiP\Addons\sip_uk_army_units\3RAR\patches\rar_patch_ca.paa","\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bot_od7_co.paa"};
    };
    class SiP_m43_rar_cpl_base: SiP_m43_rar_uniform_base
    {
        uniformClass = "SiP_m43_rar_cpl";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa","\SiP\Addons\sip_uk_army_gear\Uniforms\textures\ranks\uk_rank_cpl_ca.paa","","","\SiP\Addons\sip_uk_army_units\3RAR\patches\rar_patch_ca.paa","\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bot_od7_co.paa"};
    };
    class SiP_m43_rar_sgt_base: SiP_m43_rar_uniform_base
    {
        uniformClass = "SiP_m43_rar_sgt";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa","\SiP\Addons\sip_uk_army_gear\Uniforms\textures\ranks\uk_rank_sgt_ca.paa","","","\SiP\Addons\sip_uk_army_units\3RAR\patches\rar_patch_ca.paa","\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bot_od7_co.paa"};
    };
    class SiP_m43_rar_ssgt_base: SiP_m43_rar_uniform_base
    {
        uniformClass = "SiP_m43_rar_ssgt";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa","\SiP\Addons\sip_uk_army_gear\Uniforms\textures\ranks\uk_rank_csgt_ca.paa","","","\SiP\Addons\sip_uk_army_units\3RAR\patches\rar_patch_ca.paa","\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bot_od7_co.paa"};
    };
    class SiP_m43_rar_2lt_base: SiP_m43_rar_uniform_base
    {
        hiddenSelections[] = {"camo","camo2","rank2","falg","falg_left","insignia","bots"};
        uniformClass = "SiP_m43_rar_2lt";
        hiddenSelectionsTextures[] = 
        {"\simc_uaf_44\data\m43_1_co.paa","\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa","\SiP\Addons\sip_uk_army_gear\Uniforms\textures\ranks\uk_rank_2lt_ca.paa","","","\SiP\Addons\sip_uk_army_units\3RAR\patches\rar_patch_ca.paa","\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bot_od7_co.paa"};
    };
    class SiP_m43_rar_lt_base: SiP_m43_rar_2lt_base
    {
        uniformClass = "SiP_m43_rar_lt";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bush_jacket_od7_co.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\ranks\uk_rank_lt_ca.paa",
            "",
            "",
            "\SiP\Addons\sip_uk_army_units\3RAR\patches\rar_patch_ca.paa",
            "\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bot_od7_co.paa"
        };
    };
    
    class SiP_m50_tanker_base: Simc_US_swatter_late
    {
        model = "simc_uaf_44\swatter_late.p3d";
        hiddenSelections[] = {"camo","bots"};
        uniformClass = "SiP_m50_tanker";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\swatter_co.paa","\SiP\Addons\sip_uk_army_gear\Uniforms\textures\uk_bot_od7_co.paa"};
    };
    
    class SiP_m37_can_tanker_base: fow_s_uk_seac_02_private
	{
		model = "\fow\fow_characters\uk\lodu_brit_seac_01.p3d";
		hiddenSelections[] = {"camo","camo_private","camo_lance_corporal","camo_corporal","camo_sergeant","camo_officer"};
		uniformClass = "SiP_m37_can_tanker";
		hiddenSelectionsTextures[] = {"SiP\Addons\sip_uk_army_gear\Uniforms\textures\p37_od_co.paa","SiP\Addons\sip_uk_army_gear\Uniforms\textures\p37_od_co.paa","","","",""};
	};
	class SiP_m37_can_tanker_lcpl_base: fow_s_uk_seac_02_lance_corporal
	{
		model = "\fow\fow_characters\uk\lodu_brit_seac_01.p3d";
		uniformClass = "SiP_m37_can_tanker_lcpl";
		hiddenSelectionsTextures[] = {"SiP\Addons\sip_uk_army_gear\Uniforms\textures\p37_od_co.paa","","SiP\Addons\sip_uk_army_gear\Uniforms\textures\p37_od_co.paa","","",""};
	};
	class SiP_m37_can_tanker_cpl_base: fow_s_uk_seac_02_corporal
	{
		model = "\fow\fow_characters\uk\lodu_brit_seac_01.p3d";
		uniformClass = "SiP_m37_can_tanker_cpl";
		hiddenSelectionsTextures[] = {"SiP\Addons\sip_uk_army_gear\Uniforms\textures\p37_od_co.paa","","","SiP\Addons\sip_uk_army_gear\Uniforms\textures\p37_od_co.paa","",""};
	};
	class SiP_m37_can_tanker_sgt_base: fow_s_uk_seac_02_sergeant
	{
		model = "\fow\fow_characters\uk\lodu_brit_seac_01.p3d";
		uniformClass = "SiP_m37_can_tanker_sgt";
		hiddenSelectionsTextures[] = {"SiP\Addons\sip_uk_army_gear\Uniforms\textures\p37_od_co.paa","","","","SiP\Addons\sip_uk_army_gear\Uniforms\textures\p37_od_co.paa",""};
	};
};

class XtdGearModels
{
    class CfgWeapons 
    {		
        class u_hssn_SiP_M1950_uk
        {
            label = "";
            author = "Letlev";
            options[]=
            {
                "nco_ranks",
                "officer_ranks"
            };
            class nco_ranks
            {
                label = "NCO Ranks";
                hiddenselection = "rank";
                values[]=
                {
                    "empty",
                    "lcpl",
                    "cpl",
                    "sgt",
                    "csgt"
                };
                class empty
                {
                    label = "Empty";
                };
                class lcpl
                {
                    label = "L/Cpl";
                };
                class cpl
                {
                    label = "Cpl";
                };
                class sgt
                {
                    label = "Sgt";
                };
                class csgt
                {
                    label = "C/Sgt";
                };
            };
            class officer_ranks
            {
                label = "Officer Ranks";
                hiddenselection = "rank2";
                values[]=
                {
                    "empty",
                    "second_Lt",
                    "first_Lt"
                };
                class empty
                {
                    label = "Empty";
                };
                class second_Lt
                {
                    label = "2nd Lt";
                };
                class first_Lt
                {
                    label = "1st Lt";
                };
            };
        };
        
        class u_hssn_SiP_M1943_uk
        {
            label = "";
            author = "Letlev";
            options[]=
            {
                "uniform",
                "nco_ranks",
                "officer_ranks",
                "scarf"
            };
            class uniform
            {
                label = "Uniform";
                hiddenselection = "camo";
                values[]=
                {
                    "British",
                    "Aussie"
                };
            };
            class nco_ranks
            {
                label = "NCO Ranks";
                hiddenselection = "rank";
                values[]=
                {
                    "empty",
                    "lcpl",
                    "cpl",
                    "sgt",
                    "csgt",
                    "ssgt"
                };
                class empty
                {
                    label = "Empty";
                };
                class lcpl
                {
                    label = "L/Cpl";
                };
                class cpl
                {
                    label = "Cpl";
                };
                class sgt
                {
                    label = "Sgt";
                };
                class csgt
                {
                    label = "C/Sgt";
                };
                class ssgt
                {
                    label = "SSgt";
                };
            };
            class officer_ranks
            {
                label = "Officer Ranks";
                hiddenselection = "rank2";
                values[]=
                {
                    "empty",
                    "second_Lt",
                    "first_Lt"
                };
                class empty
                {
                    label = "Empty";
                };
                class second_Lt
                {
                    label = "2nd Lt";
                };
                class first_Lt
                {
                    label = "1st Lt";
                };
            };
            class scarf
            {
                label = "Scarf";
                hiddenselection = "falg";
                changeingame = 1;
                changedelay = 2;
                values[]=
                {
                    "noscarf",
                    "scarf"
                };
                class noscarf
                {
                    label = "noscarf";
                    actionLabel = "Remove Scarf";
                };
                class scarf
                {
                    label = "scarf";
                    actionLabel = "Wear Scarf";
                };
            };
        };

        class u_hssn_SiP_p37_uk_od
        {
            label = "";
            author = "Letlev";
            options[]=
            {
                "ranks"
            };
            class ranks
            {
                label = "Ranks";
                hiddenselection = "camo";
                values[]=
                {
                    "empty",
                    "lcpl",
                    "cpl",
                    "sgt"
                };
                class empty
                {
                    label = "Empty";
                };
                class lcpl
                {
                    label = "L/Cpl";
                };
                class cpl
                {
                    label = "Cpl";
                };
                class sgt
                {
                    label = "Sgt";
                };
            };
        };
    };
};