// PREFIX = bsm_so_core


class CfgPatches
{
	class tft_spec_ops_editor
	{
		author = "Broken Skull Mods™";
		name = "Special Ops Framework - Core";
		units[]={ };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={
			"A3_Data_F_Enoch"
		};
	};
};

class CfgFunctions {
	class SpecOps {
		class Category {
			file = "bsm_so_core\functions";
			#include "\bsm_so_core\functions\functions_a3.hpp"
			#include "\bsm_so_core\functions\functions_common.hpp"
			#include "\bsm_so_core\functions\functions_server.hpp"
			#include "\bsm_so_core\functions\functions_ui.hpp"
		}
	};
};


class Extended_PreInit_EventHandlers
{
    class ADDON
    {
        init = "[] call compile preprocessFileLineNumbers 'bsm_so_core\cba_setting_editor.sqf';";
    };
};				




class SpecOpsUnitTranslation {
	#include "\bsm_so_core\config_unit_translation.hpp"
};

class SpecOpsBuildingDressUp {
	#include "\bsm_so_core\building_dressup_compiled.hpp"
};



class CfgFactionClasses {
    class NO_CATEGORY;
    class TFTE_SpecOp_Category: NO_CATEGORY {
        displayName = "TFT - Spec-Op (System)";
    };

    class TFTE_SpecOp_Mission: NO_CATEGORY {
        displayName = "TFT - Spec-Op (Missions)";
    };
};

class CfgEditorCategories
{
	class TFTE_Category
	{
		displayName = "Special Ops Framework";
		priority = 1;
		side = 1;
	};
};

class CfgEditorSubcategories
{
	class TFTE_SpecialOps
	{
		displayName = "Special Ops (System)";
	};

	class TFTE_SpecialOpsCasualties
	{
		displayName = "Special Ops (Casualties)";
	};

	class TFTE_SpecialOpsOthers
	{
		displayName = "Special Ops (Other)";
	};
};




class CfgVehicles
{
	class Thing;

	class nonStrategic;

	class Strategic;
	class TFT_Land_Laptop_Closed_F: nonStrategic
	{
		scope=2;
		scopeCurator=2;
		displayName="Laptop (Closed)";
		model="\A3\Structures_F\Items\Electronics\Laptop_F.p3d";
		picture="\UMI_Electronics\Icons\Laptop_Closed_CA.paa";
		editorCategory="TFTE_Category";
		editorSubcategory="TFTE_SpecialOpsOthers";
	};
	class TFT_Land_Laptop_Opened_F: nonStrategic
	{
		scope=2;
		scopeCurator=2;
		displayName="Laptop (Open)";
		model="\A3\Structures_F\Items\Electronics\Laptop_unfolded_F.p3d";
		picture="\UMI_Electronics\Icons\Laptop_Open_CA.paa";
		editorCategory="TFTE_Category";
		editorSubcategory="TFTE_SpecialOpsOthers";
	};
	class TFT_Land_Rugged_Tablet_F: nonStrategic
	{
		scope=2;
		scopeCurator=2;
		displayName="Rugged Tablet";
		model="\A3\Props_F_Exp_A\Military\Equipment\Tablet_02_F.p3d";
		picture="\UMI_Electronics\Icons\Tablet_Rugged_F_CA.paa";
		editorCategory="TFTE_Category";
		editorSubcategory="TFTE_SpecialOpsOthers";
	};

	#include "static_ace_points\config.hpp"
	#include "config_ace_points.hpp"


	class TFT_Arsenal_1: Thing
	{
		scope=2;
		scopeCurator=2;
		curatorCanAttach = 1;				// 1 to allow Zeus to attach the module to an entity
		displayName="Arsenal";
		model="\A3\weapons_f\ammoboxes\supplydrop.p3d";
		editorCategory="TFTE_Category";
		editorSubcategory="TFTE_SpecialOpsOthers";
	};

	class TFT_Arsenal_2: Thing
	{
		scope=2;
		scopeCurator=2;
		curatorCanAttach = 1;				// 1 to allow Zeus to attach the module to an entity
		displayName="Arsenal (Camo)";
		model="\a3\weapons_f_bootcamp\ammoboxes\ammobox_02_f.p3d";
		editorCategory="TFTE_Category";
		editorSubcategory="TFTE_SpecialOpsOthers";
	};



	class Land_Bodybag_01_blue_F;
	class Land_Bodybag_01_white_F;
	class Land_Bodybag_01_black_F;

	class TFT_CASUALTY_BLUE: Land_Bodybag_01_blue_F { 
		displayName = "Body Bag (Blue)";
		icon="\tftm\markers\hospital_cross.paa";
		editorCategory = "TFTE_Category";
		editorSubcategory = "TFTE_SpecialOpsCasualties";
	};
	
	class TFT_CASUALTY_BLACK: Land_Bodybag_01_white_F {
		displayName = "Body Bag (Black)";
		icon="\tftm\markers\hospital_cross.paa";
		editorCategory = "TFTE_Category";
		editorSubcategory = "TFTE_SpecialOpsCasualties";	
	};

	class TFT_CASUALTY_WHITE: Land_Bodybag_01_black_F {
		displayName = "Body Bag (White)";
		icon="\tftm\markers\hospital_cross.paa";
		editorCategory = "TFTE_Category";
		editorSubcategory = "TFTE_SpecialOpsCasualties";		
	};

