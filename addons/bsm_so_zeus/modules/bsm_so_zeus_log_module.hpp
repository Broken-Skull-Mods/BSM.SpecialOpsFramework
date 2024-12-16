class bsm_so_zeus_log_module : Module_F {
    scope = 2;
    displayName = "Zeus Cue and Log";
    icon = "\tftm\icons\bolt_eye.paa";	// Map icon. Delete this entry to use the default icon.
    category = "SpecOps_Modules";
    function = "SpecOps_fnc_zeusLogEvent";	// Name of function triggered once conditions are met
    functionPriority = 1;				// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
    isTriggerActivated = 1;				// 1 for module waiting until all synced triggers are activated
    isGlobal = 1;						// 0 for server only execution, 1 for global execution, 2 for persistent global execution
    isDisposable = 1;					// 1 if modules is to be disabled once it is activated (i.e. repeated trigger activation will not work)
    curatorCanAttach = 0;				// 1 to allow Zeus to attach the module to an entity
    canSetArea = 0;						// Allows for setting the area values in the Attributes menu in 3DEN
    canSetAreaShape = 0;				// Allows for setting "Rectangle" or "Ellipse" in Attributes menu in 3DEN
    canSetAreaHeight = 0;				// Allows 1for setting height or Z value in Attributes menu in 3DEN
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

        class bsm_so_all_text {
            unique = 0; 
            displayName = "Lines ('Line1', 'Line 2')";
            tooltip = "Each line... these will be shown to Zeus_1, Zeus_2, Zeus_3 and any player with a curator attached when trigger mustn't be server only.";
            property = "bsm_so_all_text";
            control = "EditMulti5";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = "";
            validate = "none";
            typeName = "ARRAY";
        };
    };

};