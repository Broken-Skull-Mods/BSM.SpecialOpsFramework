class CfgPatches
{
	class spec_ops_dressup_editor_design
	{
		author = "BloodyMystik & Orka";
		units[]={ };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={
		};
	};
};

class CfgFunctions {
	class SpecOps {
		class DressUp_Modules {
			file = "tft_so_editor\data\dressup_editor_design\functions";
            class dressupBuildingModuleActivate { };
            class dressupBuildingModuleInitialize { };
            class dressupBuildingModuleDeactivate { };
            class createBuildingGarrisonLayoutFromTrigger { };
            class compileBuildingGarrisonLayoutsFromTriggers { };
            class dressUpBuildingApplyFurnitures { };
            class dressUpBuildingGetBuildingLayouts { };
            class dressUpBuildingGetBuildingSection { };
            class dressUpBuildingApplyIntel {};
            class dressUpBuildingSpawnEnemy {};
            class dressUpEnemyUpdateFixedPosition {};
            class dressUpDefineBuildingLayout {};
            class dressUpPredefineAllBuildingLayouts {
                preInit = 1;
            };
            class dressupBuildingModulePostInitialize{};
		}
	};
};

class CfgFactionClasses {
    class NO_CATEGORY;

    class SpecOps_Modules: NO_CATEGORY {
        displayName = "Special Ops Framework (Mission)";
    };
};

class SpecOps_Module_OPFOR_Factions { };
class SpecOps_Module_BLUFOR_Factions { };
class SpecOps_Module_GRE_Factions { };

class CfgVehicles {
    class Module_F;

    class SpecOps_Dressup_BuildingLayout : Module_F {
        scope = 2;
        displayName = "Spec-Ops (CQB)";
		icon = "\tftm\icons\c96.paa";	// Map icon. Delete this entry to use the default icon.
		category = "SpecOps_Modules";
		isGlobal = 0;						// 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isDisposable = 0;					// 1 if modules is to be disabled once it is activated (i.e. repeated trigger activation will not work)
		curatorCanAttach = 0;				// 1 to allow Zeus to attach the module to an entity
		canSetArea = 1;						// Allows for setting the area values in the Attributes menu in 3DEN
		canSetAreaShape = 1;				// Allows for setting "Rectangle" or "Ellipse" in Attributes menu in 3DEN
		canSetAreaHeight = 1;				// Allows 1for setting height or Z value in Attributes menu in 3DEN
        is3DEN = 0;							// 1 to run init function in Eden Editor as well
        class AttributeValues {
            size3[] = {12, 34, -1};
            IsRectangle = 1;
        };

		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_dressupBuildingModuleInitialize;";
			postInit = "[(_this select 0)] call SpecOps_fnc_dressupBuildingModulePostInitialize;";
		};
        
        class Attributes {            

            class SpecOps_Faction {
                unique = 0; 
                displayName = "Faction";
                tooltip = "Camo for the Faction Presets.";
                property = "SpecOps_Faction";
                control = "combo";
                expression = "_this setVariable ['%s', _value];";
                defaultValue = nil;
                validate = "none";
                typeName = "STRING";
                class Values : SpecOps_Module_OPFOR_Factions { };
            };
            class SpecOps_FactionCamo {
                unique = 0; 
                displayName = "Faction Camo";
                tooltip = "Camo for the Faction Presets.";
                property = "SpecOps_FactionCamo";
                control = "combo";
                expression = "_this setVariable ['%s', _value];";
                defaultValue = "WL";
                validate = "none";
                typeName = "STRING";
                class Values {
                    class Camo_Woodland { name = "Woodland"; value = "WL"; };
                    class Camo_Winter { name = "Winter"; value = "WT"; };
                    class Camo_Desert { name = "Desert"; value = "DT"; };
                };
            };

            class SpecOps_Intel {
                unique = 0; 
				displayName = "Has Intel?";
				tooltip = "Cannot Guarantee if intel will be on site... only if layout contains intel slots, most building should tho.";
				property = "SpecOps_Intel";
                control = "Checkbox";
                expression = "_this setVariable ['%s', _value];";
                defaultValue = false;
                typeName = "BOOL"; 
            };

            class SpecOps_HasHVT {
                unique = 0; 
				displayName = "Has HVT?";
				tooltip = "Cannot Guarantee if HVT will be on site... only if layout contains intel slots, most building should tho.";
				property = "SpecOps_HasHVT";
                control = "Checkbox";
                expression = "_this setVariable ['%s', _value];";
                defaultValue = false;
                typeName = "BOOL"; 
            };

            class SpecOps_Hostage {
                unique = 0; 
				displayName = "Has Hostage?";
				tooltip = "Cannot guarantee the hostage, only building layout with hostage can contain hostage.";
				property = "SpecOps_Hostage";
                control = "Checkbox";
                expression = "_this setVariable ['%s', _value];";
                defaultValue = false;
                typeName = "BOOL"; 
            };

            class SpecOps_HasStaticMachineGunner {
                unique = 0; 
				displayName = "Has Static Gunner?";
				tooltip = "Cannot Guarantee, only if static is available.";
				property = "SpecOps_HasStaticMachineGunner";
                control = "Checkbox";
                expression = "_this setVariable ['%s', _value];";
                defaultValue = false;
                typeName = "BOOL"; 
            };

			class SpecOps_MaxEnemies {
				unique = 0; 
				displayName = "Max Enemies";
				tooltip = "Max Garrison Enemies (Min: 1) (Will max to the layout chosen if exceed limit).";
				property = "SpecOps_MaxEnemies";
				control = "Edit";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = 1;
				validate = "none";
				typeName = "NUMBER"; 
			};

        };
    };
};