	class Logic;
	class Module_F : Logic
	{
		class AttributesBase
		{
			class Default;
			class Edit;					// Default edit box (i.e. text input field)
			class Combo;				// Default combo box (i.e. drop-down menu)
			class Checkbox;				// Default checkbox (returned value is Boolean)
			class CheckboxNumber;		// Default checkbox (returned value is Number)
			class ModuleDescription;	// Module description
			class Units;				// Selection of units on which the module is applied
		};

		// Description base classes (for more information see below):
		class ModuleDescription
		{
			class AnyBrain;
		};
	};

	class Land_HelipadCivil_F;
	class TFT_Helipad_Extract : Land_HelipadCivil_F {};

	class TFT_Module : Module_F {

	};

	class TFT_Module_Define_Mission : TFT_Module {
				
		class Attributes
		{
			
			class TFT_OpName
			{
				unique = 0; 
				displayName = "Operation Name";
				tooltip = "The official operation name.";
				property = "TFT_OpName";
				control = "Edit";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = nil;
				validate = "none";
				typeName = "STRING"; 
			};
			class TFT_OpBriefing_Audio
			{
				unique = 0; 
				displayName = "Operation Briefing (Audio)";
				tooltip = "The official operation breifing.";
				property = "TFT_OpBriefing_Audio";
				control = "EditArray";
				expression = "_this setVariable ['%s', _value, true];";
				validate = "none";
			};

			class TFT_OpBriefing_Audio_Failure
			{
				unique = 0; 
				displayName = "Operation Audio (Failure)";
				tooltip = "The official operation breifing.";
				property = "TFT_OpBriefing_Audio_Failure";
				control = "EditArray";
				expression = "_this setVariable ['%s', _value, true];";
				validate = "none";
			};

			class TFT_OpBriefing_Audio_Success
			{
				unique = 0; 
				displayName = "Operation Audio (Success)";
				tooltip = "The official operation breifing.";
				property = "TFT_OpBriefing_Audio_Success";
				control = "EditArray";
				expression = "_this setVariable ['%s', _value, true];";
				validate = "none";
			};
			class TFT_OpBriefing
			{
				unique = 0; 
				displayName = "Operation Briefing";
				tooltip = "The official operation breifing.";
				property = "TFT_OpBriefing";
				control = "EditMulti5";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = nil;
				validate = "none";
				typeName = "STRING"; 
			};

			class TFT_IsSubGroupedMission
			{
				unique = 0; 
				displayName = "Is Mission SubGroup ?";
				tooltip = "True if this is a set of missions known as operation";
				property = "TFT_IsSubGroupedMission";
				control = "Checkbox";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = true;
				typeName = "BOOL"; 
			};

			class TFT_IsOperationConditional
			{
				unique = 0; 
				displayName = "Is Conditional Op ?";
				tooltip = "True if operation is conditional to the success or failure of another op.";
				property = "TFT_IsOperationConditional";
				control = "Checkbox";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = true;
				typeName = "BOOL"; 
			};
			
			class TFT_UnlockOnSuccess
			{
				unique = 0; 
				displayName = "Unlock Operations (On Success)";
				tooltip = "Array of operation that will be accessible when this mission is completed.";
				property = "TFT_UnlockOnSuccess";
				control = "EditArray";
				expression = "_this setVariable ['%s', _value, true];";
			};
			
			class TFT_UnlockOnFailure
			{
				unique = 0; 
				displayName = "Unlock Operations (On Failure)";
				tooltip = "Array of operation that will be accessible when this mission is failure.";
				property = "TFT_UnlockOnFailure";
				control = "EditArray";
				expression = "_this setVariable ['%s', _value, true];";
			};


			class TFT_Budget_Selection
			{
				unique = 0; 
				displayName = "Operation Budget";
				tooltip = "Choose a budget which will be charged for support, vehicle, arsenal.";
				property = "TFT_Budget_Selection";
				control = "combo";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = -1;
				validate = "none";
				typeName = "NUMBER";
				class Values 
				{
					class Level1 { name = "5,000$ (Very Low)"; value = 1; };
					class Level2 { name = "10,000$ (Very Low)"; value = 10; };
					class Level3 { name = "20,000$ (Very Low)"; value = 20; };
					class Level4 { name = "30,000$ (Very Low)"; value = 30; };
					class Level5 { name = "40,000$ (Very Low)"; value = 40; };
					class Level6 { name = "50,000$ (Low)"; value = 50; };
					class Level7 { name = "60,000$ (Low)"; value = 60; };
					class Level8 { name = "70,000$ (Low)"; value = 70; };
					class Level9 { name = "80,000$ (Low)"; value = 80; };
					class Level10 { name = "90,000$ (Low)"; value = 90; };
					class Level11 { name = "100,000$"; value = 100; };
					class Level12 { name = "200,000$"; value = 200; };
					class Level13 { name = "300,000$"; value = 300; };
					class Level14 { name = "400,000$"; value = 400; };
					class Level15 { name = "500,000$ (High)"; value = 500; };
					class Level16 { name = "600,000$ (High)"; value = 600; };
					class Level17 { name = "700,000$ (High)"; value = 700; };
					class Level18 { name = "800,000$ (High)"; value = 800; };
					class Level19 { name = "900,000$ (High)"; value = 900; };
					class Level20 { name = "1,000,000$ (High)"; value = 1000; };
					class Level21 { name = "2,000,000$ (High)"; value = 2000; };
					class Level22 { name = "3,000,000$ (Very High)"; value = 3000; };
					class Level23 { name = "4,000,000$ (Very High)"; value = 4000; };
					class Level24 { name = "5,000,000$ (Very High)"; value = 5000; };
					class Level25 { name = "6,000,000$ (Very High)"; value = 6000; };
					class Level26 { name = "7,000,000$ (Very High)"; value = 7000; };
					class Level27 { name = "8,000,000$ (Very High)"; value = 8000; };
					class Level28 { name = "9,000,000$ (Very High)"; value = 9000; };
					class Level29 { name = "10,000,000$ (Set for Life)"; value = 10000; };
					class Level30 { name = "Unlimited"; value = -1; };
				};
			};

