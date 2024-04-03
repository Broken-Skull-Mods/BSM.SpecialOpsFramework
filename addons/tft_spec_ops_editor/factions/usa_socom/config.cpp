

class CfgVehicles {
	class B_Survivor_F;
	class I_G_Survivor_F;
	class O_G_Survivor_F; 
	// This unit is for OpFOR
	class BS_O_US_DEVGRU_2023_Rifleman_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Rifleman (Woodland)"; 
		faction = "BS_O_US_DEVGRU_2023"; 
		identityTypes[] = {"CamoHead_White_01_F", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_green"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_green"}; 
		weapons[] = {"arifle_mas_cia_SPAR_01_snd_F","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_mas_cia_SPAR_01_snd_F","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_ViperHarness_whex_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_mas_cia_SPAR_01_snd_F","rhsusf_acc_nt4_tan","ACE_DBAL_A3_Red","optic_Hamr",{"rhs_mag_30Rnd_556x45_M855A1_EPM",30},{},"rhs_acc_harris_swivel"},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_B_T_Soldier_F",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"Atlas_V_CarrierRigKBT_01_CQB_CDF_F",{{"SmokeShell",8,1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",5,30},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",2,1}}},{"B_ViperHarness_whex_F",{{"ACE_wirecutter",1},{"ACE_HuntIR_monitor",1},{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",15,30},{"rhsusf_mag_40Rnd_46x30_JHP",2,40}}},"H_HelmetSpecB_green","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_DEVGRU_2023_Rifleman_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Rifleman (Woodland)"; 
		faction = "BS_B_US_DEVGRU_2023"; 
		identityTypes[] = {"CamoHead_White_01_F", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_green"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_green"}; 
		weapons[] = {"arifle_mas_cia_SPAR_01_snd_F","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_mas_cia_SPAR_01_snd_F","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_ViperHarness_whex_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_mas_cia_SPAR_01_snd_F","rhsusf_acc_nt4_tan","ACE_DBAL_A3_Red","optic_Hamr",{"rhs_mag_30Rnd_556x45_M855A1_EPM",30},{},"rhs_acc_harris_swivel"},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_B_T_Soldier_F",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"Atlas_V_CarrierRigKBT_01_CQB_CDF_F",{{"SmokeShell",8,1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",5,30},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",2,1}}},{"B_ViperHarness_whex_F",{{"ACE_wirecutter",1},{"ACE_HuntIR_monitor",1},{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",15,30},{"rhsusf_mag_40Rnd_46x30_JHP",2,40}}},"H_HelmetSpecB_green","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_DEVGRU_2023_Rifleman_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Rifleman (Woodland)"; 
		faction = "BS_I_US_DEVGRU_2023"; 
		identityTypes[] = {"CamoHead_White_01_F", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_green"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_green"}; 
		weapons[] = {"arifle_mas_cia_SPAR_01_snd_F","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_mas_cia_SPAR_01_snd_F","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_ViperHarness_whex_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_mas_cia_SPAR_01_snd_F","rhsusf_acc_nt4_tan","ACE_DBAL_A3_Red","optic_Hamr",{"rhs_mag_30Rnd_556x45_M855A1_EPM",30},{},"rhs_acc_harris_swivel"},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_B_T_Soldier_F",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"Atlas_V_CarrierRigKBT_01_CQB_CDF_F",{{"SmokeShell",8,1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",5,30},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",2,1}}},{"B_ViperHarness_whex_F",{{"ACE_wirecutter",1},{"ACE_HuntIR_monitor",1},{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",15,30},{"rhsusf_mag_40Rnd_46x30_JHP",2,40}}},"H_HelmetSpecB_green","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_DEVGRU_2023_GL_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Grenadier (Woodland)"; 
		faction = "BS_O_US_DEVGRU_2023"; 
		identityTypes[] = {"CamoHead_Greek_06_F", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_green"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_green"}; 
		weapons[] = {"arifle_mas_cia_SPAR_01_GL_snd_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_mas_cia_SPAR_01_GL_snd_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_ViperHarness_whex_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_mas_cia_SPAR_01_GL_snd_F","rhsusf_acc_nt4_tan","ACE_DBAL_A3_Red","optic_Hamr",{"rhs_mag_30Rnd_556x45_M855A1_PMAG",30},{"1Rnd_HE_Grenade_shell",1},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_B_T_Soldier_F",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_CarrierRigKBT_01_light_CDF_F",{{"SmokeShell",4,1},{"rhs_mag_m67",1,1},{"rhs_mag_mk84",1,1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",5,30}}},{"B_ViperHarness_whex_F",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",10,30},{"rhs_mag_m713_Red",2,1},{"rhs_mag_m714_White",15,1},{"1Rnd_HE_Grenade_shell",20,1},{"ACE_HuntIR_M203",4,1}}},"H_HelmetSpecB_green","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_DEVGRU_2023_GL_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Grenadier (Woodland)"; 
		faction = "BS_B_US_DEVGRU_2023"; 
		identityTypes[] = {"CamoHead_Greek_06_F", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_green"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_green"}; 
		weapons[] = {"arifle_mas_cia_SPAR_01_GL_snd_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_mas_cia_SPAR_01_GL_snd_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_ViperHarness_whex_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_mas_cia_SPAR_01_GL_snd_F","rhsusf_acc_nt4_tan","ACE_DBAL_A3_Red","optic_Hamr",{"rhs_mag_30Rnd_556x45_M855A1_PMAG",30},{"1Rnd_HE_Grenade_shell",1},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_B_T_Soldier_F",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_CarrierRigKBT_01_light_CDF_F",{{"SmokeShell",4,1},{"rhs_mag_m67",1,1},{"rhs_mag_mk84",1,1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",5,30}}},{"B_ViperHarness_whex_F",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",10,30},{"rhs_mag_m713_Red",2,1},{"rhs_mag_m714_White",15,1},{"1Rnd_HE_Grenade_shell",20,1},{"ACE_HuntIR_M203",4,1}}},"H_HelmetSpecB_green","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_DEVGRU_2023_GL_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Grenadier (Woodland)"; 
		faction = "BS_I_US_DEVGRU_2023"; 
		identityTypes[] = {"CamoHead_Greek_06_F", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_green"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_green"}; 
		weapons[] = {"arifle_mas_cia_SPAR_01_GL_snd_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_mas_cia_SPAR_01_GL_snd_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_ViperHarness_whex_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_mas_cia_SPAR_01_GL_snd_F","rhsusf_acc_nt4_tan","ACE_DBAL_A3_Red","optic_Hamr",{"rhs_mag_30Rnd_556x45_M855A1_PMAG",30},{"1Rnd_HE_Grenade_shell",1},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_B_T_Soldier_F",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_CarrierRigKBT_01_light_CDF_F",{{"SmokeShell",4,1},{"rhs_mag_m67",1,1},{"rhs_mag_mk84",1,1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",5,30}}},{"B_ViperHarness_whex_F",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",10,30},{"rhs_mag_m713_Red",2,1},{"rhs_mag_m714_White",15,1},{"1Rnd_HE_Grenade_shell",20,1},{"ACE_HuntIR_M203",4,1}}},"H_HelmetSpecB_green","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_DEVGRU_2023_RTO_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Radio Operator (Woodland)"; 
		faction = "BS_O_US_DEVGRU_2023"; 
		identityTypes[] = {"WhiteHead_09", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_green"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_green"}; 
		weapons[] = {"arifle_mas_cia_SPAR_01_snd_F","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_mas_cia_SPAR_01_snd_F","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "TFT_RADIO_PACK_WOODLAND";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_mas_cia_SPAR_01_snd_F","rhsusf_acc_nt4_tan","ACE_DBAL_A3_Red","optic_Hamr",{"rhs_mag_30Rnd_556x45_M855A1_EPM",30},{},"rhs_acc_harris_swivel"},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_B_T_Soldier_F",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_CarrierRigKBT_01_heavy_CDF_F",{{"SmokeShell",8,1},{"Chemlight_green",1,1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",5,30},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",2,1}}},{"TFT_RADIO_PACK_WOODLAND",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",8,30}}},"H_HelmetSpecB_green","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_DEVGRU_2023_RTO_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Radio Operator (Woodland)"; 
		faction = "BS_B_US_DEVGRU_2023"; 
		identityTypes[] = {"WhiteHead_09", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_green"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_green"}; 
		weapons[] = {"arifle_mas_cia_SPAR_01_snd_F","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_mas_cia_SPAR_01_snd_F","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "TFT_RADIO_PACK_WOODLAND";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_mas_cia_SPAR_01_snd_F","rhsusf_acc_nt4_tan","ACE_DBAL_A3_Red","optic_Hamr",{"rhs_mag_30Rnd_556x45_M855A1_EPM",30},{},"rhs_acc_harris_swivel"},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_B_T_Soldier_F",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_CarrierRigKBT_01_heavy_CDF_F",{{"SmokeShell",8,1},{"Chemlight_green",1,1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",5,30},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",2,1}}},{"TFT_RADIO_PACK_WOODLAND",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",8,30}}},"H_HelmetSpecB_green","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_DEVGRU_2023_RTO_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Radio Operator (Woodland)"; 
		faction = "BS_I_US_DEVGRU_2023"; 
		identityTypes[] = {"WhiteHead_09", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_green"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_green"}; 
		weapons[] = {"arifle_mas_cia_SPAR_01_snd_F","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_mas_cia_SPAR_01_snd_F","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "TFT_RADIO_PACK_WOODLAND";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_mas_cia_SPAR_01_snd_F","rhsusf_acc_nt4_tan","ACE_DBAL_A3_Red","optic_Hamr",{"rhs_mag_30Rnd_556x45_M855A1_EPM",30},{},"rhs_acc_harris_swivel"},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_B_T_Soldier_F",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_CarrierRigKBT_01_heavy_CDF_F",{{"SmokeShell",8,1},{"Chemlight_green",1,1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",5,30},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",2,1}}},{"TFT_RADIO_PACK_WOODLAND",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",8,30}}},"H_HelmetSpecB_green","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_DEVGRU_2023_AR_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Machine Gunner (Woodland)"; 
		faction = "BS_O_US_DEVGRU_2023"; 
		identityTypes[] = {"CamoHead_White_13_F", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","TIOW_IVAS_Olive","H_HelmetSpecB_green"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","TIOW_IVAS_Olive","H_HelmetSpecB_green"}; 
		weapons[] = {"CUP_lmg_Mk48_wdl","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_lmg_Mk48_wdl","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_ViperHarness_whex_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_Mk48_wdl","rhsusf_acc_ARDEC_M240","CUP_acc_ANPEQ_15_Flashlight_OD_L","optic_tws_mg",{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",100},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_B_T_Soldier_F",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_CarrierRigKBT_01_light_CDF_F",{{"SmokeShell",6,1},{"rhs_mag_m67",2,1}}},{"B_ViperHarness_whex_F",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M",1,100},{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",1,100},{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",1,100},{"CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M",3,100}}},"H_HelmetSpecB_green","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch","TIOW_IVAS_Olive"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_DEVGRU_2023_AR_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Machine Gunner (Woodland)"; 
		faction = "BS_B_US_DEVGRU_2023"; 
		identityTypes[] = {"CamoHead_White_13_F", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","TIOW_IVAS_Olive","H_HelmetSpecB_green"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","TIOW_IVAS_Olive","H_HelmetSpecB_green"}; 
		weapons[] = {"CUP_lmg_Mk48_wdl","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_lmg_Mk48_wdl","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_ViperHarness_whex_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_Mk48_wdl","rhsusf_acc_ARDEC_M240","CUP_acc_ANPEQ_15_Flashlight_OD_L","optic_tws_mg",{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",100},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_B_T_Soldier_F",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_CarrierRigKBT_01_light_CDF_F",{{"SmokeShell",6,1},{"rhs_mag_m67",2,1}}},{"B_ViperHarness_whex_F",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M",1,100},{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",1,100},{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",1,100},{"CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M",3,100}}},"H_HelmetSpecB_green","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch","TIOW_IVAS_Olive"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_DEVGRU_2023_AR_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Machine Gunner (Woodland)"; 
		faction = "BS_I_US_DEVGRU_2023"; 
		identityTypes[] = {"CamoHead_White_13_F", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","TIOW_IVAS_Olive","H_HelmetSpecB_green"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","TIOW_IVAS_Olive","H_HelmetSpecB_green"}; 
		weapons[] = {"CUP_lmg_Mk48_wdl","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_lmg_Mk48_wdl","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_ViperHarness_whex_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_Mk48_wdl","rhsusf_acc_ARDEC_M240","CUP_acc_ANPEQ_15_Flashlight_OD_L","optic_tws_mg",{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",100},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_B_T_Soldier_F",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_CarrierRigKBT_01_light_CDF_F",{{"SmokeShell",6,1},{"rhs_mag_m67",2,1}}},{"B_ViperHarness_whex_F",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M",1,100},{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",1,100},{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",1,100},{"CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M",3,100}}},"H_HelmetSpecB_green","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch","TIOW_IVAS_Olive"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_DEVGRU_2023_SNP_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Sniper (Woodland)"; 
		faction = "BS_O_US_DEVGRU_2023"; 
		identityTypes[] = {"PersianHead_A3_03", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","TIOW_IVAS_Olive","H_HelmetSpecB_green"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","TIOW_IVAS_Olive","H_HelmetSpecB_green"}; 
		weapons[] = {"srifle_mas_cia_LRR_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"srifle_mas_cia_LRR_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_ViperHarness_whex_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"srifle_mas_cia_LRR_F","","","optic_Nightstalker",{"10Rnd_mas_cia_408_APDS_Mag",10},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_B_T_Soldier_F",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_CarrierRigKBT_01_light_CDF_F",{{"SmokeShell",5,1},{"rhs_mag_m67",1,1},{"10Rnd_mas_cia_408_APDS_Mag",12,10}}},{"B_ViperHarness_whex_F",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_Kestrel4500",1},{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_ATragMX",1},{"rhsusf_mag_40Rnd_46x30_JHP",10,40}}},"H_HelmetSpecB_green","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch","TIOW_IVAS_Olive"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_DEVGRU_2023_SNP_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Sniper (Woodland)"; 
		faction = "BS_B_US_DEVGRU_2023"; 
		identityTypes[] = {"PersianHead_A3_03", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","TIOW_IVAS_Olive","H_HelmetSpecB_green"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","TIOW_IVAS_Olive","H_HelmetSpecB_green"}; 
		weapons[] = {"srifle_mas_cia_LRR_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"srifle_mas_cia_LRR_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_ViperHarness_whex_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"srifle_mas_cia_LRR_F","","","optic_Nightstalker",{"10Rnd_mas_cia_408_APDS_Mag",10},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_B_T_Soldier_F",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_CarrierRigKBT_01_light_CDF_F",{{"SmokeShell",5,1},{"rhs_mag_m67",1,1},{"10Rnd_mas_cia_408_APDS_Mag",12,10}}},{"B_ViperHarness_whex_F",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_Kestrel4500",1},{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_ATragMX",1},{"rhsusf_mag_40Rnd_46x30_JHP",10,40}}},"H_HelmetSpecB_green","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch","TIOW_IVAS_Olive"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_DEVGRU_2023_SNP_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Sniper (Woodland)"; 
		faction = "BS_I_US_DEVGRU_2023"; 
		identityTypes[] = {"PersianHead_A3_03", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","TIOW_IVAS_Olive","H_HelmetSpecB_green"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","TIOW_IVAS_Olive","H_HelmetSpecB_green"}; 
		weapons[] = {"srifle_mas_cia_LRR_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"srifle_mas_cia_LRR_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_ViperHarness_whex_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"srifle_mas_cia_LRR_F","","","optic_Nightstalker",{"10Rnd_mas_cia_408_APDS_Mag",10},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_B_T_Soldier_F",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_CarrierRigKBT_01_light_CDF_F",{{"SmokeShell",5,1},{"rhs_mag_m67",1,1},{"10Rnd_mas_cia_408_APDS_Mag",12,10}}},{"B_ViperHarness_whex_F",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_Kestrel4500",1},{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_ATragMX",1},{"rhsusf_mag_40Rnd_46x30_JHP",10,40}}},"H_HelmetSpecB_green","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch","TIOW_IVAS_Olive"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_DEVGRU_2023_Medic_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Doctor (Woodland)"; 
		faction = "BS_O_US_DEVGRU_2023"; 
		identityTypes[] = {"PersianHead_A3_01", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_green"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_green"}; 
		weapons[] = {"arifle_mas_cia_SPAR_01_snd_F","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_mas_cia_SPAR_01_snd_F","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_ViperHarness_whex_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_mas_cia_SPAR_01_snd_F","rhsusf_acc_nt4_tan","ACE_DBAL_A3_Red","optic_Hamr",{"rhs_mag_30Rnd_556x45_M855A1_EPM",30},{},"rhs_acc_harris_swivel"},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_B_T_Soldier_F",{{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_EarPlugs",1},{"ACE_CableTie",4},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",2,30}}},{"Atlas_V_CarrierRigKBT_01_CQB_CDF_F",{{"SmokeShell",4,1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",10,30},{"rhs_mag_mk84",2,1}}},{"B_ViperHarness_whex_F",{{"ACE_wirecutter",1},{"ACE_HuntIR_monitor",1},{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_elasticBandage",40},{"ACE_quikclot",40},{"ACE_morphine",10},{"ACE_epinephrine",10},{"ACE_personalAidKit",6},{"ACE_tourniquet",10},{"ACE_salineIV",9},{"ACE_salineIV_500",4},{"ACE_adenosine",3}}},"H_HelmetSpecB_green","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_DEVGRU_2023_Medic_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Doctor (Woodland)"; 
		faction = "BS_B_US_DEVGRU_2023"; 
		identityTypes[] = {"PersianHead_A3_01", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_green"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_green"}; 
		weapons[] = {"arifle_mas_cia_SPAR_01_snd_F","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_mas_cia_SPAR_01_snd_F","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_ViperHarness_whex_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_mas_cia_SPAR_01_snd_F","rhsusf_acc_nt4_tan","ACE_DBAL_A3_Red","optic_Hamr",{"rhs_mag_30Rnd_556x45_M855A1_EPM",30},{},"rhs_acc_harris_swivel"},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_B_T_Soldier_F",{{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_EarPlugs",1},{"ACE_CableTie",4},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",2,30}}},{"Atlas_V_CarrierRigKBT_01_CQB_CDF_F",{{"SmokeShell",4,1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",10,30},{"rhs_mag_mk84",2,1}}},{"B_ViperHarness_whex_F",{{"ACE_wirecutter",1},{"ACE_HuntIR_monitor",1},{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_elasticBandage",40},{"ACE_quikclot",40},{"ACE_morphine",10},{"ACE_epinephrine",10},{"ACE_personalAidKit",6},{"ACE_tourniquet",10},{"ACE_salineIV",9},{"ACE_salineIV_500",4},{"ACE_adenosine",3}}},"H_HelmetSpecB_green","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_DEVGRU_2023_Medic_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Doctor (Woodland)"; 
		faction = "BS_I_US_DEVGRU_2023"; 
		identityTypes[] = {"PersianHead_A3_01", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_green"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_green"}; 
		weapons[] = {"arifle_mas_cia_SPAR_01_snd_F","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_mas_cia_SPAR_01_snd_F","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_ViperHarness_whex_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_mas_cia_SPAR_01_snd_F","rhsusf_acc_nt4_tan","ACE_DBAL_A3_Red","optic_Hamr",{"rhs_mag_30Rnd_556x45_M855A1_EPM",30},{},"rhs_acc_harris_swivel"},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_B_T_Soldier_F",{{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_EarPlugs",1},{"ACE_CableTie",4},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",2,30}}},{"Atlas_V_CarrierRigKBT_01_CQB_CDF_F",{{"SmokeShell",4,1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",10,30},{"rhs_mag_mk84",2,1}}},{"B_ViperHarness_whex_F",{{"ACE_wirecutter",1},{"ACE_HuntIR_monitor",1},{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_elasticBandage",40},{"ACE_quikclot",40},{"ACE_morphine",10},{"ACE_epinephrine",10},{"ACE_personalAidKit",6},{"ACE_tourniquet",10},{"ACE_salineIV",9},{"ACE_salineIV_500",4},{"ACE_adenosine",3}}},"H_HelmetSpecB_green","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_DEVGRU_2023_DIVER_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Diver (Woodland)"; 
		faction = "BS_O_US_DEVGRU_2023"; 
		identityTypes[] = {"WhiteHead_21", "Male04ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","NVGoggles_mas_cia_hv","G_B_Diving","H_HelmetSpecB_green"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","NVGoggles_mas_cia_hv","G_B_Diving","H_HelmetSpecB_green"}; 
		weapons[] = {"arifle_mas_cia_SDAR_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_mas_cia_SDAR_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_mas_cia_Kitbag_LB";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_mas_cia_SDAR_F","muzzle_snds_M","rhsusf_acc_anpeq15_bk","rhsusf_acc_g33_xps3",{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger",30},{},"rhs_acc_harris_swivel"},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_mas_cia_B_Wetsuit",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_mas_cia_RebreatherB",{{"SmokeShell",8,1},{"Chemlight_green",1,1},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",2,1}}},{"B_mas_cia_Kitbag_LB",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_elasticBandage",10},{"ACE_quikclot",10},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_epinephrine",1},{"ACE_microDAGR",1},{"rhsusf_mag_40Rnd_46x30_JHP",2,40},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger",15,30}}},"H_HelmetSpecB_green","G_B_Diving",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch","NVGoggles_mas_cia_hv"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_DEVGRU_2023_DIVER_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Diver (Woodland)"; 
		faction = "BS_B_US_DEVGRU_2023"; 
		identityTypes[] = {"WhiteHead_21", "Male04ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","NVGoggles_mas_cia_hv","G_B_Diving","H_HelmetSpecB_green"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","NVGoggles_mas_cia_hv","G_B_Diving","H_HelmetSpecB_green"}; 
		weapons[] = {"arifle_mas_cia_SDAR_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_mas_cia_SDAR_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_mas_cia_Kitbag_LB";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_mas_cia_SDAR_F","muzzle_snds_M","rhsusf_acc_anpeq15_bk","rhsusf_acc_g33_xps3",{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger",30},{},"rhs_acc_harris_swivel"},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_mas_cia_B_Wetsuit",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_mas_cia_RebreatherB",{{"SmokeShell",8,1},{"Chemlight_green",1,1},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",2,1}}},{"B_mas_cia_Kitbag_LB",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_elasticBandage",10},{"ACE_quikclot",10},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_epinephrine",1},{"ACE_microDAGR",1},{"rhsusf_mag_40Rnd_46x30_JHP",2,40},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger",15,30}}},"H_HelmetSpecB_green","G_B_Diving",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch","NVGoggles_mas_cia_hv"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_DEVGRU_2023_DIVER_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Diver (Woodland)"; 
		faction = "BS_I_US_DEVGRU_2023"; 
		identityTypes[] = {"WhiteHead_21", "Male04ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","NVGoggles_mas_cia_hv","G_B_Diving","H_HelmetSpecB_green"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","NVGoggles_mas_cia_hv","G_B_Diving","H_HelmetSpecB_green"}; 
		weapons[] = {"arifle_mas_cia_SDAR_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_mas_cia_SDAR_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_mas_cia_Kitbag_LB";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_mas_cia_SDAR_F","muzzle_snds_M","rhsusf_acc_anpeq15_bk","rhsusf_acc_g33_xps3",{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger",30},{},"rhs_acc_harris_swivel"},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_mas_cia_B_Wetsuit",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_mas_cia_RebreatherB",{{"SmokeShell",8,1},{"Chemlight_green",1,1},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",2,1}}},{"B_mas_cia_Kitbag_LB",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_elasticBandage",10},{"ACE_quikclot",10},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_epinephrine",1},{"ACE_microDAGR",1},{"rhsusf_mag_40Rnd_46x30_JHP",2,40},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger",15,30}}},"H_HelmetSpecB_green","G_B_Diving",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch","NVGoggles_mas_cia_hv"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_DEVGRU_2023_VAR_0_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 1"; 
		faction = "BS_O_US_DEVGRU_2023"; 
		identityTypes[] = {"WhiteHead_21", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "U_B_UBACS_tshirt_wdl_f"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","G_Shemag_oli","H_Booniehat_aucamo_hs_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","G_Shemag_oli","H_Booniehat_aucamo_hs_F"}; 
		weapons[] = {"srifle_LRR_tna_F","launch_mas_cia_Stinger_F","hgun_mas_cia_P226_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"srifle_LRR_tna_F","launch_mas_cia_Stinger_F","hgun_mas_cia_P226_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_ViperHarness_ghex_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"srifle_LRR_tna_F","muzzle_snds_408_black","","optic_tws_sniper",{"7Rnd_408_Mag",7},{},""},{"launch_mas_cia_Stinger_F","","","",{"Titan_AA",1},{},""},{"hgun_mas_cia_P226_F","muzzle_snds_L","Aegis_acc_pointer_compact_pistol_red","",{"16Rnd_9x21_Mag_v2",17},{},""},{"U_B_UBACS_tshirt_wdl_f",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_CarrierRigKBT_01_light_CDF_F",{{"SmokeShell",5,1},{"rhs_mag_m67",1,1}}},{"B_ViperHarness_ghex_F",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_Kestrel4500",1},{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_ATragMX",1},{"optic_AMS",1},{"optic_AMS_khk",1},{"optic_AMS_snd",1},{"rhsusf_acc_nxs_3515x50_md",1},{"rhsusf_acc_nxs_3515x50f1_h58",1},{"rhsusf_acc_nxs_3515x50f1_md",1},{"rhsusf_acc_nxs_3515x50f1_h58_sun",1},{"optic_Holosight_lush_F",1},{"rhsusf_acc_EOTECH",1}}},"H_Booniehat_aucamo_hs_F","G_Shemag_oli",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_DEVGRU_2023_VAR_0_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 1"; 
		faction = "BS_B_US_DEVGRU_2023"; 
		identityTypes[] = {"WhiteHead_21", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "U_B_UBACS_tshirt_wdl_f"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","G_Shemag_oli","H_Booniehat_aucamo_hs_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","G_Shemag_oli","H_Booniehat_aucamo_hs_F"}; 
		weapons[] = {"srifle_LRR_tna_F","launch_mas_cia_Stinger_F","hgun_mas_cia_P226_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"srifle_LRR_tna_F","launch_mas_cia_Stinger_F","hgun_mas_cia_P226_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_ViperHarness_ghex_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"srifle_LRR_tna_F","muzzle_snds_408_black","","optic_tws_sniper",{"7Rnd_408_Mag",7},{},""},{"launch_mas_cia_Stinger_F","","","",{"Titan_AA",1},{},""},{"hgun_mas_cia_P226_F","muzzle_snds_L","Aegis_acc_pointer_compact_pistol_red","",{"16Rnd_9x21_Mag_v2",17},{},""},{"U_B_UBACS_tshirt_wdl_f",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_CarrierRigKBT_01_light_CDF_F",{{"SmokeShell",5,1},{"rhs_mag_m67",1,1}}},{"B_ViperHarness_ghex_F",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_Kestrel4500",1},{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_ATragMX",1},{"optic_AMS",1},{"optic_AMS_khk",1},{"optic_AMS_snd",1},{"rhsusf_acc_nxs_3515x50_md",1},{"rhsusf_acc_nxs_3515x50f1_h58",1},{"rhsusf_acc_nxs_3515x50f1_md",1},{"rhsusf_acc_nxs_3515x50f1_h58_sun",1},{"optic_Holosight_lush_F",1},{"rhsusf_acc_EOTECH",1}}},"H_Booniehat_aucamo_hs_F","G_Shemag_oli",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_DEVGRU_2023_VAR_0_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 1"; 
		faction = "BS_I_US_DEVGRU_2023"; 
		identityTypes[] = {"WhiteHead_21", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "U_B_UBACS_tshirt_wdl_f"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","G_Shemag_oli","H_Booniehat_aucamo_hs_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","G_Shemag_oli","H_Booniehat_aucamo_hs_F"}; 
		weapons[] = {"srifle_LRR_tna_F","launch_mas_cia_Stinger_F","hgun_mas_cia_P226_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"srifle_LRR_tna_F","launch_mas_cia_Stinger_F","hgun_mas_cia_P226_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_ViperHarness_ghex_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"srifle_LRR_tna_F","muzzle_snds_408_black","","optic_tws_sniper",{"7Rnd_408_Mag",7},{},""},{"launch_mas_cia_Stinger_F","","","",{"Titan_AA",1},{},""},{"hgun_mas_cia_P226_F","muzzle_snds_L","Aegis_acc_pointer_compact_pistol_red","",{"16Rnd_9x21_Mag_v2",17},{},""},{"U_B_UBACS_tshirt_wdl_f",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_CarrierRigKBT_01_light_CDF_F",{{"SmokeShell",5,1},{"rhs_mag_m67",1,1}}},{"B_ViperHarness_ghex_F",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_Kestrel4500",1},{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_ATragMX",1},{"optic_AMS",1},{"optic_AMS_khk",1},{"optic_AMS_snd",1},{"rhsusf_acc_nxs_3515x50_md",1},{"rhsusf_acc_nxs_3515x50f1_h58",1},{"rhsusf_acc_nxs_3515x50f1_md",1},{"rhsusf_acc_nxs_3515x50f1_h58_sun",1},{"optic_Holosight_lush_F",1},{"rhsusf_acc_EOTECH",1}}},"H_Booniehat_aucamo_hs_F","G_Shemag_oli",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_DEVGRU_2023_VAR_1_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 2"; 
		faction = "BS_O_US_DEVGRU_2023"; 
		identityTypes[] = {"TanoanHead_A3_02", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_AR_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","G_Balaclava_light_G_wdl_F","H_HelmetSpecB_green"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","G_Balaclava_light_G_wdl_F","H_HelmetSpecB_green"}; 
		weapons[] = {"srifle_DMR_04_Tan_F","launch_I_Titan_short_F","rhsusf_weap_m9","ACE_Yardage450"}; 
		respawnWeapons[] = {"srifle_DMR_04_Tan_F","launch_I_Titan_short_F","rhsusf_weap_m9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_T_Static_Designator_01_Weapon_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"srifle_DMR_04_Tan_F","","ACE_DBAL_A3_Red","optic_ERCO_blk_F",{"10Rnd_127x54_Mag",10},{},"rhs_acc_harris_swivel"},{"launch_I_Titan_short_F","","","",{"Titan_AT",1},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"U_B_T_Soldier_AR_F",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"Atlas_V_CarrierRigKBT_01_CQB_CDF_F",{{"SmokeShell",8,1},{"Chemlight_green",1,1},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",2,1}}},{"B_T_Static_Designator_01_Weapon_F",{}},"H_HelmetSpecB_green","G_Balaclava_light_G_wdl_F",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_DEVGRU_2023_VAR_1_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 2"; 
		faction = "BS_B_US_DEVGRU_2023"; 
		identityTypes[] = {"TanoanHead_A3_02", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_AR_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","G_Balaclava_light_G_wdl_F","H_HelmetSpecB_green"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","G_Balaclava_light_G_wdl_F","H_HelmetSpecB_green"}; 
		weapons[] = {"srifle_DMR_04_Tan_F","launch_I_Titan_short_F","rhsusf_weap_m9","ACE_Yardage450"}; 
		respawnWeapons[] = {"srifle_DMR_04_Tan_F","launch_I_Titan_short_F","rhsusf_weap_m9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_T_Static_Designator_01_Weapon_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"srifle_DMR_04_Tan_F","","ACE_DBAL_A3_Red","optic_ERCO_blk_F",{"10Rnd_127x54_Mag",10},{},"rhs_acc_harris_swivel"},{"launch_I_Titan_short_F","","","",{"Titan_AT",1},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"U_B_T_Soldier_AR_F",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"Atlas_V_CarrierRigKBT_01_CQB_CDF_F",{{"SmokeShell",8,1},{"Chemlight_green",1,1},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",2,1}}},{"B_T_Static_Designator_01_Weapon_F",{}},"H_HelmetSpecB_green","G_Balaclava_light_G_wdl_F",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_DEVGRU_2023_VAR_1_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 2"; 
		faction = "BS_I_US_DEVGRU_2023"; 
		identityTypes[] = {"TanoanHead_A3_02", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "U_B_T_Soldier_AR_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","G_Balaclava_light_G_wdl_F","H_HelmetSpecB_green"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","G_Balaclava_light_G_wdl_F","H_HelmetSpecB_green"}; 
		weapons[] = {"srifle_DMR_04_Tan_F","launch_I_Titan_short_F","rhsusf_weap_m9","ACE_Yardage450"}; 
		respawnWeapons[] = {"srifle_DMR_04_Tan_F","launch_I_Titan_short_F","rhsusf_weap_m9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_T_Static_Designator_01_Weapon_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"srifle_DMR_04_Tan_F","","ACE_DBAL_A3_Red","optic_ERCO_blk_F",{"10Rnd_127x54_Mag",10},{},"rhs_acc_harris_swivel"},{"launch_I_Titan_short_F","","","",{"Titan_AT",1},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"U_B_T_Soldier_AR_F",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"Atlas_V_CarrierRigKBT_01_CQB_CDF_F",{{"SmokeShell",8,1},{"Chemlight_green",1,1},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",2,1}}},{"B_T_Static_Designator_01_Weapon_F",{}},"H_HelmetSpecB_green","G_Balaclava_light_G_wdl_F",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_DEVGRU_2023_Rifleman_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Rifleman (Winter)"; 
		faction = "BS_O_US_DEVGRU_2023"; 
		identityTypes[] = {"CamoHead_Greek_05_F", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_CombatUniform_w"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_mas_cia_airframe_w"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_mas_cia_airframe_w"}; 
		weapons[] = {"arifle_mas_cia_SPAR_01_w_F","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_mas_cia_SPAR_01_w_F","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_mas_cia_Kitbag_LW";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_mas_cia_SPAR_01_w_F","muzzle_snds_M","rhsusf_acc_anpeq15side_bk","optic_Hamr",{"rhs_mag_30Rnd_556x45_M855A1_EPM",30},{},""},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_mas_cia_B_CombatUniform_w",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_mas_cia_PlateCarrierRF_win",{{"SmokeShell",8,1},{"Chemlight_green",1,1},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",2,1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",5,30}}},{"B_mas_cia_Kitbag_LW",{{"ACE_wirecutter",1},{"ACE_HuntIR_monitor",1},{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"rhsusf_mag_40Rnd_46x30_JHP",2,40},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",15,30}}},"H_mas_cia_airframe_w","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_DEVGRU_2023_Rifleman_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Rifleman (Winter)"; 
		faction = "BS_B_US_DEVGRU_2023"; 
		identityTypes[] = {"CamoHead_Greek_05_F", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_CombatUniform_w"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_mas_cia_airframe_w"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_mas_cia_airframe_w"}; 
		weapons[] = {"arifle_mas_cia_SPAR_01_w_F","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_mas_cia_SPAR_01_w_F","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_mas_cia_Kitbag_LW";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_mas_cia_SPAR_01_w_F","muzzle_snds_M","rhsusf_acc_anpeq15side_bk","optic_Hamr",{"rhs_mag_30Rnd_556x45_M855A1_EPM",30},{},""},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_mas_cia_B_CombatUniform_w",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_mas_cia_PlateCarrierRF_win",{{"SmokeShell",8,1},{"Chemlight_green",1,1},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",2,1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",5,30}}},{"B_mas_cia_Kitbag_LW",{{"ACE_wirecutter",1},{"ACE_HuntIR_monitor",1},{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"rhsusf_mag_40Rnd_46x30_JHP",2,40},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",15,30}}},"H_mas_cia_airframe_w","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_DEVGRU_2023_Rifleman_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Rifleman (Winter)"; 
		faction = "BS_I_US_DEVGRU_2023"; 
		identityTypes[] = {"CamoHead_Greek_05_F", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_CombatUniform_w"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_mas_cia_airframe_w"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_mas_cia_airframe_w"}; 
		weapons[] = {"arifle_mas_cia_SPAR_01_w_F","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_mas_cia_SPAR_01_w_F","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_mas_cia_Kitbag_LW";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_mas_cia_SPAR_01_w_F","muzzle_snds_M","rhsusf_acc_anpeq15side_bk","optic_Hamr",{"rhs_mag_30Rnd_556x45_M855A1_EPM",30},{},""},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_mas_cia_B_CombatUniform_w",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_mas_cia_PlateCarrierRF_win",{{"SmokeShell",8,1},{"Chemlight_green",1,1},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",2,1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",5,30}}},{"B_mas_cia_Kitbag_LW",{{"ACE_wirecutter",1},{"ACE_HuntIR_monitor",1},{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"rhsusf_mag_40Rnd_46x30_JHP",2,40},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",15,30}}},"H_mas_cia_airframe_w","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_DEVGRU_2023_GL_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Grenadier (Winter)"; 
		faction = "BS_O_US_DEVGRU_2023"; 
		identityTypes[] = {"WhiteHead_12", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_suite_WINT"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","USP_RAID_SMW2_BLK","H_mas_cia_helmet_ops_w"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","USP_RAID_SMW2_BLK","H_mas_cia_helmet_ops_w"}; 
		weapons[] = {"arifle_mas_cia_SPAR_01_GL_w_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_mas_cia_SPAR_01_GL_w_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_mas_cia_AssaultPack_w2";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_mas_cia_SPAR_01_GL_w_F","muzzle_snds_M","ACE_DBAL_A3_Red","optic_Hamr",{"rhs_mag_30Rnd_556x45_M855A1_PMAG",30},{"1Rnd_HE_Grenade_shell",1},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_mas_cia_B_suite_WINT",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_mas_cia_PlateCarrier1_win",{{"SmokeShell",4,1},{"rhs_mag_m67",1,1},{"rhs_mag_mk84",1,1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",5,30}}},{"B_mas_cia_AssaultPack_w2",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",10,30},{"rhs_mag_m713_Red",2,1},{"rhs_mag_m714_White",15,1},{"1Rnd_HE_Grenade_shell",20,1},{"ACE_HuntIR_M203",4,1}}},"H_mas_cia_helmet_ops_w","USP_RAID_SMW2_BLK",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_DEVGRU_2023_GL_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Grenadier (Winter)"; 
		faction = "BS_B_US_DEVGRU_2023"; 
		identityTypes[] = {"WhiteHead_12", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_suite_WINT"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","USP_RAID_SMW2_BLK","H_mas_cia_helmet_ops_w"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","USP_RAID_SMW2_BLK","H_mas_cia_helmet_ops_w"}; 
		weapons[] = {"arifle_mas_cia_SPAR_01_GL_w_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_mas_cia_SPAR_01_GL_w_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_mas_cia_AssaultPack_w2";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_mas_cia_SPAR_01_GL_w_F","muzzle_snds_M","ACE_DBAL_A3_Red","optic_Hamr",{"rhs_mag_30Rnd_556x45_M855A1_PMAG",30},{"1Rnd_HE_Grenade_shell",1},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_mas_cia_B_suite_WINT",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_mas_cia_PlateCarrier1_win",{{"SmokeShell",4,1},{"rhs_mag_m67",1,1},{"rhs_mag_mk84",1,1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",5,30}}},{"B_mas_cia_AssaultPack_w2",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",10,30},{"rhs_mag_m713_Red",2,1},{"rhs_mag_m714_White",15,1},{"1Rnd_HE_Grenade_shell",20,1},{"ACE_HuntIR_M203",4,1}}},"H_mas_cia_helmet_ops_w","USP_RAID_SMW2_BLK",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_DEVGRU_2023_GL_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Grenadier (Winter)"; 
		faction = "BS_I_US_DEVGRU_2023"; 
		identityTypes[] = {"WhiteHead_12", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_suite_WINT"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","USP_RAID_SMW2_BLK","H_mas_cia_helmet_ops_w"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","USP_RAID_SMW2_BLK","H_mas_cia_helmet_ops_w"}; 
		weapons[] = {"arifle_mas_cia_SPAR_01_GL_w_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_mas_cia_SPAR_01_GL_w_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_mas_cia_AssaultPack_w2";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_mas_cia_SPAR_01_GL_w_F","muzzle_snds_M","ACE_DBAL_A3_Red","optic_Hamr",{"rhs_mag_30Rnd_556x45_M855A1_PMAG",30},{"1Rnd_HE_Grenade_shell",1},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_mas_cia_B_suite_WINT",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_mas_cia_PlateCarrier1_win",{{"SmokeShell",4,1},{"rhs_mag_m67",1,1},{"rhs_mag_mk84",1,1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",5,30}}},{"B_mas_cia_AssaultPack_w2",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",10,30},{"rhs_mag_m713_Red",2,1},{"rhs_mag_m714_White",15,1},{"1Rnd_HE_Grenade_shell",20,1},{"ACE_HuntIR_M203",4,1}}},"H_mas_cia_helmet_ops_w","USP_RAID_SMW2_BLK",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_DEVGRU_2023_RTO_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Radio Operator (Winter)"; 
		faction = "BS_O_US_DEVGRU_2023"; 
		identityTypes[] = {"CamoHead_Persian_01_F", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_CombatUniform_w2"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","USP_BALACLAVA_ESS_MCA2","H_mas_cia_beanie_w"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","USP_BALACLAVA_ESS_MCA2","H_mas_cia_beanie_w"}; 
		weapons[] = {"arifle_mas_cia_SPAR_01_w_F","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_mas_cia_SPAR_01_w_F","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "TFT_RADIO_PACK_URBAN_1";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_mas_cia_SPAR_01_w_F","rhsusf_acc_SF3P556","ACE_DBAL_A3_Red","optic_Hamr",{"rhs_mag_30Rnd_556x45_M855A1_EPM",30},{},"rhs_acc_harris_swivel"},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_mas_cia_B_CombatUniform_w2",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_mas_cia_PlateCarrierLR_win",{{"SmokeShell",8,1},{"Chemlight_green",1,1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",5,30},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",2,1}}},{"TFT_RADIO_PACK_URBAN_1",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",8,30}}},"H_mas_cia_beanie_w","USP_BALACLAVA_ESS_MCA2",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_DEVGRU_2023_RTO_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Radio Operator (Winter)"; 
		faction = "BS_B_US_DEVGRU_2023"; 
		identityTypes[] = {"CamoHead_Persian_01_F", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_CombatUniform_w2"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","USP_BALACLAVA_ESS_MCA2","H_mas_cia_beanie_w"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","USP_BALACLAVA_ESS_MCA2","H_mas_cia_beanie_w"}; 
		weapons[] = {"arifle_mas_cia_SPAR_01_w_F","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_mas_cia_SPAR_01_w_F","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "TFT_RADIO_PACK_URBAN_1";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_mas_cia_SPAR_01_w_F","rhsusf_acc_SF3P556","ACE_DBAL_A3_Red","optic_Hamr",{"rhs_mag_30Rnd_556x45_M855A1_EPM",30},{},"rhs_acc_harris_swivel"},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_mas_cia_B_CombatUniform_w2",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_mas_cia_PlateCarrierLR_win",{{"SmokeShell",8,1},{"Chemlight_green",1,1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",5,30},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",2,1}}},{"TFT_RADIO_PACK_URBAN_1",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",8,30}}},"H_mas_cia_beanie_w","USP_BALACLAVA_ESS_MCA2",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_DEVGRU_2023_RTO_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Radio Operator (Winter)"; 
		faction = "BS_I_US_DEVGRU_2023"; 
		identityTypes[] = {"CamoHead_Persian_01_F", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_CombatUniform_w2"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","USP_BALACLAVA_ESS_MCA2","H_mas_cia_beanie_w"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","USP_BALACLAVA_ESS_MCA2","H_mas_cia_beanie_w"}; 
		weapons[] = {"arifle_mas_cia_SPAR_01_w_F","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_mas_cia_SPAR_01_w_F","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "TFT_RADIO_PACK_URBAN_1";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_mas_cia_SPAR_01_w_F","rhsusf_acc_SF3P556","ACE_DBAL_A3_Red","optic_Hamr",{"rhs_mag_30Rnd_556x45_M855A1_EPM",30},{},"rhs_acc_harris_swivel"},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_mas_cia_B_CombatUniform_w2",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_mas_cia_PlateCarrierLR_win",{{"SmokeShell",8,1},{"Chemlight_green",1,1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",5,30},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",2,1}}},{"TFT_RADIO_PACK_URBAN_1",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",8,30}}},"H_mas_cia_beanie_w","USP_BALACLAVA_ESS_MCA2",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_DEVGRU_2023_AR_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Machine Gunner (Winter)"; 
		faction = "BS_O_US_DEVGRU_2023"; 
		identityTypes[] = {"GreekHead_A3_10_sa", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_CombatUniform_w"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_mas_cia_airframe_w"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_mas_cia_airframe_w"}; 
		weapons[] = {"CUP_lmg_Mk48","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_lmg_Mk48","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_mas_cia_AssaultPack_w";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_Mk48","ACE_muzzle_mzls_B","CUP_acc_ANPEQ_15_Black","optic_tws_mg",{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",100},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_mas_cia_B_CombatUniform_w",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_mas_cia_PlateCarrierAR_win",{{"SmokeShell",6,1},{"rhs_mag_m67",2,1}}},{"B_mas_cia_AssaultPack_w",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M",1,100},{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",1,100},{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",1,100},{"CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M",4,100}}},"H_mas_cia_airframe_w","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_DEVGRU_2023_AR_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Machine Gunner (Winter)"; 
		faction = "BS_B_US_DEVGRU_2023"; 
		identityTypes[] = {"GreekHead_A3_10_sa", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_CombatUniform_w"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_mas_cia_airframe_w"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_mas_cia_airframe_w"}; 
		weapons[] = {"CUP_lmg_Mk48","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_lmg_Mk48","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_mas_cia_AssaultPack_w";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_Mk48","ACE_muzzle_mzls_B","CUP_acc_ANPEQ_15_Black","optic_tws_mg",{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",100},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_mas_cia_B_CombatUniform_w",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_mas_cia_PlateCarrierAR_win",{{"SmokeShell",6,1},{"rhs_mag_m67",2,1}}},{"B_mas_cia_AssaultPack_w",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M",1,100},{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",1,100},{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",1,100},{"CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M",4,100}}},"H_mas_cia_airframe_w","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_DEVGRU_2023_AR_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Machine Gunner (Winter)"; 
		faction = "BS_I_US_DEVGRU_2023"; 
		identityTypes[] = {"GreekHead_A3_10_sa", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_CombatUniform_w"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_mas_cia_airframe_w"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_mas_cia_airframe_w"}; 
		weapons[] = {"CUP_lmg_Mk48","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_lmg_Mk48","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_mas_cia_AssaultPack_w";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_Mk48","ACE_muzzle_mzls_B","CUP_acc_ANPEQ_15_Black","optic_tws_mg",{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",100},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_mas_cia_B_CombatUniform_w",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_mas_cia_PlateCarrierAR_win",{{"SmokeShell",6,1},{"rhs_mag_m67",2,1}}},{"B_mas_cia_AssaultPack_w",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M",1,100},{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",1,100},{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",1,100},{"CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M",4,100}}},"H_mas_cia_airframe_w","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_DEVGRU_2023_SNP_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Sniper (Winter)"; 
		faction = "BS_O_US_DEVGRU_2023"; 
		identityTypes[] = {"CamoHead_White_09_F", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_CombatUniform_w2"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_mas_cia_beanie_w"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_mas_cia_beanie_w"}; 
		weapons[] = {"srifle_mas_cia_LRR_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"srifle_mas_cia_LRR_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_mas_cia_Kitbag_LW";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"srifle_mas_cia_LRR_F","","","optic_Nightstalker",{"10Rnd_mas_cia_408_APDS_Mag",10},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_mas_cia_B_CombatUniform_w2",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_mas_cia_belt_carrier_LR_wint",{{"SmokeShell",5,1},{"rhs_mag_m67",1,1},{"10Rnd_mas_cia_408_APDS_Mag",6,10}}},{"B_mas_cia_Kitbag_LW",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_Kestrel4500",1},{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_ATragMX",1},{"rhsusf_mag_40Rnd_46x30_JHP",10,40}}},"H_mas_cia_beanie_w","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_DEVGRU_2023_SNP_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Sniper (Winter)"; 
		faction = "BS_B_US_DEVGRU_2023"; 
		identityTypes[] = {"CamoHead_White_09_F", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_CombatUniform_w2"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_mas_cia_beanie_w"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_mas_cia_beanie_w"}; 
		weapons[] = {"srifle_mas_cia_LRR_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"srifle_mas_cia_LRR_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_mas_cia_Kitbag_LW";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"srifle_mas_cia_LRR_F","","","optic_Nightstalker",{"10Rnd_mas_cia_408_APDS_Mag",10},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_mas_cia_B_CombatUniform_w2",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_mas_cia_belt_carrier_LR_wint",{{"SmokeShell",5,1},{"rhs_mag_m67",1,1},{"10Rnd_mas_cia_408_APDS_Mag",6,10}}},{"B_mas_cia_Kitbag_LW",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_Kestrel4500",1},{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_ATragMX",1},{"rhsusf_mag_40Rnd_46x30_JHP",10,40}}},"H_mas_cia_beanie_w","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_DEVGRU_2023_SNP_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Sniper (Winter)"; 
		faction = "BS_I_US_DEVGRU_2023"; 
		identityTypes[] = {"CamoHead_White_09_F", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_CombatUniform_w2"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_mas_cia_beanie_w"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_mas_cia_beanie_w"}; 
		weapons[] = {"srifle_mas_cia_LRR_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"srifle_mas_cia_LRR_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_mas_cia_Kitbag_LW";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"srifle_mas_cia_LRR_F","","","optic_Nightstalker",{"10Rnd_mas_cia_408_APDS_Mag",10},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_mas_cia_B_CombatUniform_w2",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_mas_cia_belt_carrier_LR_wint",{{"SmokeShell",5,1},{"rhs_mag_m67",1,1},{"10Rnd_mas_cia_408_APDS_Mag",6,10}}},{"B_mas_cia_Kitbag_LW",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_Kestrel4500",1},{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_ATragMX",1},{"rhsusf_mag_40Rnd_46x30_JHP",10,40}}},"H_mas_cia_beanie_w","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_DEVGRU_2023_Medic_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Doctor (Winter)"; 
		faction = "BS_O_US_DEVGRU_2023"; 
		identityTypes[] = {"CamoHead_White_19_F", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_CombatUniform_w"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_mas_cia_beanie_w"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_mas_cia_beanie_w"}; 
		weapons[] = {"arifle_mas_cia_SPAR_01_w_F","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_mas_cia_SPAR_01_w_F","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_mas_cia_AssaultPack_w2";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_mas_cia_SPAR_01_w_F","rhsusf_acc_nt4_tan","ACE_DBAL_A3_Red","optic_Hamr",{"rhs_mag_30Rnd_556x45_M855A1_EPM",30},{},"rhs_acc_harris_swivel"},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_mas_cia_B_CombatUniform_w",{{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_EarPlugs",1},{"ACE_CableTie",4},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",2,30}}},{"V_mas_cia_PlateCarrierRF_win",{{"SmokeShell",4,1},{"rhs_mag_mk84",2,1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",10,30}}},{"B_mas_cia_AssaultPack_w2",{{"ACE_wirecutter",1},{"ACE_HuntIR_monitor",1},{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_elasticBandage",40},{"ACE_quikclot",40},{"ACE_morphine",10},{"ACE_epinephrine",10},{"ACE_personalAidKit",6},{"ACE_tourniquet",10},{"ACE_salineIV",9},{"ACE_salineIV_500",4},{"ACE_adenosine",3}}},"H_mas_cia_beanie_w","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_DEVGRU_2023_Medic_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Doctor (Winter)"; 
		faction = "BS_B_US_DEVGRU_2023"; 
		identityTypes[] = {"CamoHead_White_19_F", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_CombatUniform_w"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_mas_cia_beanie_w"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_mas_cia_beanie_w"}; 
		weapons[] = {"arifle_mas_cia_SPAR_01_w_F","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_mas_cia_SPAR_01_w_F","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_mas_cia_AssaultPack_w2";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_mas_cia_SPAR_01_w_F","rhsusf_acc_nt4_tan","ACE_DBAL_A3_Red","optic_Hamr",{"rhs_mag_30Rnd_556x45_M855A1_EPM",30},{},"rhs_acc_harris_swivel"},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_mas_cia_B_CombatUniform_w",{{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_EarPlugs",1},{"ACE_CableTie",4},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",2,30}}},{"V_mas_cia_PlateCarrierRF_win",{{"SmokeShell",4,1},{"rhs_mag_mk84",2,1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",10,30}}},{"B_mas_cia_AssaultPack_w2",{{"ACE_wirecutter",1},{"ACE_HuntIR_monitor",1},{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_elasticBandage",40},{"ACE_quikclot",40},{"ACE_morphine",10},{"ACE_epinephrine",10},{"ACE_personalAidKit",6},{"ACE_tourniquet",10},{"ACE_salineIV",9},{"ACE_salineIV_500",4},{"ACE_adenosine",3}}},"H_mas_cia_beanie_w","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_DEVGRU_2023_Medic_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Doctor (Winter)"; 
		faction = "BS_I_US_DEVGRU_2023"; 
		identityTypes[] = {"CamoHead_White_19_F", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_CombatUniform_w"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_mas_cia_beanie_w"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_mas_cia_beanie_w"}; 
		weapons[] = {"arifle_mas_cia_SPAR_01_w_F","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_mas_cia_SPAR_01_w_F","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_mas_cia_AssaultPack_w2";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_mas_cia_SPAR_01_w_F","rhsusf_acc_nt4_tan","ACE_DBAL_A3_Red","optic_Hamr",{"rhs_mag_30Rnd_556x45_M855A1_EPM",30},{},"rhs_acc_harris_swivel"},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_mas_cia_B_CombatUniform_w",{{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_EarPlugs",1},{"ACE_CableTie",4},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",2,30}}},{"V_mas_cia_PlateCarrierRF_win",{{"SmokeShell",4,1},{"rhs_mag_mk84",2,1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",10,30}}},{"B_mas_cia_AssaultPack_w2",{{"ACE_wirecutter",1},{"ACE_HuntIR_monitor",1},{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_elasticBandage",40},{"ACE_quikclot",40},{"ACE_morphine",10},{"ACE_epinephrine",10},{"ACE_personalAidKit",6},{"ACE_tourniquet",10},{"ACE_salineIV",9},{"ACE_salineIV_500",4},{"ACE_adenosine",3}}},"H_mas_cia_beanie_w","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_DEVGRU_2023_Rifleman_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Rifleman (Desert)"; 
		faction = "BS_O_US_DEVGRU_2023"; 
		identityTypes[] = {"TanoanHead_A3_03", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "USP_G3F_G3C_KP_MX_AOR1"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","USP_OPSCORE_FASTMTC_KTBANSHEE_MS"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","USP_OPSCORE_FASTMTC_KTBANSHEE_MS"}; 
		weapons[] = {"rhs_weap_mk18_d","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_mk18_d","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "tfa_eagle_aor1";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_mk18_d","muzzle_snds_M","rhsusf_acc_anpeq16a","optic_Hamr",{"rhs_mag_30Rnd_556x45_M855A1_EPM",30},{},""},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"USP_G3F_G3C_KP_MX_AOR1",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"tfa_lbt_operator_aor1",{{"SmokeShell",8,1},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",2,1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",5,30}}},{"tfa_eagle_aor1",{{"ACE_wirecutter",1},{"ACE_HuntIR_monitor",1},{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"rhsusf_mag_40Rnd_46x30_JHP",2,40},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",15,30}}},"USP_OPSCORE_FASTMTC_KTBANSHEE_MS","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_DEVGRU_2023_Rifleman_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Rifleman (Desert)"; 
		faction = "BS_B_US_DEVGRU_2023"; 
		identityTypes[] = {"TanoanHead_A3_03", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "USP_G3F_G3C_KP_MX_AOR1"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","USP_OPSCORE_FASTMTC_KTBANSHEE_MS"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","USP_OPSCORE_FASTMTC_KTBANSHEE_MS"}; 
		weapons[] = {"rhs_weap_mk18_d","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_mk18_d","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "tfa_eagle_aor1";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_mk18_d","muzzle_snds_M","rhsusf_acc_anpeq16a","optic_Hamr",{"rhs_mag_30Rnd_556x45_M855A1_EPM",30},{},""},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"USP_G3F_G3C_KP_MX_AOR1",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"tfa_lbt_operator_aor1",{{"SmokeShell",8,1},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",2,1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",5,30}}},{"tfa_eagle_aor1",{{"ACE_wirecutter",1},{"ACE_HuntIR_monitor",1},{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"rhsusf_mag_40Rnd_46x30_JHP",2,40},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",15,30}}},"USP_OPSCORE_FASTMTC_KTBANSHEE_MS","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_DEVGRU_2023_Rifleman_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Rifleman (Desert)"; 
		faction = "BS_I_US_DEVGRU_2023"; 
		identityTypes[] = {"TanoanHead_A3_03", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "USP_G3F_G3C_KP_MX_AOR1"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","USP_OPSCORE_FASTMTC_KTBANSHEE_MS"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","USP_OPSCORE_FASTMTC_KTBANSHEE_MS"}; 
		weapons[] = {"rhs_weap_mk18_d","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_mk18_d","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "tfa_eagle_aor1";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_mk18_d","muzzle_snds_M","rhsusf_acc_anpeq16a","optic_Hamr",{"rhs_mag_30Rnd_556x45_M855A1_EPM",30},{},""},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"USP_G3F_G3C_KP_MX_AOR1",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"tfa_lbt_operator_aor1",{{"SmokeShell",8,1},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",2,1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",5,30}}},{"tfa_eagle_aor1",{{"ACE_wirecutter",1},{"ACE_HuntIR_monitor",1},{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"rhsusf_mag_40Rnd_46x30_JHP",2,40},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",15,30}}},"USP_OPSCORE_FASTMTC_KTBANSHEE_MS","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_DEVGRU_2023_GL_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Grenadier (Desert)"; 
		faction = "BS_O_US_DEVGRU_2023"; 
		identityTypes[] = {"AsianHead_A3_01", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "USP_G3C_KP_MX_AOR1"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","USP_OPSCORE_FASTMTC_KTBANSHEE_MS"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","USP_OPSCORE_FASTMTC_KTBANSHEE_MS"}; 
		weapons[] = {"arifle_mas_cia_SPAR_01_GL_snd_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_mas_cia_SPAR_01_GL_snd_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "tfa_eagle_aor1";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_mas_cia_SPAR_01_GL_snd_F","rhsusf_acc_nt4_tan","ACE_DBAL_A3_Red","optic_Hamr",{"rhs_mag_30Rnd_556x45_M855A1_PMAG",30},{"1Rnd_HE_Grenade_shell",1},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"USP_G3C_KP_MX_AOR1",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"tfa_lbt_operator_aor1",{{"SmokeShell",4,1},{"rhs_mag_m67",1,1},{"rhs_mag_mk84",1,1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",5,30}}},{"tfa_eagle_aor1",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",10,30},{"rhs_mag_m713_Red",2,1},{"rhs_mag_m714_White",15,1},{"1Rnd_HE_Grenade_shell",20,1},{"ACE_HuntIR_M203",4,1}}},"USP_OPSCORE_FASTMTC_KTBANSHEE_MS","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_DEVGRU_2023_GL_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Grenadier (Desert)"; 
		faction = "BS_B_US_DEVGRU_2023"; 
		identityTypes[] = {"AsianHead_A3_01", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "USP_G3C_KP_MX_AOR1"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","USP_OPSCORE_FASTMTC_KTBANSHEE_MS"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","USP_OPSCORE_FASTMTC_KTBANSHEE_MS"}; 
		weapons[] = {"arifle_mas_cia_SPAR_01_GL_snd_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_mas_cia_SPAR_01_GL_snd_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "tfa_eagle_aor1";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_mas_cia_SPAR_01_GL_snd_F","rhsusf_acc_nt4_tan","ACE_DBAL_A3_Red","optic_Hamr",{"rhs_mag_30Rnd_556x45_M855A1_PMAG",30},{"1Rnd_HE_Grenade_shell",1},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"USP_G3C_KP_MX_AOR1",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"tfa_lbt_operator_aor1",{{"SmokeShell",4,1},{"rhs_mag_m67",1,1},{"rhs_mag_mk84",1,1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",5,30}}},{"tfa_eagle_aor1",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",10,30},{"rhs_mag_m713_Red",2,1},{"rhs_mag_m714_White",15,1},{"1Rnd_HE_Grenade_shell",20,1},{"ACE_HuntIR_M203",4,1}}},"USP_OPSCORE_FASTMTC_KTBANSHEE_MS","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_DEVGRU_2023_GL_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Grenadier (Desert)"; 
		faction = "BS_I_US_DEVGRU_2023"; 
		identityTypes[] = {"AsianHead_A3_01", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "USP_G3C_KP_MX_AOR1"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","USP_OPSCORE_FASTMTC_KTBANSHEE_MS"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","USP_OPSCORE_FASTMTC_KTBANSHEE_MS"}; 
		weapons[] = {"arifle_mas_cia_SPAR_01_GL_snd_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_mas_cia_SPAR_01_GL_snd_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "tfa_eagle_aor1";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_mas_cia_SPAR_01_GL_snd_F","rhsusf_acc_nt4_tan","ACE_DBAL_A3_Red","optic_Hamr",{"rhs_mag_30Rnd_556x45_M855A1_PMAG",30},{"1Rnd_HE_Grenade_shell",1},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"USP_G3C_KP_MX_AOR1",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"tfa_lbt_operator_aor1",{{"SmokeShell",4,1},{"rhs_mag_m67",1,1},{"rhs_mag_mk84",1,1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",5,30}}},{"tfa_eagle_aor1",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",10,30},{"rhs_mag_m713_Red",2,1},{"rhs_mag_m714_White",15,1},{"1Rnd_HE_Grenade_shell",20,1},{"ACE_HuntIR_M203",4,1}}},"USP_OPSCORE_FASTMTC_KTBANSHEE_MS","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_DEVGRU_2023_RTO_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Radio Operator (Desert)"; 
		faction = "BS_O_US_DEVGRU_2023"; 
		identityTypes[] = {"GreekHead_A3_06", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "USP_G3C_KP_MX_AOR1"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","USP_OPSCORE_FASTMTC_KTBANSHEE_MSW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","USP_OPSCORE_FASTMTC_KTBANSHEE_MSW"}; 
		weapons[] = {"arifle_mas_cia_SPAR_01_snd_F","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_mas_cia_SPAR_01_snd_F","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "TFT_RADIO_PACK_CSAT_DESERT_HEX_1";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_mas_cia_SPAR_01_snd_F","rhsusf_acc_nt4_tan","ACE_DBAL_A3_Red","optic_Hamr",{"rhs_mag_30Rnd_556x45_M855A1_EPM",30},{},"rhs_acc_harris_swivel"},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"USP_G3C_KP_MX_AOR1",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"tfa_lbt_operator_aor1",{{"SmokeShell",8,1},{"Chemlight_green",1,1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",5,30},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",2,1}}},{"TFT_RADIO_PACK_CSAT_DESERT_HEX_1",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",8,30}}},"USP_OPSCORE_FASTMTC_KTBANSHEE_MSW","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_DEVGRU_2023_RTO_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Radio Operator (Desert)"; 
		faction = "BS_B_US_DEVGRU_2023"; 
		identityTypes[] = {"GreekHead_A3_06", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "USP_G3C_KP_MX_AOR1"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","USP_OPSCORE_FASTMTC_KTBANSHEE_MSW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","USP_OPSCORE_FASTMTC_KTBANSHEE_MSW"}; 
		weapons[] = {"arifle_mas_cia_SPAR_01_snd_F","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_mas_cia_SPAR_01_snd_F","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "TFT_RADIO_PACK_CSAT_DESERT_HEX_1";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_mas_cia_SPAR_01_snd_F","rhsusf_acc_nt4_tan","ACE_DBAL_A3_Red","optic_Hamr",{"rhs_mag_30Rnd_556x45_M855A1_EPM",30},{},"rhs_acc_harris_swivel"},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"USP_G3C_KP_MX_AOR1",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"tfa_lbt_operator_aor1",{{"SmokeShell",8,1},{"Chemlight_green",1,1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",5,30},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",2,1}}},{"TFT_RADIO_PACK_CSAT_DESERT_HEX_1",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",8,30}}},"USP_OPSCORE_FASTMTC_KTBANSHEE_MSW","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_DEVGRU_2023_RTO_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Radio Operator (Desert)"; 
		faction = "BS_I_US_DEVGRU_2023"; 
		identityTypes[] = {"GreekHead_A3_06", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "USP_G3C_KP_MX_AOR1"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","USP_OPSCORE_FASTMTC_KTBANSHEE_MSW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","USP_OPSCORE_FASTMTC_KTBANSHEE_MSW"}; 
		weapons[] = {"arifle_mas_cia_SPAR_01_snd_F","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_mas_cia_SPAR_01_snd_F","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "TFT_RADIO_PACK_CSAT_DESERT_HEX_1";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_mas_cia_SPAR_01_snd_F","rhsusf_acc_nt4_tan","ACE_DBAL_A3_Red","optic_Hamr",{"rhs_mag_30Rnd_556x45_M855A1_EPM",30},{},"rhs_acc_harris_swivel"},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"USP_G3C_KP_MX_AOR1",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"tfa_lbt_operator_aor1",{{"SmokeShell",8,1},{"Chemlight_green",1,1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",5,30},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",2,1}}},{"TFT_RADIO_PACK_CSAT_DESERT_HEX_1",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",8,30}}},"USP_OPSCORE_FASTMTC_KTBANSHEE_MSW","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_DEVGRU_2023_AR_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Machine Gunner (Desert)"; 
		faction = "BS_O_US_DEVGRU_2023"; 
		identityTypes[] = {"AfricanHead_01", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "USP_G3C_KP_MX_AOR1"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","USP_OPSCORE_FASTMTC_KTBANSHEE_MTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","USP_OPSCORE_FASTMTC_KTBANSHEE_MTW"}; 
		weapons[] = {"CUP_lmg_Mk48_nohg_des","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_lmg_Mk48_nohg_des","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "tfa_eagle_aor1";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_Mk48_nohg_des","ACE_muzzle_mzls_B","CUP_acc_ANPEQ_15","optic_tws_mg",{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",100},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"USP_G3C_KP_MX_AOR1",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"tfa_lbt_operator_aor1",{{"SmokeShell",6,1},{"rhs_mag_m67",2,1}}},{"tfa_eagle_aor1",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M",1,100},{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",1,100},{"CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M",1,100},{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",5,100}}},"USP_OPSCORE_FASTMTC_KTBANSHEE_MTW","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_DEVGRU_2023_AR_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Machine Gunner (Desert)"; 
		faction = "BS_B_US_DEVGRU_2023"; 
		identityTypes[] = {"AfricanHead_01", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "USP_G3C_KP_MX_AOR1"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","USP_OPSCORE_FASTMTC_KTBANSHEE_MTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","USP_OPSCORE_FASTMTC_KTBANSHEE_MTW"}; 
		weapons[] = {"CUP_lmg_Mk48_nohg_des","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_lmg_Mk48_nohg_des","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "tfa_eagle_aor1";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_Mk48_nohg_des","ACE_muzzle_mzls_B","CUP_acc_ANPEQ_15","optic_tws_mg",{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",100},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"USP_G3C_KP_MX_AOR1",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"tfa_lbt_operator_aor1",{{"SmokeShell",6,1},{"rhs_mag_m67",2,1}}},{"tfa_eagle_aor1",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M",1,100},{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",1,100},{"CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M",1,100},{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",5,100}}},"USP_OPSCORE_FASTMTC_KTBANSHEE_MTW","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_DEVGRU_2023_AR_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Machine Gunner (Desert)"; 
		faction = "BS_I_US_DEVGRU_2023"; 
		identityTypes[] = {"AfricanHead_01", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "USP_G3C_KP_MX_AOR1"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","USP_OPSCORE_FASTMTC_KTBANSHEE_MTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","USP_OPSCORE_FASTMTC_KTBANSHEE_MTW"}; 
		weapons[] = {"CUP_lmg_Mk48_nohg_des","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_lmg_Mk48_nohg_des","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "tfa_eagle_aor1";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_Mk48_nohg_des","ACE_muzzle_mzls_B","CUP_acc_ANPEQ_15","optic_tws_mg",{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",100},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"USP_G3C_KP_MX_AOR1",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"tfa_lbt_operator_aor1",{{"SmokeShell",6,1},{"rhs_mag_m67",2,1}}},{"tfa_eagle_aor1",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M",1,100},{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",1,100},{"CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M",1,100},{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",5,100}}},"USP_OPSCORE_FASTMTC_KTBANSHEE_MTW","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_DEVGRU_2023_SNP_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Sniper (Desert)"; 
		faction = "BS_O_US_DEVGRU_2023"; 
		identityTypes[] = {"WhiteHead_03", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "USP_G3C_CS_KP_MX_AOR1"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","USP_OPSCORE_FASTMTC_KTBANSHEE_MSW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","USP_OPSCORE_FASTMTC_KTBANSHEE_MSW"}; 
		weapons[] = {"srifle_mas_cia_LRR_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"srifle_mas_cia_LRR_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "tfa_eagle_aor1";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"srifle_mas_cia_LRR_F","","","optic_Nightstalker",{"10Rnd_mas_cia_408_APDS_Mag",10},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"USP_G3C_CS_KP_MX_AOR1",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"tfa_lbt_operator_aor1",{{"SmokeShell",5,1},{"rhs_mag_m67",1,1},{"10Rnd_mas_cia_408_APDS_Mag",12,10}}},{"tfa_eagle_aor1",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_Kestrel4500",1},{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_ATragMX",1},{"rhsusf_mag_40Rnd_46x30_JHP",10,40}}},"USP_OPSCORE_FASTMTC_KTBANSHEE_MSW","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_DEVGRU_2023_SNP_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Sniper (Desert)"; 
		faction = "BS_B_US_DEVGRU_2023"; 
		identityTypes[] = {"WhiteHead_03", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "USP_G3C_CS_KP_MX_AOR1"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","USP_OPSCORE_FASTMTC_KTBANSHEE_MSW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","USP_OPSCORE_FASTMTC_KTBANSHEE_MSW"}; 
		weapons[] = {"srifle_mas_cia_LRR_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"srifle_mas_cia_LRR_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "tfa_eagle_aor1";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"srifle_mas_cia_LRR_F","","","optic_Nightstalker",{"10Rnd_mas_cia_408_APDS_Mag",10},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"USP_G3C_CS_KP_MX_AOR1",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"tfa_lbt_operator_aor1",{{"SmokeShell",5,1},{"rhs_mag_m67",1,1},{"10Rnd_mas_cia_408_APDS_Mag",12,10}}},{"tfa_eagle_aor1",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_Kestrel4500",1},{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_ATragMX",1},{"rhsusf_mag_40Rnd_46x30_JHP",10,40}}},"USP_OPSCORE_FASTMTC_KTBANSHEE_MSW","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_DEVGRU_2023_SNP_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Sniper (Desert)"; 
		faction = "BS_I_US_DEVGRU_2023"; 
		identityTypes[] = {"WhiteHead_03", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "USP_G3C_CS_KP_MX_AOR1"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","USP_OPSCORE_FASTMTC_KTBANSHEE_MSW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","USP_OPSCORE_FASTMTC_KTBANSHEE_MSW"}; 
		weapons[] = {"srifle_mas_cia_LRR_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"srifle_mas_cia_LRR_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "tfa_eagle_aor1";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"srifle_mas_cia_LRR_F","","","optic_Nightstalker",{"10Rnd_mas_cia_408_APDS_Mag",10},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"USP_G3C_CS_KP_MX_AOR1",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"tfa_lbt_operator_aor1",{{"SmokeShell",5,1},{"rhs_mag_m67",1,1},{"10Rnd_mas_cia_408_APDS_Mag",12,10}}},{"tfa_eagle_aor1",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_Kestrel4500",1},{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_ATragMX",1},{"rhsusf_mag_40Rnd_46x30_JHP",10,40}}},"USP_OPSCORE_FASTMTC_KTBANSHEE_MSW","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_DEVGRU_2023_Medic_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Doctor (Desert)"; 
		faction = "BS_O_US_DEVGRU_2023"; 
		identityTypes[] = {"WhiteHead_02", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "USP_G3C_CS_KP_MX_AOR1"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","USP_OPSCORE_FASTMTC_KTBANSHEE_MSW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","USP_OPSCORE_FASTMTC_KTBANSHEE_MSW"}; 
		weapons[] = {"arifle_mas_cia_SPAR_01_snd_F","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_mas_cia_SPAR_01_snd_F","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "tfa_eagle_aor1";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_mas_cia_SPAR_01_snd_F","rhsusf_acc_nt4_tan","ACE_DBAL_A3_Red","optic_Hamr",{"rhs_mag_30Rnd_556x45_M855A1_EPM",30},{},"rhs_acc_harris_swivel"},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"USP_G3C_CS_KP_MX_AOR1",{{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_EarPlugs",1},{"ACE_CableTie",4},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",2,30}}},{"tfa_lbt_operator_aor1",{{"SmokeShell",4,1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",10,30},{"rhs_mag_mk84",2,1}}},{"tfa_eagle_aor1",{{"ACE_wirecutter",1},{"ACE_HuntIR_monitor",1},{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_elasticBandage",40},{"ACE_quikclot",40},{"ACE_morphine",10},{"ACE_epinephrine",10},{"ACE_personalAidKit",6},{"ACE_tourniquet",10},{"ACE_salineIV",9},{"ACE_salineIV_500",4},{"ACE_adenosine",3}}},"USP_OPSCORE_FASTMTC_KTBANSHEE_MSW","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_DEVGRU_2023_Medic_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Doctor (Desert)"; 
		faction = "BS_B_US_DEVGRU_2023"; 
		identityTypes[] = {"WhiteHead_02", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "USP_G3C_CS_KP_MX_AOR1"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","USP_OPSCORE_FASTMTC_KTBANSHEE_MSW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","USP_OPSCORE_FASTMTC_KTBANSHEE_MSW"}; 
		weapons[] = {"arifle_mas_cia_SPAR_01_snd_F","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_mas_cia_SPAR_01_snd_F","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "tfa_eagle_aor1";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_mas_cia_SPAR_01_snd_F","rhsusf_acc_nt4_tan","ACE_DBAL_A3_Red","optic_Hamr",{"rhs_mag_30Rnd_556x45_M855A1_EPM",30},{},"rhs_acc_harris_swivel"},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"USP_G3C_CS_KP_MX_AOR1",{{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_EarPlugs",1},{"ACE_CableTie",4},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",2,30}}},{"tfa_lbt_operator_aor1",{{"SmokeShell",4,1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",10,30},{"rhs_mag_mk84",2,1}}},{"tfa_eagle_aor1",{{"ACE_wirecutter",1},{"ACE_HuntIR_monitor",1},{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_elasticBandage",40},{"ACE_quikclot",40},{"ACE_morphine",10},{"ACE_epinephrine",10},{"ACE_personalAidKit",6},{"ACE_tourniquet",10},{"ACE_salineIV",9},{"ACE_salineIV_500",4},{"ACE_adenosine",3}}},"USP_OPSCORE_FASTMTC_KTBANSHEE_MSW","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_DEVGRU_2023_Medic_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Doctor (Desert)"; 
		faction = "BS_I_US_DEVGRU_2023"; 
		identityTypes[] = {"WhiteHead_02", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "USP_G3C_CS_KP_MX_AOR1"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","USP_OPSCORE_FASTMTC_KTBANSHEE_MSW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","USP_OPSCORE_FASTMTC_KTBANSHEE_MSW"}; 
		weapons[] = {"arifle_mas_cia_SPAR_01_snd_F","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_mas_cia_SPAR_01_snd_F","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "tfa_eagle_aor1";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_mas_cia_SPAR_01_snd_F","rhsusf_acc_nt4_tan","ACE_DBAL_A3_Red","optic_Hamr",{"rhs_mag_30Rnd_556x45_M855A1_EPM",30},{},"rhs_acc_harris_swivel"},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"USP_G3C_CS_KP_MX_AOR1",{{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_EarPlugs",1},{"ACE_CableTie",4},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",2,30}}},{"tfa_lbt_operator_aor1",{{"SmokeShell",4,1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",10,30},{"rhs_mag_mk84",2,1}}},{"tfa_eagle_aor1",{{"ACE_wirecutter",1},{"ACE_HuntIR_monitor",1},{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_elasticBandage",40},{"ACE_quikclot",40},{"ACE_morphine",10},{"ACE_epinephrine",10},{"ACE_personalAidKit",6},{"ACE_tourniquet",10},{"ACE_salineIV",9},{"ACE_salineIV_500",4},{"ACE_adenosine",3}}},"USP_OPSCORE_FASTMTC_KTBANSHEE_MSW","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_DEVGRU_2023_DIVER_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Diver (Winter)"; 
		faction = "BS_O_US_DEVGRU_2023"; 
		identityTypes[] = {"WhiteHead_09", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","NVGoggles_mas_cia_hv","G_B_Diving","H_HelmetSpecB_green"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","NVGoggles_mas_cia_hv","G_B_Diving","H_HelmetSpecB_green"}; 
		weapons[] = {"arifle_mas_cia_SDAR_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_mas_cia_SDAR_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_mas_cia_Kitbag_LB";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_mas_cia_SDAR_F","muzzle_snds_M","rhsusf_acc_anpeq15_bk","rhsusf_acc_g33_xps3",{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger",30},{},"rhs_acc_harris_swivel"},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_mas_cia_B_Wetsuit",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_mas_cia_RebreatherB",{{"SmokeShell",8,1},{"Chemlight_green",1,1},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",2,1}}},{"B_mas_cia_Kitbag_LB",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_elasticBandage",10},{"ACE_quikclot",10},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_epinephrine",1},{"ACE_microDAGR",1},{"rhsusf_mag_40Rnd_46x30_JHP",2,40},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger",15,30}}},"H_HelmetSpecB_green","G_B_Diving",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch","NVGoggles_mas_cia_hv"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_DEVGRU_2023_DIVER_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Diver (Winter)"; 
		faction = "BS_B_US_DEVGRU_2023"; 
		identityTypes[] = {"WhiteHead_09", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","NVGoggles_mas_cia_hv","G_B_Diving","H_HelmetSpecB_green"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","NVGoggles_mas_cia_hv","G_B_Diving","H_HelmetSpecB_green"}; 
		weapons[] = {"arifle_mas_cia_SDAR_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_mas_cia_SDAR_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_mas_cia_Kitbag_LB";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_mas_cia_SDAR_F","muzzle_snds_M","rhsusf_acc_anpeq15_bk","rhsusf_acc_g33_xps3",{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger",30},{},"rhs_acc_harris_swivel"},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_mas_cia_B_Wetsuit",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_mas_cia_RebreatherB",{{"SmokeShell",8,1},{"Chemlight_green",1,1},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",2,1}}},{"B_mas_cia_Kitbag_LB",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_elasticBandage",10},{"ACE_quikclot",10},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_epinephrine",1},{"ACE_microDAGR",1},{"rhsusf_mag_40Rnd_46x30_JHP",2,40},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger",15,30}}},"H_HelmetSpecB_green","G_B_Diving",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch","NVGoggles_mas_cia_hv"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_DEVGRU_2023_DIVER_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Diver (Winter)"; 
		faction = "BS_I_US_DEVGRU_2023"; 
		identityTypes[] = {"WhiteHead_09", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","NVGoggles_mas_cia_hv","G_B_Diving","H_HelmetSpecB_green"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","NVGoggles_mas_cia_hv","G_B_Diving","H_HelmetSpecB_green"}; 
		weapons[] = {"arifle_mas_cia_SDAR_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_mas_cia_SDAR_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_mas_cia_Kitbag_LB";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_mas_cia_SDAR_F","muzzle_snds_M","rhsusf_acc_anpeq15_bk","rhsusf_acc_g33_xps3",{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger",30},{},"rhs_acc_harris_swivel"},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_mas_cia_B_Wetsuit",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_mas_cia_RebreatherB",{{"SmokeShell",8,1},{"Chemlight_green",1,1},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",2,1}}},{"B_mas_cia_Kitbag_LB",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_elasticBandage",10},{"ACE_quikclot",10},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_epinephrine",1},{"ACE_microDAGR",1},{"rhsusf_mag_40Rnd_46x30_JHP",2,40},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger",15,30}}},"H_HelmetSpecB_green","G_B_Diving",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch","NVGoggles_mas_cia_hv"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_DEVGRU_2023_DIVER_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Diver (Desert)"; 
		faction = "BS_O_US_DEVGRU_2023"; 
		identityTypes[] = {"TanoanHead_A3_06", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","NVGoggles_mas_cia_hv","G_B_Diving","H_HelmetSpecB_green"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","NVGoggles_mas_cia_hv","G_B_Diving","H_HelmetSpecB_green"}; 
		weapons[] = {"arifle_mas_cia_SDAR_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_mas_cia_SDAR_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_mas_cia_Kitbag_LB";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_mas_cia_SDAR_F","muzzle_snds_M","rhsusf_acc_anpeq15_bk","rhsusf_acc_g33_xps3",{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger",30},{},"rhs_acc_harris_swivel"},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_mas_cia_B_Wetsuit",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_mas_cia_RebreatherB",{{"SmokeShell",8,1},{"Chemlight_green",1,1},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",2,1}}},{"B_mas_cia_Kitbag_LB",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_elasticBandage",10},{"ACE_quikclot",10},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_epinephrine",1},{"ACE_microDAGR",1},{"rhsusf_mag_40Rnd_46x30_JHP",2,40},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger",15,30}}},"H_HelmetSpecB_green","G_B_Diving",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch","NVGoggles_mas_cia_hv"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_DEVGRU_2023_DIVER_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Diver (Desert)"; 
		faction = "BS_B_US_DEVGRU_2023"; 
		identityTypes[] = {"TanoanHead_A3_06", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","NVGoggles_mas_cia_hv","G_B_Diving","H_HelmetSpecB_green"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","NVGoggles_mas_cia_hv","G_B_Diving","H_HelmetSpecB_green"}; 
		weapons[] = {"arifle_mas_cia_SDAR_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_mas_cia_SDAR_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_mas_cia_Kitbag_LB";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_mas_cia_SDAR_F","muzzle_snds_M","rhsusf_acc_anpeq15_bk","rhsusf_acc_g33_xps3",{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger",30},{},"rhs_acc_harris_swivel"},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_mas_cia_B_Wetsuit",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_mas_cia_RebreatherB",{{"SmokeShell",8,1},{"Chemlight_green",1,1},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",2,1}}},{"B_mas_cia_Kitbag_LB",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_elasticBandage",10},{"ACE_quikclot",10},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_epinephrine",1},{"ACE_microDAGR",1},{"rhsusf_mag_40Rnd_46x30_JHP",2,40},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger",15,30}}},"H_HelmetSpecB_green","G_B_Diving",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch","NVGoggles_mas_cia_hv"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_DEVGRU_2023_DIVER_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Diver (Desert)"; 
		faction = "BS_I_US_DEVGRU_2023"; 
		identityTypes[] = {"TanoanHead_A3_06", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","NVGoggles_mas_cia_hv","G_B_Diving","H_HelmetSpecB_green"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","NVGoggles_mas_cia_hv","G_B_Diving","H_HelmetSpecB_green"}; 
		weapons[] = {"arifle_mas_cia_SDAR_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"arifle_mas_cia_SDAR_F","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_mas_cia_Kitbag_LB";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_mas_cia_SDAR_F","muzzle_snds_M","rhsusf_acc_anpeq15_bk","rhsusf_acc_g33_xps3",{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger",30},{},"rhs_acc_harris_swivel"},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_mas_cia_B_Wetsuit",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_mas_cia_RebreatherB",{{"SmokeShell",8,1},{"Chemlight_green",1,1},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",2,1}}},{"B_mas_cia_Kitbag_LB",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_elasticBandage",10},{"ACE_quikclot",10},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_epinephrine",1},{"ACE_microDAGR",1},{"rhsusf_mag_40Rnd_46x30_JHP",2,40},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger",15,30}}},"H_HelmetSpecB_green","G_B_Diving",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch","NVGoggles_mas_cia_hv"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_DEVGRU_2023_Officer_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Officer (Woodland)"; 
		faction = "BS_O_US_DEVGRU_2023"; 
		identityTypes[] = {"CamoHead_White_15_F", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_suite_CQB"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_Hat_brown"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_Hat_brown"}; 
		weapons[] = {"rhsusf_weap_m9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhsusf_weap_m9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"U_mas_cia_B_suite_CQB",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_TacVest_blk",{{"rhs_mag_m67",1,1},{"rhsusf_mag_15Rnd_9x19_JHP",13,15},{"SmokeShell",2,1}}},{},"H_Hat_brown","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_DEVGRU_2023_Officer_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Officer (Woodland)"; 
		faction = "BS_B_US_DEVGRU_2023"; 
		identityTypes[] = {"CamoHead_White_15_F", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_suite_CQB"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_Hat_brown"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_Hat_brown"}; 
		weapons[] = {"rhsusf_weap_m9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhsusf_weap_m9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"U_mas_cia_B_suite_CQB",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_TacVest_blk",{{"rhs_mag_m67",1,1},{"rhsusf_mag_15Rnd_9x19_JHP",13,15},{"SmokeShell",2,1}}},{},"H_Hat_brown","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_DEVGRU_2023_Officer_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Officer (Woodland)"; 
		faction = "BS_I_US_DEVGRU_2023"; 
		identityTypes[] = {"CamoHead_White_15_F", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_suite_CQB"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_Hat_brown"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_Hat_brown"}; 
		weapons[] = {"rhsusf_weap_m9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhsusf_weap_m9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"U_mas_cia_B_suite_CQB",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_TacVest_blk",{{"rhs_mag_m67",1,1},{"rhsusf_mag_15Rnd_9x19_JHP",13,15},{"SmokeShell",2,1}}},{},"H_Hat_brown","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_DEVGRU_2023_Officer_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Officer (Winter)"; 
		faction = "BS_O_US_DEVGRU_2023"; 
		identityTypes[] = {"WhiteHead_06", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_CombatUniform_w"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_Hat_grey"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_Hat_grey"}; 
		weapons[] = {"rhsusf_weap_m9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhsusf_weap_m9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"U_mas_cia_B_CombatUniform_w",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_mas_cia_belt_carrier_LR_wint",{{"rhs_mag_m67",1,1},{"rhsusf_mag_15Rnd_9x19_JHP",11,15}}},{},"H_Hat_grey","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_DEVGRU_2023_Officer_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Officer (Winter)"; 
		faction = "BS_B_US_DEVGRU_2023"; 
		identityTypes[] = {"WhiteHead_06", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_CombatUniform_w"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_Hat_grey"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_Hat_grey"}; 
		weapons[] = {"rhsusf_weap_m9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhsusf_weap_m9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"U_mas_cia_B_CombatUniform_w",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_mas_cia_belt_carrier_LR_wint",{{"rhs_mag_m67",1,1},{"rhsusf_mag_15Rnd_9x19_JHP",11,15}}},{},"H_Hat_grey","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_DEVGRU_2023_Officer_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Officer (Winter)"; 
		faction = "BS_I_US_DEVGRU_2023"; 
		identityTypes[] = {"WhiteHead_06", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_CombatUniform_w"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_Hat_grey"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_Hat_grey"}; 
		weapons[] = {"rhsusf_weap_m9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhsusf_weap_m9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"U_mas_cia_B_CombatUniform_w",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_mas_cia_belt_carrier_LR_wint",{{"rhs_mag_m67",1,1},{"rhsusf_mag_15Rnd_9x19_JHP",11,15}}},{},"H_Hat_grey","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_DEVGRU_2023_Officer_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Officer (Desert)"; 
		faction = "BS_O_US_DEVGRU_2023"; 
		identityTypes[] = {"TanoanHead_A3_07", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_suite_VEG"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_Hat_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_Hat_camo"}; 
		weapons[] = {"rhsusf_weap_m9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhsusf_weap_m9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"U_mas_cia_B_suite_VEG",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_TacVest_khk",{{"rhs_mag_m67",1,1},{"rhsusf_mag_15Rnd_9x19_JHP",13,15},{"SmokeShell",2,1}}},{},"H_Hat_camo","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_DEVGRU_2023_Officer_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Officer (Desert)"; 
		faction = "BS_B_US_DEVGRU_2023"; 
		identityTypes[] = {"TanoanHead_A3_07", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_suite_VEG"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_Hat_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_Hat_camo"}; 
		weapons[] = {"rhsusf_weap_m9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhsusf_weap_m9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"U_mas_cia_B_suite_VEG",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_TacVest_khk",{{"rhs_mag_m67",1,1},{"rhsusf_mag_15Rnd_9x19_JHP",13,15},{"SmokeShell",2,1}}},{},"H_Hat_camo","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_DEVGRU_2023_Officer_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Officer (Desert)"; 
		faction = "BS_I_US_DEVGRU_2023"; 
		identityTypes[] = {"TanoanHead_A3_07", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_suite_VEG"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_Hat_camo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_Hat_camo"}; 
		weapons[] = {"rhsusf_weap_m9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhsusf_weap_m9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"U_mas_cia_B_suite_VEG",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_TacVest_khk",{{"rhs_mag_m67",1,1},{"rhsusf_mag_15Rnd_9x19_JHP",13,15},{"SmokeShell",2,1}}},{},"H_Hat_camo","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 
};
class CfgPatches
{
	class bm_specops_faction_US_DEVGRU_2023
	{
		author = "BloodyMystik & Orka";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"mas_cia_jsog_weap","rhsusf_c_weapons","ace_irlight","A3_Weapons_F_Acc","YL_LPVO","ace_realisticnames","ace_scopes","rhs_c_weapons","Blastcore_MainCore","ace_compat_rhs_usf3_arsenal","ace_compat_rhs_usf3","A3_Characters_F_Exp","ace_medical_treatment","ace_microdagr","ace_trenches","ace_hearing","A3_Atlas_Characters_F_Atlas_Vests","A3_Weapons_F","ace_logistics_wirecutter","ace_huntir","ace_captives","ace_attach","A3_Atlas_Characters_F_Atlas_Headgear","ace_yardage450","tfar_handhelds","ace_chemlights","CUP_Weapons_Mk48","CUP_Weapons_West_Attachments","CUP_Weapons_Ammunition","Ivas_Goggles","ace_kestrel4500","ace_maptools","ace_rangecard","ace_atragmx","mas_cia_jsog","A3_Weapons_F_Exp","A3_Aegis_Weapons_F_Aegis","ace_ballistics","Snake_Titan_AMMO","A3_Aegis_Characters_F_Aegis_Uniforms","A3_Weapons_F_Mark_Acc","A3_Weapons_F_Enoch_Acc","A3_Weapons_F_Mark_LongRangeRifles_DMR_04","A3_Weapons_F_Mark","A3_Weapons_F_Launchers_Titan","ace_javelin","ace_flashsuppressors","USP_Gear_Body","tfa_lbt","USP_Gear_Head","A3_Characters_F","A3_Aegis_Characters_F_Aegis_Vests"};
		skipWhenMissingDependencies = 1;
	};
};
class CfgFactionClasses {
	// As Friendly (BluFOR)
	class BS_B_US_DEVGRU_2023_BASE { 
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
		brokenSkullArsenal[]={"SmokeShellBlue","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","SmokeShellRed","SmokeShellYellow","ACE_bodyBag","ACE_bodyBag_blue","ACE_bodyBag_white","ACE_bloodIV","ACE_bloodIV_250","ACE_bloodIV_500","ACE_plasmaIV","ACE_plasmaIV_250","ACE_plasmaIV_500","ACE_salineIV","ACE_salineIV_250","ACE_salineIV_500","ACE_splint","ACE_surgicalKit","ACE_suture","ACE_tourniquet","ACE_personalAidKit","ACE_morphine","ACE_epinephrine","ACE_quikclot","ACE_elasticBandage","ACE_adenosine","ACE_WaterBottle","ACE_Sunflower_Seeds","ACE_Humanitarian_Ration","ACE_Can_Franta","ACE_wirecutter","ACE_RangeCard","MineDetector","ACE_microDAGR","ACE_MapTools","ACE_Clacker","ACE_M26_Clacker","ACE_Kestrel4500","ACE_HuntIR_monitor","ACE_Fortify","ACE_EntrenchingTool","ACE_DefusalKit","ACE_DeadManSwitch","ACE_DAGR","ACE_ATragMX","ACE_artilleryTable","ACE_RangeTable_82mm","DemoCharge_Remote_Mag","rhsusf_m112_mag","ATMine_Range_Mag","Aegis_HandFlare_Green","Aegis_HandFlare_Red","plp_bo_w_BottleLiqCream","plp_bo_w_BottleGin","plp_bo_w_BottleLiqOrange","plp_bo_w_BottleTequila","ACE_CableTie","plp_bo_w_Cigar","plp_bo_w_CigarCutter","ACE_EarPlugs","plp_bo_w_CigarFine","ACE_IR_Strobe_Item","plp_bo_w_CigarBoxSealed","ACE_SpareBarrel","ACE_SpraypaintBlack","ACE_SpraypaintBlue","ACE_SpraypaintGreen","ACE_SpraypaintRed","ACE_SpraypaintWhite","ACE_SpraypaintYellow","plp_bo_w_SunBlocker","plp_bo_w_SunMilk","ACE_UAVBattery","arifle_mas_cia_SPAR_01_snd_F","rhsusf_acc_nt4_tan","ACE_DBAL_A3_Red","optic_Hamr","rhs_mag_30Rnd_556x45_M855A1_EPM","rhs_acc_harris_swivel","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3","rhsusf_mag_40Rnd_46x30_JHP","U_B_T_Soldier_F","Atlas_V_CarrierRigKBT_01_CQB_CDF_F","SmokeShell","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_m67","rhs_mag_mk84","H_HelmetSpecB_green","ACE_Yardage450","ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch","arifle_mas_cia_SPAR_01_GL_snd_F","1Rnd_HE_Grenade_shell","V_CarrierRigKBT_01_light_CDF_F","rhs_mag_m713_Red","rhs_mag_m714_White","ACE_HuntIR_M203","V_CarrierRigKBT_01_heavy_CDF_F","Chemlight_green","CUP_lmg_Mk48_wdl","rhsusf_acc_ARDEC_M240","CUP_acc_ANPEQ_15_Flashlight_OD_L","optic_tws_mg","CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M","TIOW_IVAS_Olive","srifle_mas_cia_LRR_F","optic_Nightstalker","10Rnd_mas_cia_408_APDS_Mag","arifle_mas_cia_SDAR_F","muzzle_snds_M","rhsusf_acc_anpeq15_bk","rhsusf_acc_g33_xps3","rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger","U_mas_cia_B_Wetsuit","V_mas_cia_RebreatherB","NVGoggles_mas_cia_hv","srifle_LRR_tna_F","muzzle_snds_408_black","optic_tws_sniper","7Rnd_408_Mag","launch_mas_cia_Stinger_F","Titan_AA","hgun_mas_cia_P226_F","muzzle_snds_L","Aegis_acc_pointer_compact_pistol_red","16Rnd_9x21_Mag_v2","U_B_UBACS_tshirt_wdl_f","optic_AMS","optic_AMS_khk","optic_AMS_snd","rhsusf_acc_nxs_3515x50_md","rhsusf_acc_nxs_3515x50f1_h58","rhsusf_acc_nxs_3515x50f1_md","rhsusf_acc_nxs_3515x50f1_h58_sun","optic_Holosight_lush_F","rhsusf_acc_EOTECH","H_Booniehat_aucamo_hs_F","srifle_DMR_04_Tan_F","optic_ERCO_blk_F","10Rnd_127x54_Mag","launch_I_Titan_short_F","Titan_AT","rhsusf_weap_m9","rhsusf_mag_15Rnd_9x19_JHP","U_B_T_Soldier_AR_F","arifle_mas_cia_SPAR_01_w_F","U_mas_cia_B_CombatUniform_w","V_mas_cia_PlateCarrierRF_win","H_mas_cia_airframe_w","arifle_mas_cia_SPAR_01_GL_w_F","U_mas_cia_B_suite_WINT","V_mas_cia_PlateCarrier1_win","H_mas_cia_helmet_ops_w","rhsusf_acc_SF3P556","U_mas_cia_B_CombatUniform_w2","V_mas_cia_PlateCarrierLR_win","H_mas_cia_beanie_w","CUP_lmg_Mk48","ACE_muzzle_mzls_B","CUP_acc_ANPEQ_15_Black","V_mas_cia_PlateCarrierAR_win","V_mas_cia_belt_carrier_LR_wint","rhs_weap_mk18_d","rhsusf_acc_anpeq16a","USP_G3F_G3C_KP_MX_AOR1","tfa_lbt_operator_aor1","USP_OPSCORE_FASTMTC_KTBANSHEE_MS","USP_G3C_KP_MX_AOR1","USP_OPSCORE_FASTMTC_KTBANSHEE_MSW","CUP_lmg_Mk48_nohg_des","CUP_acc_ANPEQ_15","USP_OPSCORE_FASTMTC_KTBANSHEE_MTW","USP_G3C_CS_KP_MX_AOR1","U_mas_cia_B_suite_CQB","V_TacVest_blk","H_Hat_brown","H_Hat_grey","U_mas_cia_B_suite_VEG","V_TacVest_khk","H_Hat_camo"};

		garage[]={{"B_Quadbike_01_F",0,100,-1},{"B_LSV_01_armed_F",0,300,2},{"B_LSV_01_light_F",0,100,-1},{"B_MRAP_01_hmg_F",1,600,2},{"B_MRAP_01_gmg_F",1,600,2},{"B_MRAP_01_F",1,500,-1},{"B_Truck_01_covered_F",1,50,3},{"B_Truck_01_transport_F",1,50,3},{"B_Truck_01_Repair_F",1,50,-1},{"B_Truck_01_flatbed_F",1,50,-1},{"B_Truck_01_cargo_F",1,50,-1},{"B_Boat_Transport_01_F",0,50,-1},{"B_Boat_Armed_01_minigun_F",1,50,-1},{"APC_Wheeled_01_mortar_base_lxWS",2,40,1},{"B_APC_Wheeled_01_cannon_v2_F",2,40,1},{"B_APC_Wheeled_01_atgm_lxWS_v2",2,40,1},{"B_Plane_CAS_01_dynamicLoadout_F",2,2000,-1},{"B_VTOL_01_armed_F",2,2000,-1},{"B_SDV_01_F",1,50,-1},{"B_AFV_Wheeled_01_cannon_F",2,40,1},{"B_AFV_Wheeled_01_up_cannon_F",2,40,1},{"B_MBT_01_TUSK_F",2,2500,1},{"B_Plane_Fighter_05_Stealth_F",2,2000,-1},{"B_APC_Tracked_01_AA_F",2,1000,0}};
		SamSystem[]={"B_SAM_System_02_F"};
		StaticLowMG[]={"B_HMG_01_A_F"};
		StaticHighMG[]={"B_HMG_01_high_F"};
		StaticMotar[]={"B_Mortar_01_F"};
		StaticAntiAir[]={"B_static_AA_F"};
		VehicleTechnicals[]={"B_LSV_01_armed_F","B_MRAP_01_hmg_F","B_MRAP_01_gmg_F"};
		VehicleAntiAircraft[]={"B_APC_Tracked_01_AA_F"};
		VehicleTanks[]={"APC_Wheeled_01_mortar_base_lxWS","B_APC_Wheeled_01_cannon_v2_F","B_APC_Wheeled_01_atgm_lxWS_v2","B_AFV_Wheeled_01_cannon_F","B_AFV_Wheeled_01_up_cannon_F","B_MBT_01_TUSK_F"};
		VehicleTransport[]={"B_Truck_01_covered_F","B_Truck_01_transport_F"};
	};
	// As Friendly (BluFOR)
	class BS_B_US_DEVGRU_2023 : BS_B_US_DEVGRU_2023_BASE { 
		useForSpecOps = 1;   
		displayName = "US - DEVGRU (2023)";
		side = 1;       
		flag = "\A3\Data_F\Flags\flag_US_CO.paa";
		icon = "\A3\Data_F\Flags\flag_US_CO.paa";
		priority = 0; 
	};
	// As Opposite Forces (OpFOR)
	class BS_O_US_DEVGRU_2023 : BS_B_US_DEVGRU_2023_BASE { 
		useForSpecOps = 1;
		displayName = "US - DEVGRU (2023)";
		side = 0;       
		flag = "\A3\Data_F\Flags\flag_US_CO.paa";
		icon = "\A3\Data_F\Flags\flag_US_CO.paa";
		priority = 0; 
	};
	// As Independent (Independent)
	class BS_I_US_DEVGRU_2023 : BS_B_US_DEVGRU_2023_BASE { 
		useForSpecOps = 1;
		displayName = "US - DEVGRU (2023)";
		side = 2;       
		flag = "\A3\Data_F\Flags\flag_US_CO.paa";
		icon = "\A3\Data_F\Flags\flag_US_CO.paa";
		priority = 0; 
	};
};
// As Friendly (BluFOR)
class SpecOps_Module_BLUFOR_Factions { 
	class BS_B_US_DEVGRU_2023 { name = "US - DEVGRU (2023)"; value = "BS_B_US_DEVGRU_2023"; };  
};
// As Friendly (BluFOR)
class SpecOps_Module_OPFOR_Factions { 
	class BS_O_US_DEVGRU_2023 { name = "US - DEVGRU (2023)"; value = "BS_O_US_DEVGRU_2023"; };  
};
// As Friendly (BluFOR)
class SpecOps_Module_GRE_Factions { 
	class BS_I_US_DEVGRU_2023 { name = "US - DEVGRU (2023)"; value = "BS_I_US_DEVGRU_2023"; };  
};