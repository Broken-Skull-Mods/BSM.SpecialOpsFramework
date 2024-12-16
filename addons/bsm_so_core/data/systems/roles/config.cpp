
class CfgPatches
{
	class bsm_so_sys_zeus
	{
        name = "Special Ops Framework - Roles";
		author = "Broken Skull Mods";
		units[]={ };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={
		};
	};
};

class CfgFunctions {
	class SpecOps {
		class Roles {
			file = "bsm_so_core\data\systems\roles\functions";
            // class roleInit { init = 1; };
		}
	};
};
