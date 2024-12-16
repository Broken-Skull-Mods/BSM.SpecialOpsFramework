// PREFIX: bsm_so_sim_modules
class CfgPatches
{
	class bsm_so_sim_modules
	{
		author = "Broken Skull Mods™";
		name = "Special Ops Framework - Simulation Modules";
		units[]={ };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={
		};
	};
};

class CfgFunctions {
	class SpecOps {
		class Audio_System {
			file = "bsm_so_sim_modules\functions";

		}
	};
};


class CfgVehicles {
    class Module_F;

    class SpecOps_Sim_Dynamic: Module_F {
        scope = 2;
        displayName = "Spec-Ops Dynamic Simulation";
		icon = "\tftm\icons\circle_cage.paa";	// Map icon. Delete this entry to use the default icon.
		category = "SpecOps_Modules";

		isTriggerActivated = 0;				// 1 for module waiting until all synced triggers are activated
		isGlobal = 1;						// 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isDisposable = 0;					// 1 if modules is to be disabled once it is activated (i.e. repeated trigger activation will not work)
		curatorCanAttach = 0;				// 1 to allow Zeus to attach the module to an entity
		canSetArea = 0;						// Allows for setting the area values in the Attributes menu in 3DEN
		canSetAreaShape = 0;				// Allows for setting "Rectangle" or "Ellipse" in Attributes menu in 3DEN
		canSetAreaHeight = 0;				// Allows 1for setting height or Z value in Attributes menu in 3DEN
        is3DEN = 0;							// 1 to run init function in Eden Editor as well
		class EventHandlers {
			init = "[(_this select 0)] call SpecOps_fnc_SimDynamicInititalize;";
		};
    };
    
   

};

