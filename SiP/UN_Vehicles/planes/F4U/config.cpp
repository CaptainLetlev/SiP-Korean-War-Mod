class cfgPatches
{
    class SiP_Patch_un_planes_f4u
    {
        Name = " Suicide Is Painless - Korean War Mod - UN Planes - F4U Corsair";
        addonRootClass = "SiP_Patch_un_vehicles";
        requiredAddons[] = 
        {
            "sab_fl_f4u"
        };
        units[] = 
        {
            "SiP_f4u_corsair"
        };
        weapons[] = {};
    };
};

class cfgVehicles
{
    class sab_fl_f4u_base;
    class sab_fl_f4u: sab_fl_f4u_base
	{
        class AnimationSources;
    };
    
    //Navy
    class SiP_f4u_corsair: sab_fl_f4u
    {
        scope = 2;
        scopecurator = 2;
        side = 1;
        author = "Letlev";
        displayName = "F4U Corsair";
        faction = "SiP_US_Marines";
        editorCategory = "SiP_US_Marines_Editor_Category";
        editorSubcategory = "vn_b_planes_usn";
        icon = "fow\fow_air\hellcat\data\ui\map_us_hellcat_icon_ca.paa";
        crew = "SiP_USN_Fighter_Pilot";
        attenuationEffectType = "PlaneAttenuation";
        availableForSupportTypes[] = {"CAS_Bombing"};
    };
};