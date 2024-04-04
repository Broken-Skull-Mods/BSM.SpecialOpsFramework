

#include "\bsm_so_factions\data\factions\usa_ranger_2000s\audio.hpp"
class CfgVehicles {
	class B_Survivor_F;
	class I_G_Survivor_F;
	class O_G_Survivor_F; 
	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_Rifleman_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Rifleman (Woodland)"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"TanoanHead_A3_07", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "JSOC_Uniform_W1"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_alt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_alt"}; 
		weapons[] = {"rhs_weap_m4a1_wd_grip","rhs_weap_m72a7","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_wd_grip","rhs_weap_m72a7","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_wd_grip","rhsusf_acc_nt4_black","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_wd",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"JSOC_Uniform_W1",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10}}},{"tfa_v_mmac_teamleader_belt_rngrn",{{"rhsusf_mag_15Rnd_9x19_FMJ",2,15},{"rhs_mag_m67",2,1},{"SmokeShell",4,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",15,30}}},{"USP_ZIPON_PACK_CPC_AT_SM_RGR",{{"ACE_DAGR",1},{"ACE_EntrenchingTool",1},{"ACE_wirecutter",1},{"ACE_DefusalKit",1}}},"rhsusf_mich_bare_norotos_alt","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_Rifleman_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Rifleman (Woodland)"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"TanoanHead_A3_07", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "JSOC_Uniform_W1"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_alt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_alt"}; 
		weapons[] = {"rhs_weap_m4a1_wd_grip","rhs_weap_m72a7","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_wd_grip","rhs_weap_m72a7","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_wd_grip","rhsusf_acc_nt4_black","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_wd",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"JSOC_Uniform_W1",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10}}},{"tfa_v_mmac_teamleader_belt_rngrn",{{"rhsusf_mag_15Rnd_9x19_FMJ",2,15},{"rhs_mag_m67",2,1},{"SmokeShell",4,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",15,30}}},{"USP_ZIPON_PACK_CPC_AT_SM_RGR",{{"ACE_DAGR",1},{"ACE_EntrenchingTool",1},{"ACE_wirecutter",1},{"ACE_DefusalKit",1}}},"rhsusf_mich_bare_norotos_alt","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_Rifleman_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Rifleman (Woodland)"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"TanoanHead_A3_07", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "JSOC_Uniform_W1"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_alt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_alt"}; 
		weapons[] = {"rhs_weap_m4a1_wd_grip","rhs_weap_m72a7","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_wd_grip","rhs_weap_m72a7","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_wd_grip","rhsusf_acc_nt4_black","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_wd",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"JSOC_Uniform_W1",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10}}},{"tfa_v_mmac_teamleader_belt_rngrn",{{"rhsusf_mag_15Rnd_9x19_FMJ",2,15},{"rhs_mag_m67",2,1},{"SmokeShell",4,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",15,30}}},{"USP_ZIPON_PACK_CPC_AT_SM_RGR",{{"ACE_DAGR",1},{"ACE_EntrenchingTool",1},{"ACE_wirecutter",1},{"ACE_DefusalKit",1}}},"rhsusf_mich_bare_norotos_alt","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_GL_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Grenadier (Woodland)"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"CamoHead_Asian_02_F", "Male02ENG" ,"G_NATO_default"};
		uniformClass = "JSOC_Uniform_W1"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_arc_alt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_arc_alt"}; 
		weapons[] = {"rhs_weap_m4a1_m203s_wd","rhs_weap_m72a7","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_m203s_wd","rhs_weap_m72a7","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_m203s_wd","","rhsusf_acc_anpeq15side","rhsusf_acc_ACOG_wd",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{"rhs_mag_M433_HEDP",1},""},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"JSOC_Uniform_W1",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10}}},{"tfa_v_mmac_teamleader_belt_rngrn",{{"rhsusf_mag_15Rnd_9x19_FMJ",1,15},{"rhs_mag_m67",2,1},{"SmokeShell",4,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",15,30},{"rhs_mag_M433_HEDP",3,1}}},{"USP_ZIPON_PACK_CPC_AT_SM_RGR",{{"ACE_DAGR",1},{"rhs_mag_M433_HEDP",20,1},{"rhs_mag_m714_White",15,1}}},"rhsusf_mich_bare_norotos_arc_alt","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_GL_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Grenadier (Woodland)"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"CamoHead_Asian_02_F", "Male02ENG" ,"G_NATO_default"};
		uniformClass = "JSOC_Uniform_W1"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_arc_alt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_arc_alt"}; 
		weapons[] = {"rhs_weap_m4a1_m203s_wd","rhs_weap_m72a7","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_m203s_wd","rhs_weap_m72a7","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_m203s_wd","","rhsusf_acc_anpeq15side","rhsusf_acc_ACOG_wd",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{"rhs_mag_M433_HEDP",1},""},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"JSOC_Uniform_W1",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10}}},{"tfa_v_mmac_teamleader_belt_rngrn",{{"rhsusf_mag_15Rnd_9x19_FMJ",1,15},{"rhs_mag_m67",2,1},{"SmokeShell",4,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",15,30},{"rhs_mag_M433_HEDP",3,1}}},{"USP_ZIPON_PACK_CPC_AT_SM_RGR",{{"ACE_DAGR",1},{"rhs_mag_M433_HEDP",20,1},{"rhs_mag_m714_White",15,1}}},"rhsusf_mich_bare_norotos_arc_alt","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_GL_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Grenadier (Woodland)"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"CamoHead_Asian_02_F", "Male02ENG" ,"G_NATO_default"};
		uniformClass = "JSOC_Uniform_W1"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_arc_alt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_arc_alt"}; 
		weapons[] = {"rhs_weap_m4a1_m203s_wd","rhs_weap_m72a7","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_m203s_wd","rhs_weap_m72a7","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_m203s_wd","","rhsusf_acc_anpeq15side","rhsusf_acc_ACOG_wd",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{"rhs_mag_M433_HEDP",1},""},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"JSOC_Uniform_W1",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10}}},{"tfa_v_mmac_teamleader_belt_rngrn",{{"rhsusf_mag_15Rnd_9x19_FMJ",1,15},{"rhs_mag_m67",2,1},{"SmokeShell",4,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",15,30},{"rhs_mag_M433_HEDP",3,1}}},{"USP_ZIPON_PACK_CPC_AT_SM_RGR",{{"ACE_DAGR",1},{"rhs_mag_M433_HEDP",20,1},{"rhs_mag_m714_White",15,1}}},"rhsusf_mich_bare_norotos_arc_alt","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_AR_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Machine Gunner (Woodland)"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"TanoanHead_A3_02", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "JSOC_Uniform_W2"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_arc_alt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_arc_alt"}; 
		weapons[] = {"CUP_lmg_Mk48_nohg_od","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"CUP_lmg_Mk48_nohg_od","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_Mk48_nohg_od","","CUP_acc_ANPEQ_15","CUP_optic_ElcanM145",{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",100},{},""},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"JSOC_Uniform_W2",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10}}},{"tfa_v_mmac_hgunner_rngrn",{{"rhsusf_mag_15Rnd_9x19_FMJ",2,15},{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",6,100}}},{"USP_ZIPON_PACK_CPC_AT_SM_RGR",{{"ACE_DAGR",1},{"ACE_SpareBarrel",1,1},{"rhs_mag_m67",2,1},{"SmokeShell",2,1},{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",3,100}}},"rhsusf_mich_bare_norotos_arc_alt","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_AR_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Machine Gunner (Woodland)"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"TanoanHead_A3_02", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "JSOC_Uniform_W2"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_arc_alt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_arc_alt"}; 
		weapons[] = {"CUP_lmg_Mk48_nohg_od","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"CUP_lmg_Mk48_nohg_od","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_Mk48_nohg_od","","CUP_acc_ANPEQ_15","CUP_optic_ElcanM145",{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",100},{},""},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"JSOC_Uniform_W2",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10}}},{"tfa_v_mmac_hgunner_rngrn",{{"rhsusf_mag_15Rnd_9x19_FMJ",2,15},{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",6,100}}},{"USP_ZIPON_PACK_CPC_AT_SM_RGR",{{"ACE_DAGR",1},{"ACE_SpareBarrel",1,1},{"rhs_mag_m67",2,1},{"SmokeShell",2,1},{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",3,100}}},"rhsusf_mich_bare_norotos_arc_alt","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_AR_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Machine Gunner (Woodland)"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"TanoanHead_A3_02", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "JSOC_Uniform_W2"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_arc_alt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_arc_alt"}; 
		weapons[] = {"CUP_lmg_Mk48_nohg_od","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"CUP_lmg_Mk48_nohg_od","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_Mk48_nohg_od","","CUP_acc_ANPEQ_15","CUP_optic_ElcanM145",{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",100},{},""},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"JSOC_Uniform_W2",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10}}},{"tfa_v_mmac_hgunner_rngrn",{{"rhsusf_mag_15Rnd_9x19_FMJ",2,15},{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",6,100}}},{"USP_ZIPON_PACK_CPC_AT_SM_RGR",{{"ACE_DAGR",1},{"ACE_SpareBarrel",1,1},{"rhs_mag_m67",2,1},{"SmokeShell",2,1},{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",3,100}}},"rhsusf_mich_bare_norotos_arc_alt","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_SNP_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Sniper (Woodland)"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_22_sa", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "JSOC_Uniform_W3"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_arc_alt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_arc_alt"}; 
		weapons[] = {"rhs_weap_m14ebrri","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m14ebrri","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m14ebrri","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_anpeq15side_bk","rhsusf_acc_LEUPOLDMK4",{"rhsusf_20Rnd_762x51_m993_Mag",20},{},"rhsusf_acc_harris_bipod"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"JSOC_Uniform_W3",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10}}},{"tfa_v_mmac_teamleader_belt_rngrn",{{"rhsusf_mag_15Rnd_9x19_FMJ",2,15},{"rhs_mag_m67",2,1},{"SmokeShell",4,1},{"rhsusf_20Rnd_762x51_m993_Mag",9,20}}},{"USP_ZIPON_PACK_CPC_AT_SM_RGR",{{"ACE_DAGR",1},{"ACE_EntrenchingTool",1},{"ACE_wirecutter",1},{"ACE_DefusalKit",1},{"ACE_Kestrel4500",1},{"ACE_RangeCard",1},{"ACE_ATragMX",1},{"rhsusf_20Rnd_762x51_m993_Mag",6,20}}},"rhsusf_mich_bare_norotos_arc_alt","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_SNP_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Sniper (Woodland)"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_22_sa", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "JSOC_Uniform_W3"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_arc_alt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_arc_alt"}; 
		weapons[] = {"rhs_weap_m14ebrri","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m14ebrri","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m14ebrri","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_anpeq15side_bk","rhsusf_acc_LEUPOLDMK4",{"rhsusf_20Rnd_762x51_m993_Mag",20},{},"rhsusf_acc_harris_bipod"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"JSOC_Uniform_W3",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10}}},{"tfa_v_mmac_teamleader_belt_rngrn",{{"rhsusf_mag_15Rnd_9x19_FMJ",2,15},{"rhs_mag_m67",2,1},{"SmokeShell",4,1},{"rhsusf_20Rnd_762x51_m993_Mag",9,20}}},{"USP_ZIPON_PACK_CPC_AT_SM_RGR",{{"ACE_DAGR",1},{"ACE_EntrenchingTool",1},{"ACE_wirecutter",1},{"ACE_DefusalKit",1},{"ACE_Kestrel4500",1},{"ACE_RangeCard",1},{"ACE_ATragMX",1},{"rhsusf_20Rnd_762x51_m993_Mag",6,20}}},"rhsusf_mich_bare_norotos_arc_alt","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_SNP_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Sniper (Woodland)"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_22_sa", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "JSOC_Uniform_W3"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_arc_alt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_arc_alt"}; 
		weapons[] = {"rhs_weap_m14ebrri","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m14ebrri","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m14ebrri","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_anpeq15side_bk","rhsusf_acc_LEUPOLDMK4",{"rhsusf_20Rnd_762x51_m993_Mag",20},{},"rhsusf_acc_harris_bipod"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"JSOC_Uniform_W3",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10}}},{"tfa_v_mmac_teamleader_belt_rngrn",{{"rhsusf_mag_15Rnd_9x19_FMJ",2,15},{"rhs_mag_m67",2,1},{"SmokeShell",4,1},{"rhsusf_20Rnd_762x51_m993_Mag",9,20}}},{"USP_ZIPON_PACK_CPC_AT_SM_RGR",{{"ACE_DAGR",1},{"ACE_EntrenchingTool",1},{"ACE_wirecutter",1},{"ACE_DefusalKit",1},{"ACE_Kestrel4500",1},{"ACE_RangeCard",1},{"ACE_ATragMX",1},{"rhsusf_20Rnd_762x51_m993_Mag",6,20}}},"rhsusf_mich_bare_norotos_arc_alt","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_RTO_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Radio Operator (Woodland)"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"CamoHead_White_14_F", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "JSOC_Uniform_W1"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_alt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_alt"}; 
		weapons[] = {"rhs_weap_m4a1_wd_grip","rhs_weap_m72a7","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_wd_grip","rhs_weap_m72a7","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "TFAR_rt1523g_green";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_wd_grip","","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_wd",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"JSOC_Uniform_W1",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10}}},{"tfa_v_mmac_teamleader_belt_rngrn",{{"rhsusf_mag_15Rnd_9x19_FMJ",2,15},{"rhs_mag_m67",2,1},{"SmokeShell",4,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",15,30}}},{"TFAR_rt1523g_green",{{"ACE_DAGR",1},{"ACE_EntrenchingTool",1},{"ACE_wirecutter",1},{"ACE_DefusalKit",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",5,30}}},"rhsusf_mich_bare_norotos_alt","USP_MFRAME_TAN2",{},{"ItemMap","","ItemRadio","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_RTO_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Radio Operator (Woodland)"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"CamoHead_White_14_F", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "JSOC_Uniform_W1"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_alt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_alt"}; 
		weapons[] = {"rhs_weap_m4a1_wd_grip","rhs_weap_m72a7","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_wd_grip","rhs_weap_m72a7","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "TFAR_rt1523g_green";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_wd_grip","","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_wd",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"JSOC_Uniform_W1",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10}}},{"tfa_v_mmac_teamleader_belt_rngrn",{{"rhsusf_mag_15Rnd_9x19_FMJ",2,15},{"rhs_mag_m67",2,1},{"SmokeShell",4,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",15,30}}},{"TFAR_rt1523g_green",{{"ACE_DAGR",1},{"ACE_EntrenchingTool",1},{"ACE_wirecutter",1},{"ACE_DefusalKit",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",5,30}}},"rhsusf_mich_bare_norotos_alt","USP_MFRAME_TAN2",{},{"ItemMap","","ItemRadio","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_RTO_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Radio Operator (Woodland)"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"CamoHead_White_14_F", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "JSOC_Uniform_W1"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_alt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_alt"}; 
		weapons[] = {"rhs_weap_m4a1_wd_grip","rhs_weap_m72a7","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_wd_grip","rhs_weap_m72a7","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "TFAR_rt1523g_green";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_wd_grip","","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_wd",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"JSOC_Uniform_W1",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10}}},{"tfa_v_mmac_teamleader_belt_rngrn",{{"rhsusf_mag_15Rnd_9x19_FMJ",2,15},{"rhs_mag_m67",2,1},{"SmokeShell",4,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",15,30}}},{"TFAR_rt1523g_green",{{"ACE_DAGR",1},{"ACE_EntrenchingTool",1},{"ACE_wirecutter",1},{"ACE_DefusalKit",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",5,30}}},"rhsusf_mich_bare_norotos_alt","USP_MFRAME_TAN2",{},{"ItemMap","","ItemRadio","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_DIVER_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Diver (Woodland)"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"AfricanHead_01", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","G_B_Diving","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","G_B_Diving","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d_grip","","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"U_mas_cia_B_Wetsuit",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1}}},{"V_RebreatherB",{}},{"USP_ZIPON_PACK_CPC_AT_SM_RGR",{{"ACE_DAGR",1},{"ACE_EntrenchingTool",1},{"ACE_wirecutter",1},{"ACE_DefusalKit",1}}},"USP_HEAD_MICH_TC2002_TAN","G_B_Diving",{},{"ItemMap","","ItemRadio","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_DIVER_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Diver (Woodland)"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"AfricanHead_01", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","G_B_Diving","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","G_B_Diving","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d_grip","","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"U_mas_cia_B_Wetsuit",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1}}},{"V_RebreatherB",{}},{"USP_ZIPON_PACK_CPC_AT_SM_RGR",{{"ACE_DAGR",1},{"ACE_EntrenchingTool",1},{"ACE_wirecutter",1},{"ACE_DefusalKit",1}}},"USP_HEAD_MICH_TC2002_TAN","G_B_Diving",{},{"ItemMap","","ItemRadio","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_DIVER_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Diver (Woodland)"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"AfricanHead_01", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","G_B_Diving","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","G_B_Diving","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d_grip","","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"U_mas_cia_B_Wetsuit",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1}}},{"V_RebreatherB",{}},{"USP_ZIPON_PACK_CPC_AT_SM_RGR",{{"ACE_DAGR",1},{"ACE_EntrenchingTool",1},{"ACE_wirecutter",1},{"ACE_DefusalKit",1}}},"USP_HEAD_MICH_TC2002_TAN","G_B_Diving",{},{"ItemMap","","ItemRadio","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_Medic_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Doctor (Woodland)"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"CamoHead_White_14_F", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "JSOC_Uniform_W3"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_arc_alt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_arc_alt"}; 
		weapons[] = {"rhs_weap_m4a1_wd_grip","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_wd_grip","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "tfa_Kitbag_mc3";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_wd_grip","","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_wd",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"JSOC_Uniform_W3",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",2,30}}},{"tfa_v_mmac_teamleader_belt_rngrn",{{"rhsusf_mag_15Rnd_9x19_FMJ",1,15},{"SmokeShell",5,1},{"SmokeShellYellow",5,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",16,30}}},{"tfa_Kitbag_mc3",{{"ACE_DAGR",1},{"ACE_elasticBandage",40},{"ACE_quikclot",40},{"ACE_adenosine",10},{"ACE_epinephrine",12},{"ACE_morphine",12},{"ACE_salineIV",10},{"ACE_salineIV_500",6},{"ACE_tourniquet",10},{"ACE_splint",6},{"ACE_personalAidKit",4}}},"rhsusf_mich_bare_norotos_arc_alt","USP_MFRAME_TAN2",{},{"ItemMap","","ItemRadio","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_Medic_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Doctor (Woodland)"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"CamoHead_White_14_F", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "JSOC_Uniform_W3"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_arc_alt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_arc_alt"}; 
		weapons[] = {"rhs_weap_m4a1_wd_grip","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_wd_grip","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "tfa_Kitbag_mc3";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_wd_grip","","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_wd",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"JSOC_Uniform_W3",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",2,30}}},{"tfa_v_mmac_teamleader_belt_rngrn",{{"rhsusf_mag_15Rnd_9x19_FMJ",1,15},{"SmokeShell",5,1},{"SmokeShellYellow",5,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",16,30}}},{"tfa_Kitbag_mc3",{{"ACE_DAGR",1},{"ACE_elasticBandage",40},{"ACE_quikclot",40},{"ACE_adenosine",10},{"ACE_epinephrine",12},{"ACE_morphine",12},{"ACE_salineIV",10},{"ACE_salineIV_500",6},{"ACE_tourniquet",10},{"ACE_splint",6},{"ACE_personalAidKit",4}}},"rhsusf_mich_bare_norotos_arc_alt","USP_MFRAME_TAN2",{},{"ItemMap","","ItemRadio","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_Medic_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Doctor (Woodland)"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"CamoHead_White_14_F", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "JSOC_Uniform_W3"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_arc_alt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_arc_alt"}; 
		weapons[] = {"rhs_weap_m4a1_wd_grip","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_wd_grip","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "tfa_Kitbag_mc3";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_wd_grip","","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_wd",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"JSOC_Uniform_W3",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",2,30}}},{"tfa_v_mmac_teamleader_belt_rngrn",{{"rhsusf_mag_15Rnd_9x19_FMJ",1,15},{"SmokeShell",5,1},{"SmokeShellYellow",5,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",16,30}}},{"tfa_Kitbag_mc3",{{"ACE_DAGR",1},{"ACE_elasticBandage",40},{"ACE_quikclot",40},{"ACE_adenosine",10},{"ACE_epinephrine",12},{"ACE_morphine",12},{"ACE_salineIV",10},{"ACE_salineIV_500",6},{"ACE_tourniquet",10},{"ACE_splint",6},{"ACE_personalAidKit",4}}},"rhsusf_mich_bare_norotos_arc_alt","USP_MFRAME_TAN2",{},{"ItemMap","","ItemRadio","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_Rifleman_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Rifleman (Desert)"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_06", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USArmy_ACU_Kneepad_Gloves_UCP"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_d_grip","rhs_weap_m72a7","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d_grip","rhs_weap_m72a7","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d_grip","rhsusf_acc_nt4_tan","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"CUP_U_B_USArmy_ACU_Kneepad_Gloves_UCP",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",1,30}}},{"tfa_v_mmac_teamleader_belt_rngrn",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",14,30},{"rhsusf_mag_15Rnd_9x19_FMJ",2,15},{"rhs_mag_m67",2,1},{"SmokeShell",4,1}}},{"USP_ZIPON_PACK_CPC_AT_SM_RGR",{{"ACE_DAGR",1},{"ACE_EntrenchingTool",1},{"ACE_wirecutter",1},{"ACE_DefusalKit",1}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_Rifleman_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Rifleman (Desert)"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_06", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USArmy_ACU_Kneepad_Gloves_UCP"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_d_grip","rhs_weap_m72a7","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d_grip","rhs_weap_m72a7","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d_grip","rhsusf_acc_nt4_tan","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"CUP_U_B_USArmy_ACU_Kneepad_Gloves_UCP",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",1,30}}},{"tfa_v_mmac_teamleader_belt_rngrn",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",14,30},{"rhsusf_mag_15Rnd_9x19_FMJ",2,15},{"rhs_mag_m67",2,1},{"SmokeShell",4,1}}},{"USP_ZIPON_PACK_CPC_AT_SM_RGR",{{"ACE_DAGR",1},{"ACE_EntrenchingTool",1},{"ACE_wirecutter",1},{"ACE_DefusalKit",1}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_Rifleman_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Rifleman (Desert)"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_06", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USArmy_ACU_Kneepad_Gloves_UCP"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_d_grip","rhs_weap_m72a7","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d_grip","rhs_weap_m72a7","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d_grip","rhsusf_acc_nt4_tan","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"CUP_U_B_USArmy_ACU_Kneepad_Gloves_UCP",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",1,30}}},{"tfa_v_mmac_teamleader_belt_rngrn",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",14,30},{"rhsusf_mag_15Rnd_9x19_FMJ",2,15},{"rhs_mag_m67",2,1},{"SmokeShell",4,1}}},{"USP_ZIPON_PACK_CPC_AT_SM_RGR",{{"ACE_DAGR",1},{"ACE_EntrenchingTool",1},{"ACE_wirecutter",1},{"ACE_DefusalKit",1}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_GL_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Grenadier (Desert)"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"TanoanHead_A3_02", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USArmy_ACU_Kneepad_Gloves_UCP"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_m203s_d","rhs_weap_m72a7","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_m203s_d","rhs_weap_m72a7","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_m203s_d","","rhsusf_acc_anpeq15side","rhsusf_acc_ACOG_d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{"rhs_mag_M433_HEDP",1},""},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"CUP_U_B_USArmy_ACU_Kneepad_Gloves_UCP",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1}}},{"tfa_v_mmac_teamleader_belt_rngrn",{{"rhsusf_mag_15Rnd_9x19_FMJ",1,15},{"rhs_mag_m67",2,1},{"SmokeShell",4,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",15,30},{"rhs_mag_M433_HEDP",3,1}}},{"USP_ZIPON_PACK_CPC_AT_SM_RGR",{{"ACE_DAGR",1},{"rhs_mag_M433_HEDP",20,1},{"rhs_mag_m714_White",15,1}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_GL_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Grenadier (Desert)"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"TanoanHead_A3_02", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USArmy_ACU_Kneepad_Gloves_UCP"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_m203s_d","rhs_weap_m72a7","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_m203s_d","rhs_weap_m72a7","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_m203s_d","","rhsusf_acc_anpeq15side","rhsusf_acc_ACOG_d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{"rhs_mag_M433_HEDP",1},""},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"CUP_U_B_USArmy_ACU_Kneepad_Gloves_UCP",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1}}},{"tfa_v_mmac_teamleader_belt_rngrn",{{"rhsusf_mag_15Rnd_9x19_FMJ",1,15},{"rhs_mag_m67",2,1},{"SmokeShell",4,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",15,30},{"rhs_mag_M433_HEDP",3,1}}},{"USP_ZIPON_PACK_CPC_AT_SM_RGR",{{"ACE_DAGR",1},{"rhs_mag_M433_HEDP",20,1},{"rhs_mag_m714_White",15,1}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_GL_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Grenadier (Desert)"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"TanoanHead_A3_02", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USArmy_ACU_Kneepad_Gloves_UCP"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_m203s_d","rhs_weap_m72a7","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_m203s_d","rhs_weap_m72a7","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_m203s_d","","rhsusf_acc_anpeq15side","rhsusf_acc_ACOG_d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{"rhs_mag_M433_HEDP",1},""},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"CUP_U_B_USArmy_ACU_Kneepad_Gloves_UCP",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1}}},{"tfa_v_mmac_teamleader_belt_rngrn",{{"rhsusf_mag_15Rnd_9x19_FMJ",1,15},{"rhs_mag_m67",2,1},{"SmokeShell",4,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",15,30},{"rhs_mag_M433_HEDP",3,1}}},{"USP_ZIPON_PACK_CPC_AT_SM_RGR",{{"ACE_DAGR",1},{"rhs_mag_M433_HEDP",20,1},{"rhs_mag_m714_White",15,1}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_AR_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Machine Gunner (Desert)"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"TanoanHead_A3_01", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USArmy_ACU_Kneepad_Gloves_UCP"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"CUP_lmg_Mk48_nohg_des","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"CUP_lmg_Mk48_nohg_des","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_Mk48_nohg_des","","CUP_acc_ANPEQ_15","CUP_optic_ElcanM145",{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",100},{},""},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"CUP_U_B_USArmy_ACU_Kneepad_Gloves_UCP",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1}}},{"tfa_v_mmac_hgunner_rngrn",{{"rhsusf_mag_15Rnd_9x19_FMJ",2,15},{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",6,100}}},{"USP_ZIPON_PACK_CPC_AT_SM_RGR",{{"ACE_DAGR",1},{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",3,100},{"ACE_SpareBarrel",1,1},{"rhs_mag_m67",2,1},{"SmokeShell",2,1}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_AR_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Machine Gunner (Desert)"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"TanoanHead_A3_01", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USArmy_ACU_Kneepad_Gloves_UCP"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"CUP_lmg_Mk48_nohg_des","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"CUP_lmg_Mk48_nohg_des","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_Mk48_nohg_des","","CUP_acc_ANPEQ_15","CUP_optic_ElcanM145",{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",100},{},""},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"CUP_U_B_USArmy_ACU_Kneepad_Gloves_UCP",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1}}},{"tfa_v_mmac_hgunner_rngrn",{{"rhsusf_mag_15Rnd_9x19_FMJ",2,15},{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",6,100}}},{"USP_ZIPON_PACK_CPC_AT_SM_RGR",{{"ACE_DAGR",1},{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",3,100},{"ACE_SpareBarrel",1,1},{"rhs_mag_m67",2,1},{"SmokeShell",2,1}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_AR_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Machine Gunner (Desert)"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"TanoanHead_A3_01", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USArmy_ACU_Kneepad_Gloves_UCP"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"CUP_lmg_Mk48_nohg_des","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"CUP_lmg_Mk48_nohg_des","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_Mk48_nohg_des","","CUP_acc_ANPEQ_15","CUP_optic_ElcanM145",{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",100},{},""},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"CUP_U_B_USArmy_ACU_Kneepad_Gloves_UCP",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1}}},{"tfa_v_mmac_hgunner_rngrn",{{"rhsusf_mag_15Rnd_9x19_FMJ",2,15},{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",6,100}}},{"USP_ZIPON_PACK_CPC_AT_SM_RGR",{{"ACE_DAGR",1},{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",3,100},{"ACE_SpareBarrel",1,1},{"rhs_mag_m67",2,1},{"SmokeShell",2,1}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_SNP_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Sniper (Desert)"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"CamoHead_White_16_F", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USArmy_ACU_Kneepad_Gloves_UCP"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m14ebrri","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m14ebrri","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m14ebrri","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_anpeq15side_bk","rhsusf_acc_LEUPOLDMK4",{"rhsusf_20Rnd_762x51_m993_Mag",20},{},"rhsusf_acc_harris_bipod"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"CUP_U_B_USArmy_ACU_Kneepad_Gloves_UCP",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1}}},{"tfa_v_mmac_teamleader_belt_rngrn",{{"rhsusf_mag_15Rnd_9x19_FMJ",2,15},{"rhs_mag_m67",2,1},{"SmokeShell",4,1},{"rhsusf_20Rnd_762x51_m993_Mag",9,20}}},{"USP_ZIPON_PACK_CPC_AT_SM_RGR",{{"ACE_DAGR",1},{"ACE_EntrenchingTool",1},{"ACE_wirecutter",1},{"ACE_DefusalKit",1},{"ACE_Kestrel4500",1},{"ACE_RangeCard",1},{"ACE_ATragMX",1},{"rhsusf_20Rnd_762x51_m993_Mag",6,20}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_SNP_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Sniper (Desert)"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"CamoHead_White_16_F", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USArmy_ACU_Kneepad_Gloves_UCP"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m14ebrri","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m14ebrri","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m14ebrri","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_anpeq15side_bk","rhsusf_acc_LEUPOLDMK4",{"rhsusf_20Rnd_762x51_m993_Mag",20},{},"rhsusf_acc_harris_bipod"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"CUP_U_B_USArmy_ACU_Kneepad_Gloves_UCP",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1}}},{"tfa_v_mmac_teamleader_belt_rngrn",{{"rhsusf_mag_15Rnd_9x19_FMJ",2,15},{"rhs_mag_m67",2,1},{"SmokeShell",4,1},{"rhsusf_20Rnd_762x51_m993_Mag",9,20}}},{"USP_ZIPON_PACK_CPC_AT_SM_RGR",{{"ACE_DAGR",1},{"ACE_EntrenchingTool",1},{"ACE_wirecutter",1},{"ACE_DefusalKit",1},{"ACE_Kestrel4500",1},{"ACE_RangeCard",1},{"ACE_ATragMX",1},{"rhsusf_20Rnd_762x51_m993_Mag",6,20}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_SNP_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Sniper (Desert)"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"CamoHead_White_16_F", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USArmy_ACU_Kneepad_Gloves_UCP"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m14ebrri","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m14ebrri","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m14ebrri","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_anpeq15side_bk","rhsusf_acc_LEUPOLDMK4",{"rhsusf_20Rnd_762x51_m993_Mag",20},{},"rhsusf_acc_harris_bipod"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"CUP_U_B_USArmy_ACU_Kneepad_Gloves_UCP",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1}}},{"tfa_v_mmac_teamleader_belt_rngrn",{{"rhsusf_mag_15Rnd_9x19_FMJ",2,15},{"rhs_mag_m67",2,1},{"SmokeShell",4,1},{"rhsusf_20Rnd_762x51_m993_Mag",9,20}}},{"USP_ZIPON_PACK_CPC_AT_SM_RGR",{{"ACE_DAGR",1},{"ACE_EntrenchingTool",1},{"ACE_wirecutter",1},{"ACE_DefusalKit",1},{"ACE_Kestrel4500",1},{"ACE_RangeCard",1},{"ACE_ATragMX",1},{"rhsusf_20Rnd_762x51_m993_Mag",6,20}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_RTO_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Radio Operator (Desert)"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_15", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USArmy_ACU_Kneepad_Gloves_UCP"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_d_grip","rhs_weap_m72a7","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d_grip","rhs_weap_m72a7","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "TFAR_rt1523g_green";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d_grip","","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"CUP_U_B_USArmy_ACU_Kneepad_Gloves_UCP",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",1,30}}},{"tfa_v_mmac_teamleader_belt_rngrn",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",14,30},{"rhsusf_mag_15Rnd_9x19_FMJ",2,15},{"rhs_mag_m67",2,1},{"SmokeShell",4,1}}},{"TFAR_rt1523g_green",{{"ACE_DAGR",1},{"ACE_EntrenchingTool",1},{"ACE_wirecutter",1},{"ACE_DefusalKit",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",5,30}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{},{"ItemMap","","ItemRadio","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_RTO_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Radio Operator (Desert)"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_15", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USArmy_ACU_Kneepad_Gloves_UCP"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_d_grip","rhs_weap_m72a7","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d_grip","rhs_weap_m72a7","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "TFAR_rt1523g_green";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d_grip","","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"CUP_U_B_USArmy_ACU_Kneepad_Gloves_UCP",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",1,30}}},{"tfa_v_mmac_teamleader_belt_rngrn",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",14,30},{"rhsusf_mag_15Rnd_9x19_FMJ",2,15},{"rhs_mag_m67",2,1},{"SmokeShell",4,1}}},{"TFAR_rt1523g_green",{{"ACE_DAGR",1},{"ACE_EntrenchingTool",1},{"ACE_wirecutter",1},{"ACE_DefusalKit",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",5,30}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{},{"ItemMap","","ItemRadio","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_RTO_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Radio Operator (Desert)"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_15", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USArmy_ACU_Kneepad_Gloves_UCP"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_d_grip","rhs_weap_m72a7","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d_grip","rhs_weap_m72a7","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "TFAR_rt1523g_green";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d_grip","","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"CUP_U_B_USArmy_ACU_Kneepad_Gloves_UCP",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",1,30}}},{"tfa_v_mmac_teamleader_belt_rngrn",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",14,30},{"rhsusf_mag_15Rnd_9x19_FMJ",2,15},{"rhs_mag_m67",2,1},{"SmokeShell",4,1}}},{"TFAR_rt1523g_green",{{"ACE_DAGR",1},{"ACE_EntrenchingTool",1},{"ACE_wirecutter",1},{"ACE_DefusalKit",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",5,30}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{},{"ItemMap","","ItemRadio","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_DIVER_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Diver (Desert)"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_01", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","G_B_Diving","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","G_B_Diving","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d_grip","","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"U_mas_cia_B_Wetsuit",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1}}},{"V_RebreatherB",{}},{"USP_ZIPON_PACK_CPC_AT_SM_RGR",{{"ACE_DAGR",1},{"ACE_EntrenchingTool",1},{"ACE_wirecutter",1},{"ACE_DefusalKit",1}}},"USP_HEAD_MICH_TC2002_TAN","G_B_Diving",{},{"ItemMap","","ItemRadio","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_DIVER_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Diver (Desert)"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_01", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","G_B_Diving","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","G_B_Diving","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d_grip","","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"U_mas_cia_B_Wetsuit",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1}}},{"V_RebreatherB",{}},{"USP_ZIPON_PACK_CPC_AT_SM_RGR",{{"ACE_DAGR",1},{"ACE_EntrenchingTool",1},{"ACE_wirecutter",1},{"ACE_DefusalKit",1}}},"USP_HEAD_MICH_TC2002_TAN","G_B_Diving",{},{"ItemMap","","ItemRadio","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_DIVER_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Diver (Desert)"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_01", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","G_B_Diving","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","G_B_Diving","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d_grip","","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"U_mas_cia_B_Wetsuit",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1}}},{"V_RebreatherB",{}},{"USP_ZIPON_PACK_CPC_AT_SM_RGR",{{"ACE_DAGR",1},{"ACE_EntrenchingTool",1},{"ACE_wirecutter",1},{"ACE_DefusalKit",1}}},"USP_HEAD_MICH_TC2002_TAN","G_B_Diving",{},{"ItemMap","","ItemRadio","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_Medic_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Doctor (Desert)"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"CamoHead_White_07_F", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USArmy_ACU_Kneepad_Gloves_UCP"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_d_grip","CUP_launch_M72A6","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d_grip","CUP_launch_M72A6","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "tfa_Kitbag_mc3";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d_grip","","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{"CUP_launch_M72A6","","","",{},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"CUP_U_B_USArmy_ACU_Kneepad_Gloves_UCP",{{"ACE_IR_Strobe_Item",2},{"ACE_EarPlugs",3},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",4,30}}},{"tfa_v_mmac_medic_belt_rngrn",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",16,30},{"rhsusf_mag_15Rnd_9x19_FMJ",1,15},{"SmokeShell",5,1},{"SmokeShellYellow",5,1}}},{"tfa_Kitbag_mc3",{{"ACE_DAGR",1},{"ACE_elasticBandage",40},{"ACE_quikclot",40},{"ACE_adenosine",4},{"ACE_epinephrine",12},{"ACE_morphine",12},{"ACE_salineIV",10},{"ACE_salineIV_500",6},{"ACE_tourniquet",10},{"ACE_splint",6},{"ACE_personalAidKit",5}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{},{"ItemMap","","ItemRadio","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_Medic_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Doctor (Desert)"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"CamoHead_White_07_F", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USArmy_ACU_Kneepad_Gloves_UCP"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_d_grip","CUP_launch_M72A6","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d_grip","CUP_launch_M72A6","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "tfa_Kitbag_mc3";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d_grip","","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{"CUP_launch_M72A6","","","",{},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"CUP_U_B_USArmy_ACU_Kneepad_Gloves_UCP",{{"ACE_IR_Strobe_Item",2},{"ACE_EarPlugs",3},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",4,30}}},{"tfa_v_mmac_medic_belt_rngrn",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",16,30},{"rhsusf_mag_15Rnd_9x19_FMJ",1,15},{"SmokeShell",5,1},{"SmokeShellYellow",5,1}}},{"tfa_Kitbag_mc3",{{"ACE_DAGR",1},{"ACE_elasticBandage",40},{"ACE_quikclot",40},{"ACE_adenosine",4},{"ACE_epinephrine",12},{"ACE_morphine",12},{"ACE_salineIV",10},{"ACE_salineIV_500",6},{"ACE_tourniquet",10},{"ACE_splint",6},{"ACE_personalAidKit",5}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{},{"ItemMap","","ItemRadio","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_Medic_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Doctor (Desert)"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"CamoHead_White_07_F", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USArmy_ACU_Kneepad_Gloves_UCP"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_d_grip","CUP_launch_M72A6","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d_grip","CUP_launch_M72A6","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "tfa_Kitbag_mc3";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d_grip","","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{"CUP_launch_M72A6","","","",{},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"CUP_U_B_USArmy_ACU_Kneepad_Gloves_UCP",{{"ACE_IR_Strobe_Item",2},{"ACE_EarPlugs",3},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",4,30}}},{"tfa_v_mmac_medic_belt_rngrn",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",16,30},{"rhsusf_mag_15Rnd_9x19_FMJ",1,15},{"SmokeShell",5,1},{"SmokeShellYellow",5,1}}},{"tfa_Kitbag_mc3",{{"ACE_DAGR",1},{"ACE_elasticBandage",40},{"ACE_quikclot",40},{"ACE_adenosine",4},{"ACE_epinephrine",12},{"ACE_morphine",12},{"ACE_salineIV",10},{"ACE_salineIV_500",6},{"ACE_tourniquet",10},{"ACE_splint",6},{"ACE_personalAidKit",5}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{},{"ItemMap","","ItemRadio","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_Rifleman_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Rifleman (Winter)"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"CamoHead_White_19_F", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "USP_OVERWHITE_G3C_KP_MX_MCA_M81"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_alt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_alt"}; 
		weapons[] = {"rhs_weap_m4a1_carryhandle_grip","rhs_weap_m72a7","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_carryhandle_grip","rhs_weap_m72a7","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_carryhandle_grip","rhsusf_acc_nt4_black","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_RMR",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"USP_OVERWHITE_G3C_KP_MX_MCA_M81",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",1,30}}},{"tfa_v_mmac_teamleader_rngrn",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",13,30}}},{"USP_ZIPON_PACK_CPC_AT_SM_RGR",{{"ACE_DAGR",1},{"ACE_EntrenchingTool",1},{"ACE_wirecutter",1},{"ACE_DefusalKit",1}}},"rhsusf_mich_bare_norotos_alt","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_Rifleman_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Rifleman (Winter)"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"CamoHead_White_19_F", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "USP_OVERWHITE_G3C_KP_MX_MCA_M81"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_alt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_alt"}; 
		weapons[] = {"rhs_weap_m4a1_carryhandle_grip","rhs_weap_m72a7","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_carryhandle_grip","rhs_weap_m72a7","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_carryhandle_grip","rhsusf_acc_nt4_black","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_RMR",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"USP_OVERWHITE_G3C_KP_MX_MCA_M81",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",1,30}}},{"tfa_v_mmac_teamleader_rngrn",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",13,30}}},{"USP_ZIPON_PACK_CPC_AT_SM_RGR",{{"ACE_DAGR",1},{"ACE_EntrenchingTool",1},{"ACE_wirecutter",1},{"ACE_DefusalKit",1}}},"rhsusf_mich_bare_norotos_alt","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_Rifleman_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Rifleman (Winter)"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"CamoHead_White_19_F", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "USP_OVERWHITE_G3C_KP_MX_MCA_M81"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_alt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_alt"}; 
		weapons[] = {"rhs_weap_m4a1_carryhandle_grip","rhs_weap_m72a7","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_carryhandle_grip","rhs_weap_m72a7","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_carryhandle_grip","rhsusf_acc_nt4_black","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_RMR",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"USP_OVERWHITE_G3C_KP_MX_MCA_M81",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",1,30}}},{"tfa_v_mmac_teamleader_rngrn",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",13,30}}},{"USP_ZIPON_PACK_CPC_AT_SM_RGR",{{"ACE_DAGR",1},{"ACE_EntrenchingTool",1},{"ACE_wirecutter",1},{"ACE_DefusalKit",1}}},"rhsusf_mich_bare_norotos_alt","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_GL_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Grenadier (Winter)"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"CamoHead_Asian_02_F", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USArmy_Soft"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_carryhandle_m203","rhs_weap_m72a7","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_carryhandle_m203","rhs_weap_m72a7","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_carryhandle_m203","","rhsusf_acc_anpeq15side","rhsusf_acc_ACOG_RMR",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{"rhs_mag_M433_HEDP",1},""},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"CUP_U_B_USArmy_Soft",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1}}},{"tfa_v_mmac_teamleader_belt_rngrn",{{"rhsusf_mag_15Rnd_9x19_FMJ",1,15},{"rhs_mag_m67",2,1},{"SmokeShell",4,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",15,30},{"rhs_mag_M433_HEDP",3,1}}},{"USP_ZIPON_PACK_CPC_AT_SM_RGR",{{"ACE_DAGR",1},{"rhs_mag_M433_HEDP",20,1},{"rhs_mag_m714_White",15,1}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_GL_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Grenadier (Winter)"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"CamoHead_Asian_02_F", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USArmy_Soft"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_carryhandle_m203","rhs_weap_m72a7","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_carryhandle_m203","rhs_weap_m72a7","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_carryhandle_m203","","rhsusf_acc_anpeq15side","rhsusf_acc_ACOG_RMR",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{"rhs_mag_M433_HEDP",1},""},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"CUP_U_B_USArmy_Soft",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1}}},{"tfa_v_mmac_teamleader_belt_rngrn",{{"rhsusf_mag_15Rnd_9x19_FMJ",1,15},{"rhs_mag_m67",2,1},{"SmokeShell",4,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",15,30},{"rhs_mag_M433_HEDP",3,1}}},{"USP_ZIPON_PACK_CPC_AT_SM_RGR",{{"ACE_DAGR",1},{"rhs_mag_M433_HEDP",20,1},{"rhs_mag_m714_White",15,1}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_GL_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Grenadier (Winter)"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"CamoHead_Asian_02_F", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USArmy_Soft"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_carryhandle_m203","rhs_weap_m72a7","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_carryhandle_m203","rhs_weap_m72a7","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_carryhandle_m203","","rhsusf_acc_anpeq15side","rhsusf_acc_ACOG_RMR",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{"rhs_mag_M433_HEDP",1},""},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"CUP_U_B_USArmy_Soft",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1}}},{"tfa_v_mmac_teamleader_belt_rngrn",{{"rhsusf_mag_15Rnd_9x19_FMJ",1,15},{"rhs_mag_m67",2,1},{"SmokeShell",4,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",15,30},{"rhs_mag_M433_HEDP",3,1}}},{"USP_ZIPON_PACK_CPC_AT_SM_RGR",{{"ACE_DAGR",1},{"rhs_mag_M433_HEDP",20,1},{"rhs_mag_m714_White",15,1}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_AR_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Machine Gunner (Winter)"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_10", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USArmy_Soft"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_arc_alt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_arc_alt"}; 
		weapons[] = {"CUP_lmg_Mk48_nohg","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"CUP_lmg_Mk48_nohg","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_Mk48_nohg","","CUP_acc_ANPEQ_15","CUP_optic_ElcanM145",{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",100},{},""},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"CUP_U_B_USArmy_Soft",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1}}},{"tfa_v_mmac_hgunner_rngrn",{{"rhsusf_mag_15Rnd_9x19_FMJ",2,15},{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",6,100}}},{"USP_ZIPON_PACK_CPC_AT_SM_RGR",{{"ACE_DAGR",1},{"ACE_SpareBarrel",1,1},{"rhs_mag_m67",2,1},{"SmokeShell",2,1},{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",3,100}}},"rhsusf_mich_bare_norotos_arc_alt","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_AR_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Machine Gunner (Winter)"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_10", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USArmy_Soft"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_arc_alt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_arc_alt"}; 
		weapons[] = {"CUP_lmg_Mk48_nohg","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"CUP_lmg_Mk48_nohg","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_Mk48_nohg","","CUP_acc_ANPEQ_15","CUP_optic_ElcanM145",{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",100},{},""},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"CUP_U_B_USArmy_Soft",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1}}},{"tfa_v_mmac_hgunner_rngrn",{{"rhsusf_mag_15Rnd_9x19_FMJ",2,15},{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",6,100}}},{"USP_ZIPON_PACK_CPC_AT_SM_RGR",{{"ACE_DAGR",1},{"ACE_SpareBarrel",1,1},{"rhs_mag_m67",2,1},{"SmokeShell",2,1},{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",3,100}}},"rhsusf_mich_bare_norotos_arc_alt","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_AR_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Machine Gunner (Winter)"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_10", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USArmy_Soft"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_arc_alt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_arc_alt"}; 
		weapons[] = {"CUP_lmg_Mk48_nohg","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"CUP_lmg_Mk48_nohg","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_Mk48_nohg","","CUP_acc_ANPEQ_15","CUP_optic_ElcanM145",{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",100},{},""},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"CUP_U_B_USArmy_Soft",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1}}},{"tfa_v_mmac_hgunner_rngrn",{{"rhsusf_mag_15Rnd_9x19_FMJ",2,15},{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",6,100}}},{"USP_ZIPON_PACK_CPC_AT_SM_RGR",{{"ACE_DAGR",1},{"ACE_SpareBarrel",1,1},{"rhs_mag_m67",2,1},{"SmokeShell",2,1},{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",3,100}}},"rhsusf_mich_bare_norotos_arc_alt","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_SNP_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Sniper (Winter)"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"AfricanHead_03", "Male04ENG" ,"G_NATO_default"};
		uniformClass = "USP_OVERWHITE_G3C_KP2_MCA_M81"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_headset"}; 
		weapons[] = {"rhs_weap_m14ebrri","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m14ebrri","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m14ebrri","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_anpeq15side_bk","rhsusf_acc_LEUPOLDMK4",{"rhsusf_20Rnd_762x51_m993_Mag",20},{},"rhsusf_acc_harris_bipod"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"USP_OVERWHITE_G3C_KP2_MCA_M81",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1}}},{"tfa_v_mmac_teamleader_belt_rngrn",{{"rhsusf_mag_15Rnd_9x19_FMJ",2,15},{"rhs_mag_m67",2,1},{"SmokeShell",4,1},{"rhsusf_20Rnd_762x51_m993_Mag",9,20}}},{"USP_ZIPON_PACK_CPC_AT_SM_RGR",{{"ACE_DAGR",1},{"ACE_EntrenchingTool",1},{"ACE_wirecutter",1},{"ACE_DefusalKit",1},{"ACE_Kestrel4500",1},{"ACE_RangeCard",1},{"ACE_ATragMX",1},{"rhsusf_20Rnd_762x51_m993_Mag",6,20}}},"rhsusf_mich_bare_norotos_headset","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_SNP_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Sniper (Winter)"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"AfricanHead_03", "Male04ENG" ,"G_NATO_default"};
		uniformClass = "USP_OVERWHITE_G3C_KP2_MCA_M81"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_headset"}; 
		weapons[] = {"rhs_weap_m14ebrri","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m14ebrri","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m14ebrri","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_anpeq15side_bk","rhsusf_acc_LEUPOLDMK4",{"rhsusf_20Rnd_762x51_m993_Mag",20},{},"rhsusf_acc_harris_bipod"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"USP_OVERWHITE_G3C_KP2_MCA_M81",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1}}},{"tfa_v_mmac_teamleader_belt_rngrn",{{"rhsusf_mag_15Rnd_9x19_FMJ",2,15},{"rhs_mag_m67",2,1},{"SmokeShell",4,1},{"rhsusf_20Rnd_762x51_m993_Mag",9,20}}},{"USP_ZIPON_PACK_CPC_AT_SM_RGR",{{"ACE_DAGR",1},{"ACE_EntrenchingTool",1},{"ACE_wirecutter",1},{"ACE_DefusalKit",1},{"ACE_Kestrel4500",1},{"ACE_RangeCard",1},{"ACE_ATragMX",1},{"rhsusf_20Rnd_762x51_m993_Mag",6,20}}},"rhsusf_mich_bare_norotos_headset","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_SNP_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Sniper (Winter)"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"AfricanHead_03", "Male04ENG" ,"G_NATO_default"};
		uniformClass = "USP_OVERWHITE_G3C_KP2_MCA_M81"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_headset"}; 
		weapons[] = {"rhs_weap_m14ebrri","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m14ebrri","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m14ebrri","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_anpeq15side_bk","rhsusf_acc_LEUPOLDMK4",{"rhsusf_20Rnd_762x51_m993_Mag",20},{},"rhsusf_acc_harris_bipod"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"USP_OVERWHITE_G3C_KP2_MCA_M81",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1}}},{"tfa_v_mmac_teamleader_belt_rngrn",{{"rhsusf_mag_15Rnd_9x19_FMJ",2,15},{"rhs_mag_m67",2,1},{"SmokeShell",4,1},{"rhsusf_20Rnd_762x51_m993_Mag",9,20}}},{"USP_ZIPON_PACK_CPC_AT_SM_RGR",{{"ACE_DAGR",1},{"ACE_EntrenchingTool",1},{"ACE_wirecutter",1},{"ACE_DefusalKit",1},{"ACE_Kestrel4500",1},{"ACE_RangeCard",1},{"ACE_ATragMX",1},{"rhsusf_20Rnd_762x51_m993_Mag",6,20}}},"rhsusf_mich_bare_norotos_headset","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_RTO_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Radio Operator (Winter)"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"CamoHead_White_17_F", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USArmy_Soft"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_arc_alt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_arc_alt"}; 
		weapons[] = {"rhs_weap_m4a1_carryhandle_grip","rhs_weap_m72a7","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_carryhandle_grip","rhs_weap_m72a7","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "TFAR_rt1523g_green";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_carryhandle_grip","","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_RMR",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"CUP_U_B_USArmy_Soft",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",1,30}}},{"tfa_v_mmac_teamleader_belt_rngrn",{{"rhsusf_mag_15Rnd_9x19_FMJ",2,15},{"rhs_mag_m67",2,1},{"SmokeShell",4,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",14,30}}},{"TFAR_rt1523g_green",{{"ACE_DAGR",1},{"ACE_EntrenchingTool",1},{"ACE_wirecutter",1},{"ACE_DefusalKit",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",5,30}}},"rhsusf_mich_bare_norotos_arc_alt","USP_MFRAME_TAN2",{},{"ItemMap","","ItemRadio","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_RTO_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Radio Operator (Winter)"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"CamoHead_White_17_F", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USArmy_Soft"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_arc_alt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_arc_alt"}; 
		weapons[] = {"rhs_weap_m4a1_carryhandle_grip","rhs_weap_m72a7","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_carryhandle_grip","rhs_weap_m72a7","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "TFAR_rt1523g_green";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_carryhandle_grip","","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_RMR",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"CUP_U_B_USArmy_Soft",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",1,30}}},{"tfa_v_mmac_teamleader_belt_rngrn",{{"rhsusf_mag_15Rnd_9x19_FMJ",2,15},{"rhs_mag_m67",2,1},{"SmokeShell",4,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",14,30}}},{"TFAR_rt1523g_green",{{"ACE_DAGR",1},{"ACE_EntrenchingTool",1},{"ACE_wirecutter",1},{"ACE_DefusalKit",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",5,30}}},"rhsusf_mich_bare_norotos_arc_alt","USP_MFRAME_TAN2",{},{"ItemMap","","ItemRadio","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_RTO_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Radio Operator (Winter)"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"CamoHead_White_17_F", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USArmy_Soft"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_arc_alt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","rhsusf_mich_bare_norotos_arc_alt"}; 
		weapons[] = {"rhs_weap_m4a1_carryhandle_grip","rhs_weap_m72a7","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_carryhandle_grip","rhs_weap_m72a7","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "TFAR_rt1523g_green";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_carryhandle_grip","","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_RMR",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"CUP_U_B_USArmy_Soft",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",1,30}}},{"tfa_v_mmac_teamleader_belt_rngrn",{{"rhsusf_mag_15Rnd_9x19_FMJ",2,15},{"rhs_mag_m67",2,1},{"SmokeShell",4,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",14,30}}},{"TFAR_rt1523g_green",{{"ACE_DAGR",1},{"ACE_EntrenchingTool",1},{"ACE_wirecutter",1},{"ACE_DefusalKit",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",5,30}}},"rhsusf_mich_bare_norotos_arc_alt","USP_MFRAME_TAN2",{},{"ItemMap","","ItemRadio","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_DIVER_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Diver (Winter)"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_17", "Male02ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","G_B_Diving","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","G_B_Diving","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d_grip","","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"U_mas_cia_B_Wetsuit",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1}}},{"V_RebreatherB",{}},{"USP_ZIPON_PACK_CPC_AT_SM_RGR",{{"ACE_DAGR",1},{"ACE_EntrenchingTool",1},{"ACE_wirecutter",1},{"ACE_DefusalKit",1}}},"USP_HEAD_MICH_TC2002_TAN","G_B_Diving",{},{"ItemMap","","ItemRadio","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_DIVER_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Diver (Winter)"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_17", "Male02ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","G_B_Diving","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","G_B_Diving","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d_grip","","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"U_mas_cia_B_Wetsuit",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1}}},{"V_RebreatherB",{}},{"USP_ZIPON_PACK_CPC_AT_SM_RGR",{{"ACE_DAGR",1},{"ACE_EntrenchingTool",1},{"ACE_wirecutter",1},{"ACE_DefusalKit",1}}},"USP_HEAD_MICH_TC2002_TAN","G_B_Diving",{},{"ItemMap","","ItemRadio","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_DIVER_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Diver (Winter)"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_17", "Male02ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","G_B_Diving","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","G_B_Diving","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d_grip","","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"U_mas_cia_B_Wetsuit",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1}}},{"V_RebreatherB",{}},{"USP_ZIPON_PACK_CPC_AT_SM_RGR",{{"ACE_DAGR",1},{"ACE_EntrenchingTool",1},{"ACE_wirecutter",1},{"ACE_DefusalKit",1}}},"USP_HEAD_MICH_TC2002_TAN","G_B_Diving",{},{"ItemMap","","ItemRadio","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_Medic_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Doctor (Winter)"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"TanoanHead_A3_07", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USArmy_Soft"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","CUP_H_OpsCore_Grey_SF"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","CUP_H_OpsCore_Grey_SF"}; 
		weapons[] = {"rhs_weap_m4a1_carryhandle_grip","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_carryhandle_grip","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "tfa_Kitbag_mc3";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_carryhandle_grip","","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_RMR",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"CUP_U_B_USArmy_Soft",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",4,30}}},{"tfa_v_mmac_medic_belt_rngrn",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",16,30},{"rhsusf_mag_15Rnd_9x19_FMJ",1,15},{"SmokeShell",5,1},{"SmokeShellYellow",5,1}}},{"tfa_Kitbag_mc3",{{"ACE_DAGR",1},{"ACE_elasticBandage",40},{"ACE_quikclot",40},{"ACE_adenosine",4},{"ACE_epinephrine",12},{"ACE_morphine",12},{"ACE_salineIV",10},{"ACE_salineIV_500",6},{"ACE_tourniquet",10},{"ACE_splint",6},{"ACE_personalAidKit",5}}},"CUP_H_OpsCore_Grey_SF","USP_MFRAME_TAN2",{},{"ItemMap","","ItemRadio","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_Medic_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Doctor (Winter)"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"TanoanHead_A3_07", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USArmy_Soft"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","CUP_H_OpsCore_Grey_SF"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","CUP_H_OpsCore_Grey_SF"}; 
		weapons[] = {"rhs_weap_m4a1_carryhandle_grip","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_carryhandle_grip","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "tfa_Kitbag_mc3";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_carryhandle_grip","","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_RMR",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"CUP_U_B_USArmy_Soft",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",4,30}}},{"tfa_v_mmac_medic_belt_rngrn",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",16,30},{"rhsusf_mag_15Rnd_9x19_FMJ",1,15},{"SmokeShell",5,1},{"SmokeShellYellow",5,1}}},{"tfa_Kitbag_mc3",{{"ACE_DAGR",1},{"ACE_elasticBandage",40},{"ACE_quikclot",40},{"ACE_adenosine",4},{"ACE_epinephrine",12},{"ACE_morphine",12},{"ACE_salineIV",10},{"ACE_salineIV_500",6},{"ACE_tourniquet",10},{"ACE_splint",6},{"ACE_personalAidKit",5}}},"CUP_H_OpsCore_Grey_SF","USP_MFRAME_TAN2",{},{"ItemMap","","ItemRadio","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_Medic_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Doctor (Winter)"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"TanoanHead_A3_07", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USArmy_Soft"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","CUP_H_OpsCore_Grey_SF"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","CUP_H_OpsCore_Grey_SF"}; 
		weapons[] = {"rhs_weap_m4a1_carryhandle_grip","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_carryhandle_grip","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "tfa_Kitbag_mc3";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_carryhandle_grip","","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_RMR",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"CUP_U_B_USArmy_Soft",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",4,30}}},{"tfa_v_mmac_medic_belt_rngrn",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",16,30},{"rhsusf_mag_15Rnd_9x19_FMJ",1,15},{"SmokeShell",5,1},{"SmokeShellYellow",5,1}}},{"tfa_Kitbag_mc3",{{"ACE_DAGR",1},{"ACE_elasticBandage",40},{"ACE_quikclot",40},{"ACE_adenosine",4},{"ACE_epinephrine",12},{"ACE_morphine",12},{"ACE_salineIV",10},{"ACE_salineIV_500",6},{"ACE_tourniquet",10},{"ACE_splint",6},{"ACE_personalAidKit",5}}},"CUP_H_OpsCore_Grey_SF","USP_MFRAME_TAN2",{},{"ItemMap","","ItemRadio","ItemCompass","Itemwatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 
};
class CfgPatches
{
	class bm_specops_faction_US_RANGER_2000
	{
		author = "Sammy Dorito";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"bm_specops_faction_US_ARMA_BASE","rhsusf_c_weapons","ace_compat_rhs_usf3_arsenal","Blastcore_MainCore","ace_compat_rhs_usf3","JSOC_Uniforms","ace_attach","ace_hearing","ace_medical_treatment","tfa_jpc","A3_Weapons_F","ace_realisticnames","ace_dagr","ace_trenches","ace_logistics_wirecutter","ace_explosives","rhsusf_c_troops","ace_vector","tfar_handhelds","USP_Gear_NVG","CUP_Weapons_Mk48","CUP_Weapons_West_Attachments","CUP_Weapons_Ammunition","ace_overheating","ace_compat_rhs_usf3_scopes","ace_kestrel4500","ace_rangecard","ace_atragmx","mas_cia_jsog","ace_microdagr","A3_Characters_F","tfar_core","USP_Gear_Head","CUP_Creatures_Military_USArmy","CUP_Weapons_M72A6","USP_Gear_Body","CUP_Creatures_Extra_OpsCore"};
		skipWhenMissingDependencies = 1;
	};
};
class CfgFactionClasses {
	// As Friendly (BluFOR)
	class BS_B_US_RANGER_2000_BASE { 
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
		brokenSkullArsenal[]={"SmokeShellBlue","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","SmokeShellRed","SmokeShellYellow","ACE_bodyBag","ACE_bodyBag_blue","ACE_bodyBag_white","ACE_bloodIV","ACE_bloodIV_250","ACE_bloodIV_500","ACE_plasmaIV","ACE_plasmaIV_250","ACE_plasmaIV_500","ACE_salineIV","ACE_salineIV_250","ACE_salineIV_500","ACE_splint","ACE_surgicalKit","ACE_suture","ACE_tourniquet","ACE_personalAidKit","ACE_morphine","ACE_epinephrine","ACE_quikclot","ACE_elasticBandage","ACE_adenosine","ACE_WaterBottle","ACE_Sunflower_Seeds","ACE_Humanitarian_Ration","ACE_Can_Franta","ACE_wirecutter","ACE_RangeCard","MineDetector","ACE_microDAGR","ACE_MapTools","ACE_Clacker","ACE_M26_Clacker","ACE_Kestrel4500","ACE_HuntIR_monitor","ACE_Fortify","ACE_EntrenchingTool","ACE_DefusalKit","ACE_DeadManSwitch","ACE_DAGR","ACE_ATragMX","ACE_artilleryTable","ACE_RangeTable_82mm","DemoCharge_Remote_Mag","rhsusf_m112_mag","ATMine_Range_Mag","Aegis_HandFlare_Green","Aegis_HandFlare_Red","plp_bo_w_BottleLiqCream","plp_bo_w_BottleGin","plp_bo_w_BottleLiqOrange","plp_bo_w_BottleTequila","ACE_CableTie","plp_bo_w_Cigar","plp_bo_w_CigarCutter","ACE_EarPlugs","plp_bo_w_CigarFine","ACE_IR_Strobe_Item","plp_bo_w_CigarBoxSealed","ACE_SpareBarrel","ACE_SpraypaintBlack","ACE_SpraypaintBlue","ACE_SpraypaintGreen","ACE_SpraypaintRed","ACE_SpraypaintWhite","ACE_SpraypaintYellow","plp_bo_w_SunBlocker","plp_bo_w_SunMilk","ACE_UAVBattery","rhs_weap_m4a1_wd_grip","rhsusf_acc_nt4_black","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_wd","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_acc_grip1","rhs_weap_m72a7","rhsusf_weap_m9","rhsusf_mag_15Rnd_9x19_JHP","JSOC_Uniform_W1","tfa_v_mmac_teamleader_belt_rngrn","rhsusf_mag_15Rnd_9x19_FMJ","rhs_mag_m67","SmokeShell","rhsusf_mich_bare_norotos_alt","ACE_Vector","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","Itemwatch","USP_PVS15","rhs_weap_m4a1_m203s_wd","rhsusf_acc_anpeq15side","rhs_mag_M433_HEDP","rhs_mag_m714_White","rhsusf_mich_bare_norotos_arc_alt","CUP_lmg_Mk48_nohg_od","CUP_acc_ANPEQ_15","CUP_optic_ElcanM145","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","JSOC_Uniform_W2","tfa_v_mmac_hgunner_rngrn","rhs_weap_m14ebrri","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_anpeq15side_bk","rhsusf_acc_LEUPOLDMK4","rhsusf_20Rnd_762x51_m993_Mag","rhsusf_acc_harris_bipod","JSOC_Uniform_W3","ItemRadio","rhs_weap_m4a1_d_grip","rhsusf_acc_ACOG_d","U_mas_cia_B_Wetsuit","V_RebreatherB","USP_HEAD_MICH_TC2002_TAN","rhsusf_acc_nt4_tan","CUP_U_B_USArmy_ACU_Kneepad_Gloves_UCP","rhs_weap_m4a1_m203s_d","CUP_lmg_Mk48_nohg_des","CUP_launch_M72A6","tfa_v_mmac_medic_belt_rngrn","rhs_weap_m4a1_carryhandle_grip","rhsusf_acc_ACOG_RMR","USP_OVERWHITE_G3C_KP_MX_MCA_M81","tfa_v_mmac_teamleader_rngrn","rhs_weap_m4a1_carryhandle_m203","CUP_U_B_USArmy_Soft","CUP_lmg_Mk48_nohg","USP_OVERWHITE_G3C_KP2_MCA_M81","rhsusf_mich_bare_norotos_headset","CUP_H_OpsCore_Grey_SF"};

