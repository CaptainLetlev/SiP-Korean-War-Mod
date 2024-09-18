class cfgPatches
{
    class SiP_Patch_un_trucks
    {
        addonRootClass = "SiP_Patch_un_vehicles";
        requiredAddons[] = 
        {
            "WW2_Core_c_WW2_Core_c",
            "WW2_Assets_c_Vehicles_Wheeled_c",
            "HQ_Trucks",
            "wheeled_f_vietnam_c"
        };
        units[] = {};
        weapons[] = 
        {
            "SiP_Light_Horn_weapon",
            "SiP_Medium_Horn_weapon",
            "SiP_Heavy_Horn_weapon",
            "SiP_ooga_horn_weapon"
        };
    };
};

class cfgsoundshaders
{
    class SiP_Light_Horn_soundshader
    {
        samples[] = 
        {
            {"\WW2\SPE_Assets_s\Vehicles\Wheeled_s\Car_Horn.wss",1}
        };
        volume = "1.58";
        range = 50;
        rangecurve[] = {{0,1},{50,0}};
    };
    class SiP_Light_Horn_distance_soundshader
    {
        samples[] = 
        {
            {"\WW2\SPE_Assets_s\Vehicles\Wheeled_s\Car_Horn.wss",1}
        };
        volume = "0.5";
        range = 200;
        rangecurve[] = {{0,0},{50,1},{200,0}};
    };

    class SiP_Medium_Horn_soundshader
    {
        samples[] = 
        {
            {"\WW2\SPE_Assets_s\Vehicles\Wheeled_s\Truck_Horn_2.wss",1}
        };
        volume = "1.58";
        range = 50;
        rangecurve[] = {{0,1},{50,0}};
    };
    class SiP_Medium_Horn_distance_soundshader
    {
        samples[] = 
        {
            {"\WW2\SPE_Assets_s\Vehicles\Wheeled_s\Truck_Horn_2.wss",1}
        };
        volume = "0.5";
        range = 200;
        rangecurve[] = {{0,0},{50,1},{200,0}};
    };

    class SiP_Heavy_Horn_soundshader
    {
        samples[] = 
        {
            {"\WW2\SPE_Assets_s\Vehicles\Wheeled_s\Truck_Horn_1.wss",1}
        };
        volume = "1.58";
        range = 50;
        rangecurve[] = {{0,1},{50,0}};
    };
    class SiP_Heavy_Horn_distance_soundshader
    {
        samples[] = 
        {
            {"\WW2\SPE_Assets_s\Vehicles\Wheeled_s\Truck_Horn_1.wss",1}
        };
        volume = "0.5";
        range = 200;
        rangecurve[] = {{0,0},{50,1},{200,0}};
    };

    class SiP_ooga_Horn_soundshader
    {
        samples[] = 
        {
            {"\WW2\SPE_Assets_s\Vehicles\Trucks_s\Opelblitz\Opelblitz_Horn.wss",1}
        };
        volume = "1.58";
        range = 50;
        rangecurve[] = {{0,1},{50,0}};
    };
    class SiP_ooga_Horn_distance_soundshader
    {
        samples[] = 
        {
            {"\WW2\SPE_Assets_s\Vehicles\Trucks_s\Opelblitz\Opelblitz_Horn.wss",1}
        };
        volume = "0.5";
        range = 200;
        rangecurve[] = {{0,0},{50,1},{200,0}};
    };
};

class cfgsoundsets
{
    class vn_m113horn_soundset;
    
    class SiP_Light_Horn_soundset: vn_m113horn_soundset
    {
        soundshaders[] = {"SiP_Light_Horn_soundshader","SiP_Light_Horn_distance_soundshader"};
    };

    class SiP_Medium_Horn_soundset: vn_m113horn_soundset
    {
        soundshaders[] = {"SiP_Medium_Horn_soundshader","SiP_Medium_Horn_distance_soundshader"};
    };

    class SiP_Heavy_Horn_soundset: vn_m113horn_soundset
    {
        soundshaders[] = {"SiP_Heavy_Horn_soundshader","SiP_Heavy_Horn_distance_soundshader"};
    };

    class SiP_ooga_Horn_soundset: vn_m113horn_soundset
    {
        soundshaders[] = {"SiP_ooga_Horn_soundshader","SiP_ooga_Horn_distance_soundshader"};
    };
};

class CfgWeapons
{
    class vn_m113_horn;
    class TruckHorn;
        
    class SiP_Light_Horn_weapon: vn_m113_horn
    {
        sounds[] = {"SiP_Light_Horn"};
        class SiP_Light_Horn
        {
            soundsetshot[] = {"SiP_Light_Horn_soundset"};
            reloadTime = 6;
        };
        multiplier = 0;
    };

    class SiP_Medium_Horn_weapon: SiP_Light_Horn_weapon
    {
        sounds[] = {"SiP_Medium_Horn"};
        class SiP_Medium_Horn
        {
            soundsetshot[] = {"SiP_Medium_Horn_soundset"};
            reloadTime = 6;
        };
    };

    class SiP_Heavy_Horn_weapon: SiP_Light_Horn_weapon
    {
        sounds[] = {"SiP_Heavy_Horn"};
        class SiP_Heavy_Horn
        {
            soundsetshot[] = {"SiP_Heavy_Horn_soundset"};
            reloadTime = 6;
        };
    };

    class SiP_ooga_horn_weapon: SiP_Light_Horn_weapon
    {
        sounds[] = {"SiP_ooga_Horn"};
        class SiP_ooga_Horn
        {
            soundsetshot[] = {"SiP_ooga_Horn_soundset"};
            reloadTime = 6;
        };
    };
};