

class CfgVehicles {
	class B_Survivor_F;
	class I_G_Survivor_F;
	class O_G_Survivor_F; 
	// This unit is for OpFOR
	class BS_O_ASF_2008_Rifleman_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Rifleman (Woodland)"; 
		faction = "BS_O_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_02", "Male02PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_Fatigue_BDU_ATACS_AU_01"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_Combat","LOP_H_Shemag_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_Combat","LOP_H_Shemag_TAN"}; 
		weapons[] = {"rhs_weap_akm","rhs_weap_6p53","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_akm","rhs_weap_6p53","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "LOP_B_FP_MG42_tub";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_akm","rhs_acc_dtk1l","rhs_acc_2dpZenit","",{"rhs_30Rnd_762x39mm_bakelite_U",30},{},""},{},{"rhs_weap_6p53","","","",{"rhs_18rnd_9x21mm_7N29",18},{},""},{"LOP_U_Fatigue_BDU_ATACS_AU_01",{}},{"V_TacVest_brn",{}},{"LOP_B_FP_MG42_tub",{}},"LOP_H_Shemag_TAN","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ASF_2008_Rifleman_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Rifleman (Woodland)"; 
		faction = "BS_B_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_02", "Male02PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_Fatigue_BDU_ATACS_AU_01"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_Combat","LOP_H_Shemag_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_Combat","LOP_H_Shemag_TAN"}; 
		weapons[] = {"rhs_weap_akm","rhs_weap_6p53","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_akm","rhs_weap_6p53","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "LOP_B_FP_MG42_tub";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_akm","rhs_acc_dtk1l","rhs_acc_2dpZenit","",{"rhs_30Rnd_762x39mm_bakelite_U",30},{},""},{},{"rhs_weap_6p53","","","",{"rhs_18rnd_9x21mm_7N29",18},{},""},{"LOP_U_Fatigue_BDU_ATACS_AU_01",{}},{"V_TacVest_brn",{}},{"LOP_B_FP_MG42_tub",{}},"LOP_H_Shemag_TAN","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ASF_2008_Rifleman_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Rifleman (Woodland)"; 
		faction = "BS_I_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_02", "Male02PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_Fatigue_BDU_ATACS_AU_01"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_Combat","LOP_H_Shemag_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_Combat","LOP_H_Shemag_TAN"}; 
		weapons[] = {"rhs_weap_akm","rhs_weap_6p53","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_akm","rhs_weap_6p53","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "LOP_B_FP_MG42_tub";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_akm","rhs_acc_dtk1l","rhs_acc_2dpZenit","",{"rhs_30Rnd_762x39mm_bakelite_U",30},{},""},{},{"rhs_weap_6p53","","","",{"rhs_18rnd_9x21mm_7N29",18},{},""},{"LOP_U_Fatigue_BDU_ATACS_AU_01",{}},{"V_TacVest_brn",{}},{"LOP_B_FP_MG42_tub",{}},"LOP_H_Shemag_TAN","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ASF_2008_GL_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Grenadier (Woodland)"; 
		faction = "BS_O_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_a", "Male02PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_CHR_Citizen_02"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemRadio","ItemGPS","LOP_H_Turban_mask"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemRadio","ItemGPS","LOP_H_Turban_mask"}; 
		weapons[] = {"rhs_weap_ak74_2","rhs_weap_M320","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak74_2","rhs_weap_M320","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_tortila_grey";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74_2","rhs_acc_uuk","rhs_acc_2dpZenit","",{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",30},{},""},{},{"rhs_weap_M320","","","",{"rhs_mag_M441_HE",1},{},""},{"LOP_U_CHR_Citizen_02",{}},{"rhs_lifchik_vog",{}},{"rhs_tortila_grey",{}},"LOP_H_Turban_mask","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ASF_2008_GL_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Grenadier (Woodland)"; 
		faction = "BS_B_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_a", "Male02PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_CHR_Citizen_02"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemRadio","ItemGPS","LOP_H_Turban_mask"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemRadio","ItemGPS","LOP_H_Turban_mask"}; 
		weapons[] = {"rhs_weap_ak74_2","rhs_weap_M320","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak74_2","rhs_weap_M320","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_tortila_grey";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74_2","rhs_acc_uuk","rhs_acc_2dpZenit","",{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",30},{},""},{},{"rhs_weap_M320","","","",{"rhs_mag_M441_HE",1},{},""},{"LOP_U_CHR_Citizen_02",{}},{"rhs_lifchik_vog",{}},{"rhs_tortila_grey",{}},"LOP_H_Turban_mask","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ASF_2008_GL_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Grenadier (Woodland)"; 
		faction = "BS_I_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_a", "Male02PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_CHR_Citizen_02"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemRadio","ItemGPS","LOP_H_Turban_mask"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemRadio","ItemGPS","LOP_H_Turban_mask"}; 
		weapons[] = {"rhs_weap_ak74_2","rhs_weap_M320","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak74_2","rhs_weap_M320","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_tortila_grey";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74_2","rhs_acc_uuk","rhs_acc_2dpZenit","",{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",30},{},""},{},{"rhs_weap_M320","","","",{"rhs_mag_M441_HE",1},{},""},{"LOP_U_CHR_Citizen_02",{}},{"rhs_lifchik_vog",{}},{"rhs_tortila_grey",{}},"LOP_H_Turban_mask","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ASF_2008_AR_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Machine Gunner (Woodland)"; 
		faction = "BS_O_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_sa", "Male03PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_US_Fatigue_10"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_googles_black","LOP_H_Turban"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_googles_black","LOP_H_Turban"}; 
		weapons[] = {"rhs_weap_rpk74m_npz","rhs_weap_makarov_pm","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_rpk74m_npz","rhs_weap_makarov_pm","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_cbr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_rpk74m_npz","rhs_acc_dtk2","rhs_acc_2dpZenit","rhs_acc_okp7_picatinny",{"SCM_96Rnd_545x39_RPK_Mag_Tracer",96},{},""},{},{"rhs_weap_makarov_pm","","","",{},{},""},{"LOP_U_US_Fatigue_10",{}},{"rhs_suspender_AK8_chestrig",{}},{"B_Kitbag_cbr",{}},"LOP_H_Turban","rhs_googles_black",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ASF_2008_AR_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Machine Gunner (Woodland)"; 
		faction = "BS_B_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_sa", "Male03PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_US_Fatigue_10"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_googles_black","LOP_H_Turban"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_googles_black","LOP_H_Turban"}; 
		weapons[] = {"rhs_weap_rpk74m_npz","rhs_weap_makarov_pm","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_rpk74m_npz","rhs_weap_makarov_pm","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_cbr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_rpk74m_npz","rhs_acc_dtk2","rhs_acc_2dpZenit","rhs_acc_okp7_picatinny",{"SCM_96Rnd_545x39_RPK_Mag_Tracer",96},{},""},{},{"rhs_weap_makarov_pm","","","",{},{},""},{"LOP_U_US_Fatigue_10",{}},{"rhs_suspender_AK8_chestrig",{}},{"B_Kitbag_cbr",{}},"LOP_H_Turban","rhs_googles_black",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ASF_2008_AR_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Machine Gunner (Woodland)"; 
		faction = "BS_I_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_sa", "Male03PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_US_Fatigue_10"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_googles_black","LOP_H_Turban"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_googles_black","LOP_H_Turban"}; 
		weapons[] = {"rhs_weap_rpk74m_npz","rhs_weap_makarov_pm","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_rpk74m_npz","rhs_weap_makarov_pm","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_cbr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_rpk74m_npz","rhs_acc_dtk2","rhs_acc_2dpZenit","rhs_acc_okp7_picatinny",{"SCM_96Rnd_545x39_RPK_Mag_Tracer",96},{},""},{},{"rhs_weap_makarov_pm","","","",{},{},""},{"LOP_U_US_Fatigue_10",{}},{"rhs_suspender_AK8_chestrig",{}},{"B_Kitbag_cbr",{}},"LOP_H_Turban","rhs_googles_black",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ASF_2008_RTO_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Anti-Tank (Woodland)"; 
		faction = "BS_O_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_a", "Male01PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_CHR_Citizen_02"; 
		linkedItems[] = {"ItemMap","ItemGPS"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS"}; 
		weapons[] = {"rhs_weap_ak74_3","rhs_weap_rpg7","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak74_3","rhs_weap_rpg7","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_rpg_empty";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74_3","rhs_acc_dtk3","rhs_acc_2dpZenit","",{"rhs_30Rnd_545x39_7N10_2mag_AK",30},{},""},{"rhs_weap_rpg7","","","rhs_acc_pgo7v3",{"rhs_rpg7_PG7VL_mag",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_CHR_Citizen_02",{{"ACE_EarPlugs",1}}},{"rhs_belt_AK4",{}},{"rhs_rpg_empty",{{"rhs_rpg7_OG7V_mag",2,1}}},"","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ASF_2008_RTO_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Anti-Tank (Woodland)"; 
		faction = "BS_B_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_a", "Male01PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_CHR_Citizen_02"; 
		linkedItems[] = {"ItemMap","ItemGPS"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS"}; 
		weapons[] = {"rhs_weap_ak74_3","rhs_weap_rpg7","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak74_3","rhs_weap_rpg7","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_rpg_empty";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74_3","rhs_acc_dtk3","rhs_acc_2dpZenit","",{"rhs_30Rnd_545x39_7N10_2mag_AK",30},{},""},{"rhs_weap_rpg7","","","rhs_acc_pgo7v3",{"rhs_rpg7_PG7VL_mag",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_CHR_Citizen_02",{{"ACE_EarPlugs",1}}},{"rhs_belt_AK4",{}},{"rhs_rpg_empty",{{"rhs_rpg7_OG7V_mag",2,1}}},"","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ASF_2008_RTO_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Anti-Tank (Woodland)"; 
		faction = "BS_I_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_a", "Male01PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_CHR_Citizen_02"; 
		linkedItems[] = {"ItemMap","ItemGPS"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS"}; 
		weapons[] = {"rhs_weap_ak74_3","rhs_weap_rpg7","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak74_3","rhs_weap_rpg7","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_rpg_empty";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74_3","rhs_acc_dtk3","rhs_acc_2dpZenit","",{"rhs_30Rnd_545x39_7N10_2mag_AK",30},{},""},{"rhs_weap_rpg7","","","rhs_acc_pgo7v3",{"rhs_rpg7_PG7VL_mag",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_CHR_Citizen_02",{{"ACE_EarPlugs",1}}},{"rhs_belt_AK4",{}},{"rhs_rpg_empty",{{"rhs_rpg7_OG7V_mag",2,1}}},"","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ASF_2008_SNP_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Sniper (Woodland)"; 
		faction = "BS_O_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_l", "Male01PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_AM_Fatigue_04_5"; 
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","ItemGPS","LOP_H_Shemag_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","ItemGPS","LOP_H_Shemag_TAN"}; 
		weapons[] = {"rhs_weap_svdp_npz","rhs_weap_pb_6p9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_npz","rhs_weap_pb_6p9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_tortila_grey";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_npz","","","rhs_acc_dh520x56",{"ACE_10Rnd_762x54_Tracer_mag",10},{},""},{},{"rhs_weap_pb_6p9","rhs_acc_6p9_suppressor","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"LOP_U_AM_Fatigue_04_5",{{"ACE_EarPlugs",1}}},{"rhs_suspender_AK",{}},{"rhs_tortila_grey",{}},"LOP_H_Shemag_TAN","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ASF_2008_SNP_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Sniper (Woodland)"; 
		faction = "BS_B_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_l", "Male01PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_AM_Fatigue_04_5"; 
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","ItemGPS","LOP_H_Shemag_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","ItemGPS","LOP_H_Shemag_TAN"}; 
		weapons[] = {"rhs_weap_svdp_npz","rhs_weap_pb_6p9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_npz","rhs_weap_pb_6p9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_tortila_grey";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_npz","","","rhs_acc_dh520x56",{"ACE_10Rnd_762x54_Tracer_mag",10},{},""},{},{"rhs_weap_pb_6p9","rhs_acc_6p9_suppressor","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"LOP_U_AM_Fatigue_04_5",{{"ACE_EarPlugs",1}}},{"rhs_suspender_AK",{}},{"rhs_tortila_grey",{}},"LOP_H_Shemag_TAN","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ASF_2008_SNP_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Sniper (Woodland)"; 
		faction = "BS_I_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_l", "Male01PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_AM_Fatigue_04_5"; 
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","ItemGPS","LOP_H_Shemag_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","ItemGPS","LOP_H_Shemag_TAN"}; 
		weapons[] = {"rhs_weap_svdp_npz","rhs_weap_pb_6p9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_npz","rhs_weap_pb_6p9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_tortila_grey";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_npz","","","rhs_acc_dh520x56",{"ACE_10Rnd_762x54_Tracer_mag",10},{},""},{},{"rhs_weap_pb_6p9","rhs_acc_6p9_suppressor","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"LOP_U_AM_Fatigue_04_5",{{"ACE_EarPlugs",1}}},{"rhs_suspender_AK",{}},{"rhs_tortila_grey",{}},"LOP_H_Shemag_TAN","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ASF_2008_Medic_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Doctor (Woodland)"; 
		faction = "BS_O_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_a", "Male02PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_NAPA_Fatigue_04"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"}; 
		weapons[] = {"rhs_weap_aks74un","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_aks74un","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_cbr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_aks74un","rhs_acc_tgpa","","rhs_acc_pkas",{"rhs_30Rnd_545x39_7N10_camo_AK",30},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_NAPA_Fatigue_04",{}},{"rhs_suspender_SKS",{}},{"B_Kitbag_cbr",{}},"","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ASF_2008_Medic_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Doctor (Woodland)"; 
		faction = "BS_B_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_a", "Male02PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_NAPA_Fatigue_04"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"}; 
		weapons[] = {"rhs_weap_aks74un","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_aks74un","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_cbr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_aks74un","rhs_acc_tgpa","","rhs_acc_pkas",{"rhs_30Rnd_545x39_7N10_camo_AK",30},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_NAPA_Fatigue_04",{}},{"rhs_suspender_SKS",{}},{"B_Kitbag_cbr",{}},"","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ASF_2008_Medic_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Doctor (Woodland)"; 
		faction = "BS_I_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_a", "Male02PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_NAPA_Fatigue_04"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"}; 
		weapons[] = {"rhs_weap_aks74un","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_aks74un","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_cbr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_aks74un","rhs_acc_tgpa","","rhs_acc_pkas",{"rhs_30Rnd_545x39_7N10_camo_AK",30},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_NAPA_Fatigue_04",{}},{"rhs_suspender_SKS",{}},{"B_Kitbag_cbr",{}},"","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ASF_2008_DIVER_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Special (Woodland)"; 
		faction = "BS_O_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_01", "Male02PER" ,"G_NATO_default"};
		uniformClass = "U_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_1PN138","G_B_Diving","H_Booniehat_dgtl"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_1PN138","G_B_Diving","H_Booniehat_dgtl"}; 
		weapons[] = {"rhs_weap_ak103_1_npz","rhs_weap_pya","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak103_1_npz","rhs_weap_pya","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_blk";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak103_1_npz","","rhs_acc_perst1ik","rhs_acc_1p87",{"rhs_30Rnd_762x39mm_bakelite",30},{},""},{},{"rhs_weap_pya","","","",{"rhs_mag_9x19_17",17},{},""},{"U_B_Wetsuit",{}},{"V_RebreatherB",{}},{"B_AssaultPack_blk",{}},"H_Booniehat_dgtl","G_B_Diving",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","rhs_1PN138"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ASF_2008_DIVER_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Special (Woodland)"; 
		faction = "BS_B_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_01", "Male02PER" ,"G_NATO_default"};
		uniformClass = "U_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_1PN138","G_B_Diving","H_Booniehat_dgtl"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_1PN138","G_B_Diving","H_Booniehat_dgtl"}; 
		weapons[] = {"rhs_weap_ak103_1_npz","rhs_weap_pya","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak103_1_npz","rhs_weap_pya","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_blk";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak103_1_npz","","rhs_acc_perst1ik","rhs_acc_1p87",{"rhs_30Rnd_762x39mm_bakelite",30},{},""},{},{"rhs_weap_pya","","","",{"rhs_mag_9x19_17",17},{},""},{"U_B_Wetsuit",{}},{"V_RebreatherB",{}},{"B_AssaultPack_blk",{}},"H_Booniehat_dgtl","G_B_Diving",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","rhs_1PN138"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ASF_2008_DIVER_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Special (Woodland)"; 
		faction = "BS_I_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_01", "Male02PER" ,"G_NATO_default"};
		uniformClass = "U_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_1PN138","G_B_Diving","H_Booniehat_dgtl"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_1PN138","G_B_Diving","H_Booniehat_dgtl"}; 
		weapons[] = {"rhs_weap_ak103_1_npz","rhs_weap_pya","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak103_1_npz","rhs_weap_pya","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_blk";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak103_1_npz","","rhs_acc_perst1ik","rhs_acc_1p87",{"rhs_30Rnd_762x39mm_bakelite",30},{},""},{},{"rhs_weap_pya","","","",{"rhs_mag_9x19_17",17},{},""},{"U_B_Wetsuit",{}},{"V_RebreatherB",{}},{"B_AssaultPack_blk",{}},"H_Booniehat_dgtl","G_B_Diving",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","rhs_1PN138"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ASF_2008_Officer_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Officer (Woodland)"; 
		faction = "BS_O_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_03", "Male02PER" ,"G_NATO_default"};
		uniformClass = "U_lxWS_C_Djella_03"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_Aviator","lxWS_H_cloth_5_C"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_Aviator","lxWS_H_cloth_5_C"}; 
		weapons[] = {"rhs_weap_ak74n_npz","hgun_Pistol_heavy_01_green_F","Binocular"}; 
		respawnWeapons[] = {"rhs_weap_ak74n_npz","hgun_Pistol_heavy_01_green_F","Binocular"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74n_npz","rhs_acc_dtk1983","","",{"rhs_30Rnd_545x39_7N10_2mag_desert_AK",30},{},""},{},{"hgun_Pistol_heavy_01_green_F","","","",{"11Rnd_45ACP_Mag",15},{},""},{"U_lxWS_C_Djella_03",{}},{},{},"lxWS_H_cloth_5_C","G_Aviator",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ASF_2008_Officer_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Officer (Woodland)"; 
		faction = "BS_B_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_03", "Male02PER" ,"G_NATO_default"};
		uniformClass = "U_lxWS_C_Djella_03"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_Aviator","lxWS_H_cloth_5_C"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_Aviator","lxWS_H_cloth_5_C"}; 
		weapons[] = {"rhs_weap_ak74n_npz","hgun_Pistol_heavy_01_green_F","Binocular"}; 
		respawnWeapons[] = {"rhs_weap_ak74n_npz","hgun_Pistol_heavy_01_green_F","Binocular"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74n_npz","rhs_acc_dtk1983","","",{"rhs_30Rnd_545x39_7N10_2mag_desert_AK",30},{},""},{},{"hgun_Pistol_heavy_01_green_F","","","",{"11Rnd_45ACP_Mag",15},{},""},{"U_lxWS_C_Djella_03",{}},{},{},"lxWS_H_cloth_5_C","G_Aviator",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ASF_2008_Officer_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Officer (Woodland)"; 
		faction = "BS_I_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_03", "Male02PER" ,"G_NATO_default"};
		uniformClass = "U_lxWS_C_Djella_03"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_Aviator","lxWS_H_cloth_5_C"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_Aviator","lxWS_H_cloth_5_C"}; 
		weapons[] = {"rhs_weap_ak74n_npz","hgun_Pistol_heavy_01_green_F","Binocular"}; 
		respawnWeapons[] = {"rhs_weap_ak74n_npz","hgun_Pistol_heavy_01_green_F","Binocular"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74n_npz","rhs_acc_dtk1983","","",{"rhs_30Rnd_545x39_7N10_2mag_desert_AK",30},{},""},{},{"hgun_Pistol_heavy_01_green_F","","","",{"11Rnd_45ACP_Mag",15},{},""},{"U_lxWS_C_Djella_03",{}},{},{},"lxWS_H_cloth_5_C","G_Aviator",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ASF_2008_VAR_0_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 1"; 
		faction = "BS_O_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_01", "Male02PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_TAK_Civ_Fatigue_08"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","LOP_H_Shemag_BLU"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","LOP_H_Shemag_BLU"}; 
		weapons[] = {"rhs_weap_svdp_wd_npz","launch_RPG7_F","rhs_weap_pb_6p9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_wd_npz","launch_RPG7_F","rhs_weap_pb_6p9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_tortila_black";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_wd_npz","rhs_acc_tgpv2","","optic_DMS",{"rhs_10Rnd_762x54mmR_7N1",10},{},""},{"launch_RPG7_F","","","rhs_acc_1pn93_2",{"rhs_rpg7_TBG7V_mag",1},{},""},{"rhs_weap_pb_6p9","rhs_acc_6p9_suppressor","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"LOP_U_TAK_Civ_Fatigue_08",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"rhs_suspender_AK8_chestrig",{{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_Kestrel4500",1},{"SmokeShell",2,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellBlue",1,1},{"SmokeShellGreen",1,1},{"SmokeShellOrange",1,1},{"rhs_mag_rgd5",2,1}}},{"rhs_tortila_black",{}},"LOP_H_Shemag_BLU","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ASF_2008_VAR_0_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 1"; 
		faction = "BS_B_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_01", "Male02PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_TAK_Civ_Fatigue_08"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","LOP_H_Shemag_BLU"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","LOP_H_Shemag_BLU"}; 
		weapons[] = {"rhs_weap_svdp_wd_npz","launch_RPG7_F","rhs_weap_pb_6p9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_wd_npz","launch_RPG7_F","rhs_weap_pb_6p9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_tortila_black";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_wd_npz","rhs_acc_tgpv2","","optic_DMS",{"rhs_10Rnd_762x54mmR_7N1",10},{},""},{"launch_RPG7_F","","","rhs_acc_1pn93_2",{"rhs_rpg7_TBG7V_mag",1},{},""},{"rhs_weap_pb_6p9","rhs_acc_6p9_suppressor","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"LOP_U_TAK_Civ_Fatigue_08",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"rhs_suspender_AK8_chestrig",{{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_Kestrel4500",1},{"SmokeShell",2,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellBlue",1,1},{"SmokeShellGreen",1,1},{"SmokeShellOrange",1,1},{"rhs_mag_rgd5",2,1}}},{"rhs_tortila_black",{}},"LOP_H_Shemag_BLU","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ASF_2008_VAR_0_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 1"; 
		faction = "BS_I_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_01", "Male02PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_TAK_Civ_Fatigue_08"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","LOP_H_Shemag_BLU"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","LOP_H_Shemag_BLU"}; 
		weapons[] = {"rhs_weap_svdp_wd_npz","launch_RPG7_F","rhs_weap_pb_6p9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_wd_npz","launch_RPG7_F","rhs_weap_pb_6p9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_tortila_black";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_wd_npz","rhs_acc_tgpv2","","optic_DMS",{"rhs_10Rnd_762x54mmR_7N1",10},{},""},{"launch_RPG7_F","","","rhs_acc_1pn93_2",{"rhs_rpg7_TBG7V_mag",1},{},""},{"rhs_weap_pb_6p9","rhs_acc_6p9_suppressor","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"LOP_U_TAK_Civ_Fatigue_08",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"rhs_suspender_AK8_chestrig",{{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_Kestrel4500",1},{"SmokeShell",2,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellBlue",1,1},{"SmokeShellGreen",1,1},{"SmokeShellOrange",1,1},{"rhs_mag_rgd5",2,1}}},{"rhs_tortila_black",{}},"LOP_H_Shemag_BLU","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ASF_2008_VAR_1_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 2"; 
		faction = "BS_O_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_03", "Male01PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_CHR_SchoolTeacher_01"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","G_Lowprofile","LOP_H_Shemag_BLU"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","G_Lowprofile","LOP_H_Shemag_BLU"}; 
		weapons[] = {"rhs_weap_svdp_wd_npz","rhs_weap_pb_6p9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_wd_npz","rhs_weap_pb_6p9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhsgref_tortila_specter";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_wd_npz","rhs_acc_tgpv2","","rhs_acc_dh520x56",{"rhs_10Rnd_762x54mmR_7N1",10},{},""},{},{"rhs_weap_pb_6p9","rhs_acc_6p9_suppressor","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"LOP_U_CHR_SchoolTeacher_01",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_EarPlugs",1}}},{"rhs_suspender_AK8_chestrig",{{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_Kestrel4500",1},{"SmokeShell",2,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellBlue",1,1},{"SmokeShellGreen",1,1},{"SmokeShellOrange",1,1},{"rhs_mag_rgd5",2,1},{"10Rnd_762x54_Mag",1,10},{"rhs_10Rnd_762x54mmR_7N14",1,10},{"rhs_10Rnd_762x54mmR_7N1",1,10}}},{"rhsgref_tortila_specter",{{"rhs_rpg7_OG7V_mag",1,1},{"rhs_rpg7_PG7V_mag",1,1},{"rhs_rpg7_PG7VL_mag",1,1},{"rhs_rpg7_PG7VM_mag",1,1},{"rhs_rpg7_PG7VR_mag",1,1},{"rhs_rpg7_PG7VS_mag",1,1},{"rhs_rpg7_type69_airburst_mag",1,1},{"RPG7_F",1,1},{"ACE_10Rnd_762x54_Tracer_mag",1,10},{"10Rnd_762x54_Mag",1,10}}},"LOP_H_Shemag_BLU","G_Lowprofile",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ASF_2008_VAR_1_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 2"; 
		faction = "BS_B_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_03", "Male01PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_CHR_SchoolTeacher_01"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","G_Lowprofile","LOP_H_Shemag_BLU"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","G_Lowprofile","LOP_H_Shemag_BLU"}; 
		weapons[] = {"rhs_weap_svdp_wd_npz","rhs_weap_pb_6p9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_wd_npz","rhs_weap_pb_6p9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhsgref_tortila_specter";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_wd_npz","rhs_acc_tgpv2","","rhs_acc_dh520x56",{"rhs_10Rnd_762x54mmR_7N1",10},{},""},{},{"rhs_weap_pb_6p9","rhs_acc_6p9_suppressor","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"LOP_U_CHR_SchoolTeacher_01",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_EarPlugs",1}}},{"rhs_suspender_AK8_chestrig",{{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_Kestrel4500",1},{"SmokeShell",2,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellBlue",1,1},{"SmokeShellGreen",1,1},{"SmokeShellOrange",1,1},{"rhs_mag_rgd5",2,1},{"10Rnd_762x54_Mag",1,10},{"rhs_10Rnd_762x54mmR_7N14",1,10},{"rhs_10Rnd_762x54mmR_7N1",1,10}}},{"rhsgref_tortila_specter",{{"rhs_rpg7_OG7V_mag",1,1},{"rhs_rpg7_PG7V_mag",1,1},{"rhs_rpg7_PG7VL_mag",1,1},{"rhs_rpg7_PG7VM_mag",1,1},{"rhs_rpg7_PG7VR_mag",1,1},{"rhs_rpg7_PG7VS_mag",1,1},{"rhs_rpg7_type69_airburst_mag",1,1},{"RPG7_F",1,1},{"ACE_10Rnd_762x54_Tracer_mag",1,10},{"10Rnd_762x54_Mag",1,10}}},"LOP_H_Shemag_BLU","G_Lowprofile",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ASF_2008_VAR_1_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 2"; 
		faction = "BS_I_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_03", "Male01PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_CHR_SchoolTeacher_01"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","G_Lowprofile","LOP_H_Shemag_BLU"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","G_Lowprofile","LOP_H_Shemag_BLU"}; 
		weapons[] = {"rhs_weap_svdp_wd_npz","rhs_weap_pb_6p9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_wd_npz","rhs_weap_pb_6p9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhsgref_tortila_specter";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_wd_npz","rhs_acc_tgpv2","","rhs_acc_dh520x56",{"rhs_10Rnd_762x54mmR_7N1",10},{},""},{},{"rhs_weap_pb_6p9","rhs_acc_6p9_suppressor","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"LOP_U_CHR_SchoolTeacher_01",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_EarPlugs",1}}},{"rhs_suspender_AK8_chestrig",{{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_Kestrel4500",1},{"SmokeShell",2,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellBlue",1,1},{"SmokeShellGreen",1,1},{"SmokeShellOrange",1,1},{"rhs_mag_rgd5",2,1},{"10Rnd_762x54_Mag",1,10},{"rhs_10Rnd_762x54mmR_7N14",1,10},{"rhs_10Rnd_762x54mmR_7N1",1,10}}},{"rhsgref_tortila_specter",{{"rhs_rpg7_OG7V_mag",1,1},{"rhs_rpg7_PG7V_mag",1,1},{"rhs_rpg7_PG7VL_mag",1,1},{"rhs_rpg7_PG7VM_mag",1,1},{"rhs_rpg7_PG7VR_mag",1,1},{"rhs_rpg7_PG7VS_mag",1,1},{"rhs_rpg7_type69_airburst_mag",1,1},{"RPG7_F",1,1},{"ACE_10Rnd_762x54_Tracer_mag",1,10},{"10Rnd_762x54_Mag",1,10}}},"LOP_H_Shemag_BLU","G_Lowprofile",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ASF_2008_VAR_2_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 3"; 
		faction = "BS_O_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_01", "Male02PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_Fatigue_BDU_BLK_02"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_mas_cia_beard","LOP_H_Shemag_BLK"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_mas_cia_beard","LOP_H_Shemag_BLK"}; 
		weapons[] = {"rhs_weap_m4","rhs_weap_6p53","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_m4","rhs_weap_6p53","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_FieldPack_blk";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4","rhsusf_acc_SFMB556","rhsusf_acc_wmx_bk","rhs_acc_rakursPM",{"rhs_mag_30Rnd_556x45_M855_Stanag",30},{},""},{},{"rhs_weap_6p53","","","",{"rhs_18rnd_9x21mm_7N29",18},{},""},{"LOP_U_Fatigue_BDU_BLK_02",{{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3},{"ACE_quikclot",15},{"ACE_elasticBandage",10},{"ACE_microDAGR",1}}},{"V_TacVest_blk",{{"SmokeShell",2,1},{"SmokeShellBlue",2,1},{"SmokeShellGreen",2,1},{"SmokeShellOrange",2,1},{"SmokeShellPurple",2,1},{"SmokeShellRed",2,1},{"SmokeShellYellow",2,1}}},{"B_FieldPack_blk",{{"ACE_wirecutter",1},{"ACE_EntrenchingTool",1},{"ACE_30Rnd_556x45_Stanag_Tracer_Dim",1,30},{"30Rnd_556x45_Stanag_green",1,30},{"ACE_30Rnd_556x45_Stanag_Mk318_mag",1,30},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",1,30},{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",1,30},{"150Rnd_556x45_Drum_Sand_Mag_Tracer_F",1,150},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",1,30},{"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red",1,30},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",1,30},{"rhs_mag_30Rnd_556x45_M855_Stanag",1,30},{"rhs_mag_30Rnd_556x45_M200_Stanag",1,30},{"rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red",1,30},{"rhs_mag_30Rnd_556x45_M193_Stanag",1,30},{"rhs_mag_30Rnd_556x45_Mk318_Stanag_Ranger",1,30},{"rhs_mag_30Rnd_556x45_Mk262_Stanag_Ranger",1,30},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger_Tracer_Red",1,30},{"rhs_mag_30Rnd_556x45_M855_Stanag_Ranger_Tracer_Red",1,30}}},"LOP_H_Shemag_BLK","G_mas_cia_beard",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ASF_2008_VAR_2_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 3"; 
		faction = "BS_B_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_01", "Male02PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_Fatigue_BDU_BLK_02"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_mas_cia_beard","LOP_H_Shemag_BLK"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_mas_cia_beard","LOP_H_Shemag_BLK"}; 
		weapons[] = {"rhs_weap_m4","rhs_weap_6p53","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_m4","rhs_weap_6p53","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_FieldPack_blk";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4","rhsusf_acc_SFMB556","rhsusf_acc_wmx_bk","rhs_acc_rakursPM",{"rhs_mag_30Rnd_556x45_M855_Stanag",30},{},""},{},{"rhs_weap_6p53","","","",{"rhs_18rnd_9x21mm_7N29",18},{},""},{"LOP_U_Fatigue_BDU_BLK_02",{{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3},{"ACE_quikclot",15},{"ACE_elasticBandage",10},{"ACE_microDAGR",1}}},{"V_TacVest_blk",{{"SmokeShell",2,1},{"SmokeShellBlue",2,1},{"SmokeShellGreen",2,1},{"SmokeShellOrange",2,1},{"SmokeShellPurple",2,1},{"SmokeShellRed",2,1},{"SmokeShellYellow",2,1}}},{"B_FieldPack_blk",{{"ACE_wirecutter",1},{"ACE_EntrenchingTool",1},{"ACE_30Rnd_556x45_Stanag_Tracer_Dim",1,30},{"30Rnd_556x45_Stanag_green",1,30},{"ACE_30Rnd_556x45_Stanag_Mk318_mag",1,30},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",1,30},{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",1,30},{"150Rnd_556x45_Drum_Sand_Mag_Tracer_F",1,150},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",1,30},{"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red",1,30},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",1,30},{"rhs_mag_30Rnd_556x45_M855_Stanag",1,30},{"rhs_mag_30Rnd_556x45_M200_Stanag",1,30},{"rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red",1,30},{"rhs_mag_30Rnd_556x45_M193_Stanag",1,30},{"rhs_mag_30Rnd_556x45_Mk318_Stanag_Ranger",1,30},{"rhs_mag_30Rnd_556x45_Mk262_Stanag_Ranger",1,30},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger_Tracer_Red",1,30},{"rhs_mag_30Rnd_556x45_M855_Stanag_Ranger_Tracer_Red",1,30}}},"LOP_H_Shemag_BLK","G_mas_cia_beard",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ASF_2008_VAR_2_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 3"; 
		faction = "BS_I_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_01", "Male02PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_Fatigue_BDU_BLK_02"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_mas_cia_beard","LOP_H_Shemag_BLK"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_mas_cia_beard","LOP_H_Shemag_BLK"}; 
		weapons[] = {"rhs_weap_m4","rhs_weap_6p53","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_m4","rhs_weap_6p53","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_FieldPack_blk";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4","rhsusf_acc_SFMB556","rhsusf_acc_wmx_bk","rhs_acc_rakursPM",{"rhs_mag_30Rnd_556x45_M855_Stanag",30},{},""},{},{"rhs_weap_6p53","","","",{"rhs_18rnd_9x21mm_7N29",18},{},""},{"LOP_U_Fatigue_BDU_BLK_02",{{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3},{"ACE_quikclot",15},{"ACE_elasticBandage",10},{"ACE_microDAGR",1}}},{"V_TacVest_blk",{{"SmokeShell",2,1},{"SmokeShellBlue",2,1},{"SmokeShellGreen",2,1},{"SmokeShellOrange",2,1},{"SmokeShellPurple",2,1},{"SmokeShellRed",2,1},{"SmokeShellYellow",2,1}}},{"B_FieldPack_blk",{{"ACE_wirecutter",1},{"ACE_EntrenchingTool",1},{"ACE_30Rnd_556x45_Stanag_Tracer_Dim",1,30},{"30Rnd_556x45_Stanag_green",1,30},{"ACE_30Rnd_556x45_Stanag_Mk318_mag",1,30},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",1,30},{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",1,30},{"150Rnd_556x45_Drum_Sand_Mag_Tracer_F",1,150},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",1,30},{"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red",1,30},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",1,30},{"rhs_mag_30Rnd_556x45_M855_Stanag",1,30},{"rhs_mag_30Rnd_556x45_M200_Stanag",1,30},{"rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red",1,30},{"rhs_mag_30Rnd_556x45_M193_Stanag",1,30},{"rhs_mag_30Rnd_556x45_Mk318_Stanag_Ranger",1,30},{"rhs_mag_30Rnd_556x45_Mk262_Stanag_Ranger",1,30},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger_Tracer_Red",1,30},{"rhs_mag_30Rnd_556x45_M855_Stanag_Ranger_Tracer_Red",1,30}}},"LOP_H_Shemag_BLK","G_mas_cia_beard",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ASF_2008_VAR_3_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 4"; 
		faction = "BS_O_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_l", "Male03PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_TAK_Civ_Fatigue_08"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","LOP_H_Shemag_BLU"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","LOP_H_Shemag_BLU"}; 
		weapons[] = {"rhs_weap_svdp_wd_npz","launch_RPG7_F","rhs_weap_pb_6p9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_wd_npz","launch_RPG7_F","rhs_weap_pb_6p9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_tortila_black";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_wd_npz","rhs_acc_tgpv2","","rhsusf_acc_anpvs27",{"rhs_10Rnd_762x54mmR_7N1",10},{},""},{"launch_RPG7_F","","","rhs_acc_1pn93_2",{"rhs_rpg7_TBG7V_mag",1},{},""},{"rhs_weap_pb_6p9","rhs_acc_6p9_suppressor","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"LOP_U_TAK_Civ_Fatigue_08",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"rhs_suspender_AK8_chestrig",{{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_Kestrel4500",1},{"SmokeShell",2,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellBlue",1,1},{"SmokeShellGreen",1,1},{"SmokeShellOrange",1,1},{"rhs_mag_rgd5",2,1}}},{"rhs_tortila_black",{}},"LOP_H_Shemag_BLU","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ASF_2008_VAR_3_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 4"; 
		faction = "BS_B_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_l", "Male03PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_TAK_Civ_Fatigue_08"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","LOP_H_Shemag_BLU"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","LOP_H_Shemag_BLU"}; 
		weapons[] = {"rhs_weap_svdp_wd_npz","launch_RPG7_F","rhs_weap_pb_6p9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_wd_npz","launch_RPG7_F","rhs_weap_pb_6p9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_tortila_black";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_wd_npz","rhs_acc_tgpv2","","rhsusf_acc_anpvs27",{"rhs_10Rnd_762x54mmR_7N1",10},{},""},{"launch_RPG7_F","","","rhs_acc_1pn93_2",{"rhs_rpg7_TBG7V_mag",1},{},""},{"rhs_weap_pb_6p9","rhs_acc_6p9_suppressor","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"LOP_U_TAK_Civ_Fatigue_08",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"rhs_suspender_AK8_chestrig",{{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_Kestrel4500",1},{"SmokeShell",2,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellBlue",1,1},{"SmokeShellGreen",1,1},{"SmokeShellOrange",1,1},{"rhs_mag_rgd5",2,1}}},{"rhs_tortila_black",{}},"LOP_H_Shemag_BLU","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ASF_2008_VAR_3_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 4"; 
		faction = "BS_I_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_l", "Male03PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_TAK_Civ_Fatigue_08"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","LOP_H_Shemag_BLU"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","LOP_H_Shemag_BLU"}; 
		weapons[] = {"rhs_weap_svdp_wd_npz","launch_RPG7_F","rhs_weap_pb_6p9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_wd_npz","launch_RPG7_F","rhs_weap_pb_6p9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_tortila_black";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_wd_npz","rhs_acc_tgpv2","","rhsusf_acc_anpvs27",{"rhs_10Rnd_762x54mmR_7N1",10},{},""},{"launch_RPG7_F","","","rhs_acc_1pn93_2",{"rhs_rpg7_TBG7V_mag",1},{},""},{"rhs_weap_pb_6p9","rhs_acc_6p9_suppressor","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"LOP_U_TAK_Civ_Fatigue_08",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"rhs_suspender_AK8_chestrig",{{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_Kestrel4500",1},{"SmokeShell",2,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellBlue",1,1},{"SmokeShellGreen",1,1},{"SmokeShellOrange",1,1},{"rhs_mag_rgd5",2,1}}},{"rhs_tortila_black",{}},"LOP_H_Shemag_BLU","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ASF_2008_VAR_4_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 5"; 
		faction = "BS_O_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_01", "Male03PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_US_Fatigue_10"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_googles_black","LOP_H_Turban"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_googles_black","LOP_H_Turban"}; 
		weapons[] = {"arifle_RPK12_lush_F","rhs_weap_makarov_pm","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_RPK12_lush_F","rhs_weap_makarov_pm","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_cbr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_RPK12_lush_F","suppressor_h_lush_lxWS","rhs_acc_2dpZenit_ris","optic_tws_mg",{"75Rnd_762x39_AK12_Lush_Mag_Tracer_F",75},{},""},{},{"rhs_weap_makarov_pm","","","",{},{},""},{"LOP_U_US_Fatigue_10",{{"ACE_EarPlugs",1}}},{"rhs_suspender_AK8_chestrig",{}},{"B_Kitbag_cbr",{}},"LOP_H_Turban","rhs_googles_black",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ASF_2008_VAR_4_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 5"; 
		faction = "BS_B_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_01", "Male03PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_US_Fatigue_10"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_googles_black","LOP_H_Turban"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_googles_black","LOP_H_Turban"}; 
		weapons[] = {"arifle_RPK12_lush_F","rhs_weap_makarov_pm","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_RPK12_lush_F","rhs_weap_makarov_pm","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_cbr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_RPK12_lush_F","suppressor_h_lush_lxWS","rhs_acc_2dpZenit_ris","optic_tws_mg",{"75Rnd_762x39_AK12_Lush_Mag_Tracer_F",75},{},""},{},{"rhs_weap_makarov_pm","","","",{},{},""},{"LOP_U_US_Fatigue_10",{{"ACE_EarPlugs",1}}},{"rhs_suspender_AK8_chestrig",{}},{"B_Kitbag_cbr",{}},"LOP_H_Turban","rhs_googles_black",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ASF_2008_VAR_4_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 5"; 
		faction = "BS_I_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_01", "Male03PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_US_Fatigue_10"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_googles_black","LOP_H_Turban"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_googles_black","LOP_H_Turban"}; 
		weapons[] = {"arifle_RPK12_lush_F","rhs_weap_makarov_pm","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_RPK12_lush_F","rhs_weap_makarov_pm","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_cbr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_RPK12_lush_F","suppressor_h_lush_lxWS","rhs_acc_2dpZenit_ris","optic_tws_mg",{"75Rnd_762x39_AK12_Lush_Mag_Tracer_F",75},{},""},{},{"rhs_weap_makarov_pm","","","",{},{},""},{"LOP_U_US_Fatigue_10",{{"ACE_EarPlugs",1}}},{"rhs_suspender_AK8_chestrig",{}},{"B_Kitbag_cbr",{}},"LOP_H_Turban","rhs_googles_black",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ASF_2008_Rifleman_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Rifleman (Desert)"; 
		faction = "BS_O_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_sa", "Male03PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_Fatigue_BDU_ATACS_AU_01"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_Combat","LOP_H_Shemag_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_Combat","LOP_H_Shemag_TAN"}; 
		weapons[] = {"rhs_weap_akm","rhs_weap_6p53","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_akm","rhs_weap_6p53","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "LOP_B_FP_MG42_tub";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_akm","rhs_acc_dtk1l","rhs_acc_2dpZenit","",{"rhs_30Rnd_762x39mm_bakelite_U",30},{},""},{},{"rhs_weap_6p53","","","",{"rhs_18rnd_9x21mm_7N29",18},{},""},{"LOP_U_Fatigue_BDU_ATACS_AU_01",{}},{"V_TacVest_brn",{}},{"LOP_B_FP_MG42_tub",{}},"LOP_H_Shemag_TAN","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ASF_2008_Rifleman_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Rifleman (Desert)"; 
		faction = "BS_B_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_sa", "Male03PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_Fatigue_BDU_ATACS_AU_01"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_Combat","LOP_H_Shemag_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_Combat","LOP_H_Shemag_TAN"}; 
		weapons[] = {"rhs_weap_akm","rhs_weap_6p53","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_akm","rhs_weap_6p53","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "LOP_B_FP_MG42_tub";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_akm","rhs_acc_dtk1l","rhs_acc_2dpZenit","",{"rhs_30Rnd_762x39mm_bakelite_U",30},{},""},{},{"rhs_weap_6p53","","","",{"rhs_18rnd_9x21mm_7N29",18},{},""},{"LOP_U_Fatigue_BDU_ATACS_AU_01",{}},{"V_TacVest_brn",{}},{"LOP_B_FP_MG42_tub",{}},"LOP_H_Shemag_TAN","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ASF_2008_Rifleman_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Rifleman (Desert)"; 
		faction = "BS_I_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_sa", "Male03PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_Fatigue_BDU_ATACS_AU_01"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_Combat","LOP_H_Shemag_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_Combat","LOP_H_Shemag_TAN"}; 
		weapons[] = {"rhs_weap_akm","rhs_weap_6p53","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_akm","rhs_weap_6p53","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "LOP_B_FP_MG42_tub";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_akm","rhs_acc_dtk1l","rhs_acc_2dpZenit","",{"rhs_30Rnd_762x39mm_bakelite_U",30},{},""},{},{"rhs_weap_6p53","","","",{"rhs_18rnd_9x21mm_7N29",18},{},""},{"LOP_U_Fatigue_BDU_ATACS_AU_01",{}},{"V_TacVest_brn",{}},{"LOP_B_FP_MG42_tub",{}},"LOP_H_Shemag_TAN","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ASF_2008_GL_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Grenadier (Desert)"; 
		faction = "BS_O_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_03", "Male01PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_CHR_Citizen_02"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemRadio","ItemGPS","LOP_H_Turban_mask"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemRadio","ItemGPS","LOP_H_Turban_mask"}; 
		weapons[] = {"rhs_weap_ak74_2","rhs_weap_M320","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak74_2","rhs_weap_M320","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_tortila_grey";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74_2","rhs_acc_uuk","rhs_acc_2dpZenit","",{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",30},{},""},{},{"rhs_weap_M320","","","",{"rhs_mag_M441_HE",1},{},""},{"LOP_U_CHR_Citizen_02",{}},{"rhs_lifchik_vog",{}},{"rhs_tortila_grey",{}},"LOP_H_Turban_mask","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ASF_2008_GL_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Grenadier (Desert)"; 
		faction = "BS_B_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_03", "Male01PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_CHR_Citizen_02"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemRadio","ItemGPS","LOP_H_Turban_mask"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemRadio","ItemGPS","LOP_H_Turban_mask"}; 
		weapons[] = {"rhs_weap_ak74_2","rhs_weap_M320","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak74_2","rhs_weap_M320","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_tortila_grey";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74_2","rhs_acc_uuk","rhs_acc_2dpZenit","",{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",30},{},""},{},{"rhs_weap_M320","","","",{"rhs_mag_M441_HE",1},{},""},{"LOP_U_CHR_Citizen_02",{}},{"rhs_lifchik_vog",{}},{"rhs_tortila_grey",{}},"LOP_H_Turban_mask","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ASF_2008_GL_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Grenadier (Desert)"; 
		faction = "BS_I_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_03", "Male01PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_CHR_Citizen_02"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemRadio","ItemGPS","LOP_H_Turban_mask"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemRadio","ItemGPS","LOP_H_Turban_mask"}; 
		weapons[] = {"rhs_weap_ak74_2","rhs_weap_M320","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak74_2","rhs_weap_M320","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_tortila_grey";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74_2","rhs_acc_uuk","rhs_acc_2dpZenit","",{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",30},{},""},{},{"rhs_weap_M320","","","",{"rhs_mag_M441_HE",1},{},""},{"LOP_U_CHR_Citizen_02",{}},{"rhs_lifchik_vog",{}},{"rhs_tortila_grey",{}},"LOP_H_Turban_mask","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ASF_2008_AR_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Machine Gunner (Desert)"; 
		faction = "BS_O_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_01", "Male01PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_US_Fatigue_10"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_googles_black","LOP_H_Turban"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_googles_black","LOP_H_Turban"}; 
		weapons[] = {"rhs_weap_rpk74m_npz","rhs_weap_makarov_pm","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_rpk74m_npz","rhs_weap_makarov_pm","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_cbr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_rpk74m_npz","rhs_acc_dtk2","rhs_acc_2dpZenit","rhs_acc_okp7_picatinny",{"SCM_96Rnd_545x39_RPK_Mag_Tracer",96},{},""},{},{"rhs_weap_makarov_pm","","","",{},{},""},{"LOP_U_US_Fatigue_10",{}},{"rhs_suspender_AK8_chestrig",{}},{"B_Kitbag_cbr",{}},"LOP_H_Turban","rhs_googles_black",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ASF_2008_AR_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Machine Gunner (Desert)"; 
		faction = "BS_B_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_01", "Male01PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_US_Fatigue_10"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_googles_black","LOP_H_Turban"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_googles_black","LOP_H_Turban"}; 
		weapons[] = {"rhs_weap_rpk74m_npz","rhs_weap_makarov_pm","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_rpk74m_npz","rhs_weap_makarov_pm","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_cbr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_rpk74m_npz","rhs_acc_dtk2","rhs_acc_2dpZenit","rhs_acc_okp7_picatinny",{"SCM_96Rnd_545x39_RPK_Mag_Tracer",96},{},""},{},{"rhs_weap_makarov_pm","","","",{},{},""},{"LOP_U_US_Fatigue_10",{}},{"rhs_suspender_AK8_chestrig",{}},{"B_Kitbag_cbr",{}},"LOP_H_Turban","rhs_googles_black",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ASF_2008_AR_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Machine Gunner (Desert)"; 
		faction = "BS_I_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_01", "Male01PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_US_Fatigue_10"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_googles_black","LOP_H_Turban"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_googles_black","LOP_H_Turban"}; 
		weapons[] = {"rhs_weap_rpk74m_npz","rhs_weap_makarov_pm","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_rpk74m_npz","rhs_weap_makarov_pm","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_cbr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_rpk74m_npz","rhs_acc_dtk2","rhs_acc_2dpZenit","rhs_acc_okp7_picatinny",{"SCM_96Rnd_545x39_RPK_Mag_Tracer",96},{},""},{},{"rhs_weap_makarov_pm","","","",{},{},""},{"LOP_U_US_Fatigue_10",{}},{"rhs_suspender_AK8_chestrig",{}},{"B_Kitbag_cbr",{}},"LOP_H_Turban","rhs_googles_black",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ASF_2008_RTO_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Anti-Tank (Desert)"; 
		faction = "BS_O_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_sa", "Male01PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_CHR_Citizen_02"; 
		linkedItems[] = {"ItemMap","ItemGPS"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS"}; 
		weapons[] = {"rhs_weap_ak74_3","rhs_weap_rpg7","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak74_3","rhs_weap_rpg7","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_rpg_empty";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74_3","rhs_acc_dtk3","rhs_acc_2dpZenit","",{"rhs_30Rnd_545x39_7N10_2mag_AK",30},{},""},{"rhs_weap_rpg7","","","rhs_acc_pgo7v3",{"rhs_rpg7_PG7VL_mag",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_CHR_Citizen_02",{{"ACE_EarPlugs",1}}},{"rhs_belt_AK4",{}},{"rhs_rpg_empty",{{"rhs_rpg7_OG7V_mag",2,1}}},"","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ASF_2008_RTO_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Anti-Tank (Desert)"; 
		faction = "BS_B_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_sa", "Male01PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_CHR_Citizen_02"; 
		linkedItems[] = {"ItemMap","ItemGPS"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS"}; 
		weapons[] = {"rhs_weap_ak74_3","rhs_weap_rpg7","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak74_3","rhs_weap_rpg7","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_rpg_empty";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74_3","rhs_acc_dtk3","rhs_acc_2dpZenit","",{"rhs_30Rnd_545x39_7N10_2mag_AK",30},{},""},{"rhs_weap_rpg7","","","rhs_acc_pgo7v3",{"rhs_rpg7_PG7VL_mag",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_CHR_Citizen_02",{{"ACE_EarPlugs",1}}},{"rhs_belt_AK4",{}},{"rhs_rpg_empty",{{"rhs_rpg7_OG7V_mag",2,1}}},"","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ASF_2008_RTO_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Anti-Tank (Desert)"; 
		faction = "BS_I_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_sa", "Male01PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_CHR_Citizen_02"; 
		linkedItems[] = {"ItemMap","ItemGPS"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS"}; 
		weapons[] = {"rhs_weap_ak74_3","rhs_weap_rpg7","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak74_3","rhs_weap_rpg7","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_rpg_empty";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74_3","rhs_acc_dtk3","rhs_acc_2dpZenit","",{"rhs_30Rnd_545x39_7N10_2mag_AK",30},{},""},{"rhs_weap_rpg7","","","rhs_acc_pgo7v3",{"rhs_rpg7_PG7VL_mag",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_CHR_Citizen_02",{{"ACE_EarPlugs",1}}},{"rhs_belt_AK4",{}},{"rhs_rpg_empty",{{"rhs_rpg7_OG7V_mag",2,1}}},"","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ASF_2008_SNP_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Sniper (Desert)"; 
		faction = "BS_O_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_03", "Male03PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_AM_Fatigue_04_5"; 
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","ItemGPS","LOP_H_Shemag_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","ItemGPS","LOP_H_Shemag_TAN"}; 
		weapons[] = {"rhs_weap_svdp_npz","rhs_weap_pb_6p9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_npz","rhs_weap_pb_6p9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_tortila_grey";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_npz","","","rhs_acc_dh520x56",{"ACE_10Rnd_762x54_Tracer_mag",10},{},""},{},{"rhs_weap_pb_6p9","rhs_acc_6p9_suppressor","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"LOP_U_AM_Fatigue_04_5",{{"ACE_EarPlugs",1}}},{"rhs_suspender_AK",{}},{"rhs_tortila_grey",{}},"LOP_H_Shemag_TAN","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ASF_2008_SNP_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Sniper (Desert)"; 
		faction = "BS_B_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_03", "Male03PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_AM_Fatigue_04_5"; 
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","ItemGPS","LOP_H_Shemag_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","ItemGPS","LOP_H_Shemag_TAN"}; 
		weapons[] = {"rhs_weap_svdp_npz","rhs_weap_pb_6p9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_npz","rhs_weap_pb_6p9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_tortila_grey";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_npz","","","rhs_acc_dh520x56",{"ACE_10Rnd_762x54_Tracer_mag",10},{},""},{},{"rhs_weap_pb_6p9","rhs_acc_6p9_suppressor","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"LOP_U_AM_Fatigue_04_5",{{"ACE_EarPlugs",1}}},{"rhs_suspender_AK",{}},{"rhs_tortila_grey",{}},"LOP_H_Shemag_TAN","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ASF_2008_SNP_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Sniper (Desert)"; 
		faction = "BS_I_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_03", "Male03PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_AM_Fatigue_04_5"; 
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","ItemGPS","LOP_H_Shemag_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","ItemGPS","LOP_H_Shemag_TAN"}; 
		weapons[] = {"rhs_weap_svdp_npz","rhs_weap_pb_6p9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_npz","rhs_weap_pb_6p9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_tortila_grey";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_npz","","","rhs_acc_dh520x56",{"ACE_10Rnd_762x54_Tracer_mag",10},{},""},{},{"rhs_weap_pb_6p9","rhs_acc_6p9_suppressor","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"LOP_U_AM_Fatigue_04_5",{{"ACE_EarPlugs",1}}},{"rhs_suspender_AK",{}},{"rhs_tortila_grey",{}},"LOP_H_Shemag_TAN","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ASF_2008_Medic_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Doctor (Desert)"; 
		faction = "BS_O_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_03", "Male03PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_NAPA_Fatigue_04"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"}; 
		weapons[] = {"rhs_weap_aks74un","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_aks74un","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_cbr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_aks74un","rhs_acc_tgpa","","rhs_acc_pkas",{"rhs_30Rnd_545x39_7N10_camo_AK",30},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_NAPA_Fatigue_04",{}},{"rhs_suspender_SKS",{}},{"B_Kitbag_cbr",{}},"","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ASF_2008_Medic_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Doctor (Desert)"; 
		faction = "BS_B_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_03", "Male03PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_NAPA_Fatigue_04"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"}; 
		weapons[] = {"rhs_weap_aks74un","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_aks74un","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_cbr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_aks74un","rhs_acc_tgpa","","rhs_acc_pkas",{"rhs_30Rnd_545x39_7N10_camo_AK",30},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_NAPA_Fatigue_04",{}},{"rhs_suspender_SKS",{}},{"B_Kitbag_cbr",{}},"","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ASF_2008_Medic_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Doctor (Desert)"; 
		faction = "BS_I_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_03", "Male03PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_NAPA_Fatigue_04"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"}; 
		weapons[] = {"rhs_weap_aks74un","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_aks74un","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_cbr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_aks74un","rhs_acc_tgpa","","rhs_acc_pkas",{"rhs_30Rnd_545x39_7N10_camo_AK",30},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_NAPA_Fatigue_04",{}},{"rhs_suspender_SKS",{}},{"B_Kitbag_cbr",{}},"","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ASF_2008_DIVER_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Special (Desert)"; 
		faction = "BS_O_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_l", "Male03PER" ,"G_NATO_default"};
		uniformClass = "U_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_1PN138","G_B_Diving","H_Booniehat_dgtl"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_1PN138","G_B_Diving","H_Booniehat_dgtl"}; 
		weapons[] = {"rhs_weap_ak103_1_npz","rhs_weap_pya","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak103_1_npz","rhs_weap_pya","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_blk";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak103_1_npz","","rhs_acc_perst1ik","rhs_acc_1p87",{"rhs_30Rnd_762x39mm_bakelite",30},{},""},{},{"rhs_weap_pya","","","",{"rhs_mag_9x19_17",17},{},""},{"U_B_Wetsuit",{}},{"V_RebreatherB",{}},{"B_AssaultPack_blk",{}},"H_Booniehat_dgtl","G_B_Diving",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","rhs_1PN138"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ASF_2008_DIVER_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Special (Desert)"; 
		faction = "BS_B_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_l", "Male03PER" ,"G_NATO_default"};
		uniformClass = "U_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_1PN138","G_B_Diving","H_Booniehat_dgtl"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_1PN138","G_B_Diving","H_Booniehat_dgtl"}; 
		weapons[] = {"rhs_weap_ak103_1_npz","rhs_weap_pya","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak103_1_npz","rhs_weap_pya","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_blk";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak103_1_npz","","rhs_acc_perst1ik","rhs_acc_1p87",{"rhs_30Rnd_762x39mm_bakelite",30},{},""},{},{"rhs_weap_pya","","","",{"rhs_mag_9x19_17",17},{},""},{"U_B_Wetsuit",{}},{"V_RebreatherB",{}},{"B_AssaultPack_blk",{}},"H_Booniehat_dgtl","G_B_Diving",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","rhs_1PN138"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ASF_2008_DIVER_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Special (Desert)"; 
		faction = "BS_I_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_l", "Male03PER" ,"G_NATO_default"};
		uniformClass = "U_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_1PN138","G_B_Diving","H_Booniehat_dgtl"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_1PN138","G_B_Diving","H_Booniehat_dgtl"}; 
		weapons[] = {"rhs_weap_ak103_1_npz","rhs_weap_pya","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak103_1_npz","rhs_weap_pya","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_blk";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak103_1_npz","","rhs_acc_perst1ik","rhs_acc_1p87",{"rhs_30Rnd_762x39mm_bakelite",30},{},""},{},{"rhs_weap_pya","","","",{"rhs_mag_9x19_17",17},{},""},{"U_B_Wetsuit",{}},{"V_RebreatherB",{}},{"B_AssaultPack_blk",{}},"H_Booniehat_dgtl","G_B_Diving",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","rhs_1PN138"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ASF_2008_Officer_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Officer (Desert)"; 
		faction = "BS_O_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_01", "Male02PER" ,"G_NATO_default"};
		uniformClass = "U_lxWS_C_Djella_03"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_Aviator","lxWS_H_cloth_5_C"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_Aviator","lxWS_H_cloth_5_C"}; 
		weapons[] = {"rhs_weap_ak74n_npz","hgun_Pistol_heavy_01_green_F","Binocular"}; 
		respawnWeapons[] = {"rhs_weap_ak74n_npz","hgun_Pistol_heavy_01_green_F","Binocular"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74n_npz","rhs_acc_dtk1983","","",{"rhs_30Rnd_545x39_7N10_2mag_desert_AK",30},{},""},{},{"hgun_Pistol_heavy_01_green_F","","","",{"11Rnd_45ACP_Mag",15},{},""},{"U_lxWS_C_Djella_03",{}},{},{},"lxWS_H_cloth_5_C","G_Aviator",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ASF_2008_Officer_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Officer (Desert)"; 
		faction = "BS_B_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_01", "Male02PER" ,"G_NATO_default"};
		uniformClass = "U_lxWS_C_Djella_03"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_Aviator","lxWS_H_cloth_5_C"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_Aviator","lxWS_H_cloth_5_C"}; 
		weapons[] = {"rhs_weap_ak74n_npz","hgun_Pistol_heavy_01_green_F","Binocular"}; 
		respawnWeapons[] = {"rhs_weap_ak74n_npz","hgun_Pistol_heavy_01_green_F","Binocular"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74n_npz","rhs_acc_dtk1983","","",{"rhs_30Rnd_545x39_7N10_2mag_desert_AK",30},{},""},{},{"hgun_Pistol_heavy_01_green_F","","","",{"11Rnd_45ACP_Mag",15},{},""},{"U_lxWS_C_Djella_03",{}},{},{},"lxWS_H_cloth_5_C","G_Aviator",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ASF_2008_Officer_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Officer (Desert)"; 
		faction = "BS_I_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_01", "Male02PER" ,"G_NATO_default"};
		uniformClass = "U_lxWS_C_Djella_03"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_Aviator","lxWS_H_cloth_5_C"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_Aviator","lxWS_H_cloth_5_C"}; 
		weapons[] = {"rhs_weap_ak74n_npz","hgun_Pistol_heavy_01_green_F","Binocular"}; 
		respawnWeapons[] = {"rhs_weap_ak74n_npz","hgun_Pistol_heavy_01_green_F","Binocular"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74n_npz","rhs_acc_dtk1983","","",{"rhs_30Rnd_545x39_7N10_2mag_desert_AK",30},{},""},{},{"hgun_Pistol_heavy_01_green_F","","","",{"11Rnd_45ACP_Mag",15},{},""},{"U_lxWS_C_Djella_03",{}},{},{},"lxWS_H_cloth_5_C","G_Aviator",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ASF_2008_VAR_5_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 6"; 
		faction = "BS_O_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_03", "Male03PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_TAK_Civ_Fatigue_08"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","LOP_H_Shemag_BLU"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","LOP_H_Shemag_BLU"}; 
		weapons[] = {"rhs_weap_svdp_wd_npz","launch_RPG7_F","rhs_weap_pb_6p9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_wd_npz","launch_RPG7_F","rhs_weap_pb_6p9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_tortila_black";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_wd_npz","rhs_acc_tgpv2","","optic_DMS",{"rhs_10Rnd_762x54mmR_7N1",10},{},""},{"launch_RPG7_F","","","rhs_acc_1pn93_2",{"rhs_rpg7_TBG7V_mag",1},{},""},{"rhs_weap_pb_6p9","rhs_acc_6p9_suppressor","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"LOP_U_TAK_Civ_Fatigue_08",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"rhs_suspender_AK8_chestrig",{{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_Kestrel4500",1},{"SmokeShell",2,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellBlue",1,1},{"SmokeShellGreen",1,1},{"SmokeShellOrange",1,1},{"rhs_mag_rgd5",2,1}}},{"rhs_tortila_black",{}},"LOP_H_Shemag_BLU","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ASF_2008_VAR_5_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 6"; 
		faction = "BS_B_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_03", "Male03PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_TAK_Civ_Fatigue_08"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","LOP_H_Shemag_BLU"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","LOP_H_Shemag_BLU"}; 
		weapons[] = {"rhs_weap_svdp_wd_npz","launch_RPG7_F","rhs_weap_pb_6p9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_wd_npz","launch_RPG7_F","rhs_weap_pb_6p9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_tortila_black";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_wd_npz","rhs_acc_tgpv2","","optic_DMS",{"rhs_10Rnd_762x54mmR_7N1",10},{},""},{"launch_RPG7_F","","","rhs_acc_1pn93_2",{"rhs_rpg7_TBG7V_mag",1},{},""},{"rhs_weap_pb_6p9","rhs_acc_6p9_suppressor","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"LOP_U_TAK_Civ_Fatigue_08",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"rhs_suspender_AK8_chestrig",{{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_Kestrel4500",1},{"SmokeShell",2,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellBlue",1,1},{"SmokeShellGreen",1,1},{"SmokeShellOrange",1,1},{"rhs_mag_rgd5",2,1}}},{"rhs_tortila_black",{}},"LOP_H_Shemag_BLU","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ASF_2008_VAR_5_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 6"; 
		faction = "BS_I_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_03", "Male03PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_TAK_Civ_Fatigue_08"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","LOP_H_Shemag_BLU"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","LOP_H_Shemag_BLU"}; 
		weapons[] = {"rhs_weap_svdp_wd_npz","launch_RPG7_F","rhs_weap_pb_6p9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_wd_npz","launch_RPG7_F","rhs_weap_pb_6p9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_tortila_black";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_wd_npz","rhs_acc_tgpv2","","optic_DMS",{"rhs_10Rnd_762x54mmR_7N1",10},{},""},{"launch_RPG7_F","","","rhs_acc_1pn93_2",{"rhs_rpg7_TBG7V_mag",1},{},""},{"rhs_weap_pb_6p9","rhs_acc_6p9_suppressor","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"LOP_U_TAK_Civ_Fatigue_08",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"rhs_suspender_AK8_chestrig",{{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_Kestrel4500",1},{"SmokeShell",2,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellBlue",1,1},{"SmokeShellGreen",1,1},{"SmokeShellOrange",1,1},{"rhs_mag_rgd5",2,1}}},{"rhs_tortila_black",{}},"LOP_H_Shemag_BLU","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ASF_2008_VAR_6_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 7"; 
		faction = "BS_O_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_l", "Male03PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_CHR_SchoolTeacher_01"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","G_Lowprofile","LOP_H_Shemag_BLU"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","G_Lowprofile","LOP_H_Shemag_BLU"}; 
		weapons[] = {"rhs_weap_svdp_wd_npz","rhs_weap_pb_6p9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_wd_npz","rhs_weap_pb_6p9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhsgref_tortila_specter";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_wd_npz","rhs_acc_tgpv2","","rhs_acc_dh520x56",{"rhs_10Rnd_762x54mmR_7N1",10},{},""},{},{"rhs_weap_pb_6p9","rhs_acc_6p9_suppressor","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"LOP_U_CHR_SchoolTeacher_01",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_EarPlugs",1}}},{"rhs_suspender_AK8_chestrig",{{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_Kestrel4500",1},{"SmokeShell",2,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellBlue",1,1},{"SmokeShellGreen",1,1},{"SmokeShellOrange",1,1},{"rhs_mag_rgd5",2,1},{"10Rnd_762x54_Mag",1,10},{"rhs_10Rnd_762x54mmR_7N14",1,10},{"rhs_10Rnd_762x54mmR_7N1",1,10}}},{"rhsgref_tortila_specter",{{"rhs_rpg7_OG7V_mag",1,1},{"rhs_rpg7_PG7V_mag",1,1},{"rhs_rpg7_PG7VL_mag",1,1},{"rhs_rpg7_PG7VM_mag",1,1},{"rhs_rpg7_PG7VR_mag",1,1},{"rhs_rpg7_PG7VS_mag",1,1},{"rhs_rpg7_type69_airburst_mag",1,1},{"RPG7_F",1,1},{"ACE_10Rnd_762x54_Tracer_mag",1,10},{"10Rnd_762x54_Mag",1,10}}},"LOP_H_Shemag_BLU","G_Lowprofile",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ASF_2008_VAR_6_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 7"; 
		faction = "BS_B_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_l", "Male03PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_CHR_SchoolTeacher_01"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","G_Lowprofile","LOP_H_Shemag_BLU"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","G_Lowprofile","LOP_H_Shemag_BLU"}; 
		weapons[] = {"rhs_weap_svdp_wd_npz","rhs_weap_pb_6p9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_wd_npz","rhs_weap_pb_6p9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhsgref_tortila_specter";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_wd_npz","rhs_acc_tgpv2","","rhs_acc_dh520x56",{"rhs_10Rnd_762x54mmR_7N1",10},{},""},{},{"rhs_weap_pb_6p9","rhs_acc_6p9_suppressor","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"LOP_U_CHR_SchoolTeacher_01",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_EarPlugs",1}}},{"rhs_suspender_AK8_chestrig",{{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_Kestrel4500",1},{"SmokeShell",2,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellBlue",1,1},{"SmokeShellGreen",1,1},{"SmokeShellOrange",1,1},{"rhs_mag_rgd5",2,1},{"10Rnd_762x54_Mag",1,10},{"rhs_10Rnd_762x54mmR_7N14",1,10},{"rhs_10Rnd_762x54mmR_7N1",1,10}}},{"rhsgref_tortila_specter",{{"rhs_rpg7_OG7V_mag",1,1},{"rhs_rpg7_PG7V_mag",1,1},{"rhs_rpg7_PG7VL_mag",1,1},{"rhs_rpg7_PG7VM_mag",1,1},{"rhs_rpg7_PG7VR_mag",1,1},{"rhs_rpg7_PG7VS_mag",1,1},{"rhs_rpg7_type69_airburst_mag",1,1},{"RPG7_F",1,1},{"ACE_10Rnd_762x54_Tracer_mag",1,10},{"10Rnd_762x54_Mag",1,10}}},"LOP_H_Shemag_BLU","G_Lowprofile",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ASF_2008_VAR_6_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 7"; 
		faction = "BS_I_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_l", "Male03PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_CHR_SchoolTeacher_01"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","G_Lowprofile","LOP_H_Shemag_BLU"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","G_Lowprofile","LOP_H_Shemag_BLU"}; 
		weapons[] = {"rhs_weap_svdp_wd_npz","rhs_weap_pb_6p9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_wd_npz","rhs_weap_pb_6p9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhsgref_tortila_specter";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_wd_npz","rhs_acc_tgpv2","","rhs_acc_dh520x56",{"rhs_10Rnd_762x54mmR_7N1",10},{},""},{},{"rhs_weap_pb_6p9","rhs_acc_6p9_suppressor","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"LOP_U_CHR_SchoolTeacher_01",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_EarPlugs",1}}},{"rhs_suspender_AK8_chestrig",{{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_Kestrel4500",1},{"SmokeShell",2,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellBlue",1,1},{"SmokeShellGreen",1,1},{"SmokeShellOrange",1,1},{"rhs_mag_rgd5",2,1},{"10Rnd_762x54_Mag",1,10},{"rhs_10Rnd_762x54mmR_7N14",1,10},{"rhs_10Rnd_762x54mmR_7N1",1,10}}},{"rhsgref_tortila_specter",{{"rhs_rpg7_OG7V_mag",1,1},{"rhs_rpg7_PG7V_mag",1,1},{"rhs_rpg7_PG7VL_mag",1,1},{"rhs_rpg7_PG7VM_mag",1,1},{"rhs_rpg7_PG7VR_mag",1,1},{"rhs_rpg7_PG7VS_mag",1,1},{"rhs_rpg7_type69_airburst_mag",1,1},{"RPG7_F",1,1},{"ACE_10Rnd_762x54_Tracer_mag",1,10},{"10Rnd_762x54_Mag",1,10}}},"LOP_H_Shemag_BLU","G_Lowprofile",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ASF_2008_VAR_7_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 8"; 
		faction = "BS_O_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_02", "Male03PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_Fatigue_BDU_BLK_02"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_mas_cia_beard","LOP_H_Shemag_BLK"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_mas_cia_beard","LOP_H_Shemag_BLK"}; 
		weapons[] = {"rhs_weap_m4","rhs_weap_6p53","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_m4","rhs_weap_6p53","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_FieldPack_blk";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4","rhsusf_acc_SFMB556","rhsusf_acc_wmx_bk","rhs_acc_rakursPM",{"rhs_mag_30Rnd_556x45_M855_Stanag",30},{},""},{},{"rhs_weap_6p53","","","",{"rhs_18rnd_9x21mm_7N29",18},{},""},{"LOP_U_Fatigue_BDU_BLK_02",{{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3},{"ACE_quikclot",15},{"ACE_elasticBandage",10},{"ACE_microDAGR",1}}},{"V_TacVest_blk",{{"SmokeShell",2,1},{"SmokeShellBlue",2,1},{"SmokeShellGreen",2,1},{"SmokeShellOrange",2,1},{"SmokeShellPurple",2,1},{"SmokeShellRed",2,1},{"SmokeShellYellow",2,1}}},{"B_FieldPack_blk",{{"ACE_wirecutter",1},{"ACE_EntrenchingTool",1},{"ACE_30Rnd_556x45_Stanag_Tracer_Dim",1,30},{"30Rnd_556x45_Stanag_green",1,30},{"ACE_30Rnd_556x45_Stanag_Mk318_mag",1,30},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",1,30},{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",1,30},{"150Rnd_556x45_Drum_Sand_Mag_Tracer_F",1,150},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",1,30},{"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red",1,30},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",1,30},{"rhs_mag_30Rnd_556x45_M855_Stanag",1,30},{"rhs_mag_30Rnd_556x45_M200_Stanag",1,30},{"rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red",1,30},{"rhs_mag_30Rnd_556x45_M193_Stanag",1,30},{"rhs_mag_30Rnd_556x45_Mk318_Stanag_Ranger",1,30},{"rhs_mag_30Rnd_556x45_Mk262_Stanag_Ranger",1,30},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger_Tracer_Red",1,30},{"rhs_mag_30Rnd_556x45_M855_Stanag_Ranger_Tracer_Red",1,30}}},"LOP_H_Shemag_BLK","G_mas_cia_beard",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ASF_2008_VAR_7_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 8"; 
		faction = "BS_B_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_02", "Male03PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_Fatigue_BDU_BLK_02"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_mas_cia_beard","LOP_H_Shemag_BLK"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_mas_cia_beard","LOP_H_Shemag_BLK"}; 
		weapons[] = {"rhs_weap_m4","rhs_weap_6p53","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_m4","rhs_weap_6p53","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_FieldPack_blk";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4","rhsusf_acc_SFMB556","rhsusf_acc_wmx_bk","rhs_acc_rakursPM",{"rhs_mag_30Rnd_556x45_M855_Stanag",30},{},""},{},{"rhs_weap_6p53","","","",{"rhs_18rnd_9x21mm_7N29",18},{},""},{"LOP_U_Fatigue_BDU_BLK_02",{{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3},{"ACE_quikclot",15},{"ACE_elasticBandage",10},{"ACE_microDAGR",1}}},{"V_TacVest_blk",{{"SmokeShell",2,1},{"SmokeShellBlue",2,1},{"SmokeShellGreen",2,1},{"SmokeShellOrange",2,1},{"SmokeShellPurple",2,1},{"SmokeShellRed",2,1},{"SmokeShellYellow",2,1}}},{"B_FieldPack_blk",{{"ACE_wirecutter",1},{"ACE_EntrenchingTool",1},{"ACE_30Rnd_556x45_Stanag_Tracer_Dim",1,30},{"30Rnd_556x45_Stanag_green",1,30},{"ACE_30Rnd_556x45_Stanag_Mk318_mag",1,30},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",1,30},{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",1,30},{"150Rnd_556x45_Drum_Sand_Mag_Tracer_F",1,150},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",1,30},{"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red",1,30},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",1,30},{"rhs_mag_30Rnd_556x45_M855_Stanag",1,30},{"rhs_mag_30Rnd_556x45_M200_Stanag",1,30},{"rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red",1,30},{"rhs_mag_30Rnd_556x45_M193_Stanag",1,30},{"rhs_mag_30Rnd_556x45_Mk318_Stanag_Ranger",1,30},{"rhs_mag_30Rnd_556x45_Mk262_Stanag_Ranger",1,30},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger_Tracer_Red",1,30},{"rhs_mag_30Rnd_556x45_M855_Stanag_Ranger_Tracer_Red",1,30}}},"LOP_H_Shemag_BLK","G_mas_cia_beard",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ASF_2008_VAR_7_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 8"; 
		faction = "BS_I_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_02", "Male03PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_Fatigue_BDU_BLK_02"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_mas_cia_beard","LOP_H_Shemag_BLK"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_mas_cia_beard","LOP_H_Shemag_BLK"}; 
		weapons[] = {"rhs_weap_m4","rhs_weap_6p53","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_m4","rhs_weap_6p53","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_FieldPack_blk";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4","rhsusf_acc_SFMB556","rhsusf_acc_wmx_bk","rhs_acc_rakursPM",{"rhs_mag_30Rnd_556x45_M855_Stanag",30},{},""},{},{"rhs_weap_6p53","","","",{"rhs_18rnd_9x21mm_7N29",18},{},""},{"LOP_U_Fatigue_BDU_BLK_02",{{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3},{"ACE_quikclot",15},{"ACE_elasticBandage",10},{"ACE_microDAGR",1}}},{"V_TacVest_blk",{{"SmokeShell",2,1},{"SmokeShellBlue",2,1},{"SmokeShellGreen",2,1},{"SmokeShellOrange",2,1},{"SmokeShellPurple",2,1},{"SmokeShellRed",2,1},{"SmokeShellYellow",2,1}}},{"B_FieldPack_blk",{{"ACE_wirecutter",1},{"ACE_EntrenchingTool",1},{"ACE_30Rnd_556x45_Stanag_Tracer_Dim",1,30},{"30Rnd_556x45_Stanag_green",1,30},{"ACE_30Rnd_556x45_Stanag_Mk318_mag",1,30},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",1,30},{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",1,30},{"150Rnd_556x45_Drum_Sand_Mag_Tracer_F",1,150},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",1,30},{"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red",1,30},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",1,30},{"rhs_mag_30Rnd_556x45_M855_Stanag",1,30},{"rhs_mag_30Rnd_556x45_M200_Stanag",1,30},{"rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red",1,30},{"rhs_mag_30Rnd_556x45_M193_Stanag",1,30},{"rhs_mag_30Rnd_556x45_Mk318_Stanag_Ranger",1,30},{"rhs_mag_30Rnd_556x45_Mk262_Stanag_Ranger",1,30},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger_Tracer_Red",1,30},{"rhs_mag_30Rnd_556x45_M855_Stanag_Ranger_Tracer_Red",1,30}}},"LOP_H_Shemag_BLK","G_mas_cia_beard",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ASF_2008_VAR_8_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 9"; 
		faction = "BS_O_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_03", "Male03PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_TAK_Civ_Fatigue_08"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","LOP_H_Shemag_BLU"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","LOP_H_Shemag_BLU"}; 
		weapons[] = {"rhs_weap_svdp_wd_npz","launch_RPG7_F","rhs_weap_pb_6p9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_wd_npz","launch_RPG7_F","rhs_weap_pb_6p9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_tortila_black";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_wd_npz","rhs_acc_tgpv2","","rhsusf_acc_anpvs27",{"rhs_10Rnd_762x54mmR_7N1",10},{},""},{"launch_RPG7_F","","","rhs_acc_1pn93_2",{"rhs_rpg7_TBG7V_mag",1},{},""},{"rhs_weap_pb_6p9","rhs_acc_6p9_suppressor","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"LOP_U_TAK_Civ_Fatigue_08",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"rhs_suspender_AK8_chestrig",{{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_Kestrel4500",1},{"SmokeShell",2,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellBlue",1,1},{"SmokeShellGreen",1,1},{"SmokeShellOrange",1,1},{"rhs_mag_rgd5",2,1}}},{"rhs_tortila_black",{}},"LOP_H_Shemag_BLU","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ASF_2008_VAR_8_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 9"; 
		faction = "BS_B_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_03", "Male03PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_TAK_Civ_Fatigue_08"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","LOP_H_Shemag_BLU"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","LOP_H_Shemag_BLU"}; 
		weapons[] = {"rhs_weap_svdp_wd_npz","launch_RPG7_F","rhs_weap_pb_6p9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_wd_npz","launch_RPG7_F","rhs_weap_pb_6p9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_tortila_black";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_wd_npz","rhs_acc_tgpv2","","rhsusf_acc_anpvs27",{"rhs_10Rnd_762x54mmR_7N1",10},{},""},{"launch_RPG7_F","","","rhs_acc_1pn93_2",{"rhs_rpg7_TBG7V_mag",1},{},""},{"rhs_weap_pb_6p9","rhs_acc_6p9_suppressor","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"LOP_U_TAK_Civ_Fatigue_08",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"rhs_suspender_AK8_chestrig",{{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_Kestrel4500",1},{"SmokeShell",2,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellBlue",1,1},{"SmokeShellGreen",1,1},{"SmokeShellOrange",1,1},{"rhs_mag_rgd5",2,1}}},{"rhs_tortila_black",{}},"LOP_H_Shemag_BLU","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ASF_2008_VAR_8_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 9"; 
		faction = "BS_I_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_03", "Male03PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_TAK_Civ_Fatigue_08"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","LOP_H_Shemag_BLU"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","LOP_H_Shemag_BLU"}; 
		weapons[] = {"rhs_weap_svdp_wd_npz","launch_RPG7_F","rhs_weap_pb_6p9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_wd_npz","launch_RPG7_F","rhs_weap_pb_6p9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_tortila_black";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_wd_npz","rhs_acc_tgpv2","","rhsusf_acc_anpvs27",{"rhs_10Rnd_762x54mmR_7N1",10},{},""},{"launch_RPG7_F","","","rhs_acc_1pn93_2",{"rhs_rpg7_TBG7V_mag",1},{},""},{"rhs_weap_pb_6p9","rhs_acc_6p9_suppressor","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"LOP_U_TAK_Civ_Fatigue_08",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"rhs_suspender_AK8_chestrig",{{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_Kestrel4500",1},{"SmokeShell",2,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellBlue",1,1},{"SmokeShellGreen",1,1},{"SmokeShellOrange",1,1},{"rhs_mag_rgd5",2,1}}},{"rhs_tortila_black",{}},"LOP_H_Shemag_BLU","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ASF_2008_VAR_9_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 10"; 
		faction = "BS_O_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_a", "Male02PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_US_Fatigue_10"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_googles_black","LOP_H_Turban"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_googles_black","LOP_H_Turban"}; 
		weapons[] = {"arifle_RPK12_lush_F","rhs_weap_makarov_pm","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_RPK12_lush_F","rhs_weap_makarov_pm","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_cbr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_RPK12_lush_F","suppressor_h_lush_lxWS","rhs_acc_2dpZenit_ris","optic_tws_mg",{"75Rnd_762x39_AK12_Lush_Mag_Tracer_F",75},{},""},{},{"rhs_weap_makarov_pm","","","",{},{},""},{"LOP_U_US_Fatigue_10",{{"ACE_EarPlugs",1}}},{"rhs_suspender_AK8_chestrig",{}},{"B_Kitbag_cbr",{}},"LOP_H_Turban","rhs_googles_black",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ASF_2008_VAR_9_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 10"; 
		faction = "BS_B_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_a", "Male02PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_US_Fatigue_10"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_googles_black","LOP_H_Turban"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_googles_black","LOP_H_Turban"}; 
		weapons[] = {"arifle_RPK12_lush_F","rhs_weap_makarov_pm","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_RPK12_lush_F","rhs_weap_makarov_pm","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_cbr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_RPK12_lush_F","suppressor_h_lush_lxWS","rhs_acc_2dpZenit_ris","optic_tws_mg",{"75Rnd_762x39_AK12_Lush_Mag_Tracer_F",75},{},""},{},{"rhs_weap_makarov_pm","","","",{},{},""},{"LOP_U_US_Fatigue_10",{{"ACE_EarPlugs",1}}},{"rhs_suspender_AK8_chestrig",{}},{"B_Kitbag_cbr",{}},"LOP_H_Turban","rhs_googles_black",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ASF_2008_VAR_9_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 10"; 
		faction = "BS_I_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_a", "Male02PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_US_Fatigue_10"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_googles_black","LOP_H_Turban"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_googles_black","LOP_H_Turban"}; 
		weapons[] = {"arifle_RPK12_lush_F","rhs_weap_makarov_pm","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_RPK12_lush_F","rhs_weap_makarov_pm","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_cbr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_RPK12_lush_F","suppressor_h_lush_lxWS","rhs_acc_2dpZenit_ris","optic_tws_mg",{"75Rnd_762x39_AK12_Lush_Mag_Tracer_F",75},{},""},{},{"rhs_weap_makarov_pm","","","",{},{},""},{"LOP_U_US_Fatigue_10",{{"ACE_EarPlugs",1}}},{"rhs_suspender_AK8_chestrig",{}},{"B_Kitbag_cbr",{}},"LOP_H_Turban","rhs_googles_black",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ASF_2008_Rifleman_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Rifleman (Winter)"; 
		faction = "BS_O_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_01", "Male03PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_Fatigue_BDU_ATACS_AU_01"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_Combat","LOP_H_Shemag_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_Combat","LOP_H_Shemag_TAN"}; 
		weapons[] = {"rhs_weap_akm","rhs_weap_6p53","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_akm","rhs_weap_6p53","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "LOP_B_FP_MG42_tub";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_akm","rhs_acc_dtk1l","rhs_acc_2dpZenit","",{"rhs_30Rnd_762x39mm_bakelite_U",30},{},""},{},{"rhs_weap_6p53","","","",{"rhs_18rnd_9x21mm_7N29",18},{},""},{"LOP_U_Fatigue_BDU_ATACS_AU_01",{}},{"V_TacVest_brn",{}},{"LOP_B_FP_MG42_tub",{}},"LOP_H_Shemag_TAN","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ASF_2008_Rifleman_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Rifleman (Winter)"; 
		faction = "BS_B_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_01", "Male03PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_Fatigue_BDU_ATACS_AU_01"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_Combat","LOP_H_Shemag_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_Combat","LOP_H_Shemag_TAN"}; 
		weapons[] = {"rhs_weap_akm","rhs_weap_6p53","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_akm","rhs_weap_6p53","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "LOP_B_FP_MG42_tub";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_akm","rhs_acc_dtk1l","rhs_acc_2dpZenit","",{"rhs_30Rnd_762x39mm_bakelite_U",30},{},""},{},{"rhs_weap_6p53","","","",{"rhs_18rnd_9x21mm_7N29",18},{},""},{"LOP_U_Fatigue_BDU_ATACS_AU_01",{}},{"V_TacVest_brn",{}},{"LOP_B_FP_MG42_tub",{}},"LOP_H_Shemag_TAN","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ASF_2008_Rifleman_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Rifleman (Winter)"; 
		faction = "BS_I_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_01", "Male03PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_Fatigue_BDU_ATACS_AU_01"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_Combat","LOP_H_Shemag_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_Combat","LOP_H_Shemag_TAN"}; 
		weapons[] = {"rhs_weap_akm","rhs_weap_6p53","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_akm","rhs_weap_6p53","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "LOP_B_FP_MG42_tub";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_akm","rhs_acc_dtk1l","rhs_acc_2dpZenit","",{"rhs_30Rnd_762x39mm_bakelite_U",30},{},""},{},{"rhs_weap_6p53","","","",{"rhs_18rnd_9x21mm_7N29",18},{},""},{"LOP_U_Fatigue_BDU_ATACS_AU_01",{}},{"V_TacVest_brn",{}},{"LOP_B_FP_MG42_tub",{}},"LOP_H_Shemag_TAN","G_Combat",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ASF_2008_GL_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Grenadier (Winter)"; 
		faction = "BS_O_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_02", "Male01PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_CHR_Citizen_02"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemRadio","ItemGPS","LOP_H_Turban_mask"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemRadio","ItemGPS","LOP_H_Turban_mask"}; 
		weapons[] = {"rhs_weap_ak74_2","rhs_weap_M320","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak74_2","rhs_weap_M320","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_tortila_grey";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74_2","rhs_acc_uuk","rhs_acc_2dpZenit","",{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",30},{},""},{},{"rhs_weap_M320","","","",{"rhs_mag_M441_HE",1},{},""},{"LOP_U_CHR_Citizen_02",{}},{"rhs_lifchik_vog",{}},{"rhs_tortila_grey",{}},"LOP_H_Turban_mask","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ASF_2008_GL_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Grenadier (Winter)"; 
		faction = "BS_B_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_02", "Male01PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_CHR_Citizen_02"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemRadio","ItemGPS","LOP_H_Turban_mask"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemRadio","ItemGPS","LOP_H_Turban_mask"}; 
		weapons[] = {"rhs_weap_ak74_2","rhs_weap_M320","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak74_2","rhs_weap_M320","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_tortila_grey";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74_2","rhs_acc_uuk","rhs_acc_2dpZenit","",{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",30},{},""},{},{"rhs_weap_M320","","","",{"rhs_mag_M441_HE",1},{},""},{"LOP_U_CHR_Citizen_02",{}},{"rhs_lifchik_vog",{}},{"rhs_tortila_grey",{}},"LOP_H_Turban_mask","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ASF_2008_GL_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Grenadier (Winter)"; 
		faction = "BS_I_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_02", "Male01PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_CHR_Citizen_02"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemRadio","ItemGPS","LOP_H_Turban_mask"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemRadio","ItemGPS","LOP_H_Turban_mask"}; 
		weapons[] = {"rhs_weap_ak74_2","rhs_weap_M320","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak74_2","rhs_weap_M320","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_tortila_grey";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74_2","rhs_acc_uuk","rhs_acc_2dpZenit","",{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",30},{},""},{},{"rhs_weap_M320","","","",{"rhs_mag_M441_HE",1},{},""},{"LOP_U_CHR_Citizen_02",{}},{"rhs_lifchik_vog",{}},{"rhs_tortila_grey",{}},"LOP_H_Turban_mask","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ASF_2008_AR_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Machine Gunner (Winter)"; 
		faction = "BS_O_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_a", "Male01PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_US_Fatigue_10"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_googles_black","LOP_H_Turban"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_googles_black","LOP_H_Turban"}; 
		weapons[] = {"rhs_weap_rpk74m_npz","rhs_weap_makarov_pm","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_rpk74m_npz","rhs_weap_makarov_pm","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_cbr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_rpk74m_npz","rhs_acc_dtk2","rhs_acc_2dpZenit","rhs_acc_okp7_picatinny",{"SCM_96Rnd_545x39_RPK_Mag_Tracer",96},{},""},{},{"rhs_weap_makarov_pm","","","",{},{},""},{"LOP_U_US_Fatigue_10",{}},{"rhs_suspender_AK8_chestrig",{}},{"B_Kitbag_cbr",{}},"LOP_H_Turban","rhs_googles_black",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ASF_2008_AR_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Machine Gunner (Winter)"; 
		faction = "BS_B_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_a", "Male01PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_US_Fatigue_10"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_googles_black","LOP_H_Turban"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_googles_black","LOP_H_Turban"}; 
		weapons[] = {"rhs_weap_rpk74m_npz","rhs_weap_makarov_pm","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_rpk74m_npz","rhs_weap_makarov_pm","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_cbr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_rpk74m_npz","rhs_acc_dtk2","rhs_acc_2dpZenit","rhs_acc_okp7_picatinny",{"SCM_96Rnd_545x39_RPK_Mag_Tracer",96},{},""},{},{"rhs_weap_makarov_pm","","","",{},{},""},{"LOP_U_US_Fatigue_10",{}},{"rhs_suspender_AK8_chestrig",{}},{"B_Kitbag_cbr",{}},"LOP_H_Turban","rhs_googles_black",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ASF_2008_AR_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Machine Gunner (Winter)"; 
		faction = "BS_I_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_a", "Male01PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_US_Fatigue_10"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_googles_black","LOP_H_Turban"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_googles_black","LOP_H_Turban"}; 
		weapons[] = {"rhs_weap_rpk74m_npz","rhs_weap_makarov_pm","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_rpk74m_npz","rhs_weap_makarov_pm","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_cbr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_rpk74m_npz","rhs_acc_dtk2","rhs_acc_2dpZenit","rhs_acc_okp7_picatinny",{"SCM_96Rnd_545x39_RPK_Mag_Tracer",96},{},""},{},{"rhs_weap_makarov_pm","","","",{},{},""},{"LOP_U_US_Fatigue_10",{}},{"rhs_suspender_AK8_chestrig",{}},{"B_Kitbag_cbr",{}},"LOP_H_Turban","rhs_googles_black",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ASF_2008_RTO_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Anti-Tank (Winter)"; 
		faction = "BS_O_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_02", "Male03PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_CHR_Citizen_02"; 
		linkedItems[] = {"ItemMap","ItemGPS"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS"}; 
		weapons[] = {"rhs_weap_ak74_3","rhs_weap_rpg7","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak74_3","rhs_weap_rpg7","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_rpg_empty";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74_3","rhs_acc_dtk3","rhs_acc_2dpZenit","",{"rhs_30Rnd_545x39_7N10_2mag_AK",30},{},""},{"rhs_weap_rpg7","","","rhs_acc_pgo7v3",{"rhs_rpg7_PG7VL_mag",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_CHR_Citizen_02",{{"ACE_EarPlugs",1}}},{"rhs_belt_AK4",{}},{"rhs_rpg_empty",{{"rhs_rpg7_OG7V_mag",2,1}}},"","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ASF_2008_RTO_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Anti-Tank (Winter)"; 
		faction = "BS_B_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_02", "Male03PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_CHR_Citizen_02"; 
		linkedItems[] = {"ItemMap","ItemGPS"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS"}; 
		weapons[] = {"rhs_weap_ak74_3","rhs_weap_rpg7","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak74_3","rhs_weap_rpg7","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_rpg_empty";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74_3","rhs_acc_dtk3","rhs_acc_2dpZenit","",{"rhs_30Rnd_545x39_7N10_2mag_AK",30},{},""},{"rhs_weap_rpg7","","","rhs_acc_pgo7v3",{"rhs_rpg7_PG7VL_mag",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_CHR_Citizen_02",{{"ACE_EarPlugs",1}}},{"rhs_belt_AK4",{}},{"rhs_rpg_empty",{{"rhs_rpg7_OG7V_mag",2,1}}},"","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ASF_2008_RTO_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Anti-Tank (Winter)"; 
		faction = "BS_I_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_02", "Male03PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_CHR_Citizen_02"; 
		linkedItems[] = {"ItemMap","ItemGPS"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS"}; 
		weapons[] = {"rhs_weap_ak74_3","rhs_weap_rpg7","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak74_3","rhs_weap_rpg7","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_rpg_empty";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74_3","rhs_acc_dtk3","rhs_acc_2dpZenit","",{"rhs_30Rnd_545x39_7N10_2mag_AK",30},{},""},{"rhs_weap_rpg7","","","rhs_acc_pgo7v3",{"rhs_rpg7_PG7VL_mag",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_CHR_Citizen_02",{{"ACE_EarPlugs",1}}},{"rhs_belt_AK4",{}},{"rhs_rpg_empty",{{"rhs_rpg7_OG7V_mag",2,1}}},"","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ASF_2008_SNP_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Sniper (Winter)"; 
		faction = "BS_O_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_sa", "Male02PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_AM_Fatigue_04_5"; 
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","ItemGPS","LOP_H_Shemag_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","ItemGPS","LOP_H_Shemag_TAN"}; 
		weapons[] = {"rhs_weap_svdp_npz","rhs_weap_pb_6p9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_npz","rhs_weap_pb_6p9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_tortila_grey";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_npz","","","rhs_acc_dh520x56",{"ACE_10Rnd_762x54_Tracer_mag",10},{},""},{},{"rhs_weap_pb_6p9","rhs_acc_6p9_suppressor","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"LOP_U_AM_Fatigue_04_5",{{"ACE_EarPlugs",1}}},{"rhs_suspender_AK",{}},{"rhs_tortila_grey",{}},"LOP_H_Shemag_TAN","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ASF_2008_SNP_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Sniper (Winter)"; 
		faction = "BS_B_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_sa", "Male02PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_AM_Fatigue_04_5"; 
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","ItemGPS","LOP_H_Shemag_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","ItemGPS","LOP_H_Shemag_TAN"}; 
		weapons[] = {"rhs_weap_svdp_npz","rhs_weap_pb_6p9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_npz","rhs_weap_pb_6p9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_tortila_grey";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_npz","","","rhs_acc_dh520x56",{"ACE_10Rnd_762x54_Tracer_mag",10},{},""},{},{"rhs_weap_pb_6p9","rhs_acc_6p9_suppressor","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"LOP_U_AM_Fatigue_04_5",{{"ACE_EarPlugs",1}}},{"rhs_suspender_AK",{}},{"rhs_tortila_grey",{}},"LOP_H_Shemag_TAN","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ASF_2008_SNP_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Sniper (Winter)"; 
		faction = "BS_I_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_sa", "Male02PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_AM_Fatigue_04_5"; 
		linkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","ItemGPS","LOP_H_Shemag_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","ItemGPS","LOP_H_Shemag_TAN"}; 
		weapons[] = {"rhs_weap_svdp_npz","rhs_weap_pb_6p9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_npz","rhs_weap_pb_6p9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_tortila_grey";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_npz","","","rhs_acc_dh520x56",{"ACE_10Rnd_762x54_Tracer_mag",10},{},""},{},{"rhs_weap_pb_6p9","rhs_acc_6p9_suppressor","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"LOP_U_AM_Fatigue_04_5",{{"ACE_EarPlugs",1}}},{"rhs_suspender_AK",{}},{"rhs_tortila_grey",{}},"LOP_H_Shemag_TAN","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ASF_2008_Medic_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Doctor (Winter)"; 
		faction = "BS_O_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_03", "Male01PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_NAPA_Fatigue_04"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"}; 
		weapons[] = {"rhs_weap_aks74un","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_aks74un","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_cbr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_aks74un","rhs_acc_tgpa","","rhs_acc_pkas",{"rhs_30Rnd_545x39_7N10_camo_AK",30},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_NAPA_Fatigue_04",{}},{"rhs_suspender_SKS",{}},{"B_Kitbag_cbr",{}},"","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ASF_2008_Medic_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Doctor (Winter)"; 
		faction = "BS_B_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_03", "Male01PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_NAPA_Fatigue_04"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"}; 
		weapons[] = {"rhs_weap_aks74un","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_aks74un","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_cbr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_aks74un","rhs_acc_tgpa","","rhs_acc_pkas",{"rhs_30Rnd_545x39_7N10_camo_AK",30},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_NAPA_Fatigue_04",{}},{"rhs_suspender_SKS",{}},{"B_Kitbag_cbr",{}},"","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ASF_2008_Medic_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Doctor (Winter)"; 
		faction = "BS_I_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_03", "Male01PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_NAPA_Fatigue_04"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"}; 
		weapons[] = {"rhs_weap_aks74un","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_aks74un","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_cbr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_aks74un","rhs_acc_tgpa","","rhs_acc_pkas",{"rhs_30Rnd_545x39_7N10_camo_AK",30},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_NAPA_Fatigue_04",{}},{"rhs_suspender_SKS",{}},{"B_Kitbag_cbr",{}},"","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ASF_2008_DIVER_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Special (Winter)"; 
		faction = "BS_O_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_sa", "Male01PER" ,"G_NATO_default"};
		uniformClass = "U_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_1PN138","G_B_Diving","H_Booniehat_dgtl"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_1PN138","G_B_Diving","H_Booniehat_dgtl"}; 
		weapons[] = {"rhs_weap_ak103_1_npz","rhs_weap_pya","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak103_1_npz","rhs_weap_pya","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_blk";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak103_1_npz","","rhs_acc_perst1ik","rhs_acc_1p87",{"rhs_30Rnd_762x39mm_bakelite",30},{},""},{},{"rhs_weap_pya","","","",{"rhs_mag_9x19_17",17},{},""},{"U_B_Wetsuit",{}},{"V_RebreatherB",{}},{"B_AssaultPack_blk",{}},"H_Booniehat_dgtl","G_B_Diving",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","rhs_1PN138"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ASF_2008_DIVER_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Special (Winter)"; 
		faction = "BS_B_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_sa", "Male01PER" ,"G_NATO_default"};
		uniformClass = "U_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_1PN138","G_B_Diving","H_Booniehat_dgtl"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_1PN138","G_B_Diving","H_Booniehat_dgtl"}; 
		weapons[] = {"rhs_weap_ak103_1_npz","rhs_weap_pya","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak103_1_npz","rhs_weap_pya","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_blk";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak103_1_npz","","rhs_acc_perst1ik","rhs_acc_1p87",{"rhs_30Rnd_762x39mm_bakelite",30},{},""},{},{"rhs_weap_pya","","","",{"rhs_mag_9x19_17",17},{},""},{"U_B_Wetsuit",{}},{"V_RebreatherB",{}},{"B_AssaultPack_blk",{}},"H_Booniehat_dgtl","G_B_Diving",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","rhs_1PN138"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ASF_2008_DIVER_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Special (Winter)"; 
		faction = "BS_I_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_sa", "Male01PER" ,"G_NATO_default"};
		uniformClass = "U_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_1PN138","G_B_Diving","H_Booniehat_dgtl"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_1PN138","G_B_Diving","H_Booniehat_dgtl"}; 
		weapons[] = {"rhs_weap_ak103_1_npz","rhs_weap_pya","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak103_1_npz","rhs_weap_pya","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_blk";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak103_1_npz","","rhs_acc_perst1ik","rhs_acc_1p87",{"rhs_30Rnd_762x39mm_bakelite",30},{},""},{},{"rhs_weap_pya","","","",{"rhs_mag_9x19_17",17},{},""},{"U_B_Wetsuit",{}},{"V_RebreatherB",{}},{"B_AssaultPack_blk",{}},"H_Booniehat_dgtl","G_B_Diving",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","","rhs_1PN138"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ASF_2008_Officer_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Officer (Winter)"; 
		faction = "BS_O_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_sa", "Male03PER" ,"G_NATO_default"};
		uniformClass = "U_lxWS_C_Djella_03"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_Aviator","lxWS_H_cloth_5_C"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_Aviator","lxWS_H_cloth_5_C"}; 
		weapons[] = {"rhs_weap_ak74n_npz","hgun_Pistol_heavy_01_green_F","Binocular"}; 
		respawnWeapons[] = {"rhs_weap_ak74n_npz","hgun_Pistol_heavy_01_green_F","Binocular"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74n_npz","rhs_acc_dtk1983","","",{"rhs_30Rnd_545x39_7N10_2mag_desert_AK",30},{},""},{},{"hgun_Pistol_heavy_01_green_F","","","",{"11Rnd_45ACP_Mag",15},{},""},{"U_lxWS_C_Djella_03",{}},{},{},"lxWS_H_cloth_5_C","G_Aviator",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ASF_2008_Officer_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Officer (Winter)"; 
		faction = "BS_B_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_sa", "Male03PER" ,"G_NATO_default"};
		uniformClass = "U_lxWS_C_Djella_03"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_Aviator","lxWS_H_cloth_5_C"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_Aviator","lxWS_H_cloth_5_C"}; 
		weapons[] = {"rhs_weap_ak74n_npz","hgun_Pistol_heavy_01_green_F","Binocular"}; 
		respawnWeapons[] = {"rhs_weap_ak74n_npz","hgun_Pistol_heavy_01_green_F","Binocular"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74n_npz","rhs_acc_dtk1983","","",{"rhs_30Rnd_545x39_7N10_2mag_desert_AK",30},{},""},{},{"hgun_Pistol_heavy_01_green_F","","","",{"11Rnd_45ACP_Mag",15},{},""},{"U_lxWS_C_Djella_03",{}},{},{},"lxWS_H_cloth_5_C","G_Aviator",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ASF_2008_Officer_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Officer (Winter)"; 
		faction = "BS_I_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_sa", "Male03PER" ,"G_NATO_default"};
		uniformClass = "U_lxWS_C_Djella_03"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_Aviator","lxWS_H_cloth_5_C"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_Aviator","lxWS_H_cloth_5_C"}; 
		weapons[] = {"rhs_weap_ak74n_npz","hgun_Pistol_heavy_01_green_F","Binocular"}; 
		respawnWeapons[] = {"rhs_weap_ak74n_npz","hgun_Pistol_heavy_01_green_F","Binocular"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74n_npz","rhs_acc_dtk1983","","",{"rhs_30Rnd_545x39_7N10_2mag_desert_AK",30},{},""},{},{"hgun_Pistol_heavy_01_green_F","","","",{"11Rnd_45ACP_Mag",15},{},""},{"U_lxWS_C_Djella_03",{}},{},{},"lxWS_H_cloth_5_C","G_Aviator",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ASF_2008_VAR_10_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 11"; 
		faction = "BS_O_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_sa", "Male01PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_TAK_Civ_Fatigue_08"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","LOP_H_Shemag_BLU"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","LOP_H_Shemag_BLU"}; 
		weapons[] = {"rhs_weap_svdp_wd_npz","launch_RPG7_F","rhs_weap_pb_6p9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_wd_npz","launch_RPG7_F","rhs_weap_pb_6p9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_tortila_black";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_wd_npz","rhs_acc_tgpv2","","optic_DMS",{"rhs_10Rnd_762x54mmR_7N1",10},{},""},{"launch_RPG7_F","","","rhs_acc_1pn93_2",{"rhs_rpg7_TBG7V_mag",1},{},""},{"rhs_weap_pb_6p9","rhs_acc_6p9_suppressor","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"LOP_U_TAK_Civ_Fatigue_08",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"rhs_suspender_AK8_chestrig",{{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_Kestrel4500",1},{"SmokeShell",2,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellBlue",1,1},{"SmokeShellGreen",1,1},{"SmokeShellOrange",1,1},{"rhs_mag_rgd5",2,1}}},{"rhs_tortila_black",{}},"LOP_H_Shemag_BLU","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ASF_2008_VAR_10_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 11"; 
		faction = "BS_B_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_sa", "Male01PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_TAK_Civ_Fatigue_08"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","LOP_H_Shemag_BLU"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","LOP_H_Shemag_BLU"}; 
		weapons[] = {"rhs_weap_svdp_wd_npz","launch_RPG7_F","rhs_weap_pb_6p9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_wd_npz","launch_RPG7_F","rhs_weap_pb_6p9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_tortila_black";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_wd_npz","rhs_acc_tgpv2","","optic_DMS",{"rhs_10Rnd_762x54mmR_7N1",10},{},""},{"launch_RPG7_F","","","rhs_acc_1pn93_2",{"rhs_rpg7_TBG7V_mag",1},{},""},{"rhs_weap_pb_6p9","rhs_acc_6p9_suppressor","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"LOP_U_TAK_Civ_Fatigue_08",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"rhs_suspender_AK8_chestrig",{{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_Kestrel4500",1},{"SmokeShell",2,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellBlue",1,1},{"SmokeShellGreen",1,1},{"SmokeShellOrange",1,1},{"rhs_mag_rgd5",2,1}}},{"rhs_tortila_black",{}},"LOP_H_Shemag_BLU","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ASF_2008_VAR_10_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 11"; 
		faction = "BS_I_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_sa", "Male01PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_TAK_Civ_Fatigue_08"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","LOP_H_Shemag_BLU"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","LOP_H_Shemag_BLU"}; 
		weapons[] = {"rhs_weap_svdp_wd_npz","launch_RPG7_F","rhs_weap_pb_6p9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_wd_npz","launch_RPG7_F","rhs_weap_pb_6p9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_tortila_black";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_wd_npz","rhs_acc_tgpv2","","optic_DMS",{"rhs_10Rnd_762x54mmR_7N1",10},{},""},{"launch_RPG7_F","","","rhs_acc_1pn93_2",{"rhs_rpg7_TBG7V_mag",1},{},""},{"rhs_weap_pb_6p9","rhs_acc_6p9_suppressor","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"LOP_U_TAK_Civ_Fatigue_08",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"rhs_suspender_AK8_chestrig",{{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_Kestrel4500",1},{"SmokeShell",2,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellBlue",1,1},{"SmokeShellGreen",1,1},{"SmokeShellOrange",1,1},{"rhs_mag_rgd5",2,1}}},{"rhs_tortila_black",{}},"LOP_H_Shemag_BLU","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ASF_2008_VAR_11_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 12"; 
		faction = "BS_O_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_02", "Male03PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_CHR_SchoolTeacher_01"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","G_Lowprofile","LOP_H_Shemag_BLU"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","G_Lowprofile","LOP_H_Shemag_BLU"}; 
		weapons[] = {"rhs_weap_svdp_wd_npz","rhs_weap_pb_6p9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_wd_npz","rhs_weap_pb_6p9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhsgref_tortila_specter";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_wd_npz","rhs_acc_tgpv2","","rhs_acc_dh520x56",{"rhs_10Rnd_762x54mmR_7N1",10},{},""},{},{"rhs_weap_pb_6p9","rhs_acc_6p9_suppressor","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"LOP_U_CHR_SchoolTeacher_01",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_EarPlugs",1}}},{"rhs_suspender_AK8_chestrig",{{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_Kestrel4500",1},{"SmokeShell",2,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellBlue",1,1},{"SmokeShellGreen",1,1},{"SmokeShellOrange",1,1},{"rhs_mag_rgd5",2,1},{"10Rnd_762x54_Mag",1,10},{"rhs_10Rnd_762x54mmR_7N14",1,10},{"rhs_10Rnd_762x54mmR_7N1",1,10}}},{"rhsgref_tortila_specter",{{"rhs_rpg7_OG7V_mag",1,1},{"rhs_rpg7_PG7V_mag",1,1},{"rhs_rpg7_PG7VL_mag",1,1},{"rhs_rpg7_PG7VM_mag",1,1},{"rhs_rpg7_PG7VR_mag",1,1},{"rhs_rpg7_PG7VS_mag",1,1},{"rhs_rpg7_type69_airburst_mag",1,1},{"RPG7_F",1,1},{"ACE_10Rnd_762x54_Tracer_mag",1,10},{"10Rnd_762x54_Mag",1,10}}},"LOP_H_Shemag_BLU","G_Lowprofile",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ASF_2008_VAR_11_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 12"; 
		faction = "BS_B_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_02", "Male03PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_CHR_SchoolTeacher_01"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","G_Lowprofile","LOP_H_Shemag_BLU"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","G_Lowprofile","LOP_H_Shemag_BLU"}; 
		weapons[] = {"rhs_weap_svdp_wd_npz","rhs_weap_pb_6p9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_wd_npz","rhs_weap_pb_6p9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhsgref_tortila_specter";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_wd_npz","rhs_acc_tgpv2","","rhs_acc_dh520x56",{"rhs_10Rnd_762x54mmR_7N1",10},{},""},{},{"rhs_weap_pb_6p9","rhs_acc_6p9_suppressor","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"LOP_U_CHR_SchoolTeacher_01",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_EarPlugs",1}}},{"rhs_suspender_AK8_chestrig",{{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_Kestrel4500",1},{"SmokeShell",2,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellBlue",1,1},{"SmokeShellGreen",1,1},{"SmokeShellOrange",1,1},{"rhs_mag_rgd5",2,1},{"10Rnd_762x54_Mag",1,10},{"rhs_10Rnd_762x54mmR_7N14",1,10},{"rhs_10Rnd_762x54mmR_7N1",1,10}}},{"rhsgref_tortila_specter",{{"rhs_rpg7_OG7V_mag",1,1},{"rhs_rpg7_PG7V_mag",1,1},{"rhs_rpg7_PG7VL_mag",1,1},{"rhs_rpg7_PG7VM_mag",1,1},{"rhs_rpg7_PG7VR_mag",1,1},{"rhs_rpg7_PG7VS_mag",1,1},{"rhs_rpg7_type69_airburst_mag",1,1},{"RPG7_F",1,1},{"ACE_10Rnd_762x54_Tracer_mag",1,10},{"10Rnd_762x54_Mag",1,10}}},"LOP_H_Shemag_BLU","G_Lowprofile",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ASF_2008_VAR_11_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 12"; 
		faction = "BS_I_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_02", "Male03PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_CHR_SchoolTeacher_01"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","G_Lowprofile","LOP_H_Shemag_BLU"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","G_Lowprofile","LOP_H_Shemag_BLU"}; 
		weapons[] = {"rhs_weap_svdp_wd_npz","rhs_weap_pb_6p9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_wd_npz","rhs_weap_pb_6p9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhsgref_tortila_specter";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_wd_npz","rhs_acc_tgpv2","","rhs_acc_dh520x56",{"rhs_10Rnd_762x54mmR_7N1",10},{},""},{},{"rhs_weap_pb_6p9","rhs_acc_6p9_suppressor","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"LOP_U_CHR_SchoolTeacher_01",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_EarPlugs",1}}},{"rhs_suspender_AK8_chestrig",{{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_Kestrel4500",1},{"SmokeShell",2,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellBlue",1,1},{"SmokeShellGreen",1,1},{"SmokeShellOrange",1,1},{"rhs_mag_rgd5",2,1},{"10Rnd_762x54_Mag",1,10},{"rhs_10Rnd_762x54mmR_7N14",1,10},{"rhs_10Rnd_762x54mmR_7N1",1,10}}},{"rhsgref_tortila_specter",{{"rhs_rpg7_OG7V_mag",1,1},{"rhs_rpg7_PG7V_mag",1,1},{"rhs_rpg7_PG7VL_mag",1,1},{"rhs_rpg7_PG7VM_mag",1,1},{"rhs_rpg7_PG7VR_mag",1,1},{"rhs_rpg7_PG7VS_mag",1,1},{"rhs_rpg7_type69_airburst_mag",1,1},{"RPG7_F",1,1},{"ACE_10Rnd_762x54_Tracer_mag",1,10},{"10Rnd_762x54_Mag",1,10}}},"LOP_H_Shemag_BLU","G_Lowprofile",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ASF_2008_VAR_12_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 13"; 
		faction = "BS_O_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_03", "Male03PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_Fatigue_BDU_BLK_02"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_mas_cia_beard","LOP_H_Shemag_BLK"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_mas_cia_beard","LOP_H_Shemag_BLK"}; 
		weapons[] = {"rhs_weap_m4","rhs_weap_6p53","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_m4","rhs_weap_6p53","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_FieldPack_blk";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4","rhsusf_acc_SFMB556","rhsusf_acc_wmx_bk","rhs_acc_rakursPM",{"rhs_mag_30Rnd_556x45_M855_Stanag",30},{},""},{},{"rhs_weap_6p53","","","",{"rhs_18rnd_9x21mm_7N29",18},{},""},{"LOP_U_Fatigue_BDU_BLK_02",{{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3},{"ACE_quikclot",15},{"ACE_elasticBandage",10},{"ACE_microDAGR",1}}},{"V_TacVest_blk",{{"SmokeShell",2,1},{"SmokeShellBlue",2,1},{"SmokeShellGreen",2,1},{"SmokeShellOrange",2,1},{"SmokeShellPurple",2,1},{"SmokeShellRed",2,1},{"SmokeShellYellow",2,1}}},{"B_FieldPack_blk",{{"ACE_wirecutter",1},{"ACE_EntrenchingTool",1},{"ACE_30Rnd_556x45_Stanag_Tracer_Dim",1,30},{"30Rnd_556x45_Stanag_green",1,30},{"ACE_30Rnd_556x45_Stanag_Mk318_mag",1,30},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",1,30},{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",1,30},{"150Rnd_556x45_Drum_Sand_Mag_Tracer_F",1,150},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",1,30},{"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red",1,30},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",1,30},{"rhs_mag_30Rnd_556x45_M855_Stanag",1,30},{"rhs_mag_30Rnd_556x45_M200_Stanag",1,30},{"rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red",1,30},{"rhs_mag_30Rnd_556x45_M193_Stanag",1,30},{"rhs_mag_30Rnd_556x45_Mk318_Stanag_Ranger",1,30},{"rhs_mag_30Rnd_556x45_Mk262_Stanag_Ranger",1,30},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger_Tracer_Red",1,30},{"rhs_mag_30Rnd_556x45_M855_Stanag_Ranger_Tracer_Red",1,30}}},"LOP_H_Shemag_BLK","G_mas_cia_beard",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ASF_2008_VAR_12_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 13"; 
		faction = "BS_B_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_03", "Male03PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_Fatigue_BDU_BLK_02"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_mas_cia_beard","LOP_H_Shemag_BLK"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_mas_cia_beard","LOP_H_Shemag_BLK"}; 
		weapons[] = {"rhs_weap_m4","rhs_weap_6p53","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_m4","rhs_weap_6p53","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_FieldPack_blk";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4","rhsusf_acc_SFMB556","rhsusf_acc_wmx_bk","rhs_acc_rakursPM",{"rhs_mag_30Rnd_556x45_M855_Stanag",30},{},""},{},{"rhs_weap_6p53","","","",{"rhs_18rnd_9x21mm_7N29",18},{},""},{"LOP_U_Fatigue_BDU_BLK_02",{{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3},{"ACE_quikclot",15},{"ACE_elasticBandage",10},{"ACE_microDAGR",1}}},{"V_TacVest_blk",{{"SmokeShell",2,1},{"SmokeShellBlue",2,1},{"SmokeShellGreen",2,1},{"SmokeShellOrange",2,1},{"SmokeShellPurple",2,1},{"SmokeShellRed",2,1},{"SmokeShellYellow",2,1}}},{"B_FieldPack_blk",{{"ACE_wirecutter",1},{"ACE_EntrenchingTool",1},{"ACE_30Rnd_556x45_Stanag_Tracer_Dim",1,30},{"30Rnd_556x45_Stanag_green",1,30},{"ACE_30Rnd_556x45_Stanag_Mk318_mag",1,30},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",1,30},{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",1,30},{"150Rnd_556x45_Drum_Sand_Mag_Tracer_F",1,150},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",1,30},{"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red",1,30},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",1,30},{"rhs_mag_30Rnd_556x45_M855_Stanag",1,30},{"rhs_mag_30Rnd_556x45_M200_Stanag",1,30},{"rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red",1,30},{"rhs_mag_30Rnd_556x45_M193_Stanag",1,30},{"rhs_mag_30Rnd_556x45_Mk318_Stanag_Ranger",1,30},{"rhs_mag_30Rnd_556x45_Mk262_Stanag_Ranger",1,30},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger_Tracer_Red",1,30},{"rhs_mag_30Rnd_556x45_M855_Stanag_Ranger_Tracer_Red",1,30}}},"LOP_H_Shemag_BLK","G_mas_cia_beard",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ASF_2008_VAR_12_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 13"; 
		faction = "BS_I_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_03", "Male03PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_Fatigue_BDU_BLK_02"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_mas_cia_beard","LOP_H_Shemag_BLK"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","G_mas_cia_beard","LOP_H_Shemag_BLK"}; 
		weapons[] = {"rhs_weap_m4","rhs_weap_6p53","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_m4","rhs_weap_6p53","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_FieldPack_blk";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4","rhsusf_acc_SFMB556","rhsusf_acc_wmx_bk","rhs_acc_rakursPM",{"rhs_mag_30Rnd_556x45_M855_Stanag",30},{},""},{},{"rhs_weap_6p53","","","",{"rhs_18rnd_9x21mm_7N29",18},{},""},{"LOP_U_Fatigue_BDU_BLK_02",{{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3},{"ACE_quikclot",15},{"ACE_elasticBandage",10},{"ACE_microDAGR",1}}},{"V_TacVest_blk",{{"SmokeShell",2,1},{"SmokeShellBlue",2,1},{"SmokeShellGreen",2,1},{"SmokeShellOrange",2,1},{"SmokeShellPurple",2,1},{"SmokeShellRed",2,1},{"SmokeShellYellow",2,1}}},{"B_FieldPack_blk",{{"ACE_wirecutter",1},{"ACE_EntrenchingTool",1},{"ACE_30Rnd_556x45_Stanag_Tracer_Dim",1,30},{"30Rnd_556x45_Stanag_green",1,30},{"ACE_30Rnd_556x45_Stanag_Mk318_mag",1,30},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",1,30},{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",1,30},{"150Rnd_556x45_Drum_Sand_Mag_Tracer_F",1,150},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",1,30},{"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red",1,30},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",1,30},{"rhs_mag_30Rnd_556x45_M855_Stanag",1,30},{"rhs_mag_30Rnd_556x45_M200_Stanag",1,30},{"rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red",1,30},{"rhs_mag_30Rnd_556x45_M193_Stanag",1,30},{"rhs_mag_30Rnd_556x45_Mk318_Stanag_Ranger",1,30},{"rhs_mag_30Rnd_556x45_Mk262_Stanag_Ranger",1,30},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger_Tracer_Red",1,30},{"rhs_mag_30Rnd_556x45_M855_Stanag_Ranger_Tracer_Red",1,30}}},"LOP_H_Shemag_BLK","G_mas_cia_beard",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ASF_2008_VAR_13_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 14"; 
		faction = "BS_O_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_sa", "Male01PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_TAK_Civ_Fatigue_08"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","LOP_H_Shemag_BLU"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","LOP_H_Shemag_BLU"}; 
		weapons[] = {"rhs_weap_svdp_wd_npz","launch_RPG7_F","rhs_weap_pb_6p9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_wd_npz","launch_RPG7_F","rhs_weap_pb_6p9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_tortila_black";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_wd_npz","rhs_acc_tgpv2","","rhsusf_acc_anpvs27",{"rhs_10Rnd_762x54mmR_7N1",10},{},""},{"launch_RPG7_F","","","rhs_acc_1pn93_2",{"rhs_rpg7_TBG7V_mag",1},{},""},{"rhs_weap_pb_6p9","rhs_acc_6p9_suppressor","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"LOP_U_TAK_Civ_Fatigue_08",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"rhs_suspender_AK8_chestrig",{{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_Kestrel4500",1},{"SmokeShell",2,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellBlue",1,1},{"SmokeShellGreen",1,1},{"SmokeShellOrange",1,1},{"rhs_mag_rgd5",2,1}}},{"rhs_tortila_black",{}},"LOP_H_Shemag_BLU","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ASF_2008_VAR_13_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 14"; 
		faction = "BS_B_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_sa", "Male01PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_TAK_Civ_Fatigue_08"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","LOP_H_Shemag_BLU"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","LOP_H_Shemag_BLU"}; 
		weapons[] = {"rhs_weap_svdp_wd_npz","launch_RPG7_F","rhs_weap_pb_6p9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_wd_npz","launch_RPG7_F","rhs_weap_pb_6p9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_tortila_black";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_wd_npz","rhs_acc_tgpv2","","rhsusf_acc_anpvs27",{"rhs_10Rnd_762x54mmR_7N1",10},{},""},{"launch_RPG7_F","","","rhs_acc_1pn93_2",{"rhs_rpg7_TBG7V_mag",1},{},""},{"rhs_weap_pb_6p9","rhs_acc_6p9_suppressor","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"LOP_U_TAK_Civ_Fatigue_08",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"rhs_suspender_AK8_chestrig",{{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_Kestrel4500",1},{"SmokeShell",2,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellBlue",1,1},{"SmokeShellGreen",1,1},{"SmokeShellOrange",1,1},{"rhs_mag_rgd5",2,1}}},{"rhs_tortila_black",{}},"LOP_H_Shemag_BLU","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ASF_2008_VAR_13_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 14"; 
		faction = "BS_I_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_04_sa", "Male01PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_TAK_Civ_Fatigue_08"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","LOP_H_Shemag_BLU"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","ItemGPS","LOP_H_Shemag_BLU"}; 
		weapons[] = {"rhs_weap_svdp_wd_npz","launch_RPG7_F","rhs_weap_pb_6p9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_wd_npz","launch_RPG7_F","rhs_weap_pb_6p9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_tortila_black";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_wd_npz","rhs_acc_tgpv2","","rhsusf_acc_anpvs27",{"rhs_10Rnd_762x54mmR_7N1",10},{},""},{"launch_RPG7_F","","","rhs_acc_1pn93_2",{"rhs_rpg7_TBG7V_mag",1},{},""},{"rhs_weap_pb_6p9","rhs_acc_6p9_suppressor","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"LOP_U_TAK_Civ_Fatigue_08",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_personalAidKit",1},{"ACE_tourniquet",4},{"ACE_EarPlugs",1},{"ACE_IR_Strobe_Item",1},{"ACE_CableTie",3}}},{"rhs_suspender_AK8_chestrig",{{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_Kestrel4500",1},{"SmokeShell",2,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellBlue",1,1},{"SmokeShellGreen",1,1},{"SmokeShellOrange",1,1},{"rhs_mag_rgd5",2,1}}},{"rhs_tortila_black",{}},"LOP_H_Shemag_BLU","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ASF_2008_VAR_14_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 15"; 
		faction = "BS_O_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_01", "Male01PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_US_Fatigue_10"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_googles_black","LOP_H_Turban"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_googles_black","LOP_H_Turban"}; 
		weapons[] = {"arifle_RPK12_lush_F","rhs_weap_makarov_pm","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_RPK12_lush_F","rhs_weap_makarov_pm","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_cbr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_RPK12_lush_F","suppressor_h_lush_lxWS","rhs_acc_2dpZenit_ris","optic_tws_mg",{"75Rnd_762x39_AK12_Lush_Mag_Tracer_F",75},{},""},{},{"rhs_weap_makarov_pm","","","",{},{},""},{"LOP_U_US_Fatigue_10",{{"ACE_EarPlugs",1}}},{"rhs_suspender_AK8_chestrig",{}},{"B_Kitbag_cbr",{}},"LOP_H_Turban","rhs_googles_black",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ASF_2008_VAR_14_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 15"; 
		faction = "BS_B_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_01", "Male01PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_US_Fatigue_10"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_googles_black","LOP_H_Turban"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_googles_black","LOP_H_Turban"}; 
		weapons[] = {"arifle_RPK12_lush_F","rhs_weap_makarov_pm","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_RPK12_lush_F","rhs_weap_makarov_pm","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_cbr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_RPK12_lush_F","suppressor_h_lush_lxWS","rhs_acc_2dpZenit_ris","optic_tws_mg",{"75Rnd_762x39_AK12_Lush_Mag_Tracer_F",75},{},""},{},{"rhs_weap_makarov_pm","","","",{},{},""},{"LOP_U_US_Fatigue_10",{{"ACE_EarPlugs",1}}},{"rhs_suspender_AK8_chestrig",{}},{"B_Kitbag_cbr",{}},"LOP_H_Turban","rhs_googles_black",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ASF_2008_VAR_14_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 15"; 
		faction = "BS_I_ASF_2008"; 
		identityTypes[] = {"PersianHead_A3_01", "Male01PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_US_Fatigue_10"; 
		linkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_googles_black","LOP_H_Turban"}; 
		respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemGPS","rhs_googles_black","LOP_H_Turban"}; 
		weapons[] = {"arifle_RPK12_lush_F","rhs_weap_makarov_pm","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_RPK12_lush_F","rhs_weap_makarov_pm","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_cbr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_RPK12_lush_F","suppressor_h_lush_lxWS","rhs_acc_2dpZenit_ris","optic_tws_mg",{"75Rnd_762x39_AK12_Lush_Mag_Tracer_F",75},{},""},{},{"rhs_weap_makarov_pm","","","",{},{},""},{"LOP_U_US_Fatigue_10",{{"ACE_EarPlugs",1}}},{"rhs_suspender_AK8_chestrig",{}},{"B_Kitbag_cbr",{}},"LOP_H_Turban","rhs_googles_black",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	class LOP_AM_OPF_Kord;
	class BS_B_ASF_2008_q_t25Dmeo2A:LOP_AM_OPF_Kord {
		scope=2;
		side=1;
		faction="BS_B_ASF_2008";
		crew="BS_B_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_ASF_2008_Rifleman_DT"
		}; 
	}; 
	class BS_O_ASF_2008_q_t25Dmeo2A:LOP_AM_OPF_Kord {
		scope=2;
		side=0;
		faction="BS_O_ASF_2008";
		crew="BS_O_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_ASF_2008_Rifleman_DT"
		}; 
	}; 
	class BS_I_ASF_2008_q_t25Dmeo2A:LOP_AM_OPF_Kord {
		scope=2;
		side=2;
		faction="BS_I_ASF_2008";
		crew="BS_I_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_ASF_2008_Rifleman_DT"
		}; 
	}; 

	class LOP_AM_OPF_Static_M2_MiniTripod;
	class BS_B_ASF_2008_LTsLdMRLJk0:LOP_AM_OPF_Static_M2_MiniTripod {
		scope=2;
		side=1;
		faction="BS_B_ASF_2008";
		crew="BS_B_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_ASF_2008_Rifleman_DT"
		}; 
	}; 
	class BS_O_ASF_2008_LTsLdMRLJk0:LOP_AM_OPF_Static_M2_MiniTripod {
		scope=2;
		side=0;
		faction="BS_O_ASF_2008";
		crew="BS_O_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_ASF_2008_Rifleman_DT"
		}; 
	}; 
	class BS_I_ASF_2008_LTsLdMRLJk0:LOP_AM_OPF_Static_M2_MiniTripod {
		scope=2;
		side=2;
		faction="BS_I_ASF_2008";
		crew="BS_I_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_ASF_2008_Rifleman_DT"
		}; 
	}; 

	class LOP_AM_OPF_NSV_TriPod;
	class BS_B_ASF_2008_j0Ax5pzT5jo:LOP_AM_OPF_NSV_TriPod {
		scope=2;
		side=1;
		faction="BS_B_ASF_2008";
		crew="BS_B_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_ASF_2008_Rifleman_DT"
		}; 
	}; 
	class BS_O_ASF_2008_j0Ax5pzT5jo:LOP_AM_OPF_NSV_TriPod {
		scope=2;
		side=0;
		faction="BS_O_ASF_2008";
		crew="BS_O_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_ASF_2008_Rifleman_DT"
		}; 
	}; 
	class BS_I_ASF_2008_j0Ax5pzT5jo:LOP_AM_OPF_NSV_TriPod {
		scope=2;
		side=2;
		faction="BS_I_ASF_2008";
		crew="BS_I_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_ASF_2008_Rifleman_DT"
		}; 
	}; 

	class LOP_AM_OPF_Static_ZU23;
	class BS_B_ASF_2008_zB8MJjLbFf4:LOP_AM_OPF_Static_ZU23 {
		scope=2;
		side=1;
		faction="BS_B_ASF_2008";
		crew="BS_B_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_ASF_2008_Rifleman_DT"
		}; 
	}; 
	class BS_O_ASF_2008_zB8MJjLbFf4:LOP_AM_OPF_Static_ZU23 {
		scope=2;
		side=0;
		faction="BS_O_ASF_2008";
		crew="BS_O_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_ASF_2008_Rifleman_DT"
		}; 
	}; 
	class BS_I_ASF_2008_zB8MJjLbFf4:LOP_AM_OPF_Static_ZU23 {
		scope=2;
		side=2;
		faction="BS_I_ASF_2008";
		crew="BS_I_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_ASF_2008_Rifleman_DT"
		}; 
	}; 

	class LOP_AM_OPF_Igla_AA_pod;
	class BS_B_ASF_2008_x23vvX2fjks:LOP_AM_OPF_Igla_AA_pod {
		scope=2;
		side=1;
		faction="BS_B_ASF_2008";
		crew="BS_B_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_ASF_2008_Rifleman_DT"
		}; 
	}; 
	class BS_O_ASF_2008_x23vvX2fjks:LOP_AM_OPF_Igla_AA_pod {
		scope=2;
		side=0;
		faction="BS_O_ASF_2008";
		crew="BS_O_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_ASF_2008_Rifleman_DT"
		}; 
	}; 
	class BS_I_ASF_2008_x23vvX2fjks:LOP_AM_OPF_Igla_AA_pod {
		scope=2;
		side=2;
		faction="BS_I_ASF_2008";
		crew="BS_I_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_ASF_2008_Rifleman_DT"
		}; 
	}; 

	class LOP_AM_OPF_BM21;
	class BS_B_ASF_2008_swO9X4aLA5E:LOP_AM_OPF_BM21 {
		scope=2;
		side=1;
		faction="BS_B_ASF_2008";
		crew="BS_B_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_ASF_2008_Rifleman_DT",
			"BS_B_ASF_2008_Rifleman_DT",
			"BS_B_ASF_2008_Rifleman_DT"
		}; 
	}; 
	class BS_O_ASF_2008_swO9X4aLA5E:LOP_AM_OPF_BM21 {
		scope=2;
		side=0;
		faction="BS_O_ASF_2008";
		crew="BS_O_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_ASF_2008_Rifleman_DT",
			"BS_O_ASF_2008_Rifleman_DT",
			"BS_O_ASF_2008_Rifleman_DT"
		}; 
	}; 
	class BS_I_ASF_2008_swO9X4aLA5E:LOP_AM_OPF_BM21 {
		scope=2;
		side=2;
		faction="BS_I_ASF_2008";
		crew="BS_I_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_ASF_2008_Rifleman_DT",
			"BS_I_ASF_2008_Rifleman_DT",
			"BS_I_ASF_2008_Rifleman_DT"
		}; 
	}; 

	class LOP_AM_OPF_Landrover;
	class BS_B_ASF_2008_Dj7M1uz_21Y:LOP_AM_OPF_Landrover {
		scope=2;
		side=1;
		faction="BS_B_ASF_2008";
		crew="BS_B_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_ASF_2008_Rifleman_DT"
		}; 
	}; 
	class BS_O_ASF_2008_Dj7M1uz_21Y:LOP_AM_OPF_Landrover {
		scope=2;
		side=0;
		faction="BS_O_ASF_2008";
		crew="BS_O_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_ASF_2008_Rifleman_DT"
		}; 
	}; 
	class BS_I_ASF_2008_Dj7M1uz_21Y:LOP_AM_OPF_Landrover {
		scope=2;
		side=2;
		faction="BS_I_ASF_2008";
		crew="BS_I_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_ASF_2008_Rifleman_DT"
		}; 
	}; 

	class LOP_AM_OPF_Landrover_M2;
	class BS_B_ASF_2008_iGwxoJcDXNU:LOP_AM_OPF_Landrover_M2 {
		scope=2;
		side=1;
		faction="BS_B_ASF_2008";
		crew="BS_B_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_ASF_2008_Rifleman_DT",
			"BS_B_ASF_2008_Rifleman_DT",
			"BS_B_ASF_2008_Rifleman_DT"
		}; 
	}; 
	class BS_O_ASF_2008_iGwxoJcDXNU:LOP_AM_OPF_Landrover_M2 {
		scope=2;
		side=0;
		faction="BS_O_ASF_2008";
		crew="BS_O_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_ASF_2008_Rifleman_DT",
			"BS_O_ASF_2008_Rifleman_DT",
			"BS_O_ASF_2008_Rifleman_DT"
		}; 
	}; 
	class BS_I_ASF_2008_iGwxoJcDXNU:LOP_AM_OPF_Landrover_M2 {
		scope=2;
		side=2;
		faction="BS_I_ASF_2008";
		crew="BS_I_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_ASF_2008_Rifleman_DT",
			"BS_I_ASF_2008_Rifleman_DT",
			"BS_I_ASF_2008_Rifleman_DT"
		}; 
	}; 

	class LOP_AM_OPF_Landrover_SPG9;
	class BS_B_ASF_2008_lLY_0cZFzOg:LOP_AM_OPF_Landrover_SPG9 {
		scope=2;
		side=1;
		faction="BS_B_ASF_2008";
		crew="BS_B_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_ASF_2008_Rifleman_DT",
			"BS_B_ASF_2008_Rifleman_DT",
			"BS_B_ASF_2008_Rifleman_DT"
		}; 
	}; 
	class BS_O_ASF_2008_lLY_0cZFzOg:LOP_AM_OPF_Landrover_SPG9 {
		scope=2;
		side=0;
		faction="BS_O_ASF_2008";
		crew="BS_O_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_ASF_2008_Rifleman_DT",
			"BS_O_ASF_2008_Rifleman_DT",
			"BS_O_ASF_2008_Rifleman_DT"
		}; 
	}; 
	class BS_I_ASF_2008_lLY_0cZFzOg:LOP_AM_OPF_Landrover_SPG9 {
		scope=2;
		side=2;
		faction="BS_I_ASF_2008";
		crew="BS_I_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_ASF_2008_Rifleman_DT",
			"BS_I_ASF_2008_Rifleman_DT",
			"BS_I_ASF_2008_Rifleman_DT"
		}; 
	}; 

	class LOP_AM_OPF_Nissan_PKM;
	class BS_B_ASF_2008__HCBiqmSo4s:LOP_AM_OPF_Nissan_PKM {
		scope=2;
		side=1;
		faction="BS_B_ASF_2008";
		crew="BS_B_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_ASF_2008_Rifleman_DT",
			"BS_B_ASF_2008_Rifleman_DT"
		}; 
	}; 
	class BS_O_ASF_2008__HCBiqmSo4s:LOP_AM_OPF_Nissan_PKM {
		scope=2;
		side=0;
		faction="BS_O_ASF_2008";
		crew="BS_O_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_ASF_2008_Rifleman_DT",
			"BS_O_ASF_2008_Rifleman_DT"
		}; 
	}; 
	class BS_I_ASF_2008__HCBiqmSo4s:LOP_AM_OPF_Nissan_PKM {
		scope=2;
		side=2;
		faction="BS_I_ASF_2008";
		crew="BS_I_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_ASF_2008_Rifleman_DT",
			"BS_I_ASF_2008_Rifleman_DT"
		}; 
	}; 

	class LOP_AM_OPF_Offroad;
	class BS_B_ASF_2008_ZisPdT6ppHs:LOP_AM_OPF_Offroad {
		scope=2;
		side=1;
		faction="BS_B_ASF_2008";
		crew="BS_B_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_ASF_2008_Rifleman_DT"
		}; 
	}; 
	class BS_O_ASF_2008_ZisPdT6ppHs:LOP_AM_OPF_Offroad {
		scope=2;
		side=0;
		faction="BS_O_ASF_2008";
		crew="BS_O_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_ASF_2008_Rifleman_DT"
		}; 
	}; 
	class BS_I_ASF_2008_ZisPdT6ppHs:LOP_AM_OPF_Offroad {
		scope=2;
		side=2;
		faction="BS_I_ASF_2008";
		crew="BS_I_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_ASF_2008_Rifleman_DT"
		}; 
	}; 

	class LOP_AM_OPF_Offroad_M2;
	class BS_B_ASF_2008_cBSsITq1k0E:LOP_AM_OPF_Offroad_M2 {
		scope=2;
		side=1;
		faction="BS_B_ASF_2008";
		crew="BS_B_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_ASF_2008_Rifleman_DT",
			"BS_B_ASF_2008_Rifleman_DT",
			"BS_B_ASF_2008_Rifleman_DT"
		}; 
	}; 
	class BS_O_ASF_2008_cBSsITq1k0E:LOP_AM_OPF_Offroad_M2 {
		scope=2;
		side=0;
		faction="BS_O_ASF_2008";
		crew="BS_O_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_ASF_2008_Rifleman_DT",
			"BS_O_ASF_2008_Rifleman_DT",
			"BS_O_ASF_2008_Rifleman_DT"
		}; 
	}; 
	class BS_I_ASF_2008_cBSsITq1k0E:LOP_AM_OPF_Offroad_M2 {
		scope=2;
		side=2;
		faction="BS_I_ASF_2008";
		crew="BS_I_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_ASF_2008_Rifleman_DT",
			"BS_I_ASF_2008_Rifleman_DT",
			"BS_I_ASF_2008_Rifleman_DT"
		}; 
	}; 

	class LOP_AM_OPF_Offroad_AT;
	class BS_B_ASF_2008_zkC4ITqroUE:LOP_AM_OPF_Offroad_AT {
		scope=2;
		side=1;
		faction="BS_B_ASF_2008";
		crew="BS_B_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_ASF_2008_Rifleman_DT",
			"BS_B_ASF_2008_Rifleman_DT",
			"BS_B_ASF_2008_Rifleman_DT"
		}; 
	}; 
	class BS_O_ASF_2008_zkC4ITqroUE:LOP_AM_OPF_Offroad_AT {
		scope=2;
		side=0;
		faction="BS_O_ASF_2008";
		crew="BS_O_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_ASF_2008_Rifleman_DT",
			"BS_O_ASF_2008_Rifleman_DT",
			"BS_O_ASF_2008_Rifleman_DT"
		}; 
	}; 
	class BS_I_ASF_2008_zkC4ITqroUE:LOP_AM_OPF_Offroad_AT {
		scope=2;
		side=2;
		faction="BS_I_ASF_2008";
		crew="BS_I_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_ASF_2008_Rifleman_DT",
			"BS_I_ASF_2008_Rifleman_DT",
			"BS_I_ASF_2008_Rifleman_DT"
		}; 
	}; 

	class LOP_AM_OPF_UAZ;
	class BS_B_ASF_2008_cUSitkYN2xk:LOP_AM_OPF_UAZ {
		scope=2;
		side=1;
		faction="BS_B_ASF_2008";
		crew="BS_B_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_ASF_2008_Rifleman_DT"
		}; 
	}; 
	class BS_O_ASF_2008_cUSitkYN2xk:LOP_AM_OPF_UAZ {
		scope=2;
		side=0;
		faction="BS_O_ASF_2008";
		crew="BS_O_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_ASF_2008_Rifleman_DT"
		}; 
	}; 
	class BS_I_ASF_2008_cUSitkYN2xk:LOP_AM_OPF_UAZ {
		scope=2;
		side=2;
		faction="BS_I_ASF_2008";
		crew="BS_I_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_ASF_2008_Rifleman_DT"
		}; 
	}; 

	class LOP_AM_OPF_UAZ_AGS;
	class BS_B_ASF_2008_w2G9ax1X3Rc:LOP_AM_OPF_UAZ_AGS {
		scope=2;
		side=1;
		faction="BS_B_ASF_2008";
		crew="BS_B_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_ASF_2008_Rifleman_DT",
			"BS_B_ASF_2008_Rifleman_DT",
			"BS_B_ASF_2008_Rifleman_DT"
		}; 
	}; 
	class BS_O_ASF_2008_w2G9ax1X3Rc:LOP_AM_OPF_UAZ_AGS {
		scope=2;
		side=0;
		faction="BS_O_ASF_2008";
		crew="BS_O_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_ASF_2008_Rifleman_DT",
			"BS_O_ASF_2008_Rifleman_DT",
			"BS_O_ASF_2008_Rifleman_DT"
		}; 
	}; 
	class BS_I_ASF_2008_w2G9ax1X3Rc:LOP_AM_OPF_UAZ_AGS {
		scope=2;
		side=2;
		faction="BS_I_ASF_2008";
		crew="BS_I_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_ASF_2008_Rifleman_DT",
			"BS_I_ASF_2008_Rifleman_DT",
			"BS_I_ASF_2008_Rifleman_DT"
		}; 
	}; 

	class LOP_AM_OPF_UAZ_DshKM;
	class BS_B_ASF_2008_kYA184CCUOg:LOP_AM_OPF_UAZ_DshKM {
		scope=2;
		side=1;
		faction="BS_B_ASF_2008";
		crew="BS_B_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_ASF_2008_Rifleman_DT",
			"BS_B_ASF_2008_Rifleman_DT",
			"BS_B_ASF_2008_Rifleman_DT"
		}; 
	}; 
	class BS_O_ASF_2008_kYA184CCUOg:LOP_AM_OPF_UAZ_DshKM {
		scope=2;
		side=0;
		faction="BS_O_ASF_2008";
		crew="BS_O_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_ASF_2008_Rifleman_DT",
			"BS_O_ASF_2008_Rifleman_DT",
			"BS_O_ASF_2008_Rifleman_DT"
		}; 
	}; 
	class BS_I_ASF_2008_kYA184CCUOg:LOP_AM_OPF_UAZ_DshKM {
		scope=2;
		side=2;
		faction="BS_I_ASF_2008";
		crew="BS_I_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_ASF_2008_Rifleman_DT",
			"BS_I_ASF_2008_Rifleman_DT",
			"BS_I_ASF_2008_Rifleman_DT"
		}; 
	}; 

	class LOP_AM_OPF_UAZ_Open;
	class BS_B_ASF_2008_so0Vuc7wfUA:LOP_AM_OPF_UAZ_Open {
		scope=2;
		side=1;
		faction="BS_B_ASF_2008";
		crew="BS_B_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_ASF_2008_Rifleman_DT"
		}; 
	}; 
	class BS_O_ASF_2008_so0Vuc7wfUA:LOP_AM_OPF_UAZ_Open {
		scope=2;
		side=0;
		faction="BS_O_ASF_2008";
		crew="BS_O_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_ASF_2008_Rifleman_DT"
		}; 
	}; 
	class BS_I_ASF_2008_so0Vuc7wfUA:LOP_AM_OPF_UAZ_Open {
		scope=2;
		side=2;
		faction="BS_I_ASF_2008";
		crew="BS_I_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_ASF_2008_Rifleman_DT"
		}; 
	}; 

	class LOP_AM_OPF_UAZ_SPG;
	class BS_B_ASF_2008_QjCisR2pjZI:LOP_AM_OPF_UAZ_SPG {
		scope=2;
		side=1;
		faction="BS_B_ASF_2008";
		crew="BS_B_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_ASF_2008_Rifleman_DT",
			"BS_B_ASF_2008_Rifleman_DT"
		}; 
	}; 
	class BS_O_ASF_2008_QjCisR2pjZI:LOP_AM_OPF_UAZ_SPG {
		scope=2;
		side=0;
		faction="BS_O_ASF_2008";
		crew="BS_O_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_ASF_2008_Rifleman_DT",
			"BS_O_ASF_2008_Rifleman_DT"
		}; 
	}; 
	class BS_I_ASF_2008_QjCisR2pjZI:LOP_AM_OPF_UAZ_SPG {
		scope=2;
		side=2;
		faction="BS_I_ASF_2008";
		crew="BS_I_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_ASF_2008_Rifleman_DT",
			"BS_I_ASF_2008_Rifleman_DT"
		}; 
	}; 

	class LOP_AM_OPF_BTR60;
	class BS_B_ASF_2008_kwIFoRseAxQ:LOP_AM_OPF_BTR60 {
		scope=2;
		side=1;
		faction="BS_B_ASF_2008";
		crew="BS_B_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_ASF_2008_Rifleman_DT",
			"BS_B_ASF_2008_Rifleman_DT",
			"BS_B_ASF_2008_Rifleman_DT",
			"BS_B_ASF_2008_Rifleman_DT",
			"BS_B_ASF_2008_Rifleman_DT",
			"BS_B_ASF_2008_Rifleman_DT",
			"BS_B_ASF_2008_Rifleman_DT",
			"BS_B_ASF_2008_Rifleman_DT",
			"BS_B_ASF_2008_Rifleman_DT",
			"BS_B_ASF_2008_Rifleman_DT",
			"BS_B_ASF_2008_Rifleman_DT",
			"BS_B_ASF_2008_Rifleman_DT",
			"BS_B_ASF_2008_Rifleman_DT",
			"BS_B_ASF_2008_Rifleman_DT",
			"BS_B_ASF_2008_Rifleman_DT",
			"BS_B_ASF_2008_Rifleman_DT",
			"BS_B_ASF_2008_Rifleman_DT",
			"BS_B_ASF_2008_Rifleman_DT",
			"BS_B_ASF_2008_Rifleman_DT"
		}; 
	}; 
	class BS_O_ASF_2008_kwIFoRseAxQ:LOP_AM_OPF_BTR60 {
		scope=2;
		side=0;
		faction="BS_O_ASF_2008";
		crew="BS_O_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_ASF_2008_Rifleman_DT",
			"BS_O_ASF_2008_Rifleman_DT",
			"BS_O_ASF_2008_Rifleman_DT",
			"BS_O_ASF_2008_Rifleman_DT",
			"BS_O_ASF_2008_Rifleman_DT",
			"BS_O_ASF_2008_Rifleman_DT",
			"BS_O_ASF_2008_Rifleman_DT",
			"BS_O_ASF_2008_Rifleman_DT",
			"BS_O_ASF_2008_Rifleman_DT",
			"BS_O_ASF_2008_Rifleman_DT",
			"BS_O_ASF_2008_Rifleman_DT",
			"BS_O_ASF_2008_Rifleman_DT",
			"BS_O_ASF_2008_Rifleman_DT",
			"BS_O_ASF_2008_Rifleman_DT",
			"BS_O_ASF_2008_Rifleman_DT",
			"BS_O_ASF_2008_Rifleman_DT",
			"BS_O_ASF_2008_Rifleman_DT",
			"BS_O_ASF_2008_Rifleman_DT",
			"BS_O_ASF_2008_Rifleman_DT"
		}; 
	}; 
	class BS_I_ASF_2008_kwIFoRseAxQ:LOP_AM_OPF_BTR60 {
		scope=2;
		side=2;
		faction="BS_I_ASF_2008";
		crew="BS_I_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_ASF_2008_Rifleman_DT",
			"BS_I_ASF_2008_Rifleman_DT",
			"BS_I_ASF_2008_Rifleman_DT",
			"BS_I_ASF_2008_Rifleman_DT",
			"BS_I_ASF_2008_Rifleman_DT",
			"BS_I_ASF_2008_Rifleman_DT",
			"BS_I_ASF_2008_Rifleman_DT",
			"BS_I_ASF_2008_Rifleman_DT",
			"BS_I_ASF_2008_Rifleman_DT",
			"BS_I_ASF_2008_Rifleman_DT",
			"BS_I_ASF_2008_Rifleman_DT",
			"BS_I_ASF_2008_Rifleman_DT",
			"BS_I_ASF_2008_Rifleman_DT",
			"BS_I_ASF_2008_Rifleman_DT",
			"BS_I_ASF_2008_Rifleman_DT",
			"BS_I_ASF_2008_Rifleman_DT",
			"BS_I_ASF_2008_Rifleman_DT",
			"BS_I_ASF_2008_Rifleman_DT",
			"BS_I_ASF_2008_Rifleman_DT"
		}; 
	}; 

	class LOP_AFR_OPF_T72BB;
	class BS_B_ASF_2008_4TOvzE0xkO8:LOP_AFR_OPF_T72BB {
		scope=2;
		side=1;
		faction="BS_B_ASF_2008";
		crew="BS_B_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_ASF_2008_Rifleman_DT",
			"BS_B_ASF_2008_Rifleman_DT"
		}; 
	}; 
	class BS_O_ASF_2008_4TOvzE0xkO8:LOP_AFR_OPF_T72BB {
		scope=2;
		side=0;
		faction="BS_O_ASF_2008";
		crew="BS_O_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_ASF_2008_Rifleman_DT",
			"BS_O_ASF_2008_Rifleman_DT"
		}; 
	}; 
	class BS_I_ASF_2008_4TOvzE0xkO8:LOP_AFR_OPF_T72BB {
		scope=2;
		side=2;
		faction="BS_I_ASF_2008";
		crew="BS_I_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_ASF_2008_Rifleman_DT",
			"BS_I_ASF_2008_Rifleman_DT"
		}; 
	}; 

	class LOP_AM_OPF_Static_M2;
	class BS_B_ASF_2008_lflPRxmSIps:LOP_AM_OPF_Static_M2 {
		scope=2;
		side=1;
		faction="BS_B_ASF_2008";
		crew="BS_B_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_ASF_2008_Rifleman_DT"
		}; 
	}; 
	class BS_O_ASF_2008_lflPRxmSIps:LOP_AM_OPF_Static_M2 {
		scope=2;
		side=0;
		faction="BS_O_ASF_2008";
		crew="BS_O_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_ASF_2008_Rifleman_DT"
		}; 
	}; 
	class BS_I_ASF_2008_lflPRxmSIps:LOP_AM_OPF_Static_M2 {
		scope=2;
		side=2;
		faction="BS_I_ASF_2008";
		crew="BS_I_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_ASF_2008_Rifleman_DT"
		}; 
	}; 

	class LOP_AM_OPF_Kord_High;
	class BS_B_ASF_2008_0MXi15VnAbo:LOP_AM_OPF_Kord_High {
		scope=2;
		side=1;
		faction="BS_B_ASF_2008";
		crew="BS_B_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_ASF_2008_Rifleman_DT"
		}; 
	}; 
	class BS_O_ASF_2008_0MXi15VnAbo:LOP_AM_OPF_Kord_High {
		scope=2;
		side=0;
		faction="BS_O_ASF_2008";
		crew="BS_O_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_ASF_2008_Rifleman_DT"
		}; 
	}; 
	class BS_I_ASF_2008_0MXi15VnAbo:LOP_AM_OPF_Kord_High {
		scope=2;
		side=2;
		faction="BS_I_ASF_2008";
		crew="BS_I_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_ASF_2008_Rifleman_DT"
		}; 
	}; 

	class LOP_AM_OPF_Static_DSHKM;
	class BS_B_ASF_2008_sUYkVubzOlo:LOP_AM_OPF_Static_DSHKM {
		scope=2;
		side=1;
		faction="BS_B_ASF_2008";
		crew="BS_B_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_ASF_2008_Rifleman_DT"
		}; 
	}; 
	class BS_O_ASF_2008_sUYkVubzOlo:LOP_AM_OPF_Static_DSHKM {
		scope=2;
		side=0;
		faction="BS_O_ASF_2008";
		crew="BS_O_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_ASF_2008_Rifleman_DT"
		}; 
	}; 
	class BS_I_ASF_2008_sUYkVubzOlo:LOP_AM_OPF_Static_DSHKM {
		scope=2;
		side=2;
		faction="BS_I_ASF_2008";
		crew="BS_I_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_ASF_2008_Rifleman_DT"
		}; 
	}; 

	class O_Mortar_01_F;
	class BS_B_ASF_2008_nrJW8am0db4:O_Mortar_01_F {
		scope=2;
		side=1;
		faction="BS_B_ASF_2008";
		crew="BS_B_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_ASF_2008_Rifleman_DT"
		}; 
	}; 
	class BS_O_ASF_2008_nrJW8am0db4:O_Mortar_01_F {
		scope=2;
		side=0;
		faction="BS_O_ASF_2008";
		crew="BS_O_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_ASF_2008_Rifleman_DT"
		}; 
	}; 
	class BS_I_ASF_2008_nrJW8am0db4:O_Mortar_01_F {
		scope=2;
		side=2;
		faction="BS_I_ASF_2008";
		crew="BS_I_ASF_2008_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_ASF_2008_Rifleman_DT"
		}; 
	}; 
};
class CfgGroups { 
	class East { 
		class ASF_2008 { 
			name="Atropian - Separatist Forces (2008)";
			class Infantry {
				name="Infantry";
				class BS_O_ASF_2008_Fireteam_WL {
					name="Fireteam (Woodland)";
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					side=0;
					faction="BS_O_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_GL_WL";
					};
				};
				class BS_O_ASF_2008_Fireteam_WT {
					name="Fireteam (Winter)";
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					side=0;
					faction="BS_O_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_GL_WT";
					};
				};
				class BS_O_ASF_2008_Fireteam_DT {
					name="Fireteam (Desert)";
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					side=0;
					faction="BS_O_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_DT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_GL_DT";
					};
				};
				class BS_O_ASF_2008_Squad_WL {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Squad (Woodland)";
					side=0;
					faction="BS_O_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_GL_WL";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WL";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WL";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WL";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_GL_WL";
					};
				};
				class BS_O_ASF_2008_Squad_WT {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="Squad (Winter)";
					side=0;
					faction="BS_O_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_GL_WT";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WT";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WT";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WT";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_GL_WT";
					};
				};
				class BS_O_ASF_2008_Squad_DT {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="Squad (Desert)";
					side=0;
					faction="BS_O_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_DT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_GL_DT";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_DT";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_DT";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_DT";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_GL_DT";
					};
				};
				class BS_O_ASF_2008_AT_WL {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Anti-Tank (Woodland)";
					side=0;
					faction="BS_O_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WL";
					};
				};
				class BS_O_ASF_2008_AT_WT {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="Anti-Tank (Winter)";
					side=0;
					faction="BS_O_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WT";
					};
				};
				class BS_O_ASF_2008_AT_DT {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="Anti-Tank (Desert)";
					side=0;
					faction="BS_O_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_DT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_DT";
					};
				};
			};
			class Motorized {
				name="Mechanize Infantry";
				class BS_O_ASF_2008_LightVehicle_WL_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Land Rover (M2) (Woodland)";
					side=0;
					faction="BS_O_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_ASF_2008_iGwxoJcDXNU";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WL";
					};
				};
				class BS_O_ASF_2008_LightVehicle_WT_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="Land Rover (M2) (Winter)";
					side=0;
					faction="BS_O_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_ASF_2008_iGwxoJcDXNU";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WT";
					};
				};
				class BS_O_ASF_2008_LightVehicle_DT_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="Land Rover (M2) (Desert)";
					side=0;
					faction="BS_O_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_ASF_2008_iGwxoJcDXNU";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_DT";
					};
				};
				class BS_O_ASF_2008_LightVehicle_WL_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Land Rover (SPG-9) (Woodland)";
					side=0;
					faction="BS_O_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_ASF_2008_lLY_0cZFzOg";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WL";
					};
				};
				class BS_O_ASF_2008_LightVehicle_WT_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="Land Rover (SPG-9) (Winter)";
					side=0;
					faction="BS_O_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_ASF_2008_lLY_0cZFzOg";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WT";
					};
				};
				class BS_O_ASF_2008_LightVehicle_DT_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="Land Rover (SPG-9) (Desert)";
					side=0;
					faction="BS_O_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_ASF_2008_lLY_0cZFzOg";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_DT";
					};
				};
				class BS_O_ASF_2008_LightVehicle_WL_2 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Nissan (PKM) (Woodland)";
					side=0;
					faction="BS_O_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_ASF_2008__HCBiqmSo4s";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WL";
					};
				};
				class BS_O_ASF_2008_LightVehicle_WT_2 {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="Nissan (PKM) (Winter)";
					side=0;
					faction="BS_O_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_ASF_2008__HCBiqmSo4s";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WT";
					};
				};
				class BS_O_ASF_2008_LightVehicle_DT_2 {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="Nissan (PKM) (Desert)";
					side=0;
					faction="BS_O_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_ASF_2008__HCBiqmSo4s";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_DT";
					};
				};
				class BS_O_ASF_2008_LightVehicle_WL_3 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Offroad (M2) (Woodland)";
					side=0;
					faction="BS_O_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_ASF_2008_cBSsITq1k0E";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WL";
					};
				};
				class BS_O_ASF_2008_LightVehicle_WT_3 {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="Offroad (M2) (Winter)";
					side=0;
					faction="BS_O_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_ASF_2008_cBSsITq1k0E";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WT";
					};
				};
				class BS_O_ASF_2008_LightVehicle_DT_3 {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="Offroad (M2) (Desert)";
					side=0;
					faction="BS_O_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_ASF_2008_cBSsITq1k0E";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_DT";
					};
				};
				class BS_O_ASF_2008_LightVehicle_WL_4 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Offroad (SPG-9) (Woodland)";
					side=0;
					faction="BS_O_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_ASF_2008_zkC4ITqroUE";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WL";
					};
				};
				class BS_O_ASF_2008_LightVehicle_WT_4 {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="Offroad (SPG-9) (Winter)";
					side=0;
					faction="BS_O_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_ASF_2008_zkC4ITqroUE";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WT";
					};
				};
				class BS_O_ASF_2008_LightVehicle_DT_4 {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="Offroad (SPG-9) (Desert)";
					side=0;
					faction="BS_O_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_ASF_2008_zkC4ITqroUE";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_DT";
					};
				};
				class BS_O_ASF_2008_LightVehicle_WL_5 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="UAZ-3151 (AGS-30) (Woodland)";
					side=0;
					faction="BS_O_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_ASF_2008_w2G9ax1X3Rc";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WL";
					};
				};
				class BS_O_ASF_2008_LightVehicle_WT_5 {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="UAZ-3151 (AGS-30) (Winter)";
					side=0;
					faction="BS_O_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_ASF_2008_w2G9ax1X3Rc";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WT";
					};
				};
				class BS_O_ASF_2008_LightVehicle_DT_5 {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="UAZ-3151 (AGS-30) (Desert)";
					side=0;
					faction="BS_O_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_ASF_2008_w2G9ax1X3Rc";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_DT";
					};
				};
				class BS_O_ASF_2008_LightVehicle_WL_6 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="UAZ-3151 (DShKM) (Woodland)";
					side=0;
					faction="BS_O_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_ASF_2008_kYA184CCUOg";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WL";
					};
				};
				class BS_O_ASF_2008_LightVehicle_WT_6 {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="UAZ-3151 (DShKM) (Winter)";
					side=0;
					faction="BS_O_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_ASF_2008_kYA184CCUOg";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WT";
					};
				};
				class BS_O_ASF_2008_LightVehicle_DT_6 {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="UAZ-3151 (DShKM) (Desert)";
					side=0;
					faction="BS_O_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_ASF_2008_kYA184CCUOg";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_DT";
					};
				};
				class BS_O_ASF_2008_LightVehicle_WL_7 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="UAZ-3151 (SPG-9) (Woodland)";
					side=0;
					faction="BS_O_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_ASF_2008_QjCisR2pjZI";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WL";
					};
				};
				class BS_O_ASF_2008_LightVehicle_WT_7 {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="UAZ-3151 (SPG-9) (Winter)";
					side=0;
					faction="BS_O_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_ASF_2008_QjCisR2pjZI";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WT";
					};
				};
				class BS_O_ASF_2008_LightVehicle_DT_7 {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="UAZ-3151 (SPG-9) (Desert)";
					side=0;
					faction="BS_O_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_ASF_2008_QjCisR2pjZI";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_DT";
					};
				};
				class BS_O_ASF_2008_LightVehicle_WL_8 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="BTR-60PB (Woodland)";
					side=0;
					faction="BS_O_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_ASF_2008_kwIFoRseAxQ";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WL";
					};
				};
				class BS_O_ASF_2008_LightVehicle_WT_8 {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="BTR-60PB (Winter)";
					side=0;
					faction="BS_O_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_ASF_2008_kwIFoRseAxQ";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WT";
					};
				};
				class BS_O_ASF_2008_LightVehicle_DT_8 {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="BTR-60PB (Desert)";
					side=0;
					faction="BS_O_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_ASF_2008_kwIFoRseAxQ";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_DT";
					};
				};
				class BS_O_ASF_2008_Tank_WL_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="BM-21 (Woodland) ";
					side=0;
					faction="BS_O_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_ASF_2008_swO9X4aLA5E";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WL";
					};
				};
				class BS_O_ASF_2008_Tank_WT_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="BM-21 (Winter) ";
					side=0;
					faction="BS_O_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_ASF_2008_swO9X4aLA5E";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WT";
					};
				};
				class BS_O_ASF_2008_Tank_DT_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="BM-21 (Desert) ";
					side=0;
					faction="BS_O_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_ASF_2008_swO9X4aLA5E";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_DT";
					};
				};
				class BS_O_ASF_2008_Tank_WL_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="T-72B (obr. 1985g.) (Woodland) ";
					side=0;
					faction="BS_O_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_ASF_2008_4TOvzE0xkO8";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WL";
					};
				};
				class BS_O_ASF_2008_Tank_WT_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="T-72B (obr. 1985g.) (Winter) ";
					side=0;
					faction="BS_O_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_ASF_2008_4TOvzE0xkO8";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_WT";
					};
				};
				class BS_O_ASF_2008_Tank_DT_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="T-72B (obr. 1985g.) (Desert) ";
					side=0;
					faction="BS_O_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_ASF_2008_4TOvzE0xkO8";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ASF_2008_AR_DT";
					};
				};
			};
		};
	};
	class Indep { 
		class ASF_2008 { 
			name="Atropian - Separatist Forces (2008)";
			class Infantry {
				name="Infantry";
				class BS_I_ASF_2008_Fireteam_WL {
					name="Fireteam (Woodland)";
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					side=2;
					faction="BS_I_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_GL_WL";
					};
				};
				class BS_I_ASF_2008_Fireteam_WT {
					name="Fireteam (Winter)";
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					side=2;
					faction="BS_I_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_GL_WT";
					};
				};
				class BS_I_ASF_2008_Fireteam_DT {
					name="Fireteam (Desert)";
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					side=2;
					faction="BS_I_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_DT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_GL_DT";
					};
				};
				class BS_I_ASF_2008_Squad_WL {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Squad (Woodland)";
					side=2;
					faction="BS_I_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_GL_WL";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WL";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WL";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WL";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_GL_WL";
					};
				};
				class BS_I_ASF_2008_Squad_WT {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="Squad (Winter)";
					side=2;
					faction="BS_I_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_GL_WT";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WT";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WT";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WT";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_GL_WT";
					};
				};
				class BS_I_ASF_2008_Squad_DT {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="Squad (Desert)";
					side=2;
					faction="BS_I_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_DT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_GL_DT";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_DT";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_DT";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_DT";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_GL_DT";
					};
				};
				class BS_I_ASF_2008_AT_WL {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Anti-Tank (Woodland)";
					side=2;
					faction="BS_I_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WL";
					};
				};
				class BS_I_ASF_2008_AT_WT {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="Anti-Tank (Winter)";
					side=2;
					faction="BS_I_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WT";
					};
				};
				class BS_I_ASF_2008_AT_DT {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="Anti-Tank (Desert)";
					side=2;
					faction="BS_I_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_DT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_DT";
					};
				};
			};
			class Motorized {
				name="Mechanize Infantry";
				class BS_I_ASF_2008_LightVehicle_WL_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Land Rover (M2) (Woodland)";
					side=2;
					faction="BS_I_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ASF_2008_iGwxoJcDXNU";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WL";
					};
				};
				class BS_I_ASF_2008_LightVehicle_WT_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="Land Rover (M2) (Winter)";
					side=2;
					faction="BS_I_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ASF_2008_iGwxoJcDXNU";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WT";
					};
				};
				class BS_I_ASF_2008_LightVehicle_DT_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="Land Rover (M2) (Desert)";
					side=2;
					faction="BS_I_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ASF_2008_iGwxoJcDXNU";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_DT";
					};
				};
				class BS_I_ASF_2008_LightVehicle_WL_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Land Rover (SPG-9) (Woodland)";
					side=2;
					faction="BS_I_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ASF_2008_lLY_0cZFzOg";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WL";
					};
				};
				class BS_I_ASF_2008_LightVehicle_WT_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="Land Rover (SPG-9) (Winter)";
					side=2;
					faction="BS_I_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ASF_2008_lLY_0cZFzOg";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WT";
					};
				};
				class BS_I_ASF_2008_LightVehicle_DT_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="Land Rover (SPG-9) (Desert)";
					side=2;
					faction="BS_I_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ASF_2008_lLY_0cZFzOg";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_DT";
					};
				};
				class BS_I_ASF_2008_LightVehicle_WL_2 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Nissan (PKM) (Woodland)";
					side=2;
					faction="BS_I_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ASF_2008__HCBiqmSo4s";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WL";
					};
				};
				class BS_I_ASF_2008_LightVehicle_WT_2 {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="Nissan (PKM) (Winter)";
					side=2;
					faction="BS_I_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ASF_2008__HCBiqmSo4s";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WT";
					};
				};
				class BS_I_ASF_2008_LightVehicle_DT_2 {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="Nissan (PKM) (Desert)";
					side=2;
					faction="BS_I_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ASF_2008__HCBiqmSo4s";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_DT";
					};
				};
				class BS_I_ASF_2008_LightVehicle_WL_3 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Offroad (M2) (Woodland)";
					side=2;
					faction="BS_I_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ASF_2008_cBSsITq1k0E";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WL";
					};
				};
				class BS_I_ASF_2008_LightVehicle_WT_3 {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="Offroad (M2) (Winter)";
					side=2;
					faction="BS_I_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ASF_2008_cBSsITq1k0E";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WT";
					};
				};
				class BS_I_ASF_2008_LightVehicle_DT_3 {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="Offroad (M2) (Desert)";
					side=2;
					faction="BS_I_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ASF_2008_cBSsITq1k0E";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_DT";
					};
				};
				class BS_I_ASF_2008_LightVehicle_WL_4 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Offroad (SPG-9) (Woodland)";
					side=2;
					faction="BS_I_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ASF_2008_zkC4ITqroUE";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WL";
					};
				};
				class BS_I_ASF_2008_LightVehicle_WT_4 {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="Offroad (SPG-9) (Winter)";
					side=2;
					faction="BS_I_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ASF_2008_zkC4ITqroUE";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WT";
					};
				};
				class BS_I_ASF_2008_LightVehicle_DT_4 {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="Offroad (SPG-9) (Desert)";
					side=2;
					faction="BS_I_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ASF_2008_zkC4ITqroUE";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_DT";
					};
				};
				class BS_I_ASF_2008_LightVehicle_WL_5 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="UAZ-3151 (AGS-30) (Woodland)";
					side=2;
					faction="BS_I_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ASF_2008_w2G9ax1X3Rc";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WL";
					};
				};
				class BS_I_ASF_2008_LightVehicle_WT_5 {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="UAZ-3151 (AGS-30) (Winter)";
					side=2;
					faction="BS_I_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ASF_2008_w2G9ax1X3Rc";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WT";
					};
				};
				class BS_I_ASF_2008_LightVehicle_DT_5 {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="UAZ-3151 (AGS-30) (Desert)";
					side=2;
					faction="BS_I_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ASF_2008_w2G9ax1X3Rc";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_DT";
					};
				};
				class BS_I_ASF_2008_LightVehicle_WL_6 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="UAZ-3151 (DShKM) (Woodland)";
					side=2;
					faction="BS_I_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ASF_2008_kYA184CCUOg";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WL";
					};
				};
				class BS_I_ASF_2008_LightVehicle_WT_6 {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="UAZ-3151 (DShKM) (Winter)";
					side=2;
					faction="BS_I_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ASF_2008_kYA184CCUOg";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WT";
					};
				};
				class BS_I_ASF_2008_LightVehicle_DT_6 {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="UAZ-3151 (DShKM) (Desert)";
					side=2;
					faction="BS_I_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ASF_2008_kYA184CCUOg";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_DT";
					};
				};
				class BS_I_ASF_2008_LightVehicle_WL_7 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="UAZ-3151 (SPG-9) (Woodland)";
					side=2;
					faction="BS_I_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ASF_2008_QjCisR2pjZI";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WL";
					};
				};
				class BS_I_ASF_2008_LightVehicle_WT_7 {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="UAZ-3151 (SPG-9) (Winter)";
					side=2;
					faction="BS_I_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ASF_2008_QjCisR2pjZI";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WT";
					};
				};
				class BS_I_ASF_2008_LightVehicle_DT_7 {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="UAZ-3151 (SPG-9) (Desert)";
					side=2;
					faction="BS_I_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ASF_2008_QjCisR2pjZI";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_DT";
					};
				};
				class BS_I_ASF_2008_LightVehicle_WL_8 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="BTR-60PB (Woodland)";
					side=2;
					faction="BS_I_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ASF_2008_kwIFoRseAxQ";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WL";
					};
				};
				class BS_I_ASF_2008_LightVehicle_WT_8 {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="BTR-60PB (Winter)";
					side=2;
					faction="BS_I_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ASF_2008_kwIFoRseAxQ";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WT";
					};
				};
				class BS_I_ASF_2008_LightVehicle_DT_8 {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="BTR-60PB (Desert)";
					side=2;
					faction="BS_I_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ASF_2008_kwIFoRseAxQ";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_DT";
					};
				};
				class BS_I_ASF_2008_Tank_WL_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="BM-21 (Woodland) ";
					side=2;
					faction="BS_I_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ASF_2008_swO9X4aLA5E";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WL";
					};
				};
				class BS_I_ASF_2008_Tank_WT_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="BM-21 (Winter) ";
					side=2;
					faction="BS_I_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ASF_2008_swO9X4aLA5E";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WT";
					};
				};
				class BS_I_ASF_2008_Tank_DT_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="BM-21 (Desert) ";
					side=2;
					faction="BS_I_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ASF_2008_swO9X4aLA5E";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_DT";
					};
				};
				class BS_I_ASF_2008_Tank_WL_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="T-72B (obr. 1985g.) (Woodland) ";
					side=2;
					faction="BS_I_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ASF_2008_4TOvzE0xkO8";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WL";
					};
				};
				class BS_I_ASF_2008_Tank_WT_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="T-72B (obr. 1985g.) (Winter) ";
					side=2;
					faction="BS_I_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ASF_2008_4TOvzE0xkO8";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_WT";
					};
				};
				class BS_I_ASF_2008_Tank_DT_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="T-72B (obr. 1985g.) (Desert) ";
					side=2;
					faction="BS_I_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ASF_2008_4TOvzE0xkO8";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_ASF_2008_AR_DT";
					};
				};
			};
		};
	};
	class West { 
		class ASF_2008 { 
			name="Atropian - Separatist Forces (2008)";
			class Infantry {
				name="Infantry";
				class BS_B_ASF_2008_Fireteam_WL {
					name="Fireteam (Woodland)";
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					side=1;
					faction="BS_B_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_GL_WL";
					};
				};
				class BS_B_ASF_2008_Fireteam_WT {
					name="Fireteam (Winter)";
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					side=1;
					faction="BS_B_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_GL_WT";
					};
				};
				class BS_B_ASF_2008_Fireteam_DT {
					name="Fireteam (Desert)";
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					side=1;
					faction="BS_B_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_DT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_GL_DT";
					};
				};
				class BS_B_ASF_2008_Squad_WL {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Squad (Woodland)";
					side=1;
					faction="BS_B_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_GL_WL";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WL";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WL";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WL";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_GL_WL";
					};
				};
				class BS_B_ASF_2008_Squad_WT {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="Squad (Winter)";
					side=1;
					faction="BS_B_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_GL_WT";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WT";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WT";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WT";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_GL_WT";
					};
				};
				class BS_B_ASF_2008_Squad_DT {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="Squad (Desert)";
					side=1;
					faction="BS_B_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_DT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_GL_DT";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_DT";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_DT";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_DT";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_GL_DT";
					};
				};
				class BS_B_ASF_2008_AT_WL {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Anti-Tank (Woodland)";
					side=1;
					faction="BS_B_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WL";
					};
				};
				class BS_B_ASF_2008_AT_WT {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="Anti-Tank (Winter)";
					side=1;
					faction="BS_B_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WT";
					};
				};
				class BS_B_ASF_2008_AT_DT {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="Anti-Tank (Desert)";
					side=1;
					faction="BS_B_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_DT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_DT";
					};
				};
			};
			class Motorized {
				name="Mechanize Infantry";
				class BS_B_ASF_2008_LightVehicle_WL_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Land Rover (M2) (Woodland)";
					side=1;
					faction="BS_B_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_iGwxoJcDXNU";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WL";
					};
				};
				class BS_B_ASF_2008_LightVehicle_WT_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="Land Rover (M2) (Winter)";
					side=1;
					faction="BS_B_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_iGwxoJcDXNU";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WT";
					};
				};
				class BS_B_ASF_2008_LightVehicle_DT_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="Land Rover (M2) (Desert)";
					side=1;
					faction="BS_B_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_iGwxoJcDXNU";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_DT";
					};
				};
				class BS_B_ASF_2008_LightVehicle_WL_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Land Rover (SPG-9) (Woodland)";
					side=1;
					faction="BS_B_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_lLY_0cZFzOg";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WL";
					};
				};
				class BS_B_ASF_2008_LightVehicle_WT_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="Land Rover (SPG-9) (Winter)";
					side=1;
					faction="BS_B_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_lLY_0cZFzOg";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WT";
					};
				};
				class BS_B_ASF_2008_LightVehicle_DT_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="Land Rover (SPG-9) (Desert)";
					side=1;
					faction="BS_B_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_lLY_0cZFzOg";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_DT";
					};
				};
				class BS_B_ASF_2008_LightVehicle_WL_2 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Nissan (PKM) (Woodland)";
					side=1;
					faction="BS_B_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008__HCBiqmSo4s";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WL";
					};
				};
				class BS_B_ASF_2008_LightVehicle_WT_2 {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="Nissan (PKM) (Winter)";
					side=1;
					faction="BS_B_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008__HCBiqmSo4s";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WT";
					};
				};
				class BS_B_ASF_2008_LightVehicle_DT_2 {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="Nissan (PKM) (Desert)";
					side=1;
					faction="BS_B_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008__HCBiqmSo4s";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_DT";
					};
				};
				class BS_B_ASF_2008_LightVehicle_WL_3 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Offroad (M2) (Woodland)";
					side=1;
					faction="BS_B_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_cBSsITq1k0E";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WL";
					};
				};
				class BS_B_ASF_2008_LightVehicle_WT_3 {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="Offroad (M2) (Winter)";
					side=1;
					faction="BS_B_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_cBSsITq1k0E";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WT";
					};
				};
				class BS_B_ASF_2008_LightVehicle_DT_3 {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="Offroad (M2) (Desert)";
					side=1;
					faction="BS_B_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_cBSsITq1k0E";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_DT";
					};
				};
				class BS_B_ASF_2008_LightVehicle_WL_4 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Offroad (SPG-9) (Woodland)";
					side=1;
					faction="BS_B_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_zkC4ITqroUE";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WL";
					};
				};
				class BS_B_ASF_2008_LightVehicle_WT_4 {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="Offroad (SPG-9) (Winter)";
					side=1;
					faction="BS_B_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_zkC4ITqroUE";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WT";
					};
				};
				class BS_B_ASF_2008_LightVehicle_DT_4 {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="Offroad (SPG-9) (Desert)";
					side=1;
					faction="BS_B_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_zkC4ITqroUE";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_DT";
					};
				};
				class BS_B_ASF_2008_LightVehicle_WL_5 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="UAZ-3151 (AGS-30) (Woodland)";
					side=1;
					faction="BS_B_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_w2G9ax1X3Rc";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WL";
					};
				};
				class BS_B_ASF_2008_LightVehicle_WT_5 {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="UAZ-3151 (AGS-30) (Winter)";
					side=1;
					faction="BS_B_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_w2G9ax1X3Rc";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WT";
					};
				};
				class BS_B_ASF_2008_LightVehicle_DT_5 {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="UAZ-3151 (AGS-30) (Desert)";
					side=1;
					faction="BS_B_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_w2G9ax1X3Rc";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_DT";
					};
				};
				class BS_B_ASF_2008_LightVehicle_WL_6 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="UAZ-3151 (DShKM) (Woodland)";
					side=1;
					faction="BS_B_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_kYA184CCUOg";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WL";
					};
				};
				class BS_B_ASF_2008_LightVehicle_WT_6 {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="UAZ-3151 (DShKM) (Winter)";
					side=1;
					faction="BS_B_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_kYA184CCUOg";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WT";
					};
				};
				class BS_B_ASF_2008_LightVehicle_DT_6 {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="UAZ-3151 (DShKM) (Desert)";
					side=1;
					faction="BS_B_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_kYA184CCUOg";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_DT";
					};
				};
				class BS_B_ASF_2008_LightVehicle_WL_7 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="UAZ-3151 (SPG-9) (Woodland)";
					side=1;
					faction="BS_B_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_QjCisR2pjZI";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WL";
					};
				};
				class BS_B_ASF_2008_LightVehicle_WT_7 {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="UAZ-3151 (SPG-9) (Winter)";
					side=1;
					faction="BS_B_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_QjCisR2pjZI";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WT";
					};
				};
				class BS_B_ASF_2008_LightVehicle_DT_7 {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="UAZ-3151 (SPG-9) (Desert)";
					side=1;
					faction="BS_B_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_QjCisR2pjZI";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_DT";
					};
				};
				class BS_B_ASF_2008_LightVehicle_WL_8 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="BTR-60PB (Woodland)";
					side=1;
					faction="BS_B_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_kwIFoRseAxQ";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WL";
					};
				};
				class BS_B_ASF_2008_LightVehicle_WT_8 {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="BTR-60PB (Winter)";
					side=1;
					faction="BS_B_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_kwIFoRseAxQ";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WT";
					};
				};
				class BS_B_ASF_2008_LightVehicle_DT_8 {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="BTR-60PB (Desert)";
					side=1;
					faction="BS_B_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_kwIFoRseAxQ";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_DT";
					};
				};
				class BS_B_ASF_2008_Tank_WL_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="BM-21 (Woodland) ";
					side=1;
					faction="BS_B_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_swO9X4aLA5E";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WL";
					};
				};
				class BS_B_ASF_2008_Tank_WT_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="BM-21 (Winter) ";
					side=1;
					faction="BS_B_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_swO9X4aLA5E";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WT";
					};
				};
				class BS_B_ASF_2008_Tank_DT_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="BM-21 (Desert) ";
					side=1;
					faction="BS_B_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_swO9X4aLA5E";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_DT";
					};
				};
				class BS_B_ASF_2008_Tank_WL_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="T-72B (obr. 1985g.) (Woodland) ";
					side=1;
					faction="BS_B_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_4TOvzE0xkO8";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WL";
					};
				};
				class BS_B_ASF_2008_Tank_WT_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="T-72B (obr. 1985g.) (Winter) ";
					side=1;
					faction="BS_B_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_4TOvzE0xkO8";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_WT";
					};
				};
				class BS_B_ASF_2008_Tank_DT_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="T-72B (obr. 1985g.) (Desert) ";
					side=1;
					faction="BS_B_ASF_2008";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_4TOvzE0xkO8";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ASF_2008_AR_DT";
					};
				};
			};
		};
	};
};

