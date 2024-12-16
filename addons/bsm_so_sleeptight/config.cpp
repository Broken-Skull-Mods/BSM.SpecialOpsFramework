class CfgPatches
{
	class bsm_so_sleeptight
	{
		author = "Broken Skull Mods";
		name = "BSM - Sleeptight";
		units[]={ };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={
			"bsm_so_main", "ace_main", "cba_main" 
		};
	};
};

class CfgFunctions {
	class SpecOps {
		class TimeSkip_Module {
			file = "bsm_so_sleeptight\functions";
            class timeskipCreateAceInteraction { postInit = 1; };
		}
	};
};

class Cfg3DEN
{
    class Object
    {
        class AttributeCategories
        {
			
			class bsm_so_sleeptight_options {
				displayName = "Spec-Ops (Timeskip)";
                class Attributes {
                    class bsm_so_timeskip_enabled{
                        unique = 0; 
                        displayName = "Can Skip Time?";
                        tooltip = "Allow group leader to skip time Day/Night";
                        property = "bsm_so_timeskip_enabled";
                        control = "Checkbox";
                        expression = "_this setVariable ['%s', _value, true];";
                        defaultValue = false;
                        typeName = "BOOL"; 
                    };
                    class bsm_so_timeskip_everyone{
                        unique = 0; 
                        displayName = "Allow Everyone?";
                        tooltip = "Allow everyone to use the timeskip on this object.";
                        property = "bsm_so_timeskip_everyone";
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