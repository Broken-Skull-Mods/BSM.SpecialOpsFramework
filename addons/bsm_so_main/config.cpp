

class CfgPatches
{
	class bsm_so_main
	{
		author = "Broken Skull Mods™";
		name = "BSM - Core";
		units[]={ };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"cba_main", "ace_main", "TFT_MARKERS_N_ICONS"  };
	};
};

class CfgFactionClasses {
    class NO_CATEGORY;
    class SpecOps_Modules: NO_CATEGORY {
        displayName = "Spec-Ops Framework";
    };
};

class CfgFunctions {
	class SpecOps {
		class Core_Mission_Helper {
			file = "bsm_so_main\functions\mission_helper";
			class missionMonitorUnitDeath { };
			class missionMonitorGetUnitDeath { };
			class missionActivateTriggerWhenVisited {};
			class missionSuicideArea {};
			class missionAllowOnDeathCount {};
			class missionDeleteOnDeathCount {};
			class missionArtilleryConstantFire {};
			class missionArtilleryShootAtTarget {};
			class missionCheckIntel {};
			class missionGetIntel {};
			class missionTriggerVisitCondition {};
			class missionCheckVisited {};
			class missionReinforcementAttack {};
		}
		class Core_Common {
			file = "bsm_so_main\functions\common";
            class commonGetRandomFace {};
            class commonGetRandomVoice {};
            class commonExtractUnitGearnStuff { };
			class commonSleepFPSBased {};
			class commonEdenConditionalAttribute{};
			class commonRelPosObject {};
			class commonGetRelPosRotObject {};
			class commonInitialUnitFaction {};
			class commonHideInSingleplayer {};
			class commonUnitSetLoadout {};
			class commonSwapTexture {};
			class commonSafeHashValue {};
			class getEnemyVehicle { };
			class getRelatedPosition {};
			class a3AmbientAnimCombat {};
			class commonRelToWorldPosition{};

		};
		class Deployment_GUI {
			file = "\bsm_so_main\functions\orka_gui";
			class systemRespawnOpenUI {};
			class orkaUIRespawnButtonDeploy {};
			class orkaUIRespawnOnLoadList {};
			class orkaUIRespawnOnLoadBase {};
			class orkaUIRespawnOnLoadCornerIcon {};
			class orkaUIRespawnOnLoadPage {};
			class orkaUIRespawnOnUnLoadPage {};
			class systemRespawnUpdatePositions {};
            class uiTdaButtonExit {};
		};
	};
};


