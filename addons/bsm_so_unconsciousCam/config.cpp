class CfgPatches
{
	class bsm_so_unconsciousCam
	{
		author = "BSM - Uncounscious Cam";
		units[]={ };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={ "bsm_so_main", "ace_main", "cba_main"  };
	};
};

class Extended_PreInit_EventHandlers {
    class bsm_so_unconsciousCam {
        init = "[] call compile preprocessFileLineNumbers '\bsm_so_unconsciousCam\addon_settings.sqf';";
    };
};		

class CfgFunctions {
	class SpecOps {
		class UncounsciousCam {
			file = "\bsm_so_unconsciousCam\functions";
            class systemRespawnScreenInit { postInit = 1; };
		}
	};
};
