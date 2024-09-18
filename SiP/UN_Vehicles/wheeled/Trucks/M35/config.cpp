class cfgPatches
{
    class SiP_Patch_un_trucks_M35
    {
        addonRootClass = "SiP_Patch_un_vehicles";
        requiredAddons[] = 
        {
            "wheeled_f_vietnam_c"
        };
        units[] = 
        {
            "SiP_m35_transport_open",
            "SiP_m35_transport",
            "SiP_m35_ammo",
            "SiP_m35_fuel",
            "SiP_m35_repair",

            "SiP_m35_transport_open_marines",
            "SiP_m35_transport_marines",
            "SiP_m35_ammo_marines",
            "SiP_m35_fuel_marines",
            "SiP_m35_repair_marines",

            "SiP_m35_transport_open_uk",
            "SiP_m35_fuel_uk"
        };
        weapons[] = {};
    };
};

class cfgVehicles
{
    class vn_b_wheeled_m54_01;
    class vn_b_wheeled_m54_02;
    class vn_b_wheeled_m54_ammo;
    class vn_b_wheeled_m54_fuel;
    class vn_b_wheeled_m54_repair;
    class vn_i_wheeled_m54_01;
    class vn_i_wheeled_m54_02;
    class vn_i_wheeled_m54_ammo;
    class vn_i_wheeled_m54_fuel;
    class vn_i_wheeled_m54_repair;

