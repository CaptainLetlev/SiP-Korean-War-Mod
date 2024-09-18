class cfgPatches
{
    class SiP_Patch_deployables
    {
        addonRootClass = "SiP_Patch_un_weapons";
        requiredAddons[] = 
        {
            "weapons_f_vietnam",
            "weapons_f_vietnam_c",
            "weapons_f_vietnam_02",
            "weapons_f_vietnam_02_c",
            "weapons_f_vietnam_03",
            "weapons_f_vietnam_03_c",
            "sounds_f_vietnam_c",
            "sounds_f_vietnam_02_c",
            "sounds_f_vietnam_03_c",
            "sounds_f_vietnam_04_c",
            "vn_weapons"
        };
        units[] = 
        {
            "SiP_m2_tripod",

            "SiP_vickers_tripod",

            "SiP_M2_60mm_baseplate",

            "SiP_M1_81mm_baseplate",
            
            "SiP_M1_107mm_mortar_baseplate"
        };
        weapons[] = 
        {
            "SiP_m1919a4_carry",
            "SiP_vickers_carry",

            "SiP_M2_Tripod_carry",
            "SiP_vickers_Tripod_carry",

            "SiP_M2_60mm_tube_carry",
            "SiP_M1_81mm_tube_carry",
            "SiP_M2_107mm_tube_carry",

            "SiP_M2_60mm_baseplate_carry",
            "SiP_M1_81mm_baseplate_carry",
            "SiP_M2_107mm_mortar_baseplate_carry"
        };
    };
};

class cfgWeapons
{
    class ace_csw_m3CarryTripodLow;
    class ace_csw_carryMortarBaseplate;
    class ace_compat_sog_m1919a4_carry;
    class ace_compat_sog_mortar_m2_carry;
    class ace_compat_sog_mortar_m29_carry;

    //MG Gun Carry
    class SiP_m1919a4_carry: ace_compat_sog_m1919a4_carry
    {
        author = "Letlev";
        displayName = "MG Browning M1919A4";
        picture = "\WW2\Assets_t\Weapons\Equipment_t\Weapons\MachineGun_Light\Gear_M1919A4_X_ca.paa";
        model = "fow\fow_weapons\m1919\m1919a4";
        selectionFireAnim = "muzzleFlash";
        class ACE_CSW
        {
            type = "weapon";
            deployTime = 1;
            pickupTime = 1;
            class assembleTo
            {
                SiP_m2_tripod = "SiP_m1919a4_low";
            };
        };
    };
    class SiP_vickers_carry: SiP_m1919a4_carry
    {
        displayName = "MG Vickers";
        picture = "NORTH\NF_Static\Maxim\data\ui\maxim_gun_ui.paa";
        model = "NORTH\NF_Static\Maxim\bags\Maxim_Gun_launcher.p3d";
        selectionFireAnim = "";
        class ACE_CSW
        {
            type = "weapon";
            deployTime = 1;
            pickupTime = 1;
            class assembleTo
            {
                SiP_vickers_tripod = "SiP_vickers_uk";
            };
        };
    };
    
    //MG Tripod Carry
    class SiP_M2_Tripod_carry: ace_csw_m3CarryTripodLow
    {
        author = "Letlev";
        displayName = "MG M2 Tripod";
        model = "\WW2\Assets_m\Vehicles\StaticWeapons_m\WW2_M2_tripod_disasm.p3d";
        picture = "\WW2\Assets_t\Weapons\Equipment_t\Weapons\Launchers\Gear_M2_tripod_X_ca.paa";
        class ace_csw
        {
            type = "mount";
            deployTime = 2;
            pickupTime = 2;
            deploy = "SiP_m2_tripod";
        };
    };
    class SiP_vickers_Tripod_carry: SiP_M2_Tripod_carry
    {
        displayName = "MG Vickers Tripod";
        model = "NORTH\NF_Static\50krh38\bags\50krh38_Tripod_launcher.p3d";
        class ace_csw
        {
            type = "mount";
            deployTime = 2;
            pickupTime = 2;
            deploy = "SiP_vickers_tripod";
        };
    };
    
