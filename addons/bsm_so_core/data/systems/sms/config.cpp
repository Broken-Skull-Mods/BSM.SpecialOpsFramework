
class CfgPatches
{
	class bsm_so_sys_sms
	{
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
		class System_SMS {
			file = "bsm_so_core\data\systems\sms\functions";
            class systemNewSMSMessage { };
			class systemSMSMessageSent { };
		}
	};
};

