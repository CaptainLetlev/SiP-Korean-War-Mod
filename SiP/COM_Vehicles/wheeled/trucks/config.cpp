class cfgPatches
{
    class SiP_Patch_Communist_trucks
    {
        addonRootClass = "SiP_Patch_Communist_vehicles";
        requiredAddons[] = 
        {
            "wheeled_f_vietnam_c"
        };
        units[] = 
        {
            "SiP_zis151_transport_open",
            "SiP_zis151_transport",
            "SiP_zis151_ammo",
            "SiP_zis151_fuel",
            "SiP_zis151_repair",

            "SiP_zis151_dshkm",
            "SiP_zis151_dshkm_pva_w",

            "SiP_zis151_dshkm_kpa"
        };
        weapons[] = {};
    };
};

class cfgVehicles
{
    class vn_wheeled_z157_base;
    class vn_o_wheeled_z157_01;
    class vn_o_wheeled_z157_02;
    class vn_o_wheeled_z157_ammo;
    class vn_o_wheeled_z157_fuel;
    class vn_o_wheeled_z157_repair;

    class vn_wheeled_z157_mg_01_base: vn_wheeled_z157_base
    {
        class Turrets;
    };

    class vn_o_wheeled_z157_mg_01_nva65: vn_wheeled_z157_mg_01_base
    {
        class Turrets: Turrets
        {
            class Codriver;
            class MainTurret;
        };
        class AnimationSources;
    };