    class SiP_m35_transport_open: vn_b_wheeled_m54_01
    {
        scope = 2;
        scopeCurator = 2;
        author = "Letlev";
        displayName = "M35 Truck (Open)";
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        side = 1;
        editorSubcategory = "SiP_Trucks_Editor_Subcategory";
        vehicleClass = "SiP_Trucks_vehicle_class";
        crew = "SiP_US_Army_driver";
        typicalCargo[] = {"SiP_US_Army_driver"};
        animationList[] = {"user_canopy_front_hide",1,"user_canopy_rear_hide",1,"user_canopy_rear_frame_hide",1,"user_canopy_rear_frame_02_hide",0,"user_toolbox_hide",0.33};
        weapons[] = {"SiP_Heavy_Horn_weapon"}; 
        magazines[] = {"vn_ship_horn_mag"};
        class TextureSources
        {
            class Army
            {
                displayName = "Army";
                author = "Letlev";
                textures[] = 
                {
                    "\vn\wheeled_f_vietnam\m54\data\vn_wheeled_m54_01_01_co.paa",
                    "\vn\wheeled_f_vietnam\m54\data\vn_wheeled_m54_01_02_co.paa",
                    "\vn\wheeled_f_vietnam\m54\data\vn_wheeled_m54_01_03_co.paa",
                    "\vn\wheeled_f_vietnam\m54\data\vn_wheeled_m54_01_04_co.paa"
                };
                factions[] = {"SiP_US_Army"};
            };
            class Green: Army
            {
                displayName = "Green";
                textures[] = 
                {
                    "\vn\wheeled_f_vietnam\m54\data\vn_wheeled_m54_01_01_arvn_co.paa",
                    "\vn\wheeled_f_vietnam\m54\data\vn_wheeled_m54_01_02_co.paa",
                    "\vn\wheeled_f_vietnam\m54\data\vn_wheeled_m54_01_03_arvn_co.paa",
                    "\vn\wheeled_f_vietnam\m54\data\vn_wheeled_m54_01_04_co.paa"
                };
                factions[] = {"SiP_BCFK","SiP_US_Marines"};
            };
        };
        textureList[] = 
        {
            "Army",1
        };
        class TransportItems
        {
            class _xx_vn_b_item_firstaidkit
            {
                name = "vn_b_item_firstaidkit";
                count = 10;
            };
            class _xx_vn_b_item_toolkit
            {
                name = "vn_b_item_toolkit";
                count = 1;
            };
        };
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
    class SiP_m35_transport: vn_b_wheeled_m54_02
    {
        scope = 2;
        scopeCurator = 2;
        author = "Letlev";
        displayName = "M35 Truck";
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        side = 1;
        editorSubcategory = "SiP_Trucks_Editor_Subcategory";
        vehicleClass = "SiP_Trucks_vehicle_class";
        crew = "SiP_US_Army_driver";
        typicalCargo[] = {"SiP_US_Army_driver"};
        animationList[] = {"user_canopy_front_hide",0,"user_canopy_rear_hide",0,"user_canopy_rear_frame_hide",1,"user_canopy_rear_frame_02_hide",0,"user_toolbox_hide",0.33};
        weapons[] = {"SiP_Heavy_Horn_weapon"}; 
        magazines[] = {"vn_ship_horn_mag"};
        class TextureSources
        {
            class Army
            {
                displayName = "Army";
                author = "Letlev";
                textures[] = 
                {
                    "\vn\wheeled_f_vietnam\m54\data\vn_wheeled_m54_01_01_co.paa",
                    "\vn\wheeled_f_vietnam\m54\data\vn_wheeled_m54_01_02_co.paa",
                    "\vn\wheeled_f_vietnam\m54\data\vn_wheeled_m54_01_03_co.paa",
                    "\vn\wheeled_f_vietnam\m54\data\vn_wheeled_m54_01_04_co.paa"
                };
                factions[] = {"SiP_US_Army"};
            };
            class Green: Army
            {
                displayName = "Green";
                textures[] = 
                {
                    "\vn\wheeled_f_vietnam\m54\data\vn_wheeled_m54_01_01_arvn_co.paa",
                    "\vn\wheeled_f_vietnam\m54\data\vn_wheeled_m54_01_02_co.paa",
                    "\vn\wheeled_f_vietnam\m54\data\vn_wheeled_m54_01_03_arvn_co.paa",
                    "\vn\wheeled_f_vietnam\m54\data\vn_wheeled_m54_01_04_co.paa"
                };
                factions[] = {"SiP_BCFK","SiP_US_Marines"};
            };
        };
        textureList[] = 
        {
            "Army",1
        };
        class TransportItems
        {
            class _xx_vn_b_item_firstaidkit
            {
                name = "vn_b_item_firstaidkit";
                count = 10;
            };
            class _xx_vn_b_item_toolkit
            {
                name = "vn_b_item_toolkit";
                count = 1;
            };
        };
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
    class SiP_m35_ammo: vn_b_wheeled_m54_ammo
    {
        scope = 2;
        scopeCurator = 2;
        author = "Letlev";
        displayName = "M35 Truck (Ammo)";
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        side = 1;
        editorSubcategory = "SiP_Trucks_Editor_Subcategory";
        vehicleClass = "SiP_Trucks_vehicle_class";
        crew = "SiP_US_Army_driver";
        typicalCargo[] = {"SiP_US_Army_driver"};
        animationList[] = {"user_canopy_front_hide",0,"user_canopy_rear_frame_hide",1,"user_canopy_rear_frame_02_hide",0,"user_toolbox_hide",0.33};
        weapons[] = {"SiP_Heavy_Horn_weapon"}; 
        magazines[] = {"vn_ship_horn_mag"};
        class TextureSources
        {
            class Army
            {
                displayName = "Army";
                author = "Letlev";
                textures[] = 
                {
                    "\vn\wheeled_f_vietnam\m54\data\vn_wheeled_m54_01_01_co.paa",
                    "\vn\wheeled_f_vietnam\m54\data\vn_wheeled_m54_01_02_co.paa",
                    "\vn\wheeled_f_vietnam\m54\data\vn_wheeled_m54_01_03_co.paa",
                    "\vn\wheeled_f_vietnam\m54\data\vn_wheeled_m54_01_04_co.paa"
                };
                factions[] = {"SiP_US_Army"};
            };
            class Green: Army
            {
                displayName = "Green";
                textures[] = 
                {
                    "\vn\wheeled_f_vietnam\m54\data\vn_wheeled_m54_01_01_arvn_co.paa",
                    "\vn\wheeled_f_vietnam\m54\data\vn_wheeled_m54_01_02_co.paa",
                    "\vn\wheeled_f_vietnam\m54\data\vn_wheeled_m54_01_03_arvn_co.paa",
                    "\vn\wheeled_f_vietnam\m54\data\vn_wheeled_m54_01_04_co.paa"
                };
                factions[] = {"SiP_BCFK","SiP_US_Marines"};
            };
        };
        textureList[] = 
        {
            "Army",1
        };
        class TransportItems
        {
            class _xx_vn_b_item_firstaidkit
            {
                name = "vn_b_item_firstaidkit";
                count = 20;
            };
            class _xx_vn_b_item_medikit_01
            {
                name = "vn_b_item_medikit_01";
                count = 1;
            };
            class _xx_vn_b_item_toolkit
            {
                name = "vn_b_item_toolkit";
                count = 1;
            };
            class _xx_vn_b_item_trapkit
            {
                name = "vn_b_item_trapkit";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class _xx_vn_m1911_mag
            {
                magazine = "vn_m1911_mag";
                count = 20;
            };
            class _xx_vn_m1_garand_mag
            {
                magazine = "vn_m1_garand_mag";
                count = 30;
            };
            class _xx_vn_m1903_mag
            {
                magazine = "vn_m1903_mag";
                count = 30;
            };
            class _xx_vn_carbine_15_mag
            {
                magazine = "vn_carbine_15_mag";
                count = 30;
            };
            class _xx_vn_carbine_30_mag
            {
                magazine = "vn_carbine_30_mag";
                count = 20;
            };
            class _xx_vn_m1897_fl_mag
            {
                magazine = "vn_m1897_fl_mag";
                count = 20;
            };
            class _xx_vn_m1897_buck_mag
            {
                magazine = "vn_m1897_buck_mag";
                count = 20;
            };
            class _xx_vn_m1a1_30_mag
            {
                magazine = "vn_m1a1_30_mag";
                count = 20;
            };
            class _xx_vn_22mm_m17_frag_mag
            {
                magazine = "vn_22mm_m17_frag_mag";
                count = 15;
            };
            class _xx_vn_22mm_m1a2_frag_mag
            {
                magazine = "vn_22mm_m1a2_frag_mag";
                count = 15;
            };
            class _xx_vn_22mm_m22_smoke_mag
            {
                magazine = "vn_22mm_m22_smoke_mag";
                count = 15;
            };
            class _xx_vn_22mm_m9_heat_mag
            {
                magazine = "vn_22mm_m9_heat_mag";
                count = 15;
            };
            class _xx_vn_m3a1_mag
            {
                magazine = "vn_m3a1_mag";
                count = 20;
            };
            class _xx_vn_m1918_t_mag
            {
                magazine = "vn_m1918_t_mag";
                count = 20;
            };
            class _xx_ace_compat_sip_m1919_250
            {
                magazine = "ace_compat_sip_m1919_250";
                count = 20;
            };
            class _xx_SPE_US_Mk_2
            {
                magazine = "SPE_US_Mk_2";
                count = 20;
            };
            class _xx_SPE_1Rnd_60mm_M6A3
            {
                magazine = "SPE_1Rnd_60mm_M6A3";
                count = 20;
            };
            class _xx_vn_m20a1b1_heat_mag
            {
                magazine = "vn_m20a1b1_heat_mag";
                count = 20;
            };
            class _xx_SPE_US_M18_Red
            {
                magazine = "SPE_US_M18_Red";
                count = 20;
            };
            class _xx_SPE_US_M18
            {
                magazine = "SPE_US_M18";
                count = 20;
            };
            class _xx_SPE_US_M18_Green
            {
                magazine = "SPE_US_M18_Green";
                count = 20;
            };
            class _xx_SPE_US_M18_Yellow
            {
                magazine = "SPE_US_M18_Yellow";
                count = 20;
            };
            class _xx_SPE_US_M18_Violet
            {
                magazine = "SPE_US_M18_Violet";
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
            class _xx_vn_b_item_rations_01
            {
                magazine = "vn_b_item_rations_01";
                count = 10;
            };
        };
        class TransportWeapons{};
    };
    class SiP_m35_fuel: vn_b_wheeled_m54_fuel
    {
        scope = 2;
        scopeCurator = 2;
        author = "Letlev";
        displayName = "M35 Truck (Fuel)";
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        side = 1;
        editorSubcategory = "SiP_Trucks_Editor_Subcategory";
        vehicleClass = "SiP_Trucks_vehicle_class";
        crew = "SiP_US_Army_driver";
        typicalCargo[] = {"SiP_US_Army_driver"};
        animationList[] = {"user_canopy_front_hide",0};
        weapons[] = {"SiP_Heavy_Horn_weapon"}; 
        magazines[] = {"vn_ship_horn_mag"};
        class TextureSources
        {
            class Army
            {
                displayName = "Army";
                author = "Letlev";
                textures[] = 
                {
                    "\vn\wheeled_f_vietnam\m54\data\vn_wheeled_m54_01_01_co.paa",
                    "\vn\wheeled_f_vietnam\m54\data\vn_wheeled_m54_01_02_co.paa",
                    "\vn\wheeled_f_vietnam\m54\data\vn_wheeled_m54_01_05_co.paa"
                };
                factions[] = {"SiP_US_Army"};
            };
            class Green: Army
            {
                displayName = "Green";
                author = "Letlev";
                textures[] = 
                {
                    "\vn\wheeled_f_vietnam\m54\data\vn_wheeled_m54_01_01_arvn_co.paa",
                    "\vn\wheeled_f_vietnam\m54\data\vn_wheeled_m54_01_02_co.paa",
                    "\vn\wheeled_f_vietnam\m54\data\vn_wheeled_m54_01_05_arvn_co.paa"
                };
                factions[] = {"SiP_BCFK","SiP_US_Marines"};
            };
        };
        textureList[] = 
        {
            "Army",1
        };
        class TransportItems
        {
            class _xx_vn_b_item_firstaidkit
            {
                name = "vn_b_item_firstaidkit";
                count = 10;
            };
            class _xx_vn_b_item_toolkit
            {
                name = "vn_b_item_toolkit";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class _xx_vn_m1911_mag
            {
                magazine = "vn_m1911_mag";
                count = 6;
            };
            class _xx_vn_m3a1_mag
            {
                magazine = "vn_m3a1_mag";
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
            class _xx_vn_m3a1
            {
                weapon = "vn_m3a1";
                count = 1;
            };
        };
    };
    class SiP_m35_repair: vn_b_wheeled_m54_repair
    {
        author = "Letlev";
        displayName = "M35 Truck (Repair)";
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        side = 1;
        editorSubcategory = "SiP_Trucks_Editor_Subcategory";
        vehicleClass = "SiP_Trucks_vehicle_class";
        crew = "SiP_US_Army_driver";
        typicalCargo[] = {"SiP_US_Army_driver"};
        animationList[] = {"user_canopy_front_hide",0};
        weapons[] = {"SiP_Heavy_Horn_weapon"}; 
        magazines[] = {"vn_ship_horn_mag"};
        class TransportItems
        {
            class _xx_vn_b_item_firstaidkit
            {
                name = "vn_b_item_firstaidkit";
                count = 10;
            };
            class _xx_vn_b_item_toolkit
            {
                name = "vn_b_item_toolkit";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class _xx_vn_m1911_mag
            {
                magazine = "vn_m1911_mag";
                count = 6;
            };
            class _xx_vn_m3a1_mag
            {
                magazine = "vn_m3a1_mag";
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
            class _xx_vn_m3a1
            {
                weapon = "vn_m3a1";
                count = 1;
            };
        };
    };
    
