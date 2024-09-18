class cfgPatches
{
    class SiP_Patch_un_helicopters
    {
        Name = " Suicide Is Painless - Korean War Mod - UN Helicopters";
        Author = "Letlev";
        addonRootClass = "SiP_Patch_un_vehicles";
        requiredAddons[] = 
        {
            "pook_H13"
        };
        units[] = 
        {
            "SiP_helo_h13_medevac",
            "SiP_helo_h13_amphis"
        };
        weapons[] = {};
    };
};

class cfgVehicles
{
    class pook_H13_medevac;
    class pook_H13_amphib;

    class SiP_helo_h13_medevac: pook_H13_medevac
    {
        author = "Letlev";
        displayName = "H-13 Medevac";
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        editorSubcategory = "SiP_Helicopters_Editor_Subcategory";
        vehicleClass = "SiP_Helicopter_vehicle_class";
        crew = "SiP_US_Army_Heli_Pilot";
        typicalCargo[] = {"SiP_US_Army_Heli_Pilot"};
        hiddenSelectionsTextures[] = {"pook_h13\data\mi17_body_co.paa","pook_H13\data\red_cross_ca.paa","pook_H13\data\clear_empty.paa"};
        attenuationEffectType = "vn_openvehicle_attenuation";
        obstructSoundsWhenIn = 0;
        occludeSoundsWhenIn = 0;
        outsideSoundFilter = 0;
        transportSoldier = 2;
        cargoAction[] = {"vn_uh1d_med_cargo","vn_uh1d_med_cargo"};
        class UserActions
        {
            class music_player
            {
                displayName = "$STR_VN_VEHICLE_RADIO_DN";
                position = "zamerny";
                showWindow = 0;
                onlyForPlayer = 0;
                radius = 2;
                priority = -99;
                condition = "alive this && { local this && { missionnamespace getvariable ['vn_jukebox_enable', true] && { driver this isEqualTo player } } }";
                statement = "['open'] call vn_fnc_music";
            };
        };
    };
    
    class SiP_helo_h13_amphis: pook_H13_amphib
    {
        author = "Letlev";
        displayName = "H-13 Amphibious";
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        editorSubcategory = "SiP_Helicopters_Editor_Subcategory";
        vehicleClass = "SiP_Helicopter_vehicle_class";
        crew = "SiP_US_Army_Heli_Pilot";
        typicalCargo[] = {};
        hiddenSelectionsTextures[] = {"pook_h13\data\mi17_body_co.paa","pook_H13\data\logo\star.paa","pook_H13\data\clear_empty.paa"};
        attenuationEffectType = "vn_openvehicle_attenuation";
        obstructSoundsWhenIn = 0;
        occludeSoundsWhenIn = 0;
        outsideSoundFilter = 0;
        class UserActions
        {
            class music_player
            {
                displayName = "$STR_VN_VEHICLE_RADIO_DN";
                position = "zamerny";
                showWindow = 0;
                onlyForPlayer = 0;
                radius = 2;
                priority = -99;
                condition = "alive this && { local this && { missionnamespace getvariable ['vn_jukebox_enable', true] && { driver this isEqualTo player } } }";
                statement = "['open'] call vn_fnc_music";
            };
        };
    };
};