    class SiP_zis151_transport_open: vn_o_wheeled_z157_01
    {
        author = "Letlev";
        displayName = "ZIS-151 Truck (Open)";
        side = 0;
        faction = "SiP_PVA";
        editorSubcategory = "SiP_Trucks_Editor_Subcategory";
        vehicleClass = "SiP_Trucks_vehicle_class";
        crew = "SiP_PVA_driver";
        typicalcargo[] = {"SiP_PVA_driver"};
        weapons[] = {"TruckHorn3"};
        animationList[] = {"user_canopy_rear_hide",1,"user_canopy_front_hide",1,"user_door_cover_left_hide",1,"user_door_cover_right_hide",1};
        hiddenSelectionsTextures[] = 
        {
            "\SiP\COM_Vehicles\wheeled\trucks\z151\z151_main_body_co.paa",
            "\SiP\COM_Vehicles\wheeled\trucks\z151\z151_main_body_2_co.paa",
            "\SiP\COM_Vehicles\wheeled\trucks\z151\z151_cockpit_co.paa",
            "\SiP\COM_Vehicles\wheeled\trucks\z151\z151_flatbed_co.paa",
            "\SiP\COM_Vehicles\wheeled\trucks\z151\z151_flatbed_cover_co.paa",
            "\SiP\COM_Vehicles\wheeled\trucks\z151\z151_main_body_mlod_co.paa",
            "\SiP\COM_Vehicles\wheeled\trucks\z151\z151_flatbed_mlod_co.paa"
        };
        class TransportMagazines
        {
            class _xx_SiP_Chinese_Frag_mag
            {
                magazine = "SiP_Chinese_Frag_mag";
                count = 8;
            };
            class _xx_vn_rg42_grenade_mag
            {
                magazine = "vn_rg42_grenade_mag";
                count = 4;
            };
            class _xx_vn_ppsh41_71_mag
            {
                magazine = "vn_ppsh41_71_mag";
                count = 3;
            };
        };
        class TransportWeapons
        {
            class _xx_vn_ppsh41
            {
                weapon = "vn_ppsh41";
                count = 1;
            };
        };
    };
    class SiP_zis151_transport: vn_o_wheeled_z157_02
    {
        author = "Letlev";
        displayName = "ZIS-151 Truck";
        side = 0;
        faction = "SiP_PVA";
        editorSubcategory = "SiP_Trucks_Editor_Subcategory";
        vehicleClass = "SiP_Trucks_vehicle_class";
        crew = "SiP_PVA_driver";
        typicalcargo[] = {"SiP_PVA_driver"};
        weapons[] = {"TruckHorn3"};
        animationList[] = {"user_canopy_rear_hide",0,"user_canopy_front_hide",1,"user_door_cover_left_hide",1,"user_door_cover_right_hide",1};
        hiddenSelectionsTextures[] = {"\SiP\COM_Vehicles\wheeled\trucks\z151\z151_main_body_co.paa","\SiP\COM_Vehicles\wheeled\trucks\z151\z151_main_body_2_co.paa","\SiP\COM_Vehicles\wheeled\trucks\z151\z151_cockpit_co.paa","\SiP\COM_Vehicles\wheeled\trucks\z151\z151_flatbed_co.paa","\SiP\COM_Vehicles\wheeled\trucks\z151\z151_flatbed_cover_co.paa","\SiP\COM_Vehicles\wheeled\trucks\z151\z151_main_body_mlod_co.paa","\SiP\COM_Vehicles\wheeled\trucks\z151\z151_flatbed_mlod_co.paa"};
        class TransportMagazines
        {
            class _xx_vn_m1911_mag
            {
                magazine = "vn_m1911_mag";
                count = 6;
            };
            class _xx_vn_carbine_15_mag
            {
                magazine = "vn_carbine_15_mag";
                count = 6;
            };
            class _xx_SPE_US_Mk_2
            {
                magazine = "SPE_US_Mk_2";
                count = 6;
            };
            class _xx_SPE_US_M18_Red
            {
                magazine = "SPE_US_M18_Red";
                count = 6;
            };
            class _xx_SPE_US_M18
            {
                magazine = "SPE_US_M18";
                count = 6;
            };
            class _xx_SPE_US_M18_Green
            {
                magazine = "SPE_US_M18_Green";
                count = 6;
            };
            class _xx_SPE_US_M18_Yellow
            {
                magazine = "SPE_US_M18_Yellow";
                count = 6;
            };
            class _xx_SPE_US_M18_Violet
            {
                magazine = "SPE_US_M18_Violet";
                count = 6;
            };
        };
        class TransportWeapons
        {
            class _xx_vn_m1911
            {
                weapon = "vn_m1911";
                count = 1;
            };
            class _xx_vn_m1carbine
            {
                weapon = "vn_m1carbine";
                count = 1;
            };
        };
    };
    class SiP_zis151_ammo: vn_o_wheeled_z157_ammo
    {
        author = "Letlev";
        displayName = "ZIS-151 Truck (Ammo)";
        side = 0;
        faction = "SiP_PVA";
        editorSubcategory = "SiP_Trucks_Editor_Subcategory";
        vehicleClass = "SiP_Trucks_vehicle_class";
        crew = "SiP_PVA_driver";
        typicalcargo[] = {"SiP_PVA_driver"};
        weapons[] = {"TruckHorn3"};
        animationList[] = {"user_canopy_rear_hide",0,"user_canopy_front_hide",1,"user_door_cover_left_hide",1,"user_door_cover_right_hide",1};
        hiddenSelectionsTextures[] = {"\SiP\COM_Vehicles\wheeled\trucks\z151\z151_main_body_co.paa","\SiP\COM_Vehicles\wheeled\trucks\z151\z151_main_body_2_co.paa","\SiP\COM_Vehicles\wheeled\trucks\z151\z151_cockpit_co.paa","\SiP\COM_Vehicles\wheeled\trucks\z151\z151_flatbed_co.paa","\SiP\COM_Vehicles\wheeled\trucks\z151\z151_flatbed_cover_co.paa","\SiP\COM_Vehicles\wheeled\trucks\z151\z151_main_body_mlod_co.paa","\SiP\COM_Vehicles\wheeled\trucks\z151\z151_flatbed_mlod_co.paa"};
        class TransportMagazines
        {
            class _xx_SiP_Chinese_Frag_mag
            {
                magazine = "SiP_Chinese_Frag_mag";
                count = 10;
            };
            class _xx_vn_rg42_grenade_mag
            {
                magazine = "vn_rg42_grenade_mag";
                count = 10;
            };
            class _xx_vn_tt33_mag
            {
                magazine = "vn_tt33_mag";
                count = 10;
            };
            class _xx_vn_ppsh41_35_mag
            {
                magazine = "vn_ppsh41_35_mag";
                count = 25;
            };
            class _xx_vn_ppsh41_71_mag
            {
                magazine = "vn_ppsh41_71_mag";
                count = 15;
            };
            class _xx_vn_pps_mag
            {
                magazine = "vn_pps_mag";
                count = 15;
            };
            class _xx_SiP_mosin_5_mag
            {
                magazine = "SiP_mosin_5_mag";
                count = 30;
            };
            class _xx_SiP_svt_10_mag
            {
                magazine = "SiP_svt_10_mag";
                count = 20;
            };
            class _xx_vn_dp28_mag
            {
                magazine = "vn_dp28_mag";
                count = 20;
            };
            class _xx_vn_b_item_cigs_01
            {
                magazine = "vn_b_item_cigs_01";
                count = 5;
            };
            class _xx_vn_b_item_gunoil_01
            {
                magazine = "vn_b_item_gunoil_01";
                count = 10;
            };
            class _xx_vn_b_item_lighter_01
            {
                magazine = "vn_b_item_lighter_01";
                count = 1;
            };
        };
        class TransportWeapons
        {
            class _xx_vn_m_wrench_01
            {
                weapon = "vn_m_wrench_01";
                count = 1;
            };
            class _xx_vn_m_shovel_01
            {
                weapon = "vn_m_shovel_01";
                count = 1;
            };
            class _xx_vn_m_axe_01
            {
                weapon = "vn_m_axe_01";
                count = 1;
            };
            class _xx_vn_m_machete_02
            {
                weapon = "vn_m_machete_02";
                count = 1;
            };
            class _xx_vn_m_vc_knife_01
            {
                weapon = "vn_m_vc_knife_01";
                count = 1;
            };
            class _xx_SiP_tt33
            {
                weapon = "vn_tt33";
                count = 5;
            };
            class _xx_vn_ppsh41
            {
                weapon = "vn_ppsh41";
                count = 10;
            };
            class _xx_SiP_pps43
            {
                weapon = "vn_pps43";
                count = 5;
            };
            class _xx_SiP_mosin_m9130
            {
                weapon = "SiP_mosin_m9130";
                count = 10;
            };
            class _xx_SiP_mosin_m38
            {
                weapon = "SiP_mosin_m38";
                count = 10;
            };
            class _xx_SiP_mosin_pu
            {
                weapon = "SiP_mosin_pu";
                count = 5;
            };
            class _xx_SiP_svt40
            {
                weapon = "SiP_svt40";
                count = 10;
            };
            class _xx_vn_dp28
            {
                weapon = "vn_dp28";
                count = 5;
            };
        };
    };
    class SiP_zis151_fuel: vn_o_wheeled_z157_fuel
    {
        author = "Letlev";
        displayName = "ZIS-151 Truck (Fuel)";
        side = 0;
        faction = "SiP_PVA";
        editorSubcategory = "SiP_Trucks_Editor_Subcategory";
        vehicleClass = "SiP_Trucks_vehicle_class";
        crew = "SiP_PVA_driver";
        typicalcargo[] = {"SiP_PVA_driver"};
        weapons[] = {"TruckHorn3"};
        animationList[] = {"user_canopy_front_hide",1,"hide_sparewheel",0.33,"user_door_cover_left_hide",1,"user_door_cover_right_hide",1};
        hiddenSelectionsTextures[] = {"\SiP\COM_Vehicles\wheeled\trucks\z151\z151_main_body_co.paa","\SiP\COM_Vehicles\wheeled\trucks\z151\z151_main_body_2_co.paa","\SiP\COM_Vehicles\wheeled\trucks\z151\z151_cockpit_co.paa","\SiP\COM_Vehicles\wheeled\trucks\z151\z151_fuel_truck_co.paa","\SiP\COM_Vehicles\wheeled\trucks\z151\z151_main_body_mlod_co.paa"};
        class TransportMagazines
        {
            class _xx_SiP_Chinese_Frag_mag
            {
                magazine = "SiP_Chinese_Frag_mag";
                count = 8;
            };
            class _xx_vn_rg42_grenade_mag
            {
                magazine = "vn_rg42_grenade_mag";
                count = 4;
            };
            class _xx_vn_ppsh41_71_mag
            {
                magazine = "vn_ppsh41_71_mag";
                count = 3;
            };
        };
        class TransportWeapons
        {
            class _xx_vn_ppsh41
            {
                weapon = "vn_ppsh41";
                count = 1;
            };
        };
    };
    class SiP_zis151_repair: vn_o_wheeled_z157_repair
    {
        author = "Letlev";
        displayName = "ZIS-151 Truck (Repair)";
        side = 0;
        faction = "SiP_PVA";
        editorSubcategory = "SiP_Trucks_Editor_Subcategory";
        vehicleClass = "SiP_Trucks_vehicle_class";
        crew = "SiP_PVA_driver";
        typicalcargo[] = {"SiP_PVA_driver"};
        weapons[] = {"TruckHorn3"};
        animationList[] = {"user_canopy_front_hide",1,"user_supply01_hide",0.33,"user_supply02_hide",0.33,"user_supply03_hide",0.33,"user_supply04_hide",0.33,"user_supply05_hide",0.33,"user_door_cover_left_hide",1,"user_door_cover_right_hide",1};
        hiddenSelectionsTextures[] = {"\SiP\COM_Vehicles\wheeled\trucks\z151\z151_main_body_co.paa","\SiP\COM_Vehicles\wheeled\trucks\z151\z151_main_body_2_co.paa","\SiP\COM_Vehicles\wheeled\trucks\z151\z151_cockpit_co.paa","\SiP\COM_Vehicles\wheeled\trucks\z151\z151_repair_truck_co.paa","\SiP\COM_Vehicles\wheeled\trucks\z151\z151_main_body_mlod_co.paa"};
        class TransportMagazines
        {
            class _xx_SiP_Chinese_Frag_mag
            {
                magazine = "SiP_Chinese_Frag_mag";
                count = 8;
            };
            class _xx_vn_rg42_grenade_mag
            {
                magazine = "vn_rg42_grenade_mag";
                count = 4;
            };
            class _xx_vn_ppsh41_71_mag
            {
                magazine = "vn_ppsh41_71_mag";
                count = 3;
            };
        };
        class TransportWeapons
        {
            class _xx_vn_ppsh41
            {
                weapon = "vn_ppsh41";
                count = 1;
            };
        };
    };
    class SiP_zis151_dshkm: vn_o_wheeled_z157_mg_01_nva65
    {
        author = "Letlev";
        displayName = "ZIS-151 Truck (DShKM)";
        side = 0;
        faction = "SiP_PVA";
        editorSubcategory = "SiP_AntiAir_Editor_Subcategory";
        vehicleClass = "SiP_Trucks_vehicle_class";
        crew = "SiP_PVA_driver";
        typicalcargo[] = {};
        weapons[] = {"TruckHorn3"};
        animationList[] = {"user_canopy_rear_hide",0,"user_canopy_front_hide",1,"user_door_cover_left_hide",1,"user_door_cover_right_hide",1};
        hiddenSelectionsTextures[] = {"\SiP\COM_Vehicles\wheeled\trucks\z151\z151_main_body_co.paa","\SiP\COM_Vehicles\wheeled\trucks\z151\z151_main_body_2_co.paa","\SiP\COM_Vehicles\wheeled\trucks\z151\z151_cockpit_co.paa","\SiP\COM_Vehicles\wheeled\trucks\z151\z151_flatbed_co.paa","\SiP\COM_Vehicles\wheeled\trucks\z151\z151_flatbed_cover_co.paa","\SiP\COM_Vehicles\wheeled\trucks\z151\z151_main_body_mlod_co.paa","\SiP\COM_Vehicles\wheeled\trucks\z151\z151_flatbed_mlod_co.paa"};
        class Turrets: Turrets
        {
            class Codriver: Codriver{};
            class MainTurret: MainTurret
            {
                weapons[] = {"SiP_dshkm_weapon"};
                magazines[] = {"SiP_dshkm_v_100_mag","SiP_dshkm_v_100_mag","SiP_dshkm_v_100_mag","SiP_dshkm_v_100_mag","SiP_dshkm_v_100_mag"};
                gunnerType = "SiP_PVA_gunner";
            };
        };
        class AnimationSources: AnimationSources
        {
            class mg1_reload
            {
                source = "reload";
                weapon = "SiP_dshkm_weapon";
            };
            class mg1_muzzleflash_rot: mg1_reload
            {
                source = "ammoRandom";
            };
            class mg1_muzzle_source
            {
                source = "user";
                animPeriod = 0.1;
                initPhase = 0;
            };
            class mg1_reloadmagazine: mg1_reload
            {
                source = "reloadMagazine";
            };
            class mg1_revolving: mg1_reload
            {
                source = "revolving";
            };
        };
        class TransportMagazines
        {
            class _xx_SiP_Chinese_Frag_mag
            {
                magazine = "SiP_Chinese_Frag_mag";
                count = 8;
            };
            class _xx_vn_rg42_grenade_mag
            {
                magazine = "vn_rg42_grenade_mag";
                count = 4;
            };
            class _xx_vn_ppsh41_71_mag
            {
                magazine = "vn_ppsh41_71_mag";
                count = 3;
            };
        };
        class TransportWeapons
        {
            class _xx_vn_ppsh41
            {
                weapon = "vn_ppsh41";
                count = 1;
            };
        };
    };
    class SiP_zis151_dshkm_pva_w: SiP_zis151_dshkm
    {
        faction = "SiP_PVA_w";
        editorCategory = "SiP_PVA_w_Editor_Category";
        crew = "SiP_PVA_Driver_w";
        typicalcargo[] = {"SiP_PVA_Driver_w"};
        class Turrets: Turrets
        {
            class Codriver: Codriver{};
            class MainTurret: MainTurret
            {
                gunnerType = "SiP_PVA_gunner_w";
            };
        };
    };
    class SiP_zis151_dshkm_kpa: SiP_zis151_dshkm
    {
        editorCategory = "SiP_KPA_Editor_Category";
        crew = "SiP_KPA_Driver";
        typicalcargo[] = {"SiP_KPA_Driver"};
        class Turrets: Turrets
        {
            class Codriver: Codriver{};
            class MainTurret: MainTurret
            {
                gunnerType = "SiP_KPA_gunner";
            };
        };
    };
};