class bsm_so_ao_building_module : Module_F {
    scope = 2;
    displayName = "AO Module (Buildings)";
    icon = "\tftm\icons\damaged_house.paa";	// Map icon. Delete this entry to use the default icon.
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
        ActivationBy = "Any Player";
        activationType = "Present";
        repeatable = 1;
    };
    
    class Attributes {            
        class WarningModule
        {
            displayName = "Important Notice";
            data = "AttributeSystemSubcategory";
            control = "SubCategoryDesc2";
            description = "This module must be linked to a regular AO Module and will override the garrison setting portion of the ao module.. no CQB will be spawn anywhere else than inside this area or other building ao module area.";
        };
        class SpecOps_Faction {
            unique = 0; 
            displayName = "Faction";
            tooltip = "Faction for the house.";
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

        class SpecOps_FactionSide {
            unique = 0; 
            displayName = "Side";
            tooltip = "Faction Side.";
            property = "SpecOps_FactionSide";
            control = "combo";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = "";
            validate = "none";
            typeName = "NUMBER";
            class Values {
                class Blue { name = "BLUFOR"; value = 0; };
                class Red { name = "OPFOR"; value = 1; };
                class Green { name = "GREFOR"; value = 2; };
            };
        };

        class MapSettings
        {
            data = "AttributeSystemSubcategory"; // This is needed for the attribute to work
            control = "SubCategory";
            displayName = "Map Setup"; // Visible text. Despite the attribute code saying the property should be title, displayName is correct
        };

        
        class SpecOps_MarkBuildings {
            unique = 0; 
            displayName = "Mark Buildings?";
            tooltip = "Will mark CQB buildings with potential bogus buildings.";
            property = "SpecOps_MarkBuildings";
            control = "Checkbox";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = true;
            typeName = "BOOL"; 
        };

        class SpecOps_MarkedBuildingOnlyAO {
            unique = 0; 
            displayName = "Mark in AO Only?";
            tooltip = "Show/Hide Building Markers only on the AO.";
            property = "SpecOps_MarkedBuildingOnlyAO";
            control = "Checkbox";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = false;
            typeName = "BOOL"; 
        };

        class TriggerSettings
        {
            data = "AttributeSystemSubcategory"; // This is needed for the attribute to work
            control = "SubCategory";
            displayName = "Trigger Setup"; // Visible text. Despite the attribute code saying the property should be title, displayName is correct
        };

        class SpecOps_NameAO {
            unique = 0; 
            displayName = "Section Codename";
            tooltip = "This should be unique name the section so when players are in it, it marks as visited.";
            property = "SpecOps_NameAO";
            control = "Edit";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = nil;
            validate = "none";
            typeName = "STRING"; 
        };


        class CQBSettings
        {
            data = "AttributeSystemSubcategory"; // This is needed for the attribute to work
            control = "SubCategory";
            displayName = "CQB Setup"; // Visible text. Despite the attribute code saying the property should be title, displayName is correct
        };

        class SpecOps_ForcedTier {
            unique = 0; 
            displayName = "Max Tiers";
            tooltip = "This is the level and complexity of the CQB usually T1 means enemy has been there for short period of time a fotification should be bare minimum and T3 maximum fortification and difficulty.";
            property = "SpecOps_ForcedTier";
            control = "combo";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = 3;
            validate = "none";
            typeName = "NUMBER";
            class Values {
                class T1 { name = "T1 (Civilian, Unfortified)"; value = 1; };
                class T2 { name = "T2 (Militarize, Light Fortification)"; value = 2; };
                class T3 { name = "T3 (Militarize, Heavy Fortification)"; value = 3; };
            };
        };

        class SpecOps_AllowGore {
            unique = 0; 
            displayName = "Allow Explicit?";
            tooltip = "The decoration could spawn grusome scenes (Blood, Murder, Sex).";
            property = "SpecOps_AllowGore";
            control = "Checkbox";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = true;
            typeName = "BOOL"; 
        };

        class SpecOps_OutsideOnly {
            unique = 0; 
            displayName = "Outside Only?";
            tooltip = "Spawn only cqb garrison that are outside on a rooftop, balcony.";
            property = "SpecOps_OutsideOnly";
            control = "Checkbox";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = false;
            typeName = "BOOL"; 
        };

        // class SpecOps_MaskedFigthers {
        //     unique = 0; 
        // 	displayName = "Masked Fighters?";
        // 	tooltip = "Masked Fighters are unarmed enemies that could be flipped as combattant at anytime during combat. (Position should be supporting it, usually outside)";
        // 	property = "SpecOps_MaskedFighters";
        //     control = "Checkbox";
        //     expression = "_this setVariable ['%s', _value, true];";
        //     defaultValue = false;
        //     typeName = "BOOL"; 
        // };

        class SpecOps_Leaders {
            unique = 0; 
            displayName = "Max Leaders";
            tooltip = "How many emeny lieutenants and leaders should be located in buildings (max: One per building)";
            property = "SpecOps_Leaders";
            control = "Edit";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = 0;
            validate = "none";
            typeName = "NUMBER"; 
        };

        class SpecOps_Intel {
            unique = 0; 
            displayName = "Max Intel";
            tooltip = "How many intelligence should be available to find (max: One per Building)";
            property = "SpecOps_Intel";
            control = "Edit";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = 0;
            validate = "none";
            typeName = "NUMBER"; 
        };

        class SpecOps_Hostages {
            unique = 0; 
            displayName = "Max Hostages";
            tooltip = "How many hostages have to be liberated (max: one per building)";
            property = "SpecOps_Hostages";
            control = "Edit";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = 0;
            validate = "none";
            typeName = "NUMBER"; 
        };

        class SpecOps_MaxIED {
            unique = 0; 
            displayName = "Max IED";
            tooltip = "Maximum possible IED in the area (max: one per building)";
            property = "SpecOps_MaxIED";
            control = "Edit";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = 0;
            validate = "none";
            typeName = "NUMBER"; 
        };
        
        class SpecOps_StaticGunHighLMG {
            unique = 0; 
            displayName = "Static (High Guns)";
            tooltip = "Maximum static high gunners [Can be GL or MG depending on faction] (max: one per building or as many as spawn point allows)";
            property = "SpecOps_StaticGunHighLMG";
            control = "Edit";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = 0;
            validate = "none";
            typeName = "NUMBER"; 
        };

        class SpecOps_StaticGunLowLMG {
            unique = 0; 
            displayName = "Static (Low Guns)";
            tooltip = "Maximum static low gunners [Can be GL or MG depending on faction] (max: one per building or as many as spawn point allows)";
            property = "SpecOps_StaticGunLowLMG";
            control = "Edit";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = 0;
            validate = "none";
            typeName = "NUMBER"; 
        };

        class SpecOps_StaticGunMortars {
            unique = 0; 
            displayName = "Static (Mortars)";
            tooltip = "Maximum static mortars (max: one per building or as many as spawn point allows)";
            property = "SpecOps_StaticGunMortars";
            control = "Edit";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = 0;
            validate = "none";
            typeName = "NUMBER"; 
        };

        class SpecOps_StaticGunAA {
            unique = 0; 
            displayName = "Static (Anti-Air)";
            tooltip = "Maximum static AA Launchers (max: one per building or as many as spawn point allows)";
            property = "SpecOps_StaticGunAA";
            control = "Edit";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = 0;
            validate = "none";
            typeName = "NUMBER"; 
        };

        class SpecOps_StaticGunSam {
            unique = 0; 
            displayName = "Static (SAMs)";
            tooltip = "Maximum static Sol-air missile launchers (max: one per building or as many as spawn point allows)";
            property = "SpecOps_StaticGunSam";
            control = "Edit";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = 0;
            validate = "none";
            typeName = "NUMBER"; 
        };

        class SpecOps_StaticGunLight {
            unique = 0; 
            displayName = "Static (Search Lights)";
            tooltip = "Maximum static search light, faction dependent might not be avaialble (max: one per building or as many as spawn point allows)";
            property = "SpecOps_StaticGunLight";
            control = "Edit";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = 0;
            validate = "none";
            typeName = "NUMBER"; 
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

        class EnemyBehaviourSettings
        {
            data = "AttributeSystemSubcategory"; // This is needed for the attribute to work
            control = "SubCategory";
            displayName = "Enemy Behaviour Setup"; // Visible text. Despite the attribute code saying the property should be title, displayName is correct
        };

        class SpecOps_GroupBehavior {
            unique = 0; 
            displayName = "Enemy Behavior";
            tooltip = "Spec-Ops will assign group behaviour on the probability basis choose how often or tell spec ops to lean more toward a desired behavior.";
            property = "SpecOps_GroupBehavior";
            control = "combo";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = nil;
            validate = "none";
            typeName = "STRING";
            class Values {
                class Any { name = "Default (Balanced)"; value = nil;}
                class MoreCareless { name = "Lean Careless"; value = "Careless";}
                class MoreSafe { name = "Lean Safe"; value = "Safe";}
                class MoreAware { name = "Lean Aware"; value = "Aware";}
                class MoreCombat { name = "Lean Combat Ready"; value = "Combat";}
                class MoreStealth { name = "Lean Stealth"; value = "Stealth";}
            };
        };
        
        class SpecOps_GroupROE {
            unique = 0; 
            displayName = "Enemy ROE";
            tooltip = "Set the ROE for the enemy";
            property = "SpecOps_GroupROE";
            control = "combo";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = nil;
            validate = "none";
            typeName = "STRING";
            class Values {
                class RED { name = "Fire At Will, Engage At Will"; value = "RED";}
                class YELLOW { name = "Fire At Will, Disengage (Default)"; value = nil;}
                class WHITE { name = "Hold Fire, Engage At Will"; value = "WHITE";}
                class GREEN { name = "Hold Fire, Disengage"; value = "GREEN";}
                class BLUE { name = "Never Fire, Disengage"; value = "BLUE";}
            };
        };

        class EnemySkillSettings
        {
            data = "AttributeSystemSubcategory"; // This is needed for the attribute to work
            control = "SubCategory";
            displayName = "Enemy Skills Setup"; // Visible text. Despite the attribute code saying the property should be title, displayName is correct
        };

        class SpecOps_SkillRandomization {
            unique = 0; 
            displayName = "Skill Randomization";
            tooltip = "Setup type of behaviour spec-ops should take to dispatch skills base on the values setup below";
            property = "SpecOps_SkillRandomization";
            control = "combo";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = 5;
            validate = "none";
            typeName = "NUMBER";
            class Values {
                class TR { name = "Random Values"; value = 0;}
                class T1 { name = "More/Less 0.9 Difference"; value = 1;}
                class T2 { name = "More/Less 0.8 Difference"; value = 2;}
                class T3 { name = "More/Less 0.7 Difference"; value = 3;}
                class T4 { name = "More/Less 0.6 Difference"; value = 4;}
                class T5 { name = "More/Less 0.5 Difference"; value = 5;}
                class T6 { name = "More/Less 0.4 Difference"; value = 6;}
                class T7 { name = "More/Less 0.3 Difference"; value = 7;}
                class T8 { name = "More/Less 0.2 Difference"; value = 8;}
                class T9 { name = "More/Less 0.1 Difference"; value = 9;}
                class TE { name = "Exact Values"; value = 10;}
            };
        };
        
        class SpecOps_GroupSKillGeneral {
            unique = 0; 
            displayName = "General";
            tooltip = "";
            property = "SpecOps_GroupSKillGeneral";
            control = "Skill";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = 0.5;
            validate = "none";
            typeName = "NUMBER"; 
        };

        class SpecOps_GroupSKillCourage {
            unique = 0; 
            displayName = "Courage";
            tooltip = "";
            property = "SpecOps_GroupSKillCourage";
            control = "Skill";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = 0.5;
            validate = "none";
            typeName = "NUMBER"; 
        };

        class SpecOps_GroupSKillAccuracy {
            unique = 0; 
            displayName = "Accuracy";
            tooltip = "";
            property = "SpecOps_GroupSKillAccuracy";
            control = "Skill";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = 0.5;
            validate = "none";
            typeName = "NUMBER"; 
        };

        class SpecOps_GroupSKillShake {
            unique = 0; 
            displayName = "Shake";
            tooltip = ".";
            property = "SpecOps_GroupSKillShake";
            control = "Skill";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = 0.5;
            validate = "none";
            typeName = "NUMBER"; 
        };

        class SpecOps_GroupSKillAimSpeed {
            unique = 0; 
            displayName = "Aim Speed";
            tooltip = "";
            property = "SpecOps_GroupSKillAimSpeed";
            control = "Skill";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = 0.5;
            validate = "none";
            typeName = "NUMBER"; 
        };

        class SpecOps_GroupSKillCommanding {
            unique = 0; 
            displayName = "Commanding";
            tooltip = "";
            property = "SpecOps_GroupSKillCommanding";
            control = "Skill";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = 0.5;
            validate = "none";
            typeName = "NUMBER"; 
        };

        class SpecOps_GroupSKillEndurance {
            unique = 0; 
            displayName = "Endurance";
            tooltip = "";
            property = "SpecOps_GroupSKillEndurance";
            control = "Skill";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = 0.5;
            validate = "none";
            typeName = "NUMBER"; 
        };

        class SpecOps_GroupSpotDistance {
            unique = 0; 
            displayName = "Spot Distance";
            tooltip = "";
            property = "SpecOps_GroupSpotDistance";
            control = "Skill";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = 0.5;
            validate = "none";
            typeName = "NUMBER"; 
        };

        class SpecOps_GroupSpotTime {
            unique = 0; 
            displayName = "Spot Time";
            tooltip = "";
            property = "SpecOps_GroupSpotTime";
            control = "Skill";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = 0.5;
            validate = "none";
            typeName = "NUMBER"; 
        };

        class SpecOps_GroupReloadSpeed {
            unique = 0; 
            displayName = "Reload Speed";
            tooltip = "";
            property = "SpecOps_GroupReloadSpeed";
            control = "Skill";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = 0.5;
            validate = "none";
            typeName = "NUMBER"; 
        };




    };
};