class CfgPatches { 
	class bm_specops_faction_ASF_2008{
		author = "Broken Skull Mods";
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={
			"rhs_c_weapons",
			"rhs_sounds",
			"ace_compat_rhs_afrf3",
			"po_factions_eu",
			"A3_Characters_F",
			"po_factions_me",
			"ace_yardage450",
			"A3_Weapons_F",
			"rhsusf_c_weapons",
			"rhs_c_troops",
			"AK12_545_Conversion",
			"A3_Weapons_F_Pistols_Rook40",
			"ace_realisticnames",
			"ace_ballistics",
			"A3_Weapons_F_Acc",
			"ace_smallarms",
			"ace_hearing",
			"ace_compat_rhs_afrf3_scopes",
			"ace_parachute",
			"po_factions_fic",
			"ace_compat_rhs_afrf3_arsenal",
			"tfar_core",
			"ace_medical_vitals",
			"ace_compat_rhs_afrf3_nightvision",
			"A3_Weapons_F_Enoch_Pistols_Pistol_Heavy_01",
			"Characters_f_lxWS",
			"Characters_f_lxWS_headgear",
			"ace_optics",
			"ace_scopes",
			"A3_Weapons_F_Exp_Launchers_RPG7",
			"cba_jam",
			"ace_overpressure",
			"ace_reloadlaunchers",
			"ace_medical_treatment",
			"ace_attach",
			"ace_captives",
			"ace_maptools",
			"ace_rangecard",
			"ace_kestrel4500",
			"tfar_handhelds",
			"A3_Weapons_F_Exp",
			"ace_compat_rhs_usf3_arsenal",
			"ace_microdagr",
			"ace_logistics_wirecutter",
			"ace_trenches",
			"A3_Weapons_F_Enoch_Rifles_AK12",
			"Weapons_1_F_lxWS_Acc",
			"A3_Weapons_F_Enoch"
};
		units[]={
			"BS_O_ASF_2008_Rifleman_WL",
			"BS_B_ASF_2008_Rifleman_WL",
			"BS_I_ASF_2008_Rifleman_WL",
			"BS_O_ASF_2008_GL_WL",
			"BS_B_ASF_2008_GL_WL",
			"BS_I_ASF_2008_GL_WL",
			"BS_O_ASF_2008_AR_WL",
			"BS_B_ASF_2008_AR_WL",
			"BS_I_ASF_2008_AR_WL",
			"BS_O_ASF_2008_RTO_WL",
			"BS_B_ASF_2008_RTO_WL",
			"BS_I_ASF_2008_RTO_WL",
			"BS_O_ASF_2008_SNP_WL",
			"BS_B_ASF_2008_SNP_WL",
			"BS_I_ASF_2008_SNP_WL",
			"BS_O_ASF_2008_Medic_WL",
			"BS_B_ASF_2008_Medic_WL",
			"BS_I_ASF_2008_Medic_WL",
			"BS_O_ASF_2008_DIVER_WL",
			"BS_B_ASF_2008_DIVER_WL",
			"BS_I_ASF_2008_DIVER_WL",
			"BS_O_ASF_2008_Officer_WL",
			"BS_B_ASF_2008_Officer_WL",
			"BS_I_ASF_2008_Officer_WL",
			"BS_O_ASF_2008_Rifleman_DT",
			"BS_B_ASF_2008_Rifleman_DT",
			"BS_I_ASF_2008_Rifleman_DT",
			"BS_O_ASF_2008_GL_DT",
			"BS_B_ASF_2008_GL_DT",
			"BS_I_ASF_2008_GL_DT",
			"BS_O_ASF_2008_AR_DT",
			"BS_B_ASF_2008_AR_DT",
			"BS_I_ASF_2008_AR_DT",
			"BS_O_ASF_2008_RTO_DT",
			"BS_B_ASF_2008_RTO_DT",
			"BS_I_ASF_2008_RTO_DT",
			"BS_O_ASF_2008_SNP_DT",
			"BS_B_ASF_2008_SNP_DT",
			"BS_I_ASF_2008_SNP_DT",
			"BS_O_ASF_2008_Medic_DT",
			"BS_B_ASF_2008_Medic_DT",
			"BS_I_ASF_2008_Medic_DT",
			"BS_O_ASF_2008_DIVER_DT",
			"BS_B_ASF_2008_DIVER_DT",
			"BS_I_ASF_2008_DIVER_DT",
			"BS_O_ASF_2008_Officer_DT",
			"BS_B_ASF_2008_Officer_DT",
			"BS_I_ASF_2008_Officer_DT",
			"BS_O_ASF_2008_Rifleman_WT",
			"BS_B_ASF_2008_Rifleman_WT",
			"BS_I_ASF_2008_Rifleman_WT",
			"BS_O_ASF_2008_GL_WT",
			"BS_B_ASF_2008_GL_WT",
			"BS_I_ASF_2008_GL_WT",
			"BS_O_ASF_2008_AR_WT",
			"BS_B_ASF_2008_AR_WT",
			"BS_I_ASF_2008_AR_WT",
			"BS_O_ASF_2008_RTO_WT",
			"BS_B_ASF_2008_RTO_WT",
			"BS_I_ASF_2008_RTO_WT",
			"BS_O_ASF_2008_SNP_WT",
			"BS_B_ASF_2008_SNP_WT",
			"BS_I_ASF_2008_SNP_WT",
			"BS_O_ASF_2008_Medic_WT",
			"BS_B_ASF_2008_Medic_WT",
			"BS_I_ASF_2008_Medic_WT",
			"BS_O_ASF_2008_DIVER_WT",
			"BS_B_ASF_2008_DIVER_WT",
			"BS_I_ASF_2008_DIVER_WT",
			"BS_O_ASF_2008_Officer_WT",
			"BS_B_ASF_2008_Officer_WT",
			"BS_I_ASF_2008_Officer_WT",
			"BS_B_ASF_2008_q_t25Dmeo2A",
			"BS_O_ASF_2008_q_t25Dmeo2A",
			"BS_I_ASF_2008_q_t25Dmeo2A",
			"BS_B_ASF_2008_LTsLdMRLJk0",
			"BS_O_ASF_2008_LTsLdMRLJk0",
			"BS_I_ASF_2008_LTsLdMRLJk0",
			"BS_B_ASF_2008_j0Ax5pzT5jo",
			"BS_O_ASF_2008_j0Ax5pzT5jo",
			"BS_I_ASF_2008_j0Ax5pzT5jo",
			"BS_B_ASF_2008_zB8MJjLbFf4",
			"BS_O_ASF_2008_zB8MJjLbFf4",
			"BS_I_ASF_2008_zB8MJjLbFf4",
			"BS_B_ASF_2008_x23vvX2fjks",
			"BS_O_ASF_2008_x23vvX2fjks",
			"BS_I_ASF_2008_x23vvX2fjks",
			"BS_B_ASF_2008_swO9X4aLA5E",
			"BS_O_ASF_2008_swO9X4aLA5E",
			"BS_I_ASF_2008_swO9X4aLA5E",
			"BS_B_ASF_2008_Dj7M1uz_21Y",
			"BS_O_ASF_2008_Dj7M1uz_21Y",
			"BS_I_ASF_2008_Dj7M1uz_21Y",
			"BS_B_ASF_2008_iGwxoJcDXNU",
			"BS_O_ASF_2008_iGwxoJcDXNU",
			"BS_I_ASF_2008_iGwxoJcDXNU",
			"BS_B_ASF_2008_lLY_0cZFzOg",
			"BS_O_ASF_2008_lLY_0cZFzOg",
			"BS_I_ASF_2008_lLY_0cZFzOg",
			"BS_B_ASF_2008__HCBiqmSo4s",
			"BS_O_ASF_2008__HCBiqmSo4s",
			"BS_I_ASF_2008__HCBiqmSo4s",
			"BS_B_ASF_2008_ZisPdT6ppHs",
			"BS_O_ASF_2008_ZisPdT6ppHs",
			"BS_I_ASF_2008_ZisPdT6ppHs",
			"BS_B_ASF_2008_cBSsITq1k0E",
			"BS_O_ASF_2008_cBSsITq1k0E",
			"BS_I_ASF_2008_cBSsITq1k0E",
			"BS_B_ASF_2008_zkC4ITqroUE",
			"BS_O_ASF_2008_zkC4ITqroUE",
			"BS_I_ASF_2008_zkC4ITqroUE",
			"BS_B_ASF_2008_cUSitkYN2xk",
			"BS_O_ASF_2008_cUSitkYN2xk",
			"BS_I_ASF_2008_cUSitkYN2xk",
			"BS_B_ASF_2008_w2G9ax1X3Rc",
			"BS_O_ASF_2008_w2G9ax1X3Rc",
			"BS_I_ASF_2008_w2G9ax1X3Rc",
			"BS_B_ASF_2008_kYA184CCUOg",
			"BS_O_ASF_2008_kYA184CCUOg",
			"BS_I_ASF_2008_kYA184CCUOg",
			"BS_B_ASF_2008_so0Vuc7wfUA",
			"BS_O_ASF_2008_so0Vuc7wfUA",
			"BS_I_ASF_2008_so0Vuc7wfUA",
			"BS_B_ASF_2008_QjCisR2pjZI",
			"BS_O_ASF_2008_QjCisR2pjZI",
			"BS_I_ASF_2008_QjCisR2pjZI",
			"BS_B_ASF_2008_kwIFoRseAxQ",
			"BS_O_ASF_2008_kwIFoRseAxQ",
			"BS_I_ASF_2008_kwIFoRseAxQ",
			"BS_B_ASF_2008_4TOvzE0xkO8",
			"BS_O_ASF_2008_4TOvzE0xkO8",
			"BS_I_ASF_2008_4TOvzE0xkO8",
			"BS_B_ASF_2008_lflPRxmSIps",
			"BS_O_ASF_2008_lflPRxmSIps",
			"BS_I_ASF_2008_lflPRxmSIps",
			"BS_B_ASF_2008_0MXi15VnAbo",
			"BS_O_ASF_2008_0MXi15VnAbo",
			"BS_I_ASF_2008_0MXi15VnAbo",
			"BS_B_ASF_2008_sUYkVubzOlo",
			"BS_O_ASF_2008_sUYkVubzOlo",
			"BS_I_ASF_2008_sUYkVubzOlo",
			"BS_B_ASF_2008_nrJW8am0db4",
			"BS_O_ASF_2008_nrJW8am0db4",
			"BS_I_ASF_2008_nrJW8am0db4"
};
	};
};
class CfgFactionClasses {
	// As Friendly (BluFOR)
	class BS_B_ASF_2008_BASE { 
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
		brokenSkullArsenal[]={"rhs_weap_akm","rhs_acc_dtk1l","rhs_acc_2dpZenit","rhs_30Rnd_762x39mm_bakelite_U","rhs_weap_6p53","rhs_18rnd_9x21mm_7N29","LOP_U_Fatigue_BDU_ATACS_AU_01","V_TacVest_brn","LOP_H_Shemag_TAN","ACE_Yardage450","ItemMap","ItemGPS","ItemRadio","rhs_weap_ak74_2","rhs_acc_uuk","rhs_30Rnd_545x39_7N10_2mag_camo_AK","rhs_weap_M320","rhs_mag_M441_HE","LOP_U_CHR_Citizen_02","rhs_lifchik_vog","LOP_H_Turban_mask","ItemCompass","rhs_weap_rpk74m_npz","rhs_acc_dtk2","rhs_acc_okp7_picatinny","SCM_96Rnd_545x39_RPK_Mag_Tracer","rhs_weap_makarov_pm","LOP_U_US_Fatigue_10","rhs_suspender_AK8_chestrig","LOP_H_Turban","rhs_weap_ak74_3","rhs_acc_dtk3","rhs_30Rnd_545x39_7N10_2mag_AK","rhs_weap_rpg7","rhs_acc_pgo7v3","rhs_rpg7_PG7VL_mag","hgun_Rook40_F","muzzle_snds_L","16Rnd_9x21_Mag","ACE_EarPlugs","rhs_belt_AK4","rhs_rpg7_OG7V_mag","rhs_weap_svdp_npz","rhs_acc_dh520x56","ACE_10Rnd_762x54_Tracer_mag","rhs_weap_pb_6p9","rhs_acc_6p9_suppressor","rhs_mag_9x18_8_57N181S","LOP_U_AM_Fatigue_04_5","rhs_suspender_AK","ACE_Altimeter","rhs_weap_aks74un","rhs_acc_tgpa","rhs_acc_pkas","rhs_30Rnd_545x39_7N10_camo_AK","LOP_U_NAPA_Fatigue_04","rhs_suspender_SKS","ItemWatch","rhs_weap_ak103_1_npz","rhs_acc_perst1ik","rhs_acc_1p87","rhs_30Rnd_762x39mm_bakelite","rhs_weap_pya","rhs_mag_9x19_17","U_B_Wetsuit","V_RebreatherB","H_Booniehat_dgtl","rhs_1PN138","rhs_weap_ak74n_npz","rhs_acc_dtk1983","rhs_30Rnd_545x39_7N10_2mag_desert_AK","hgun_Pistol_heavy_01_green_F","11Rnd_45ACP_Mag","U_lxWS_C_Djella_03","lxWS_H_cloth_5_C","Binocular","rhs_weap_svdp_wd_npz","rhs_acc_tgpv2","optic_DMS","rhs_10Rnd_762x54mmR_7N1","launch_RPG7_F","rhs_acc_1pn93_2","rhs_rpg7_TBG7V_mag","LOP_U_TAK_Civ_Fatigue_08","ACE_elasticBandage","ACE_epinephrine","ACE_morphine","ACE_personalAidKit","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_CableTie","ACE_MapTools","ACE_RangeCard","ACE_Kestrel4500","SmokeShell","SmokeShellYellow","SmokeShellRed","SmokeShellPurple","SmokeShellBlue","SmokeShellGreen","SmokeShellOrange","rhs_mag_rgd5","LOP_H_Shemag_BLU","TFAR_microdagr","LOP_U_CHR_SchoolTeacher_01","10Rnd_762x54_Mag","rhs_10Rnd_762x54mmR_7N14","rhs_rpg7_PG7V_mag","rhs_rpg7_PG7VM_mag","rhs_rpg7_PG7VR_mag","rhs_rpg7_PG7VS_mag","rhs_rpg7_type69_airburst_mag","RPG7_F","rhs_weap_m4","rhsusf_acc_SFMB556","rhsusf_acc_wmx_bk","rhs_acc_rakursPM","rhs_mag_30Rnd_556x45_M855_Stanag","LOP_U_Fatigue_BDU_BLK_02","ACE_quikclot","ACE_microDAGR","V_TacVest_blk","ACE_wirecutter","ACE_EntrenchingTool","ACE_30Rnd_556x45_Stanag_Tracer_Dim","30Rnd_556x45_Stanag_green","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","150Rnd_556x45_Drum_Sand_Mag_Tracer_F","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M200_Stanag","rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M193_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag_Ranger","rhs_mag_30Rnd_556x45_Mk262_Stanag_Ranger","rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Ranger_Tracer_Red","LOP_H_Shemag_BLK","rhsusf_acc_anpvs27","arifle_RPK12_lush_F","suppressor_h_lush_lxWS","rhs_acc_2dpZenit_ris","optic_tws_mg","75Rnd_762x39_AK12_Lush_Mag_Tracer_F"};

