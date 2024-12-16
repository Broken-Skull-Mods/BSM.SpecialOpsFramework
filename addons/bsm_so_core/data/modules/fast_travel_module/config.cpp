
class CfgPatches
{
	class bsm_so_fast_travel_module
	{
		author = "Broken Skull Mods";
		units[]={ };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={
		};
	};
};

// Import App
#include "\bsm_chest_phone\data\gui\defines.hpp"
#include "\bsm_chest_phone\data\gui\Tablet_Base.hpp"
#include "\bsm_so_core\data\modules\fast_travel_module\gui\fast_travel.hpp"

class CfgFunctions {
	class SpecOps {
		class Fast_Travel_Module {
			file = "bsm_so_core\data\modules\fast_travel_module\functions";
            class initFastTravelAppRegister { postInit = 1;  };
            class fastTravelLocation { };
		}
	};
};

class CfgVehicles {
	class Module_F;
    class bsm_so_fast_travel_module_a : Module_F {
        scope = 2;
        displayName = "Spec-Ops (Fast Travel)";
		icon = "\tftm\icons\air_man.paa";
		category = "SpecOps_Modules";
		function = "SpecOps_fnc_fastTravelLocation";	// Name of function triggered once conditions are met
		functionPriority = 2;				// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		isTriggerActivated = 0;				// 1 for module waiting until all synced triggers are activated
		isGlobal = 1;						// 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isDisposable = 0;					// 1 if modules is to be disabled once it is activated (i.e. repeated trigger activation will not work)
		curatorCanAttach = 0;				// 1 to allow Zeus to attach the module to an entity
		canSetArea = 0;						// Allows for setting the area values in the Attributes menu in 3DEN
		canSetAreaShape = 0;				// Allows for setting "Rectangle" or "Ellipse" in Attributes menu in 3DEN
		canSetAreaHeight = 0;				// Allows 1for setting height or Z value in Attributes menu in 3DEN
        is3DEN = 0;							// 1 to run init function in Eden Editor as well
        class Attributes {
            class SpecOps_NameOfLocation {
                unique = 0; 
				displayName = "Location Name";
				tooltip = "Location name for the UI.";
				property = "SpecOps_NameOfLocation";
                control = "Edit";
                expression = "_this setVariable ['%s', _value, true];";
                defaultValue = "Undefined";
                typeName = "STRING"; 
            };
            
            class SpecOps_AllowRespawn {
                unique = 0; 
				displayName = "Allow to Set as Respawn?";
				tooltip = "Can Vehicles Fast Travel there?";
				property = "SpecOps_AllowRespawn";
                control = "Checkbox";
                expression = "_this setVariable ['%s', _value, true];";
                defaultValue = false;
                typeName = "BOOL"; 
            };

            class SpecOps_CanVehicleFastTravel {
                unique = 0; 
				displayName = "Allow Vehicle?";
				tooltip = "Can Vehicles Fast Travel there?";
				property = "SpecOps_CanVehicleFastTravel";
                control = "Checkbox";
                expression = "_this setVariable ['%s', _value, true];";
                defaultValue = false;
                typeName = "BOOL"; 
            };
        };
    };
};
