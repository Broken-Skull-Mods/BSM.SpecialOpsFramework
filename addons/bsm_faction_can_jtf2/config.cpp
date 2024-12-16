

class CfgVehicles {
	class B_Survivor_F;
	class I_G_Survivor_F;
	class O_G_Survivor_F; 
	// This unit is for OpFOR
	class BS_O_CAN_JTF2_2023_Rifleman_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Rifleman (Woodland)"; 
		faction = "BS_O_CAN_JTF2_2023"; 
		identityTypes[] = {"WhiteHead_09", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_CAN_JTF2_2023_Rifleman_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Rifleman (Woodland)"; 
		faction = "BS_B_CAN_JTF2_2023"; 
		identityTypes[] = {"WhiteHead_09", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_CAN_JTF2_2023_Rifleman_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Rifleman (Woodland)"; 
		faction = "BS_I_CAN_JTF2_2023"; 
		identityTypes[] = {"WhiteHead_09", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_CAN_JTF2_2023_AR_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Machine Gunner (Woodland)"; 
		faction = "BS_O_CAN_JTF2_2023"; 
		identityTypes[] = {"GreekHead_A3_05", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_CAN_JTF2_2023_AR_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Machine Gunner (Woodland)"; 
		faction = "BS_B_CAN_JTF2_2023"; 
		identityTypes[] = {"GreekHead_A3_05", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_CAN_JTF2_2023_AR_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Machine Gunner (Woodland)"; 
		faction = "BS_I_CAN_JTF2_2023"; 
		identityTypes[] = {"GreekHead_A3_05", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_CAN_JTF2_2023_GL_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Grenadier (Woodland)"; 
		faction = "BS_O_CAN_JTF2_2023"; 
		identityTypes[] = {"GreekHead_A3_10_sa", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_CAN_JTF2_2023_GL_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Grenadier (Woodland)"; 
		faction = "BS_B_CAN_JTF2_2023"; 
		identityTypes[] = {"GreekHead_A3_10_sa", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_CAN_JTF2_2023_GL_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Grenadier (Woodland)"; 
		faction = "BS_I_CAN_JTF2_2023"; 
		identityTypes[] = {"GreekHead_A3_10_sa", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_CAN_JTF2_2023_Medic_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Doctor (Woodland)"; 
		faction = "BS_O_CAN_JTF2_2023"; 
		identityTypes[] = {"TanoanBossHead", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_CAN_JTF2_2023_Medic_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Doctor (Woodland)"; 
		faction = "BS_B_CAN_JTF2_2023"; 
		identityTypes[] = {"TanoanBossHead", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_CAN_JTF2_2023_Medic_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Doctor (Woodland)"; 
		faction = "BS_I_CAN_JTF2_2023"; 
		identityTypes[] = {"TanoanBossHead", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_CAN_JTF2_2023_SNP_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Sniper (Woodland)"; 
		faction = "BS_O_CAN_JTF2_2023"; 
		identityTypes[] = {"PersianHead_A3_01", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_CAN_JTF2_2023_SNP_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Sniper (Woodland)"; 
		faction = "BS_B_CAN_JTF2_2023"; 
		identityTypes[] = {"PersianHead_A3_01", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_CAN_JTF2_2023_SNP_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Sniper (Woodland)"; 
		faction = "BS_I_CAN_JTF2_2023"; 
		identityTypes[] = {"PersianHead_A3_01", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_CAN_JTF2_2023_RTO_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Anti-Tank (Woodland)"; 
		faction = "BS_O_CAN_JTF2_2023"; 
		identityTypes[] = {"WhiteHead_22_a", "Male04ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_CAN_JTF2_2023_RTO_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Anti-Tank (Woodland)"; 
		faction = "BS_B_CAN_JTF2_2023"; 
		identityTypes[] = {"WhiteHead_22_a", "Male04ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_CAN_JTF2_2023_RTO_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Anti-Tank (Woodland)"; 
		faction = "BS_I_CAN_JTF2_2023"; 
		identityTypes[] = {"WhiteHead_22_a", "Male04ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_CAN_JTF2_2023_DIVER_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Special (Woodland)"; 
		faction = "BS_O_CAN_JTF2_2023"; 
		identityTypes[] = {"GreekHead_A3_06", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_CAN_JTF2_2023_DIVER_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Special (Woodland)"; 
		faction = "BS_B_CAN_JTF2_2023"; 
		identityTypes[] = {"GreekHead_A3_06", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_CAN_JTF2_2023_DIVER_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Special (Woodland)"; 
		faction = "BS_I_CAN_JTF2_2023"; 
		identityTypes[] = {"GreekHead_A3_06", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_CAN_JTF2_2023_Officer_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Officer (Woodland)"; 
		faction = "BS_O_CAN_JTF2_2023"; 
		identityTypes[] = {"TanoanHead_A3_01", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Aviator","H_Bandanna_sgg"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Aviator","H_Bandanna_sgg"}; 
		weapons[] = {"hgun_ACPC2_F"}; 
		respawnWeapons[] = {"hgun_ACPC2_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",8},{},""},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{},{},"H_Bandanna_sgg","G_Aviator",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_CAN_JTF2_2023_Officer_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Officer (Woodland)"; 
		faction = "BS_B_CAN_JTF2_2023"; 
		identityTypes[] = {"TanoanHead_A3_01", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Aviator","H_Bandanna_sgg"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Aviator","H_Bandanna_sgg"}; 
		weapons[] = {"hgun_ACPC2_F"}; 
		respawnWeapons[] = {"hgun_ACPC2_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",8},{},""},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{},{},"H_Bandanna_sgg","G_Aviator",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_CAN_JTF2_2023_Officer_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Officer (Woodland)"; 
		faction = "BS_I_CAN_JTF2_2023"; 
		identityTypes[] = {"TanoanHead_A3_01", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Aviator","H_Bandanna_sgg"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Aviator","H_Bandanna_sgg"}; 
		weapons[] = {"hgun_ACPC2_F"}; 
		respawnWeapons[] = {"hgun_ACPC2_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",8},{},""},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{},{},"H_Bandanna_sgg","G_Aviator",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_CAN_JTF2_2023_VAR_0_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 1"; 
		faction = "BS_O_CAN_JTF2_2023"; 
		identityTypes[] = {"GreekHead_A3_08", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "U_C_Journalist"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_khk_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_khk_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_khk_F","muzzle_snds_H_khk_F","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_khaki_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_C_Journalist",{{"ACE_quikclot",1},{"FirstAidKit",4}}},{"V_PlateCarrier2_rgr_noflag_F",{}},{"B_AssaultPack_dgtl",{{"ACE_rope12",1},{"ACE_rope15",1},{"ACE_rope18",1},{"ACE_rope3",1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_CAN_JTF2_2023_VAR_0_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 1"; 
		faction = "BS_B_CAN_JTF2_2023"; 
		identityTypes[] = {"GreekHead_A3_08", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "U_C_Journalist"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_khk_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_khk_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_khk_F","muzzle_snds_H_khk_F","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_khaki_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_C_Journalist",{{"ACE_quikclot",1},{"FirstAidKit",4}}},{"V_PlateCarrier2_rgr_noflag_F",{}},{"B_AssaultPack_dgtl",{{"ACE_rope12",1},{"ACE_rope15",1},{"ACE_rope18",1},{"ACE_rope3",1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_CAN_JTF2_2023_VAR_0_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 1"; 
		faction = "BS_I_CAN_JTF2_2023"; 
		identityTypes[] = {"GreekHead_A3_08", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "U_C_Journalist"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_khk_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_khk_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_khk_F","muzzle_snds_H_khk_F","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_khaki_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_C_Journalist",{{"ACE_quikclot",1},{"FirstAidKit",4}}},{"V_PlateCarrier2_rgr_noflag_F",{}},{"B_AssaultPack_dgtl",{{"ACE_rope12",1},{"ACE_rope15",1},{"ACE_rope18",1},{"ACE_rope3",1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_CAN_JTF2_2023_Rifleman_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Rifleman (Desert)"; 
		faction = "BS_O_CAN_JTF2_2023"; 
		identityTypes[] = {"AfricanHead_02", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_CAN_JTF2_2023_Rifleman_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Rifleman (Desert)"; 
		faction = "BS_B_CAN_JTF2_2023"; 
		identityTypes[] = {"AfricanHead_02", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_CAN_JTF2_2023_Rifleman_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Rifleman (Desert)"; 
		faction = "BS_I_CAN_JTF2_2023"; 
		identityTypes[] = {"AfricanHead_02", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_CAN_JTF2_2023_AR_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Machine Gunner (Desert)"; 
		faction = "BS_O_CAN_JTF2_2023"; 
		identityTypes[] = {"WhiteHead_01", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_CAN_JTF2_2023_AR_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Machine Gunner (Desert)"; 
		faction = "BS_B_CAN_JTF2_2023"; 
		identityTypes[] = {"WhiteHead_01", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_CAN_JTF2_2023_AR_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Machine Gunner (Desert)"; 
		faction = "BS_I_CAN_JTF2_2023"; 
		identityTypes[] = {"WhiteHead_01", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_CAN_JTF2_2023_GL_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Grenadier (Desert)"; 
		faction = "BS_O_CAN_JTF2_2023"; 
		identityTypes[] = {"PersianHead_A3_04_a", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_CAN_JTF2_2023_GL_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Grenadier (Desert)"; 
		faction = "BS_B_CAN_JTF2_2023"; 
		identityTypes[] = {"PersianHead_A3_04_a", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_CAN_JTF2_2023_GL_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Grenadier (Desert)"; 
		faction = "BS_I_CAN_JTF2_2023"; 
		identityTypes[] = {"PersianHead_A3_04_a", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_CAN_JTF2_2023_Medic_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Doctor (Desert)"; 
		faction = "BS_O_CAN_JTF2_2023"; 
		identityTypes[] = {"AfricanHead_02", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_CAN_JTF2_2023_Medic_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Doctor (Desert)"; 
		faction = "BS_B_CAN_JTF2_2023"; 
		identityTypes[] = {"AfricanHead_02", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_CAN_JTF2_2023_Medic_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Doctor (Desert)"; 
		faction = "BS_I_CAN_JTF2_2023"; 
		identityTypes[] = {"AfricanHead_02", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_CAN_JTF2_2023_SNP_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Sniper (Desert)"; 
		faction = "BS_O_CAN_JTF2_2023"; 
		identityTypes[] = {"AfricanHead_02", "Male04ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_CAN_JTF2_2023_SNP_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Sniper (Desert)"; 
		faction = "BS_B_CAN_JTF2_2023"; 
		identityTypes[] = {"AfricanHead_02", "Male04ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_CAN_JTF2_2023_SNP_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Sniper (Desert)"; 
		faction = "BS_I_CAN_JTF2_2023"; 
		identityTypes[] = {"AfricanHead_02", "Male04ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_CAN_JTF2_2023_RTO_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Anti-Tank (Desert)"; 
		faction = "BS_O_CAN_JTF2_2023"; 
		identityTypes[] = {"AsianHead_A3_01", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_CAN_JTF2_2023_RTO_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Anti-Tank (Desert)"; 
		faction = "BS_B_CAN_JTF2_2023"; 
		identityTypes[] = {"AsianHead_A3_01", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_CAN_JTF2_2023_RTO_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Anti-Tank (Desert)"; 
		faction = "BS_I_CAN_JTF2_2023"; 
		identityTypes[] = {"AsianHead_A3_01", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_CAN_JTF2_2023_DIVER_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Special (Desert)"; 
		faction = "BS_O_CAN_JTF2_2023"; 
		identityTypes[] = {"GreekHead_A3_07", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_CAN_JTF2_2023_DIVER_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Special (Desert)"; 
		faction = "BS_B_CAN_JTF2_2023"; 
		identityTypes[] = {"GreekHead_A3_07", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_CAN_JTF2_2023_DIVER_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Special (Desert)"; 
		faction = "BS_I_CAN_JTF2_2023"; 
		identityTypes[] = {"GreekHead_A3_07", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_CAN_JTF2_2023_Officer_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Officer (Desert)"; 
		faction = "BS_O_CAN_JTF2_2023"; 
		identityTypes[] = {"GreekHead_A3_09", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Aviator","H_Bandanna_sgg"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Aviator","H_Bandanna_sgg"}; 
		weapons[] = {"hgun_ACPC2_F"}; 
		respawnWeapons[] = {"hgun_ACPC2_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",8},{},""},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{},{},"H_Bandanna_sgg","G_Aviator",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_CAN_JTF2_2023_Officer_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Officer (Desert)"; 
		faction = "BS_B_CAN_JTF2_2023"; 
		identityTypes[] = {"GreekHead_A3_09", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Aviator","H_Bandanna_sgg"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Aviator","H_Bandanna_sgg"}; 
		weapons[] = {"hgun_ACPC2_F"}; 
		respawnWeapons[] = {"hgun_ACPC2_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",8},{},""},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{},{},"H_Bandanna_sgg","G_Aviator",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_CAN_JTF2_2023_Officer_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Officer (Desert)"; 
		faction = "BS_I_CAN_JTF2_2023"; 
		identityTypes[] = {"GreekHead_A3_09", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Aviator","H_Bandanna_sgg"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Aviator","H_Bandanna_sgg"}; 
		weapons[] = {"hgun_ACPC2_F"}; 
		respawnWeapons[] = {"hgun_ACPC2_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",8},{},""},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{},{},"H_Bandanna_sgg","G_Aviator",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_CAN_JTF2_2023_VAR_1_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 2"; 
		faction = "BS_O_CAN_JTF2_2023"; 
		identityTypes[] = {"TanoanHead_A3_05", "Male02ENG" ,"G_NATO_default"};
		uniformClass = "U_C_Journalist"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_khk_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_khk_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_khk_F","muzzle_snds_H_khk_F","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_khaki_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_C_Journalist",{{"ACE_quikclot",1},{"FirstAidKit",4}}},{"V_PlateCarrier2_rgr_noflag_F",{}},{"B_AssaultPack_dgtl",{{"ACE_rope12",1},{"ACE_rope15",1},{"ACE_rope18",1},{"ACE_rope3",1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_CAN_JTF2_2023_VAR_1_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 2"; 
		faction = "BS_B_CAN_JTF2_2023"; 
		identityTypes[] = {"TanoanHead_A3_05", "Male02ENG" ,"G_NATO_default"};
		uniformClass = "U_C_Journalist"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_khk_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_khk_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_khk_F","muzzle_snds_H_khk_F","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_khaki_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_C_Journalist",{{"ACE_quikclot",1},{"FirstAidKit",4}}},{"V_PlateCarrier2_rgr_noflag_F",{}},{"B_AssaultPack_dgtl",{{"ACE_rope12",1},{"ACE_rope15",1},{"ACE_rope18",1},{"ACE_rope3",1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_CAN_JTF2_2023_VAR_1_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 2"; 
		faction = "BS_I_CAN_JTF2_2023"; 
		identityTypes[] = {"TanoanHead_A3_05", "Male02ENG" ,"G_NATO_default"};
		uniformClass = "U_C_Journalist"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_khk_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_khk_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_khk_F","muzzle_snds_H_khk_F","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_khaki_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_C_Journalist",{{"ACE_quikclot",1},{"FirstAidKit",4}}},{"V_PlateCarrier2_rgr_noflag_F",{}},{"B_AssaultPack_dgtl",{{"ACE_rope12",1},{"ACE_rope15",1},{"ACE_rope18",1},{"ACE_rope3",1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_CAN_JTF2_2023_Rifleman_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Rifleman (Winter)"; 
		faction = "BS_O_CAN_JTF2_2023"; 
		identityTypes[] = {"TanoanHead_A3_06", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_CAN_JTF2_2023_Rifleman_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Rifleman (Winter)"; 
		faction = "BS_B_CAN_JTF2_2023"; 
		identityTypes[] = {"TanoanHead_A3_06", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_CAN_JTF2_2023_Rifleman_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Rifleman (Winter)"; 
		faction = "BS_I_CAN_JTF2_2023"; 
		identityTypes[] = {"TanoanHead_A3_06", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_CAN_JTF2_2023_AR_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Machine Gunner (Winter)"; 
		faction = "BS_O_CAN_JTF2_2023"; 
		identityTypes[] = {"TanoanHead_A3_07", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_CAN_JTF2_2023_AR_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Machine Gunner (Winter)"; 
		faction = "BS_B_CAN_JTF2_2023"; 
		identityTypes[] = {"TanoanHead_A3_07", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_CAN_JTF2_2023_AR_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Machine Gunner (Winter)"; 
		faction = "BS_I_CAN_JTF2_2023"; 
		identityTypes[] = {"TanoanHead_A3_07", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_CAN_JTF2_2023_GL_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Grenadier (Winter)"; 
		faction = "BS_O_CAN_JTF2_2023"; 
		identityTypes[] = {"TanoanHead_A3_05", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_CAN_JTF2_2023_GL_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Grenadier (Winter)"; 
		faction = "BS_B_CAN_JTF2_2023"; 
		identityTypes[] = {"TanoanHead_A3_05", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_CAN_JTF2_2023_GL_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Grenadier (Winter)"; 
		faction = "BS_I_CAN_JTF2_2023"; 
		identityTypes[] = {"TanoanHead_A3_05", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_CAN_JTF2_2023_Medic_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Doctor (Winter)"; 
		faction = "BS_O_CAN_JTF2_2023"; 
		identityTypes[] = {"AsianHead_A3_02", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_CAN_JTF2_2023_Medic_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Doctor (Winter)"; 
		faction = "BS_B_CAN_JTF2_2023"; 
		identityTypes[] = {"AsianHead_A3_02", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_CAN_JTF2_2023_Medic_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Doctor (Winter)"; 
		faction = "BS_I_CAN_JTF2_2023"; 
		identityTypes[] = {"AsianHead_A3_02", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_CAN_JTF2_2023_SNP_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Sniper (Winter)"; 
		faction = "BS_O_CAN_JTF2_2023"; 
		identityTypes[] = {"WhiteHead_21", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_CAN_JTF2_2023_SNP_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Sniper (Winter)"; 
		faction = "BS_B_CAN_JTF2_2023"; 
		identityTypes[] = {"WhiteHead_21", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_CAN_JTF2_2023_SNP_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Sniper (Winter)"; 
		faction = "BS_I_CAN_JTF2_2023"; 
		identityTypes[] = {"WhiteHead_21", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_CAN_JTF2_2023_RTO_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Anti-Tank (Winter)"; 
		faction = "BS_O_CAN_JTF2_2023"; 
		identityTypes[] = {"WhiteHead_05", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_CAN_JTF2_2023_RTO_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Anti-Tank (Winter)"; 
		faction = "BS_B_CAN_JTF2_2023"; 
		identityTypes[] = {"WhiteHead_05", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_CAN_JTF2_2023_RTO_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Anti-Tank (Winter)"; 
		faction = "BS_I_CAN_JTF2_2023"; 
		identityTypes[] = {"WhiteHead_05", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_CAN_JTF2_2023_DIVER_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Special (Winter)"; 
		faction = "BS_O_CAN_JTF2_2023"; 
		identityTypes[] = {"WhiteHead_06", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_CAN_JTF2_2023_DIVER_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Special (Winter)"; 
		faction = "BS_B_CAN_JTF2_2023"; 
		identityTypes[] = {"WhiteHead_06", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_CAN_JTF2_2023_DIVER_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Special (Winter)"; 
		faction = "BS_I_CAN_JTF2_2023"; 
		identityTypes[] = {"WhiteHead_06", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_Black_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_Black_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_black_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{"V_Chestrig_rgr",{{"30Rnd_65x39_caseless_black_mag",10,30},{"SmokeShellBlue",7,1},{"CUP_HandGrenade_M67",1,1}}},{"B_AssaultPack_dgtl",{{"30Rnd_65x39_caseless_black_mag_Tracer",5,30},{"CUP_HandGrenade_L109A1_HE",3,1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_CAN_JTF2_2023_Officer_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Officer (Winter)"; 
		faction = "BS_O_CAN_JTF2_2023"; 
		identityTypes[] = {"GreekHead_A3_03", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Aviator","H_Bandanna_sgg"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Aviator","H_Bandanna_sgg"}; 
		weapons[] = {"hgun_ACPC2_F"}; 
		respawnWeapons[] = {"hgun_ACPC2_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",8},{},""},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{},{},"H_Bandanna_sgg","G_Aviator",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_CAN_JTF2_2023_Officer_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Officer (Winter)"; 
		faction = "BS_B_CAN_JTF2_2023"; 
		identityTypes[] = {"GreekHead_A3_03", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Aviator","H_Bandanna_sgg"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Aviator","H_Bandanna_sgg"}; 
		weapons[] = {"hgun_ACPC2_F"}; 
		respawnWeapons[] = {"hgun_ACPC2_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",8},{},""},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{},{},"H_Bandanna_sgg","G_Aviator",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_CAN_JTF2_2023_Officer_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Officer (Winter)"; 
		faction = "BS_I_CAN_JTF2_2023"; 
		identityTypes[] = {"GreekHead_A3_03", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_SL_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Aviator","H_Bandanna_sgg"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Aviator","H_Bandanna_sgg"}; 
		weapons[] = {"hgun_ACPC2_F"}; 
		respawnWeapons[] = {"hgun_ACPC2_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",8},{},""},{"U_B_T_Soldier_SL_F",{{"ACE_quikclot",1},{"FirstAidKit",5}}},{},{},"H_Bandanna_sgg","G_Aviator",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_CAN_JTF2_2023_VAR_2_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 3"; 
		faction = "BS_O_CAN_JTF2_2023"; 
		identityTypes[] = {"GreekHead_A3_10_sa", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "U_C_Journalist"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_khk_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_khk_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_khk_F","muzzle_snds_H_khk_F","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_khaki_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_C_Journalist",{{"ACE_quikclot",1},{"FirstAidKit",4}}},{"V_PlateCarrier2_rgr_noflag_F",{}},{"B_AssaultPack_dgtl",{{"ACE_rope12",1},{"ACE_rope15",1},{"ACE_rope18",1},{"ACE_rope3",1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_CAN_JTF2_2023_VAR_2_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 3"; 
		faction = "BS_B_CAN_JTF2_2023"; 
		identityTypes[] = {"GreekHead_A3_10_sa", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "U_C_Journalist"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_khk_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_khk_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_khk_F","muzzle_snds_H_khk_F","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_khaki_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_C_Journalist",{{"ACE_quikclot",1},{"FirstAidKit",4}}},{"V_PlateCarrier2_rgr_noflag_F",{}},{"B_AssaultPack_dgtl",{{"ACE_rope12",1},{"ACE_rope15",1},{"ACE_rope18",1},{"ACE_rope3",1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_CAN_JTF2_2023_VAR_2_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 3"; 
		faction = "BS_I_CAN_JTF2_2023"; 
		identityTypes[] = {"GreekHead_A3_10_sa", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "U_C_Journalist"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ACE_NVG_Gen1","G_Bandanna_aviator","H_Watchcap_camo"}; 
		weapons[] = {"arifle_MX_khk_F","ACE_VectorDay"}; 
		respawnWeapons[] = {"arifle_MX_khk_F","ACE_VectorDay"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_dgtl";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_khk_F","muzzle_snds_H_khk_F","ACE_DBAL_A3_Red","optic_Aco",{"30Rnd_65x39_caseless_khaki_mag",30},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"U_C_Journalist",{{"ACE_quikclot",1},{"FirstAidKit",4}}},{"V_PlateCarrier2_rgr_noflag_F",{}},{"B_AssaultPack_dgtl",{{"ACE_rope12",1},{"ACE_rope15",1},{"ACE_rope18",1},{"ACE_rope3",1}}},"H_Watchcap_camo","G_Bandanna_aviator",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	class B_Mortar_01_F;
	class BS_B_CAN_JTF2_2023_gdLSc7FB4Sg:B_Mortar_01_F {
		scope=2;
		side=1;
		faction="BS_B_CAN_JTF2_2023";
		crew="BS_B_CAN_JTF2_2023_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_CAN_JTF2_2023_Rifleman_WL"
		}; 
	}; 
	class BS_O_CAN_JTF2_2023_gdLSc7FB4Sg:B_Mortar_01_F {
		scope=2;
		side=0;
		faction="BS_O_CAN_JTF2_2023";
		crew="BS_O_CAN_JTF2_2023_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_CAN_JTF2_2023_Rifleman_WL"
		}; 
	}; 
	class BS_I_CAN_JTF2_2023_gdLSc7FB4Sg:B_Mortar_01_F {
		scope=2;
		side=2;
		faction="BS_I_CAN_JTF2_2023";
		crew="BS_I_CAN_JTF2_2023_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_CAN_JTF2_2023_Rifleman_WL"
		}; 
	}; 

	class B_GMG_01_F;
	class BS_B_CAN_JTF2_2023_V2CrDxnuYrw:B_GMG_01_F {
		scope=2;
		side=1;
		faction="BS_B_CAN_JTF2_2023";
		crew="BS_B_CAN_JTF2_2023_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_CAN_JTF2_2023_Rifleman_WL"
		}; 
	}; 
	class BS_O_CAN_JTF2_2023_V2CrDxnuYrw:B_GMG_01_F {
		scope=2;
		side=0;
		faction="BS_O_CAN_JTF2_2023";
		crew="BS_O_CAN_JTF2_2023_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_CAN_JTF2_2023_Rifleman_WL"
		}; 
	}; 
	class BS_I_CAN_JTF2_2023_V2CrDxnuYrw:B_GMG_01_F {
		scope=2;
		side=2;
		faction="BS_I_CAN_JTF2_2023";
		crew="BS_I_CAN_JTF2_2023_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_CAN_JTF2_2023_Rifleman_WL"
		}; 
	}; 

	class B_GMG_01_high_F;
	class BS_B_CAN_JTF2_2023_6oj29K6ln50:B_GMG_01_high_F {
		scope=2;
		side=1;
		faction="BS_B_CAN_JTF2_2023";
		crew="BS_B_CAN_JTF2_2023_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_CAN_JTF2_2023_Rifleman_WL"
		}; 
	}; 
	class BS_O_CAN_JTF2_2023_6oj29K6ln50:B_GMG_01_high_F {
		scope=2;
		side=0;
		faction="BS_O_CAN_JTF2_2023";
		crew="BS_O_CAN_JTF2_2023_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_CAN_JTF2_2023_Rifleman_WL"
		}; 
	}; 
	class BS_I_CAN_JTF2_2023_6oj29K6ln50:B_GMG_01_high_F {
		scope=2;
		side=2;
		faction="BS_I_CAN_JTF2_2023";
		crew="BS_I_CAN_JTF2_2023_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_CAN_JTF2_2023_Rifleman_WL"
		}; 
	}; 

	class B_GMG_01_A_F;
	class BS_B_CAN_JTF2_2023_Lzw6Kz9nDBE:B_GMG_01_A_F {
		scope=2;
		side=1;
		faction="BS_B_CAN_JTF2_2023";
		crew="BS_B_CAN_JTF2_2023_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_CAN_JTF2_2023_Rifleman_WL"
		}; 
	}; 
	class BS_O_CAN_JTF2_2023_Lzw6Kz9nDBE:B_GMG_01_A_F {
		scope=2;
		side=0;
		faction="BS_O_CAN_JTF2_2023";
		crew="BS_O_CAN_JTF2_2023_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_CAN_JTF2_2023_Rifleman_WL"
		}; 
	}; 
	class BS_I_CAN_JTF2_2023_Lzw6Kz9nDBE:B_GMG_01_A_F {
		scope=2;
		side=2;
		faction="BS_I_CAN_JTF2_2023";
		crew="BS_I_CAN_JTF2_2023_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_CAN_JTF2_2023_Rifleman_WL"
		}; 
	}; 

	class B_HMG_01_high_F;
	class BS_B_CAN_JTF2_2023_t8G446lxSH4:B_HMG_01_high_F {
		scope=2;
		side=1;
		faction="BS_B_CAN_JTF2_2023";
		crew="BS_B_CAN_JTF2_2023_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_CAN_JTF2_2023_Rifleman_WL"
		}; 
	}; 
	class BS_O_CAN_JTF2_2023_t8G446lxSH4:B_HMG_01_high_F {
		scope=2;
		side=0;
		faction="BS_O_CAN_JTF2_2023";
		crew="BS_O_CAN_JTF2_2023_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_CAN_JTF2_2023_Rifleman_WL"
		}; 
	}; 
	class BS_I_CAN_JTF2_2023_t8G446lxSH4:B_HMG_01_high_F {
		scope=2;
		side=2;
		faction="BS_I_CAN_JTF2_2023";
		crew="BS_I_CAN_JTF2_2023_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_CAN_JTF2_2023_Rifleman_WL"
		}; 
	}; 

	class B_SAM_System_02_F;
	class BS_B_CAN_JTF2_2023_jE6O41KqVxE:B_SAM_System_02_F {
		scope=2;
		side=1;
		faction="BS_B_CAN_JTF2_2023";
		crew="BS_B_CAN_JTF2_2023_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_CAN_JTF2_2023_Rifleman_WL"
		}; 
	}; 
	class BS_O_CAN_JTF2_2023_jE6O41KqVxE:B_SAM_System_02_F {
		scope=2;
		side=0;
		faction="BS_O_CAN_JTF2_2023";
		crew="BS_O_CAN_JTF2_2023_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_CAN_JTF2_2023_Rifleman_WL"
		}; 
	}; 
	class BS_I_CAN_JTF2_2023_jE6O41KqVxE:B_SAM_System_02_F {
		scope=2;
		side=2;
		faction="BS_I_CAN_JTF2_2023";
		crew="BS_I_CAN_JTF2_2023_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_CAN_JTF2_2023_Rifleman_WL"
		}; 
	}; 

	class B_static_AA_F;
	class BS_B_CAN_JTF2_2023_8e2pl9sdLns:B_static_AA_F {
		scope=2;
		side=1;
		faction="BS_B_CAN_JTF2_2023";
		crew="BS_B_CAN_JTF2_2023_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_CAN_JTF2_2023_Rifleman_WL"
		}; 
	}; 
	class BS_O_CAN_JTF2_2023_8e2pl9sdLns:B_static_AA_F {
		scope=2;
		side=0;
		faction="BS_O_CAN_JTF2_2023";
		crew="BS_O_CAN_JTF2_2023_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_CAN_JTF2_2023_Rifleman_WL"
		}; 
	}; 
	class BS_I_CAN_JTF2_2023_8e2pl9sdLns:B_static_AA_F {
		scope=2;
		side=2;
		faction="BS_I_CAN_JTF2_2023";
		crew="BS_I_CAN_JTF2_2023_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_CAN_JTF2_2023_Rifleman_WL"
		}; 
	}; 

	class B_APC_Wheeled_01_cannon_F;
	class BS_B_CAN_JTF2_2023_Aauo8nS_iM4:B_APC_Wheeled_01_cannon_F {
		scope=2;
		side=1;
		faction="BS_B_CAN_JTF2_2023";
		crew="BS_B_CAN_JTF2_2023_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_CAN_JTF2_2023_DIVER_WL",
			"BS_B_CAN_JTF2_2023_DIVER_WL",
			"BS_B_CAN_JTF2_2023_DIVER_WL"
		}; 
	}; 
	class BS_O_CAN_JTF2_2023_Aauo8nS_iM4:B_APC_Wheeled_01_cannon_F {
		scope=2;
		side=0;
		faction="BS_O_CAN_JTF2_2023";
		crew="BS_O_CAN_JTF2_2023_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_CAN_JTF2_2023_DIVER_WL",
			"BS_O_CAN_JTF2_2023_DIVER_WL",
			"BS_O_CAN_JTF2_2023_DIVER_WL"
		}; 
	}; 
	class BS_I_CAN_JTF2_2023_Aauo8nS_iM4:B_APC_Wheeled_01_cannon_F {
		scope=2;
		side=2;
		faction="BS_I_CAN_JTF2_2023";
		crew="BS_I_CAN_JTF2_2023_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_CAN_JTF2_2023_DIVER_WL",
			"BS_I_CAN_JTF2_2023_DIVER_WL",
			"BS_I_CAN_JTF2_2023_DIVER_WL"
		}; 
	}; 

	class B_APC_Tracked_01_rcws_F;
	class BS_B_CAN_JTF2_2023_MTGTTGpCLPA:B_APC_Tracked_01_rcws_F {
		scope=2;
		side=1;
		faction="BS_B_CAN_JTF2_2023";
		crew="BS_B_CAN_JTF2_2023_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_CAN_JTF2_2023_DIVER_WL",
			"BS_B_CAN_JTF2_2023_DIVER_WL",
			"BS_B_CAN_JTF2_2023_DIVER_WL"
		}; 
	}; 
	class BS_O_CAN_JTF2_2023_MTGTTGpCLPA:B_APC_Tracked_01_rcws_F {
		scope=2;
		side=0;
		faction="BS_O_CAN_JTF2_2023";
		crew="BS_O_CAN_JTF2_2023_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_CAN_JTF2_2023_DIVER_WL",
			"BS_O_CAN_JTF2_2023_DIVER_WL",
			"BS_O_CAN_JTF2_2023_DIVER_WL"
		}; 
	}; 
	class BS_I_CAN_JTF2_2023_MTGTTGpCLPA:B_APC_Tracked_01_rcws_F {
		scope=2;
		side=2;
		faction="BS_I_CAN_JTF2_2023";
		crew="BS_I_CAN_JTF2_2023_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_CAN_JTF2_2023_DIVER_WL",
			"BS_I_CAN_JTF2_2023_DIVER_WL",
			"BS_I_CAN_JTF2_2023_DIVER_WL"
		}; 
	}; 

	class B_AFV_Wheeled_01_up_cannon_F;
	class BS_B_CAN_JTF2_2023_trX9yh_yDqs:B_AFV_Wheeled_01_up_cannon_F {
		scope=2;
		side=1;
		faction="BS_B_CAN_JTF2_2023";
		crew="BS_B_CAN_JTF2_2023_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_CAN_JTF2_2023_DIVER_WL",
			"BS_B_CAN_JTF2_2023_DIVER_WL",
			"BS_B_CAN_JTF2_2023_DIVER_WL"
		}; 
	}; 
	class BS_O_CAN_JTF2_2023_trX9yh_yDqs:B_AFV_Wheeled_01_up_cannon_F {
		scope=2;
		side=0;
		faction="BS_O_CAN_JTF2_2023";
		crew="BS_O_CAN_JTF2_2023_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_CAN_JTF2_2023_DIVER_WL",
			"BS_O_CAN_JTF2_2023_DIVER_WL",
			"BS_O_CAN_JTF2_2023_DIVER_WL"
		}; 
	}; 
	class BS_I_CAN_JTF2_2023_trX9yh_yDqs:B_AFV_Wheeled_01_up_cannon_F {
		scope=2;
		side=2;
		faction="BS_I_CAN_JTF2_2023";
		crew="BS_I_CAN_JTF2_2023_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_CAN_JTF2_2023_DIVER_WL",
			"BS_I_CAN_JTF2_2023_DIVER_WL",
			"BS_I_CAN_JTF2_2023_DIVER_WL"
		}; 
	}; 

	class B_MBT_01_mlrs_F;
	class BS_B_CAN_JTF2_2023_nHuqwIa2Gk0:B_MBT_01_mlrs_F {
		scope=2;
		side=1;
		faction="BS_B_CAN_JTF2_2023";
		crew="BS_B_CAN_JTF2_2023_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_CAN_JTF2_2023_DIVER_WL",
			"BS_B_CAN_JTF2_2023_DIVER_WL"
		}; 
	}; 
	class BS_O_CAN_JTF2_2023_nHuqwIa2Gk0:B_MBT_01_mlrs_F {
		scope=2;
		side=0;
		faction="BS_O_CAN_JTF2_2023";
		crew="BS_O_CAN_JTF2_2023_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_CAN_JTF2_2023_DIVER_WL",
			"BS_O_CAN_JTF2_2023_DIVER_WL"
		}; 
	}; 
	class BS_I_CAN_JTF2_2023_nHuqwIa2Gk0:B_MBT_01_mlrs_F {
		scope=2;
		side=2;
		faction="BS_I_CAN_JTF2_2023";
		crew="BS_I_CAN_JTF2_2023_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_CAN_JTF2_2023_DIVER_WL",
			"BS_I_CAN_JTF2_2023_DIVER_WL"
		}; 
	}; 

	class B_MBT_01_arty_F;
	class BS_B_CAN_JTF2_2023_1uyQQJ31eRw:B_MBT_01_arty_F {
		scope=2;
		side=1;
		faction="BS_B_CAN_JTF2_2023";
		crew="BS_B_CAN_JTF2_2023_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_CAN_JTF2_2023_DIVER_WL",
			"BS_B_CAN_JTF2_2023_DIVER_WL",
			"BS_B_CAN_JTF2_2023_DIVER_WL"
		}; 
	}; 
	class BS_O_CAN_JTF2_2023_1uyQQJ31eRw:B_MBT_01_arty_F {
		scope=2;
		side=0;
		faction="BS_O_CAN_JTF2_2023";
		crew="BS_O_CAN_JTF2_2023_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_CAN_JTF2_2023_DIVER_WL",
			"BS_O_CAN_JTF2_2023_DIVER_WL",
			"BS_O_CAN_JTF2_2023_DIVER_WL"
		}; 
	}; 
	class BS_I_CAN_JTF2_2023_1uyQQJ31eRw:B_MBT_01_arty_F {
		scope=2;
		side=2;
		faction="BS_I_CAN_JTF2_2023";
		crew="BS_I_CAN_JTF2_2023_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_CAN_JTF2_2023_DIVER_WL",
			"BS_I_CAN_JTF2_2023_DIVER_WL",
			"BS_I_CAN_JTF2_2023_DIVER_WL"
		}; 
	}; 

	class B_UAV_05_F;
	class BS_B_CAN_JTF2_2023_sKtG94jpR_g:B_UAV_05_F {
		scope=2;
		side=1;
		faction="BS_B_CAN_JTF2_2023";
		crew="BS_B_CAN_JTF2_2023_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_CAN_JTF2_2023_DIVER_WL",
			"BS_B_CAN_JTF2_2023_DIVER_WL"
		}; 
	}; 
	class BS_O_CAN_JTF2_2023_sKtG94jpR_g:B_UAV_05_F {
		scope=2;
		side=0;
		faction="BS_O_CAN_JTF2_2023";
		crew="BS_O_CAN_JTF2_2023_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_CAN_JTF2_2023_DIVER_WL",
			"BS_O_CAN_JTF2_2023_DIVER_WL"
		}; 
	}; 
	class BS_I_CAN_JTF2_2023_sKtG94jpR_g:B_UAV_05_F {
		scope=2;
		side=2;
		faction="BS_I_CAN_JTF2_2023";
		crew="BS_I_CAN_JTF2_2023_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_CAN_JTF2_2023_DIVER_WL",
			"BS_I_CAN_JTF2_2023_DIVER_WL"
		}; 
	}; 

	class B_Heli_Light_01_dynamicLoadout_F;
	class BS_B_CAN_JTF2_2023_3d9y7nJgCqo:B_Heli_Light_01_dynamicLoadout_F {
		scope=2;
		side=1;
		faction="BS_B_CAN_JTF2_2023";
		crew="BS_B_CAN_JTF2_2023_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_CAN_JTF2_2023_DIVER_WL",
			"BS_B_CAN_JTF2_2023_DIVER_WL"
		}; 
	}; 
	class BS_O_CAN_JTF2_2023_3d9y7nJgCqo:B_Heli_Light_01_dynamicLoadout_F {
		scope=2;
		side=0;
		faction="BS_O_CAN_JTF2_2023";
		crew="BS_O_CAN_JTF2_2023_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_CAN_JTF2_2023_DIVER_WL",
			"BS_O_CAN_JTF2_2023_DIVER_WL"
		}; 
	}; 
	class BS_I_CAN_JTF2_2023_3d9y7nJgCqo:B_Heli_Light_01_dynamicLoadout_F {
		scope=2;
		side=2;
		faction="BS_I_CAN_JTF2_2023";
		crew="BS_I_CAN_JTF2_2023_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_CAN_JTF2_2023_DIVER_WL",
			"BS_I_CAN_JTF2_2023_DIVER_WL"
		}; 
	}; 

	class B_Heli_Transport_03_F;
	class BS_B_CAN_JTF2_2023_ysDwKg9CKtc:B_Heli_Transport_03_F {
		scope=2;
		side=1;
		faction="BS_B_CAN_JTF2_2023";
		crew="BS_B_CAN_JTF2_2023_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_CAN_JTF2_2023_DIVER_WL",
			"BS_B_CAN_JTF2_2023_DIVER_WL",
			"BS_B_CAN_JTF2_2023_DIVER_WL",
			"BS_B_CAN_JTF2_2023_DIVER_WL",
			"BS_B_CAN_JTF2_2023_DIVER_WL",
			"BS_B_CAN_JTF2_2023_DIVER_WL"
		}; 
	}; 
	class BS_O_CAN_JTF2_2023_ysDwKg9CKtc:B_Heli_Transport_03_F {
		scope=2;
		side=0;
		faction="BS_O_CAN_JTF2_2023";
		crew="BS_O_CAN_JTF2_2023_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_CAN_JTF2_2023_DIVER_WL",
			"BS_O_CAN_JTF2_2023_DIVER_WL",
			"BS_O_CAN_JTF2_2023_DIVER_WL",
			"BS_O_CAN_JTF2_2023_DIVER_WL",
			"BS_O_CAN_JTF2_2023_DIVER_WL",
			"BS_O_CAN_JTF2_2023_DIVER_WL"
		}; 
	}; 
	class BS_I_CAN_JTF2_2023_ysDwKg9CKtc:B_Heli_Transport_03_F {
		scope=2;
		side=2;
		faction="BS_I_CAN_JTF2_2023";
		crew="BS_I_CAN_JTF2_2023_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_CAN_JTF2_2023_DIVER_WL",
			"BS_I_CAN_JTF2_2023_DIVER_WL",
			"BS_I_CAN_JTF2_2023_DIVER_WL",
			"BS_I_CAN_JTF2_2023_DIVER_WL",
			"BS_I_CAN_JTF2_2023_DIVER_WL",
			"BS_I_CAN_JTF2_2023_DIVER_WL"
		}; 
	}; 

	class B_Heli_Transport_03_unarmed_F;
	class BS_B_CAN_JTF2_2023_S5whMbr1n18:B_Heli_Transport_03_unarmed_F {
		scope=2;
		side=1;
		faction="BS_B_CAN_JTF2_2023";
		crew="BS_B_CAN_JTF2_2023_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_CAN_JTF2_2023_DIVER_WL",
			"BS_B_CAN_JTF2_2023_DIVER_WL",
			"BS_B_CAN_JTF2_2023_DIVER_WL",
			"BS_B_CAN_JTF2_2023_DIVER_WL",
			"BS_B_CAN_JTF2_2023_DIVER_WL",
			"BS_B_CAN_JTF2_2023_DIVER_WL"
		}; 
	}; 
	class BS_O_CAN_JTF2_2023_S5whMbr1n18:B_Heli_Transport_03_unarmed_F {
		scope=2;
		side=0;
		faction="BS_O_CAN_JTF2_2023";
		crew="BS_O_CAN_JTF2_2023_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_CAN_JTF2_2023_DIVER_WL",
			"BS_O_CAN_JTF2_2023_DIVER_WL",
			"BS_O_CAN_JTF2_2023_DIVER_WL",
			"BS_O_CAN_JTF2_2023_DIVER_WL",
			"BS_O_CAN_JTF2_2023_DIVER_WL",
			"BS_O_CAN_JTF2_2023_DIVER_WL"
		}; 
	}; 
	class BS_I_CAN_JTF2_2023_S5whMbr1n18:B_Heli_Transport_03_unarmed_F {
		scope=2;
		side=2;
		faction="BS_I_CAN_JTF2_2023";
		crew="BS_I_CAN_JTF2_2023_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_CAN_JTF2_2023_DIVER_WL",
			"BS_I_CAN_JTF2_2023_DIVER_WL",
			"BS_I_CAN_JTF2_2023_DIVER_WL",
			"BS_I_CAN_JTF2_2023_DIVER_WL",
			"BS_I_CAN_JTF2_2023_DIVER_WL",
			"BS_I_CAN_JTF2_2023_DIVER_WL"
		}; 
	}; 

	class B_Plane_CAS_01_dynamicLoadout_F;
	class BS_B_CAN_JTF2_2023_XI4tDhq8hpw:B_Plane_CAS_01_dynamicLoadout_F {
		scope=2;
		side=1;
		faction="BS_B_CAN_JTF2_2023";
		crew="BS_B_CAN_JTF2_2023_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_CAN_JTF2_2023_DIVER_WL"
		}; 
	}; 
	class BS_O_CAN_JTF2_2023_XI4tDhq8hpw:B_Plane_CAS_01_dynamicLoadout_F {
		scope=2;
		side=0;
		faction="BS_O_CAN_JTF2_2023";
		crew="BS_O_CAN_JTF2_2023_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_CAN_JTF2_2023_DIVER_WL"
		}; 
	}; 
	class BS_I_CAN_JTF2_2023_XI4tDhq8hpw:B_Plane_CAS_01_dynamicLoadout_F {
		scope=2;
		side=2;
		faction="BS_I_CAN_JTF2_2023";
		crew="BS_I_CAN_JTF2_2023_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_CAN_JTF2_2023_DIVER_WL"
		}; 
	}; 

	class B_Truck_01_transport_F;
	class BS_B_CAN_JTF2_2023_U9h1_Aahs5k:B_Truck_01_transport_F {
		scope=2;
		side=1;
		faction="BS_B_CAN_JTF2_2023";
		crew="BS_B_CAN_JTF2_2023_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_CAN_JTF2_2023_DIVER_WL",
			"BS_B_CAN_JTF2_2023_DIVER_WL",
			"BS_B_CAN_JTF2_2023_DIVER_WL"
		}; 
	}; 
	class BS_O_CAN_JTF2_2023_U9h1_Aahs5k:B_Truck_01_transport_F {
		scope=2;
		side=0;
		faction="BS_O_CAN_JTF2_2023";
		crew="BS_O_CAN_JTF2_2023_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_CAN_JTF2_2023_DIVER_WL",
			"BS_O_CAN_JTF2_2023_DIVER_WL",
			"BS_O_CAN_JTF2_2023_DIVER_WL"
		}; 
	}; 
	class BS_I_CAN_JTF2_2023_U9h1_Aahs5k:B_Truck_01_transport_F {
		scope=2;
		side=2;
		faction="BS_I_CAN_JTF2_2023";
		crew="BS_I_CAN_JTF2_2023_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_CAN_JTF2_2023_DIVER_WL",
			"BS_I_CAN_JTF2_2023_DIVER_WL",
			"BS_I_CAN_JTF2_2023_DIVER_WL"
		}; 
	}; 

	class B_Truck_01_covered_F;
	class BS_B_CAN_JTF2_2023_JDDxop_SxsI:B_Truck_01_covered_F {
		scope=2;
		side=1;
		faction="BS_B_CAN_JTF2_2023";
		crew="BS_B_CAN_JTF2_2023_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_CAN_JTF2_2023_DIVER_WL",
			"BS_B_CAN_JTF2_2023_DIVER_WL",
			"BS_B_CAN_JTF2_2023_DIVER_WL"
		}; 
	}; 
	class BS_O_CAN_JTF2_2023_JDDxop_SxsI:B_Truck_01_covered_F {
		scope=2;
		side=0;
		faction="BS_O_CAN_JTF2_2023";
		crew="BS_O_CAN_JTF2_2023_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_CAN_JTF2_2023_DIVER_WL",
			"BS_O_CAN_JTF2_2023_DIVER_WL",
			"BS_O_CAN_JTF2_2023_DIVER_WL"
		}; 
	}; 
	class BS_I_CAN_JTF2_2023_JDDxop_SxsI:B_Truck_01_covered_F {
		scope=2;
		side=2;
		faction="BS_I_CAN_JTF2_2023";
		crew="BS_I_CAN_JTF2_2023_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_CAN_JTF2_2023_DIVER_WL",
			"BS_I_CAN_JTF2_2023_DIVER_WL",
			"BS_I_CAN_JTF2_2023_DIVER_WL"
		}; 
	}; 

	class B_LSV_01_armed_F;
	class BS_B_CAN_JTF2_2023_k3_SDha4C58:B_LSV_01_armed_F {
		scope=2;
		side=1;
		faction="BS_B_CAN_JTF2_2023";
		crew="BS_B_CAN_JTF2_2023_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_CAN_JTF2_2023_DIVER_WL",
			"BS_B_CAN_JTF2_2023_DIVER_WL",
			"BS_B_CAN_JTF2_2023_DIVER_WL",
			"BS_B_CAN_JTF2_2023_DIVER_WL",
			"BS_B_CAN_JTF2_2023_DIVER_WL"
		}; 
	}; 
	class BS_O_CAN_JTF2_2023_k3_SDha4C58:B_LSV_01_armed_F {
		scope=2;
		side=0;
		faction="BS_O_CAN_JTF2_2023";
		crew="BS_O_CAN_JTF2_2023_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_CAN_JTF2_2023_DIVER_WL",
			"BS_O_CAN_JTF2_2023_DIVER_WL",
			"BS_O_CAN_JTF2_2023_DIVER_WL",
			"BS_O_CAN_JTF2_2023_DIVER_WL",
			"BS_O_CAN_JTF2_2023_DIVER_WL"
		}; 
	}; 
	class BS_I_CAN_JTF2_2023_k3_SDha4C58:B_LSV_01_armed_F {
		scope=2;
		side=2;
		faction="BS_I_CAN_JTF2_2023";
		crew="BS_I_CAN_JTF2_2023_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_CAN_JTF2_2023_DIVER_WL",
			"BS_I_CAN_JTF2_2023_DIVER_WL",
			"BS_I_CAN_JTF2_2023_DIVER_WL",
			"BS_I_CAN_JTF2_2023_DIVER_WL",
			"BS_I_CAN_JTF2_2023_DIVER_WL"
		}; 
	}; 
};
class CfgGroups { 
	class East { 
		class CAN_JTF2_2023 { 
			name="Canadian - JTF2 (2023)";
			class Infantry {
				name="Infantry";
				class BS_O_CAN_JTF2_2023_Fireteam_WL {
					name="Fireteam (Woodland)";
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					side=0;
					faction="BS_O_CAN_JTF2_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_CAN_JTF2_2023_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_CAN_JTF2_2023_GL_WL";
					};
				};
				class BS_O_CAN_JTF2_2023_Squad_WL {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Squad (Woodland)";
					side=0;
					faction="BS_O_CAN_JTF2_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_CAN_JTF2_2023_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_CAN_JTF2_2023_GL_WL";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_CAN_JTF2_2023_AR_WL";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_CAN_JTF2_2023_GL_WL";
					};
				};
				class BS_O_CAN_JTF2_2023_AT_WL {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Anti-Tank (Woodland)";
					side=0;
					faction="BS_O_CAN_JTF2_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_CAN_JTF2_2023_Rifleman_WL";
					};
				};
			};
			class Motorized {
				name="Mechanize Infantry";
				class BS_O_CAN_JTF2_2023_LightVehicle_WL_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Polaris DAGOR (XM312) (Woodland)";
					side=0;
					faction="BS_O_CAN_JTF2_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_CAN_JTF2_2023_k3_SDha4C58";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_CAN_JTF2_2023_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_CAN_JTF2_2023_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_CAN_JTF2_2023_AR_WL";
					};
				};
				class BS_O_CAN_JTF2_2023_Tank_WL_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Badger IFV (Woodland) ";
					side=0;
					faction="BS_O_CAN_JTF2_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_CAN_JTF2_2023_Aauo8nS_iM4";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_CAN_JTF2_2023_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_CAN_JTF2_2023_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_CAN_JTF2_2023_AR_WL";
					};
				};
				class BS_O_CAN_JTF2_2023_Tank_WL_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Namer (Woodland) ";
					side=0;
					faction="BS_O_CAN_JTF2_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_CAN_JTF2_2023_MTGTTGpCLPA";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_CAN_JTF2_2023_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_CAN_JTF2_2023_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_CAN_JTF2_2023_AR_WL";
					};
				};
				class BS_O_CAN_JTF2_2023_Tank_WL_2 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Rooikat 120 UP (Woodland) ";
					side=0;
					faction="BS_O_CAN_JTF2_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_CAN_JTF2_2023_trX9yh_yDqs";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_CAN_JTF2_2023_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_CAN_JTF2_2023_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_CAN_JTF2_2023_AR_WL";
					};
				};
			};
		};
	};
	class Indep { 
		class CAN_JTF2_2023 { 
			name="Canadian - JTF2 (2023)";
			class Infantry {
				name="Infantry";
				class BS_I_CAN_JTF2_2023_Fireteam_WL {
					name="Fireteam (Woodland)";
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					side=2;
					faction="BS_I_CAN_JTF2_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_CAN_JTF2_2023_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_CAN_JTF2_2023_GL_WL";
					};
				};
				class BS_I_CAN_JTF2_2023_Squad_WL {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Squad (Woodland)";
					side=2;
					faction="BS_I_CAN_JTF2_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_CAN_JTF2_2023_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_CAN_JTF2_2023_GL_WL";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_CAN_JTF2_2023_AR_WL";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_CAN_JTF2_2023_GL_WL";
					};
				};
				class BS_I_CAN_JTF2_2023_AT_WL {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Anti-Tank (Woodland)";
					side=2;
					faction="BS_I_CAN_JTF2_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_CAN_JTF2_2023_Rifleman_WL";
					};
				};
			};
			class Motorized {
				name="Mechanize Infantry";
				class BS_I_CAN_JTF2_2023_LightVehicle_WL_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Polaris DAGOR (XM312) (Woodland)";
					side=2;
					faction="BS_I_CAN_JTF2_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_CAN_JTF2_2023_k3_SDha4C58";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_CAN_JTF2_2023_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_CAN_JTF2_2023_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_CAN_JTF2_2023_AR_WL";
					};
				};
				class BS_I_CAN_JTF2_2023_Tank_WL_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Badger IFV (Woodland) ";
					side=2;
					faction="BS_I_CAN_JTF2_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_CAN_JTF2_2023_Aauo8nS_iM4";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_CAN_JTF2_2023_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_CAN_JTF2_2023_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_CAN_JTF2_2023_AR_WL";
					};
				};
				class BS_I_CAN_JTF2_2023_Tank_WL_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Namer (Woodland) ";
					side=2;
					faction="BS_I_CAN_JTF2_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_CAN_JTF2_2023_MTGTTGpCLPA";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_CAN_JTF2_2023_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_CAN_JTF2_2023_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_CAN_JTF2_2023_AR_WL";
					};
				};
				class BS_I_CAN_JTF2_2023_Tank_WL_2 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Rooikat 120 UP (Woodland) ";
					side=2;
					faction="BS_I_CAN_JTF2_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_CAN_JTF2_2023_trX9yh_yDqs";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_CAN_JTF2_2023_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_CAN_JTF2_2023_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_CAN_JTF2_2023_AR_WL";
					};
				};
			};
		};
	};
	class West { 
		class CAN_JTF2_2023 { 
			name="Canadian - JTF2 (2023)";
			class Infantry {
				name="Infantry";
				class BS_B_CAN_JTF2_2023_Fireteam_WL {
					name="Fireteam (Woodland)";
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					side=1;
					faction="BS_B_CAN_JTF2_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_CAN_JTF2_2023_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_CAN_JTF2_2023_GL_WL";
					};
				};
				class BS_B_CAN_JTF2_2023_Squad_WL {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Squad (Woodland)";
					side=1;
					faction="BS_B_CAN_JTF2_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_CAN_JTF2_2023_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_CAN_JTF2_2023_GL_WL";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_CAN_JTF2_2023_AR_WL";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_CAN_JTF2_2023_GL_WL";
					};
				};
				class BS_B_CAN_JTF2_2023_AT_WL {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Anti-Tank (Woodland)";
					side=1;
					faction="BS_B_CAN_JTF2_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_CAN_JTF2_2023_Rifleman_WL";
					};
				};
			};
			class Motorized {
				name="Mechanize Infantry";
				class BS_B_CAN_JTF2_2023_LightVehicle_WL_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Polaris DAGOR (XM312) (Woodland)";
					side=1;
					faction="BS_B_CAN_JTF2_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_CAN_JTF2_2023_k3_SDha4C58";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_CAN_JTF2_2023_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_CAN_JTF2_2023_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_CAN_JTF2_2023_AR_WL";
					};
				};
				class BS_B_CAN_JTF2_2023_Tank_WL_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Badger IFV (Woodland) ";
					side=1;
					faction="BS_B_CAN_JTF2_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_CAN_JTF2_2023_Aauo8nS_iM4";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_CAN_JTF2_2023_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_CAN_JTF2_2023_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_CAN_JTF2_2023_AR_WL";
					};
				};
				class BS_B_CAN_JTF2_2023_Tank_WL_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Namer (Woodland) ";
					side=1;
					faction="BS_B_CAN_JTF2_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_CAN_JTF2_2023_MTGTTGpCLPA";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_CAN_JTF2_2023_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_CAN_JTF2_2023_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_CAN_JTF2_2023_AR_WL";
					};
				};
				class BS_B_CAN_JTF2_2023_Tank_WL_2 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Rooikat 120 UP (Woodland) ";
					side=1;
					faction="BS_B_CAN_JTF2_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_CAN_JTF2_2023_trX9yh_yDqs";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_CAN_JTF2_2023_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_CAN_JTF2_2023_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_CAN_JTF2_2023_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_CAN_JTF2_2023_AR_WL";
					};
				};
			};
		};
	};
};

