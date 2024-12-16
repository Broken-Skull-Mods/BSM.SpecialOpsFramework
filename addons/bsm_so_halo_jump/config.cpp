
class CfgPatches
{
	class bsm_so_halo_jump
	{
		author = "Broken Skull Mods";
        name = "BSM - Halo Jump";
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
		class Module_Halo_Jump {
			file = "bsm_so_halo_jump\functions";
            class haloModuleCreateAceInteraction { postInit = 1; };
            class haloModuleJump { };
			class haloModulePerformTeamJump {};
			class haloModuleSetFastTravelPos {};
		};
	};
};

class CfgVehicles {
	class Module_F;
    class bsm_so_haloJump_module : Module_F {
        scope = 2;
        displayName = "Halo Jump Position";
		icon = "\tftm\icons\parachute.paa";
		category = "SpecOps_Modules";
		function = "SpecOps_fnc_haloModuleSetFastTravelPos";	// Name of function triggered once conditions are met
		functionPriority = 1;
		isGlobal = 1;						// 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isTriggerActivated = 1;				// 1 for module waiting until all synced triggers are activated
		isDisposable = 0;					// 1 if modules is to be disabled once it is activated (i.e. repeated trigger activation will not work)
		curatorCanAttach = 0;				// 1 to allow Zeus to attach the module to an entity
		canSetArea = 1;						// Allows for setting the area values in the Attributes menu in 3DEN
		canSetAreaShape = 1;				// Allows for setting "Rectangle" or "Ellipse" in Attributes menu in 3DEN
		canSetAreaHeight = 1;				// Allows 1for setting height or Z value in Attributes menu in 3DEN
		is3DEN = 0;							// 1 to run init function in Eden Editor as well
		class Attributes {   
			class SpecOps_Trigger_Linking {
				unique = 0; 
				displayName = "Link To";
				tooltip = "Choose how you want the module to link on which trigger on the AO module, only used when link to AO Module directly.";
				property = "SpecOps_Trigger_Linking";
				control = "combo";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = -1;
				validate = "none";
				typeName = "NUMBER";
				class Values {
					class TM1 { name = "Not Sync to AO Modules"; value = -1; };
					class T0 { name = "AO Outer Trigger"; value = 0; };
					class T1 { name = "AO Inner Trigger"; value = 1; };
				};
			};   

			class bsm_so_name {
				unique = 0; 
				displayName = "Name";
				tooltip = "This is the name of the position as shown on the jump screen.";
				property = "bsm_so_name";
				control = "Edit";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = nil;
				validate = "none";
				typeName = "STRING";
			};
		};
    };
};




class Cfg3DEN
{
    class Object
    {
        class AttributeCategories
        {
			class bsm_so_halo_jump_options {
				displayName = "Spec-Ops (Halo Jump)";
                class Attributes {
                    class bsm_so_self_jump{
                        unique = 0; 
                        displayName = "Can Self-Jump?";
                        tooltip = "Allow players to self jump on available jump positions at any time.";
                        property = "bsm_so_self_jump";
                        control = "Checkbox";
                        expression = "_this setVariable ['%s', _value, true];";
                        defaultValue = false;
                        typeName = "BOOL"; 
                    };
                    class bsm_so_team_jump{
                        unique = 0; 
                        displayName = "Can Team Jump?";
                        tooltip = "Allow group leaders to make all its team to jump at once (team member must be within 25 meters when jump initiated)";
                        property = "bsm_so_team_jump";
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