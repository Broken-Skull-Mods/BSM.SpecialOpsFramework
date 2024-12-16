class CfgPatches
{
	class bsm_so_zeus
	{
		author = "Broken Skull Mods";
		units[]={ };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={ "TFT_MARKERS_N_ICONS",  "bsm_so_audio", "ace_main", "cba_main" };
	};
};

class CfgFunctions {
	class SpecOps {
		class Zeus_Log_Module {
			file = "bsm_so_zeus\functions";
            class zeusLogEvent { };
			class zeusPushMessage {};
            class zeusLogStart { postInit = 1; };
			class updateZeusCurator { };
			class zeusLogPrint {};
		};
		class Zeus_Refresher {
			file = "bsm_so_zeus\functions";
			class updateZeusCurator { };
            class zeusInit { postInit = 1; };
		};
		class Zeus_Lockdown {
			file = "bsm_so_zeus\functions";
			class lockdownBuildingModule { };
		};
	};
};


class CfgVehicles {
	class Module_F;
	#include "\bsm_so_zeus\modules\bsm_so_zeus_log_module.hpp"
	#include "\bsm_so_zeus\modules\bsm_so_zeus_lockdown_module.hpp"
};