		garage[]={{"BS_B_ASF_2008_q_t25Dmeo2A",0,10,-1},{"BS_B_ASF_2008_LTsLdMRLJk0",0,10,-1},{"BS_B_ASF_2008_j0Ax5pzT5jo",0,10,-1},{"BS_B_ASF_2008_zB8MJjLbFf4",0,100,-1},{"BS_B_ASF_2008_x23vvX2fjks",0,70,-1},{"BS_B_ASF_2008_swO9X4aLA5E",1,50,1},{"BS_B_ASF_2008_Dj7M1uz_21Y",0,200,-1},{"BS_B_ASF_2008_iGwxoJcDXNU",1,200,2},{"BS_B_ASF_2008_lLY_0cZFzOg",1,200,2},{"BS_B_ASF_2008__HCBiqmSo4s",1,200,2},{"BS_B_ASF_2008_ZisPdT6ppHs",0,50,-1},{"BS_B_ASF_2008_cBSsITq1k0E",1,500,2},{"BS_B_ASF_2008_zkC4ITqroUE",1,500,2},{"BS_B_ASF_2008_cUSitkYN2xk",0,50,-1},{"BS_B_ASF_2008_w2G9ax1X3Rc",1,50,2},{"BS_B_ASF_2008_kYA184CCUOg",1,50,2},{"BS_B_ASF_2008_so0Vuc7wfUA",0,50,-1},{"BS_B_ASF_2008_QjCisR2pjZI",1,50,2},{"BS_B_ASF_2008_kwIFoRseAxQ",1,40,2},{"BS_B_ASF_2008_4TOvzE0xkO8",2,1500,1},{"BS_B_ASF_2008_lflPRxmSIps",0,10,-1},{"BS_B_ASF_2008_0MXi15VnAbo",0,10,-1},{"BS_B_ASF_2008_sUYkVubzOlo",0,10,-1},{"BS_B_ASF_2008_nrJW8am0db4",0,200,-1}};
		SamSystem[]={{"BS_B_ASF_2008_zB8MJjLbFf4","ZU-23-2"}};
		SearchLight[]={};
		StaticLowMG[]={{"BS_B_ASF_2008_q_t25Dmeo2A","KORD (6T7)"},{"BS_B_ASF_2008_LTsLdMRLJk0","M2HB (M3)"},{"BS_B_ASF_2008_j0Ax5pzT5jo","NSV (6T7)"}};
		StaticHighMG[]={{"BS_B_ASF_2008_lflPRxmSIps","M2HB (M3 AA)"},{"BS_B_ASF_2008_0MXi15VnAbo","KORD (6U16)"},{"BS_B_ASF_2008_sUYkVubzOlo","DShKM"}};
		StaticMotar[]={{"BS_B_ASF_2008_nrJW8am0db4","Mk6 Mortar"}};
		StaticAntiAir[]={{"BS_B_ASF_2008_x23vvX2fjks","9K38 (Djigit)"}};
		VehicleTechnicals[]={"BS_B_ASF_2008_iGwxoJcDXNU","BS_B_ASF_2008_lLY_0cZFzOg","BS_B_ASF_2008__HCBiqmSo4s","BS_B_ASF_2008_cBSsITq1k0E","BS_B_ASF_2008_zkC4ITqroUE","BS_B_ASF_2008_w2G9ax1X3Rc","BS_B_ASF_2008_kYA184CCUOg","BS_B_ASF_2008_QjCisR2pjZI","BS_B_ASF_2008_kwIFoRseAxQ"};
		VehicleAntiAircraft[]={};
		VehicleTanks[]={"BS_B_ASF_2008_swO9X4aLA5E","BS_B_ASF_2008_4TOvzE0xkO8"};
		VehicleTransport[]={};
	};
	// As Friendly (BluFOR)
	class BS_B_ASF_2008 : BS_B_ASF_2008_BASE { 
		useForSpecOps = 1;   
		displayName = "Atropian - Separatist Forces (2008)";
		side = 1;       
		flag = "\A3\Data_F\Flags\flag_US_CO.paa";
		icon = "\A3\Data_F\Flags\flag_US_CO.paa";
		priority = 0; 
	};
	// As Opposite Forces (OpFOR)
	class BS_O_ASF_2008 : BS_B_ASF_2008_BASE { 
		useForSpecOps = 1;
		displayName = "Atropian - Separatist Forces (2008)";
		side = 0;       
		flag = "\A3\Data_F\Flags\flag_US_CO.paa";
		icon = "\A3\Data_F\Flags\flag_US_CO.paa";
		priority = 0; 
	};
	// As Independent (Independent)
	class BS_I_ASF_2008 : BS_B_ASF_2008_BASE { 
		useForSpecOps = 1;
		displayName = "Atropian - Separatist Forces (2008)";
		side = 2;       
		flag = "\A3\Data_F\Flags\flag_US_CO.paa";
		icon = "\A3\Data_F\Flags\flag_US_CO.paa";
		priority = 0; 
	};
};
// As Friendly (BluFOR)
class SpecOps_Module_BLUFOR_Factions { 
	class BS_B_ASF_2008 { name = "Atropian - Separatist Forces (2008)"; value = "BS_B_ASF_2008"; };  
};
// As Friendly (BluFOR)
class SpecOps_Module_OPFOR_Factions { 
	class BS_O_ASF_2008 { name = "Atropian - Separatist Forces (2008)"; value = "BS_O_ASF_2008"; };  
};
// As Friendly (BluFOR)
class SpecOps_Module_GRE_Factions { 
	class BS_I_ASF_2008 { name = "Atropian - Separatist Forces (2008)"; value = "BS_I_ASF_2008"; };  
};