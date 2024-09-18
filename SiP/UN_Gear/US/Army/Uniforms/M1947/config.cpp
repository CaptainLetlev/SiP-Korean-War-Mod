class cfgPatches
{
    class SiP_Patch_M1947_uniform
    {
        addonRootClass = "SiP_Patch_US_Army_Uniforms";
        requiredAddons[] = 
        {
            "simc_uaf_44_gare"
        };
        units[] = {};
        weapons[] = 
        {
            "SiP_M1947_uniform"
        };
    };
};

class cfgWeapons
{
    class Uniform_Base;
    class ItemCore;
    class U_BasicBody;

    class U_Simc_51_BasicBody: U_BasicBody
    {
        class ItemInfo;
    };

    class SiP_M1947_uniform: U_Simc_51_BasicBody
    {
        scope = 2;
        author = "Letlev";
        displayName = "[US] M1947 HBT";
        descriptionShort = "Uniform, Herringbone Twill, OD#7, 1951";
        picture = "\simc_uaf_51_preview\icons\hbt_47_ca.paa";
        model = "\simc_uaf_51\suitpack_hbt_47.p3d";
        hiddenSelections[] = {"camo","rank","insignia","nom"};
        hiddenSelectionsTextures[] = {"\simc_uaf_51\data\hbt_47_co.paa",""};
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "empty";
            shirt = "untucked";
            sleeves = "full";
        };
    };

    class SiP_M1947_uniform_private: SiP_M1947_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_private_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "pfc";
            shirt = "untucked";
            sleeves = "full";
        };
    };
    class SiP_M1947_uniform_corporal: SiP_M1947_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_corporal_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "cpl";
            shirt = "untucked";
            sleeves = "full";
        };
    };
    class SiP_M1947_uniform_sergeant: SiP_M1947_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_sergeant_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "sgt";
            shirt = "untucked";
            sleeves = "full";
        };
    };
    class SiP_M1947_uniform_sergeant_1stclass: SiP_M1947_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_sergeant_1stclass_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "sfc";
            shirt = "untucked";
            sleeves = "full";
        };
    };
    class SiP_M1947_uniform_master_sergeant: SiP_M1947_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_master_sergeant_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "msgt";
            shirt = "untucked";
            sleeves = "full";
        };
    };
    class SiP_M1947_uniform_first_sergeant: SiP_M1947_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_first_sergeant_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "first_sgt";
            shirt = "untucked";
            sleeves = "full";
        };
    };
    class SiP_M1947_uniform_2lt: SiP_M1947_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_2lt_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "second_Lt";
            shirt = "untucked";
            sleeves = "full";
        };
    };
    class SiP_M1947_uniform_1lt: SiP_M1947_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_1lt_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "first_Lt";
            shirt = "untucked";
            sleeves = "full";
        };
    };
    class SiP_M1947_uniform_captain: SiP_M1947_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_captain_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "Captain";
            shirt = "untucked";
            sleeves = "full";
        };
    };
    class SiP_M1947_uniform_major: SiP_M1947_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_major_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "Major";
            shirt = "untucked";
            sleeves = "full";
        };
    };
    class SiP_M1947_uniform_ltcol: SiP_M1947_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_ltcol_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "LtCol";
            shirt = "untucked";
            sleeves = "full";
        };
    };
    class SiP_M1947_uniform_col: SiP_M1947_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_col_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "Col";
            shirt = "untucked";
            sleeves = "full";
        };
    };

    //Tucked
    class SiP_M1947_uniform_tuck: SiP_M1947_uniform
    {
        model = "\simc_uaf_51\hbt_47_tuck.p3d";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_tuck_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "empty";
            shirt = "tucked";
            sleeves = "full";
        };
    };

    class SiP_M1947_uniform_tuck_private: SiP_M1947_uniform_tuck
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_tuck_private_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "pfc";
            shirt = "tucked";
            sleeves = "full";
        };
    };
    class SiP_M1947_uniform_tuck_corporal: SiP_M1947_uniform_tuck
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_tuck_corporal_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "cpl";
            shirt = "tucked";
            sleeves = "full";
        };
    };
    class SiP_M1947_uniform_tuck_sergeant: SiP_M1947_uniform_tuck
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_tuck_sergeant_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "sgt";
            shirt = "tucked";
            sleeves = "full";
        };
    };
    class SiP_M1947_uniform_tuck_sergeant_1stclass: SiP_M1947_uniform_tuck
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_tuck_sergeant_1stclass_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "sfc";
            shirt = "tucked";
            sleeves = "full";
        };
    };
    class SiP_M1947_uniform_tuck_master_sergeant: SiP_M1947_uniform_tuck
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_tuck_master_sergeant_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "msgt";
            shirt = "tucked";
            sleeves = "full";
        };
    };
    class SiP_M1947_uniform_tuck_first_sergeant: SiP_M1947_uniform_tuck
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_tuck_first_sergeant_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "first_sgt";
            shirt = "tucked";
            sleeves = "full";
        };
    };
    class SiP_M1947_uniform_tuck_2lt: SiP_M1947_uniform_tuck
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_tuck_2lt_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "second_Lt";
            shirt = "tucked";
            sleeves = "full";
        };
    };
    class SiP_M1947_uniform_tuck_1lt: SiP_M1947_uniform_tuck
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_tuck_1lt_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "first_Lt";
            shirt = "tucked";
            sleeves = "full";
        };
    };
    class SiP_M1947_uniform_tuck_captain: SiP_M1947_uniform_tuck
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_tuck_captain_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "Captain";
            shirt = "tucked";
            sleeves = "full";
        };
    };
    class SiP_M1947_uniform_tuck_major: SiP_M1947_uniform_tuck
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_tuck_major_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "Major";
            shirt = "tucked";
            sleeves = "full";
        };
    };
    class SiP_M1947_uniform_tuck_ltcol: SiP_M1947_uniform_tuck
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_tuck_ltcol_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "LtCol";
            shirt = "tucked";
            sleeves = "full";
        };
    };
    class SiP_M1947_uniform_tuck_col: SiP_M1947_uniform_tuck
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_tuck_col_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "Col";
            shirt = "tucked";
            sleeves = "full";
        };
    };

    //Trop
    class SiP_M1947_uniform_trop: SiP_M1947_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_trop_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "empty";
            shirt = "untucked";
            sleeves = "rolled";
        };
    };
    
    class SiP_M1947_uniform_trop_private: SiP_M1947_uniform_trop
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_trop_private_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "pfc";
            shirt = "untucked";
            sleeves = "rolled";
        };
    };
    class SiP_M1947_uniform_trop_corporal: SiP_M1947_uniform_trop
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_trop_corporal_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "cpl";
            shirt = "untucked";
            sleeves = "rolled";
        };
    };
    class SiP_M1947_uniform_trop_sergeant: SiP_M1947_uniform_trop
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_trop_sergeant_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "sgt";
            shirt = "untucked";
            sleeves = "rolled";
        };
    };
    class SiP_M1947_uniform_trop_sergeant_1stclass: SiP_M1947_uniform_trop
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_trop_sergeant_1stclass_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "sfc";
            shirt = "untucked";
            sleeves = "rolled";
        };
    };
    class SiP_M1947_uniform_trop_master_sergeant: SiP_M1947_uniform_trop
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_trop_master_sergeant_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "msgt";
            shirt = "untucked";
            sleeves = "rolled";
        };
    };
    class SiP_M1947_uniform_trop_first_sergeant: SiP_M1947_uniform_trop
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_trop_first_sergeant_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "first_sgt";
            shirt = "untucked";
            sleeves = "rolled";
        };
    };
    class SiP_M1947_uniform_trop_2lt: SiP_M1947_uniform_trop
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_trop_2lt_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "second_Lt";
            shirt = "untucked";
            sleeves = "rolled";
        };
    };
    class SiP_M1947_uniform_trop_1lt: SiP_M1947_uniform_trop
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_trop_1lt_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "first_Lt";
            shirt = "untucked";
            sleeves = "rolled";
        };
    };
    class SiP_M1947_uniform_trop_captain: SiP_M1947_uniform_trop
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_trop_captain_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "Captain";
            shirt = "untucked";
            sleeves = "rolled";
        };
    };
    class SiP_M1947_uniform_trop_major: SiP_M1947_uniform_trop
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_trop_major_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "Major";
            shirt = "untucked";
            sleeves = "rolled";
        };
    };
    class SiP_M1947_uniform_trop_ltcol: SiP_M1947_uniform_trop
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_trop_ltcol_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "LtCol";
            shirt = "untucked";
            sleeves = "rolled";
        };
    };
    class SiP_M1947_uniform_trop_col: SiP_M1947_uniform_trop
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_trop_col_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "Col";
            shirt = "untucked";
            sleeves = "rolled";
        };
    };

    //Trop + Tucked
    class SiP_M1947_uniform_tucked_trop: SiP_M1947_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_tucked_trop_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "empty";
            shirt = "tucked";
            sleeves = "rolled";
        };
    };
    
    class SiP_M1947_uniform_tucked_trop_private: SiP_M1947_uniform_tucked_trop
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_tucked_trop_private_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "pfc";
            shirt = "tucked";
            sleeves = "rolled";
        };
    };
    class SiP_M1947_uniform_tucked_trop_corporal: SiP_M1947_uniform_tucked_trop
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_tucked_trop_corporal_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "cpl";
            shirt = "tucked";
            sleeves = "rolled";
        };
    };
    class SiP_M1947_uniform_tucked_trop_sergeant: SiP_M1947_uniform_tucked_trop
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_tucked_trop_sergeant_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "sgt";
            shirt = "tucked";
            sleeves = "rolled";
        };
    };
    class SiP_M1947_uniform_tucked_trop_sergeant_1stclass: SiP_M1947_uniform_tucked_trop
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_tucked_trop_sergeant_1stclass_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "sfc";
            shirt = "tucked";
            sleeves = "rolled";
        };
    };
    class SiP_M1947_uniform_tucked_trop_master_sergeant: SiP_M1947_uniform_tucked_trop
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_tucked_trop_master_sergeant_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "msgt";
            shirt = "tucked";
            sleeves = "rolled";
        };
    };
    class SiP_M1947_uniform_tucked_trop_first_sergeant: SiP_M1947_uniform_tucked_trop
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_tucked_trop_first_sergeant_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "first_sgt";
            shirt = "tucked";
            sleeves = "rolled";
        };
    };
    class SiP_M1947_uniform_tucked_trop_2lt: SiP_M1947_uniform_tucked_trop
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_tucked_trop_2lt_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "second_Lt";
            shirt = "tucked";
            sleeves = "rolled";
        };
    };
    class SiP_M1947_uniform_tucked_trop_1lt: SiP_M1947_uniform_tucked_trop
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_tucked_trop_1lt_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "first_Lt";
            shirt = "tucked";
            sleeves = "rolled";
        };
    };
    class SiP_M1947_uniform_tucked_trop_captain: SiP_M1947_uniform_tucked_trop
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_tucked_trop_captain_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "Captain";
            shirt = "tucked";
            sleeves = "rolled";
        };
    };
    class SiP_M1947_uniform_tucked_trop_major: SiP_M1947_uniform_tucked_trop
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_tucked_trop_major_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "Major";
            shirt = "tucked";
            sleeves = "rolled";
        };
    };
    class SiP_M1947_uniform_tucked_trop_ltcol: SiP_M1947_uniform_tucked_trop
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_tucked_trop_ltcol_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "LtCol";
            shirt = "tucked";
            sleeves = "rolled";
        };
    };
    class SiP_M1947_uniform_tucked_trop_col: SiP_M1947_uniform_tucked_trop
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1947_uniform_tucked_trop_col_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1947";
            style = "late";
            ranks = "Col";
            shirt = "tucked";
            sleeves = "rolled";
        };
    };
};

