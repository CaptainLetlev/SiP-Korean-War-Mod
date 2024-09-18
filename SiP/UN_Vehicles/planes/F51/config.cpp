class cfgPatches
{
    class SiP_Patch_un_planes_f51
    {
        Name = " Suicide Is Painless - Korean War Mod - UN Planes - F-51 Mustang";
        addonRootClass = "SiP_Patch_un_vehicles";
        requiredAddons[] = 
        {
            "sab_fl_p51d"
        };
        units[] = 
        {
            "SiP_F51D",
            "SiP_F51D_ROKAF"
        };
        weapons[] = {};
    };
};

class cfgVehicles
{
    class sab_fl_p51d_base;
    class sab_fl_p51d: sab_fl_p51d_base
    {
        class AnimationSources;
        class EventHandlers;
    };
    
    class SiP_F51D: sab_fl_p51d
    {
        scope = 2;
        scopecurator = 2;
        side = 1;
        author = "Letlev";
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        editorSubcategory = "vn_b_planes_usaf";
        crew = "SiP_USAF_Fighter_Pilot";
        displayName = "F-51D-10 Mustang";
        icon = "\WW2\Assets_t\Vehicles\Icons_t\Icon_P39_ca.paa";
        hiddenSelectionsTextures[] = {"CWM_Skins\data\p51d_nam_co.paa"};
        hiddenSelectionsMaterials[] = {"CWM_Skins\data\p51d.rvmat"};
        attenuationEffectType = "PlaneAttenuation";
    };

    class SiP_F51D_ROKAF: SiP_F51D
    {
        faction = "SiP_ROK_Army";
        editorCategory = "SiP_ROK_Army_Editor_Category";
        editorSubcategory = "EdSubcat_Planes";
        crew = "SiP_USAF_Fighter_Pilot";
        hiddenSelectionsTextures[] = {"SiP\Addons\sip_un_vehicles\planes\F51\data\p51_rok_co.paa"};
    };
};