			class TFT_HasISR
			{
				unique = 0; 
				displayName = "has ISR Support?";
				tooltip = "True if ISR is available on this operation.";
				property = "TFT_HasISR";
				control = "Checkbox";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = false;
				typeName = "BOOL"; 
			};
		};
	};

	class TFT_Module_Mission : TFT_Module {	
		class Attributes
		{
			class TFT_ObjectiveDescriptionAudio {
				unique = 0; 
				displayName = "Objective Audio Breifing";
				tooltip = "Audio filename located inside /audio/.";
				property = "TFT_ObjectiveDescriptionAudio";
				control = "Edit";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = nil;
				validate = "none";
				typeName = "STRING"; 
			};
			
			class TFT_ObjectiveDescription {
				unique = 0; 
				displayName = "Objective Short Breifing";
				tooltip = "Max Casualties for team on this objective.";
				property = "TFT_ObjectiveDescription";
				control = "EditMulti3";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = nil;
				validate = "none";
				typeName = "STRING"; 
			};

			class TFT_ObjectiveMilCasualties {
				unique = 0; 
				displayName = "Max Teamate Casualities";
				tooltip = "Max Casualties for team on this objective.";
				property = "TFT_ObjectiveMilCasualties";
				control = "Edit";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = 100;
				validate = "none";
				typeName = "NUMBER"; 
			};

			class TFT_ObjectiveCivCasualties {
				unique = 0; 
				displayName = "Max Civilian Casualities";
				tooltip = "Max civilian casualties for this objective.";
				property = "TFT_ObjectiveCivCasualties";
				control = "Edit";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = 100;
				validate = "none";
				typeName = "NUMBER"; 
			};


			class TFT_NextMissionOnSuccess {
				unique = 0; 
				displayName = "Next Mission (Success)";
				tooltip = "Next Mission if successful.";
				property = "TFT_NextMissionOnSuccess";
				control = "Edit";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = nil;
				validate = "variable";
				typeName = "STRING"; 
			};

			class TFT_TransitOnSuccess {
				unique = 0; 
				displayName = "Transit (Success)";
				tooltip = "Transit/Phase between mission on success.";
				property = "TFT_TransitOnSuccess";
				control = "Edit";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = nil;
				validate = "variable";
				typeName = "STRING"; 
			};
			
			class TFT_NextMissionOnFailure {
				unique = 0; 
				displayName = "Next Mission (On Failure)";
				tooltip = "Next Mission if current mission is a failure.";
				property = "TFT_NextMissionOnFailure";
				control = "Edit";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = nil;
				validate = "variable";
				condition = "object";
				typeName = "STRING"; 
			};

			class TFT_TransitOnFailure {
				unique = 0; 
				displayName = "Transit (Failure)";
				tooltip = "Transit/Phase between mission on failure, fallback camp area.";
				property = "TFT_TransitOnFailure";
				control = "Edit";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = nil;
				validate = "variable";
				condition = "object";
				typeName = "STRING"; 
			};

			class TFT_MajorLandmark {
				unique = 0; 
				displayName = "Is Major Landmark?";
				tooltip = "Marjor landmarks are usually markers of major objective.";
				property = "TFT_MajorLandmark";
				control = "Checkbox";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = false;
				validate = "none";
			};

			class TFT_LandMarkCondition {
				unique = 0; 
				displayName = "Landmark Mission";
				tooltip = "Condition to show or hide a marker on mission success of failure.";
				property = "TFT_LandMarkCondition";
				control = "Edit";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = nil;
				validate = "variable";
				condition = "object";
				typeName = "STRING"; 
			};

			class TFT_LandMarkMissionSuccessOrFailure {
				unique = 0; 
				displayName = "On Landmark (Success/Failure)";
				tooltip = "If mission is failure or success.";
				property = "TFT_LandMarkMissionSuccessOrFailure";
				control = "combo";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = -1;
				validate = "none";
				typeName = "NUMBER";
				class Values 
				{

					class Success
					{
						name = "When Mission Success";
						value = 1;
					};

					class Failure
					{
						name = "When Mission Failure";
						value = -1;
					};
				};
			};

			class TFT_LandMarkEnableOrDisable
			{
				unique = 0; 
				displayName = "Landmark (Enable/Disable)";
				tooltip = "If mission is failure or success it will add or remove.";
				property = "TFT_LandMarkEnableOrDisable";
				control = "Checkbox";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = false;
				validate = "none";
			};
		};
	};