class cfgVehicles
{
    class simc_hbt_47;

    class SiP_M1947_uniform_base: simc_hbt_47
    {
        uniformClass = "SiP_M1947_uniform";
        model = "\simc_uaf_51\hbt_47.p3d";
        hiddenSelections[] = {"camo","rank","insignia","nom"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            ""
        };
    };

    class SiP_M1947_uniform_private_base: SiP_M1947_uniform_base
    {
        uniformClass = "SiP_M1947_uniform_private";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            "\simc_uaf_51\patches\US_PVT_ca.paa"
        };
    };
    class SiP_M1947_uniform_corporal_base: SiP_M1947_uniform_base
    {
        uniformClass = "SiP_M1947_uniform_corporal_base";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            "\simc_uaf_51\patches\US_CPL_ca.paa"
        };
    };
    class SiP_M1947_uniform_sergeant_base: SiP_M1947_uniform_base
    {
        uniformClass = "SiP_M1947_uniform_sergeant";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            "\simc_uaf_51\patches\US_SSG_ca.paa"
        };
    };
    class SiP_M1947_uniform_sergeant_1stclass_base: SiP_M1947_uniform_base
    {
        uniformClass = "SiP_M1947_uniform_sergeant_1stclass";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            "\simc_uaf_51\patches\US_SFC_ca.paa"
        };
    };
    class SiP_M1947_uniform_master_sergeant_base: SiP_M1947_uniform_base
    {
        uniformClass = "SiP_M1947_uniform_master_sergeant";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            "\simc_uaf_51\patches\US_MSG_ca.paa"
        };    
    };
    class SiP_M1947_uniform_first_sergeant_base: SiP_M1947_uniform_base
    {
        uniformClass = "SiP_M1947_uniform_first_sergeant";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            "\simc_uaf_51\patches\US_1SG_ca.paa"
        };
    };
    class SiP_M1947_uniform_2lt_base: SiP_M1947_uniform_base
    {
        uniformClass = "SiP_M1947_uniform_2lt";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            "\simc_uaf_51\patches\US_2LT_ca.paa"
        };
    };
    class SiP_M1947_uniform_1lt_base: SiP_M1947_uniform_base
    {
        uniformClass = "SiP_M1947_uniform_1lt";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            "\simc_uaf_51\patches\US_1LT_ca.paa"
        };
    };
    class SiP_M1947_uniform_captain_base: SiP_M1947_uniform_base
    {
        uniformClass = "SiP_M1947_uniform_captain";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            "\simc_uaf_51\patches\US_CPT_ca.paa"
        };
    };
    class SiP_M1947_uniform_major_base: SiP_M1947_uniform_base
    {
        uniformClass = "SiP_M1947_uniform_major";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            "\simc_uaf_51\patches\US_MAJ_ca.paa"
        };
    };
    class SiP_M1947_uniform_ltcol_base: SiP_M1947_uniform_base
    {
        uniformClass = "SiP_M1947_uniform_ltcol";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            "\simc_uaf_51\patches\US_LTCOL_ca.paa"
        };
    };
    class SiP_M1947_uniform_col_base: SiP_M1947_uniform_base
    {
        uniformClass = "SiP_M1947_uniform_col";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            "\simc_uaf_51\patches\US_COL_ca.paa"
        };
    };

    //Tucked
    class SiP_M1947_uniform_tuck_base: SiP_M1947_uniform_base
    {
        uniformClass = "SiP_M1947_uniform_tuck";
        model = "\simc_uaf_51\hbt_47_tuck.p3d";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            ""
        };
    };
    
    class SiP_M1947_uniform_tuck_private_base: SiP_M1947_uniform_tuck_base
    {
        uniformClass = "SiP_M1947_uniform_tuck_private";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            "\simc_uaf_51\patches\US_PVT_ca.paa"
        };
    };
    class SiP_M1947_uniform_tuck_corporal_base: SiP_M1947_uniform_tuck_base
    {
        uniformClass = "SiP_M1947_uniform_tuck_corporal";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            "\simc_uaf_51\patches\US_CPL_ca.paa"
        };
    };
    class SiP_M1947_uniform_tuck_sergeant_base: SiP_M1947_uniform_tuck_base
    {
        uniformClass = "SiP_M1947_uniform_tuck_sergeant";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            "\simc_uaf_51\patches\US_SSG_ca.paa"
        };
    };
    class SiP_M1947_uniform_tuck_sergeant_1stclass_base: SiP_M1947_uniform_tuck_base
    {
        uniformClass = "SiP_M1947_uniform_tuck_sergeant_1stclass";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            "\simc_uaf_51\patches\US_SFC_ca.paa"
        };
    };
    class SiP_M1947_uniform_tuck_master_sergeant_base: SiP_M1947_uniform_tuck_base
    {
        uniformClass = "SiP_M1947_uniform_tuck_master_sergeant";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            "\simc_uaf_51\patches\US_MSG_ca.paa"
        };    
    };
    class SiP_M1947_uniform_tuck_first_sergeant_base: SiP_M1947_uniform_tuck_base
    {
        uniformClass = "SiP_M1947_uniform_tuck_first_sergeant";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            "\simc_uaf_51\patches\US_1SG_ca.paa"
        };
    };
    class SiP_M1947_uniform_tuck_2lt_base: SiP_M1947_uniform_tuck_base
    {
        uniformClass = "SiP_M1947_uniform_tuck_2lt";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            "\simc_uaf_51\patches\US_2LT_ca.paa"
        };
    };
    class SiP_M1947_uniform_tuck_1lt_base: SiP_M1947_uniform_tuck_base
    {
        uniformClass = "SiP_M1947_uniform_tuck_1lt";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            "\simc_uaf_51\patches\US_1LT_ca.paa"
        };
    };
    class SiP_M1947_uniform_tuck_captain_base: SiP_M1947_uniform_tuck_base
    {
        uniformClass = "SiP_M1947_uniform_tuck_captain";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            "\simc_uaf_51\patches\US_CPT_ca.paa"
        };
    };
    class SiP_M1947_uniform_tuck_major_base: SiP_M1947_uniform_tuck_base
    {
        uniformClass = "SiP_M1947_uniform_tuck_major";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            "\simc_uaf_51\patches\US_MAJ_ca.paa"
        };
    };
    class SiP_M1947_uniform_tuck_ltcol_base: SiP_M1947_uniform_tuck_base
    {
        uniformClass = "SiP_M1947_uniform_tuck_ltcol";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            "\simc_uaf_51\patches\US_LTCOL_ca.paa"
        };
    };
    class SiP_M1947_uniform_tuck_col_base: SiP_M1947_uniform_tuck_base
    {
        uniformClass = "SiP_M1947_uniform_tuck_col";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            "\simc_uaf_51\patches\US_COL_ca.paa"
        };
    };

    //Sleeves
    class SiP_M1947_uniform_trop_base: SiP_M1947_uniform_base
    {
        model = "\simc_uaf_51\hbt_47_trop.p3d";
        uniformClass = "SiP_M1947_uniform_trop";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            ""
        };
    };
    
    class SiP_M1947_uniform_trop_private_base: SiP_M1947_uniform_trop_base
    {
        uniformClass = "SiP_M1947_uniform_trop_private";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            "\simc_uaf_51\patches\US_PVT_ca.paa"
        };
    };
    class SiP_M1947_uniform_trop_corporal_base: SiP_M1947_uniform_trop_base
    {
        uniformClass = "SiP_M1947_uniform_trop_corporal";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            "\simc_uaf_51\patches\US_CPL_ca.paa"
        };
    };
    class SiP_M1947_uniform_trop_sergeant_base: SiP_M1947_uniform_trop_base
    {
        uniformClass = "SiP_M1947_uniform_trop_sergeant";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            "\simc_uaf_51\patches\US_SSG_ca.paa"
        };
    };
    class SiP_M1947_uniform_trop_sergeant_1stclass_base: SiP_M1947_uniform_trop_base
    {
        uniformClass = "SiP_M1947_uniform_trop_sergeant_1stclass";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            "\simc_uaf_51\patches\US_SFC_ca.paa"
        };
    };
    class SiP_M1947_uniform_trop_master_sergeant_base: SiP_M1947_uniform_trop_base
    {
        uniformClass = "SiP_M1947_uniform_trop_master_sergeant";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            "\simc_uaf_51\patches\US_MSG_ca.paa"
        };    
    };
    class SiP_M1947_uniform_trop_first_sergeant_base: SiP_M1947_uniform_trop_base
    {
        uniformClass = "SiP_M1947_uniform_trop_first_sergeant";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            "\simc_uaf_51\patches\US_1SG_ca.paa"
        };
    };
    class SiP_M1947_uniform_trop_2lt_base: SiP_M1947_uniform_trop_base
    {
        uniformClass = "SiP_M1947_uniform_trop_2lt";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            "\simc_uaf_51\patches\US_2LT_ca.paa"
        };
    };
    class SiP_M1947_uniform_trop_1lt_base: SiP_M1947_uniform_trop_base
    {
        uniformClass = "SiP_M1947_uniform_trop_1lt";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            "\simc_uaf_51\patches\US_1LT_ca.paa"
        };
    };
    class SiP_M1947_uniform_trop_captain_base: SiP_M1947_uniform_trop_base
    {
        uniformClass = "SiP_M1947_uniform_trop_captain";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            "\simc_uaf_51\patches\US_CPT_ca.paa"
        };
    };
    class SiP_M1947_uniform_trop_major_base: SiP_M1947_uniform_trop_base
    {
        uniformClass = "SiP_M1947_uniform_trop_major";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            "\simc_uaf_51\patches\US_MAJ_ca.paa"
        };
    };
    class SiP_M1947_uniform_trop_ltcol_base: SiP_M1947_uniform_trop_base
    {
        uniformClass = "SiP_M1947_uniform_trop_ltcol";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            "\simc_uaf_51\patches\US_LTCOL_ca.paa"
        };
    };
    class SiP_M1947_uniform_trop_col_base: SiP_M1947_uniform_trop_base
    {
        uniformClass = "SiP_M1947_uniform_trop_col";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            "\simc_uaf_51\patches\US_COL_ca.paa"
        };
    };

    //Sleeves + Tucked
    class SiP_M1947_uniform_tucked_trop_base: SiP_M1947_uniform_base
    {
        model = "\simc_uaf_51\hbt_47_tuck_trop.p3d";
        uniformClass = "SiP_M1947_uniform_tucked_trop";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            ""
        };
    };
    
    class SiP_M1947_uniform_tucked_trop_private_base: SiP_M1947_uniform_tucked_trop_base
    {
        uniformClass = "SiP_M1947_uniform_tucked_trop_private";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            "\simc_uaf_51\patches\US_PVT_ca.paa"
        };
    };
    class SiP_M1947_uniform_tucked_trop_corporal_base: SiP_M1947_uniform_tucked_trop_base
    {
        uniformClass = "SiP_M1947_uniform_tucked_trop_corporal";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            "\simc_uaf_51\patches\US_CPL_ca.paa"
        };
    };
    class SiP_M1947_uniform_tucked_trop_sergeant_base: SiP_M1947_uniform_tucked_trop_base
    {
        uniformClass = "SiP_M1947_uniform_tucked_trop_sergeant";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            "\simc_uaf_51\patches\US_SSG_ca.paa"
        };
    };
    class SiP_M1947_uniform_tucked_trop_sergeant_1stclass_base: SiP_M1947_uniform_tucked_trop_base
    {
        uniformClass = "SiP_M1947_uniform_tucked_trop_sergeant_1stclass";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            "\simc_uaf_51\patches\US_SFC_ca.paa"
        };
    };
    class SiP_M1947_uniform_tucked_trop_master_sergeant_base: SiP_M1947_uniform_tucked_trop_base
    {
        uniformClass = "SiP_M1947_uniform_tucked_trop_master_sergeant";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            "\simc_uaf_51\patches\US_MSG_ca.paa"
        };    
    };
    class SiP_M1947_uniform_tucked_trop_first_sergeant_base: SiP_M1947_uniform_tucked_trop_base
    {
        uniformClass = "SiP_M1947_uniform_tucked_trop_first_sergeant";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            "\simc_uaf_51\patches\US_1SG_ca.paa"
        };
    };
    class SiP_M1947_uniform_tucked_trop_2lt_base: SiP_M1947_uniform_tucked_trop_base
    {
        uniformClass = "SiP_M1947_uniform_tucked_trop_2lt";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            "\simc_uaf_51\patches\US_2LT_ca.paa"
        };
    };
    class SiP_M1947_uniform_tucked_trop_1lt_base: SiP_M1947_uniform_tucked_trop_base
    {
        uniformClass = "SiP_M1947_uniform_tucked_trop_1lt";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            "\simc_uaf_51\patches\US_1LT_ca.paa"
        };
    };
    class SiP_M1947_uniform_tucked_trop_captain_base: SiP_M1947_uniform_tucked_trop_base
    {
        uniformClass = "SiP_M1947_uniform_tucked_trop_captain";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            "\simc_uaf_51\patches\US_CPT_ca.paa"
        };
    };
    class SiP_M1947_uniform_tucked_trop_major_base: SiP_M1947_uniform_tucked_trop_base
    {
        uniformClass = "SiP_M1947_uniform_tucked_trop_major";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            "\simc_uaf_51\patches\US_MAJ_ca.paa"
        };
    };
    class SiP_M1947_uniform_tucked_trop_ltcol_base: SiP_M1947_uniform_tucked_trop_base
    {
        uniformClass = "SiP_M1947_uniform_tucked_trop_ltcol";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            "\simc_uaf_51\patches\US_LTCOL_ca.paa"
        };
    };
    class SiP_M1947_uniform_tucked_trop_col_base: SiP_M1947_uniform_tucked_trop_base
    {
        uniformClass = "SiP_M1947_uniform_trop_col";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            "\simc_uaf_51\patches\US_COL_ca.paa"
        };
    };
};

