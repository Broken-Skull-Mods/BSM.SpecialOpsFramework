class CfgPatches
{
	class bsm_so_faction_builder
	{
		author = "Broken Skull Mods™";
		name = "Special Ops Framework - Faction Builder";
		units[]={ };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={ "bsm_so_main", "bsm_so_layout_system" };
	};
};

class CfgFunctions {
	class SpecOps {
		class FactionBuilderTool {
			file = "\bsm_so_generators\data\faction_builder\functions";
            class toolCreateFactionAndUnitsFromTrigger {};
            class toolCreateCivFactionAndUnitsFromTrigger {};
			class toolAutoFillLoadout {};
			class toolFillCargoWithPercentageTable {};
			class toolCreateFactionUnitType {};
			class toolExtractUnitTypeInfo {};
		}
	};
};

 

class Cfg3DEN
{
    class Object
    {
        class AttributeCategories
        {

			class SpecialOperationsFramework_Faction_Generator
            {
                collapsed = 1;
				displayName = "BSM DEV - (Faction Unit Setup)";
                class Attributes
                {
					class WarningModule1
					{
						displayName = "Setup Faction";
						data = "AttributeSystemSubcategory";
						control = "SubCategoryDesc2";
						description = "You can only duplicate Commons and Variations (No Difference).. but only have one of each with one camo.";
					};
					class SpecOps_FactionGenerator
					{
						unique = 0; 
						displayName = "Unit Role?";
						tooltip = "The Role preset for the faction usable in spec-ops.";
						property = "SpecOps_FactionGenerator";
						control = "combo";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = -1;
						validate = "none";
						typeName = "NUMBER";
						class Values 
						{
							class T10 { name = "Ignored"; value = -1; };
							class T9 { name = "Survivor"; value = 0; };
							class T1 { name = "Rifleman"; value = 1; };
							class T2 { name = "Machine Gunner"; value = 2; };
							class T3 { name = "Grenadier"; value = 3; };
							class T4 { name = "Medic"; value = 4; };
							class T5 { name = "Marksman"; value = 5; };
							class T6 { name = "Anti-Tank"; value = 6; };
							class T7 { name = "Special (DIVERS/DRONE)"; value = 7; };
							class T8 { name = "Variations"; value = 8; };
							class T11 { name = "Commons"; value = 9; };
							class T12 { name = "Officer"; value = 10; };
						};
					};


					class WarningModule2
					{
						displayName = "Setup Faction";
						data = "AttributeSystemSubcategory";
						control = "SubCategoryDesc2";
						description = "Note: if only one camo type is setup for each the subsequent camos will be a duplicate of the first one.";
					};
					class SpecOps_FactionGeneratorCamo {
						unique = 0; 
						displayName = "Unit Camo?";
						tooltip = "Choose camo of unit.";
						property = "SpecOps_FactionGeneratorCamo";
						control = "combo";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = 0;
						validate = "none";
						typeName = "NUMBER";
						class Values 
						{
							class WL { name = "Woodland"; value = 0; };
							class WT { name = "Winter"; value = 1; };
							class DT { name = "Desert"; value = 2; };
						};
					};

					class SpecOps_FactionGeneratorVoice {
						unique = 0; 
						displayName = "Unit Voice?";
						tooltip = "Choose Unit Voice Type.";
						property = "SpecOps_FactionGeneratorVoice";
						control = "combo";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = 0;
						validate = "none";
						typeName = "NUMBER";
						class Values {
							class AmericanEnglish { name = "American English"; value = 0; };
							class BritishEnglish { name = "British English"; value = 1; };
							class AltianEnglish { name = "Altian English"; value = 2; };
							class Farsi { name = "Farsi"; value = 3; };
							class Chinese { name = "Chinese"; value = 4; };
							class FrenchAfricanAcc { name = "French (African Accent)"; value = 5; };
							class FrenchEnglish { name = "French English"; value = 6; };
							class Polish { name = "Polish"; value = 7; };
							class Russian { name = "Russian"; value = 8; };
						};
					};

					class SpecOps_FactionGeneratorFacePersian
					{
						unique = 0; 
						displayName = "Can be Persian?";
						tooltip = "Choose if this type of face is allowed for this unit";
						property = "SpecOps_FactionGeneratorFacePersian";
						control = "Checkbox";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = false;
						typeName = "BOOL"; 
					};