	class TFT_Module_Mission_Clear_City : TFT_Module {
		class Attributes
		{
			class TFT_ObjectiveDescriptionAudio
			{
				unique = 0; 
				displayName = "Objective Audio Breifing";
				tooltip = "Audio filename located inside /audio/.";
				property = "TFT_ObjectiveDescriptionAudio";
				control = "Edit";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = nil;
				validate = "none";
				typeName = "STRING"; 
			};
			
			class TFT_ObjectiveDescription
			{
				unique = 0; 
				displayName = "Objective Short Breifing";
				tooltip = "Max Casualties for team on this objective.";
				property = "TFT_ObjectiveDescription";
				control = "EditMulti3";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = nil;
				validate = "none";
				typeName = "STRING"; 
			};

			class TFT_ObjectiveMilCasualties
			{
				unique = 0; 
				displayName = "Max Teamate Casualities";
				tooltip = "Max Casualties for team on this objective.";
				property = "TFT_ObjectiveMilCasualties";
				control = "Edit";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = 100;
				validate = "none";
				typeName = "NUMBER"; 
			};

			class TFT_ObjectiveCivCasualties
			{
				unique = 0; 
				displayName = "Max Civilian Casualities";
				tooltip = "Max civilian casualties for this objective.";
				property = "TFT_ObjectiveCivCasualties";
				control = "Edit";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = 100;
				validate = "none";
				typeName = "NUMBER"; 
			};

			class TFT_ObjectiveCaptureHVT
			{
				unique = 0; 
				displayName = "Min Enemy Capture";
				tooltip = "Minimum Enemy required to be capture for a mission success.";
				property = "TFT_ObjectiveCaptureHVT";
				control = "Edit";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = 0;
				validate = "none";
				typeName = "NUMBER"; 
			};

			class TFT_ObjectiveCaptureHostages
			{
				unique = 0; 
				displayName = "Min Rescue Hostages";
				tooltip = "Minimum Hostages to be rescued.";
				property = "TFT_ObjectiveCaptureHostages";
				control = "Edit";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = 0;
				validate = "none";
				typeName = "NUMBER"; 
			};	
			class TFT_NextMissionOnSuccess
			{
				unique = 0; 
				displayName = "Next Mission (Success)";
				tooltip = "Next Mission if successful.";
				property = "TFT_NextMissionOnSuccess";
				control = "Edit";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = nil;
				validate = "variable";
				typeName = "STRING"; 
			};

			class TFT_TransitOnSuccess
			{
				unique = 0; 
				displayName = "Transit (Success)";
				tooltip = "Transit/Phase between mission on success.";
				property = "TFT_TransitOnSuccess";
				control = "Edit";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = nil;
				validate = "variable";
				typeName = "STRING"; 
			};
			
			class TFT_NextMissionOnFailure
			{
				unique = 0; 
				displayName = "Next Mission (On Failure)";
				tooltip = "Next Mission if current mission is a failure.";
				property = "TFT_NextMissionOnFailure";
				control = "Edit";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = nil;
				validate = "variable";
				condition = "object";
				typeName = "STRING"; 
			};

			class TFT_TransitOnFailure
			{
				unique = 0; 
				displayName = "Transit (Failure)";
				tooltip = "Transit/Phase between mission on failure, fallback camp area.";
				property = "TFT_TransitOnFailure";
				control = "Edit";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = nil;
				validate = "variable";
				condition = "object";
				typeName = "STRING"; 
			};

			class TFT_MajorLandmark
			{
				unique = 0; 
				displayName = "Is Major Landmark?";
				tooltip = "Marjor landmarks are usually markers of major objective.";
				property = "TFT_MajorLandmark";
				control = "Checkbox";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = false;
				validate = "none";
			};

			class TFT_LandMarkCondition
			{
				unique = 0; 
				displayName = "Landmark Mission";
				tooltip = "Condition to show or hide a marker on mission success of failure.";
				property = "TFT_LandMarkCondition";
				control = "Edit";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = nil;
				validate = "variable";
				condition = "object";
				typeName = "STRING"; 
			};

			class TFT_LandMarkMissionSuccessOrFailure
			{
				unique = 0; 
				displayName = "On Landmark (Success/Failure)";
				tooltip = "If mission is failure or success.";
				property = "TFT_LandMarkMissionSuccessOrFailure";
				control = "combo";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = -1;
				validate = "none";
				typeName = "NUMBER";
				class Values 
				{

					class Success
					{
						name = "When Mission Success";
						value = 1;
					};

					class Failure
					{
						name = "When Mission Failure";
						value = -1;
					};
				};
			};

			class TFT_LandMarkEnableOrDisable
			{
				unique = 0; 
				displayName = "Landmark (Enable/Disable)";
				tooltip = "If mission is failure or success it will add or remove.";
				property = "TFT_LandMarkEnableOrDisable";
				control = "Checkbox";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = false;
				validate = "none";
			};
		};
		
	};

	class TFTE_Town: nonStrategic
	{
		displayName = "Town Area";
		scope = 2;
		scopeCurator = 0;
		author = "Broken Skull Mods";
		icon="\tftm\markers\family_house.paa";
		editorCategory = "TFTE_Category";
		editorSubcategory = "TFTE_SpecialOps";
		vehicleClass = "Structures";
		keepHorizontalPlacement = 1;
	};