    //Mortar Tube Carry
    class SiP_M2_60mm_tube_carry: ace_compat_sog_mortar_m2_carry
    {
        author = "Letlev";
        displayName = "Mortar Tube M2 60mm";
        model = "\WW2\Assets_m\Weapons\Mortars_m\WW2_M2_br.p3d";
        picture = "\WW2\Assets_t\Weapons\Equipment_t\Weapons\Launchers\Gear_M2_60_Barrel_X_ca.paa";
        hiddenSelections[] = {"camo_0"};
        hiddenSelectionsTextures[] = {"ww2\assets_t\weapons\mortars_t\ww2_m2\m2_co.paa"};
        class ACE_CSW
        {
            type = "weapon";
            deployTime = 2;
            pickupTime = 3;
            class assembleTo
            {
                SiP_M2_60mm_baseplate = "SiP_m2_60mm_mortar";
            };
        };
    };
    class SiP_M1_81mm_tube_carry: ace_compat_sog_mortar_m29_carry
    {
        displayName = "Mortar Tube M1 81mm";
        author = "Letlev";
        scope = 2;
		picture = "\WW2\SPE_Assets_t\Weapons\Equipment_t\Weapons\Launchers\Gear_M1_81_Barrel_X_ca.paa";
        model = "\WW2\SPE_Assets_m\Weapons\Mortars_m\SPE_M1_Mortar_Tube.p3d";
		hiddenSelections[] = {"camo_0"};
		hiddenSelectionsTextures[] = {"ww2\spe_assets_t\weapons\mortars_t\m1_mortar\m1_mortar_co.paa"};
        class ACE_CSW
        {
            type = "weapon";
            deployTime = 5;
            pickupTime = 5;
            class assembleTo
            {
                SiP_M1_81mm_baseplate = "SiP_m1_81mm_mortar";
            };
        };
    };
    class SiP_M2_107mm_tube_carry: ace_compat_sog_mortar_m29_carry
    {
        displayName = "Mortar Tube M2 107mm";
        author = "Letlev";
        scope = 2;
        picture = "\WW2\Assets_t\Weapons\Equipment_t\Weapons\Launchers\Gear_BM37_Barrel_X_ca.paa";
        model = "\WW2\Assets_m\Weapons\Mortars_m\IF_Bm37_BR.p3d";
        hiddenSelections[] = {"camo_0"};
        hiddenSelectionsTextures[] = {"WW2\Assets_t\Weapons\Mortars_t\IF_Bm37\Bm37.paa"};
        class ACE_CSW
        {
            type = "weapon";
            deployTime = 5;
            pickupTime = 5;
            class assembleTo
            {
                SiP_M2_107mm_mortar_baseplate = "SiP_M2_107mm_mortar";
            };
        };
    };
    
    //Mortar Baseplate Carry
    class SiP_M2_60mm_baseplate_carry: ace_csw_carryMortarBaseplate
    {
        author = "Letlev";
        displayName = "Mortar Baseplate M2 60mm";
        picture = "\WW2\Assets_t\Weapons\Equipment_t\Weapons\Launchers\Gear_M2_60_Tripod_X_ca.paa";
        model = "\WW2\Assets_m\Weapons\Mortars_m\WW2_M2_bp.p3d";
        hiddenSelections[] = {"camo_0"};
        hiddenSelectionsTextures[] = {"ww2\assets_t\weapons\mortars_t\ww2_m2\m2_co.paa"};
        class ace_csw
        {
            type = "mount";
            deployTime = 1;
            pickupTime = 3;
            deploy = "SiP_M2_60mm_baseplate";
        };
    };
    class SiP_M1_81mm_baseplate_carry: ace_csw_carryMortarBaseplate
    {
        author = "Letlev";
        displayName = "Mortar Baseplate M1 81mm";
        model = "NORTH\NF_Static\81krh32\bags\81krh32_Tripod_launcher.p3d";
        picture = "\SiP\UN_Weapons\Deployables\data\UI\m1_81mm_baseplate_ui_ca.paa";
        class ace_csw
        {
            type = "mount";
            deployTime = 1;
            pickupTime = 3;
            deploy = "SiP_M1_81mm_baseplate";
        };
    };
    class SiP_M2_107mm_mortar_baseplate_carry: ace_csw_carryMortarBaseplate
    {
        author = "Letlev";
        displayName = "Mortar Baseplate 107mm";
        picture = "\WW2\SPE_Assets_t\Weapons\Equipment_t\Weapons\Launchers\Gear_MLE_27_31_Stand_X_ca.paa";
        model = "\WW2\SPE_Assets_m\Weapons\Mortars_m\SPE_M1_Mortar_Stand.p3d";
        hiddenSelections[] = {"camo_0"};
        hiddenSelectionsTextures[] = {"ww2\spe_assets_t\weapons\mortars_t\m1_mortar\Brandt_81mm_Mortar_French_co.paa"};
        class ace_csw
        {
            type = "mount";
            deployTime = 1;
            pickupTime = 3;
            deploy = "SiP_M2_107mm_mortar_baseplate";
        };
    };
};