					class SpecOps_FactionGeneratorFaceWhite
					{
						unique = 0; 
						displayName = "Can be White?";
						tooltip = "Choose if this type of face is allowed for this unit";
						property = "SpecOps_FactionGeneratorFaceWhite";
						control = "Checkbox";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = false;
						typeName = "BOOL"; 
					};

					class SpecOps_FactionGeneratorFaceBlack
					{
						unique = 0; 
						displayName = "Can be Black?";
						tooltip = "Choose if this type of face is allowed for this unit";
						property = "SpecOps_FactionGeneratorFaceBlack";
						control = "Checkbox";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = false;
						typeName = "BOOL"; 
					};

					class SpecOps_FactionGeneratorFaceAsian
					{
						unique = 0; 
						displayName = "Can be Asian?";
						tooltip = "Choose if this type of face is allowed for this unit";
						property = "SpecOps_FactionGeneratorFaceAsian";
						control = "Checkbox";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = false;
						typeName = "BOOL"; 
					};

					class SpecOps_FactionGeneratorFaceGreek
					{
						unique = 0; 
						displayName = "Can be Greek?";
						tooltip = "Choose if this type of face is allowed for this unit";
						property = "SpecOps_FactionGeneratorFaceGreek";
						control = "Checkbox";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = false;
						typeName = "BOOL"; 
					};

					class WarningModule3
					{
						displayName = "AutoFill Feature";
						data = "AttributeSystemSubcategory";
						control = "SubCategoryDesc2";
						description = "REQURIES KAT MEDICAL; Automatically fill the units with medical, common items and mags according to Broken Skull Lunatics' Presets. DO NOT AUTOFILL GL USING NON-NATO 40mm.";
					};
					class SpecOps_FactionAutoFillCommon {
						unique = 0; 
						displayName = "Auto-Fill Common?";
						tooltip = "DO NOT AUTOFILL for GL using different 40mm than NATOs, MAG in the gun are mag used to fill the kit.";
						property = "SpecOps_FactionAutoFillCommon";
						control = "Checkbox";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = false;
						typeName = "BOOL"; 
					};



                }; 
            };

  
			class SpecialOperationsFramework_Garage_Generator
            {
				displayName = "BSM DEV - (Garage Setup)";
                class Attributes
                {
					class WarningModule1
					{
						displayName = "Know This";
						data = "AttributeSystemSubcategory";
						control = "SubCategoryDesc2";
						description = "The unlisted are still available in editor under the faction and the listed are used by the Spec-Ops AO modules to spawn vehicles";
					};
					class SpecOps_GarageVehicleCategory
					{
						unique = 0; 
						displayName = "Category?";
						tooltip = "Vehicle's Category.";
						property = "SpecOps_GarageVehicleCategory";
						control = "combo";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = -1;
						validate = "none";
						typeName = "NUMBER";
						class Values {
							class MDEF { name = "Unlisted"; value = -1; };
							class MAA { name = "Anti-Air"; value = 0; };
							class MTANK { name = "Tank"; value = 1; };
							class MTECHNICAL { name = "Technical"; value = 2; };
							class MTROOP { name = "Troop Transporter"; value = 3; };
						};
					};

					class SpecOps_GarageRequiredCertification
					{
						unique = 0; 
						displayName = "Certification?";
						tooltip = "Level of Certification Required to Drive/Pilot.";
						property = "SpecOps_GarageRequiredCertification";
						control = "combo";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = 0;
						validate = "none";
						typeName = "NUMBER";
						class Values {
							class MALL { name = "Everyone"; value = 0; };
							class DRIVER { name = "Driver"; value = 1; };
							class SUPPORT { name = "Support Specialist"; value = 2; };
						};
					};
                };
            };

			class SpecialOperationsFramework_StaticGun
            {
				displayName = "BSM DEV - (Static Setup)";
                class Attributes
                {
					class SpecOps_StaticGunCategory
					{
						unique = 0; 
						displayName = "Category?";
						tooltip = "used for the Map Layouts, Building Layouts and Faction Building.";
						property = "SpecOps_StaticGunCategory";
						control = "combo";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = -1;
						validate = "none";
						typeName = "NUMBER";
						class Values {
							class MDEF { name = "Unlisted"; value = -1; };
							class SAM { name = "SAM/AA"; value = 0; };
							class AAL { name = "AA-L"; value = 1; };
							class ATL { name = "MORTAR"; value = 2; };
							class LMG { name = "Low MG"; value = 3; };
							class HMG { name = "High MG"; value = 4; };
							class Search { name = "Search Light"; value = 5; };
						};
					};
                };
            };
        };
    };
};