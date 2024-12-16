

class CfgPatches
{
	class bsm_so_medical
	{
		author = "BSM - Medical";
		units[]={ };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={ "bsm_so_main", "ace_main", "cba_main"  };
	};
};

class CfgFunctions {
	class SpecOps {
		class Medical_MedEvac {
			file = "\bsm_so_medical\functions";
            class medevacCreateACE { postInit = 1; };
		};
		class Medical_OSK {
			file = "\bsm_so_medical\functions";
            class medicOneShotCheck { };
            class medicOneShotInitialize { postInit = 1; };
		};

	};
};


class Extended_PreInit_EventHandlers {
    class bsm_so_medical {
        init = "[] call compile preprocessFileLineNumbers '\bsm_so_medical\addon_settings.sqf';";
    };
};		

class Cfg3DEN
{
    class Object
    {
        class AttributeCategories
        {
			class bsm_so_medevac_options {
				displayName = "Spec-Ops (Medical)";
                class Attributes {
                    class bsm_so_medic_role {
                        unique = 0; 
                        displayName = "Can Become a Medic?";
                        tooltip = "Allow players to become or give up medic role from this object.";
                        property = "bsm_so_medic_role";
                        control = "Checkbox";
                        expression = "_this setVariable ['%s', _value, true];";
                        defaultValue = false;
                        typeName = "BOOL"; 
                    };

                    class bsm_so_medevac_enable {
                        unique = 0; 
                        displayName = "Enabled MedEvac?";
                        tooltip = "Allow this vehicle to use medevec feature from spec ops.";
                        property = "bsm_so_medevac_enable";
                        control = "Checkbox";
                        expression = "_this setVariable ['%s', _value, true];";
                        defaultValue = false;
                        typeName = "BOOL"; 
                    };

                    class bsm_so_medevac_heal_all {
                        unique = 0; 
                        displayName = "Everyone Usage?";
                        tooltip = "Can everyone use the medical features?";
                        property = "bsm_so_medevac_heal_all";
                        control = "Checkbox";
                        expression = "_this setVariable ['%s', _value, true];";
                        defaultValue = false;
                        typeName = "BOOL"; 
                    };

                    class bsm_so_medevac_heal_nearby {
                        unique = 0; 
                        displayName = "Can Heal Nearby Units?";
                        tooltip = "Allows the medic to perform a mass heal on nearby units ~10 meters";
                        property = "bsm_so_medevac_heal_nearby";
                        control = "Checkbox";
                        expression = "_this setVariable ['%s', _value, true];";
                        defaultValue = false;
                        typeName = "BOOL"; 
                    };

                    class bsm_so_medevac_respawn {
                        unique = 0; 
                        displayName = "Can Create Team Respawn?";
                        tooltip = "Allows the medic to create a team respawn on the current location (if vehicle move respawn does not move).";
                        property = "bsm_so_medevac_respawn";
                        control = "Checkbox";
                        expression = "_this setVariable ['%s', _value, true];";
                        defaultValue = false;
                        typeName = "BOOL"; 
                    };

					class fDeploy
					{
						displayName = "First-Time Deployment";
						data = "AttributeSystemSubcategory";
						control = "SubCategoryDesc2";
						description = "Allow users at that JIP to deploy one time to any friendly player on the map.";
					};

                    class bsm_so_medevac_deployment {
                        unique = 0; 
                        displayName = "Can Deploy?";
                        tooltip = "Allow the player to interact with this object to first deploy to any players on the map, only once per player.";
                        property = "bsm_so_medevac_deployment";
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