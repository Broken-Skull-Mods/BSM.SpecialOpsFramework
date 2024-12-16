class CfgPatches
{
	class bsm_so_dressupTerrain
	{
		author = "Broken Skull Mods™";
		name = "Special Ops Framework - Dressup Dev";
		units[]={ };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={ "bsm_so_main", "bsm_so_layout_system" };
	};
};

class CfgFunctions {
	class SpecOps {
		class DressupDevelopment {
			file = "\bsm_so_generators\data\dressupTerrain\functions";
            class toolCreateMapLocationMarkers { };
			class toolCompileWorld { };
			class toolCompileWorldCivilians { };
			class toolCompileWorldEnemies { };
			class toolCompileWorldFurnitures { };
			class toolCompileWorldHostages { };
			class toolCompileWorldIntelligence { };
			class toolCompileWorldPowergrid { };
			class toolCompileWorldStaticWeapons { };
			class toolCompileWorldVehicles { };
			class toolCompileAddonFromArray { };
			class toolCompileWorldSocialEvents { };
			class toolCommonPowerlineMarking { };
		}
	};
};

 class CfgVehicles {
	class Module_F;
    class bsm_so_dressup_pwrgrid : Module_F {
        scope = 2;
        displayName = "Dressup Powergrid";
		icon = "\tftm\icons\power_generator.paa";	// Map icon. Delete this entry to use the default icon.
		category = "SpecOps_Modules";
		isGlobal = 0;						// 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isDisposable = 0;					// 1 if modules is to be disabled once it is activated (i.e. repeated trigger activation will not work)
		curatorCanAttach = 0;				// 1 to allow Zeus to attach the module to an entity
		canSetArea = 1;						// Allows for setting the area values in the Attributes menu in 3DEN
		canSetAreaShape = 1;				// Allows for setting "Rectangle" or "Ellipse" in Attributes menu in 3DEN
		canSetAreaHeight = 1;				// Allows 1for setting height or Z value in Attributes menu in 3DEN
        is3DEN = 0;							// 1 to run init function in Eden Editor as well
        class AttributeValues {
            size3[] = {100, 100, -1};
            IsRectangle = 0;
        };
		class Attributes {		
			class bsm_so_wholemap {
				unique = 0; 
				displayName = "Whole Map?";
				tooltip = "Define if this powergrid affects the whole map.";
				property = "bsm_so_wholemap";
				control = "Checkbox";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = false;
				typeName = "BOOL"; 
			};

			class bsm_so_hack_required {
				unique = 0; 
				displayName = "Hackable?";
				tooltip = "Define if this powergrid is hackable.";
				property = "bsm_so_hack_required";
				control = "Checkbox";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = false;
				typeName = "BOOL"; 
			};

			class bsm_so_hack_range {
				unique = 0; 
				displayName = "Hack Range?";
				tooltip = "Define how close player need to be to hack the powergrid.";
				property = "bsm_so_hack_range";
				control = "Edit";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = 0;
				typeName = "NUMBER"; 
			};

			class bsm_so_hack_speed {
				unique = 0; 
				displayName = "Hack Speed?";
				tooltip = "Define how fast can player hack the powergrid.";
				property = "bsm_so_hack_speed";
				control = "Edit";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = 0;
				typeName = "NUMBER"; 
			};

			class bsm_so_destroy_required {
				unique = 0; 
				displayName = "Destroyable?";
				tooltip = "Define if this powergrid must be destroy.";
				property = "bsm_so_destroy_required";
				control = "Checkbox";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = false;
				typeName = "BOOL"; 
			};

			class bsm_so_destroy_b_classname {
				unique = 0; 
				displayName = "Building Classname";
				tooltip = "Classname of the building handling the power used for hack and destroy.";
				property = "bsm_so_destroy_b_classname";
				control = "Edit";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = nil;
				typeName = "STRING"; 
			};
			

		}
    };
};