class XtdGearModels
{
    class CfgWeapons 
    {		
        class u_hssn_SiP_M1947
        {
            label = "";
            author = "Letlev";
            options[]=
            {
                "style",
                "ranks",
                "shirt",
                "sleeves"
            };
            class style
            {
                label = "Style";
                hiddenselection = "camo";
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
                    label = "Late";
                };
            };
            class ranks
            {
                label = "Ranks";
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
            class shirt
            {
                label = "Shirt";
                hiddenselection = "insignia";
                changeingame = 1;
                changedelay = 2;
                values[]=
                {
                    "untucked",
                    "tucked"
                };
                class untucked
                {
                    label = "Untucked";
                    actionLabel = "Untuck Shirt";
                };
                class tucked
                {
                    label = "Tucked-in";
                    actionLabel = "Tuck-In Shirt";
                };
            };
            class sleeves
            {
                label = "Sleeves";
                hiddenselection = "hl";
                changeingame = 1;
                changedelay = 2;
                values[]=
                {
                    "full",
                    "rolled"
                };
                class full
                {
                    label = "Unrolled";
                    actionLabel = "Unroll Sleeves";
                    icon = "\z\aceax\addons\gearinfo\data\ui\sleeves.paa";
                };
                class rolled
                {
                    label = "Rolled";
                    actionLabel = "Roll sleeves";
                    icon = "\z\aceax\addons\gearinfo\data\ui\sleeves_quarter.paa";
                };
            };
        };
    };
};