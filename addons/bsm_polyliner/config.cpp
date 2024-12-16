// PREFIX = bsm_polyliner

// #include "\bsm_chest_phone\data\gui\defines.hpp"
// #include "\bsm_polyliner\data\gui\Polyliner.hpp"

class CfgPatches
{
	class Broken_Skull_Polyliner
	{
		author = "Broken Skull Mods™";
		name = "BSM - Drawing Saver";
		units[]={ };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={ };
	};
};


// bs_hider
class CfgFunctions {
	class SpecOps {
		class Polyliner {
			file = "\bsm_polyliner\functions\polyliner";
			class hideOutsideCoverMap { postInit = 1; };
			class generatePolylines { };
			class coverMapModuleTrigger {};
		};
	};
};

// class bsm_chest_phone_dt {
// 	class bsm_app_polyliner_tool {
// 		name = "Polyliner Tool";
// 		icon = "\bsm_polyliner\data\icons\icon_app_bsm_polyliner.paa";
// 		dialog = "BSM_Polyliner_Tool";
// 	};
// };

class CfgVehicles {
	class ModuleCoverMap_F;
    class BSM_CoverMapModule_F : ModuleCoverMap_F {

        scope = 2;
		functionPriority = 1;
		isGlobal = 1;						// 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isTriggerActivated = 1;				// 1 for module waiting until all synced triggers are activated
		isDisposable = 0;					// 1 if modules is to be disabled once it is activated (i.e. repeated trigger activation will not work)
		curatorCanAttach = 0;				// 1 to allow Zeus to attach the module to an entity
		is3DEN = 0;							// 1 to run init function in Eden Editor as well

		displayName = "Cover Map (Hider)";
		function = "SpecOps_fnc_coverMapModuleTrigger";	// Name of function triggered once conditions are met
    };
};