class cfgVehicles
{
    class ace_csw_m3Tripod;
    class ace_csw_mortarBaseplate;

    class SiP_M2_tripod: ace_csw_m3Tripod
    {
        author = "Letlev";
        displayName = "M2 Tripod (Deployed)";
        model = "\WW2\Assets_m\Vehicles\StaticWeapons_m\WW2_M2_tripod_low.p3d";
        hiddenSelections[] = {"camo_0","camo_1"};
        hiddenSelectionsTextures[] = {"ww2\assets_t\weapons\machinegun_light_t\ww2_m1919\m1919_co.paa","ww2\assets_t\weapons\machinegun_light_t\ww2_m1919\m2_tripod_co.paa"};
        class ace_csw
        {
            disassembleTo = "SiP_M2_Tripod_carry";
        };
    };
    class SiP_vickers_tripod: ace_csw_m3Tripod
    {
        author = "Letlev";
        displayName = "Vickers Tripod (Deployed)";
        model = "\north\nf_static\maxim\maxim_tripod.p3d";
        class ace_csw
        {
            disassembleTo = "SiP_vickers_Tripod_carry";
        };
    };
    
    class SiP_M2_60mm_baseplate: ace_csw_mortarBaseplate
    {
        author = "Letlev";
        displayName = "M2 60mm Baseplate (Deployed)";
        picture = "\WW2\Assets_t\Weapons\Equipment_t\Weapons\Launchers\Gear_M2_Tripod_X_ca.paa";
        model = "\WW2\Assets_m\Weapons\Mortars_m\WW2_M2_Disas.p3d";
        hiddenSelections[] = {"camo_0"};
        hiddenSelectionsTextures[] = {"ww2\assets_t\weapons\mortars_t\ww2_m2\m2_co.paa"};
        class ace_csw
        {
            disassembleTo = "SiP_M2_60mm_baseplate_carry";
        };
    };
    class SiP_M1_81mm_baseplate: ace_csw_mortarBaseplate
    {
        author = "Letlev";
        displayName = "M1 81mm Mortar Baseplate (Deployed)";
        model = "\WW2\SPE_Assets_m\Weapons\Mortars_m\SPE_M1_Mortar_Stand_Deployed.p3d";
        hiddenSelections[] = {"camo_0"};
        hiddenSelectionsTextures[] = {"ww2\spe_assets_t\weapons\mortars_t\m1_mortar\m1_mortar_co.paa"};
        class ace_csw
        {
            disassembleTo = "SiP_M1_81mm_baseplate_carry";
        };
    };
    class SiP_M2_107mm_mortar_baseplate: ace_csw_mortarBaseplate
    {
        author = "Letlev";
        displayName = "Heavy Mortar Baseplate (Deployed)";
        model = "\WW2\SPE_Assets_m\Weapons\Mortars_m\SPE_M1_Mortar_Stand_Deployed.p3d";
        hiddenSelections[] = {"camo_0","camo_1"};
        hiddenSelectionsTextures[] = {"ww2\spe_assets_t\weapons\mortars_t\m1_mortar\Brandt_81mm_Mortar_French_co.paa","WW2\SPE_Assets_t\Weapons\Mortars_t\M1_Mortar\Brandt_81mm_Sight_French_co.paa"};
        class ace_csw
        {
            disassembleTo = "SiP_M2_107mm_mortar_baseplate_carry";
        };
    };
};