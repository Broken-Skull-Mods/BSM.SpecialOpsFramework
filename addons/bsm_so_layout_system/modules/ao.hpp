class bsm_so_ao_module : Module_F {
    scope = 2;
    displayName = "AO Module";
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
        size3[] = {100, 100, -1};
        IsRectangle = 0;
    };

    class EventHandlers {
        postInit = "[(_this select 0)] call SpecOps_fnc_aoModuleInitialize;";
    };

    class Attributes {            

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


        class WarningModule1
        {
            displayName = "Trigger Setup";
            data = "AttributeSystemSubcategory";
            control = "SubCategoryDesc2";
            description = "The following values will be ignored if a trigger is connected to the ao module.";
        };
        class SpecOps_SizeMultiple {
            unique = 0; 
            displayName = "AO Size";
            tooltip = "Define this specific zone multiplier.";
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
            tooltip = "This should be unique name the AO so when players are in it, it marks as visited.";
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
            tooltip = "Activate AO only whenever those other ao been visited (Only for Auto-Trigger)";
            property = "SpecOps_AOActivateWhenVisited";
            control = "EditArray";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = nil;
            validate = "none";
            typeName = "ARRAY";
        };

        class SpecOps_ActivateForAircraftOnly {
            unique = 0; 
            displayName = "Activate For Aircraft Only?";
            tooltip = "The AO will only be active for player in an aircraft.";
            property = "SpecOps_ActivateForAircraftOnly";
            control = "Checkbox";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = false;
            typeName = "BOOL"; 
        };

        class MapSettings
        {
            data = "AttributeSystemSubcategory"; // This is needed for the attribute to work
            control = "SubCategory";
            displayName = "Map Setup"; // Visible text. Despite the attribute code saying the property should be title, displayName is correct
        };

        class SpecOps_MarkAO {
            unique = 0; 
            displayName = "Mark AO (On Start)?";
            tooltip = "Will mark the AO area of effect and danger zone.";
            property = "SpecOps_MarkAO";
            control = "Checkbox";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = true;
            typeName = "BOOL"; 
        };

        class SpecOps_MarkAOWhenVisited {
            unique = 0; 
            displayName = "Mark AO (When Visited)";
            tooltip = "This AO will be marked or unmarked when other AOs been visited (eg: AO_A, AO_B will activate this AO_C)";
            property = "SpecOps_MarkAOWhenVisited";
            control = "EditArray";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = nil;
            validate = "none";
            typeName = "ARRAY";
        };


        class UnitCountSettings
        {
            data = "AttributeSystemSubcategory"; // This is needed for the attribute to work
            control = "SubCategory";
            displayName = "Unit Count Setup"; // Visible text. Despite the attribute code saying the property should be title, displayName is correct
        };

        class SpecOps_MaxEnemies {
            unique = 0; 
            displayName = "Max Enemies";
            tooltip = "";
            property = "SpecOps_MaxEnemies";
            control = "Edit";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = 8;
            validate = "none";
            typeName = "NUMBER"; 
        };

        class SpecOps_CivilianNb {
            unique = 0; 
            displayName = "Max Civilians";
            tooltip = "Spawns in groups up to 3 per group 1 might equal 3";
            property = "SpecOps_CivilianNb";
            control = "Edit";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = 0;
            validate = "none";
            typeName = "NUMBER"; 
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


        class WarningModule
        {
            displayName = "CQB Setup (if applicable)";
            data = "AttributeSystemSubcategory";
            control = "SubCategoryDesc2";
            description = "The following values will be ignored if an Building AO Module is connected.. garrison become 0 at the ao level so only patrol can spawn in that case.";
        };
        class SpecOps_GarrisonRate {
            unique = 0; 
            displayName = "CQB & Patrol Ratio";
            tooltip = " 0 = No Garrion CQB, Only Patrols | 1 = Only Garrison CQB";
            property = "SpecOps_GarrisonRate";
            control = "Edit";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = 0;
            validate = "none";
            typeName = "NUMBER"; 
        };

        class SpecOps_ForcedTier {
            unique = 0; 
            displayName = "Max Tiers";
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

        class OtherSettings
        {
            data = "AttributeSystemSubcategory"; // This is needed for the attribute to work
            control = "SubCategory";
            displayName = "Other Setup"; // Visible text. Despite the attribute code saying the property should be title, displayName is correct
        };

        class SpecOps_MaxIED {
            unique = 0; 
            displayName = "Max IED";
            tooltip = "Maximum possible IED in the area (max: one per building or as many as spawn point allows)";
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
            tooltip = "Maximum static high gunners  [Can be GL or MG depending on faction] (max: one per building or as many as spawn point allows)";
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

        class SpecOps_SpawnVecOutskirt {
            unique = 0; 
            displayName = "Vehicles Outskirt Only?";
            tooltip = "Spawn the vehicle on the outskirt. (Only work for Legacy Spawning, not the map layout one)";
            property = "SpecOps_SpawnVecOutskirt";
            control = "Checkbox";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = false;
            typeName = "BOOL"; 
        };

        class SpecOps_TechnicalVehicles {
            unique = 0; 
            displayName = "Max Technical Vehicles";
            tooltip = "";
            property = "SpecOps_TechnicalVehicles";
            control = "Edit";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = 0;
            validate = "none";
            typeName = "NUMBER"; 
        };

        class SpecOps_TankVehicles {
            unique = 0; 
            displayName = "Max Tank Vehicles";
            tooltip = "";
            property = "SpecOps_TankVehicles";
            control = "Edit";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = 0;
            validate = "none";
            typeName = "NUMBER"; 
        };

        class SpecOps_AntiAircraftVehicles {
            unique = 0; 
            displayName = "Max AA Vehicles";
            tooltip = "";
            property = "SpecOps_AntiAircraftVehicles";
            control = "Edit";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = 0;
            validate = "none";
            typeName = "NUMBER"; 
        };

        class SpecOps_TransportTruckIndicator {
            unique = 0; 
            displayName = "Activate Transport Truck Indicator?";
            tooltip = "The AO will feature transport trucks to simulate how many enemies there is present in the AO. (Only available in new system with map layouts)";
            property = "SpecOps_TransportTruckIndicator";
            control = "Checkbox";
            expression = "_this setVariable ['%s', _value, true];";
            defaultValue = false;
            typeName = "BOOL"; 
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

