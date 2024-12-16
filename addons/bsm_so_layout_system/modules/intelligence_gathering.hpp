class bsm_so_intel_gathering_module : Module_F {
    scope = 2;
    displayName = "Intel Gathering";
    icon = "\tftm\icons\damaged_house.paa";	// Map icon. Delete this entry to use the default icon.
    category = "SpecOps_Modules";
    bsmFunction = "SpecOps_fnc_intelModuleTrigger";	// Name of function triggered once conditions are met
    isGlobal = 0;						// 0 for server only execution, 1 for global execution, 2 for persistent global execution
    isDisposable = 0;					// 1 if modules is to be disabled once it is activated (i.e. repeated trigger activation will not work)
    curatorCanAttach = 0;				// aaaaaaaaaaaaa1 to allow Zeus to attach the module to an entity
    is3DEN = 0;							// 1 to run init function in Eden Editor as well
    
    class Attributes {            
        class WarningModule {
            displayName = "Important Notice";
            data = "AttributeSystemSubcategory";
            control = "SubCategoryDesc2";
            description = "The following variable names consist of 2 part... Realm and Property! Realm is the 'campaign codename (no space)' and Property is name (no space) where to store the values.";
        };

        class SpecOps_NameVar {
            unique = 0; 
            displayName = "Variable Name (Property)";
            tooltip = "This will be used to save the number of intel gathered (when link to no trigger or AO module it will check from this variable).";
            property = "SpecOps_NameVar";
            control = "Edit";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = nil;
            validate = "none";
            typeName = "STRING"; 
        };

        class WarningModule1 {
            displayName = "Important Notice";
            data = "AttributeSystemSubcategory";
            control = "SubCategoryDesc2";
            description = "The realm variable are stored on the local computer or server and will be saved under profile folder 'realm_name.vars' and are required to be deleted to clear save game.";
        };
        class SpecOps_NameRealm {
            unique = 0; 
            displayName = "Variable Name (Realm)";
            tooltip = "This will be used to save the number of intel gathered (when link to no trigger or AO module it will check from this variable).";
            property = "SpecOps_NameRealm";
            control = "Edit";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = nil;
            validate = "none";
            typeName = "STRING"; 
        };
        
        class SpecOps_Intel {
            unique = 0; 
            displayName = "Number of Intel";
            tooltip = "How many intelligence required to trigger.";
            property = "SpecOps_Intel";
            control = "Edit";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = 0;
            validate = "none";
            typeName = "NUMBER"; 
        };

        class SpecOps_ConditionBehavior {
            unique = 0; 
            displayName = "Condition";
            tooltip = "Choose the condition type to trrigger.";
            property = "SpecOps_ConditionBehavior";
            control = "combo";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = "";
            validate = "none";
            typeName = "STRING";
            class Values {
                class MoreCareless { name = "Equal"; value = "EQUAL";}
                class MoreSafe { name = "Greater Than"; value = "GREATER";}
                class MoreAware { name = "Greater or Equal To"; value = "GREATEQUAL";}
            };
        };
    };
};
