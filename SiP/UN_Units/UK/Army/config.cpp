class cfgPatches
{
    class SiP_Patch_uk_units
    {
        Name = "Suicide Is Painless - Korean War Mod - UK Units";
        Author = "Letlev";
        requiredAddons[] = {};
        units[] = {};
        weapons[] = {};
    };
};

class CfgUnitInsignia
{
    class SiP_Patch_27th_Infantry_Brigade
    {
        author = "Letlev";
        displayName = "27th Infantry Brigade";
        texture = "\SiP\Addons\sip_uk_army_units\27IB\patches\27IN_Brig_ca.paa";
    };

    class SiP_Patch_Royal_Aussie_Regiment: SiP_Patch_27th_Infantry_Brigade
    {
        displayName = "Royal Austrailian Regiment";
        texture = "\SiP\Addons\sip_uk_army_units\3RAR\patches\rar_patch_ca.paa";
    };

    class SiP_Patch_Commonwealth_division: SiP_Patch_27th_Infantry_Brigade
    {
        displayName = "Commonwealth";
        texture = "\SiP\Addons\sip_uk_army_units\3RAR\patches\commonwealth_patch_ca.paa";
    };
    
    class SiP_Patch_Canada_patch: SiP_Patch_27th_Infantry_Brigade
    {
        displayName = "Canada";
        texture = "\SiP\Addons\sip_uk_army_units\25IB\patches\Canada_patch_ca.paa";
    };
};