    //Marines
    class SiP_m35_transport_open_marines: SiP_m35_transport_open
    {
        faction = "SiP_US_Marines";
        editorCategory = "SiP_US_Marines_Editor_Category";
        crew = "SiP_US_Marines_driver";
        typicalCargo[] = {"SiP_US_Marines_driver"};
        textureList[] = 
        {
            "Green",1
        };
    };
    class SiP_m35_transport_marines: SiP_m35_transport
    {
        faction = "SiP_US_Marines";
        editorCategory = "SiP_US_Marines_Editor_Category";
        crew = "SiP_US_Marines_driver";
        typicalCargo[] = {"SiP_US_Marines_driver"};
        textureList[] = 
        {
            "Green",1
        };
    };
    class SiP_m35_ammo_marines: SiP_m35_ammo
    {
        faction = "SiP_US_Marines";
        editorCategory = "SiP_US_Marines_Editor_Category";
        crew = "SiP_US_Marines_driver";
        typicalCargo[] = {"SiP_US_Marines_driver"};
        textureList[] = 
        {
            "Green",1
        };
    };
    class SiP_m35_fuel_marines: SiP_m35_fuel
    {
        faction = "SiP_US_Marines";
        editorCategory = "SiP_US_Marines_Editor_Category";
        crew = "SiP_US_Marines_driver";
        typicalCargo[] = {"SiP_US_Marines_driver"};
        textureList[] = 
        {
            "Green",1
        };
    };
    class SiP_m35_repair_marines: SiP_m35_repair
    {
        faction = "SiP_US_Marines";
        editorCategory = "SiP_US_Marines_Editor_Category";
        crew = "SiP_US_Marines_driver";
        typicalCargo[] = {"SiP_US_Marines_driver"};
    };
    
    //UK
    class SiP_m35_transport_open_uk: SiP_m35_transport_open
    {
        faction = "SiP_BCFK";
        editorCategory = "SiP_BCFK_Editor_Category";
        crew = "SiP_BCFK_driver";
        typicalCargo[] = {"SiP_BCFK_driver"};
        textureList[] = 
        {
            "Green",1
        };
    };
    
    class SiP_m35_fuel_uk: SiP_m35_fuel
    {
        faction = "SiP_BCFK";
        editorCategory = "SiP_BCFK_Editor_Category";
        crew = "SiP_BCFK_driver";
        typicalCargo[] = {"SiP_BCFK_driver"};
        textureList[] = 
        {
            "Green",1
        };
    };
};