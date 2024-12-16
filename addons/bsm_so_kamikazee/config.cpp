class CfgPatches
{
	class bsm_so_kamikazee
	{
		author = "Broken Skull Mods™";
		name = "BSM - Kamikazee";
		units[]={ };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={  "bsm_so_main", "ace_main", "cba_main" };
	};
};

class CfgFunctions {
	class SpecOps {
		class Kamikazee {
			file = "bsm_so_kamikazee\functions";
            class kamikazeeInit { postInit = 1; };
            class kamikazeeProximityBlow { };
            class kamikazeeSetup { };
            class kamikazeeSetupRunForBoom { };
            class kamikazeeTriggerExplosion { };
		};
	};
};

class Extended_PreInit_EventHandlers {
    class bsm_so_kamikazee {
        init = "[] call compile preprocessFileLineNumbers 'bsm_so_kamikazee\cba_setting_editor.sqf';";
    };
};				


class Cfg3DEN
{
    class Object
    {
        class AttributeCategories
        {
            class bsm_so_kamikazee_attributes
            {
				displayName = "Spec-Ops (Kamikazee)";
                class Attributes
                {
					class WarningModule1
					{
						displayName = "Kamikazee";
						data = "AttributeSystemSubcategory";
						control = "SubCategoryDesc2";
						description = "Should only be set on a civilian, it will run towards players and blow up on proximity/chance when getting shot and chance when dies";
					};
					class SpecOps_EnableKamikazee
					{
						unique = 0; 
						displayName = "Enable Kamikazee?";
						tooltip = "Only works for civilian units.";
						property = "SpecOps_EnableKamikazee";
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
