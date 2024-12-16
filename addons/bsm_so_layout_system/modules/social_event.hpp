class bsm_so_ao_social_event : Module_F {
    scope = 2;
    displayName = "Social Events (Not Implemented)";
    icon = "\tftm\icons\babyfoot_players.paa";	// Map icon. Delete this entry to use the default icon.
    category = "SpecOps_Modules";
    isGlobal = 0;						// 0 for server only execution, 1 for global execution, 2 for persistent global execution
    isDisposable = 0;					// 1 if modules is to be disabled once it is activated (i.e. repeated trigger activation will not work)
    curatorCanAttach = 0;				// 1 to allow Zeus to attach the module to an entity
    canSetArea = 1;						// Allows for setting the area values in the Attributes menu in 3DEN
    canSetAreaShape = 1;				// Allows for setting "Rectangle" or "Ellipse" in Attributes menu in 3DEN
    canSetAreaHeight = 1;				// Allows 1for setting height or Z value in Attributes menu in 3DEN
    is3DEN = 0;							// 1 to run init function in Eden Editor as well
    class AttributeValues {
        size3[] = {10, 10, -1};
        IsRectangle = 0;
    };

    class Attributes {            

        class WarningModule1
        {
            displayName = "The Social Event";
            data = "AttributeSystemSubcategory";
            control = "SubCategoryDesc2";
            description = "The social event MUST NOT be overlaping with ao modules or ao building modules.";
        };

        class SpecOps_Faction {
            unique = 0; 
            displayName = "Enemy Faction";
            tooltip = ".";
            property = "SpecOps_Faction";
            control = "combo";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = "";
            validate = "none";
            typeName = "STRING";
            class Values : SpecOps_Module_OPFOR_Factions {
            };
        };
        
        class SpecOps_FactionCamo {
            unique = 0; 
            displayName = "Faction Camo";
            tooltip = "Camo for the Faction Presets.";
            property = "SpecOps_FactionCamo";
            control = "combo";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = "";
            validate = "none";
            typeName = "STRING";
            class Values {
                class Camo_Woodland { name = "Woodland"; value = "WL"; };
                class Camo_Winter { name = "Winter"; value = "WT"; };
                class Camo_Desert { name = "Desert"; value = "DT"; };
            };
        };

        class SpecOps_FactionCivilian {
            unique = 0; 
            displayName = "Civilian Faction";
            tooltip = "";
            property = "SpecOps_FactionCivilian";
            control = "combo";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = "";
            validate = "none";
            typeName = "STRING";
            class Values : SpecOps_Module_CIV_Factions {
            };
        };

        class SpecOps_FactionSide {
            unique = 0; 
            displayName = "Side";
            tooltip = "Faction Side.";
            property = "SpecOps_FactionSide";
            control = "combo";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = 0;
            validate = "none";
            typeName = "NUMBER";
            class Values {
                class Blue { name = "BLUFOR"; value = 0; };
                class Red { name = "OPFOR"; value = 1; };
                class Green { name = "GREFOR"; value = 2; };
            };
        };

        class SpecOps_Social_Event {
            unique = 0; 
            displayName = "Event Type";
            tooltip = ".";
            property = "SpecOps_Social_Event";
            control = "combo";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = 0;
            validate = "none";
            typeName = "STRING";
            class Values : SpecOps_Attribute_Social_Event {
                class None { name = "None"; value = "None"; };
                class Random_Any { name = "Random Any"; value = "Random_Any"; };
                class Random_Event { name = "Random Event"; value = "Random_Event"; };
                class Random_Camp { name = "Random Camp"; value = "Random_Camp"; };
            };
        };


        class WarningModule2
        {
            displayName = "AO Setup";
            data = "AttributeSystemSubcategory";
            control = "SubCategoryDesc2";
            description = "Define the ao, how the trigger should be big and the activation behavior, note that this section is null and void if a trigger is synced to this module.";
        };


        // Inactive when AO Module Linked (AO Module is dominant)
        class SpecOps_SizeMultiple {
            unique = 0; 
            displayName = "AO Size";
            tooltip = "Define this specific zone multiplier. (InActive when linked to a AO Module)";
            property = "SpecOps_SizeMultiple";
            control = "Edit";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = 1.5;
            validate = "none";
            typeName = "Number"; 
        };

        class SpecOps_NameAO {
            unique = 0; 
            displayName = "AO Codename";
            tooltip = "This should be unique name the AO so when players are in it, it marks as visited. (InActive when linked to a AO Module)";
            property = "SpecOps_NameAO";
            control = "Edit";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = nil;
            validate = "none";
            typeName = "STRING"; 
        };

        class SpecOps_AOActivateWhenVisited {
            unique = 0; 
            displayName = "Activate When Visited";
            tooltip = "Activate AO only whenever those other ao been visited (Only for Auto-Trigger) (InActive when linked to a AO Module)";
            property = "SpecOps_AOActivateWhenVisited";
            control = "EditArray";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = nil;
            validate = "none";
            typeName = "ARRAY";
        };

        class WarningModule3
        {
            displayName = "Map Setup";
            data = "AttributeSystemSubcategory";
            control = "SubCategoryDesc2";
            description = "Define the markers on the maps of the AO.";
        };

        class SpecOps_MarkAO {
            unique = 0; 
            displayName = "Mark AO (On Start)?";
            tooltip = "Will mark the AO area of effect and danger zone. (InActive when linked to a AO Module)";
            property = "SpecOps_MarkAO";
            control = "Checkbox";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = true;
            typeName = "BOOL"; 
        };

        class SpecOps_MarkAOWhenVisited {
            unique = 0; 
            displayName = "Mark AO (When Visited)";
            tooltip = "This AO will be marked or unmarked when AO is visited (InActive when linked to a AO Module)";
            property = "SpecOps_MarkAOWhenVisited";
            control = "EditArray";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = nil;
            validate = "none";
            typeName = "ARRAY";
        };

    };

};