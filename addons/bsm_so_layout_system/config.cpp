class CfgPatches
{
	class bsm_so_layout_system
	{
		author = "Broken Skull Mods™";
		name = "BSM - Layout System";
		units[]={ };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={ "bsm_so_main", "ace_main", "cba_main"  };
	};
};
class Extended_PreInit_EventHandlers {
    class bsm_so_layout_system {
        init = "[] call compile preprocessFileLineNumbers 'bsm_so_layout_system\addon_settings.sqf';";
    };
};		
class CfgFunctions {
	class SpecOps {
        class Layout_Module_AO {
			file = "bsm_so_layout_system\functions";
            class aoModuleActivate { };
            class aoModuleDeactivate { };
            class aoModuleInitialize { };
            class aoModuleGeneratingBuildings { };
            class aoBuildingModuleInitialize { };
			class startPatroling {};
			class reinforcementAttack {};
            class aoAssignUnitOptions { };
            class aoSelfTriggerCondition { };
            class aoUnitSetupBehavior {};
            class aoSetupFullUnit {};
            class aoDeathBuildingHandler { postInit = 1; };
            class aoSpawnCivilianPatrol {};
            class aoSpawnEnemyPatrol {};
        };

        class Layout_SpecOpsEventModules {
			file = "bsm_so_layout_system\functions";
            class intelModuleTrigger { };
        };

		class Layout_Core {
			file = "bsm_so_layout_system\functions";
            class 3denHighlightBuildings {};
            class 3denExtractSpawnCodeForMissingBuildings {};
            class 3denSpawnBuildingFromTypes {};
            class 3denGetBannedBuildings {};
            class dressupBuildingModuleActivate { };
            class dressupBuildingModuleInitialize { };
            class dressupBuildingModuleDeactivate { };
            class dressUpBuildingApplyFurnitures { };
            class dressUpBuildingGetBuildingLayouts { };
            class dressUpBuildingGetBuildingSection { };
            class dressUpBuildingApplyIntel {};
            class dressUpBuildingSpawnEnemy {};
            class dressUpEnemyUpdateFixedPosition {};
            class dressUpDefineBuildingLayout {};
            class dressupBuildingModulePostInitialize { };
            class dressUpCompileAttributes { };
            class dressUpSetupGarrisonUnit { };
            class dressUpPredefineAllBuildingLayouts { preInit = 1; };
            class initializeMissionEntityListener { preInit = 1; };
            class dressUpSetIdentity {};
            class 3denOnEntityAttributeChange {};
            class 3denOnMissionLoad {};
            class compileKnownBuildings {};
            class copyMapObjects {};
            class dressUpIntelAction { postInit = 1; };
            class getWorldTiles { };
			class dressUpSetupWorld { preInit = 1; };
			class getWorldReferenceBuilding { };
		}
	};
};



class SpecOps_Module_OPFOR_Factions { 
	class Nil { name = "No Selection"; value = nil; };

};
class SpecOps_Module_BLUFOR_Factions {
	class Nil { name = "No Selection"; value = nil; };
 };
class SpecOps_Module_GRE_Factions {
	class Nil { name = "No Selection"; value = nil; };

 };
class SpecOps_Module_CIV_Factions { 
	class Nil { name = "No Selection"; value = nil; };

};
class SpecOps_Attribute_Social_Event { 
	class Nil { name = "No Selection"; value = nil; };
};
class CfgVehicles {
    class Module_F;
    #include "\bsm_so_layout_system\modules\ao.hpp"
    #include "\bsm_so_layout_system\modules\ao_building.hpp"
    #include "\bsm_so_layout_system\modules\social_event.hpp"
};


class Cfg3DEN
{
	class EventHandlers
	{
		class bsm_so_du
		{
			onMissionLoad = "[] call SpecOps_fnc_3denOnMissionLoad;";
            onMissionSave = "[] call SpecOps_fnc_3denOnMissionLoad;";
            onPaste = "[] call SpecOps_fnc_3denOnMissionLoad;";
		};
	};
    class Object
    {
        class AttributeCategories
        {
            class SpecOps_UnitRole
            {
                collapsed = 1;
				displayName = "Spec-Ops (Unit)";
                class Attributes {
					class WarningModule2
					{
						displayName = "Enabling Spec-Ops";
						data = "AttributeSystemSubcategory";
						control = "SubCategoryDesc2";
						description = "This is mandatory to setup a unit with constraints! CTRL+S to see stance of unit based on setup.";
					};

					class SpecOps_EnableGarrisonSystem
					{
						unique = 0; 
						displayName = "Enable Spec-Ops?";
						tooltip = "True to enable the Spec-Ops system on this unit.";
						property = "SpecOps_EnableGarrisonSystem";
						control = "Checkbox";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = false;
						typeName = "BOOL"; 
					};


					class TFT_CanProne
					{
						unique = 0; 
						displayName = "Can Prone?";
						tooltip = "True if unit can be proning";
						property = "TFT_CanProne";
						control = "Checkbox";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = false;
						typeName = "BOOL"; 
					};

					class TFT_CanCrouch
					{
						unique = 0; 
						displayName = "Can Crouch?";
						tooltip = "Can the unit crouch?";
						property = "TFT_CanCrouch";
						control = "Checkbox";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = false;
						typeName = "BOOL"; 
					};