	class TFTE_Airport: nonStrategic
	{
		displayName = "Airport";
		scope = 2;
		scopeCurator = 0;
		author = "Broken Skull Mods";
		icon="\tftm\markers\commercial_airplane.paa";
		editorCategory = "TFTE_Category";
		editorSubcategory = "TFTE_SpecialOps";
		vehicleClass = "Structures";
		keepHorizontalPlacement = 1;
	};

	class TFTE_Village: nonStrategic
	{
		displayName = "Village Area";
		scope = 2;
		scopeCurator = 0;
		author = "Broken Skull Mods";
		icon="\tftm\markers\wood_cabin.paa";
		editorCategory = "TFTE_Category";
		editorSubcategory = "TFTE_SpecialOps";
		vehicleClass = "Structures";
		keepHorizontalPlacement = 1;
	};

	class TFTE_Camp: nonStrategic
	{
		displayName = "Camp Area";
		scope = 2;
		scopeCurator = 0;
		author = "Broken Skull Mods";
		icon="\tftm\markers\barracks_tent.paa";
		editorCategory = "TFTE_Category";
		editorSubcategory = "TFTE_SpecialOps";
		vehicleClass = "Structures";
		keepHorizontalPlacement = 1;
	};

	class TFTE_Comms: nonStrategic
	{
		displayName = "Comm Area";
		scope = 2;
		scopeCurator = 0;
		author = "Broken Skull Mods";
		icon="\tftm\markers\walkie_talkie.paa";
		editorCategory = "TFTE_Category";
		editorSubcategory = "TFTE_SpecialOps";
		vehicleClass = "Structures";
		keepHorizontalPlacement = 1;
	};	

	class TFTE_Resource: nonStrategic
	{
		displayName = "Resource Area";
		scope = 2;
		scopeCurator = 0;
		author = "Broken Skull Mods";
		icon="\tftm\markers\crystal_growth.paa";
		editorCategory = "TFTE_Category";
		editorSubcategory = "TFTE_SpecialOps";
		vehicleClass = "Structures";
		keepHorizontalPlacement = 1;
	};	

	class TFTE_AA: nonStrategic
	{
		displayName = "Anti-Air Area";
		scope = 2;
		scopeCurator = 0;
		author = "Broken Skull Mods";
		icon="\tftm\markers\missile_launcher.paa";
		editorCategory = "TFTE_Category";
		editorSubcategory = "TFTE_SpecialOps";
		vehicleClass = "Structures";
		keepHorizontalPlacement = 1;
	};	

	
	class TFTE_AMBUSH: nonStrategic
	{
		displayName = "Ambush Area";
		scope = 2;
		scopeCurator = 0;
		author = "Broken Skull Mods";
		icon="\tftm\markers\stop_sign.paa";
		editorCategory = "TFTE_Category";
		editorSubcategory = "TFTE_SpecialOps";
		vehicleClass = "Structures";
		keepHorizontalPlacement = 1;
	};	

	
	class TFTE_MissionClearBigtown: TFT_Module_Mission_Clear_City
	{
		// Standard object definitions:
		displayName = "BigTown (Clearing)";
		scope = 2;
		author = "Broken Skull Mods";
		icon="\tftm\icons\cross_mark.paa";
		category = "TFTE_SpecOp_Mission";
		isGlobal = 1;						// 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isTriggerActivated = 1;				// 1 for module waiting until all synced triggers are activated
		isDisposable = 0;
		is3DEN = 0;							// 1 to run init function in Eden Editor as well
		curatorCanAttach = 0;				// 1 to allow Zeus to attach the module to an entity
		// 3DEN Attributes Menu Options
		canSetArea = 0;						// Allows for setting the area values in the Attributes menu in 3DEN
		canSetAreaShape = 0;				// Allows for setting "Rectangle" or "Ellipse" in Attributes menu in 3DEN
	};

	class TFTE_MissionClearAirstrip: TFT_Module_Mission
	{
		// Standard object definitions:
		displayName = "Airport (Clearing)";
		scope = 2;
		author = "Broken Skull Mods";
		icon="\tftm\icons\commercial_airplane.paa";
		category = "TFTE_SpecOp_Mission";
		isGlobal = 1;						// 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isTriggerActivated = 1;				// 1 for module waiting until all synced triggers are activated
		isDisposable = 0;
		is3DEN = 0;							// 1 to run init function in Eden Editor as well
		curatorCanAttach = 0;				// 1 to allow Zeus to attach the module to an entity
		// 3DEN Attributes Menu Options
		canSetArea = 0;						// Allows for setting the area values in the Attributes menu in 3DEN
		canSetAreaShape = 0;				// Allows for setting "Rectangle" or "Ellipse" in Attributes menu in 3DEN
	};
	
	class TFTE_MissionClearSmallTown: TFT_Module_Mission_Clear_City
	{
		// Standard object definitions:
		displayName = "SmallTown (Clearing)";
		scope = 2;
		author = "Broken Skull Mods";
		icon="\tftm\icons\cross_mark.paa";
		category = "TFTE_SpecOp_Mission";
		isGlobal = 1;						// 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isTriggerActivated = 1;				// 1 for module waiting until all synced triggers are activated
		isDisposable = 0;
		is3DEN = 0;							// 1 to run init function in Eden Editor as well
		curatorCanAttach = 0;				// 1 to allow Zeus to attach the module to an entity
		// 3DEN Attributes Menu Options
		canSetArea = 0;						// Allows for setting the area values in the Attributes menu in 3DEN
		canSetAreaShape = 0;				// Allows for setting "Rectangle" or "Ellipse" in Attributes menu in 3DEN
	};
		
