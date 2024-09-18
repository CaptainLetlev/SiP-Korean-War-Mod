class cfgPatches
{
    class SiP_Patch_M1951_uniform
    {
        addonRootClass = "SiP_Patch_US_Army_Uniforms";
        requiredAddons[] = 
        {
            "simc_uaf_44_gare"
        };
        units[] = {};
        weapons[] = 
        {
            "SiP_m51_uniform",
            "SiP_m51_uniform_private",
            "SiP_m51_uniform_corporal",
            "SiP_m51_uniform_sergeant",
            "SiP_m51_uniform_sergeant_1stclass",
            "SiP_m51_uniform_master_sergeant",
            "SiP_m51_uniform_first_sergeant",
            "SiP_m51_uniform_2lt",
            "SiP_m51_uniform_1lt",
            "SiP_m51_uniform_captain",
            "SiP_m51_uniform_major",
            "SiP_m51_uniform_ltcol",
            "SiP_m51_uniform_col",

            "SiP_m51_uniform_7id",
            "SiP_m51_uniform_7id_private",
            "SiP_m51_uniform_7id_corporal",
            "SiP_m51_uniform_7id_sergeant",
            "SiP_m51_uniform_7id_sergeant_1stclass",
            "SiP_m51_uniform_7id_master_sergeant",
            "SiP_m51_uniform_7id_first_sergeant",
            "SiP_m51_uniform_7id_2lt",
            "SiP_m51_uniform_7id_1lt",
            "SiP_m51_uniform_7id_captain",
            "SiP_m51_uniform_7id_major",
            "SiP_m51_uniform_7id_ltcol",
            "SiP_m51_uniform_7id_col",

            "SiP_m51_uniform_w_scarf",
            "SiP_m51_uniform_w_scarf_pvt",
            "SiP_m51_uniform_w_scarf_cpl",
            "SiP_m51_uniform_w_scarf_sgt",
            "SiP_m51_uniform_w_scarf_sfc",
            "SiP_m51_uniform_w_scarf_msg",
            "SiP_m51_uniform_w_scarf_1sgt",
            "SiP_m51_uniform_w_scarf_2ndlt",
            "SiP_m51_uniform_w_scarf_1stlt",
            "SiP_m51_uniform_w_scarf_capt",
            "SiP_m51_uniform_w_scarf_maj",
            "SiP_m51_uniform_w_scarf_ltcol",
            "SiP_m51_uniform_w_scarf_col",

            "SiP_m51_ab_uniform",
            "SiP_m51_ab_uniform_pvt",
            "SiP_m51_ab_uniform_cpl",
            "SiP_m51_ab_uniform_sgt",
            "SiP_m51_ab_uniform_sfc",
            "SiP_m51_ab_uniform_msg",
            "SiP_m51_ab_uniform_1sgt",
            "SiP_m51_ab_uniform_2lt",
            "SiP_m51_ab_uniform_1lt",
            "SiP_m51_ab_uniform_capt",
            "SiP_m51_ab_uniform_maj",
            "SiP_m51_ab_uniform_ltcol",
            "SiP_m51_ab_uniform_col"
        };
    };
};

class cfgWeapons
{
    class Uniform_Base;
    class ItemCore;

    class U_BasicBody: Uniform_Base
    {
        class ItemInfo;
    };
    class U_Simc_BasicBody: U_BasicBody
    {
        class ItemInfo;
    };

