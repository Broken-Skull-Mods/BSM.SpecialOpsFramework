


class CfgPatches
{
	class bsm_so_dev_dressupBuildings
	{
		author = "Broken Skull Mods™";
		name = "BSM DEV - Building Dress";
		units[]={ };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={ "bsm_so_main", "bsm_so_layout_system" };
	};
};

class CfgFunctions {
	class SpecOps {
		class BuildingDressupDevelopment {
			file = "\bsm_so_generators\data\dressupBuilding\functions";
            class createBuildingGarrisonLayoutFromTrigger { };
            class compileBuildingGarrisonLayoutsFromTriggers { };
			class 3denCopyPosition {};
			class 3denPastePosition {};
			class compileGetSimilarBuildings {};
			class 3denSwapPosition {};
			class 3denCopyMissingBuildings {};
			class 3denSortAndGroup{};
			class 3denSortAndGroupAll{};
			class 3denCleanEmptyLayers{};
			// class 3denUpdateUnitPosition {};
		};
	};
};



// class Cfg3DEN
// {
// 	class EventHandlers
// 	{
// 		class bsm_so_du
// 		{
// 			onMissionLoad = "[] call SpecOps_fnc_3denUpdateUnitPosition;";
//             onMissionSave = "[] call SpecOps_fnc_3denUpdateUnitPosition;";
//             onPaste = "[] call SpecOps_fnc_3denUpdateUnitPosition;";
// 		};
// 	};
// };

#define SHOW_IN_ROOT value = 0
class ctrlMenu;
class ctrlMenuStrip;
class Display3DEN
{
  class ContextMenu: ctrlMenu
  {
    class Items
    {
		items[] += {
			"Separator",
			"BSM_EDEN_DressUp"
		};
		class BSM_EDEN_DressUp
		{
			text = "BSM";
			items[] += {
				"BSM_EDEN_SwapPosition",
				"BSM_EDEN_CopyCurrentPosition",
				"BSM_EDEN_PastePosition",
				"Separator",
				"BSM_EDEN_ArrangeBuildingLayers",
				"BSM_EDEN_ArrangeBuildingLayersAll",
			};
			SHOW_IN_ROOT;
		};

		class BSM_EDEN_Layouts
		{
			text = "BSM - Layouts";
			items[] += {
				"BSM_EDEN_ArrangeBuildingLayers",
				"Separator",
				"BSM_EDEN_ArrangeBuildingLayersAll",
			};
			SHOW_IN_ROOT;
		};
		class BSM_EDEN_CopyCurrentPosition {
			action = "call SpecOps_fnc_3denCopyPosition;";
			text = "Pos + Rot (Copy)";
			conditionShow = "selectedObject + selectedWaypoint + selectedLogic";
		};
		class BSM_EDEN_PastePosition {
			action = "call SpecOps_fnc_3denPastePosition;";
			text = "Pos + Rot (Paste)";
			conditionShow = "selectedObject + selectedWaypoint + selectedLogic";
		};

		class BSM_EDEN_SwapPosition {
			action = "call SpecOps_fnc_3denSwapPosition;";
			text = "Swap Positions";
			conditionShow = "selectedObject + selectedWaypoint + selectedLogic";
		};

		class BSM_EDEN_ArrangeBuildingLayers {
			action = "[(get3DENSelected 'trigger')] call SpecOps_fnc_3denSortAndGroupAll;";
			text = "Arrange Selected Trigger Layers";
			conditionShow = "selectedTrigger";
		};

		class BSM_EDEN_ArrangeBuildingLayersAll {
			action = "[] call SpecOps_fnc_3denSortAndGroupAll;";
			text = "Arrange ALL Trigger Layers (Slow)";
			conditionShow = "1";
		};
    };
  };
};