class CfgPatches { 
	class bm_specops_faction_CAN_JTF2_2023{
		author = "Broken Skull Mods";
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={
			"A3_Weapons_F_Rifles_MX_Black",
			"ace_realisticnames",
			"A3_Weapons_F_Acc",
			"ace_irlight",
			"ace_scopes",
			"A3_Weapons_F",
			"CUP_Weapons_West_Attachments",
			"A3_Characters_F_Exp",
			"ace_medical_treatment",
			"A3_Weapons_F_Items",
			"ace_medical_engine",
			"A3_Characters_F",
			"CUP_Weapons_Grenades",
			"ace_vector",
			"ace_nightvision",
			"A3_Weapons_F_Pistols_ACPC2",
			"cba_jam",
			"ace_ballistics",
			"ace_smallarms",
			"A3_Weapons_F_Exp",
			"A3_Characters_F_Exp_Vests",
			"ace_logistics_rope",
			"bm_specops_faction_US_ARMA_BASE"
};
		units[]={
			"BS_O_CAN_JTF2_2023_Rifleman_WL",
			"BS_B_CAN_JTF2_2023_Rifleman_WL",
			"BS_I_CAN_JTF2_2023_Rifleman_WL",
			"BS_O_CAN_JTF2_2023_AR_WL",
			"BS_B_CAN_JTF2_2023_AR_WL",
			"BS_I_CAN_JTF2_2023_AR_WL",
			"BS_O_CAN_JTF2_2023_GL_WL",
			"BS_B_CAN_JTF2_2023_GL_WL",
			"BS_I_CAN_JTF2_2023_GL_WL",
			"BS_O_CAN_JTF2_2023_Medic_WL",
			"BS_B_CAN_JTF2_2023_Medic_WL",
			"BS_I_CAN_JTF2_2023_Medic_WL",
			"BS_O_CAN_JTF2_2023_SNP_WL",
			"BS_B_CAN_JTF2_2023_SNP_WL",
			"BS_I_CAN_JTF2_2023_SNP_WL",
			"BS_O_CAN_JTF2_2023_RTO_WL",
			"BS_B_CAN_JTF2_2023_RTO_WL",
			"BS_I_CAN_JTF2_2023_RTO_WL",
			"BS_O_CAN_JTF2_2023_DIVER_WL",
			"BS_B_CAN_JTF2_2023_DIVER_WL",
			"BS_I_CAN_JTF2_2023_DIVER_WL",
			"BS_O_CAN_JTF2_2023_Officer_WL",
			"BS_B_CAN_JTF2_2023_Officer_WL",
			"BS_I_CAN_JTF2_2023_Officer_WL",
			"BS_O_CAN_JTF2_2023_Rifleman_DT",
			"BS_B_CAN_JTF2_2023_Rifleman_DT",
			"BS_I_CAN_JTF2_2023_Rifleman_DT",
			"BS_O_CAN_JTF2_2023_AR_DT",
			"BS_B_CAN_JTF2_2023_AR_DT",
			"BS_I_CAN_JTF2_2023_AR_DT",
			"BS_O_CAN_JTF2_2023_GL_DT",
			"BS_B_CAN_JTF2_2023_GL_DT",
			"BS_I_CAN_JTF2_2023_GL_DT",
			"BS_O_CAN_JTF2_2023_Medic_DT",
			"BS_B_CAN_JTF2_2023_Medic_DT",
			"BS_I_CAN_JTF2_2023_Medic_DT",
			"BS_O_CAN_JTF2_2023_SNP_DT",
			"BS_B_CAN_JTF2_2023_SNP_DT",
			"BS_I_CAN_JTF2_2023_SNP_DT",
			"BS_O_CAN_JTF2_2023_RTO_DT",
			"BS_B_CAN_JTF2_2023_RTO_DT",
			"BS_I_CAN_JTF2_2023_RTO_DT",
			"BS_O_CAN_JTF2_2023_DIVER_DT",
			"BS_B_CAN_JTF2_2023_DIVER_DT",
			"BS_I_CAN_JTF2_2023_DIVER_DT",
			"BS_O_CAN_JTF2_2023_Officer_DT",
			"BS_B_CAN_JTF2_2023_Officer_DT",
			"BS_I_CAN_JTF2_2023_Officer_DT",
			"BS_O_CAN_JTF2_2023_Rifleman_WT",
			"BS_B_CAN_JTF2_2023_Rifleman_WT",
			"BS_I_CAN_JTF2_2023_Rifleman_WT",
			"BS_O_CAN_JTF2_2023_AR_WT",
			"BS_B_CAN_JTF2_2023_AR_WT",
			"BS_I_CAN_JTF2_2023_AR_WT",
			"BS_O_CAN_JTF2_2023_GL_WT",
			"BS_B_CAN_JTF2_2023_GL_WT",
			"BS_I_CAN_JTF2_2023_GL_WT",
			"BS_O_CAN_JTF2_2023_Medic_WT",
			"BS_B_CAN_JTF2_2023_Medic_WT",
			"BS_I_CAN_JTF2_2023_Medic_WT",
			"BS_O_CAN_JTF2_2023_SNP_WT",
			"BS_B_CAN_JTF2_2023_SNP_WT",
			"BS_I_CAN_JTF2_2023_SNP_WT",
			"BS_O_CAN_JTF2_2023_RTO_WT",
			"BS_B_CAN_JTF2_2023_RTO_WT",
			"BS_I_CAN_JTF2_2023_RTO_WT",
			"BS_O_CAN_JTF2_2023_DIVER_WT",
			"BS_B_CAN_JTF2_2023_DIVER_WT",
			"BS_I_CAN_JTF2_2023_DIVER_WT",
			"BS_O_CAN_JTF2_2023_Officer_WT",
			"BS_B_CAN_JTF2_2023_Officer_WT",
			"BS_I_CAN_JTF2_2023_Officer_WT",
			"BS_B_CAN_JTF2_2023_gdLSc7FB4Sg",
			"BS_O_CAN_JTF2_2023_gdLSc7FB4Sg",
			"BS_I_CAN_JTF2_2023_gdLSc7FB4Sg",
			"BS_B_CAN_JTF2_2023_V2CrDxnuYrw",
			"BS_O_CAN_JTF2_2023_V2CrDxnuYrw",
			"BS_I_CAN_JTF2_2023_V2CrDxnuYrw",
			"BS_B_CAN_JTF2_2023_6oj29K6ln50",
			"BS_O_CAN_JTF2_2023_6oj29K6ln50",
			"BS_I_CAN_JTF2_2023_6oj29K6ln50",
			"BS_B_CAN_JTF2_2023_Lzw6Kz9nDBE",
			"BS_O_CAN_JTF2_2023_Lzw6Kz9nDBE",
			"BS_I_CAN_JTF2_2023_Lzw6Kz9nDBE",
			"BS_B_CAN_JTF2_2023_t8G446lxSH4",
			"BS_O_CAN_JTF2_2023_t8G446lxSH4",
			"BS_I_CAN_JTF2_2023_t8G446lxSH4",
			"BS_B_CAN_JTF2_2023_jE6O41KqVxE",
			"BS_O_CAN_JTF2_2023_jE6O41KqVxE",
			"BS_I_CAN_JTF2_2023_jE6O41KqVxE",
			"BS_B_CAN_JTF2_2023_8e2pl9sdLns",
			"BS_O_CAN_JTF2_2023_8e2pl9sdLns",
			"BS_I_CAN_JTF2_2023_8e2pl9sdLns",
			"BS_B_CAN_JTF2_2023_Aauo8nS_iM4",
			"BS_O_CAN_JTF2_2023_Aauo8nS_iM4",
			"BS_I_CAN_JTF2_2023_Aauo8nS_iM4",
			"BS_B_CAN_JTF2_2023_MTGTTGpCLPA",
			"BS_O_CAN_JTF2_2023_MTGTTGpCLPA",
			"BS_I_CAN_JTF2_2023_MTGTTGpCLPA",
			"BS_B_CAN_JTF2_2023_trX9yh_yDqs",
			"BS_O_CAN_JTF2_2023_trX9yh_yDqs",
			"BS_I_CAN_JTF2_2023_trX9yh_yDqs",
			"BS_B_CAN_JTF2_2023_nHuqwIa2Gk0",
			"BS_O_CAN_JTF2_2023_nHuqwIa2Gk0",
			"BS_I_CAN_JTF2_2023_nHuqwIa2Gk0",
			"BS_B_CAN_JTF2_2023_1uyQQJ31eRw",
			"BS_O_CAN_JTF2_2023_1uyQQJ31eRw",
			"BS_I_CAN_JTF2_2023_1uyQQJ31eRw",
			"BS_B_CAN_JTF2_2023_sKtG94jpR_g",
			"BS_O_CAN_JTF2_2023_sKtG94jpR_g",
			"BS_I_CAN_JTF2_2023_sKtG94jpR_g",
			"BS_B_CAN_JTF2_2023_3d9y7nJgCqo",
			"BS_O_CAN_JTF2_2023_3d9y7nJgCqo",
			"BS_I_CAN_JTF2_2023_3d9y7nJgCqo",
			"BS_B_CAN_JTF2_2023_ysDwKg9CKtc",
			"BS_O_CAN_JTF2_2023_ysDwKg9CKtc",
			"BS_I_CAN_JTF2_2023_ysDwKg9CKtc",
			"BS_B_CAN_JTF2_2023_S5whMbr1n18",
			"BS_O_CAN_JTF2_2023_S5whMbr1n18",
			"BS_I_CAN_JTF2_2023_S5whMbr1n18",
			"BS_B_CAN_JTF2_2023_XI4tDhq8hpw",
			"BS_O_CAN_JTF2_2023_XI4tDhq8hpw",
			"BS_I_CAN_JTF2_2023_XI4tDhq8hpw",
			"BS_B_CAN_JTF2_2023_U9h1_Aahs5k",
			"BS_O_CAN_JTF2_2023_U9h1_Aahs5k",
			"BS_I_CAN_JTF2_2023_U9h1_Aahs5k",
			"BS_B_CAN_JTF2_2023_JDDxop_SxsI",
			"BS_O_CAN_JTF2_2023_JDDxop_SxsI",
			"BS_I_CAN_JTF2_2023_JDDxop_SxsI",
			"BS_B_CAN_JTF2_2023_k3_SDha4C58",
			"BS_O_CAN_JTF2_2023_k3_SDha4C58",
			"BS_I_CAN_JTF2_2023_k3_SDha4C58"
};
	};
};
class CfgFactionClasses {
	// As Friendly (BluFOR)
	class BS_B_CAN_JTF2_2023_BASE { 
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
		brokenSkullArsenal[]={"arifle_MX_Black_F","muzzle_snds_H","ACE_DBAL_A3_Red","optic_Aco","30Rnd_65x39_caseless_black_mag","CUP_bipod_Harris_1A2_L_BLK","U_B_T_Soldier_SL_F","ACE_quikclot","FirstAidKit","V_Chestrig_rgr","SmokeShellBlue","CUP_HandGrenade_M67","30Rnd_65x39_caseless_black_mag_Tracer","CUP_HandGrenade_L109A1_HE","H_Watchcap_camo","ACE_VectorDay","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen1","hgun_ACPC2_F","9Rnd_45ACP_Mag","H_Bandanna_sgg","arifle_MX_khk_F","muzzle_snds_H_khk_F","30Rnd_65x39_caseless_khaki_mag","U_C_Journalist","V_PlateCarrier2_rgr_noflag_F","ACE_rope12","ACE_rope15","ACE_rope18","ACE_rope3"};