	class TFTE_MissionClearVillage: TFT_Module_Mission_Clear_City
	{
		// Standard object definitions:
		displayName = "Village (Clearing)";
		scope = 2;
		author = "Broken Skull Mods";
		icon="\tftm\icons\cross_mark.paa";
		category = "TFTE_SpecOp_Mission";
		isGlobal = 1;						// 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isTriggerActivated = 1;				// 1 for module waiting until all synced triggers are activated
		isDisposable = 0;
		is3DEN = 0;							// 1 to run init function in Eden Editor as well
		curatorCanAttach = 0;				// 1 to allow Zeus to attach the module to an entity
		// 3DEN Attributes Menu Options
		canSetArea = 0;						// Allows for setting the area values in the Attributes menu in 3DEN
		canSetAreaShape = 0;				// Allows for setting "Rectangle" or "Ellipse" in Attributes menu in 3DEN
	};

	class TFTE_MissionClearCamp: TFT_Module_Mission
	{
		// Standard object definitions:
		displayName = "Camp (Clearing)";
		scope = 2;
		author = "Broken Skull Mods";
		icon="\tftm\icons\cross_mark.paa";
		category = "TFTE_SpecOp_Mission";
		isGlobal = 1;						// 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isTriggerActivated = 1;				// 1 for module waiting until all synced triggers are activated
		isDisposable = 0;
		is3DEN = 0;							// 1 to run init function in Eden Editor as well
		curatorCanAttach = 0;				// 1 to allow Zeus to attach the module to an entity
		// 3DEN Attributes Menu Options
		canSetArea = 0;						// Allows for setting the area values in the Attributes menu in 3DEN
		canSetAreaShape = 0;				// Allows for setting "Rectangle" or "Ellipse" in Attributes menu in 3DEN
	};


	class TFTE_MissionSabotageComms: TFT_Module_Mission
	{
		// Standard object definitions:
		displayName = "Comms (Sabotage)";
		scope = 2;
		author = "Broken Skull Mods";
		icon="\tftm\icons\walkie_talkie.paa";
		category = "TFTE_SpecOp_Mission";
		isGlobal = 1;						// 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isTriggerActivated = 1;				// 1 for module waiting until all synced triggers are activated
		isDisposable = 0;
		is3DEN = 0;							// 1 to run init function in Eden Editor as well
		curatorCanAttach = 0;				// 1 to allow Zeus to attach the module to an entity
		// 3DEN Attributes Menu Options
		canSetArea = 0;						// Allows for setting the area values in the Attributes menu in 3DEN
		canSetAreaShape = 0;				// Allows for setting "Rectangle" or "Ellipse" in Attributes menu in 3DEN
	};

	class TFTE_MissionSabotageResources: TFT_Module_Mission
	{
		// Standard object definitions:
		displayName = "Resources (Sabotage)";
		scope = 2;
		author = "Broken Skull Mods";
		icon="\tftm\icons\crystal_growth.paa";
		category = "TFTE_SpecOp_Mission";
		isGlobal = 1;						// 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isTriggerActivated = 1;				// 1 for module waiting until all synced triggers are activated
		isDisposable = 0;
		is3DEN = 0;							// 1 to run init function in Eden Editor as well
		curatorCanAttach = 0;				// 1 to allow Zeus to attach the module to an entity
		// 3DEN Attributes Menu Options
		canSetArea = 0;						// Allows for setting the area values in the Attributes menu in 3DEN
		canSetAreaShape = 0;				// Allows for setting "Rectangle" or "Ellipse" in Attributes menu in 3DEN
	};

	class TFTE_MissionSabotageAirDefense: TFT_Module_Mission
	{
		// Standard object definitions:
		displayName = "Air Defense (Sabotage)";
		scope = 2;
		author = "Broken Skull Mods";
		icon="\tftm\icons\missile_launcher.paa";
		category = "TFTE_SpecOp_Mission";
		isGlobal = 1;						// 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isTriggerActivated = 1;				// 1 for module waiting until all synced triggers are activated
		isDisposable = 0;
		is3DEN = 0;							// 1 to run init function in Eden Editor as well
		curatorCanAttach = 0;				// 1 to allow Zeus to attach the module to an entity
		// 3DEN Attributes Menu Options
		canSetArea = 0;						// Allows for setting the area values in the Attributes menu in 3DEN
		canSetAreaShape = 0;				// Allows for setting "Rectangle" or "Ellipse" in Attributes menu in 3DEN
	};

	class TFTE_MissionAmbush: TFT_Module_Mission
	{
		// Standard object definitions:
		displayName = "Road Ambush (Ambush)";
		scope = 2;
		author = "Broken Skull Mods";
		icon="\tftm\icons\impact_point.paa";
		category = "TFTE_SpecOp_Mission";
		isGlobal = 1;						// 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isTriggerActivated = 1;				// 1 for module waiting until all synced triggers are activated
		isDisposable = 0;
		is3DEN = 0;							// 1 to run init function in Eden Editor as well
		curatorCanAttach = 0;				// 1 to allow Zeus to attach the module to an entity
		// 3DEN Attributes Menu Options
		canSetArea = 0;						// Allows for setting the area values in the Attributes menu in 3DEN
		canSetAreaShape = 0;				// Allows for setting "Rectangle" or "Ellipse" in Attributes menu in 3DEN
	};
	
