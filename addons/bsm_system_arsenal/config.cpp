class CfgPatches
{
	class bsm_system_arsenal
	{
		author = "Broken Skull Mods";
		name = "BSM - Arsenal System";
		units[]={ };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={ "bsm_so_main", "ace_main", "cba_main"  };
	};
};

class CfgFunctions {
	class SpecOps {
		class ArsenalSystem {
			file = "bsm_system_arsenal\functions";
            class commonAssignFactionArsenal { postInit = 1;  };
			class commonArsenalFactionItems {};
            // class commonInitializeArsenal { postInit = 1; };
			class commonArsenalLoadLastUse { postInit = 1; };
			class commonArsenalInitiliazeSessionPresets {  postInit = 1; };
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

					class Intro
					{
						displayName = "Factionized Arsenal";
						data = "AttributeSystemSubcategory";
						control = "SubCategoryDesc2";
						description = "Setup Faction Arsenal or create one on the fly any unit with Session 1-4 and Camo setup will be available in their respective session setup.";
					};
					class bs_specops_arsenal {
						unique = 0; 
						displayName = "Faction";
						tooltip = ".";
						property = "bs_specops_arsenal";
						control = "combo";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = "";
						validate = "none";
						typeName = "STRING";
						class Values : SpecOps_Module_BLUFOR_Factions {
							class none { name = "No Arsenal"; value = ""; };
							class preset1 { name = "Session 1"; value = "preset_1"; };
							class preset2 { name = "Session 2"; value = "preset_2"; };
							class preset3 { name = "Session 3"; value = "preset_3"; };
							class preset4 { name = "Session 4"; value = "preset_4"; };
						};
					};

					class bs_specops_arsenal_camo {
						unique = 0; 
						displayName = "Faction Camo";
						tooltip = "Camo for the Faction Presets.";
						property = "bs_specops_arsenal_camo";
						control = "combo";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = "WL";
						validate = "none";
						typeName = "STRING";
						class Values {
							class Camo_Woodland { name = "Woodland"; value = "WL"; };
							class Camo_Winter { name = "Winter"; value = "WT"; };
							class Camo_Desert { name = "Desert"; value = "DT"; };
						};
					};

					class WarningModule4
					{
						displayName = "Includes Common";
						data = "AttributeSystemSubcategory";
						control = "SubCategoryDesc2";
						description = "Include commons items in arsenal from various mods, if avaiable.";
					};

					class bsm_so_commonVanila
					{
						unique = 0; 
						displayName = "Common Vanilla?";
						tooltip = "Include vanilla common items such as (Map, GPS, Smoke Grenades, etc...)";
						property = "bsm_so_commonVanila";
						control = "Checkbox";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = false;
						typeName = "BOOL"; 
					};

					class bsm_so_commonACE
					{
						unique = 0; 
						displayName = "Common ACE?";
						tooltip = "Include ACE common items such as (ACE Medical Items, Body Bags, Krestel, MicroDARG, DARG, Spray Cans, etc...)";
						property = "bsm_so_commonACE";
						control = "Checkbox";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = false;
						typeName = "BOOL"; 
					};

					class bsm_so_commonKAT
					{
						unique = 0; 
						displayName = "Common KAT?";
						tooltip = "Include ACE common items such as (KAT Medical Items, etc...)";
						property = "bsm_so_commonKAT";
						control = "Checkbox";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = false;
						typeName = "BOOL"; 
					};

					class bsm_so_commonUSP
					{
						unique = 0; 
						displayName = "Common USP?";
						tooltip = "Include USP common items like Caps and Glasses.";
						property = "bsm_so_commonUSP";
						control = "Checkbox";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = false;
						typeName = "BOOL"; 
					};

					class bsm_so_commonPLP
					{
						unique = 0; 
						displayName = "Common PLP?";
						tooltip = "Include PLP common items like Cigars and Gin Bottles.";
						property = "bsm_so_commonPLP";
						control = "Checkbox";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = false;
						typeName = "BOOL"; 
					};

					class bsm_so_commonTFARLR
					{
						unique = 0; 
						displayName = "Common TFAR (LR)?";
						tooltip = "Include all TFAR radio bp and base game tfar compatible LR.";
						property = "bsm_so_commonTFARLR";
						control = "Checkbox";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = false;
						typeName = "BOOL"; 
					};

					
					class bsm_so_commonTFARSR
					{
						unique = 0; 
						displayName = "Common TFAR (LR)?";
						tooltip = "Include all TFAR short range radios.";
						property = "bsm_so_commonTFARSR";
						control = "Checkbox";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = false;
						typeName = "BOOL"; 
					};