					class TFT_CanStand
					{
						unique = 0; 
						displayName = "Can Stand?";
						tooltip = "Can unit stand?";
						property = "TFT_CanStand";
						control = "Checkbox";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = false;
						typeName = "BOOL"; 
					};

					class TFT_CanMove
					{
						unique = 0; 
						displayName = "Can Move Around?";
						tooltip = "True if unit is able to move around";
						property = "TFT_CanMove";
						control = "Checkbox";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = true;
						typeName = "BOOL"; 
					};

					class bsm_so_can_unlock_stance
					{
						unique = 0; 
						displayName = "Can Break Out?";
						tooltip = "This feature is to restore unit movement and remove stance animation if possible when enemy shooting at the unit close range... be careful garrison or unit too close to wall may be allowed to walk through when too close must be tested.";
						property = "bsm_so_can_unlock_stance";
						control = "Checkbox";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = false;
						typeName = "BOOL"; 
					};

					class WarningModule3
					{
						displayName = "Stance Warning";
						data = "AttributeSystemSubcategory";
						control = "SubCategoryDesc2";
						description = "The rotation MUST BE disable for setting up stance on unit.";
					};

					class TFT_CanMoveFixed
					{
						unique = 0; 
						displayName = "Disable Rotation?";
						tooltip = "When this is true the Can Move will be set to false.";
						property = "TFT_CanMoveFixed";
						control = "Checkbox";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = false;
						typeName = "BOOL"; 
					};

					class TFT_FixedAnimation
					{
						unique = 0; 
						displayName = "Fixed Animation";
						tooltip = "Set a animation for the AI, only use if AI has Fixed Position.";
						property = "TFT_FixedAnimation";
						control = "combo";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = "";
						validate = "none";
						typeName = "STRING";
						class Values 
						{
							class none { name = "Unspecified"; value = ""; };
							class AadjPpneMstpSrasWrflDdown { name = "Prone (Face Down Stance)"; value = "AadjPpneMstpSrasWrflDdown"; };
							class AadjPpneMstpSrasWrflDleft { name = "Prone (Left Stance)"; value = "AadjPpneMstpSrasWrflDleft"; };
							class AadjPpneMstpSrasWrflDright { name = "Prone (Right Stance)"; value = "AadjPpneMstpSrasWrflDright"; };
							class AadjPpneMstpSrasWrflDup { name = "Prone (Sit Stance)"; value = "AadjPpneMstpSrasWrflDup"; };
							
							class AadjPknlMstpSrasWrflDdown { name = "Crouch (Down Stance)"; value = "AadjPknlMstpSrasWrflDdown"; };
							class AadjPknlMstpSrasWrflDleft { name = "Crouch (Left Stance)"; value = "AadjPknlMstpSrasWrflDleft"; };
							class AadjPknlMstpSrasWrflDright { name = "Crouch (Right Stance)"; value = "AadjPknlMstpSrasWrflDright"; };
							class AadjPknlMstpSrasWrflDup { name = "Crouch (Up Stance)"; value = "AadjPknlMstpSrasWrflDup"; };

							class AadjPercMstpSrasWrflDdown { name = "Stand (Down Stance)"; value = "AadjPercMstpSrasWrflDdown"; };
							class AadjPercMstpSrasWrflDleft { name = "Stand (Left Stance)"; value = "AadjPercMstpSrasWrflDleft"; };
							class AadjPercMstpSrasWrflDright { name = "Stand (Right Stance)"; value = "AadjPercMstpSrasWrflDright"; };
							class AadjPercMstpSrasWrflDup { name = "Stand (Up Stance)"; value = "AadjPercMstpSrasWrflDup"; };
						};
					};

					class WarningModule4
					{
						displayName = "Ambient";
						data = "AttributeSystemSubcategory";
						control = "SubCategoryDesc2";
						description = "Rotation MUST BE ENABLED for the following setting to work.";
					};

					class SpecOps_AmbientCanStand
					{
						unique = 0; 
						displayName = "Ambient Standing?";
						tooltip = "True if unit should be standing at ease in animation.";
						property = "SpecOps_AmbientCanStand";
						control = "Checkbox";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = false;
						typeName = "BOOL"; 
					};

					class SpecOps_AmbientCanSitLow
					{
						unique = 0; 
						displayName = "Ambient Sitdown?";
						tooltip = "True if unit should be shitdown at ease in animation (MUST BE ABLE TO ROTATE OR MOVE).";
						property = "SpecOps_AmbientCanSitLow";
						control = "Checkbox";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = false;
						typeName = "BOOL"; 
					};

					class SpecOps_AmbientCanKneel
					{
						unique = 0; 
						displayName = "Ambient Kneel?";
						tooltip = "True if unit should be Kneel at ease in animation (MUST BE ABLE TO ROTATE OR MOVE).";
						property = "SpecOps_AmbientCanKneel";
						control = "Checkbox";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = false;
						typeName = "BOOL"; 
					};

					class SpecOps_AmbientCanWatch
					{
						unique = 0; 
						displayName = "Ambient Watch (Standing)?";
						tooltip = "True if unit should be watch at ease in animation (MUST BE ABLE TO ROTATE OR MOVE).";
						property = "SpecOps_AmbientCanWatch";
						control = "Checkbox";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = false;
						typeName = "BOOL"; 
					};
                };
            };
        };
    };

};
