// PREFIX: bsm_so_generators
class CfgPatches
{
	class bsm_so_generators
	{
		author = "Broken Skull Mods™";
		name = "Special Ops Framework - Generators";
		units[]={ };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={  "bsm_so_main", "bsm_so_layout_system" };
	};
};



class Cfg3DEN {
    class Object {
        class AttributeCategories
        {
			delete SpecOps_UnitRole;
            class SpecOps_DressupUnitRole
            {
                collapsed = 1;
				displayName = "BSM DEV - (Unit)";
                class Attributes
                {

					class LeaderRole
					{
						displayName = "Leader";
						data = "AttributeSystemSubcategory";
						control = "SubCategoryDesc2";
						description = "Leader role should be unique, do not allow other role to spawn on this position or unexpected behaviour might occur.";
					};

					class TFT_CanBeLeader
					{
						unique = 0; 
						displayName = "Leader Only?";
						tooltip = "All others should be false of this one is true.";
						property = "TFT_CanBeLeader";
						control = "Checkbox";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = false;
						typeName = "BOOL"; 
					};

					class RoleInfo
					{
						displayName = "Choosing Roles";
						data = "AttributeSystemSubcategory";
						control = "SubCategoryDesc2";
						description = "The position of the enemy is very important... do not place a sniper in cramp position as barrel length might to throught wall... GL/AT should be outside... be smart about it.";
					};

					class TFT_CanBeRifleman
					{
						unique = 0; 
						displayName = "Rifleman Allowed?";
						tooltip = "Can Rifleman spawn here?";
						property = "TFT_CanBeRifleman";
						control = "Checkbox";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = false;
						typeName = "BOOL"; 
					};

					class TFT_CanBeAutoRifleman
					{
						unique = 0; 
						displayName = "AutoRifleman Allowed?";
						tooltip = "Can AutoRifleman spawn here?";
						property = "TFT_CanBeAutoRifleman";
						control = "Checkbox";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = false;
						typeName = "BOOL"; 
					};

					class TFT_CanBeGrenadier
					{
						unique = 0; 
						displayName = "Grenadier Allowed?";
						tooltip = "Can Grenadier spawn here?";
						property = "TFT_CanBeGrenadier";
						control = "Checkbox";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = false;
						typeName = "BOOL"; 
					};

					class TFT_CanBeAT
					{
						unique = 0; 
						displayName = "Anti-Tank Allowed?";
						tooltip = "Can AT spawn here?";
						property = "TFT_CanBeAT";
						control = "Checkbox";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = false;
						typeName = "BOOL"; 
					};

					class TFT_CanBeSniper
					{
						unique = 0; 
						displayName = "Sniper Allowed?";
						tooltip = "Can sniper spawn here?";
						property = "TFT_CanBeSniper";
						control = "Checkbox";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = false;
						typeName = "BOOL"; 
					};


					class AIBehavior
					{
						displayName = "Positioning Settings";
						data = "AttributeSystemSubcategory";
						control = "SubCategoryDesc2";
						description = "Define the positioning allowed for AI spawn point.";
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
						tooltip = "True if unit can crouch";
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
						tooltip = "True if unit can stand.";
						property = "TFT_CanStand";
						control = "Checkbox";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = false;
						typeName = "BOOL"; 
					};

					class TFT_CanMove
					{
						unique = 0; 
						displayName = "Can Move?";
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
						displayName = "Can Unlock Stance?";
						tooltip = "Can this unit stop stance and start moving when ever a player approaches its position.";
						property = "bsm_so_can_unlock_stance";
						control = "Checkbox";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = false;
						typeName = "BOOL"; 
					};

					class Stance {
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

					class AmbientNotice
					{
						displayName = "Ambient Settings";
						data = "AttributeSystemSubcategory";
						control = "SubCategoryDesc2";
						description = "Rotation MUST BE ENABLED for the following setting to work.";
					};

