
class CfgPatches
{
	class bsm_so_anim_ctrl
	{
		author = "Broken Skull Mods";
        name = "BSM - Roleplay Mastery";
		units[]={ };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={
			"TFT_MARKERS_N_ICONS",
			"bsm_so_main", "ace_main", "cba_main" 
		};
	};
};

class CfgFunctions {
	class SpecOps {
		class Animation_Controller {
			file = "bsm_so_anim_ctrl\functions";
            class AnimCtrlInitializeActions { postInit = 1; };
			class AnimCtrlHostageExecutioner { postInit = 1; };
			class AnimCtrlRegisterAnimation { };
		};
	};
};

class Extended_PreInit_EventHandlers {
    class bsm_so_anim_ctrl {
        init = "[] call compile preprocessFileLineNumbers 'bsm_so_anim_ctrl\cba_setting_editor.sqf';";
    };
};			