	class TFTE_MissionIntelligence: TFT_Module_Mission
	{
		// Standard object definitions:
		displayName = "Gather Intel (Intel)";
		scope = 2;
		author = "Broken Skull Mods";
		icon="\tftm\icons\tablet.paa";
		category = "TFTE_SpecOp_Mission";
		isGlobal = 1;						// 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isTriggerActivated = 1;				// 1 for module waiting until all synced triggers are activated
		isDisposable = 0;
		is3DEN = 0;							// 1 to run init function in Eden Editor as well
		curatorCanAttach = 0;				// 1 to allow Zeus to attach the module to an entity
		// 3DEN Attributes Menu Options
		canSetArea = 0;						// Allows for setting the area values in the Attributes menu in 3DEN
		canSetAreaShape = 0;				// Allows for setting "Rectangle" or "Ellipse" in Attributes menu in 3DEN
	};

	class TFTE_MissionAssasination: TFT_Module_Mission
	{
		// Standard object definitions:
		displayName = "Assasinate (Hunt)";
		scope = 2;
		author = "Broken Skull Mods";
		icon="\tftm\icons\human_target.paa";
		category = "TFTE_SpecOp_Mission";
		isGlobal = 1;						// 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isTriggerActivated = 1;				// 1 for module waiting until all synced triggers are activated
		isDisposable = 0;
		is3DEN = 0;							// 1 to run init function in Eden Editor as well
		curatorCanAttach = 0;				// 1 to allow Zeus to attach the module to an entity
		// 3DEN Attributes Menu Options
		canSetArea = 0;						// Allows for setting the area values in the Attributes menu in 3DEN
		canSetAreaShape = 0;				// Allows for setting "Rectangle" or "Ellipse" in Attributes menu in 3DEN
	};

	class TFTE_MissionCasualties: TFT_Module_Mission
	{
		// Standard object definitions:
		displayName = "Fallen (Casualties)";
		scope = 2;
		author = "Broken Skull Mods";
		icon="\tftm\icons\hasty_grave.paa";
		category = "TFTE_SpecOp_Mission";
		isGlobal = 1;						// 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isTriggerActivated = 1;				// 1 for module waiting until all synced triggers are activated
		isDisposable = 0;
		is3DEN = 0;							// 1 to run init function in Eden Editor as well
		curatorCanAttach = 0;				// 1 to allow Zeus to attach the module to an entity
		// 3DEN Attributes Menu Options
		canSetArea = 0;						// Allows for setting the area values in the Attributes menu in 3DEN
		canSetAreaShape = 0;				// Allows for setting "Rectangle" or "Ellipse" in Attributes menu in 3DEN
	};
	
	class TFTE_MissionStronghold: TFT_Module_Mission
	{
		// Standard object definitions:
		displayName = "Stronghold (Defend)";
		scope = 2;
		author = "Broken Skull Mods";
		icon="\tftm\icons\on_target.paa";
		category = "TFTE_SpecOp_Mission";
		isGlobal = 1;						// 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isTriggerActivated = 1;				// 1 for module waiting until all synced triggers are activated
		isDisposable = 0;
		is3DEN = 0;							// 1 to run init function in Eden Editor as well
		curatorCanAttach = 0;				// 1 to allow Zeus to attach the module to an entity
		// 3DEN Attributes Menu Options
		canSetArea = 0;						// Allows for setting the area values in the Attributes menu in 3DEN
		canSetAreaShape = 0;				// Allows for setting "Rectangle" or "Ellipse" in Attributes menu in 3DEN
	};

	class TFTE_SystemEnemyWildArea : TFT_Module
	{
		// Standard object definitions:
		displayName = "Wild Enemy Area (System)";
		scope = 2;
		author = "Broken Skull Mods";
		icon="\tftm\icons\bandit.paa";
		category = "TFTE_SpecOp_Category";
		isGlobal = 1;						// 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isTriggerActivated = 1;				// 1 for module waiting until all synced triggers are activated
		isDisposable = 0;
		is3DEN = 0;							// 1 to run init function in Eden Editor as well
		curatorCanAttach = 0;				// 1 to allow Zeus to attach the module to an entity
		// 3DEN Attributes Menu Options
		canSetArea = 0;						// Allows for setting the area values in the Attributes menu in 3DEN
		canSetAreaShape = 0;				// Allows for setting "Rectangle" or "Ellipse" in Attributes menu in 3DEN

		class Attributes {
			class TFT_IsSafeForAA
			{
				unique = 0; 
				displayName = "Safe for Anti-Aircrafts?";
				tooltip = "True if this is a safe place to spawn AA vehicle.";
				property = "TFT_IsSafeForAA";
				control = "Checkbox";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = false;
				typeName = "BOOL"; 
			};

			class TFT_IsSafeForSAM
			{
				unique = 0; 
				displayName = "Safe for Sol-Air Missiles?";
				tooltip = "True if this is a safe place to spawn SAM system.";
				property = "TFT_IsSafeForSAM";
				control = "Checkbox";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = false;
				typeName = "BOOL"; 
			};