					class SpecOps_AmbientCanStand
					{
						unique = 0; 
						displayName = "Ambient Standing?";
						tooltip = "True if unit should be standing at ease in animation  (MUST BE ABLE TO ROTATE OR MOVE).";
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
            class SpecOps_DressupVisibility
            {
                collapsed = 1;
				displayName = "BSM DEV - (Visibility Setup)";
                class Attributes
                {
					class Visibility
					{
						displayName = "Visibility Settings";
						data = "AttributeSystemSubcategory";
						control = "SubCategoryDesc2";
						description = "Define the visibility settings on the points... very important to be as accurate as possible.";
					};

					class TFT_CanVisibleFromOutside
					{
						unique = 0; 
						displayName = "Is Visible From Outside?";
						tooltip = "is this position visible through windows or when doors are opened?";
						property = "TFT_CanVisibleFromOutside";
						control = "Checkbox";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = false;
						typeName = "BOOL"; 
					};

					class TFT_OnRoofBalcony
					{
						unique = 0; 
						displayName = "IS On Roof or Balcony?";
						tooltip = "Define unit that are obvisouly exposed outside balcony/roof/porch are good examples.";
						property = "TFT_OnRoofBalcony";
						control = "Checkbox";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = false;
						typeName = "BOOL"; 
					};

					class SpecOps_HideAtNight
					{
						unique = 0; 
						displayName = "Is Hidden at Night?";
						tooltip = "Unit is hidden when night time if true; only when ao/building is activated.";
						property = "SpecOps_HideAtNight";
						control = "Checkbox";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = false;
						typeName = "BOOL"; 
					};

					class SpecOps_HideAtDay
					{
						unique = 0; 
						displayName = "Is Hidden at Day?";
						tooltip = "Unit is hidden when day time if true; only when ao/building is activated.";
						property = "SpecOps_HideAtDay";
						control = "Checkbox";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = false;
						typeName = "BOOL"; 
					};
                };
            };   
			class SpecialOperationsFramework_Area
            {
                collapsed = 1;
				displayName = "BSM DEV - (Area Setup)";
                class Attributes
                {
					class SpecOps_Area_TierLevel
					{
						unique = 0; 
						displayName = "Zone Tier?";
						tooltip = "Choose the tier of that zone T1 = Low Fortification, T3 = Very High Fortification.";
						property = "SpecOps_Area_TierLevel";
						control = "combo";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = 1;
						validate = "none";
						typeName = "NUMBER";
						class Values 
						{
							class T1 { name = "T1 (Civilian, Unfortified)"; value = 1; };
							class T2 { name = "T2 (Militarize, Light Fortification)"; value = 2; };
							class T3 { name = "T3 (Militarize, Heavy Fortification)"; value = 3; };
						};
					};

					class TFT_IsGore {
						unique = 0; 
						displayName = "Is Explicit Scene?";
						tooltip = "Decapitated Bodies, Gore Scene, Sexual Content.";
						property = "TFT_IsGore";
						control = "Checkbox";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = false;
						typeName = "BOOL"; 
					};

					class TFT_BuildingIsEnterable
					{
						unique = 0; 
						displayName = "Is Enterable?";
						tooltip = "TFT_BuildingIsEnterable";
						property = "TFT_BuildingIsEnterable";
						control = "Checkbox";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = false;
						typeName = "BOOL"; 
					};


					class SpecOps_Area_Type
					{
						unique = 0; 
						displayName = "Area Type?";
						tooltip = "Choose if zone is a building or other type (only define on building or area marker).";
						property = "SpecOps_Area_Type";
						control = "combo";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = 0;
						validate = "none";
						typeName = "NUMBER";
						class Values {
							class T0 { name = "Unspecified"; value = 0; };
							class T1 { name = "Building"; value = 1; };
							class T2 { name = "Camp"; value = 2; };
							class T3 { name = "Social Event"; value = 3; };
							class T4 { name = "Furniture"; value = 4; };
							class T5 { name = "Hostage Unit"; value = 5; };
							class Explosive { name = "Explosive"; value = 6; };
						};
					};
					class SpecOps_Area_Description {
						unique = 0; 
						displayName = "Area Description";
						tooltip = "Short description of the area type this will be used to do listing in the eden editor. (Camp & Social Events Only)";
						property = "SpecOps_Area_Description";
						control = "Edit";
						expression = "_this setVariable ['%s', _value];";
						defaultValue = nil;
						validate = "none";
						typeName = "STRING"; 
					};

                };
            };
            
