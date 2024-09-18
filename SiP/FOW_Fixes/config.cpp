class cfgPatches
{
    class SiP_Patch_FOW_Fixes
    {
        Name = "Suicide is Painless - Faces of War Fixes";
        Author = "Letlev";
        requiredAddons[] = {"cba_xeh","WW2_SPE_Assets_c_Vehicles_StaticWeapons_c","WW2_Assets_c_Vehicles_StaticWeapons_c","fow_cannons_c"};
        units[] = {};
        weapons[] = {};
    };
};

class CfgVehicles
{
	class All;
	class AllVehicles: All
	{
		class ViewOptics;
		class NewTurret
		{
			class ViewGunner;
		};
	};
	class Land: AllVehicles{};
	class LandVehicle: Land
	{
		class ViewPilot;
		class CommanderOptics;
	};
	class StaticWeapon: LandVehicle
	{
		class NewTurret;
		class Turrets
		{
			class MainTurret;
			class CommanderOptics: CommanderOptics{};
			class ViewOptics: ViewOptics{};
		};
	};
	class StaticCannon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
};