			class TFT_IsSafeForVehicles
			{
				unique = 0; 
				displayName = "Safe for Vehicles?";
				tooltip = "True if this is a safe place to spawn technical and tanks.";
				property = "TFT_IsSafeForVehicles";
				control = "Checkbox";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = false;
				typeName = "BOOL"; 
			};


			class TFT_ForceStaticGunner
			{
				unique = 0; 
				displayName = "Force Static Gunner?";
				tooltip = "True if this is a perfect spot for static gunner.";
				property = "TFT_ForceStaticGunner";
				control = "Checkbox";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = false;
				typeName = "BOOL"; 
			};
		};
	};

	class TFTE_SystemOpenWorldArea : TFT_Module
	{
		// Standard object definitions:
		displayName = "Open World (System)";
		scope = 2;
		author = "Broken Skull Mods";
		icon="\tftm\icons\abstract_037.paa";
		category = "TFTE_SpecOp_Category";
		isGlobal = 1;						// 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isTriggerActivated = 1;				// 1 for module waiting until all synced triggers are activated
		isDisposable = 0;
		is3DEN = 0;							// 1 to run init function in Eden Editor as well
		curatorCanAttach = 0;				// 1 to allow Zeus to attach the module to an entity
		// 3DEN Attributes Menu Options
		canSetArea = 0;						// Allows for setting the area values in the Attributes menu in 3DEN
		canSetAreaShape = 0;				// Allows for setting "Rectangle" or "Ellipse" in Attributes menu in 3DEN
		class Attributes
		{
			class TFT_SituationalBriefing
			{
				unique = 0; 
				displayName = "Map Briefing Audio";
				tooltip = "filename";
				property = "TFT_SituationalBriefing";
				control = "Edit";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = nil;
				validate = "none";
				typeName = "STRING";
			};
			class TFT_OpName
			{
				unique = 0; 
				displayName = "Deployment Name";
				tooltip = "filename";
				property = "TFT_OpName";
				control = "Edit";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = "Deployment";
				validate = "none";
				typeName = "STRING";
			};
		};
	};

	class TFTE_SystemMissionFramework : TFT_Module_Define_Mission
	{
		// Standard object definitions:
		displayName = "Defined Mission (System)";
		scope = 2;
		author = "Broken Skull Mods";
		icon="\tftm\icons\radar_sweep.paa";
		category = "TFTE_SpecOp_Category";
		isGlobal = 1;						// 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isTriggerActivated = 1;				// 1 for module waiting until all synced triggers are activated
		isDisposable = 0;
		is3DEN = 0;							// 1 to run init function in Eden Editor as well
		curatorCanAttach = 0;				// 1 to allow Zeus to attach the module to an entity
		// 3DEN Attributes Menu Options
		canSetArea = 0;						// Allows for setting the area values in the Attributes menu in 3DEN
		canSetAreaShape = 0;				// Allows for setting "Rectangle" or "Ellipse" in Attributes menu in 3DEN
	};

	class TFTE_SystemFallbackFailure: TFT_Module
	{
		// Standard object definitions:
		displayName = "Failure Fallback (System)";
		scope = 2;
		author = "Broken Skull Mods";
		icon="\tftm\icons\falling.paa";
		category = "TFTE_SpecOp_Category";
		isGlobal = 1;						// 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isTriggerActivated = 1;				// 1 for module waiting until all synced triggers are activated
		isDisposable = 0;
		is3DEN = 0;							// 1 to run init function in Eden Editor as well
		curatorCanAttach = 0;				// 1 to allow Zeus to attach the module to an entity
		// 3DEN Attributes Menu Options
		canSetArea = 0;						// Allows for setting the area values in the Attributes menu in 3DEN
		canSetAreaShape = 0;				// Allows for setting "Rectangle" or "Ellipse" in Attributes menu in 3DEN
	};

	class TFTE_SystemSuccessTransit: TFT_Module
	{
		// Standard object definitions:
		displayName = "Success Transit (System)";
		scope = 2;
		author = "Broken Skull Mods";
		icon="\tftm\icons\campfire.paa";
		category = "TFTE_SpecOp_Category";
		isGlobal = 1;						// 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isTriggerActivated = 1;				// 1 for module waiting until all synced triggers are activated
		isDisposable = 0;
		is3DEN = 0;							// 1 to run init function in Eden Editor as well
		curatorCanAttach = 0;				// 1 to allow Zeus to attach the module to an entity
		// 3DEN Attributes Menu Options
		canSetArea = 0;						// Allows for setting the area values in the Attributes menu in 3DEN
		canSetAreaShape = 0;				// Allows for setting "Rectangle" or "Ellipse" in Attributes menu in 3DEN

		class EventHandlers { 
            postInit = "[_this select 0] call SpecOps_fnc_registerEverPresentCamp;"; 
        };
		
		class Attributes
		{
			class TFT_EverPresentEnableOrDisable
			{
				unique = 0; 
				displayName = "Enable only during operation";
				tooltip = "Set operation name to enable camp only during operation";
				property = "TFT_EverPresentEnableOrDisable";
				control = "Edit";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = nil;
				validate = "none";
				typeName = "STRING"; 
			};
		};
	};


};