			class SpecialOperationsFramework_Furniture
            {
                collapsed = 1;
				displayName = "BSM DEV - (Furniture Setup)";
                class Attributes
                {


					class SpecOps_Furniture_Important {
						unique = 0; 
						displayName = "Is Important?";
						tooltip = "False when object is not important and can be remove base on settings";
						property = "SpecOps_Furniture_Important";
						control = "Checkbox";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = true;
						typeName = "BOOL"; 
					};

					class SpecOps_Spawn_As_Vehicle {
						unique = 0; 
						displayName = "Spawn as Vehicle?";
						tooltip = "Spawn as functional vehicle.";
						property = "SpecOps_Spawn_As_Vehicle";
						control = "Checkbox";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = false;
						typeName = "BOOL"; 
					};

					class TFT_IsIntelSearchable {
						unique = 0; 
						displayName = "Is Searchable Intel?";
						tooltip = "TFT_IsIntelSearchable";
						property = "TFT_IsIntelSearchable";
						control = "Checkbox";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = false;
						typeName = "BOOL"; 
					};
                };
            };
          
		    class SpecialOperationsFrameworkRole
            {
                collapsed = 1;
				displayName = "BSM DEV - (Role Setup)";
                class Attributes
                {
					class TFT_IsDemoLead {
						unique = 0; 
						displayName = "Demolition Lead?";
						tooltip = "This lead must be connected before demolition can occur (Demolition Trigger is required).";
						property = "TFT_IsDemoLead";
						control = "Checkbox";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = false;
						typeName = "BOOL"; 
					};

					class TFT_IsDemoTrigger {
						unique = 0; 
						displayName = "Demolition Trigger?";
						tooltip = "This trigger will sync to demo phone when all leads are connected if any.";
						property = "TFT_IsDemoTrigger";
						control = "Checkbox";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = false;
						typeName = "BOOL"; 
					};

					class TFT_IsHacking {
						unique = 0; 
						displayName = "Is Hacking?";
						tooltip = "This will unlock hacking point.";
						property = "TFT_IsHacking";
						control = "Checkbox";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = false;
						typeName = "BOOL"; 
					};
                };
            };
			
			class SpecialOperationsFramework_Garage_Generator
            {
                collapsed = 1;
				displayName = "BSM DEV - (Vehicle Setup)";
                class Attributes
                {
					class SpecOps_GarageVehicleCategory
					{
						unique = 0; 
						displayName = "Category?";
						tooltip = "Vehicle's Category.";
						property = "SpecOps_GarageVehicleCategory";
						control = "combo";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = -1;
						validate = "none";
						typeName = "NUMBER";
						class Values {
							class MDEF { name = "Unlisted"; value = -1; };
							class MAA { name = "Anti-Air"; value = 0; };
							class MTANK { name = "Tank"; value = 1; };
							class MTECHNICAL { name = "Technical"; value = 2; };
							class MTROOP { name = "Troop Transporter"; value = 3; };
						};
					};

					class SpecOps_GarageRequiredCertification
					{
						unique = 0; 
						displayName = "Certification?";
						tooltip = "Level of Certification Required to Drive/Pilot.";
						property = "SpecOps_GarageRequiredCertification";
						control = "combo";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = 0;
						validate = "none";
						typeName = "NUMBER";
						class Values {
							class MALL { name = "Everyone"; value = 0; };
							class DRIVER { name = "Driver"; value = 1; };
							class SUPPORT { name = "Support Specialist"; value = 2; };
						};
					};
                };
            };
        };
    };


};


// As Friendly (BluFOR)
// bsm_so_ao_social_event

//	class BS_B_US_RANGER_2000 { name = "US - RANGER (2008)"; value = "BS_B_US_RANGER_2000"; };  