    class SiP_m51_uniform: U_Simc_BasicBody
    {
        scope = 2;
        author = "Letlev";
        displayName = "[US] M1951 Uniform";
        descriptionShort = "jacket, Field, M1951";
        model = "\simc_uaf_44\suitpack_m43.p3d";
        hiddenSelections[] = {"camo","camo2","rank","falg","falg_left","insignia","rank2"};
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "unrolled";
            rank = "empty";
            scarf = "noscarf";
            shoepack = "standard";
        };
    };

    class SiP_m51_uniform_private: SiP_m51_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_private_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "unrolled";
            rank = "pfc";
            scarf = "noscarf";
            shoepack = "standard";
        };
    };
    class SiP_m51_uniform_corporal: SiP_m51_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_corporal_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "unrolled";
            rank = "cpl";
            scarf = "noscarf";
            shoepack = "standard";
        };
    };
    class SiP_m51_uniform_sergeant: SiP_m51_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_sergeant_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "unrolled";
            rank = "sgt";
            scarf = "noscarf";
            shoepack = "standard";
        };
    };
    class SiP_m51_uniform_sergeant_1stclass: SiP_m51_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_sergeant_1stclass_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "unrolled";
            rank = "sfc";
            scarf = "noscarf";
            shoepack = "standard";
        };
    };
    class SiP_m51_uniform_master_sergeant: SiP_m51_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_master_sergeant_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "unrolled";
            rank = "msgt";
            scarf = "noscarf";
            shoepack = "standard";
        };
    };
    class SiP_m51_uniform_first_sergeant: SiP_m51_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_first_sergeant_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "unrolled";
            rank = "first_sgt";
            scarf = "noscarf";
            shoepack = "standard";
        };
    };
    class SiP_m51_uniform_2lt: SiP_m51_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_2lt_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "unrolled";
            rank = "second_Lt";
            scarf = "noscarf";
            shoepack = "standard";
        };
    };
    class SiP_m51_uniform_1lt: SiP_m51_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_1lt_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "unrolled";
            rank = "first_Lt";
            scarf = "noscarf";
            shoepack = "standard";
        };
    };
    class SiP_m51_uniform_captain: SiP_m51_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_captain_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "unrolled";
            rank = "Captain";
            scarf = "noscarf";
            shoepack = "standard";
        };
    };
    class SiP_m51_uniform_major: SiP_m51_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_major_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "unrolled";
            rank = "Major";
            scarf = "noscarf";
            shoepack = "standard";
        };
    };
    class SiP_m51_uniform_ltcol: SiP_m51_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_ltcol_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "unrolled";
            rank = "LtCol";
            scarf = "noscarf";
            shoepack = "standard";
        };
    };
    class SiP_m51_uniform_col: SiP_m51_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_col_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "unrolled";
            rank = "Col";
            scarf = "noscarf";
            shoepack = "standard";
        };
    };

    class SiP_m51_uniform_sleeves: SiP_m51_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_sleeves_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "rolled";
            scarf = "noscarf";
            shoepack = "standard";
        };
    };
    class SiP_m51_uniform_sleeves_private: SiP_m51_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_sleeves_private_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "rolled";
            rank = "pfc";
            scarf = "noscarf";
            shoepack = "standard";
        };
    };
    class SiP_m51_uniform_sleeves_corporal: SiP_m51_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_sleeves_corporal_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "rolled";
            rank = "cpl";
            scarf = "noscarf";
            shoepack = "standard";
        };
    };
    class SiP_m51_uniform_sleeves_sergeant: SiP_m51_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_sleeves_sergeant_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "rolled";
            rank = "sgt";
            scarf = "noscarf";
            shoepack = "standard";
        };
    };
    class SiP_m51_uniform_sleeves_sergeant_1stclass: SiP_m51_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_sleeves_sergeant_1stclass_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "rolled";
            rank = "sfc";
            scarf = "noscarf";
            shoepack = "standard";
        };
    };
    class SiP_m51_uniform_sleeves_master_sergeant: SiP_m51_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_sleeves_master_sergeant_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "rolled";
            rank = "msgt";
            scarf = "noscarf";
            shoepack = "standard";
        };
    };
    class SiP_m51_uniform_sleeves_first_sergeant: SiP_m51_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_sleeves_first_sergeant_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "rolled";
            rank = "first_sgt";
            scarf = "noscarf";
            shoepack = "standard";
        };
    };
    class SiP_m51_uniform_sleeves_2lt: SiP_m51_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_sleeves_2lt_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "rolled";
            rank = "second_Lt";
            scarf = "noscarf";
            shoepack = "standard";
        };
    };
    class SiP_m51_uniform_sleeves_1lt: SiP_m51_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_sleeves_1lt_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "rolled";
            rank = "first_Lt";
            scarf = "noscarf";
            shoepack = "standard";
        };
    };
    class SiP_m51_uniform_sleeves_captain: SiP_m51_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_sleeves_captain_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "rolled";
            rank = "Captain";
            scarf = "noscarf";
            shoepack = "standard";
        };
    };
    class SiP_m51_uniform_sleeves_major: SiP_m51_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_sleeves_major_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "rolled";
            rank = "Major";
            scarf = "noscarf";
            shoepack = "standard";
        };
    };
    class SiP_m51_uniform_sleeves_ltcol: SiP_m51_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_sleeves_ltcol_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "rolled";
            rank = "LtCol";
            scarf = "noscarf";
            shoepack = "standard";
        };
    };
    class SiP_m51_uniform_sleeves_col: SiP_m51_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_sleeves_col_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "rolled";
            rank = "Col";
            scarf = "noscarf";
            shoepack = "standard";
        };
    };

    class SiP_m51_uniform_7id: SiP_m51_uniform
    {
        scope = 1;
        scopeArsenal = 1;
        displayName = "[US] M-1951 7ID";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_7id_base";
        };
        class XtdGearInfo{};
    };
    class SiP_m51_uniform_7id_private: SiP_m51_uniform_7id
    {
        displayName = "[US] M-1951 7ID 01 (Pvt)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_7id_private_base";
        };
        
    };
    class SiP_m51_uniform_7id_corporal: SiP_m51_uniform_7id
    {
        displayName = "[US] M-1951 7ID 02 (Cpl)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_7id_corporal_base";
        };
        
    };
    class SiP_m51_uniform_7id_sergeant: SiP_m51_uniform_7id
    {
        displayName = "[US] M-1951 7ID 03 (Sgt)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_7id_sergeant_base";
        };
        
    };
    class SiP_m51_uniform_7id_sergeant_1stclass: SiP_m51_uniform_7id
    {
        displayName = "[US] M-1951 7ID 04 (SFC)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_7id_sergeant_1stclass_base";
        };
        
    };
    class SiP_m51_uniform_7id_master_sergeant: SiP_m51_uniform_7id
    {
        displayName = "[US] M-1951 7ID 05 (MSG)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_7id_master_sergeant_base";
        };
        
    };
    class SiP_m51_uniform_7id_first_sergeant: SiP_m51_uniform_7id
    {
        displayName = "[US] M-1951 7ID 06 (1SG)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_7id_first_sergeant_base";
        };
        
    };
    class SiP_m51_uniform_7id_2lt: SiP_m51_uniform_7id
    {
        displayName = "[US] M-1951 7ID 07 (2nd Lt)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_7id_2lt_base";
        };
        
    };
    class SiP_m51_uniform_7id_1lt: SiP_m51_uniform_7id
    {
        displayName = "[US] M-1951 7ID 08 (1st Lt)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_7id_1lt_base";
        };
        
    };
    class SiP_m51_uniform_7id_captain: SiP_m51_uniform_7id
    {
        displayName = "[US] M-1951 7ID 09 (Captain)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_7id_captain_base";
        };
        
    };
    class SiP_m51_uniform_7id_major: SiP_m51_uniform_7id
    {
        displayName = "[US] M-1951 7ID 10 (Major)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_7id_major_base";
        };

    };
    class SiP_m51_uniform_7id_ltcol: SiP_m51_uniform_7id
    {
        displayName = "[US] M-1951 7ID 11 (Lt. Colonel)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_7id_ltcol_base";
        };
        
    };
    class SiP_m51_uniform_7id_col: SiP_m51_uniform_7id
    {
        displayName = "[US] M-1951 7ID 12 (Colonel)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_7id_col_base";
        };
    
    };

    class SiP_m51_uniform_w_scarf: U_Simc_BasicBody
    {
        scope = 2;
        author = "Letlev";
        displayName = "[US] M-1951 Uniform";
        descriptionShort = "jacket, Field, M1951";
        model = "\simc_uaf_44\suitpack_m43.p3d";
        hiddenSelections[] = {"camo","camo2","rank","falg","falg_left","insignia","rank2"};
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_w_scarf_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "unrolled";
            rank = "empty";
            scarf = "scarf";
            shoepack = "standard";
        };
    };
    class SiP_m51_uniform_w_scarf_pvt: SiP_m51_uniform_w_scarf
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_w_scarf_pvt_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "unrolled";
            rank = "pfc";
            scarf = "scarf";
            shoepack = "standard";
        };
    };
    class SiP_m51_uniform_w_scarf_cpl: SiP_m51_uniform_w_scarf
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_w_scarf_cpl_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "unrolled";
            rank = "cpl";
            scarf = "scarf";
            shoepack = "standard";
        };
    };
    class SiP_m51_uniform_w_scarf_sgt: SiP_m51_uniform_w_scarf
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_w_scarf_sgt_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "unrolled";
            rank = "sgt";
            scarf = "scarf";
            shoepack = "standard";
        };
    };
    class SiP_m51_uniform_w_scarf_sfc: SiP_m51_uniform_w_scarf
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_w_scarf_sfc_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "unrolled";
            rank = "sfc";
            scarf = "scarf";
            shoepack = "standard";
        };
    };
    class SiP_m51_uniform_w_scarf_msg: SiP_m51_uniform_w_scarf
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_w_scarf_msg_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "unrolled";
            rank = "msgt";
            scarf = "scarf";
            shoepack = "standard";
        };
    };
    class SiP_m51_uniform_w_scarf_1sgt: SiP_m51_uniform_w_scarf
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_w_scarf_1sgt_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "unrolled";
            rank = "first_sgt";
            scarf = "scarf";
            shoepack = "standard";
        };
    };
    class SiP_m51_uniform_w_scarf_2ndlt: SiP_m51_uniform_w_scarf
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_w_scarf_2ndlt_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "unrolled";
            rank = "second_Lt";
            scarf = "scarf";
            shoepack = "standard";
        };
    };
    class SiP_m51_uniform_w_scarf_1stlt: SiP_m51_uniform_w_scarf
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_w_scarf_1stlt_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "unrolled";
            rank = "first_Lt";
            scarf = "scarf";
            shoepack = "standard";
        };
    };
    class SiP_m51_uniform_w_scarf_capt: SiP_m51_uniform_w_scarf
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_w_scarf_capt_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "unrolled";
            rank = "Captain";
            scarf = "scarf";
            shoepack = "standard";
        };
    };
    class SiP_m51_uniform_w_scarf_maj: SiP_m51_uniform_w_scarf
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_w_scarf_maj_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "unrolled";
            rank = "Major";
            scarf = "scarf";
            shoepack = "standard";
        };
    };
    class SiP_m51_uniform_w_scarf_ltcol: SiP_m51_uniform_w_scarf
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_w_scarf_ltcol_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "unrolled";
            rank = "LtCol";
            scarf = "scarf";
            shoepack = "standard";
        };
    };
    class SiP_m51_uniform_w_scarf_col: SiP_m51_uniform_w_scarf
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_w_scarf_col_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "unrolled";
            rank = "Col";
            scarf = "scarf";
            shoepack = "standard";
        };
    };

    class SiP_m51_uniform_w_scarf_shoepack: U_Simc_BasicBody
    {
        scope = 2;
        author = "Letlev";
        displayName = "[US] M-1951 Uniform";
        descriptionShort = "jacket, Field, M1951";
        model = "\simc_uaf_44\suitpack_m43.p3d";
        hiddenSelections[] = {"camo","camo2","rank","falg","falg_left","insignia","rank2"};
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_w_scarf_shoepack_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "unrolled";
            rank = "empty";
            scarf = "scarf";
            shoepack = "shoepack";
        };
    };
    class SiP_m51_uniform_w_scarf_shoepack_pvt: SiP_m51_uniform_w_scarf_shoepack
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_w_scarf_shoepack_pvt_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "unrolled";
            rank = "pfc";
            scarf = "scarf";
            shoepack = "shoepack";
        };
    };
    class SiP_m51_uniform_w_scarf_shoepack_cpl: SiP_m51_uniform_w_scarf_shoepack
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_w_scarf_shoepack_cpl_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "unrolled";
            rank = "cpl";
            scarf = "scarf";
            shoepack = "shoepack";
        };
    };
    class SiP_m51_uniform_w_scarf_shoepack_sgt: SiP_m51_uniform_w_scarf_shoepack
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_w_scarf_shoepack_sgt_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "unrolled";
            rank = "sgt";
            scarf = "scarf";
            shoepack = "shoepack";
        };
    };
    class SiP_m51_uniform_w_scarf_shoepack_sfc: SiP_m51_uniform_w_scarf_shoepack
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_w_scarf_shoepack_sfc_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "unrolled";
            rank = "sfc";
            scarf = "scarf";
            shoepack = "shoepack";
        };
    };
    class SiP_m51_uniform_w_scarf_shoepack_msg: SiP_m51_uniform_w_scarf_shoepack
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_w_scarf_shoepack_msg_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "unrolled";
            rank = "msgt";
            scarf = "scarf";
            shoepack = "shoepack";
        };
    };
    class SiP_m51_uniform_w_scarf_shoepack_1sgt: SiP_m51_uniform_w_scarf_shoepack
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_w_scarf_shoepack_1sgt_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "unrolled";
            rank = "first_sgt";
            scarf = "scarf";
            shoepack = "shoepack";
        };
    };
    class SiP_m51_uniform_w_scarf_shoepack_2ndlt: SiP_m51_uniform_w_scarf_shoepack
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_w_scarf_shoepack_2ndlt_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "unrolled";
            rank = "second_Lt";
            scarf = "scarf";
            shoepack = "shoepack";
        };
    };
    class SiP_m51_uniform_w_scarf_shoepack_1stlt: SiP_m51_uniform_w_scarf_shoepack
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_w_scarf_shoepack_1stlt_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "unrolled";
            rank = "first_Lt";
            scarf = "scarf";
            shoepack = "shoepack";
        };
    };
    class SiP_m51_uniform_w_scarf_shoepack_capt: SiP_m51_uniform_w_scarf_shoepack
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_w_scarf_shoepack_capt_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "unrolled";
            rank = "Captain";
            scarf = "scarf";
            shoepack = "shoepack";
        };
    };
    class SiP_m51_uniform_w_scarf_shoepack_maj: SiP_m51_uniform_w_scarf_shoepack
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_w_scarf_shoepack_maj_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "unrolled";
            rank = "Major";
            scarf = "scarf";
            shoepack = "shoepack";
        };
    };
    class SiP_m51_uniform_w_scarf_shoepack_ltcol: SiP_m51_uniform_w_scarf_shoepack
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_w_scarf_shoepack_ltcol_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "unrolled";
            rank = "LtCol";
            scarf = "scarf";
            shoepack = "shoepack";
        };
    };
    class SiP_m51_uniform_w_scarf_shoepack_col: SiP_m51_uniform_w_scarf_shoepack
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_w_scarf_shoepack_col_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951";
            shade = "standard";
            sleeves = "unrolled";
            rank = "Col";
            scarf = "scarf";
            shoepack = "shoepack";
        };
    };

    class SiP_m51_ab_uniform: SiP_m51_uniform
    {

        scope = 2;
        author = "Letlev";
        displayName = "[US] M1951 Airborne Uniform";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_ab_uniform_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951_ab";
            rank = "empty";
        };
    };
    class SiP_m51_ab_uniform_pvt: SiP_m51_ab_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_ab_uniform_pvt_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951_ab";
            rank = "pfc";
        };
    };
    class SiP_m51_ab_uniform_cpl: SiP_m51_ab_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_ab_uniform_cpl_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951_ab";
            rank = "cpl";
        };
    };
    class SiP_m51_ab_uniform_sgt: SiP_m51_ab_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_ab_uniform_sgt_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951_ab";
            rank = "sgt";
        };
    };
    class SiP_m51_ab_uniform_sfc: SiP_m51_ab_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_ab_uniform_sfc_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951_ab";
            rank = "sfc";
        };
    };
    class SiP_m51_ab_uniform_msg: SiP_m51_ab_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_ab_uniform_msg_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951_ab";
            rank = "msgt";
        };
    };
    class SiP_m51_ab_uniform_1sgt: SiP_m51_ab_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_ab_uniform_1sgt_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951_ab";
            rank = "first_sgt";
        };
    };
    class SiP_m51_ab_uniform_2lt: SiP_m51_ab_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_ab_uniform_2lt_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951_ab";
            rank = "second_Lt";
        };
    };
    class SiP_m51_ab_uniform_1lt: SiP_m51_ab_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_ab_uniform_1lt_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951_ab";
            rank = "first_Lt";
        };
    };
    class SiP_m51_ab_uniform_capt: SiP_m51_ab_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_ab_uniform_capt_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951_ab";
            rank = "Captain";
        };
    };
    class SiP_m51_ab_uniform_maj: SiP_m51_ab_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_ab_uniform_maj_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951_ab";
            rank = "Major";
        };
    };
    class SiP_m51_ab_uniform_ltcol: SiP_m51_ab_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_ab_uniform_ltcol_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951_ab";
            rank = "LtCol";
        };
    };
    class SiP_m51_ab_uniform_col: SiP_m51_ab_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_ab_uniform_col_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1951_ab";
            rank = "Col";
        };
    };
};

