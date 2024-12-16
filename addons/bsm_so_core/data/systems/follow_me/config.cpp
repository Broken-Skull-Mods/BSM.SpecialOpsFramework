
class CfgPatches
{
	class bsm_so_sys_follow_me
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
		class System_FollowMe {
			file = "\bsm_so_core\data\systems\follow_me\functions";
            class commonFollowMeStopFollowing { };
            class commonFollowMeSetup { };
            class commonFollowMeHoldActionVehicle { };
            class commonFollowMeEscortAIVehicle { };
            class commonFollowMeStartFollowing { };
            class commonFollowMeUpdateMove { };
            class commonFollowMeLoadInVehicle { };
            class commonFollowMeAddAction { postInit = 1; };
			class commonLoadInVehicleAddAction { postInit = 1; };
		}
	};
};
