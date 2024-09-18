class cfgPatches
{
    class SiP_Patch_core
    {
        Name = "Suicide Is Painless - Korean War Mod - Core";
        Author = "Letlev";
        requiredAddons[] = 
        {
            "WW2_SPE_Core_c_Core_c"
        };
        units[] = {};
        weapons[] = {};
    };
};

class CfgMods
{
    class SiP
    {
        dir = "SiP";
        name = "Suicide Is Painless - Korean War Mod";
        picture = "\SiP\Addons\sip_core\SiPlogo_ca.paa";
        hidePicture = "true";
        hideName = "true";
        action = "";
    };
};

class CfgFactionClasses
{
    class SiP_PVA
    {
        displayName = "People's Volunteer Army";
        icon = "\SiP\Addons\sip_core\factions\pva_co.paa";
        priority = 300;
        side = 0;
    };
    class SiP_PVA_w: SiP_PVA
    {
        displayName = "People's Volunteer Army - Winter";
    };

    class SiP_KPA: SiP_PVA
    {
        displayName = "Korean People's Army";
        icon = "\SiP\Addons\sip_core\factions\kpa_co.paa";
    };
    class SiP_KPA_w: SiP_KPA
    {
        displayName = "Korean People's Army - Winter";
    };

    class SiP_US_Army
    {
        displayName = "US Army [Korea]";
        icon = "\SiP\Addons\sip_core\factions\UN_co.paa";
        priority = 300;
        side = 1;
    };
    class SiP_US_Army_w: SiP_US_Army
    {
        displayName = "US Army [Korea] - Winter";
    };

    class SiP_US_Marines: SiP_US_Army
    {
        displayName = "US Marines [Korea]";
    };
    class SiP_US_Marines_w: SiP_US_Marines
    {
        displayName = "US Marines [Korea] - Winter";
    };

    class SiP_BCFK: SiP_US_Army
    {
        displayName = "BCF [Korea]";
    };
    class SiP_BCFK_w: SiP_BCFK
    {
        displayName = "BCF [Korea] - Winter";
    };

    class SiP_ROK_Army: SiP_US_Army
    {
        displayName = "Republic of Korea Army";
        icon = "\SiP\Addons\sip_core\factions\rok_co.paa";
    };
    class SiP_ROK_Army_w: SiP_ROK_Army
    {
        displayName = "Republic of Korea Army - Winter";
    };

    class SiP_UN_Additional_Forces: SiP_US_Army
    {
        displayName = "UN Forces [Korea]";
    };
    class SiP_UN_Additional_Forces_w: SiP_UN_Additional_Forces
    {
        displayName = "UN Forces [Korea] - Winter";
    };
};

class CfgEditorCategories
{
    class SiP_PVA_Editor_Category
    {
        displayName = "People's Volunteer Army";
    };
    class SiP_PVA_w_Editor_Category
    {
        displayName = "People's Volunteer Army - Winter";
    };

    class SiP_KPA_Editor_Category
    {
        displayName = "Korean People's Army";
    };
    class SiP_KPA_w_Editor_Category
    {
        displayName = "Korean People's Army - Winter";
    };

    class SiP_US_Army_Editor_Category
    {
        displayName = "US Army [Korea]";
    };
    class SiP_US_Army_w_Editor_Category
    {
        displayName = "US Army [Korea] - Winter";
    };

    class SiP_US_Marines_Editor_Category
    {
        displayName = "US Marines [Korea]";
    };
    class SiP_US_Marines_w_Editor_Category
    {
        displayName = "US Marines [Korea] - Winter";
    };

    class SiP_BCFK_Editor_Category
    {
        displayName = "BCF [Korea]";
    };
    class SiP_BCFK_w_Editor_Category
    {
        displayName = "BCF [Korea] - Winter";
    };

    class SiP_ROK_Army_Editor_Category
    {
        displayName = "Republic of Korea Army";
    };
    class SiP_ROK_Army_w_Editor_Category
    {
        displayName = "Republic of Korea Army - Winter";
    };

