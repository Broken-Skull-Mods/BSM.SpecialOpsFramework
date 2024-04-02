

class CfgVehicles {
	class B_Survivor_F;
	class I_G_Survivor_F;
	class O_G_Survivor_F; 
	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_Rifleman_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Rifleman (Woodland)"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"CamoHead_White_11_F", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "U_BG_Guerilla2_2"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"arifle_MX_Black_F","launch_RPG32_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","launch_RPG32_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","acc_pointer_IR","optic_DMS_weathered_Kir_F",{"100Rnd_65x39_caseless_black_mag",100},{},""},{"launch_RPG32_F","","","",{"RPG32_F",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_BG_Guerilla2_2",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"V_PlateCarrier2_rgr",{{"30Rnd_65x39_caseless_mag",7,30},{"SmokeShell",10,1},{"HandGrenade",1,1}}},{"B_Kitbag_sgg",{{"ACE_wirecutter",1},{"ACE_EntrenchingTool",1},{"30Rnd_9x21_Mag",1,30},{"30Rnd_65x39_caseless_black_mag",20,30}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_Rifleman_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Rifleman (Woodland)"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"CamoHead_White_11_F", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "U_BG_Guerilla2_2"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"arifle_MX_Black_F","launch_RPG32_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","launch_RPG32_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","acc_pointer_IR","optic_DMS_weathered_Kir_F",{"100Rnd_65x39_caseless_black_mag",100},{},""},{"launch_RPG32_F","","","",{"RPG32_F",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_BG_Guerilla2_2",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"V_PlateCarrier2_rgr",{{"30Rnd_65x39_caseless_mag",7,30},{"SmokeShell",10,1},{"HandGrenade",1,1}}},{"B_Kitbag_sgg",{{"ACE_wirecutter",1},{"ACE_EntrenchingTool",1},{"30Rnd_9x21_Mag",1,30},{"30Rnd_65x39_caseless_black_mag",20,30}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_Rifleman_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Rifleman (Woodland)"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"CamoHead_White_11_F", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "U_BG_Guerilla2_2"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"arifle_MX_Black_F","launch_RPG32_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","launch_RPG32_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","acc_pointer_IR","optic_DMS_weathered_Kir_F",{"100Rnd_65x39_caseless_black_mag",100},{},""},{"launch_RPG32_F","","","",{"RPG32_F",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_BG_Guerilla2_2",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"V_PlateCarrier2_rgr",{{"30Rnd_65x39_caseless_mag",7,30},{"SmokeShell",10,1},{"HandGrenade",1,1}}},{"B_Kitbag_sgg",{{"ACE_wirecutter",1},{"ACE_EntrenchingTool",1},{"30Rnd_9x21_Mag",1,30},{"30Rnd_65x39_caseless_black_mag",20,30}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_GL_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Grenadier (Woodland)"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"CamoHead_White_02_F", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "U_BG_Guerilla2_3"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"arifle_MX_GL_Black_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_MX_GL_Black_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_GL_Black_F","muzzle_snds_H","acc_pointer_IR","optic_DMS_weathered_Kir_F",{"100Rnd_65x39_caseless_black_mag",100},{"1Rnd_HE_Grenade_shell",1},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_BG_Guerilla2_3",{{"ACE_elasticBandage",15},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3},{"ACE_personalAidKit",1},{"ACE_microDAGR",1}}},{"V_PlateCarrier2_rgr",{{"ACE_HuntIR_monitor",1},{"SmokeShell",5,1},{"30Rnd_65x39_caseless_mag",7,30},{"HandGrenade",1,1},{"30Rnd_65x39_caseless_black_mag",2,30}}},{"B_Kitbag_sgg",{{"1Rnd_HE_Grenade_shell",19,1},{"1Rnd_Smoke_Grenade_shell",15,1},{"1Rnd_SmokeRed_Grenade_shell",3,1},{"ACE_HuntIR_M203",3,1},{"30Rnd_65x39_caseless_black_mag",11,30}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_GL_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Grenadier (Woodland)"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"CamoHead_White_02_F", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "U_BG_Guerilla2_3"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"arifle_MX_GL_Black_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_MX_GL_Black_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_GL_Black_F","muzzle_snds_H","acc_pointer_IR","optic_DMS_weathered_Kir_F",{"100Rnd_65x39_caseless_black_mag",100},{"1Rnd_HE_Grenade_shell",1},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_BG_Guerilla2_3",{{"ACE_elasticBandage",15},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3},{"ACE_personalAidKit",1},{"ACE_microDAGR",1}}},{"V_PlateCarrier2_rgr",{{"ACE_HuntIR_monitor",1},{"SmokeShell",5,1},{"30Rnd_65x39_caseless_mag",7,30},{"HandGrenade",1,1},{"30Rnd_65x39_caseless_black_mag",2,30}}},{"B_Kitbag_sgg",{{"1Rnd_HE_Grenade_shell",19,1},{"1Rnd_Smoke_Grenade_shell",15,1},{"1Rnd_SmokeRed_Grenade_shell",3,1},{"ACE_HuntIR_M203",3,1},{"30Rnd_65x39_caseless_black_mag",11,30}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_GL_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Grenadier (Woodland)"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"CamoHead_White_02_F", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "U_BG_Guerilla2_3"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"arifle_MX_GL_Black_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_MX_GL_Black_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_GL_Black_F","muzzle_snds_H","acc_pointer_IR","optic_DMS_weathered_Kir_F",{"100Rnd_65x39_caseless_black_mag",100},{"1Rnd_HE_Grenade_shell",1},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_BG_Guerilla2_3",{{"ACE_elasticBandage",15},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3},{"ACE_personalAidKit",1},{"ACE_microDAGR",1}}},{"V_PlateCarrier2_rgr",{{"ACE_HuntIR_monitor",1},{"SmokeShell",5,1},{"30Rnd_65x39_caseless_mag",7,30},{"HandGrenade",1,1},{"30Rnd_65x39_caseless_black_mag",2,30}}},{"B_Kitbag_sgg",{{"1Rnd_HE_Grenade_shell",19,1},{"1Rnd_Smoke_Grenade_shell",15,1},{"1Rnd_SmokeRed_Grenade_shell",3,1},{"ACE_HuntIR_M203",3,1},{"30Rnd_65x39_caseless_black_mag",11,30}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_AR_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Machine Gunner (Woodland)"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"CamoHead_Greek_03_F", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "U_C_HunterBody_grn"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"LMG_Mk200_F","launch_RPG32_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"LMG_Mk200_F","launch_RPG32_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"LMG_Mk200_F","muzzle_snds_H","acc_pointer_IR","optic_Hamr",{"200Rnd_65x39_cased_Box",200},{},""},{"launch_RPG32_F","","","",{"RPG32_F",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_C_HunterBody_grn",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"V_PlateCarrier2_rgr",{{"SmokeShell",10,1},{"HandGrenade",1,1}}},{"B_Kitbag_sgg",{{"200Rnd_65x39_cased_Box",3,200},{"HandGrenade",4,1},{"SmokeShell",15,1}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_AR_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Machine Gunner (Woodland)"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"CamoHead_Greek_03_F", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "U_C_HunterBody_grn"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"LMG_Mk200_F","launch_RPG32_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"LMG_Mk200_F","launch_RPG32_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"LMG_Mk200_F","muzzle_snds_H","acc_pointer_IR","optic_Hamr",{"200Rnd_65x39_cased_Box",200},{},""},{"launch_RPG32_F","","","",{"RPG32_F",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_C_HunterBody_grn",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"V_PlateCarrier2_rgr",{{"SmokeShell",10,1},{"HandGrenade",1,1}}},{"B_Kitbag_sgg",{{"200Rnd_65x39_cased_Box",3,200},{"HandGrenade",4,1},{"SmokeShell",15,1}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_AR_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Machine Gunner (Woodland)"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"CamoHead_Greek_03_F", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "U_C_HunterBody_grn"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"LMG_Mk200_F","launch_RPG32_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"LMG_Mk200_F","launch_RPG32_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"LMG_Mk200_F","muzzle_snds_H","acc_pointer_IR","optic_Hamr",{"200Rnd_65x39_cased_Box",200},{},""},{"launch_RPG32_F","","","",{"RPG32_F",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_C_HunterBody_grn",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"V_PlateCarrier2_rgr",{{"SmokeShell",10,1},{"HandGrenade",1,1}}},{"B_Kitbag_sgg",{{"200Rnd_65x39_cased_Box",3,200},{"HandGrenade",4,1},{"SmokeShell",15,1}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_RTO_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Radio Operator (Woodland)"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_02", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "U_BG_Guerilla1_1"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_RadioBag_01_eaf_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","acc_pointer_IR","optic_DMS_weathered_Kir_F",{"100Rnd_65x39_caseless_black_mag",100},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_BG_Guerilla1_1",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"V_PlateCarrier2_rgr",{{"30Rnd_65x39_caseless_mag",11,30},{"SmokeShell",5,1},{"HandGrenade",1,1}}},{"B_RadioBag_01_eaf_F",{{"30Rnd_9x21_Mag",1,30},{"30Rnd_65x39_caseless_black_mag",7,30}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_RTO_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Radio Operator (Woodland)"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_02", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "U_BG_Guerilla1_1"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_RadioBag_01_eaf_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","acc_pointer_IR","optic_DMS_weathered_Kir_F",{"100Rnd_65x39_caseless_black_mag",100},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_BG_Guerilla1_1",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"V_PlateCarrier2_rgr",{{"30Rnd_65x39_caseless_mag",11,30},{"SmokeShell",5,1},{"HandGrenade",1,1}}},{"B_RadioBag_01_eaf_F",{{"30Rnd_9x21_Mag",1,30},{"30Rnd_65x39_caseless_black_mag",7,30}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_RTO_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Radio Operator (Woodland)"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_02", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "U_BG_Guerilla1_1"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_RadioBag_01_eaf_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","acc_pointer_IR","optic_DMS_weathered_Kir_F",{"100Rnd_65x39_caseless_black_mag",100},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_BG_Guerilla1_1",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"V_PlateCarrier2_rgr",{{"30Rnd_65x39_caseless_mag",11,30},{"SmokeShell",5,1},{"HandGrenade",1,1}}},{"B_RadioBag_01_eaf_F",{{"30Rnd_9x21_Mag",1,30},{"30Rnd_65x39_caseless_black_mag",7,30}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_SNP_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Sniper (Woodland)"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"GreekHead_A3_05", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "U_BG_Guerilla2_2"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"srifle_LRR_camo_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"srifle_LRR_camo_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"srifle_LRR_camo_F","","","optic_tws",{"7Rnd_408_Mag",7},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_BG_Guerilla2_2",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"V_PlateCarrier2_rgr",{{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_Kestrel4500",1},{"SmokeShell",10,1},{"HandGrenade",1,1}}},{"B_Kitbag_sgg",{{"30Rnd_9x21_Mag",1,30},{"7Rnd_408_Mag",19,7}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_SNP_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Sniper (Woodland)"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"GreekHead_A3_05", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "U_BG_Guerilla2_2"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"srifle_LRR_camo_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"srifle_LRR_camo_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"srifle_LRR_camo_F","","","optic_tws",{"7Rnd_408_Mag",7},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_BG_Guerilla2_2",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"V_PlateCarrier2_rgr",{{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_Kestrel4500",1},{"SmokeShell",10,1},{"HandGrenade",1,1}}},{"B_Kitbag_sgg",{{"30Rnd_9x21_Mag",1,30},{"7Rnd_408_Mag",19,7}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_SNP_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Sniper (Woodland)"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"GreekHead_A3_05", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "U_BG_Guerilla2_2"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"srifle_LRR_camo_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"srifle_LRR_camo_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"srifle_LRR_camo_F","","","optic_tws",{"7Rnd_408_Mag",7},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_BG_Guerilla2_2",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"V_PlateCarrier2_rgr",{{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_Kestrel4500",1},{"SmokeShell",10,1},{"HandGrenade",1,1}}},{"B_Kitbag_sgg",{{"30Rnd_9x21_Mag",1,30},{"7Rnd_408_Mag",19,7}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_Medic_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Doctor (Woodland)"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_05", "Male02ENG" ,"G_NATO_default"};
		uniformClass = "U_C_Journalist"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","acc_pointer_IR","optic_DMS_weathered_Kir_F",{"100Rnd_65x39_caseless_black_mag",100},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_C_Journalist",{{"30Rnd_65x39_caseless_black_mag",2,30}}},{"V_PlateCarrier2_rgr",{{"SmokeShell",8,1},{"30Rnd_65x39_caseless_black_mag",9,30},{"SmokeShellYellow",2,1},{"SmokeShellRed",1,1}}},{"B_Kitbag_sgg",{{"ACE_elasticBandage",40},{"ACE_quikclot",40},{"ACE_salineIV",12},{"ACE_tourniquet",10},{"ACE_salineIV_500",9},{"ACE_epinephrine",12},{"ACE_morphine",12},{"ACE_splint",13}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_Medic_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Doctor (Woodland)"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_05", "Male02ENG" ,"G_NATO_default"};
		uniformClass = "U_C_Journalist"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","acc_pointer_IR","optic_DMS_weathered_Kir_F",{"100Rnd_65x39_caseless_black_mag",100},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_C_Journalist",{{"30Rnd_65x39_caseless_black_mag",2,30}}},{"V_PlateCarrier2_rgr",{{"SmokeShell",8,1},{"30Rnd_65x39_caseless_black_mag",9,30},{"SmokeShellYellow",2,1},{"SmokeShellRed",1,1}}},{"B_Kitbag_sgg",{{"ACE_elasticBandage",40},{"ACE_quikclot",40},{"ACE_salineIV",12},{"ACE_tourniquet",10},{"ACE_salineIV_500",9},{"ACE_epinephrine",12},{"ACE_morphine",12},{"ACE_splint",13}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_Medic_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Doctor (Woodland)"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_05", "Male02ENG" ,"G_NATO_default"};
		uniformClass = "U_C_Journalist"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","acc_pointer_IR","optic_DMS_weathered_Kir_F",{"100Rnd_65x39_caseless_black_mag",100},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_C_Journalist",{{"30Rnd_65x39_caseless_black_mag",2,30}}},{"V_PlateCarrier2_rgr",{{"SmokeShell",8,1},{"30Rnd_65x39_caseless_black_mag",9,30},{"SmokeShellYellow",2,1},{"SmokeShellRed",1,1}}},{"B_Kitbag_sgg",{{"ACE_elasticBandage",40},{"ACE_quikclot",40},{"ACE_salineIV",12},{"ACE_tourniquet",10},{"ACE_salineIV_500",9},{"ACE_epinephrine",12},{"ACE_morphine",12},{"ACE_splint",13}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_DIVER_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Diver (Woodland)"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"CamoHead_White_15_F", "Male04ENG" ,"G_NATO_default"};
		uniformClass = "U_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_B_Diving","H_Booniehat_dgtl"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_B_Diving","H_Booniehat_dgtl"}; 
		weapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_blk";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","acc_pointer_IR","optic_DMS_weathered_Kir_F",{"100Rnd_65x39_caseless_black_mag",100},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_Wetsuit",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3},{"30Rnd_65x39_caseless_black_mag",6,30}}},{"V_RebreatherB",{}},{"B_AssaultPack_blk",{{"ACE_wirecutter",1},{"30Rnd_9x21_Mag",1,30},{"30Rnd_65x39_caseless_black_mag",12,30}}},"H_Booniehat_dgtl","G_B_Diving",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_DIVER_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Diver (Woodland)"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"CamoHead_White_15_F", "Male04ENG" ,"G_NATO_default"};
		uniformClass = "U_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_B_Diving","H_Booniehat_dgtl"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_B_Diving","H_Booniehat_dgtl"}; 
		weapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_blk";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","acc_pointer_IR","optic_DMS_weathered_Kir_F",{"100Rnd_65x39_caseless_black_mag",100},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_Wetsuit",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3},{"30Rnd_65x39_caseless_black_mag",6,30}}},{"V_RebreatherB",{}},{"B_AssaultPack_blk",{{"ACE_wirecutter",1},{"30Rnd_9x21_Mag",1,30},{"30Rnd_65x39_caseless_black_mag",12,30}}},"H_Booniehat_dgtl","G_B_Diving",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_DIVER_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Diver (Woodland)"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"CamoHead_White_15_F", "Male04ENG" ,"G_NATO_default"};
		uniformClass = "U_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_B_Diving","H_Booniehat_dgtl"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_B_Diving","H_Booniehat_dgtl"}; 
		weapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_blk";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","acc_pointer_IR","optic_DMS_weathered_Kir_F",{"100Rnd_65x39_caseless_black_mag",100},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_Wetsuit",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3},{"30Rnd_65x39_caseless_black_mag",6,30}}},{"V_RebreatherB",{}},{"B_AssaultPack_blk",{{"ACE_wirecutter",1},{"30Rnd_9x21_Mag",1,30},{"30Rnd_65x39_caseless_black_mag",12,30}}},"H_Booniehat_dgtl","G_B_Diving",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_Officer_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Officer (Woodland)"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"CamoHead_Persian_02_F", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "U_lxWS_B_CombatUniform_desert_tshirt"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","H_Beret_Colonel"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","H_Beret_Colonel"}; 
		weapons[] = {"hgun_Pistol_heavy_01_green_F","Binocular"}; 
		respawnWeapons[] = {"hgun_Pistol_heavy_01_green_F","Binocular"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"hgun_Pistol_heavy_01_green_F","","","",{"11Rnd_45ACP_Mag",15},{},""},{"U_lxWS_B_CombatUniform_desert_tshirt",{}},{},{},"H_Beret_Colonel","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_Officer_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Officer (Woodland)"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"CamoHead_Persian_02_F", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "U_lxWS_B_CombatUniform_desert_tshirt"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","H_Beret_Colonel"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","H_Beret_Colonel"}; 
		weapons[] = {"hgun_Pistol_heavy_01_green_F","Binocular"}; 
		respawnWeapons[] = {"hgun_Pistol_heavy_01_green_F","Binocular"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"hgun_Pistol_heavy_01_green_F","","","",{"11Rnd_45ACP_Mag",15},{},""},{"U_lxWS_B_CombatUniform_desert_tshirt",{}},{},{},"H_Beret_Colonel","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_Officer_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Officer (Woodland)"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"CamoHead_Persian_02_F", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "U_lxWS_B_CombatUniform_desert_tshirt"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","H_Beret_Colonel"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","H_Beret_Colonel"}; 
		weapons[] = {"hgun_Pistol_heavy_01_green_F","Binocular"}; 
		respawnWeapons[] = {"hgun_Pistol_heavy_01_green_F","Binocular"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"hgun_Pistol_heavy_01_green_F","","","",{"11Rnd_45ACP_Mag",15},{},""},{"U_lxWS_B_CombatUniform_desert_tshirt",{}},{},{},"H_Beret_Colonel","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_Rifleman_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Rifleman (Winter)"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_14", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "U_BG_Guerilla2_2"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"arifle_MX_Black_F","launch_RPG32_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","launch_RPG32_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","acc_pointer_IR","optic_DMS_weathered_Kir_F",{"100Rnd_65x39_caseless_black_mag",100},{},""},{"launch_RPG32_F","","","",{"RPG32_F",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_BG_Guerilla2_2",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"V_PlateCarrier2_rgr",{{"30Rnd_65x39_caseless_mag",7,30},{"SmokeShell",10,1},{"HandGrenade",1,1}}},{"B_Kitbag_sgg",{{"ACE_wirecutter",1},{"ACE_EntrenchingTool",1},{"30Rnd_9x21_Mag",1,30},{"30Rnd_65x39_caseless_black_mag",20,30}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_Rifleman_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Rifleman (Winter)"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_14", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "U_BG_Guerilla2_2"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"arifle_MX_Black_F","launch_RPG32_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","launch_RPG32_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","acc_pointer_IR","optic_DMS_weathered_Kir_F",{"100Rnd_65x39_caseless_black_mag",100},{},""},{"launch_RPG32_F","","","",{"RPG32_F",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_BG_Guerilla2_2",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"V_PlateCarrier2_rgr",{{"30Rnd_65x39_caseless_mag",7,30},{"SmokeShell",10,1},{"HandGrenade",1,1}}},{"B_Kitbag_sgg",{{"ACE_wirecutter",1},{"ACE_EntrenchingTool",1},{"30Rnd_9x21_Mag",1,30},{"30Rnd_65x39_caseless_black_mag",20,30}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_Rifleman_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Rifleman (Winter)"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_14", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "U_BG_Guerilla2_2"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"arifle_MX_Black_F","launch_RPG32_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","launch_RPG32_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","acc_pointer_IR","optic_DMS_weathered_Kir_F",{"100Rnd_65x39_caseless_black_mag",100},{},""},{"launch_RPG32_F","","","",{"RPG32_F",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_BG_Guerilla2_2",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"V_PlateCarrier2_rgr",{{"30Rnd_65x39_caseless_mag",7,30},{"SmokeShell",10,1},{"HandGrenade",1,1}}},{"B_Kitbag_sgg",{{"ACE_wirecutter",1},{"ACE_EntrenchingTool",1},{"30Rnd_9x21_Mag",1,30},{"30Rnd_65x39_caseless_black_mag",20,30}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_GL_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Grenadier (Winter)"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"CamoHead_White_01_F", "Male02ENG" ,"G_NATO_default"};
		uniformClass = "U_BG_Guerilla2_3"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"arifle_MX_GL_Black_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_MX_GL_Black_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_GL_Black_F","muzzle_snds_H","acc_pointer_IR","optic_DMS_weathered_Kir_F",{"100Rnd_65x39_caseless_black_mag",100},{"1Rnd_HE_Grenade_shell",1},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_BG_Guerilla2_3",{{"ACE_elasticBandage",15},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3},{"ACE_personalAidKit",1},{"ACE_microDAGR",1}}},{"V_PlateCarrier2_rgr",{{"ACE_HuntIR_monitor",1},{"SmokeShell",5,1},{"30Rnd_65x39_caseless_mag",7,30},{"HandGrenade",1,1},{"30Rnd_65x39_caseless_black_mag",2,30}}},{"B_Kitbag_sgg",{{"1Rnd_HE_Grenade_shell",19,1},{"1Rnd_Smoke_Grenade_shell",15,1},{"1Rnd_SmokeRed_Grenade_shell",3,1},{"ACE_HuntIR_M203",3,1},{"30Rnd_65x39_caseless_black_mag",11,30}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_GL_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Grenadier (Winter)"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"CamoHead_White_01_F", "Male02ENG" ,"G_NATO_default"};
		uniformClass = "U_BG_Guerilla2_3"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"arifle_MX_GL_Black_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_MX_GL_Black_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_GL_Black_F","muzzle_snds_H","acc_pointer_IR","optic_DMS_weathered_Kir_F",{"100Rnd_65x39_caseless_black_mag",100},{"1Rnd_HE_Grenade_shell",1},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_BG_Guerilla2_3",{{"ACE_elasticBandage",15},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3},{"ACE_personalAidKit",1},{"ACE_microDAGR",1}}},{"V_PlateCarrier2_rgr",{{"ACE_HuntIR_monitor",1},{"SmokeShell",5,1},{"30Rnd_65x39_caseless_mag",7,30},{"HandGrenade",1,1},{"30Rnd_65x39_caseless_black_mag",2,30}}},{"B_Kitbag_sgg",{{"1Rnd_HE_Grenade_shell",19,1},{"1Rnd_Smoke_Grenade_shell",15,1},{"1Rnd_SmokeRed_Grenade_shell",3,1},{"ACE_HuntIR_M203",3,1},{"30Rnd_65x39_caseless_black_mag",11,30}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_GL_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Grenadier (Winter)"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"CamoHead_White_01_F", "Male02ENG" ,"G_NATO_default"};
		uniformClass = "U_BG_Guerilla2_3"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"arifle_MX_GL_Black_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_MX_GL_Black_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_GL_Black_F","muzzle_snds_H","acc_pointer_IR","optic_DMS_weathered_Kir_F",{"100Rnd_65x39_caseless_black_mag",100},{"1Rnd_HE_Grenade_shell",1},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_BG_Guerilla2_3",{{"ACE_elasticBandage",15},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3},{"ACE_personalAidKit",1},{"ACE_microDAGR",1}}},{"V_PlateCarrier2_rgr",{{"ACE_HuntIR_monitor",1},{"SmokeShell",5,1},{"30Rnd_65x39_caseless_mag",7,30},{"HandGrenade",1,1},{"30Rnd_65x39_caseless_black_mag",2,30}}},{"B_Kitbag_sgg",{{"1Rnd_HE_Grenade_shell",19,1},{"1Rnd_Smoke_Grenade_shell",15,1},{"1Rnd_SmokeRed_Grenade_shell",3,1},{"ACE_HuntIR_M203",3,1},{"30Rnd_65x39_caseless_black_mag",11,30}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_AR_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Machine Gunner (Winter)"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_04", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "U_C_HunterBody_grn"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"LMG_Mk200_F","launch_RPG32_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"LMG_Mk200_F","launch_RPG32_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"LMG_Mk200_F","muzzle_snds_H","acc_pointer_IR","optic_Hamr",{"200Rnd_65x39_cased_Box",200},{},""},{"launch_RPG32_F","","","",{"RPG32_F",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_C_HunterBody_grn",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"V_PlateCarrier2_rgr",{{"SmokeShell",10,1},{"HandGrenade",1,1}}},{"B_Kitbag_sgg",{{"200Rnd_65x39_cased_Box",3,200},{"HandGrenade",4,1},{"SmokeShell",15,1}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_AR_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Machine Gunner (Winter)"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_04", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "U_C_HunterBody_grn"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"LMG_Mk200_F","launch_RPG32_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"LMG_Mk200_F","launch_RPG32_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"LMG_Mk200_F","muzzle_snds_H","acc_pointer_IR","optic_Hamr",{"200Rnd_65x39_cased_Box",200},{},""},{"launch_RPG32_F","","","",{"RPG32_F",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_C_HunterBody_grn",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"V_PlateCarrier2_rgr",{{"SmokeShell",10,1},{"HandGrenade",1,1}}},{"B_Kitbag_sgg",{{"200Rnd_65x39_cased_Box",3,200},{"HandGrenade",4,1},{"SmokeShell",15,1}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_AR_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Machine Gunner (Winter)"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_04", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "U_C_HunterBody_grn"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"LMG_Mk200_F","launch_RPG32_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"LMG_Mk200_F","launch_RPG32_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"LMG_Mk200_F","muzzle_snds_H","acc_pointer_IR","optic_Hamr",{"200Rnd_65x39_cased_Box",200},{},""},{"launch_RPG32_F","","","",{"RPG32_F",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_C_HunterBody_grn",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"V_PlateCarrier2_rgr",{{"SmokeShell",10,1},{"HandGrenade",1,1}}},{"B_Kitbag_sgg",{{"200Rnd_65x39_cased_Box",3,200},{"HandGrenade",4,1},{"SmokeShell",15,1}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_RTO_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Radio Operator (Winter)"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_02", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "U_BG_Guerilla1_1"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_RadioBag_01_eaf_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","acc_pointer_IR","optic_DMS_weathered_Kir_F",{"100Rnd_65x39_caseless_black_mag",100},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_BG_Guerilla1_1",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"V_PlateCarrier2_rgr",{{"30Rnd_65x39_caseless_mag",11,30},{"SmokeShell",5,1},{"HandGrenade",1,1}}},{"B_RadioBag_01_eaf_F",{{"30Rnd_9x21_Mag",1,30},{"30Rnd_65x39_caseless_black_mag",7,30}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_RTO_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Radio Operator (Winter)"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_02", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "U_BG_Guerilla1_1"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_RadioBag_01_eaf_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","acc_pointer_IR","optic_DMS_weathered_Kir_F",{"100Rnd_65x39_caseless_black_mag",100},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_BG_Guerilla1_1",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"V_PlateCarrier2_rgr",{{"30Rnd_65x39_caseless_mag",11,30},{"SmokeShell",5,1},{"HandGrenade",1,1}}},{"B_RadioBag_01_eaf_F",{{"30Rnd_9x21_Mag",1,30},{"30Rnd_65x39_caseless_black_mag",7,30}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_RTO_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Radio Operator (Winter)"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_02", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "U_BG_Guerilla1_1"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_RadioBag_01_eaf_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","acc_pointer_IR","optic_DMS_weathered_Kir_F",{"100Rnd_65x39_caseless_black_mag",100},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_BG_Guerilla1_1",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"V_PlateCarrier2_rgr",{{"30Rnd_65x39_caseless_mag",11,30},{"SmokeShell",5,1},{"HandGrenade",1,1}}},{"B_RadioBag_01_eaf_F",{{"30Rnd_9x21_Mag",1,30},{"30Rnd_65x39_caseless_black_mag",7,30}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_SNP_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Sniper (Winter)"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"CamoHead_White_21_F", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "U_BG_Guerilla2_2"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"srifle_LRR_camo_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"srifle_LRR_camo_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"srifle_LRR_camo_F","","","optic_tws",{"7Rnd_408_Mag",7},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_BG_Guerilla2_2",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"V_PlateCarrier2_rgr",{{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_Kestrel4500",1},{"SmokeShell",10,1},{"HandGrenade",1,1}}},{"B_Kitbag_sgg",{{"30Rnd_9x21_Mag",1,30},{"7Rnd_408_Mag",19,7}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_SNP_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Sniper (Winter)"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"CamoHead_White_21_F", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "U_BG_Guerilla2_2"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"srifle_LRR_camo_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"srifle_LRR_camo_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"srifle_LRR_camo_F","","","optic_tws",{"7Rnd_408_Mag",7},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_BG_Guerilla2_2",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"V_PlateCarrier2_rgr",{{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_Kestrel4500",1},{"SmokeShell",10,1},{"HandGrenade",1,1}}},{"B_Kitbag_sgg",{{"30Rnd_9x21_Mag",1,30},{"7Rnd_408_Mag",19,7}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_SNP_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Sniper (Winter)"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"CamoHead_White_21_F", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "U_BG_Guerilla2_2"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"srifle_LRR_camo_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"srifle_LRR_camo_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"srifle_LRR_camo_F","","","optic_tws",{"7Rnd_408_Mag",7},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_BG_Guerilla2_2",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"V_PlateCarrier2_rgr",{{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_Kestrel4500",1},{"SmokeShell",10,1},{"HandGrenade",1,1}}},{"B_Kitbag_sgg",{{"30Rnd_9x21_Mag",1,30},{"7Rnd_408_Mag",19,7}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_Medic_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Doctor (Winter)"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"PersianHead_A3_01", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "U_C_Journalist"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","acc_pointer_IR","optic_DMS_weathered_Kir_F",{"100Rnd_65x39_caseless_black_mag",100},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_C_Journalist",{{"30Rnd_65x39_caseless_black_mag",2,30}}},{"V_PlateCarrier2_rgr",{{"SmokeShell",8,1},{"30Rnd_65x39_caseless_black_mag",9,30},{"SmokeShellYellow",2,1},{"SmokeShellRed",1,1}}},{"B_Kitbag_sgg",{{"ACE_elasticBandage",40},{"ACE_quikclot",40},{"ACE_salineIV",12},{"ACE_tourniquet",10},{"ACE_salineIV_500",9},{"ACE_epinephrine",12},{"ACE_morphine",12},{"ACE_splint",13}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_Medic_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Doctor (Winter)"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"PersianHead_A3_01", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "U_C_Journalist"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","acc_pointer_IR","optic_DMS_weathered_Kir_F",{"100Rnd_65x39_caseless_black_mag",100},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_C_Journalist",{{"30Rnd_65x39_caseless_black_mag",2,30}}},{"V_PlateCarrier2_rgr",{{"SmokeShell",8,1},{"30Rnd_65x39_caseless_black_mag",9,30},{"SmokeShellYellow",2,1},{"SmokeShellRed",1,1}}},{"B_Kitbag_sgg",{{"ACE_elasticBandage",40},{"ACE_quikclot",40},{"ACE_salineIV",12},{"ACE_tourniquet",10},{"ACE_salineIV_500",9},{"ACE_epinephrine",12},{"ACE_morphine",12},{"ACE_splint",13}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_Medic_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Doctor (Winter)"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"PersianHead_A3_01", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "U_C_Journalist"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","acc_pointer_IR","optic_DMS_weathered_Kir_F",{"100Rnd_65x39_caseless_black_mag",100},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_C_Journalist",{{"30Rnd_65x39_caseless_black_mag",2,30}}},{"V_PlateCarrier2_rgr",{{"SmokeShell",8,1},{"30Rnd_65x39_caseless_black_mag",9,30},{"SmokeShellYellow",2,1},{"SmokeShellRed",1,1}}},{"B_Kitbag_sgg",{{"ACE_elasticBandage",40},{"ACE_quikclot",40},{"ACE_salineIV",12},{"ACE_tourniquet",10},{"ACE_salineIV_500",9},{"ACE_epinephrine",12},{"ACE_morphine",12},{"ACE_splint",13}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_DIVER_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Diver (Winter)"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"AfricanHead_02", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "U_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_B_Diving","H_Booniehat_dgtl"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_B_Diving","H_Booniehat_dgtl"}; 
		weapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_blk";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","acc_pointer_IR","optic_DMS_weathered_Kir_F",{"100Rnd_65x39_caseless_black_mag",100},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_Wetsuit",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3},{"30Rnd_65x39_caseless_black_mag",6,30}}},{"V_RebreatherB",{}},{"B_AssaultPack_blk",{{"ACE_wirecutter",1},{"30Rnd_9x21_Mag",1,30},{"30Rnd_65x39_caseless_black_mag",12,30}}},"H_Booniehat_dgtl","G_B_Diving",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_DIVER_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Diver (Winter)"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"AfricanHead_02", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "U_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_B_Diving","H_Booniehat_dgtl"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_B_Diving","H_Booniehat_dgtl"}; 
		weapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_blk";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","acc_pointer_IR","optic_DMS_weathered_Kir_F",{"100Rnd_65x39_caseless_black_mag",100},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_Wetsuit",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3},{"30Rnd_65x39_caseless_black_mag",6,30}}},{"V_RebreatherB",{}},{"B_AssaultPack_blk",{{"ACE_wirecutter",1},{"30Rnd_9x21_Mag",1,30},{"30Rnd_65x39_caseless_black_mag",12,30}}},"H_Booniehat_dgtl","G_B_Diving",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_DIVER_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Diver (Winter)"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"AfricanHead_02", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "U_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_B_Diving","H_Booniehat_dgtl"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_B_Diving","H_Booniehat_dgtl"}; 
		weapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_blk";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","acc_pointer_IR","optic_DMS_weathered_Kir_F",{"100Rnd_65x39_caseless_black_mag",100},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_Wetsuit",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3},{"30Rnd_65x39_caseless_black_mag",6,30}}},{"V_RebreatherB",{}},{"B_AssaultPack_blk",{{"ACE_wirecutter",1},{"30Rnd_9x21_Mag",1,30},{"30Rnd_65x39_caseless_black_mag",12,30}}},"H_Booniehat_dgtl","G_B_Diving",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_Rifleman_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Rifleman (Desert)"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"TanoanHead_A3_01", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "U_BG_Guerilla2_2"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"arifle_MX_Black_F","launch_RPG32_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","launch_RPG32_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","acc_pointer_IR","optic_DMS_weathered_Kir_F",{"100Rnd_65x39_caseless_black_mag",100},{},""},{"launch_RPG32_F","","","",{"RPG32_F",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_BG_Guerilla2_2",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"V_PlateCarrier2_rgr",{{"30Rnd_65x39_caseless_mag",7,30},{"SmokeShell",10,1},{"HandGrenade",1,1}}},{"B_Kitbag_sgg",{{"ACE_wirecutter",1},{"ACE_EntrenchingTool",1},{"30Rnd_9x21_Mag",1,30},{"30Rnd_65x39_caseless_black_mag",20,30}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_Rifleman_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Rifleman (Desert)"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"TanoanHead_A3_01", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "U_BG_Guerilla2_2"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"arifle_MX_Black_F","launch_RPG32_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","launch_RPG32_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","acc_pointer_IR","optic_DMS_weathered_Kir_F",{"100Rnd_65x39_caseless_black_mag",100},{},""},{"launch_RPG32_F","","","",{"RPG32_F",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_BG_Guerilla2_2",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"V_PlateCarrier2_rgr",{{"30Rnd_65x39_caseless_mag",7,30},{"SmokeShell",10,1},{"HandGrenade",1,1}}},{"B_Kitbag_sgg",{{"ACE_wirecutter",1},{"ACE_EntrenchingTool",1},{"30Rnd_9x21_Mag",1,30},{"30Rnd_65x39_caseless_black_mag",20,30}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_Rifleman_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Rifleman (Desert)"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"TanoanHead_A3_01", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "U_BG_Guerilla2_2"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"arifle_MX_Black_F","launch_RPG32_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","launch_RPG32_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","acc_pointer_IR","optic_DMS_weathered_Kir_F",{"100Rnd_65x39_caseless_black_mag",100},{},""},{"launch_RPG32_F","","","",{"RPG32_F",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_BG_Guerilla2_2",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"V_PlateCarrier2_rgr",{{"30Rnd_65x39_caseless_mag",7,30},{"SmokeShell",10,1},{"HandGrenade",1,1}}},{"B_Kitbag_sgg",{{"ACE_wirecutter",1},{"ACE_EntrenchingTool",1},{"30Rnd_9x21_Mag",1,30},{"30Rnd_65x39_caseless_black_mag",20,30}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_GL_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Grenadier (Desert)"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"CamoHead_White_15_F", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "U_BG_Guerilla2_3"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"arifle_MX_GL_Black_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_MX_GL_Black_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_GL_Black_F","muzzle_snds_H","acc_pointer_IR","optic_DMS_weathered_Kir_F",{"100Rnd_65x39_caseless_black_mag",100},{"1Rnd_HE_Grenade_shell",1},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_BG_Guerilla2_3",{{"ACE_elasticBandage",15},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3},{"ACE_personalAidKit",1},{"ACE_microDAGR",1}}},{"V_PlateCarrier2_rgr",{{"ACE_HuntIR_monitor",1},{"SmokeShell",5,1},{"30Rnd_65x39_caseless_mag",7,30},{"HandGrenade",1,1},{"30Rnd_65x39_caseless_black_mag",2,30}}},{"B_Kitbag_sgg",{{"1Rnd_HE_Grenade_shell",19,1},{"1Rnd_Smoke_Grenade_shell",15,1},{"1Rnd_SmokeRed_Grenade_shell",3,1},{"ACE_HuntIR_M203",3,1},{"30Rnd_65x39_caseless_black_mag",11,30}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_GL_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Grenadier (Desert)"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"CamoHead_White_15_F", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "U_BG_Guerilla2_3"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"arifle_MX_GL_Black_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_MX_GL_Black_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_GL_Black_F","muzzle_snds_H","acc_pointer_IR","optic_DMS_weathered_Kir_F",{"100Rnd_65x39_caseless_black_mag",100},{"1Rnd_HE_Grenade_shell",1},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_BG_Guerilla2_3",{{"ACE_elasticBandage",15},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3},{"ACE_personalAidKit",1},{"ACE_microDAGR",1}}},{"V_PlateCarrier2_rgr",{{"ACE_HuntIR_monitor",1},{"SmokeShell",5,1},{"30Rnd_65x39_caseless_mag",7,30},{"HandGrenade",1,1},{"30Rnd_65x39_caseless_black_mag",2,30}}},{"B_Kitbag_sgg",{{"1Rnd_HE_Grenade_shell",19,1},{"1Rnd_Smoke_Grenade_shell",15,1},{"1Rnd_SmokeRed_Grenade_shell",3,1},{"ACE_HuntIR_M203",3,1},{"30Rnd_65x39_caseless_black_mag",11,30}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_GL_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Grenadier (Desert)"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"CamoHead_White_15_F", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "U_BG_Guerilla2_3"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"arifle_MX_GL_Black_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_MX_GL_Black_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_GL_Black_F","muzzle_snds_H","acc_pointer_IR","optic_DMS_weathered_Kir_F",{"100Rnd_65x39_caseless_black_mag",100},{"1Rnd_HE_Grenade_shell",1},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_BG_Guerilla2_3",{{"ACE_elasticBandage",15},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3},{"ACE_personalAidKit",1},{"ACE_microDAGR",1}}},{"V_PlateCarrier2_rgr",{{"ACE_HuntIR_monitor",1},{"SmokeShell",5,1},{"30Rnd_65x39_caseless_mag",7,30},{"HandGrenade",1,1},{"30Rnd_65x39_caseless_black_mag",2,30}}},{"B_Kitbag_sgg",{{"1Rnd_HE_Grenade_shell",19,1},{"1Rnd_Smoke_Grenade_shell",15,1},{"1Rnd_SmokeRed_Grenade_shell",3,1},{"ACE_HuntIR_M203",3,1},{"30Rnd_65x39_caseless_black_mag",11,30}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_AR_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Machine Gunner (Desert)"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"TanoanHead_A3_04", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "U_C_HunterBody_grn"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"LMG_Mk200_F","launch_RPG32_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"LMG_Mk200_F","launch_RPG32_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"LMG_Mk200_F","muzzle_snds_H","acc_pointer_IR","optic_Hamr",{"200Rnd_65x39_cased_Box",200},{},""},{"launch_RPG32_F","","","",{"RPG32_F",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_C_HunterBody_grn",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"V_PlateCarrier2_rgr",{{"SmokeShell",10,1},{"HandGrenade",1,1}}},{"B_Kitbag_sgg",{{"200Rnd_65x39_cased_Box",3,200},{"HandGrenade",4,1},{"SmokeShell",15,1}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_AR_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Machine Gunner (Desert)"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"TanoanHead_A3_04", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "U_C_HunterBody_grn"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"LMG_Mk200_F","launch_RPG32_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"LMG_Mk200_F","launch_RPG32_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"LMG_Mk200_F","muzzle_snds_H","acc_pointer_IR","optic_Hamr",{"200Rnd_65x39_cased_Box",200},{},""},{"launch_RPG32_F","","","",{"RPG32_F",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_C_HunterBody_grn",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"V_PlateCarrier2_rgr",{{"SmokeShell",10,1},{"HandGrenade",1,1}}},{"B_Kitbag_sgg",{{"200Rnd_65x39_cased_Box",3,200},{"HandGrenade",4,1},{"SmokeShell",15,1}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_AR_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Machine Gunner (Desert)"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"TanoanHead_A3_04", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "U_C_HunterBody_grn"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"LMG_Mk200_F","launch_RPG32_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"LMG_Mk200_F","launch_RPG32_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"LMG_Mk200_F","muzzle_snds_H","acc_pointer_IR","optic_Hamr",{"200Rnd_65x39_cased_Box",200},{},""},{"launch_RPG32_F","","","",{"RPG32_F",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_C_HunterBody_grn",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"V_PlateCarrier2_rgr",{{"SmokeShell",10,1},{"HandGrenade",1,1}}},{"B_Kitbag_sgg",{{"200Rnd_65x39_cased_Box",3,200},{"HandGrenade",4,1},{"SmokeShell",15,1}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_RTO_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Radio Operator (Desert)"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_21", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "U_BG_Guerilla1_1"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_RadioBag_01_eaf_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","acc_pointer_IR","optic_DMS_weathered_Kir_F",{"100Rnd_65x39_caseless_black_mag",100},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_BG_Guerilla1_1",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"V_PlateCarrier2_rgr",{{"30Rnd_65x39_caseless_mag",11,30},{"SmokeShell",5,1},{"HandGrenade",1,1}}},{"B_RadioBag_01_eaf_F",{{"30Rnd_9x21_Mag",1,30},{"30Rnd_65x39_caseless_black_mag",7,30}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_RTO_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Radio Operator (Desert)"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_21", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "U_BG_Guerilla1_1"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_RadioBag_01_eaf_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","acc_pointer_IR","optic_DMS_weathered_Kir_F",{"100Rnd_65x39_caseless_black_mag",100},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_BG_Guerilla1_1",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"V_PlateCarrier2_rgr",{{"30Rnd_65x39_caseless_mag",11,30},{"SmokeShell",5,1},{"HandGrenade",1,1}}},{"B_RadioBag_01_eaf_F",{{"30Rnd_9x21_Mag",1,30},{"30Rnd_65x39_caseless_black_mag",7,30}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_RTO_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Radio Operator (Desert)"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_21", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "U_BG_Guerilla1_1"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_RadioBag_01_eaf_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","acc_pointer_IR","optic_DMS_weathered_Kir_F",{"100Rnd_65x39_caseless_black_mag",100},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_BG_Guerilla1_1",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"V_PlateCarrier2_rgr",{{"30Rnd_65x39_caseless_mag",11,30},{"SmokeShell",5,1},{"HandGrenade",1,1}}},{"B_RadioBag_01_eaf_F",{{"30Rnd_9x21_Mag",1,30},{"30Rnd_65x39_caseless_black_mag",7,30}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_SNP_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Sniper (Desert)"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"AfricanHead_03", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "U_BG_Guerilla2_2"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"srifle_LRR_camo_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"srifle_LRR_camo_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"srifle_LRR_camo_F","","","optic_tws",{"7Rnd_408_Mag",7},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_BG_Guerilla2_2",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"V_PlateCarrier2_rgr",{{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_Kestrel4500",1},{"SmokeShell",10,1},{"HandGrenade",1,1}}},{"B_Kitbag_sgg",{{"30Rnd_9x21_Mag",1,30},{"7Rnd_408_Mag",19,7}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_SNP_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Sniper (Desert)"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"AfricanHead_03", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "U_BG_Guerilla2_2"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"srifle_LRR_camo_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"srifle_LRR_camo_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"srifle_LRR_camo_F","","","optic_tws",{"7Rnd_408_Mag",7},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_BG_Guerilla2_2",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"V_PlateCarrier2_rgr",{{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_Kestrel4500",1},{"SmokeShell",10,1},{"HandGrenade",1,1}}},{"B_Kitbag_sgg",{{"30Rnd_9x21_Mag",1,30},{"7Rnd_408_Mag",19,7}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_SNP_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Sniper (Desert)"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"AfricanHead_03", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "U_BG_Guerilla2_2"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"srifle_LRR_camo_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"srifle_LRR_camo_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"srifle_LRR_camo_F","","","optic_tws",{"7Rnd_408_Mag",7},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_BG_Guerilla2_2",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"V_PlateCarrier2_rgr",{{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_Kestrel4500",1},{"SmokeShell",10,1},{"HandGrenade",1,1}}},{"B_Kitbag_sgg",{{"30Rnd_9x21_Mag",1,30},{"7Rnd_408_Mag",19,7}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_Medic_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Doctor (Desert)"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"GreekHead_A3_06", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "U_C_Journalist"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","acc_pointer_IR","optic_DMS_weathered_Kir_F",{"100Rnd_65x39_caseless_black_mag",100},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_C_Journalist",{{"30Rnd_65x39_caseless_black_mag",2,30}}},{"V_PlateCarrier2_rgr",{{"SmokeShell",8,1},{"30Rnd_65x39_caseless_black_mag",9,30},{"SmokeShellYellow",2,1},{"SmokeShellRed",1,1}}},{"B_Kitbag_sgg",{{"ACE_elasticBandage",40},{"ACE_quikclot",40},{"ACE_salineIV",12},{"ACE_tourniquet",10},{"ACE_salineIV_500",9},{"ACE_epinephrine",12},{"ACE_morphine",12},{"ACE_splint",13}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_Medic_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Doctor (Desert)"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"GreekHead_A3_06", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "U_C_Journalist"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","acc_pointer_IR","optic_DMS_weathered_Kir_F",{"100Rnd_65x39_caseless_black_mag",100},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_C_Journalist",{{"30Rnd_65x39_caseless_black_mag",2,30}}},{"V_PlateCarrier2_rgr",{{"SmokeShell",8,1},{"30Rnd_65x39_caseless_black_mag",9,30},{"SmokeShellYellow",2,1},{"SmokeShellRed",1,1}}},{"B_Kitbag_sgg",{{"ACE_elasticBandage",40},{"ACE_quikclot",40},{"ACE_salineIV",12},{"ACE_tourniquet",10},{"ACE_salineIV_500",9},{"ACE_epinephrine",12},{"ACE_morphine",12},{"ACE_splint",13}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_Medic_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Doctor (Desert)"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"GreekHead_A3_06", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "U_C_Journalist"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_Combat","H_HelmetB_snakeskin"}; 
		weapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","acc_pointer_IR","optic_DMS_weathered_Kir_F",{"100Rnd_65x39_caseless_black_mag",100},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_C_Journalist",{{"30Rnd_65x39_caseless_black_mag",2,30}}},{"V_PlateCarrier2_rgr",{{"SmokeShell",8,1},{"30Rnd_65x39_caseless_black_mag",9,30},{"SmokeShellYellow",2,1},{"SmokeShellRed",1,1}}},{"B_Kitbag_sgg",{{"ACE_elasticBandage",40},{"ACE_quikclot",40},{"ACE_salineIV",12},{"ACE_tourniquet",10},{"ACE_salineIV_500",9},{"ACE_epinephrine",12},{"ACE_morphine",12},{"ACE_splint",13}}},"H_HelmetB_snakeskin","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_DIVER_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Diver (Desert)"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_13", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "U_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_B_Diving","H_Booniehat_dgtl"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_B_Diving","H_Booniehat_dgtl"}; 
		weapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_blk";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","acc_pointer_IR","optic_DMS_weathered_Kir_F",{"100Rnd_65x39_caseless_black_mag",100},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_Wetsuit",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3},{"30Rnd_65x39_caseless_black_mag",6,30}}},{"V_RebreatherB",{}},{"B_AssaultPack_blk",{{"ACE_wirecutter",1},{"30Rnd_9x21_Mag",1,30},{"30Rnd_65x39_caseless_black_mag",12,30}}},"H_Booniehat_dgtl","G_B_Diving",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_DIVER_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Diver (Desert)"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_13", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "U_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_B_Diving","H_Booniehat_dgtl"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_B_Diving","H_Booniehat_dgtl"}; 
		weapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_blk";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","acc_pointer_IR","optic_DMS_weathered_Kir_F",{"100Rnd_65x39_caseless_black_mag",100},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_Wetsuit",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3},{"30Rnd_65x39_caseless_black_mag",6,30}}},{"V_RebreatherB",{}},{"B_AssaultPack_blk",{{"ACE_wirecutter",1},{"30Rnd_9x21_Mag",1,30},{"30Rnd_65x39_caseless_black_mag",12,30}}},"H_Booniehat_dgtl","G_B_Diving",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_DIVER_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Diver (Desert)"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_13", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "U_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_B_Diving","H_Booniehat_dgtl"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","NVGoggles_OPFOR","G_B_Diving","H_Booniehat_dgtl"}; 
		weapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_blk";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","acc_pointer_IR","optic_DMS_weathered_Kir_F",{"100Rnd_65x39_caseless_black_mag",100},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_Wetsuit",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3},{"30Rnd_65x39_caseless_black_mag",6,30}}},{"V_RebreatherB",{}},{"B_AssaultPack_blk",{{"ACE_wirecutter",1},{"30Rnd_9x21_Mag",1,30},{"30Rnd_65x39_caseless_black_mag",12,30}}},"H_Booniehat_dgtl","G_B_Diving",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","NVGoggles_OPFOR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 
};
class CfgPatches
{
	class bm_specops_faction_US_ARMA_BASE
	{
		author = "BloodyMystik & Orka";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"A3_Weapons_F_Rifles_MX_Black","ace_realisticnames","A3_Weapons_F_Acc","ace_laserpointer","A3_Weapons_F_Enoch_Acc","A3_Weapons_F","A3_Weapons_F_Launchers_RPG32","ace_overpressure","ace_realisticweights","ace_reloadlaunchers","A3_Weapons_F_Pistols_Rook40","ace_ballistics","ace_smallarms","A3_Characters_F","ace_medical_treatment","ace_hearing","ace_attach","ace_captives","ace_logistics_wirecutter","ace_trenches","ace_yardage450","ace_nightvision","ace_microdagr","ace_huntir","A3_Weapons_F_Machineguns_M200","A3_Weapons_F_Mark_Machineguns_M200","A3_Weapons_F_Enoch_Machineguns_M200","cba_jam","ace_overheating","ace_scopes","ace_ai","ace_reload","A3_Weapons_F_LongRangeRifles_M320","A3_Weapons_F_Mark_LongRangeRifles_M320_Camo","ace_maptools","ace_rangecard","ace_kestrel4500","tfar_core","A3_Weapons_F_Enoch_Pistols_Pistol_Heavy_01","Characters_f_lxWS","ace_optics"};
    };
};
class CfgFactionClasses {
	// As Friendly (BluFOR)
	class BS_B_US_ARMA_BASE_BASE { 
		Advanced = 0; 
		FortifyItems[] = {
			{"Land_BagFence_Corner_F", 0.25}, {"Land_BagFence_End_F", 0.25}, {"Land_BagFence_Short_F", 0.5}, 
			{"Land_BagFence_Round_F", 0.75}, {"Land_ConcreteHedgehog_01_F", 0.75}
		};

		EngineerItems[] = {
			{"Land_BagBunker_Small_F", 1}, {"Land_HBarrierWall4_lxWS", 2}, {"Land_HBarrierWall_corner_lxWS", 3}, 
			{"Land_HBarrierWall6_lxWS", 4}, {"Land_HBarrierTower_lxWS", 5}, {"Land_Cargo_Patrol_V1_F", 10}
		};
		ObjectiveCodenames[] = {
			"Falcon", "Hurricane", "Twinkle", "Scout", "Roadrunner", "Wasp", "Crystal ", "Foxtail", "Aurora", 
			"Sunburn", "Frostbite", "Nighthawk", "Sandstorm", "Lazy", "Phantom", "Unicorn", "Omega", "Watchdog", 
			"Goose", "Mosquito", "Raven", "Chick", "Ladybug", "Salmon", "Termite", "Seagull", "Vulture", "Grasshopper", 
			"Golden Eye", "Eureka", "Comet", "Lincoln", "Octopus", "Obsidian", "November", "Balloon", "Pigeons", "Preach",
			"Impulse", "Cougar", "Scorpion", "Lightning", "Starburst", "Watchtower", "Cobra"
		};

		CampCodenames[] = {
			"Camp Dignity", "Camp Diamond", "Camp Sundown", "Camp Detention", "Camp Venom", "Camp Enigma", "Camp Dragonfire", 
			"Camp Hazard", "Camp Ambition", "Camp Honesty", "Camp Energy", "Camp Chaos", "Camp Satellite", "Camp Stormgaze", 
			"Camp Solitude", "Camp Fear", "Camp Hurricane", "Camp Murder",  "Camp Carnage", "Camp Salvation"
		};
		brokenSkullArsenal[]={"SmokeShellBlue","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","SmokeShellRed","SmokeShellYellow","ACE_bodyBag","ACE_bodyBag_blue","ACE_bodyBag_white","ACE_bloodIV","ACE_bloodIV_250","ACE_bloodIV_500","ACE_plasmaIV","ACE_plasmaIV_250","ACE_plasmaIV_500","ACE_salineIV","ACE_salineIV_250","ACE_salineIV_500","ACE_splint","ACE_surgicalKit","ACE_suture","ACE_tourniquet","ACE_personalAidKit","ACE_morphine","ACE_epinephrine","ACE_quikclot","ACE_elasticBandage","ACE_adenosine","ACE_WaterBottle","ACE_Sunflower_Seeds","ACE_Humanitarian_Ration","ACE_Can_Franta","ACE_wirecutter","ACE_RangeCard","MineDetector","ACE_microDAGR","ACE_MapTools","ACE_Clacker","ACE_M26_Clacker","ACE_Kestrel4500","ACE_HuntIR_monitor","ACE_Fortify","ACE_EntrenchingTool","ACE_DefusalKit","ACE_DeadManSwitch","ACE_DAGR","ACE_ATragMX","ACE_artilleryTable","ACE_RangeTable_82mm","DemoCharge_Remote_Mag","rhsusf_m112_mag","ATMine_Range_Mag","Aegis_HandFlare_Green","Aegis_HandFlare_Red","plp_bo_w_BottleLiqCream","plp_bo_w_BottleGin","plp_bo_w_BottleLiqOrange","plp_bo_w_BottleTequila","ACE_CableTie","plp_bo_w_Cigar","plp_bo_w_CigarCutter","ACE_EarPlugs","plp_bo_w_CigarFine","ACE_IR_Strobe_Item","plp_bo_w_CigarBoxSealed","ACE_SpareBarrel","ACE_SpraypaintBlack","ACE_SpraypaintBlue","ACE_SpraypaintGreen","ACE_SpraypaintRed","ACE_SpraypaintWhite","ACE_SpraypaintYellow","plp_bo_w_SunBlocker","plp_bo_w_SunMilk","ACE_UAVBattery","arifle_MX_Black_F","muzzle_snds_H","acc_pointer_IR","optic_DMS_weathered_Kir_F","100Rnd_65x39_caseless_black_mag","launch_RPG32_F","RPG32_F","hgun_Rook40_F","muzzle_snds_L","16Rnd_9x21_Mag","U_BG_Guerilla2_2","V_PlateCarrier2_rgr","30Rnd_65x39_caseless_mag","SmokeShell","HandGrenade","30Rnd_9x21_Mag","30Rnd_65x39_caseless_black_mag","H_HelmetB_snakeskin","ACE_Yardage450","ItemMap","ItemGPS","ItemRadio","NVGoggles_OPFOR","arifle_MX_GL_Black_F","1Rnd_HE_Grenade_shell","U_BG_Guerilla2_3","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","ACE_HuntIR_M203","LMG_Mk200_F","optic_Hamr","200Rnd_65x39_cased_Box","U_C_HunterBody_grn","U_BG_Guerilla1_1","srifle_LRR_camo_F","optic_tws","7Rnd_408_Mag","U_C_Journalist","U_B_Wetsuit","V_RebreatherB","H_Booniehat_dgtl","hgun_Pistol_heavy_01_green_F","11Rnd_45ACP_Mag","U_lxWS_B_CombatUniform_desert_tshirt","H_Beret_Colonel","Binocular"};

		garage[]={{"B_Quadbike_01_F",0,100,-1},{"B_LSV_01_armed_F",0,300,2},{"B_MRAP_01_hmg_F",1,600,2},{"B_MRAP_01_gmg_F",1,600,2},{"B_MRAP_01_F",1,500,-1},{"B_Truck_01_covered_F",1,50,3},{"B_Truck_01_transport_F",1,50,3},{"B_Truck_01_Repair_F",1,50,-1},{"B_Truck_01_flatbed_F",1,50,-1},{"B_Truck_01_cargo_F",1,50,-1},{"B_Boat_Transport_01_F",0,50,-1},{"B_Boat_Armed_01_minigun_F",1,50,-1},{"APC_Wheeled_01_mortar_base_lxWS",2,40,1},{"B_Plane_CAS_01_dynamicLoadout_F",2,2000,-1},{"B_SDV_01_F",1,50,-1},{"B_AFV_Wheeled_01_cannon_F",2,40,1},{"B_AFV_Wheeled_01_up_cannon_F",2,40,1},{"B_MBT_01_TUSK_F",2,2500,1},{"B_APC_Tracked_01_AA_F",2,1000,0}};
		SamSystem[]={"B_SAM_System_02_F"};
		StaticLowMG[]={"B_HMG_01_A_F"};
		StaticHighMG[]={"B_HMG_01_high_F"};
		StaticMotar[]={"B_Mortar_01_F"};
		StaticAntiAir[]={"B_static_AA_F"};
		VehicleTechnicals[]={"B_LSV_01_armed_F","B_MRAP_01_hmg_F","B_MRAP_01_gmg_F"};
		VehicleAntiAircraft[]={"B_APC_Tracked_01_AA_F"};
		VehicleTanks[]={"APC_Wheeled_01_mortar_base_lxWS","B_AFV_Wheeled_01_cannon_F","B_AFV_Wheeled_01_up_cannon_F","B_MBT_01_TUSK_F"};
		VehicleTransport[]={"B_Truck_01_covered_F","B_Truck_01_transport_F"};
	};
	// As Friendly (BluFOR)
	class BS_B_US_ARMA_BASE : BS_B_US_ARMA_BASE_BASE { 
		useForSpecOps = 1;   
		displayName = "US - ARMA (DEFAULT)";
		side = 1;       
		flag = "\A3\Data_F\Flags\flag_US_CO.paa";
		icon = "\A3\Data_F\Flags\flag_US_CO.paa";
		priority = 0; 
	};
	// As Opposite Forces (OpFOR)
	class BS_O_US_ARMA_BASE : BS_B_US_ARMA_BASE_BASE { 
		useForSpecOps = 1;
		displayName = "US - ARMA (DEFAULT)";
		side = 0;       
		flag = "\A3\Data_F\Flags\flag_US_CO.paa";
		icon = "\A3\Data_F\Flags\flag_US_CO.paa";
		priority = 0; 
	};
	// As Independent (Independent)
	class BS_I_US_ARMA_BASE : BS_B_US_ARMA_BASE_BASE { 
		useForSpecOps = 1;
		displayName = "US - ARMA (DEFAULT)";
		side = 2;       
		flag = "\A3\Data_F\Flags\flag_US_CO.paa";
		icon = "\A3\Data_F\Flags\flag_US_CO.paa";
		priority = 0; 
	};
};
// As Friendly (BluFOR)
class SpecOps_Module_BLUFOR_Factions { 
	class BS_B_US_ARMA_BASE { name = "US - ARMA (DEFAULT)"; value = "BS_B_US_ARMA_BASE"; };  
};
// As Friendly (BluFOR)
class SpecOps_Module_OPFOR_Factions { 
	class BS_O_US_ARMA_BASE { name = "US - ARMA (DEFAULT)"; value = "BS_O_US_ARMA_BASE"; };  
};
// As Friendly (BluFOR)
class SpecOps_Module_GRE_Factions { 
	class BS_I_US_ARMA_BASE { name = "US - ARMA (DEFAULT)"; value = "BS_I_US_ARMA_BASE"; };  
};