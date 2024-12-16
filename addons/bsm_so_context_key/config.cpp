class CfgPatches
{
	class bsm_so_context_key
	{
		author = "Broken Skull Mods™";
		name = "BSM - Context Key";
		units[]={ };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={  "bsm_so_main", "bsm_so_audio", "ace_main", "cba_main" };
	};
};

class CfgFunctions {
	class SpecOps {
		class ContextKey {
			file = "bsm_so_context_key\functions";
            class contextKeyInit { postInit = 1; };
            class keybindCommandYouAlive { };
            class keybindCommandEscort { };
            class keybindCommandSurrender { };
            class keybindCommandDrag { };
            class setSurrender { };

		}
	};
};