class cfgPatches
{
    class SiP_Patch_un_statics_antitank_un_m20_recoiless
    {
        addonRootClass = "SiP_Patch_un_statics";
        requiredAddons[] = 
        {
            "static_f_vietnam_02",
            "static_f_vietnam_02_c",
            "weapons_v_f_vietnam"
        };
        units[] = 
        {
            "SiP_m20_recoilless_base",

            "SiP_m20_recoilless_US_Army",
            "SiP_m20_recoilless_marines"
        };
        weapons[] = {};
        magazines[] = {};
    };
};

class cfgVehicles
{
    class StaticCannon;

    class vn_static_type56rr_base: StaticCannon
    {
        class Turrets;
    };
    class vn_o_nva_navy_static_type56rr: vn_static_type56rr_base
    {
        class Turrets: Turrets
        {
            class MainTurret;
        };
        class AnimationSources;
    };

    class SiP_m20_recoilless_base: vn_o_nva_navy_static_type56rr
    {
        scope = 1;
        scopecurator = 1;
        author = "Letlev";
        displayName = "M20 Recoilless Rifle";
        editorSubcategory = "SiP_Antitank_Editor_Subcategory";
        vehicleClass = "SiP_Antitank_vehicle_class";
        side = 1;
        hiddenSelectionsTextures[] = {"SiP\Addons\sip_un_vehicles\static\anti-tank\data\textures\m20_recoilless_co.paa"};
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                magazines[] = 
                {
                    "vn_type56_v_12_heat_mag",
                    "vn_type56_v_12_heat_mag",
                    "vn_type56_v_12_heat_mag",
                    "vn_type56_v_12_heat_mag",
                    "vn_type56_v_12_he_mag",
                    "vn_type56_v_12_he_mag",
                    "vn_type56_v_12_he_mag"
                };
            };
        };
        class AnimationSources: AnimationSources
        {
            class hide_bushes1
            {
                displayName = "$STR_VN_STATIC_TYPE56RR_BUSHES1_HIDE_DN";
                source = "user";
                animPeriod = 0.001;
                initPhase = 1;
            };
            class hide_bushes2
            {
                displayName = "$STR_VN_STATIC_TYPE56RR_BUSHES2_HIDE_DN";
                source = "user";
                animPeriod = 0.001;
                initPhase = 1;
            };
            class hide_shells
            {
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
            };
            class mag_heat_hide
            {
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
            };
            class mag_he_hide
            {
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
            };
        };
    };

    class SiP_m20_recoilless_US_Army: SiP_m20_recoilless_base
    {
        scope = 2;
        scopecurator = 2;
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        crew = "SiP_US_Army_gunner";
        typicalCargo[] = {"SiP_US_Army_gunner"};
    };
    class SiP_m20_recoilless_marines: SiP_m20_recoilless_US_Army
    {
        faction = "SiP_US_Marines";
        editorCategory = "SiP_US_Marines_Editor_Category";
        crew = "SiP_US_Marines_gunner";
        typicalCargo[] = {"SiP_US_Marines_gunner"};
    };
};