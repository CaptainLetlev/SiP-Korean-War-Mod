class cfgPatches
{
	class SiP_Patch_Communist_artillery
	{
		Name = "Suicide Is Painless - Korean War Mod - Communist Artillary";
		addonRootClass = "SiP_Patch_Communist_vehicles";
		requiredAddons[] = 
		{
			"A3_Weapons_F",
            "A3_Data_F"
		};
		units[] = {};
		weapons[] = {};
	};
};

class cfgVehicles
{
    class LandVehicle;
    class StaticWeapon: LandVehicle
    {
        class Turrets
        {
            class MainTurret;
        };
    };
    class StaticCannon: StaticWeapon
    {
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                class ViewOptics;
            };
        };
    };

    class SiP_howitzer_base: StaticCannon
    {
        scope = 0;
        vehicleClass = "Static";
        editorSubcategory = "EdSubcat_Artillery";
        availableForSupportTypes[] = {"Artillery"};
        unitInfoType = "RscUnitInfoArtillery";
        bounding = "usti hlavne";
        canUseScanners = 1;
        artilleryScanner = 1;
        laserScanner = 0;
        htMin = 1;
        htMax = 480;
        afMax = 0;
        mfMax = 0;
        mFact = 1;
        tBody = 450;
        threat[] = {1,0.3,0.3};
        cost = 350000;
        armor = 150;
        armorStructural = 3;
        getInAction = "GetInLow";
        getOutAction = "GetOutLow";
        getInRadius = 5;
        memoryPointsGetInGunner = "pos_gunner";
        memoryPointsGetInGunnerDir = "pos_gunner_dir";
        memoryPointsGetInCargo = "pos_cargo";
        memoryPointsGetInCargoDir = "pos_cargo_dir";
        cargoAction[] = {};
        ForceHideGunner = 0;
        fireDustEffect = "FDustEffects";
        nameSound = "veh_static_s";
        gunnerHasFlares = 1;
        hideWeaponsCargo = 1;
        reloadMagazineSound[] = {"",0.0316228,1,40};
        ejectDeadCargo = 0;
        attenuationeffecttype = "jsrs_OpenCar_Attenuation";
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                memoryPointsGetInGunner = "pos_gunner";
                memoryPointsGetInGunnerDir = "pos_gunner_dir";
                gunnerOpticsEffect[] = {"OpticsCHAbera1","OpticsBlur2"};
                gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                gunnerFireAlsoInInternalCamera = 1;
                animationSourceCamElev = "camElev";
                turretInfoType = "RscWeaponRangeArtilleryAuto";
                elevationMode = 3;
                memoryPointGunnerOptics = "computer";
                memoryPointGunnerOutOptics = "gunnerview";
                cameraDir = "look";
                initCamElev = 0;
                minCamElev = -35;
                maxCamElev = 65;
                gunnerForceOptics = 0;
                visionMode[] = {};
                hasGunner = 1;
                castGunnerShadow = 1;
                ejectDeadGunner = 0;
                initElev = 0;
                minElev = -5;
                maxElev = 80;
                initTurn = 0;
                minTurn = -180;
                maxTurn = 180;
                maxHorizontalRotSpeed = 0.85;
                maxVerticalRotSpeed = 0.85;
                soundServo[] = {"",0.00316228,1};
                gunnerAction = "";
                gunnerRightHandAnimName = "";
                gunnerLeftHandAnimName = "";
                class ViewOptics: ViewOptics
                {
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    initFov = 0.174;
                    minFov = 0.0077778;
                    maxFov = 0.14;
                    visionMode[] = {"Normal"};
                    turretInfoType = "RscWeaponRangeArtillery";
                };
                class ViewGunner
                {
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -120;
                    maxAngleY = 120;
                    initFov = 0.7;
                    minFov = 0.25;
                    maxFov = 1.1;
                    turretInfoType = "RscWeaponRangeArtillery";
                };
                class Hitpoints{};
            };
        };
        transportSoldier = 2;
        slingLoadCargoMemoryPoints[] = {"slingLoadCargo1","slingLoadCargo2","slingLoadCargo3"};
        wheelDamageThreshold = 0.7;
        wheelDestroyThreshold = 0.99;
        wheelDamageRadiusCoef = 0.95;
        wheelDestroyRadiusCoef = 0.45;
        class EventHandlers;
    };
};