class cfgVehicles
{
    class Simc_US_M43_Soldier_base;

    class WW2_Fixes_SPE_m43_ab_uniform_early_370D_base;

    class SiP_m51_uniform_base: Simc_US_M43_Soldier_base
    {
        uniformClass = "SiP_m51_uniform";
        hiddenSelections[] = {"camo","camo2","rank","falg","falg_left","insignia","rank2"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "",
            "",
            "",
            "",
            ""
        };
    };
    class SiP_m51_uniform_private_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_private";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\patches\US_Shld_1stclass_ca.paa"
        };
    };
    class SiP_m51_uniform_corporal_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_corporal";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\patches\US_Shld_Corporal_co.paa"
        };
    };
    class SiP_m51_uniform_sergeant_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_sergeant";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\patches\US_Shld_Staff_Sergeant_ca.paa"
        };
    };
    class SiP_m51_uniform_sergeant_1stclass_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_sergeant_1stclass";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\patches\US_Shld_Tech_Sergeant_ca.paa"
        };
    };
    class SiP_m51_uniform_master_sergeant_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_master_sergeant";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\patches\US_Shld_Master_Sergeant_ca.paa"
        };
    };
    class SiP_m51_uniform_first_sergeant_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_first_sergeant";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\patches\US_Shld_1st_Sergeant_ca.paa"
        };
    };
    class SiP_m51_uniform_2lt_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_2lt";
        hiddenSelectionsTextures[] = 
        {
            "\SiP\addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_2ndlt_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\patches\US_Shld_2lt_ca.paa"
        };
    };
    class SiP_m51_uniform_1lt_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_1lt";
        hiddenSelectionsTextures[] = 
        {
            "\SiP\addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_1stlt_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\patches\US_Shld_1lt_ca.paa"
        };
    };
    class SiP_m51_uniform_captain_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_captain";
        hiddenSelectionsTextures[] = 
        {
            "\SiP\addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_cap_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\patches\US_Shld_cpt_ca.paa"
        };
    };
    class SiP_m51_uniform_major_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_major";
        hiddenSelectionsTextures[] = 
        {
            "\SiP\addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_maj_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\patches\US_Shld_major_ca.paa"
        };
    };
    class SiP_m51_uniform_ltcol_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_ltcol";
        hiddenSelectionsTextures[] = 
        {
            "\SiP\addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_ltcol_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\patches\US_Shld_ltcol_ca.paa"
        };
    };
    class SiP_m51_uniform_col_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_col";
        hiddenSelectionsTextures[] = 
        {
            "\SiP\addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_col_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\patches\US_Shld_col_ca.paa"
        };
    };

    class SiP_m51_uniform_sleeves_base: Simc_US_M43_Soldier_base
    {
        uniformClass = "SiP_m51_ab_uniform_sleeves";
        model = "\simc_uaf_44\m43_trop.p3d";
        hiddenSelections[] = {"camo","camo2","rank","falg","falg_left","insignia","rank2"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\m43_franky_co.paa",
            "",
            "",
            "",
            "",
            ""
        };
    };
    class SiP_m51_uniform_sleeves_private_base: SiP_m51_uniform_sleeves_base
    {
        uniformClass = "SiP_m51_uniform_sleeves_private";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\m43_franky_co.paa",
            "\simc_uaf_44\patches\US_Shld_1stclass_ca.paa"
        };
    };
    class SiP_m51_uniform_sleeves_corporal_base: SiP_m51_uniform_sleeves_base
    {
        uniformClass = "SiP_m51_uniform_sleeves_corporal";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\m43_franky_co.paa",
            "\simc_uaf_44\patches\US_Shld_Corporal_co.paa"
        };
    };
    class SiP_m51_uniform_sleeves_sergeant_base: SiP_m51_uniform_sleeves_base
    {
        uniformClass = "SiP_m51_uniform_sleeves_sergeant";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\m43_franky_co.paa",
            "\simc_uaf_44\patches\US_Shld_Staff_Sergeant_ca.paa"
        };
    };
    class SiP_m51_uniform_sleeves_sergeant_1stclass_base: SiP_m51_uniform_sleeves_base
    {
        uniformClass = "SiP_m51_uniform_sleeves_sergeant_1stclass";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\m43_franky_co.paa",
            "\simc_uaf_44\patches\US_Shld_Tech_Sergeant_ca.paa"
        };
    };
    class SiP_m51_uniform_sleeves_master_sergeant_base: SiP_m51_uniform_sleeves_base
    {
        uniformClass = "SiP_m51_uniform_sleeves_master_sergeant";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\m43_franky_co.paa",
            "\simc_uaf_44\patches\US_Shld_Master_Sergeant_ca.paa"
        };
    };
    class SiP_m51_uniform_sleeves_first_sergeant_base: SiP_m51_uniform_sleeves_base
    {
        uniformClass = "SiP_m51_uniform_sleeves_first_sergeant";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\m43_franky_co.paa",
            "\simc_uaf_44\patches\US_Shld_1st_Sergeant_ca.paa"
        };
    };
    class SiP_m51_uniform_sleeves_2lt_base: SiP_m51_uniform_sleeves_base
    {
        uniformClass = "SiP_m51_uniform_sleeves_2lt";
        hiddenSelectionsTextures[] = 
        {
            "\SiP\addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_2ndlt_co.paa",
            "\simc_uaf_44\data\m43_franky_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\patches\US_Shld_2lt_ca.paa"
        };
    };
    class SiP_m51_uniform_sleeves_1lt_base: SiP_m51_uniform_sleeves_base
    {
        uniformClass = "SiP_m51_uniform_sleeves_1lt";
        hiddenSelectionsTextures[] = 
        {
            "\SiP\addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_1stlt_co.paa",
            "\simc_uaf_44\data\m43_franky_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\patches\US_Shld_1lt_ca.paa"
        };
    };
    class SiP_m51_uniform_sleeves_captain_base: SiP_m51_uniform_sleeves_base
    {
        uniformClass = "SiP_m51_uniform_sleeves_captain";
        hiddenSelectionsTextures[] = 
        {
            "\SiP\addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_cap_co.paa",
            "\simc_uaf_44\data\m43_franky_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\patches\US_Shld_cpt_ca.paa"
        };
    };
    class SiP_m51_uniform_sleeves_major_base: SiP_m51_uniform_sleeves_base
    {
        uniformClass = "SiP_m51_uniform_sleeves_major";
        hiddenSelectionsTextures[] = 
        {
            "\SiP\addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_maj_co.paa",
            "\simc_uaf_44\data\m43_franky_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\patches\US_Shld_major_ca.paa"
        };
    };
    class SiP_m51_uniform_sleeves_ltcol_base: SiP_m51_uniform_sleeves_base
    {
        uniformClass = "SiP_m51_uniform_sleeves_ltcol";
        hiddenSelectionsTextures[] = 
        {
            "\SiP\addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_ltcol_co.paa",
            "\simc_uaf_44\data\m43_franky_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\patches\US_Shld_ltcol_ca.paa"
        };
    };
    class SiP_m51_uniform_sleeves_col_base: SiP_m51_uniform_sleeves_base
    {
        uniformClass = "SiP_m51_uniform_sleeves_col";
        hiddenSelectionsTextures[] = 
        {
            "\SiP\addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_col_co.paa",
            "\simc_uaf_44\data\m43_franky_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\patches\US_Shld_col_ca.paa"
        };
    };

    class SiP_m51_uniform_7id_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_7id";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "",
            "",
            "",
            "\simc_uaf_67\patches\7id_ca.paa",
            ""
        };
    };
    class SiP_m51_uniform_7id_private_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_7id_private";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\patches\US_Shld_1stclass_ca.paa",
            "",
            "",
            "\simc_uaf_67\patches\7id_ca.paa",
            ""
        };
    };
    class SiP_m51_uniform_7id_corporal_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_7id_corporal";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\patches\US_Shld_Corporal_co.paa","","","\simc_uaf_67\patches\7id_ca.paa",""};
    };
    class SiP_m51_uniform_7id_sergeant_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_7id_sergeant";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\patches\US_Shld_Staff_Sergeant_ca.paa","","","\simc_uaf_67\patches\7id_ca.paa",""};
    };
    class SiP_m51_uniform_7id_sergeant_1stclass_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_7id_sergeant_1stclass";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\patches\US_Shld_Tech_Sergeant_ca.paa","","","\simc_uaf_67\patches\7id_ca.paa",""};
    };
    class SiP_m51_uniform_7id_master_sergeant_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_7id_master_sergeant";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\patches\US_Shld_Master_Sergeant_ca.paa","","","\simc_uaf_67\patches\7id_ca.paa",""};
    };
    class SiP_m51_uniform_7id_first_sergeant_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_7idfirst_sergeant";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\patches\US_Shld_1st_Sergeant_ca.paa","","","\simc_uaf_67\patches\7id_ca.paa",""};
    };
    class SiP_m51_uniform_7id_2lt_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_7id_2lt";
        hiddenSelectionsTextures[] = {"\SiP\addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_2ndlt_co.paa","\simc_uaf_44\data\m43_1_co.paa","","","","\simc_uaf_67\patches\7id_ca.paa","\simc_uaf_44\patches\US_Shld_2lt_ca.paa"};
    };
    class SiP_m51_uniform_7id_1lt_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_7id_1lt";
        hiddenSelectionsTextures[] = {"\SiP\addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_1stlt_co.paa","\simc_uaf_44\data\m43_1_co.paa","","","","\simc_uaf_67\patches\7id_ca.paa","\simc_uaf_44\patches\US_Shld_1lt_ca.paa"};
    };
    class SiP_m51_uniform_7id_captain_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_7id_captain";
        hiddenSelectionsTextures[] = {"\SiP\addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_cap_co.paa","\simc_uaf_44\data\m43_1_co.paa","","","","\simc_uaf_67\patches\7id_ca.paa","\simc_uaf_44\patches\US_Shld_cpt_ca.paa"};
    };
    class SiP_m51_uniform_7id_major_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_7id_major";
        hiddenSelectionsTextures[] = {"\SiP\addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_maj_co.paa","\simc_uaf_44\data\m43_1_co.paa","","","","\simc_uaf_67\patches\7id_ca.paa","\simc_uaf_44\patches\US_Shld_major_ca.paa"};
    };
    class SiP_m51_uniform_7id_ltcol_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_7id_ltcol";
        hiddenSelectionsTextures[] = {"\SiP\addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_ltcol_co.paa","\simc_uaf_44\data\m43_1_co.paa","","","","\simc_uaf_67\patches\7id_ca.paa","\simc_uaf_44\patches\US_Shld_ltcol_ca.paa"};
    };
    class SiP_m51_uniform_7id_col_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_7id_col";
        hiddenSelectionsTextures[] = {"\SiP\addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_col_co.paa","\simc_uaf_44\data\m43_1_co.paa","","","","\simc_uaf_67\patches\7id_ca.paa","\simc_uaf_44\patches\US_Shld_col_ca.paa"};
    };

    class SiP_m51_ab_uniform_base: WW2_Fixes_SPE_m43_ab_uniform_early_370D_base
    {
        uniformClass = "SiP_m51_ab_uniform";
        hiddenSelections[]=
		{
			"camo",
			"camo2",
			"badge",
			"armband",
			"armflag",
			"clan",
			"insignia"
		};
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Characters\Americans_U1_t\US_Army\SPE_US_veldjas_1943_1_co.paa",
            "\WW2\SPE_Assets_t\Characters\Americans_U1_t\US_Airborne\us_m43_lows_1_co.paa",
            "",
            "",
            "",
            "\SiP\addons\sip_us_units\Army\data\patches\187RCT_ca.paa",
            "\SiP\addons\sip_us_units\Army\data\patches\187RCT_ca.paa"
        };
    };
    class SiP_m51_ab_uniform_pvt_base: SiP_m51_ab_uniform_base
    {
        uniformClass = "SiP_m51_ab_uniform_pvt";
        hiddenSelectionsTextures[] = 
        {
            "\WW2\SPE_Assets_t\Characters\Americans_U1_t\US_Army\SPE_US_veldjas_1943_1_co.paa",
            "\WW2\SPE_Assets_t\Characters\Americans_U1_t\US_Airborne\us_m43_lows_1_co.paa",
            "\WW2\SPE_Assets_t\Characters\Americans_t\Badges\US_Shld_1stclass_mc.paa",
            "",
            "",
            "\SiP\addons\sip_us_units\Army\data\patches\187RCT_ca.paa",
            "\SiP\addons\sip_us_units\Army\data\patches\187RCT_ca.paa"
        };
    };
    class SiP_m51_ab_uniform_cpl_base: SiP_m51_ab_uniform_base
    {
        uniformClass = "SiP_m51_ab_uniform_cpl";
        hiddenSelectionsTextures[] = 
        {
            "\WW2\SPE_Assets_t\Characters\Americans_U1_t\US_Army\SPE_US_veldjas_1943_1_co.paa",
            "\WW2\SPE_Assets_t\Characters\Americans_U1_t\US_Airborne\us_m43_lows_1_co.paa",
            "\WW2\SPE_Assets_t\Characters\Americans_t\Badges\US_Shld_Corporal_mc.paa",
            "",
            "",
            "\SiP\addons\sip_us_units\Army\data\patches\187RCT_ca.paa",
            "\SiP\addons\sip_us_units\Army\data\patches\187RCT_ca.paa"
        };
    };
    class SiP_m51_ab_uniform_sgt_base: SiP_m51_ab_uniform_base
    {
        uniformClass = "SiP_m51_ab_uniform_sgt";
        hiddenSelectionsTextures[] = 
        {
            "\WW2\SPE_Assets_t\Characters\Americans_U1_t\US_Army\SPE_US_veldjas_1943_1_co.paa",
            "\WW2\SPE_Assets_t\Characters\Americans_U1_t\US_Airborne\us_m43_lows_1_co.paa",
            "\WW2\SPE_Assets_t\Characters\Americans_t\Badges\US_Shld_Staff_Sergeant_mc.paa",
            "",
            "",
            "\SiP\addons\sip_us_units\Army\data\patches\187RCT_ca.paa",
            "\SiP\addons\sip_us_units\Army\data\patches\187RCT_ca.paa"
        };
    };
    class SiP_m51_ab_uniform_sfc_base: SiP_m51_ab_uniform_base
    {
        uniformClass = "SiP_m51_ab_uniform_sfc";
        hiddenSelectionsTextures[] = 
        {
            "\WW2\SPE_Assets_t\Characters\Americans_U1_t\US_Army\SPE_US_veldjas_1943_1_co.paa",
            "\WW2\SPE_Assets_t\Characters\Americans_U1_t\US_Airborne\us_m43_lows_1_co.paa",
            "\simc_lcd_44_eden\patches\US_Shld_Tech_Sergeant_mc.paa",
            "",
            "",
            "\SiP\addons\sip_us_units\Army\data\patches\187RCT_ca.paa",
            "\SiP\addons\sip_us_units\Army\data\patches\187RCT_ca.paa"
        };
    };
    class SiP_m51_ab_uniform_msg_base: SiP_m51_ab_uniform_base
    {
        uniformClass = "SiP_m51_ab_uniform_msg";
        hiddenSelectionsTextures[] = 
        {
            "\WW2\SPE_Assets_t\Characters\Americans_U1_t\US_Army\SPE_US_veldjas_1943_1_co.paa",
            "\WW2\SPE_Assets_t\Characters\Americans_U1_t\US_Airborne\us_m43_lows_1_co.paa",
            "\simc_lcd_44_eden\patches\US_Shld_Master_Sergeant_mc.paa",
            "",
            "",
            "\SiP\addons\sip_us_units\Army\data\patches\187RCT_ca.paa",
            "\SiP\addons\sip_us_units\Army\data\patches\187RCT_ca.paa"
        };
    };
    class SiP_m51_ab_uniform_1sgt_base: SiP_m51_ab_uniform_base
    {
        uniformClass = "SiP_m51_ab_uniform_1sgt";
        hiddenSelectionsTextures[] = 
        {
            "\WW2\SPE_Assets_t\Characters\Americans_U1_t\US_Army\SPE_US_veldjas_1943_1_co.paa",
            "\WW2\SPE_Assets_t\Characters\Americans_U1_t\US_Airborne\us_m43_lows_1_co.paa",
            "\WW2_Fixes_SPE\addons\WW2_Fixes_SPE_US_Gear\Uniforms\textures\ranks\US_Shld_1st_Sergeant_mc.paa",
            "",
            "",
            "\SiP\addons\sip_us_units\Army\data\patches\187RCT_ca.paa",
            "\SiP\addons\sip_us_units\Army\data\patches\187RCT_ca.paa"
        };
    };
    class SiP_m51_ab_uniform_2lt_base: SiP_m51_ab_uniform_base
    {
        uniformClass = "SiP_m51_ab_uniform_2lt";
        hiddenSelectionsTextures[] = 
        {
            "\WW2_Fixes_SPE\addons\WW2_Fixes_SPE_US_gear\Uniforms\textures\uniform\M43\m43_1_2ndlt_co.paa",
            "\WW2\SPE_Assets_t\Characters\Americans_U1_t\US_Airborne\us_m43_lows_1_co.paa",
            "\WW2\SPE_Assets_t\Characters\Americans_t\Badges\US_Shld_2LT_mc.paa",
            "",
            "",
            "\SiP\addons\sip_us_units\Army\data\patches\187RCT_ca.paa",
            "\SiP\addons\sip_us_units\Army\data\patches\187RCT_ca.paa"
        };
    };
    class SiP_m51_ab_uniform_1lt_base: SiP_m51_ab_uniform_base
    {
        uniformClass = "SiP_m51_ab_uniform_1lt";
        hiddenSelectionsTextures[] = 
        {
            "\WW2_Fixes_SPE\addons\WW2_Fixes_SPE_US_gear\Uniforms\textures\uniform\M43\m43_1_1stlt_co.paa",
            "\WW2\SPE_Assets_t\Characters\Americans_U1_t\US_Airborne\us_m43_lows_1_co.paa",
            "\WW2\SPE_Assets_t\Characters\Americans_t\Badges\US_Shld_1LT_mc.paa",
            "",
            "",
            "\SiP\addons\sip_us_units\Army\data\patches\187RCT_ca.paa",
            "\SiP\addons\sip_us_units\Army\data\patches\187RCT_ca.paa"
        };
    };
    class SiP_m51_ab_uniform_capt_base: SiP_m51_ab_uniform_base
    {
        uniformClass = "SiP_m51_ab_uniform_capt";
        hiddenSelectionsTextures[] = 
        {
            "\WW2_Fixes_SPE\addons\WW2_Fixes_SPE_US_gear\Uniforms\textures\uniform\M43\m43_1_cap_co.paa",
            "\WW2\SPE_Assets_t\Characters\Americans_U1_t\US_Airborne\us_m43_lows_1_co.paa",
            "\WW2\SPE_Assets_t\Characters\Americans_t\Badges\US_Shld_CPT_mc.paa",
            "",
            "",
            "\SiP\addons\sip_us_units\Army\data\patches\187RCT_ca.paa",
            "\SiP\addons\sip_us_units\Army\data\patches\187RCT_ca.paa"
        };
    };
    class SiP_m51_ab_uniform_maj_base: SiP_m51_ab_uniform_base
    {
        uniformClass = "SiP_m51_ab_uniform_maj";
        hiddenSelectionsTextures[] = 
        {
            "\WW2_Fixes_SPE\addons\WW2_Fixes_SPE_US_gear\Uniforms\textures\uniform\M43\m43_1_maj_co.paa",
            "\WW2\SPE_Assets_t\Characters\Americans_U1_t\US_Airborne\us_m43_lows_1_co.paa",
            "\simc_lcd_44_eden\patches\US_MAJ_ca.paa",
            "",
            "",
            "\SiP\addons\sip_us_units\Army\data\patches\187RCT_ca.paa",
            "\SiP\addons\sip_us_units\Army\data\patches\187RCT_ca.paa"
        };
    };
    class SiP_m51_ab_uniform_ltcol_base: SiP_m51_ab_uniform_base
    {
        uniformClass = "SiP_m51_ab_uniform_ltcol";
        hiddenSelectionsTextures[] = 
        {
            "\WW2_Fixes_SPE\addons\WW2_Fixes_SPE_US_gear\Uniforms\textures\uniform\M43\m43_1_ltcol_co.paa",
            "\WW2\SPE_Assets_t\Characters\Americans_U1_t\US_Airborne\us_m43_lows_1_co.paa",
            "\simc_lcd_44_eden\patches\US_LTCOL_ca.paa",
            "",
            "",
            "\SiP\addons\sip_us_units\Army\data\patches\187RCT_ca.paa",
            "\SiP\addons\sip_us_units\Army\data\patches\187RCT_ca.paa"
        };
    };
    class SiP_m51_ab_uniform_col_base: SiP_m51_ab_uniform_base
    {
        uniformClass = "SiP_m51_ab_uniform_col";
        hiddenSelectionsTextures[] = 
        {
            "\WW2_Fixes_SPE\addons\WW2_Fixes_SPE_US_gear\Uniforms\textures\uniform\M43\m43_1_col_co.paa",
            "\WW2\SPE_Assets_t\Characters\Americans_U1_t\US_Airborne\us_m43_lows_1_co.paa",
            "\simc_lcd_44_eden\patches\US_COL_ca.paa",
            "",
            "",
            "\SiP\addons\sip_us_units\Army\data\patches\187RCT_ca.paa",
            "\SiP\addons\sip_us_units\Army\data\patches\187RCT_ca.paa"
        };
    };

    class SiP_m51_uniform_w_scarf_base: Simc_US_M43_Soldier_base
    {
        uniformClass = "SiP_m51_uniform_w_scarf";
        model = "simc_uaf_44\m43_HBT_laat.p3d";
        hiddenSelections[] = {"camo","camo2","rank","falg","falg_left","insignia","bots"};
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_snew_co.paa","\simc_uaf_44\data\m43_snew_co.paa","","","","","\simc_uaf_44\data\3ds_bot_snew_co.paa"};
    };
    class SiP_m51_uniform_w_scarf_pvt_base: SiP_m51_uniform_w_scarf_base
    {
        uniformClass = "SiP_m51_uniform_w_scarf_pvt";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_snew_co.paa","\simc_uaf_44\data\m43_snew_co.paa","\simc_uaf_44\patches\US_Shld_1stclass_ca.paa","","","","\simc_uaf_44\data\3ds_bot_snew_co.paa"};
    };
    class SiP_m51_uniform_w_scarf_cpl_base: SiP_m51_uniform_w_scarf_base
    {
        uniformClass = "SiP_m51_uniform_w_scarf_cpl";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_snew_co.paa","\simc_uaf_44\data\m43_snew_co.paa","\simc_uaf_44\patches\US_Shld_Corporal_co.paa","","","","\simc_uaf_44\data\3ds_bot_snew_co.paa"};
    };
    class SiP_m51_uniform_w_scarf_sgt_base: SiP_m51_uniform_w_scarf_base
    {
        uniformClass = "SiP_m51_uniform_w_scarf_sgt";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_snew_co.paa","\simc_uaf_44\data\m43_snew_co.paa","\simc_uaf_44\patches\US_Shld_Staff_Sergeant_ca.paa","","","","\simc_uaf_44\data\3ds_bot_snew_co.paa"};
    };
    class SiP_m51_uniform_w_scarf_sfc_base: SiP_m51_uniform_w_scarf_base
    {
        uniformClass = "SiP_m51_uniform_w_scarf_sfc";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_snew_co.paa","\simc_uaf_44\data\m43_snew_co.paa","\simc_uaf_44\patches\US_Shld_Tech_Sergeant_ca.paa","","","","\simc_uaf_44\data\3ds_bot_snew_co.paa"};
    };
    class SiP_m51_uniform_w_scarf_msg_base: SiP_m51_uniform_w_scarf_base
    {
        uniformClass = "SiP_m51_uniform_w_scarf_msg";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_snew_co.paa","\simc_uaf_44\data\m43_snew_co.paa","\simc_uaf_44\patches\US_Shld_Master_Sergeant_ca.paa","","","","\simc_uaf_44\data\3ds_bot_snew_co.paa"};
    };
    class SiP_m51_uniform_w_scarf_1sgt_base: SiP_m51_uniform_w_scarf_base
    {
        uniformClass = "SiP_m51_uniform_w_scarf_1sgt";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_snew_co.paa","\simc_uaf_44\data\m43_snew_co.paa","\simc_uaf_44\patches\US_Shld_1st_Sergeant_ca.paa","","","","\simc_uaf_44\data\3ds_bot_snew_co.paa"};
    };
    class SiP_m51_uniform_w_scarf_2ndlt_base: SiP_m51_uniform_w_scarf_base
    {
        uniformClass = "SiP_m51_uniform_w_scarf_2ndlt";
        hiddenSelections[] = {"camo","camo2","rank2","falg","falg_left","insignia","bots"};
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_snew_co.paa","\simc_uaf_44\data\m43_snew_co.paa","\simc_uaf_44\patches\US_Shld_2lt_ca.paa","","","","\simc_uaf_44\data\3ds_bot_snew_co.paa"};
    };
    class SiP_m51_uniform_w_scarf_1stlt_base: SiP_m51_uniform_w_scarf_2ndlt_base
    {
        uniformClass = "SiP_m51_uniform_w_scarf_1stlt";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_snew_co.paa","\simc_uaf_44\data\m43_snew_co.paa","\simc_uaf_44\patches\US_Shld_1lt_ca.paa","","","","\simc_uaf_44\data\3ds_bot_snew_co.paa"};
    };
    class SiP_m51_uniform_w_scarf_capt_base: SiP_m51_uniform_w_scarf_2ndlt_base
    {
        uniformClass = "SiP_m51_uniform_w_scarf_capt";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\HBT_co.paa",
            "\simc_uaf_44\patches\US_Shld_cpt_ca.paa",
            "",
            "",
            "",
            "\simc_uaf_44\data\3ds_bot_snew_co.paa"
        };
    };
    class SiP_m51_uniform_w_scarf_maj_base: SiP_m51_uniform_w_scarf_2ndlt_base
    {
        uniformClass = "SiP_m51_uniform_w_scarf_maj";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\HBT_co.paa",
            "\simc_uaf_44\patches\US_Shld_major_ca.paa",
            "",
            "",
            "",
            "\simc_uaf_44\data\3ds_bot_snew_co.paa"
        };
    };
    class SiP_m51_uniform_w_scarf_ltcol_base: SiP_m51_uniform_w_scarf_2ndlt_base
    {
        uniformClass = "SiP_m51_uniform_w_scarf_ltcol";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_snew_co.paa","\simc_uaf_44\data\m43_snew_co.paa","\simc_uaf_44\patches\US_Shld_ltcol_ca.paa","","","","\simc_uaf_44\data\3ds_bot_snew_co.paa"};
    };
    class SiP_m51_uniform_w_scarf_col_base: SiP_m51_uniform_w_scarf_2ndlt_base
    {
        uniformClass = "SiP_m51_uniform_w_scarf_col";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_snew_co.paa","\simc_uaf_44\data\m43_snew_co.paa","\simc_uaf_44\patches\US_Shld_col_ca.paa","","","","\simc_uaf_44\data\3ds_bot_snew_co.paa"};
    };

    class SiP_m51_uniform_w_scarf_shoepack_base: SiP_m51_uniform_w_scarf_base
    {
        uniformClass = "SiP_m51_uniform_w_scarf_shoepack";
        model = "simc_uaf_44\m43_snew.p3d";
        hiddenSelections[] = {"camo","camo2","rank","falg","falg_left","insignia","bots"};
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_snew_co.paa","\simc_uaf_44\data\m43_snew_co.paa","","","","","\simc_uaf_44\data\3ds_bot_od7_co.paa"};
    };
    class SiP_m51_uniform_w_scarf_shoepack_pvt_base: SiP_m51_uniform_w_scarf_shoepack_base
    {
        uniformClass = "SiP_m51_uniform_w_scarf_shoepack_pvt";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_snew_co.paa","\simc_uaf_44\data\m43_snew_co.paa","\simc_uaf_44\patches\US_Shld_1stclass_ca.paa","","","","\simc_uaf_44\data\3ds_bot_od7_co.paa"};
    };
    class SiP_m51_uniform_w_scarf_shoepack_cpl_base: SiP_m51_uniform_w_scarf_shoepack_base
    {
        uniformClass = "SiP_m51_uniform_w_scarf_shoepack_cpl";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_snew_co.paa","\simc_uaf_44\data\m43_snew_co.paa","\simc_uaf_44\patches\US_Shld_Corporal_co.paa","","","","\simc_uaf_44\data\3ds_bot_od7_co.paa"};
    };
    class SiP_m51_uniform_w_scarf_shoepack_sgt_base: SiP_m51_uniform_w_scarf_shoepack_base
    {
        uniformClass = "SiP_m51_uniform_w_scarf_shoepack_sgt";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_snew_co.paa","\simc_uaf_44\data\m43_snew_co.paa","\simc_uaf_44\patches\US_Shld_Staff_Sergeant_ca.paa","","","","\simc_uaf_44\data\3ds_bot_od7_co.paa"};
    };
    class SiP_m51_uniform_w_scarf_shoepack_sfc_base: SiP_m51_uniform_w_scarf_shoepack_base
    {
        uniformClass = "SiP_m51_uniform_w_scarf_shoepack_sfc";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_snew_co.paa","\simc_uaf_44\data\m43_snew_co.paa","\simc_uaf_44\patches\US_Shld_Tech_Sergeant_ca.paa","","","","\simc_uaf_44\data\3ds_bot_od7_co.paa"};
    };
    class SiP_m51_uniform_w_scarf_shoepack_msg_base: SiP_m51_uniform_w_scarf_shoepack_base
    {
        uniformClass = "SiP_m51_uniform_w_scarf_shoepack_msg";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_snew_co.paa","\simc_uaf_44\data\m43_snew_co.paa","\simc_uaf_44\patches\US_Shld_Master_Sergeant_ca.paa","","","","\simc_uaf_44\data\3ds_bot_od7_co.paa"};
    };
    class SiP_m51_uniform_w_scarf_shoepack_1sgt_base: SiP_m51_uniform_w_scarf_shoepack_base
    {
        uniformClass = "SiP_m51_uniform_w_scarf_shoepack_1sgt";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_snew_co.paa","\simc_uaf_44\data\m43_snew_co.paa","\simc_uaf_44\patches\US_Shld_1st_Sergeant_ca.paa","","","","\simc_uaf_44\data\3ds_bot_od7_co.paa"};
    };
    class SiP_m51_uniform_w_scarf_shoepack_2ndlt_base: SiP_m51_uniform_w_scarf_shoepack_base
    {
        uniformClass = "SiP_m51_uniform_w_scarf_shoepack_2ndlt";
        hiddenSelections[] = {"camo","camo2","rank2","falg","falg_left","insignia","bots"};
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_snew_co.paa","\simc_uaf_44\data\m43_snew_co.paa","\simc_uaf_44\patches\US_Shld_2lt_ca.paa","","","","\simc_uaf_44\data\3ds_bot_od7_co.paa"};
    };
    class SiP_m51_uniform_w_scarf_shoepack_1stlt_base: SiP_m51_uniform_w_scarf_shoepack_2ndlt_base
    {
        uniformClass = "SiP_m51_uniform_w_scarf_shoepack_1stlt";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_snew_co.paa","\simc_uaf_44\data\m43_snew_co.paa","\simc_uaf_44\patches\US_Shld_1lt_ca.paa","","","","\simc_uaf_44\data\3ds_bot_od7_co.paa"};
    };
    class SiP_m51_uniform_w_scarf_shoepack_capt_base: SiP_m51_uniform_w_scarf_shoepack_2ndlt_base
    {
        uniformClass = "SiP_m51_uniform_w_scarf_shoepack_capt";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_snew_co.paa",
            "\simc_uaf_44\data\m43_snew_co.paa",
            "\simc_uaf_44\patches\US_Shld_cpt_ca.paa",
            "",
            "",
            "",
            "\simc_uaf_44\data\3ds_bot_od7_co.paa"
        };
    };
    class SiP_m51_uniform_w_scarf_shoepack_maj_base: SiP_m51_uniform_w_scarf_shoepack_2ndlt_base
    {
        uniformClass = "SiP_m51_uniform_w_scarf_shoepack_maj";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_snew_co.paa",
            "\simc_uaf_44\data\m43_snew_co.paa",
            "\simc_uaf_44\patches\US_Shld_major_ca.paa",
            "",
            "",
            "",
            "\simc_uaf_44\data\3ds_bot_od7_co.paa"
        };
    };
    class SiP_m51_uniform_w_scarf_shoepack_ltcol_base: SiP_m51_uniform_w_scarf_shoepack_2ndlt_base
    {
        uniformClass = "SiP_m51_uniform_w_scarf_shoepack_ltcol";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_snew_co.paa","\simc_uaf_44\data\m43_snew_co.paa","\simc_uaf_44\patches\US_Shld_ltcol_ca.paa","","","","\simc_uaf_44\data\3ds_bot_od7_co.paa"};
    };
    class SiP_m51_uniform_w_scarf_shoepack_col_base: SiP_m51_uniform_w_scarf_shoepack_2ndlt_base
    {
        uniformClass = "SiP_m51_uniform_w_scarf_shoepack_col";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_snew_co.paa","\simc_uaf_44\data\m43_snew_co.paa","\simc_uaf_44\patches\US_Shld_col_ca.paa","","","","\simc_uaf_44\data\3ds_bot_od7_co.paa"};
    };
};