    class SiP_Korean_War_Items_Editor_Category
    {
        displayName = "Korean War Items";
    };

    class SiP_UN_Additional_Forces_Editor_Category
    {
        displayName = "UN Forces [Korea]";
    };
    class SiP_UN_Additional_Forces_w_Editor_Category
    {
        displayName = "UN Forces [Korea] - Winter";
    };
};

class CfgEditorSubcategories
{
    class SiP_Special_Editor_Subcategory
    {
        displayName = "Special";
    };
    class SiP_Infantry_Editor_Subcategory
    {
        displayName = "Infantry";
    };
    class SiP_Vehicle_Crews_Editor_Subcategory
    {
        displayName = "Vehicle Crews";
    };
    class SiP_Artillery_Editor_Subcategory
    {
        displayName = "Artillery";
    };
    class SiP_Helicopters_Editor_Subcategory
    {
        displayName = "Helicopters";
    };
    class SiP_Antitank_Editor_Subcategory
    {
        displayName = "Anti-Tank";
    };
    class SiP_AntiAir_Editor_Subcategory
    {
        displayName = "Anti-Air";
    };
    class SiP_Mortars_Editor_Subcategory
    {
        displayName = "Mortars";
    };
    class SiP_Tanks_Editor_Subcategory
    {
        displayName = "Tanks";
    };
    class SiP_Armored_Cars_Editor_Subcategory
    {
        displayName = "Armored Cars";
    };
    class SiP_Machineguns_Editor_Subcategory
    {
        displayName = "Machineguns";
    };
    class SiP_Trucks_Editor_Subcategory
    {
        displayName = "Trucks";
    };
    class SiP_Jeeps_Editor_Subcategory
    {
        displayName = "Jeeps";
    };
    class SiP_1bn_187_Editor_Subcategory
    {
        displayName = "1st Battalion, 187th RCT";
    };
    class SiP_2bn_187_Editor_Subcategory
    {
        displayName = "2nd Battalion, 187th RCT";
    };
    class SiP_3bn_187_Editor_Subcategory
    {
        displayName = "3rd Battalion, 187th RCT";
    };
    class SiP_7id_Editor_Subcategory
    {
        displayName = "7th Infantry Division";
    };
    class SiP_27ib_Editor_Subcategory
    {
        displayName = "27th Infantry Brigade";
    };
    class SiP_25cib_Editor_Subcategory
    {
        displayName = "25th Canadian Infantry Brigade";
    };
    class SiP_3bn_rar_Editor_Subcategory
    {
        displayName = "3rd Battalion, R.A.R.";
    };
    class SiP_UN_Resupply_Boxes_Subcategory
    {
        displayName = "UN Supply Boxes";
    };

    class SiP_Range_Props_Subcategory
    {
        displayName = "Range Props";
    };
};

class CfgVehicleClasses
{
    class SiP_Artillery_vehicle_class
    {
        displayName = "Artillery";
    };
    class SiP_Infantry_vehicle_class
    {
        displayName = "Infantry";
    };
    class SiP_Tanks_vehicle_class
    {
        displayName = "Tanks";
    };
    class SiP_Armored_Cars_vehicle_class
    {
        displayName = "Armored Cars";
    };
    class SiP_Trucks_vehicle_class
    {
        displayName = "Trucks";
    };
    class SiP_Jeeps_vehicle_class
    {
        displayName = "Jeeps";
    };
    class SiP_Machineguns_vehicle_class
    {
        displayName = "Machineguns";
    };
    class SiP_mortars_vehicle_class
    {
        displayName = "Mortars";
    };
    class SiP_Antitank_vehicle_class
    {
        displayName = "Anti-Tank";
    };
    class SiP_AntiAir_vehicle_class
    {
        displayName = "Anti-Air";
    };
    class SiP_Helicopter_vehicle_class
    {
        displayName = "Helicopters";
    };
};