class cfgPatches
{
    class SiP_Patch_M1951_pile_cap
    {
        addonRootClass = "SiP_Patch_US_Army_Headgear";
        requiredAddons[] = 
        {
            "simc_uaf_51_core"
        };
        units[] = {};
        weapons[] = 
        {
            "SiP_m50_pile_cap",
            "SiP_m50_pile_cap_fold_front",
            "SiP_m50_pile_cap_fold_sides",
            "SiP_m50_pil_cap_folded"
        };
    };
};

class cfgWeapons
{
    class hat_furfag_1;
    class hat_furfag_2;
    class hat_furfag_3;
    class hat_furfag_4;

    class SiP_m50_pile_cap: hat_furfag_1
    {
        author = "Letlev";
        displayName = "[US] M1950 Pile Cap";
        allowedFacewear[] = {"",1};
        class XtdGearInfo
        {
            model = "u_hssn_SiP_pile_cap";
            style = "standard";
        };
    };
    class SiP_m50_pile_cap_fold_front: hat_furfag_2
    {
        author = "Letlev";
        displayName = "[US] M1950 Pile Cap";
        allowedFacewear[] = {"",1};
        class XtdGearInfo
        {
            model = "u_hssn_SiP_pile_cap";
            style = "fold_front";
        };
    };
    class SiP_m50_pile_cap_fold_sides: hat_furfag_3
    {
        author = "Letlev";
        displayName = "[US] M1950 Pile Cap";
        allowedFacewear[] = {"",1};
         class XtdGearInfo
        {
            model = "u_hssn_SiP_pile_cap";
            style = "fold_sides";
        };
    };
    class SiP_m50_pil_cap_folded: hat_furfag_4
    {
        author = "Letlev";
        displayName = "[US] M1950 Pile Cap";
        allowedFacewear[] = {"",1};
         class XtdGearInfo
        {
            model = "u_hssn_SiP_pile_cap";
            style = "fold_both";
        };
    };
};

class XtdGearModels
{
    class CfgWeapons 
    {		
        class u_hssn_SiP_pile_cap
        {
            label = "";
            author = "Letlev";
            options[]=
            {
                "style"
            };
            class style
            {
                label = "Style";
                changeingame = 1;
                changedelay = 1;
                hiddenselection = "camo";
                values[]=
                {
                    "standard",
                    "fold_front",
                    "fold_sides",
                    "fold_both"
                };
                class standard
                {
                    label = "Unfolded";
                    actionlabel = "Unfold Both";
                    icon = "\simc_uaf_51_preview\icons\furfag_1_ca.paa";
                };
                class fold_front
                {
                    label = "Folded Front";
                    actionlabel = "Fold Front";
                    icon = "\simc_uaf_51_preview\icons\furfag_2_ca.paa";
                };
                class fold_sides
                {
                    label = "Folded Sides";
                    actionlabel = "Unfold Sides";
                    icon = "\simc_uaf_51_preview\icons\furfag_3_ca.paa";
                };
                class fold_both
                {
                    label = "Folded Both";
                    actionlabel = "Fold Both";
                    icon = "\simc_uaf_51_preview\icons\furfag_4_ca.paa";
                };
            };
        };
    };
};