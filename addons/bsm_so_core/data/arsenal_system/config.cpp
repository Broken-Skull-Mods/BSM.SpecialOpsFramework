class CfgPatches
{
	class spec_ops_arsenal_system
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
		class ArsenalSystem {
			file = "tft_so_editor\data\arsenal_system\functions";
            class commonExtractUnitGearnStuff { };
            class commonAssignFactionArsenal { };
            class commonInitializeArsenal { postInit = 1; };
		}
	};
};
class SpecOps_Module_BLUFOR_Factions { };

class Cfg3DEN
{
    class Object
    {
        class AttributeCategories
        {
			class bs_specops_arsenal_options {
				displayName = "Spec-Ops (Arsenal)";
                class Attributes {
					class bs_specops_arsenal {
						unique = 0; 
						displayName = "Faction";
						tooltip = ".";
						property = "bs_specops_arsenal";
						control = "combo";
						expression = "_this setVariable ['%s', _value];";
						defaultValue = nil;
						validate = "none";
						typeName = "STRING";
						class Values : SpecOps_Module_BLUFOR_Factions {
							class none { name = "No Arsenal"; value = nil; };
						};
					};

					class bs_specops_arsenal_camo {
						unique = 0; 
						displayName = "Faction Camo";
						tooltip = "Camo for the Faction Presets.";
						property = "bs_specops_arsenal_camo";
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

					class bs_specops_arsenal_applyClass
					{
						unique = 0; 
						displayName = "Assign to Class";
						tooltip = "If true, arsenal will be available anytime it is added by zeus";
						property = "bs_specops_arsenal_applyClass";
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