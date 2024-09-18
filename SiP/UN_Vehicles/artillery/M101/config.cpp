class cfgPatches
{
    class SiP_Patch_un_artillery_m101
    {
        addonRootClass = "SiP_Patch_un_vehicles";
        requiredAddons[] = 
        {
            "static_f_vietnam_c"
        };
        units[] = 
        {
            "SiP_m101_105mm_howitzer",
            "SiP_m101_105mm_howitzer_marines"
        };
        weapons[] = {};
        magazines[] = {};
    };
};

class Mode_SemiAuto;
class Mode_Burst;

class cfgVehicles
{
    class vn_howitzer_base;
    class vn_static_m101_base: vn_howitzer_base
    {
        class Turrets;
    };

    class vn_static_m101_02_base: vn_static_m101_base
    {
        class AnimationSources;
    };

    class SiP_m101_105mm_howitzer: vn_static_m101_02_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "M101 105mm Howitzer";
        side = 1;
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        editorSubcategory = "SiP_Artillery_Editor_Subcategory";
        vehicleClass = "SiP_Artillery_vehicle_class";
        crew = "SiP_US_Army_gunner";
        typicalCargo[] = {"SiP_US_Army_gunner"};
        model = "\vn\static_f_vietnam\m101\vn_b_static_m101_01";
        class UserActions
        {
            class m101_anim_base
            {
                displayName = "";
                position = "zamerny";
                showWindow = 0;
                onlyForPlayer = 1;
                radius = 2;
                priority = 3;
                condition = "";
                statement = "";
            };
            class gunner_lower_shield
            {
                displayNameDefault = "<img image = '\A3\Ui_f\data\IGUI\Cfg\Actions\arrow_down_gs.paa' size = '2.5' />";
                displayName = "$STR_VN_STATIC_M101_SHIELD_L_DOWN_DN";
                position = "gunner_action_pos";
                priority = 4;
                radius = 5;
                aiMaxRange = 5.25;
                onlyForPlayer = 1;
                showWindow = 0;
                condition = "(player == gunner this) && ((this animationPhase 'gunner_lower_shield') < 0.5)";
                statement = "this animateSource ['gunner_lower_shield',1]";
            };
            class gunner_raise_shield: gunner_lower_shield
            {
                displayNameDefault = "<img image = '\A3\Ui_f\data\IGUI\Cfg\Actions\arrow_up_gs.paa' size = '2.5' />";
                displayName = "$STR_VN_STATIC_M101_SHIELD_L_UP_DN";
                condition = "(player == gunner this) && ((this animationPhase 'gunner_lower_shield') >= 0.5)";
                statement = "this animateSource ['gunner_lower_shield',0]";
            };
            class cargo_lower_shield
            {
                displayNameDefault = "<img image = '\A3\Ui_f\data\IGUI\Cfg\Actions\arrow_down_gs.paa' size = '2.5' />";
                displayName = "$STR_VN_STATIC_M101_SHIELD_R_DOWN_DN";
                position = "cargo_action_pos";
                priority = 5;
                radius = 5;
                aiMaxRange = 5.25;
                onlyForPlayer = 1;
                showWindow = 0;
                condition = "(player == gunner this) && ((this animationPhase 'cargo_lower_shield') < 0.5)";
                statement = "this animateSource ['cargo_lower_shield',1]";
            };
            class cargo_raise_shield: cargo_lower_shield
            {
                displayNameDefault = "<img image = '\A3\Ui_f\data\IGUI\Cfg\Actions\arrow_up_gs.paa' size = '2.5' />";
                displayName = "$STR_VN_STATIC_M101_SHIELD_R_UP_DN";
                condition = "(player == gunner this) && ((this animationPhase 'cargo_lower_shield') >= 0.5)";
                statement = "this animateSource ['cargo_lower_shield',0]";
            };
        };
        class AnimationSources: AnimationSources
        {
            class m101_reload_source
            {
                source = "reload";
                weapon = "vn_howitzer_105mm";
            };
            class m101_revolving_source: m101_reload_source
            {
                source = "revolving";
            };
            class HitLFWheel
            {
                source = "Hit";
                hitpoint = "HitLFWheel";
                raw = 1;
            };
            class HitRFWheel: HitLFWheel
            {
                hitpoint = "HitRFWheel";
            };
            class HitTurret: HitLFWheel
            {
                hitpoint = "HitTurret";
            };
            class HitHull: HitLFWheel
            {
                hitpoint = "HitHull";
            };
            class gunner_lower_shield
            {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
                sound = "MetalDoorsSound";
                soundPosition = "hatch_sound";
            };
            class cargo_lower_shield: gunner_lower_shield{};
        };
    };

    class SiP_m101_105mm_howitzer_marines: SiP_m101_105mm_howitzer
    {
        faction = "SiP_US_Marines";
        editorCategory = "SiP_US_Marines_Editor_Category";
        crew = "SiP_US_Marines_gunner";
        typicalCargo[] = {"SiP_US_Marines_gunner"};
    };
};