					class bsm_so_commonOTHER
					{
						unique = 0; 
						displayName = "Common Others?";
						tooltip = "Include Other common items such as Cigarettes and other stuff from other mods.";
						property = "bsm_so_commonOTHER";
						control = "Checkbox";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = false;
						typeName = "BOOL"; 
					};

					class WarningModule3
					{
						displayName = "Initial Faction";
						data = "AttributeSystemSubcategory";
						control = "SubCategoryDesc2";
						description = "Only set this once to signal this arsenal setup is the player faction and should be used to load the last kit the player used in past sessions if available.";
					};

					class bsm_so_isFactionInitial
					{
						unique = 0; 
						displayName = "Is This Player Faction?";
						tooltip = "Mark this the define as faction is auto load last loadout works";
						property = "bsm_so_isFactionInitial";
						control = "Checkbox";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = false;
						typeName = "BOOL"; 
					};


					class WarningModule5
					{
						displayName = "On-the-Fly Faction";
						data = "AttributeSystemSubcategory";
						control = "SubCategoryDesc2";
						description = "You can create faction kit on the fly, place unit and setup the following values";
					};

					class bs_specops_arsenal_ingame {
						unique = 0; 
						displayName = "Unit Faction Faction";
						tooltip = "Set the session id you can have up to 4 faction on the fly, units will be deleted on start.";
						property = "bs_specops_arsenal_ingame";
						control = "combo";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = "";
						validate = "none";
						typeName = "STRING";
						class Values {
							class preset1 { name = "Session 1"; value = "preset_1"; };
							class preset2 { name = "Session 2"; value = "preset_2"; };
							class preset3 { name = "Session 3"; value = "preset_3"; };
							class preset4 { name = "Session 4"; value = "preset_4"; };
						};
					};

					
					class bsm_so_arsenal_unitRifleman
					{
						property = "bsm_so_arsenal_unitRifleman";
						displayName = "Unit as Rifleman Preset?";
						tooltip = "Setup this unit as the rifleman preset.";
						unique = 0; 
						control = "Checkbox";
						expression = "_this setVariable ['%s', _value, true];";
						defaultValue = false;
						typeName = "BOOL"; 
					};

					class bsm_so_arsenal_unitAR : bsm_so_arsenal_unitRifleman
					{
						displayName = "Unit as AutoRifleman Preset?";
						tooltip = "Setup this unit as the AutoRifleman preset.";
						property = "bsm_so_arsenal_unitAR";
					};

					class bsm_so_arsenal_unitGren : bsm_so_arsenal_unitRifleman
					{
						displayName = "Unit as Grenadier Preset?";
						tooltip = "Setup this unit as the Grenadier preset.";
						property = "bsm_so_arsenal_unitGren";
					};

					class bsm_so_arsenal_unitMedic : bsm_so_arsenal_unitRifleman
					{
						displayName = "Unit as Medic Preset?";
						tooltip = "Setup this unit as the Medic preset.";
						property = "bsm_so_arsenal_unitMedic";
					};

					class bsm_so_arsenal_unitSniper : bsm_so_arsenal_unitRifleman
					{
						displayName = "Unit as Sniper Preset?";
						tooltip = "Setup this unit as the Sniper preset.";
						property = "bsm_so_arsenal_unitSniper";
					};

					class bsm_so_arsenal_unitSpecial1 : bsm_so_arsenal_unitRifleman
					{
						displayName = "Unit as Anti-Tank Preset?";
						tooltip = "Setup this unit as the Anti-Tank preset.";
						property = "bsm_so_arsenal_unitSpecial1";
					};
					
					class bsm_so_arsenal_unitSpecial2 : bsm_so_arsenal_unitRifleman
					{
						displayName = "Unit as Special (DIVER/DRONE) Preset?";
						tooltip = "Setup this unit as the Special preset.";
						property = "bsm_so_arsenal_unitSpecial2";
					};

					class bsm_so_arsenal_unitVariation : bsm_so_arsenal_unitRifleman
					{
						displayName = "Unit as Arsenal Variation?";
						tooltip = "This will be use to fill the arsenal with extra things variation can be used as many time as required";
						property = "bsm_so_arsenal_unitVariation";
					};

                };
            };
		};
	};
};