		garage[]={{"BS_B_CAN_JTF2_2023_gdLSc7FB4Sg",0,200,-1},{"BS_B_CAN_JTF2_2023_V2CrDxnuYrw",0,200,-1},{"BS_B_CAN_JTF2_2023_6oj29K6ln50",0,200,-1},{"BS_B_CAN_JTF2_2023_Lzw6Kz9nDBE",0,200,-1},{"BS_B_CAN_JTF2_2023_t8G446lxSH4",0,150,-1},{"BS_B_CAN_JTF2_2023_jE6O41KqVxE",0,150,-1},{"BS_B_CAN_JTF2_2023_8e2pl9sdLns",0,150,-1},{"BS_B_CAN_JTF2_2023_Aauo8nS_iM4",1,40,1},{"BS_B_CAN_JTF2_2023_MTGTTGpCLPA",2,1000,1},{"BS_B_CAN_JTF2_2023_trX9yh_yDqs",2,40,1},{"BS_B_CAN_JTF2_2023_nHuqwIa2Gk0",2,2500,0},{"BS_B_CAN_JTF2_2023_1uyQQJ31eRw",0,2500,-1},{"BS_B_CAN_JTF2_2023_sKtG94jpR_g",2,2000,-1},{"BS_B_CAN_JTF2_2023_3d9y7nJgCqo",2,3000,-1},{"BS_B_CAN_JTF2_2023_ysDwKg9CKtc",2,1000,-1},{"BS_B_CAN_JTF2_2023_S5whMbr1n18",2,1000,-1},{"BS_B_CAN_JTF2_2023_XI4tDhq8hpw",2,2000,-1},{"BS_B_CAN_JTF2_2023_U9h1_Aahs5k",0,50,3},{"BS_B_CAN_JTF2_2023_JDDxop_SxsI",0,50,3},{"BS_B_CAN_JTF2_2023_k3_SDha4C58",0,300,2}};
		SamSystem[]={{"BS_B_CAN_JTF2_2023_jE6O41KqVxE","Mk21 Centurion"}};
		SearchLight[]={};
		StaticLowMG[]={{"BS_B_CAN_JTF2_2023_V2CrDxnuYrw","XM307"},{"BS_B_CAN_JTF2_2023_Lzw6Kz9nDBE","XM307A"}};
		StaticHighMG[]={{"BS_B_CAN_JTF2_2023_6oj29K6ln50","XM307 (High)"},{"BS_B_CAN_JTF2_2023_t8G446lxSH4","XM312 (High)"}};
		StaticMotar[]={{"BS_B_CAN_JTF2_2023_gdLSc7FB4Sg","Mk6 Mortar"}};
		StaticAntiAir[]={{"BS_B_CAN_JTF2_2023_8e2pl9sdLns","Mini-Spike Launcher (AA)"}};
		VehicleTechnicals[]={"BS_B_CAN_JTF2_2023_k3_SDha4C58"};
		VehicleAntiAircraft[]={"BS_B_CAN_JTF2_2023_nHuqwIa2Gk0"};
		VehicleTanks[]={"BS_B_CAN_JTF2_2023_Aauo8nS_iM4","BS_B_CAN_JTF2_2023_MTGTTGpCLPA","BS_B_CAN_JTF2_2023_trX9yh_yDqs"};
		VehicleTransport[]={"BS_B_CAN_JTF2_2023_U9h1_Aahs5k","BS_B_CAN_JTF2_2023_JDDxop_SxsI"};
	};
	// As Friendly (BluFOR)
	class BS_B_CAN_JTF2_2023 : BS_B_CAN_JTF2_2023_BASE { 
		useForSpecOps = 1;   
		displayName = "Canadian - JTF2 (2023)";
		side = 1;       
		flag = "\A3\Data_F\Flags\flag_US_CO.paa";
		icon = "\A3\Data_F\Flags\flag_US_CO.paa";
		priority = 0; 
	};
	// As Opposite Forces (OpFOR)
	class BS_O_CAN_JTF2_2023 : BS_B_CAN_JTF2_2023_BASE { 
		useForSpecOps = 1;
		displayName = "Canadian - JTF2 (2023)";
		side = 0;       
		flag = "\A3\Data_F\Flags\flag_US_CO.paa";
		icon = "\A3\Data_F\Flags\flag_US_CO.paa";
		priority = 0; 
	};
	// As Independent (Independent)
	class BS_I_CAN_JTF2_2023 : BS_B_CAN_JTF2_2023_BASE { 
		useForSpecOps = 1;
		displayName = "Canadian - JTF2 (2023)";
		side = 2;       
		flag = "\A3\Data_F\Flags\flag_US_CO.paa";
		icon = "\A3\Data_F\Flags\flag_US_CO.paa";
		priority = 0; 
	};
};
// As Friendly (BluFOR)
class SpecOps_Module_BLUFOR_Factions { 
	class BS_B_CAN_JTF2_2023 { name = "Canadian - JTF2 (2023)"; value = "BS_B_CAN_JTF2_2023"; };  
};
// As Friendly (BluFOR)
class SpecOps_Module_OPFOR_Factions { 
	class BS_O_CAN_JTF2_2023 { name = "Canadian - JTF2 (2023)"; value = "BS_O_CAN_JTF2_2023"; };  
};
// As Friendly (BluFOR)
class SpecOps_Module_GRE_Factions { 
	class BS_I_CAN_JTF2_2023 { name = "Canadian - JTF2 (2023)"; value = "BS_I_CAN_JTF2_2023"; };  
};