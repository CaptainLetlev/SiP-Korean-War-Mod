class cfgPatches
{
    class SiP_Patch_uk_backpacks
    {
        Name = "Suicide Is Painless - Korean War Mod - BCFK Backpacks";
        addonRootClass = "SiP_UN_Gear_Patch";
        requiredAddons[] = 
        {
            "characters_f_vietnam_03_c",
            "SiP_Patch_us_backpacks"
        };
        units[] = 
        {
            "SiP_bcfk_37_backpack",

            "SiP_bcfk_37_backpack_tommy",
            "SiP_bcfk_37_backpack_sten",
            "SiP_bcfk_37_backpack_grease",
            "SiP_bcfk_37_backpack_sten2",
            "SiP_bcfk_37_backpack_bren",
            "SiP_bcfk_37_backpack_medic",

            "SiP_bcfk_44_backpack",
            "SiP_bcfk_44_backpack_etool",

            "SiP_bcfk_44_backpack_tommy",
            "SiP_bcfk_44_backpack_sten",
            "SiP_bcfk_44_backpack_grease",
            "SiP_bcfk_44_backpack_sten2",
            "SiP_bcfk_44_backpack_bren",
            "SiP_bcfk_44_backpack_medic",
            
            "SiP_bcfk_m1945_packboard_piat",

            "SiP_SCR300_radio_uk"
        };
        weapons[] = {};
    };
};

class cfgVehicles
{
    class vn_b_pack_p08_01;
    class vn_b_pack_p44_01;
    class vn_b_pack_p44_02;

    class SiP_m1945_packboard_m9bazooka;
    class SiP_SCR300_radio_pack;

    class SiP_bcfk_37_backpack: vn_b_pack_p08_01
    {
        scope = 2;
        scopeArsenal = 2;
        author = "Letlev";
        displayName = "[BCFK] Pattern '37 Pack";
        hiddenSelectionsTextures[] = 
        {
            "SiP\Addons\sip_uk_army_gear\Backpacks\data\textures\backpack_p37_co.paa"
        };
        class TransportMagazines
        {
            class _xx_fow_e_no36mk1
            {
                magazine = "fow_e_no36mk1";
                count = 4;
            };
        };
    };
    