		garage[]={{"rhsusf_m1165a1_gmv_mk19_m240_socom_d",1,500,2},{"rhsusf_m1165a1_gmv_m2_m240_socom_d",1,500,2},{"rhsusf_m1165a1_gmv_m134d_m240_socom_d",1,500,2},{"rhsusf_mrzr4_d",0,50,-1},{"RHS_MELB_AH6M",2,1000,-1},{"RHS_MELB_MH6M",2,7000,-1},{"CUP_B_MH47E_USA",2,10000,-1},{"CUP_B_MH60L_DAP_2x_US",2,1500,-1},{"CUP_B_MH60L_DAP_4x_US",2,1500,-1},{"RHS_A10",2,2000,-1},{"CUP_B_A10_DYN_USA",2,2000,-1},{"rhsusf_stryker_m1126_m2_wd",1,40,3},{"rhsusf_stryker_m1126_mk19_wd",1,40,3},{"RHS_M252_WD",0,10,-1},{"RHS_M2StaticMG_WD",0,10,-1},{"RHS_TOW_TriPod_WD",0,50,-1},{"RHS_MK19_TriPod_WD",0,10,-1},{"rhsusf_m1a2sep1tuskiiwd_usarmy",2,1500,1},{"rhsusf_stryker_m1132_m2_wd",1,40,3},{"rhsusf_stryker_m1132_m2_np_wd",1,40,3},{"RHS_M2A3_BUSKIII",2,1000,1}};
		SamSystem[]={};
		StaticLowMG[]={};
		StaticHighMG[]={};
		StaticMotar[]={};
		StaticAntiAir[]={};
		VehicleTechnicals[]={"rhsusf_m1165a1_gmv_mk19_m240_socom_d","rhsusf_m1165a1_gmv_m2_m240_socom_d","rhsusf_m1165a1_gmv_m134d_m240_socom_d"};
		VehicleAntiAircraft[]={};
		VehicleTanks[]={"rhsusf_m1a2sep1tuskiiwd_usarmy","RHS_M2A3_BUSKIII"};
		VehicleTransport[]={"rhsusf_stryker_m1126_m2_wd","rhsusf_stryker_m1126_mk19_wd","rhsusf_stryker_m1132_m2_wd","rhsusf_stryker_m1132_m2_np_wd"};
	};
	// As Friendly (BluFOR)
	class BS_B_US_RANGER_2000 : BS_B_US_RANGER_2000_BASE { 
		useForSpecOps = 1;   
		displayName = "US - RANGER (2000)";
		side = 1;       
		flag = "\A3\Data_F\Flags\flag_US_CO.paa";
		icon = "\A3\Data_F\Flags\flag_US_CO.paa";
		priority = 0; 
	};
	// As Opposite Forces (OpFOR)
	class BS_O_US_RANGER_2000 : BS_B_US_RANGER_2000_BASE { 
		useForSpecOps = 1;
		displayName = "US - RANGER (2000)";
		side = 0;       
		flag = "\A3\Data_F\Flags\flag_US_CO.paa";
		icon = "\A3\Data_F\Flags\flag_US_CO.paa";
		priority = 0; 
	};
	// As Independent (Independent)
	class BS_I_US_RANGER_2000 : BS_B_US_RANGER_2000_BASE { 
		useForSpecOps = 1;
		displayName = "US - RANGER (2000)";
		side = 2;       
		flag = "\A3\Data_F\Flags\flag_US_CO.paa";
		icon = "\A3\Data_F\Flags\flag_US_CO.paa";
		priority = 0; 
	};
};
// As Friendly (BluFOR)
class SpecOps_Module_BLUFOR_Factions { 
	class BS_B_US_RANGER_2000 { name = "US - RANGER (2000)"; value = "BS_B_US_RANGER_2000"; };  
};
// As Friendly (BluFOR)
class SpecOps_Module_OPFOR_Factions { 
	class BS_O_US_RANGER_2000 { name = "US - RANGER (2000)"; value = "BS_O_US_RANGER_2000"; };  
};
// As Friendly (BluFOR)
class SpecOps_Module_GRE_Factions { 
	class BS_I_US_RANGER_2000 { name = "US - RANGER (2000)"; value = "BS_I_US_RANGER_2000"; };  
};