class XtdGearModels
{
    class CfgWeapons 
    {		
        class u_hssn_SiP_M1951
        {
            label = "";
            author = "Letlev";
            options[]=
            {
                "sleeves",
                "scarf",
                "shoepack",
                "rank"
            };
            class sleeves
            {
                label = "Sleeves";
                hiddenselection = "camo2";
                changeingame = 1;
                changedelay = 2;
                values[]=
                {
                    "unrolled",
                    "rolled"
                };
                class unrolled
                {
                    label = "Unrolled";
                    actionLabel = "Unroll Sleeves";
                    icon="\z\aceax\addons\gearinfo\data\ui\sleeves.paa";
                };
                class rolled
                {
                    label = "Rolled";
                    actionLabel = "Roll sleeves";
                    icon = "\z\aceax\addons\gearinfo\data\ui\sleeves_half.paa";
                };
            };
            class rank
            {
                label = "Rank";
                hiddenselection = "rank";
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
                    "Col"
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
                    label = "Lt.Col";
                };
                class Col
                {
                    label = "Col";
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
                    label = "No Scarf";
                    actionLabel = "Remove Scarf";
                };
                class scarf
                {
                    label = "Scarf";
                    actionLabel = "Wear Scarf";
                    icon = "\simc_uaf_44_preview\icons\scharf_ca.paa";
                };
            };
            class shoepack
            {
                label = "Shoepack";
                hiddenselection = "falg_left";
                changeingame = 1;
                changedelay = 2;
                values[]=
                {
                    "standard",
                    "shoepack"
                };
                class standard
                {
                    label = "Standard";
                    actionLabel = "Remove shoepacks";
                };
                class shoepack
                {
                    label = "Shoepack";
                    actionLabel = "Put on Shoepacks";
                };
            };
        };

        class u_hssn_SiP_M1951_ab
        {
            label = "";
            author = "Letlev";
            options[]=
            {
                "rank"
            };
            class rank
            {
                label = "Rank";
                hiddenselection = "rank";
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
                    "Col"
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
                    label = "Lt.Col";
                };
                class Col
                {
                    label = "Col";
                };
            };
        };
    };
};