    class SiP_bcfk_37_backpack_tommy: SiP_bcfk_37_backpack
    {
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_fow_e_no36mk1
            {
                magazine = "fow_e_no36mk1";
                count = 4;
            };
            class _xx_vn_m1a1_30_mag
            {
                magazine = "vn_m1a1_30_mag";
                count = 5;
            };
        };
    };
    class SiP_bcfk_37_backpack_sten: SiP_bcfk_37_backpack_tommy
    {
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_fow_e_no36mk1
            {
                magazine = "fow_e_no36mk1";
                count = 4;
            };
            class _xx_vn_sten_mag
            {
                magazine = "vn_sten_mag";
                count = 5;
            };
        };
    };
    class SiP_bcfk_37_backpack_grease: SiP_bcfk_37_backpack_sten
    {
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_fow_e_no36mk1
            {
                magazine = "fow_e_no36mk1";
                count = 4;
            };
            class _xx_vn_sten_mag
            {
                magazine = "vn_m3a1_mag";
                count = 5;
            };
        };
    };
    class SiP_bcfk_37_backpack_sten2: SiP_bcfk_37_backpack_sten
    {
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_fow_e_no36mk1
            {
                magazine = "fow_e_no36mk1";
                count = 4;
            };
            class _xx_vn_sten_mag
            {
                magazine = "vn_sten_mag";
                count = 10;
            };
        };
    };
    class SiP_bcfk_37_backpack_bren: SiP_bcfk_37_backpack_tommy
    {
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_fow_e_no36mk1
            {
                magazine = "fow_e_no36mk1";
                count = 2;
            };
            class _xx_SPE_30Rnd_770x56
            {
                magazine = "SPE_30Rnd_770x56";
                count = 5;
            };
        };
    };
    class SiP_bcfk_37_backpack_medic: SiP_bcfk_37_backpack_tommy
    {
        class TransportItems
        {
            class _xx_SiP_ACE_Items_morphine
            {
                magazine = "SiP_ACE_Items_morphine";
                count = 20;
            };
            class _xx_SiP_ACE_Items_splint
            {
                magazine = "SiP_ACE_Items_splint";
                count = 20;
            };
            class _xx_SiP_ACE_Items_surgicalKit
            {
                magazine = "SiP_ACE_Items_surgicalKit";
                count = 1;
            };
        };
    };

    class SiP_bcfk_44_backpack: vn_b_pack_p44_01
    {
        scope = 2;
        scopeArsenal = 2;
        author = "Letlev";
        displayName = "[BCFK] Pattern '44 Pack";
        class TransportMagazines
        {
            class _xx_fow_e_no36mk1
            {
                magazine = "fow_e_no36mk1";
                count = 4;
            };
        };
    };
    class SiP_bcfk_44_backpack_etool: vn_b_pack_p44_02
    {
        scope = 2;
        scopeArsenal = 2;
        author = "Letlev";
        displayName = "[BCFK] Pattern '44 Pack (E-Tool)";
        class TransportMagazines
        {
            class _xx_fow_e_no36mk1
            {
                magazine = "fow_e_no36mk1";
                count = 4;
            };
        };
    };
    
    class SiP_bcfk_44_backpack_tommy: SiP_bcfk_44_backpack
    {
        scope = 1;
        scopeArsenal = 1;
        class TransportMagazines
        {
            class _xx_fow_e_no36mk1
            {
                magazine = "fow_e_no36mk1";
                count = 4;
            };
            class _xx_vn_m1a1_30_mag
            {
                magazine = "vn_m1a1_30_mag";
                count = 5;
            };
        };
    };
    class SiP_bcfk_44_backpack_sten: SiP_bcfk_44_backpack_tommy
    {
        class TransportMagazines
        {
            class _xx_fow_e_no36mk1
            {
                magazine = "fow_e_no36mk1";
                count = 4;
            };
            class _xx_vn_sten_mag
            {
                magazine = "vn_sten_mag";
                count = 5;
            };
        };
    };
    class SiP_bcfk_44_backpack_grease: SiP_bcfk_44_backpack_sten
    {
        class TransportMagazines
        {
            class _xx_fow_e_no36mk1
            {
                magazine = "fow_e_no36mk1";
                count = 4;
            };
            class _xx_vn_sten_mag
            {
                magazine = "vn_m3a1_mag";
                count = 5;
            };
        };
    };
    class SiP_bcfk_44_backpack_sten2: SiP_bcfk_44_backpack_sten
    {
        class TransportMagazines
        {
            class _xx_fow_e_no36mk1
            {
                magazine = "fow_e_no36mk1";
                count = 4;
            };
            class _xx_vn_sten_mag
            {
                magazine = "vn_sten_mag";
                count = 10;
            };
        };
    };
    class SiP_bcfk_44_backpack_bren: SiP_bcfk_44_backpack_tommy
    {
        class TransportMagazines
        {
            class _xx_fow_e_no36mk1
            {
                magazine = "fow_e_no36mk1";
                count = 2;
            };
            class _xx_SPE_30Rnd_770x56
            {
                magazine = "SPE_30Rnd_770x56";
                count = 5;
            };
        };
    };
    class SiP_bcfk_44_backpack_medic: SiP_bcfk_44_backpack_tommy
    {
        class TransportItems
        {
            class _xx_SiP_ACE_Items_morphine
            {
                magazine = "SiP_ACE_Items_morphine";
                count = 20;
            };
            class _xx_SiP_ACE_Items_splint
            {
                magazine = "SiP_ACE_Items_splint";
                count = 20;
            };
            class _xx_SiP_ACE_Items_surgicalKit
            {
                magazine = "SiP_ACE_Items_surgicalKit";
                count = 1;
            };
        };
    };

    class SiP_bcfk_m1945_packboard_piat: SiP_m1945_packboard_m9bazooka
    {
        scope = 1;
        scopeArsenal = 1;
        class TransportMagazines
        {
            class _xx_LIB_1Rnd_89m_PIAT
            {
                magazine = "LIB_1Rnd_89m_PIAT";
                count = 4;
            };
            class _xx_vn_sten_mag
            {
                magazine = "vn_sten_mag";
                count = 2;
            };
        };
    };
    
    class SiP_SCR300_radio_uk: SiP_SCR300_radio_pack
    {
        scope = 1;
        scopeArsenal = 1;
        class TransportMagazines
        {
            class _xx_fow_e_no36mk1
            {
                magazine = "fow_e_no36mk1";
                count = 4;
            };
        };
    };
};

class XtdGearInfos
{
    class CfgVehicles
    {
        class SiP_bcfk_44_backpack
        {
            model = "B_hssn_SiP_BCFK_P44_Backpack";
            variant = "SiP_bcfk_44_backpack";
        };
        class SiP_bcfk_44_backpack_etool
        {
            model = "B_hssn_SiP_BCFK_P44_Backpack";
            variant = "SiP_bcfk_44_backpack_etool";
        };
    };
};	

class XtdGearModels
{
    class CfgVehicles 
    {		
        class B_hssn_SiP_BCFK_P44_Backpack
        {
            label = "";
            author = "Letlev";
            options[]=
            {
                "variant"
            };
            class variant
            {
                label = "Variant";
                values[]=
                {
                    "SiP_bcfk_44_backpack",
                    "SiP_bcfk_44_backpack_etool"
                };
                class SiP_bcfk_44_backpack
                {
                    label = "Standard";
                };
                class SiP_bcfk_44_backpack_etool
                {
                    label = "E-Tool";
                };
            };	
        };
    };
};