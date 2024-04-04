
#include "\bsm_so_factions\data\factions\mali_fama_2021\audio.hpp"

class CfgVehicles {
	class B_Survivor_F;
	class I_G_Survivor_F;
	class O_G_Survivor_F; 
	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_Rifleman_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Rifleman (Woodland)"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_08", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USMC_MCCUU_des_roll_pads_gloves"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_green"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_green"}; 
		weapons[] = {"CUP_arifle_AK47_top_rail","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_AK47_top_rail","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "CUP_B_GER_Medic_Tropentarn";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47_top_rail","CUP_muzzle_Bizon","CUP_acc_ANPEQ_15_Black","CUP_optic_TrijiconRx01_kf_black",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"CUP_U_B_USMC_MCCUU_des_roll_pads_gloves",{}},{"CUP_V_I_RACS_Carrier_Vest",{{"CUP_HandGrenade_L109A2_HE",3,1},{"SmokeShellGreen",2,1},{"SmokeShellOrange",2,1},{"SmokeShellPurple",2,1},{"SmokeShellRed",2,1}}},{"CUP_B_GER_Medic_Tropentarn",{}},"H_HelmetSpecB_green","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_Rifleman_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Rifleman (Woodland)"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_08", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USMC_MCCUU_des_roll_pads_gloves"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_green"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_green"}; 
		weapons[] = {"CUP_arifle_AK47_top_rail","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_AK47_top_rail","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "CUP_B_GER_Medic_Tropentarn";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47_top_rail","CUP_muzzle_Bizon","CUP_acc_ANPEQ_15_Black","CUP_optic_TrijiconRx01_kf_black",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"CUP_U_B_USMC_MCCUU_des_roll_pads_gloves",{}},{"CUP_V_I_RACS_Carrier_Vest",{{"CUP_HandGrenade_L109A2_HE",3,1},{"SmokeShellGreen",2,1},{"SmokeShellOrange",2,1},{"SmokeShellPurple",2,1},{"SmokeShellRed",2,1}}},{"CUP_B_GER_Medic_Tropentarn",{}},"H_HelmetSpecB_green","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_Rifleman_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Rifleman (Woodland)"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_08", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USMC_MCCUU_des_roll_pads_gloves"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_green"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_green"}; 
		weapons[] = {"CUP_arifle_AK47_top_rail","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_AK47_top_rail","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "CUP_B_GER_Medic_Tropentarn";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47_top_rail","CUP_muzzle_Bizon","CUP_acc_ANPEQ_15_Black","CUP_optic_TrijiconRx01_kf_black",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"CUP_U_B_USMC_MCCUU_des_roll_pads_gloves",{}},{"CUP_V_I_RACS_Carrier_Vest",{{"CUP_HandGrenade_L109A2_HE",3,1},{"SmokeShellGreen",2,1},{"SmokeShellOrange",2,1},{"SmokeShellPurple",2,1},{"SmokeShellRed",2,1}}},{"CUP_B_GER_Medic_Tropentarn",{}},"H_HelmetSpecB_green","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_GL_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Grenadier (Woodland)"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_06", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USMC_MCCUU_des_pads_gloves"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","CUP_H_USArmy_ECH_Headset_MARPAT_des"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","CUP_H_USArmy_ECH_Headset_MARPAT_des"}; 
		weapons[] = {"CUP_arifle_AK47_GL_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_AK47_GL_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_desert_lxWS";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47_GL_top_rail","CUP_muzzle_snds_socom762rc","ACE_DBAL_A3_Red","optic_MRCO",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"CUP_U_B_USMC_MCCUU_des_pads_gloves",{}},{"V_lxWS_PlateCarrier1_desert",{}},{"B_AssaultPack_desert_lxWS",{}},"CUP_H_USArmy_ECH_Headset_MARPAT_des","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_GL_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Grenadier (Woodland)"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_06", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USMC_MCCUU_des_pads_gloves"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","CUP_H_USArmy_ECH_Headset_MARPAT_des"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","CUP_H_USArmy_ECH_Headset_MARPAT_des"}; 
		weapons[] = {"CUP_arifle_AK47_GL_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_AK47_GL_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_desert_lxWS";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47_GL_top_rail","CUP_muzzle_snds_socom762rc","ACE_DBAL_A3_Red","optic_MRCO",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"CUP_U_B_USMC_MCCUU_des_pads_gloves",{}},{"V_lxWS_PlateCarrier1_desert",{}},{"B_AssaultPack_desert_lxWS",{}},"CUP_H_USArmy_ECH_Headset_MARPAT_des","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_GL_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Grenadier (Woodland)"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_06", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USMC_MCCUU_des_pads_gloves"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","CUP_H_USArmy_ECH_Headset_MARPAT_des"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","CUP_H_USArmy_ECH_Headset_MARPAT_des"}; 
		weapons[] = {"CUP_arifle_AK47_GL_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_AK47_GL_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_desert_lxWS";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47_GL_top_rail","CUP_muzzle_snds_socom762rc","ACE_DBAL_A3_Red","optic_MRCO",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"CUP_U_B_USMC_MCCUU_des_pads_gloves",{}},{"V_lxWS_PlateCarrier1_desert",{}},{"B_AssaultPack_desert_lxWS",{}},"CUP_H_USArmy_ECH_Headset_MARPAT_des","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_RTO_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Radio Operator (Woodland)"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"AfricanHead_03", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "Aegis_U_O_CombatFatigues_dst_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"CUP_arifle_AK47_top_rail","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_AK47_top_rail","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47_top_rail","","ACE_DBAL_A3_Red","CUP_optic_HensoldtZO_low_RDS",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"Aegis_U_O_CombatFatigues_dst_F",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"Aegis_V_PlateCarrier2_alt_desert",{{"SmokeShell",8,1},{"Chemlight_green",1,1},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",2,1}}},{},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_RTO_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Radio Operator (Woodland)"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"AfricanHead_03", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "Aegis_U_O_CombatFatigues_dst_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"CUP_arifle_AK47_top_rail","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_AK47_top_rail","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47_top_rail","","ACE_DBAL_A3_Red","CUP_optic_HensoldtZO_low_RDS",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"Aegis_U_O_CombatFatigues_dst_F",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"Aegis_V_PlateCarrier2_alt_desert",{{"SmokeShell",8,1},{"Chemlight_green",1,1},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",2,1}}},{},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_RTO_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Radio Operator (Woodland)"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"AfricanHead_03", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "Aegis_U_O_CombatFatigues_dst_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"CUP_arifle_AK47_top_rail","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_AK47_top_rail","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47_top_rail","","ACE_DBAL_A3_Red","CUP_optic_HensoldtZO_low_RDS",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"Aegis_U_O_CombatFatigues_dst_F",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"Aegis_V_PlateCarrier2_alt_desert",{{"SmokeShell",8,1},{"Chemlight_green",1,1},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",2,1}}},{},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_AR_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Machine Gunner (Woodland)"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_04", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USMC_MCCUU_des_roll_pads_gloves"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","rhsusf_ach_helmet_ucp_norotos"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","rhsusf_ach_helmet_ucp_norotos"}; 
		weapons[] = {"CUP_arifle_RPK74_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_RPK74_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_ViperHarness_whex_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_RPK74_top_rail","CUP_muzzle_snds_socom762rc","","CUP_optic_SB_11_4x20_PM",{"75rnd_762x39_AK12_Mag_F",75},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"CUP_U_B_USMC_MCCUU_des_roll_pads_gloves",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"Aegis_V_PlateCarrier2_alt_desert",{{"SmokeShell",6,1},{"rhs_mag_m67",2,1}}},{"B_ViperHarness_whex_F",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1}}},"rhsusf_ach_helmet_ucp_norotos","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_AR_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Machine Gunner (Woodland)"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_04", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USMC_MCCUU_des_roll_pads_gloves"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","rhsusf_ach_helmet_ucp_norotos"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","rhsusf_ach_helmet_ucp_norotos"}; 
		weapons[] = {"CUP_arifle_RPK74_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_RPK74_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_ViperHarness_whex_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_RPK74_top_rail","CUP_muzzle_snds_socom762rc","","CUP_optic_SB_11_4x20_PM",{"75rnd_762x39_AK12_Mag_F",75},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"CUP_U_B_USMC_MCCUU_des_roll_pads_gloves",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"Aegis_V_PlateCarrier2_alt_desert",{{"SmokeShell",6,1},{"rhs_mag_m67",2,1}}},{"B_ViperHarness_whex_F",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1}}},"rhsusf_ach_helmet_ucp_norotos","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_AR_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Machine Gunner (Woodland)"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_04", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USMC_MCCUU_des_roll_pads_gloves"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","rhsusf_ach_helmet_ucp_norotos"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","rhsusf_ach_helmet_ucp_norotos"}; 
		weapons[] = {"CUP_arifle_RPK74_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_RPK74_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_ViperHarness_whex_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_RPK74_top_rail","CUP_muzzle_snds_socom762rc","","CUP_optic_SB_11_4x20_PM",{"75rnd_762x39_AK12_Mag_F",75},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"CUP_U_B_USMC_MCCUU_des_roll_pads_gloves",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"Aegis_V_PlateCarrier2_alt_desert",{{"SmokeShell",6,1},{"rhs_mag_m67",2,1}}},{"B_ViperHarness_whex_F",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1}}},"rhsusf_ach_helmet_ucp_norotos","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_SNP_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Sniper (Woodland)"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"AfricanHead_03", "Male04ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USMC_FROG3_DMARPAT"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_mas_cia_airframe_d"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_mas_cia_airframe_d"}; 
		weapons[] = {"CUP_SKS_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_SKS_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_desert_lxWS";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_SKS_rail","","","CUP_optic_LeupoldMk4",{"CUP_10Rnd_762x39_SKS_M",10},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"CUP_U_B_USMC_FROG3_DMARPAT",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_lxWS_PlateCarrier2_desert",{{"SmokeShell",5,1},{"rhs_mag_m67",1,1}}},{"B_AssaultPack_desert_lxWS",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_Kestrel4500",1},{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_ATragMX",1},{"rhsusf_mag_40Rnd_46x30_JHP",10,40}}},"H_mas_cia_airframe_d","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_SNP_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Sniper (Woodland)"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"AfricanHead_03", "Male04ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USMC_FROG3_DMARPAT"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_mas_cia_airframe_d"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_mas_cia_airframe_d"}; 
		weapons[] = {"CUP_SKS_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_SKS_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_desert_lxWS";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_SKS_rail","","","CUP_optic_LeupoldMk4",{"CUP_10Rnd_762x39_SKS_M",10},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"CUP_U_B_USMC_FROG3_DMARPAT",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_lxWS_PlateCarrier2_desert",{{"SmokeShell",5,1},{"rhs_mag_m67",1,1}}},{"B_AssaultPack_desert_lxWS",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_Kestrel4500",1},{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_ATragMX",1},{"rhsusf_mag_40Rnd_46x30_JHP",10,40}}},"H_mas_cia_airframe_d","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_SNP_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Sniper (Woodland)"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"AfricanHead_03", "Male04ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USMC_FROG3_DMARPAT"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_mas_cia_airframe_d"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_mas_cia_airframe_d"}; 
		weapons[] = {"CUP_SKS_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_SKS_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_desert_lxWS";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_SKS_rail","","","CUP_optic_LeupoldMk4",{"CUP_10Rnd_762x39_SKS_M",10},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"CUP_U_B_USMC_FROG3_DMARPAT",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_lxWS_PlateCarrier2_desert",{{"SmokeShell",5,1},{"rhs_mag_m67",1,1}}},{"B_AssaultPack_desert_lxWS",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_Kestrel4500",1},{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_ATragMX",1},{"rhsusf_mag_40Rnd_46x30_JHP",10,40}}},"H_mas_cia_airframe_d","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_Medic_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Doctor (Woodland)"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_06", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "Aegis_U_O_CombatUniform_tshirt_dst_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_paint2"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_paint2"}; 
		weapons[] = {"CUP_arifle_AK47_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_AK47_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_desert_lxWS";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47_top_rail","CUP_muzzle_Bizon","ACE_DBAL_A3_Red","rhsusf_acc_su230",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"Aegis_U_O_CombatUniform_tshirt_dst_F",{{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_EarPlugs",1},{"ACE_CableTie",4}}},{"V_lxWS_PlateCarrier2_desert",{{"SmokeShell",4,1},{"rhs_mag_mk84",2,1}}},{"B_AssaultPack_desert_lxWS",{{"ACE_wirecutter",1},{"ACE_HuntIR_monitor",1},{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_elasticBandage",40},{"ACE_quikclot",40},{"ACE_morphine",10},{"ACE_epinephrine",10},{"ACE_personalAidKit",4}}},"H_HelmetSpecB_paint2","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_Medic_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Doctor (Woodland)"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_06", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "Aegis_U_O_CombatUniform_tshirt_dst_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_paint2"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_paint2"}; 
		weapons[] = {"CUP_arifle_AK47_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_AK47_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_desert_lxWS";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47_top_rail","CUP_muzzle_Bizon","ACE_DBAL_A3_Red","rhsusf_acc_su230",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"Aegis_U_O_CombatUniform_tshirt_dst_F",{{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_EarPlugs",1},{"ACE_CableTie",4}}},{"V_lxWS_PlateCarrier2_desert",{{"SmokeShell",4,1},{"rhs_mag_mk84",2,1}}},{"B_AssaultPack_desert_lxWS",{{"ACE_wirecutter",1},{"ACE_HuntIR_monitor",1},{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_elasticBandage",40},{"ACE_quikclot",40},{"ACE_morphine",10},{"ACE_epinephrine",10},{"ACE_personalAidKit",4}}},"H_HelmetSpecB_paint2","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_Medic_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Doctor (Woodland)"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_06", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "Aegis_U_O_CombatUniform_tshirt_dst_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_paint2"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_paint2"}; 
		weapons[] = {"CUP_arifle_AK47_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_AK47_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_desert_lxWS";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47_top_rail","CUP_muzzle_Bizon","ACE_DBAL_A3_Red","rhsusf_acc_su230",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"Aegis_U_O_CombatUniform_tshirt_dst_F",{{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_EarPlugs",1},{"ACE_CableTie",4}}},{"V_lxWS_PlateCarrier2_desert",{{"SmokeShell",4,1},{"rhs_mag_mk84",2,1}}},{"B_AssaultPack_desert_lxWS",{{"ACE_wirecutter",1},{"ACE_HuntIR_monitor",1},{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_elasticBandage",40},{"ACE_quikclot",40},{"ACE_morphine",10},{"ACE_epinephrine",10},{"ACE_personalAidKit",4}}},"H_HelmetSpecB_paint2","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_DIVER_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Diver (Woodland)"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"AfricanHead_01", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","NVGoggles_mas_cia_hv","G_B_Diving","H_HelmetSpecB_green"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","NVGoggles_mas_cia_hv","G_B_Diving","H_HelmetSpecB_green"}; 
		weapons[] = {"CUP_arifle_AK101_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_AK101_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_mas_cia_Kitbag_LB";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK101_top_rail","muzzle_snds_M","CUP_acc_ANPEQ_15_Black","CUP_optic_LeupoldMk4",{"CUP_30Rnd_556x45_AK",30},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_mas_cia_B_Wetsuit",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_mas_cia_RebreatherB",{{"SmokeShell",8,1},{"Chemlight_green",1,1},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",2,1}}},{"B_mas_cia_Kitbag_LB",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_elasticBandage",10},{"ACE_quikclot",10},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_epinephrine",1},{"ACE_microDAGR",1},{"rhsusf_mag_40Rnd_46x30_JHP",2,40}}},"H_HelmetSpecB_green","G_B_Diving",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch","NVGoggles_mas_cia_hv"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_DIVER_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Diver (Woodland)"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"AfricanHead_01", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","NVGoggles_mas_cia_hv","G_B_Diving","H_HelmetSpecB_green"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","NVGoggles_mas_cia_hv","G_B_Diving","H_HelmetSpecB_green"}; 
		weapons[] = {"CUP_arifle_AK101_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_AK101_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_mas_cia_Kitbag_LB";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK101_top_rail","muzzle_snds_M","CUP_acc_ANPEQ_15_Black","CUP_optic_LeupoldMk4",{"CUP_30Rnd_556x45_AK",30},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_mas_cia_B_Wetsuit",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_mas_cia_RebreatherB",{{"SmokeShell",8,1},{"Chemlight_green",1,1},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",2,1}}},{"B_mas_cia_Kitbag_LB",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_elasticBandage",10},{"ACE_quikclot",10},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_epinephrine",1},{"ACE_microDAGR",1},{"rhsusf_mag_40Rnd_46x30_JHP",2,40}}},"H_HelmetSpecB_green","G_B_Diving",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch","NVGoggles_mas_cia_hv"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_DIVER_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Diver (Woodland)"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"AfricanHead_01", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","NVGoggles_mas_cia_hv","G_B_Diving","H_HelmetSpecB_green"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","NVGoggles_mas_cia_hv","G_B_Diving","H_HelmetSpecB_green"}; 
		weapons[] = {"CUP_arifle_AK101_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_AK101_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_mas_cia_Kitbag_LB";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK101_top_rail","muzzle_snds_M","CUP_acc_ANPEQ_15_Black","CUP_optic_LeupoldMk4",{"CUP_30Rnd_556x45_AK",30},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_mas_cia_B_Wetsuit",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_mas_cia_RebreatherB",{{"SmokeShell",8,1},{"Chemlight_green",1,1},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",2,1}}},{"B_mas_cia_Kitbag_LB",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_elasticBandage",10},{"ACE_quikclot",10},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_epinephrine",1},{"ACE_microDAGR",1},{"rhsusf_mag_40Rnd_46x30_JHP",2,40}}},"H_HelmetSpecB_green","G_B_Diving",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch","NVGoggles_mas_cia_hv"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_Officer_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Officer (Woodland)"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"AfricanHead_01", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_BDUv2_gloves_dirty_desert"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_Beret_gen_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_Beret_gen_F"}; 
		weapons[] = {"CUP_hgun_Makarov","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_hgun_Makarov","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"CUP_hgun_Makarov","","","",{"CUP_8Rnd_9x18_Makarov_M",8},{},""},{"CUP_U_B_BDUv2_gloves_dirty_desert",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{},{},"H_Beret_gen_F","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_Officer_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Officer (Woodland)"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"AfricanHead_01", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_BDUv2_gloves_dirty_desert"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_Beret_gen_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_Beret_gen_F"}; 
		weapons[] = {"CUP_hgun_Makarov","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_hgun_Makarov","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"CUP_hgun_Makarov","","","",{"CUP_8Rnd_9x18_Makarov_M",8},{},""},{"CUP_U_B_BDUv2_gloves_dirty_desert",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{},{},"H_Beret_gen_F","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_Officer_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Officer (Woodland)"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"AfricanHead_01", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_BDUv2_gloves_dirty_desert"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_Beret_gen_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_Beret_gen_F"}; 
		weapons[] = {"CUP_hgun_Makarov","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_hgun_Makarov","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"CUP_hgun_Makarov","","","",{"CUP_8Rnd_9x18_Makarov_M",8},{},""},{"CUP_U_B_BDUv2_gloves_dirty_desert",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{},{},"H_Beret_gen_F","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_Rifleman_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Rifleman (Desert)"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"AfricanHead_02", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USMC_MCCUU_des_roll_pads_gloves"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_green"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_green"}; 
		weapons[] = {"CUP_arifle_AK47_top_rail","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_AK47_top_rail","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "CUP_B_GER_Medic_Tropentarn";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47_top_rail","CUP_muzzle_Bizon","CUP_acc_ANPEQ_15_Black","CUP_optic_TrijiconRx01_kf_black",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"CUP_U_B_USMC_MCCUU_des_roll_pads_gloves",{}},{"CUP_V_I_RACS_Carrier_Vest",{{"CUP_HandGrenade_L109A2_HE",3,1},{"SmokeShellGreen",2,1},{"SmokeShellOrange",2,1},{"SmokeShellPurple",2,1},{"SmokeShellRed",2,1}}},{"CUP_B_GER_Medic_Tropentarn",{}},"H_HelmetSpecB_green","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_Rifleman_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Rifleman (Desert)"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"AfricanHead_02", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USMC_MCCUU_des_roll_pads_gloves"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_green"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_green"}; 
		weapons[] = {"CUP_arifle_AK47_top_rail","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_AK47_top_rail","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "CUP_B_GER_Medic_Tropentarn";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47_top_rail","CUP_muzzle_Bizon","CUP_acc_ANPEQ_15_Black","CUP_optic_TrijiconRx01_kf_black",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"CUP_U_B_USMC_MCCUU_des_roll_pads_gloves",{}},{"CUP_V_I_RACS_Carrier_Vest",{{"CUP_HandGrenade_L109A2_HE",3,1},{"SmokeShellGreen",2,1},{"SmokeShellOrange",2,1},{"SmokeShellPurple",2,1},{"SmokeShellRed",2,1}}},{"CUP_B_GER_Medic_Tropentarn",{}},"H_HelmetSpecB_green","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_Rifleman_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Rifleman (Desert)"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"AfricanHead_02", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USMC_MCCUU_des_roll_pads_gloves"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_green"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_green"}; 
		weapons[] = {"CUP_arifle_AK47_top_rail","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_AK47_top_rail","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "CUP_B_GER_Medic_Tropentarn";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47_top_rail","CUP_muzzle_Bizon","CUP_acc_ANPEQ_15_Black","CUP_optic_TrijiconRx01_kf_black",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"CUP_U_B_USMC_MCCUU_des_roll_pads_gloves",{}},{"CUP_V_I_RACS_Carrier_Vest",{{"CUP_HandGrenade_L109A2_HE",3,1},{"SmokeShellGreen",2,1},{"SmokeShellOrange",2,1},{"SmokeShellPurple",2,1},{"SmokeShellRed",2,1}}},{"CUP_B_GER_Medic_Tropentarn",{}},"H_HelmetSpecB_green","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_GL_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Grenadier (Desert)"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"AfricanHead_03", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USMC_MCCUU_des_pads_gloves"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","CUP_H_USArmy_ECH_Headset_MARPAT_des"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","CUP_H_USArmy_ECH_Headset_MARPAT_des"}; 
		weapons[] = {"CUP_arifle_AK47_GL_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_AK47_GL_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_desert_lxWS";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47_GL_top_rail","CUP_muzzle_snds_socom762rc","ACE_DBAL_A3_Red","optic_MRCO",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"CUP_U_B_USMC_MCCUU_des_pads_gloves",{}},{"V_lxWS_PlateCarrier1_desert",{}},{"B_AssaultPack_desert_lxWS",{}},"CUP_H_USArmy_ECH_Headset_MARPAT_des","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_GL_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Grenadier (Desert)"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"AfricanHead_03", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USMC_MCCUU_des_pads_gloves"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","CUP_H_USArmy_ECH_Headset_MARPAT_des"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","CUP_H_USArmy_ECH_Headset_MARPAT_des"}; 
		weapons[] = {"CUP_arifle_AK47_GL_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_AK47_GL_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_desert_lxWS";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47_GL_top_rail","CUP_muzzle_snds_socom762rc","ACE_DBAL_A3_Red","optic_MRCO",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"CUP_U_B_USMC_MCCUU_des_pads_gloves",{}},{"V_lxWS_PlateCarrier1_desert",{}},{"B_AssaultPack_desert_lxWS",{}},"CUP_H_USArmy_ECH_Headset_MARPAT_des","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_GL_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Grenadier (Desert)"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"AfricanHead_03", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USMC_MCCUU_des_pads_gloves"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","CUP_H_USArmy_ECH_Headset_MARPAT_des"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","CUP_H_USArmy_ECH_Headset_MARPAT_des"}; 
		weapons[] = {"CUP_arifle_AK47_GL_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_AK47_GL_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_desert_lxWS";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47_GL_top_rail","CUP_muzzle_snds_socom762rc","ACE_DBAL_A3_Red","optic_MRCO",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"CUP_U_B_USMC_MCCUU_des_pads_gloves",{}},{"V_lxWS_PlateCarrier1_desert",{}},{"B_AssaultPack_desert_lxWS",{}},"CUP_H_USArmy_ECH_Headset_MARPAT_des","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_RTO_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Radio Operator (Desert)"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanBossHead", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "Aegis_U_O_CombatFatigues_dst_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"CUP_arifle_AK47_top_rail","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_AK47_top_rail","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47_top_rail","","ACE_DBAL_A3_Red","CUP_optic_HensoldtZO_low_RDS",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"Aegis_U_O_CombatFatigues_dst_F",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"Aegis_V_PlateCarrier2_alt_desert",{{"SmokeShell",8,1},{"Chemlight_green",1,1},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",2,1}}},{},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_RTO_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Radio Operator (Desert)"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanBossHead", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "Aegis_U_O_CombatFatigues_dst_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"CUP_arifle_AK47_top_rail","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_AK47_top_rail","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47_top_rail","","ACE_DBAL_A3_Red","CUP_optic_HensoldtZO_low_RDS",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"Aegis_U_O_CombatFatigues_dst_F",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"Aegis_V_PlateCarrier2_alt_desert",{{"SmokeShell",8,1},{"Chemlight_green",1,1},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",2,1}}},{},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_RTO_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Radio Operator (Desert)"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanBossHead", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "Aegis_U_O_CombatFatigues_dst_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"CUP_arifle_AK47_top_rail","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_AK47_top_rail","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47_top_rail","","ACE_DBAL_A3_Red","CUP_optic_HensoldtZO_low_RDS",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"Aegis_U_O_CombatFatigues_dst_F",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"Aegis_V_PlateCarrier2_alt_desert",{{"SmokeShell",8,1},{"Chemlight_green",1,1},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",2,1}}},{},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_AR_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Machine Gunner (Desert)"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_06", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USMC_MCCUU_des_roll_pads_gloves"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","rhsusf_ach_helmet_ucp_norotos"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","rhsusf_ach_helmet_ucp_norotos"}; 
		weapons[] = {"CUP_arifle_RPK74_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_RPK74_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_ViperHarness_whex_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_RPK74_top_rail","CUP_muzzle_snds_socom762rc","","CUP_optic_SB_11_4x20_PM",{"75rnd_762x39_AK12_Mag_F",75},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"CUP_U_B_USMC_MCCUU_des_roll_pads_gloves",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"Aegis_V_PlateCarrier2_alt_desert",{{"SmokeShell",6,1},{"rhs_mag_m67",2,1}}},{"B_ViperHarness_whex_F",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1}}},"rhsusf_ach_helmet_ucp_norotos","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_AR_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Machine Gunner (Desert)"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_06", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USMC_MCCUU_des_roll_pads_gloves"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","rhsusf_ach_helmet_ucp_norotos"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","rhsusf_ach_helmet_ucp_norotos"}; 
		weapons[] = {"CUP_arifle_RPK74_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_RPK74_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_ViperHarness_whex_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_RPK74_top_rail","CUP_muzzle_snds_socom762rc","","CUP_optic_SB_11_4x20_PM",{"75rnd_762x39_AK12_Mag_F",75},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"CUP_U_B_USMC_MCCUU_des_roll_pads_gloves",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"Aegis_V_PlateCarrier2_alt_desert",{{"SmokeShell",6,1},{"rhs_mag_m67",2,1}}},{"B_ViperHarness_whex_F",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1}}},"rhsusf_ach_helmet_ucp_norotos","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_AR_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Machine Gunner (Desert)"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_06", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USMC_MCCUU_des_roll_pads_gloves"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","rhsusf_ach_helmet_ucp_norotos"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","rhsusf_ach_helmet_ucp_norotos"}; 
		weapons[] = {"CUP_arifle_RPK74_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_RPK74_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_ViperHarness_whex_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_RPK74_top_rail","CUP_muzzle_snds_socom762rc","","CUP_optic_SB_11_4x20_PM",{"75rnd_762x39_AK12_Mag_F",75},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"CUP_U_B_USMC_MCCUU_des_roll_pads_gloves",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"Aegis_V_PlateCarrier2_alt_desert",{{"SmokeShell",6,1},{"rhs_mag_m67",2,1}}},{"B_ViperHarness_whex_F",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1}}},"rhsusf_ach_helmet_ucp_norotos","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_SNP_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Sniper (Desert)"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"AfricanHead_02", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USMC_FROG3_DMARPAT"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_mas_cia_airframe_d"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_mas_cia_airframe_d"}; 
		weapons[] = {"CUP_SKS_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_SKS_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_desert_lxWS";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_SKS_rail","","","CUP_optic_LeupoldMk4",{"CUP_10Rnd_762x39_SKS_M",10},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"CUP_U_B_USMC_FROG3_DMARPAT",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_lxWS_PlateCarrier2_desert",{{"SmokeShell",5,1},{"rhs_mag_m67",1,1}}},{"B_AssaultPack_desert_lxWS",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_Kestrel4500",1},{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_ATragMX",1},{"rhsusf_mag_40Rnd_46x30_JHP",10,40}}},"H_mas_cia_airframe_d","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_SNP_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Sniper (Desert)"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"AfricanHead_02", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USMC_FROG3_DMARPAT"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_mas_cia_airframe_d"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_mas_cia_airframe_d"}; 
		weapons[] = {"CUP_SKS_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_SKS_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_desert_lxWS";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_SKS_rail","","","CUP_optic_LeupoldMk4",{"CUP_10Rnd_762x39_SKS_M",10},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"CUP_U_B_USMC_FROG3_DMARPAT",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_lxWS_PlateCarrier2_desert",{{"SmokeShell",5,1},{"rhs_mag_m67",1,1}}},{"B_AssaultPack_desert_lxWS",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_Kestrel4500",1},{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_ATragMX",1},{"rhsusf_mag_40Rnd_46x30_JHP",10,40}}},"H_mas_cia_airframe_d","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_SNP_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Sniper (Desert)"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"AfricanHead_02", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USMC_FROG3_DMARPAT"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_mas_cia_airframe_d"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_mas_cia_airframe_d"}; 
		weapons[] = {"CUP_SKS_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_SKS_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_desert_lxWS";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_SKS_rail","","","CUP_optic_LeupoldMk4",{"CUP_10Rnd_762x39_SKS_M",10},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"CUP_U_B_USMC_FROG3_DMARPAT",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_lxWS_PlateCarrier2_desert",{{"SmokeShell",5,1},{"rhs_mag_m67",1,1}}},{"B_AssaultPack_desert_lxWS",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_Kestrel4500",1},{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_ATragMX",1},{"rhsusf_mag_40Rnd_46x30_JHP",10,40}}},"H_mas_cia_airframe_d","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_Medic_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Doctor (Desert)"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_03", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "Aegis_U_O_CombatUniform_tshirt_dst_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_paint2"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_paint2"}; 
		weapons[] = {"CUP_arifle_AK47_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_AK47_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_desert_lxWS";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47_top_rail","CUP_muzzle_Bizon","ACE_DBAL_A3_Red","rhsusf_acc_su230",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"Aegis_U_O_CombatUniform_tshirt_dst_F",{{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_EarPlugs",1},{"ACE_CableTie",4}}},{"V_lxWS_PlateCarrier2_desert",{{"SmokeShell",4,1},{"rhs_mag_mk84",2,1}}},{"B_AssaultPack_desert_lxWS",{{"ACE_wirecutter",1},{"ACE_HuntIR_monitor",1},{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_elasticBandage",40},{"ACE_quikclot",40},{"ACE_morphine",10},{"ACE_epinephrine",10},{"ACE_personalAidKit",4}}},"H_HelmetSpecB_paint2","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_Medic_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Doctor (Desert)"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_03", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "Aegis_U_O_CombatUniform_tshirt_dst_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_paint2"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_paint2"}; 
		weapons[] = {"CUP_arifle_AK47_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_AK47_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_desert_lxWS";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47_top_rail","CUP_muzzle_Bizon","ACE_DBAL_A3_Red","rhsusf_acc_su230",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"Aegis_U_O_CombatUniform_tshirt_dst_F",{{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_EarPlugs",1},{"ACE_CableTie",4}}},{"V_lxWS_PlateCarrier2_desert",{{"SmokeShell",4,1},{"rhs_mag_mk84",2,1}}},{"B_AssaultPack_desert_lxWS",{{"ACE_wirecutter",1},{"ACE_HuntIR_monitor",1},{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_elasticBandage",40},{"ACE_quikclot",40},{"ACE_morphine",10},{"ACE_epinephrine",10},{"ACE_personalAidKit",4}}},"H_HelmetSpecB_paint2","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_Medic_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Doctor (Desert)"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_03", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "Aegis_U_O_CombatUniform_tshirt_dst_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_paint2"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_paint2"}; 
		weapons[] = {"CUP_arifle_AK47_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_AK47_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_desert_lxWS";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47_top_rail","CUP_muzzle_Bizon","ACE_DBAL_A3_Red","rhsusf_acc_su230",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"Aegis_U_O_CombatUniform_tshirt_dst_F",{{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_EarPlugs",1},{"ACE_CableTie",4}}},{"V_lxWS_PlateCarrier2_desert",{{"SmokeShell",4,1},{"rhs_mag_mk84",2,1}}},{"B_AssaultPack_desert_lxWS",{{"ACE_wirecutter",1},{"ACE_HuntIR_monitor",1},{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_elasticBandage",40},{"ACE_quikclot",40},{"ACE_morphine",10},{"ACE_epinephrine",10},{"ACE_personalAidKit",4}}},"H_HelmetSpecB_paint2","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_DIVER_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Diver (Desert)"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_02", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","NVGoggles_mas_cia_hv","G_B_Diving","H_HelmetSpecB_green"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","NVGoggles_mas_cia_hv","G_B_Diving","H_HelmetSpecB_green"}; 
		weapons[] = {"CUP_arifle_AK101_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_AK101_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_mas_cia_Kitbag_LB";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK101_top_rail","muzzle_snds_M","CUP_acc_ANPEQ_15_Black","CUP_optic_LeupoldMk4",{"CUP_30Rnd_556x45_AK",30},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_mas_cia_B_Wetsuit",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_mas_cia_RebreatherB",{{"SmokeShell",8,1},{"Chemlight_green",1,1},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",2,1}}},{"B_mas_cia_Kitbag_LB",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_elasticBandage",10},{"ACE_quikclot",10},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_epinephrine",1},{"ACE_microDAGR",1},{"rhsusf_mag_40Rnd_46x30_JHP",2,40}}},"H_HelmetSpecB_green","G_B_Diving",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch","NVGoggles_mas_cia_hv"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_DIVER_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Diver (Desert)"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_02", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","NVGoggles_mas_cia_hv","G_B_Diving","H_HelmetSpecB_green"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","NVGoggles_mas_cia_hv","G_B_Diving","H_HelmetSpecB_green"}; 
		weapons[] = {"CUP_arifle_AK101_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_AK101_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_mas_cia_Kitbag_LB";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK101_top_rail","muzzle_snds_M","CUP_acc_ANPEQ_15_Black","CUP_optic_LeupoldMk4",{"CUP_30Rnd_556x45_AK",30},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_mas_cia_B_Wetsuit",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_mas_cia_RebreatherB",{{"SmokeShell",8,1},{"Chemlight_green",1,1},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",2,1}}},{"B_mas_cia_Kitbag_LB",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_elasticBandage",10},{"ACE_quikclot",10},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_epinephrine",1},{"ACE_microDAGR",1},{"rhsusf_mag_40Rnd_46x30_JHP",2,40}}},"H_HelmetSpecB_green","G_B_Diving",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch","NVGoggles_mas_cia_hv"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_DIVER_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Diver (Desert)"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_02", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","NVGoggles_mas_cia_hv","G_B_Diving","H_HelmetSpecB_green"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","NVGoggles_mas_cia_hv","G_B_Diving","H_HelmetSpecB_green"}; 
		weapons[] = {"CUP_arifle_AK101_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_AK101_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_mas_cia_Kitbag_LB";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK101_top_rail","muzzle_snds_M","CUP_acc_ANPEQ_15_Black","CUP_optic_LeupoldMk4",{"CUP_30Rnd_556x45_AK",30},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_mas_cia_B_Wetsuit",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_mas_cia_RebreatherB",{{"SmokeShell",8,1},{"Chemlight_green",1,1},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",2,1}}},{"B_mas_cia_Kitbag_LB",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_elasticBandage",10},{"ACE_quikclot",10},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_epinephrine",1},{"ACE_microDAGR",1},{"rhsusf_mag_40Rnd_46x30_JHP",2,40}}},"H_HelmetSpecB_green","G_B_Diving",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch","NVGoggles_mas_cia_hv"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_Officer_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Officer (Desert)"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_06", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_BDUv2_gloves_dirty_desert"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_Beret_gen_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_Beret_gen_F"}; 
		weapons[] = {"CUP_hgun_Makarov","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_hgun_Makarov","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"CUP_hgun_Makarov","","","",{"CUP_8Rnd_9x18_Makarov_M",8},{},""},{"CUP_U_B_BDUv2_gloves_dirty_desert",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{},{},"H_Beret_gen_F","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_Officer_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Officer (Desert)"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_06", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_BDUv2_gloves_dirty_desert"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_Beret_gen_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_Beret_gen_F"}; 
		weapons[] = {"CUP_hgun_Makarov","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_hgun_Makarov","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"CUP_hgun_Makarov","","","",{"CUP_8Rnd_9x18_Makarov_M",8},{},""},{"CUP_U_B_BDUv2_gloves_dirty_desert",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{},{},"H_Beret_gen_F","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_Officer_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Officer (Desert)"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_06", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_BDUv2_gloves_dirty_desert"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_Beret_gen_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_Beret_gen_F"}; 
		weapons[] = {"CUP_hgun_Makarov","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_hgun_Makarov","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"CUP_hgun_Makarov","","","",{"CUP_8Rnd_9x18_Makarov_M",8},{},""},{"CUP_U_B_BDUv2_gloves_dirty_desert",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{},{},"H_Beret_gen_F","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_Rifleman_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Rifleman (Winter)"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_07", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USMC_MCCUU_des_roll_pads_gloves"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_green"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_green"}; 
		weapons[] = {"CUP_arifle_AK47_top_rail","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_AK47_top_rail","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "CUP_B_GER_Medic_Tropentarn";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47_top_rail","CUP_muzzle_Bizon","CUP_acc_ANPEQ_15_Black","CUP_optic_TrijiconRx01_kf_black",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"CUP_U_B_USMC_MCCUU_des_roll_pads_gloves",{}},{"CUP_V_I_RACS_Carrier_Vest",{{"CUP_HandGrenade_L109A2_HE",3,1},{"SmokeShellGreen",2,1},{"SmokeShellOrange",2,1},{"SmokeShellPurple",2,1},{"SmokeShellRed",2,1}}},{"CUP_B_GER_Medic_Tropentarn",{}},"H_HelmetSpecB_green","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_Rifleman_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Rifleman (Winter)"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_07", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USMC_MCCUU_des_roll_pads_gloves"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_green"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_green"}; 
		weapons[] = {"CUP_arifle_AK47_top_rail","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_AK47_top_rail","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "CUP_B_GER_Medic_Tropentarn";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47_top_rail","CUP_muzzle_Bizon","CUP_acc_ANPEQ_15_Black","CUP_optic_TrijiconRx01_kf_black",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"CUP_U_B_USMC_MCCUU_des_roll_pads_gloves",{}},{"CUP_V_I_RACS_Carrier_Vest",{{"CUP_HandGrenade_L109A2_HE",3,1},{"SmokeShellGreen",2,1},{"SmokeShellOrange",2,1},{"SmokeShellPurple",2,1},{"SmokeShellRed",2,1}}},{"CUP_B_GER_Medic_Tropentarn",{}},"H_HelmetSpecB_green","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_Rifleman_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Rifleman (Winter)"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_07", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USMC_MCCUU_des_roll_pads_gloves"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_green"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_green"}; 
		weapons[] = {"CUP_arifle_AK47_top_rail","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_AK47_top_rail","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "CUP_B_GER_Medic_Tropentarn";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47_top_rail","CUP_muzzle_Bizon","CUP_acc_ANPEQ_15_Black","CUP_optic_TrijiconRx01_kf_black",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"CUP_U_B_USMC_MCCUU_des_roll_pads_gloves",{}},{"CUP_V_I_RACS_Carrier_Vest",{{"CUP_HandGrenade_L109A2_HE",3,1},{"SmokeShellGreen",2,1},{"SmokeShellOrange",2,1},{"SmokeShellPurple",2,1},{"SmokeShellRed",2,1}}},{"CUP_B_GER_Medic_Tropentarn",{}},"H_HelmetSpecB_green","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_GL_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Grenadier (Winter)"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"AfricanHead_02", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USMC_MCCUU_des_pads_gloves"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","CUP_H_USArmy_ECH_Headset_MARPAT_des"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","CUP_H_USArmy_ECH_Headset_MARPAT_des"}; 
		weapons[] = {"CUP_arifle_AK47_GL_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_AK47_GL_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_desert_lxWS";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47_GL_top_rail","CUP_muzzle_snds_socom762rc","ACE_DBAL_A3_Red","optic_MRCO",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"CUP_U_B_USMC_MCCUU_des_pads_gloves",{}},{"V_lxWS_PlateCarrier1_desert",{}},{"B_AssaultPack_desert_lxWS",{}},"CUP_H_USArmy_ECH_Headset_MARPAT_des","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_GL_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Grenadier (Winter)"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"AfricanHead_02", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USMC_MCCUU_des_pads_gloves"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","CUP_H_USArmy_ECH_Headset_MARPAT_des"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","CUP_H_USArmy_ECH_Headset_MARPAT_des"}; 
		weapons[] = {"CUP_arifle_AK47_GL_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_AK47_GL_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_desert_lxWS";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47_GL_top_rail","CUP_muzzle_snds_socom762rc","ACE_DBAL_A3_Red","optic_MRCO",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"CUP_U_B_USMC_MCCUU_des_pads_gloves",{}},{"V_lxWS_PlateCarrier1_desert",{}},{"B_AssaultPack_desert_lxWS",{}},"CUP_H_USArmy_ECH_Headset_MARPAT_des","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_GL_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Grenadier (Winter)"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"AfricanHead_02", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USMC_MCCUU_des_pads_gloves"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","CUP_H_USArmy_ECH_Headset_MARPAT_des"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","CUP_H_USArmy_ECH_Headset_MARPAT_des"}; 
		weapons[] = {"CUP_arifle_AK47_GL_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_AK47_GL_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_desert_lxWS";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47_GL_top_rail","CUP_muzzle_snds_socom762rc","ACE_DBAL_A3_Red","optic_MRCO",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"CUP_U_B_USMC_MCCUU_des_pads_gloves",{}},{"V_lxWS_PlateCarrier1_desert",{}},{"B_AssaultPack_desert_lxWS",{}},"CUP_H_USArmy_ECH_Headset_MARPAT_des","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_RTO_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Radio Operator (Winter)"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanBossHead", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "Aegis_U_O_CombatFatigues_dst_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"CUP_arifle_AK47_top_rail","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_AK47_top_rail","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47_top_rail","","ACE_DBAL_A3_Red","CUP_optic_HensoldtZO_low_RDS",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"Aegis_U_O_CombatFatigues_dst_F",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"Aegis_V_PlateCarrier2_alt_desert",{{"SmokeShell",8,1},{"Chemlight_green",1,1},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",2,1}}},{},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_RTO_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Radio Operator (Winter)"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanBossHead", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "Aegis_U_O_CombatFatigues_dst_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"CUP_arifle_AK47_top_rail","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_AK47_top_rail","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47_top_rail","","ACE_DBAL_A3_Red","CUP_optic_HensoldtZO_low_RDS",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"Aegis_U_O_CombatFatigues_dst_F",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"Aegis_V_PlateCarrier2_alt_desert",{{"SmokeShell",8,1},{"Chemlight_green",1,1},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",2,1}}},{},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_RTO_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Radio Operator (Winter)"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanBossHead", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "Aegis_U_O_CombatFatigues_dst_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"CUP_arifle_AK47_top_rail","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_AK47_top_rail","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47_top_rail","","ACE_DBAL_A3_Red","CUP_optic_HensoldtZO_low_RDS",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"rhs_weap_m72a7","","","",{},{},""},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"Aegis_U_O_CombatFatigues_dst_F",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"Aegis_V_PlateCarrier2_alt_desert",{{"SmokeShell",8,1},{"Chemlight_green",1,1},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",2,1}}},{},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_AR_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Machine Gunner (Winter)"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_07", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USMC_MCCUU_des_roll_pads_gloves"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","rhsusf_ach_helmet_ucp_norotos"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","rhsusf_ach_helmet_ucp_norotos"}; 
		weapons[] = {"CUP_arifle_RPK74_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_RPK74_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_ViperHarness_whex_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_RPK74_top_rail","CUP_muzzle_snds_socom762rc","","CUP_optic_SB_11_4x20_PM",{"75rnd_762x39_AK12_Mag_F",75},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"CUP_U_B_USMC_MCCUU_des_roll_pads_gloves",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"Aegis_V_PlateCarrier2_alt_desert",{{"SmokeShell",6,1},{"rhs_mag_m67",2,1}}},{"B_ViperHarness_whex_F",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1}}},"rhsusf_ach_helmet_ucp_norotos","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_AR_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Machine Gunner (Winter)"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_07", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USMC_MCCUU_des_roll_pads_gloves"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","rhsusf_ach_helmet_ucp_norotos"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","rhsusf_ach_helmet_ucp_norotos"}; 
		weapons[] = {"CUP_arifle_RPK74_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_RPK74_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_ViperHarness_whex_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_RPK74_top_rail","CUP_muzzle_snds_socom762rc","","CUP_optic_SB_11_4x20_PM",{"75rnd_762x39_AK12_Mag_F",75},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"CUP_U_B_USMC_MCCUU_des_roll_pads_gloves",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"Aegis_V_PlateCarrier2_alt_desert",{{"SmokeShell",6,1},{"rhs_mag_m67",2,1}}},{"B_ViperHarness_whex_F",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1}}},"rhsusf_ach_helmet_ucp_norotos","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_AR_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Machine Gunner (Winter)"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_07", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USMC_MCCUU_des_roll_pads_gloves"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","rhsusf_ach_helmet_ucp_norotos"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","rhsusf_ach_helmet_ucp_norotos"}; 
		weapons[] = {"CUP_arifle_RPK74_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_RPK74_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_ViperHarness_whex_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_RPK74_top_rail","CUP_muzzle_snds_socom762rc","","CUP_optic_SB_11_4x20_PM",{"75rnd_762x39_AK12_Mag_F",75},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"CUP_U_B_USMC_MCCUU_des_roll_pads_gloves",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"Aegis_V_PlateCarrier2_alt_desert",{{"SmokeShell",6,1},{"rhs_mag_m67",2,1}}},{"B_ViperHarness_whex_F",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1}}},"rhsusf_ach_helmet_ucp_norotos","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_SNP_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Sniper (Winter)"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_01", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USMC_FROG3_DMARPAT"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_mas_cia_airframe_d"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_mas_cia_airframe_d"}; 
		weapons[] = {"CUP_SKS_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_SKS_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_desert_lxWS";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_SKS_rail","","","CUP_optic_LeupoldMk4",{"CUP_10Rnd_762x39_SKS_M",10},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"CUP_U_B_USMC_FROG3_DMARPAT",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_lxWS_PlateCarrier2_desert",{{"SmokeShell",5,1},{"rhs_mag_m67",1,1}}},{"B_AssaultPack_desert_lxWS",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_Kestrel4500",1},{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_ATragMX",1},{"rhsusf_mag_40Rnd_46x30_JHP",10,40}}},"H_mas_cia_airframe_d","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_SNP_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Sniper (Winter)"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_01", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USMC_FROG3_DMARPAT"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_mas_cia_airframe_d"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_mas_cia_airframe_d"}; 
		weapons[] = {"CUP_SKS_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_SKS_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_desert_lxWS";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_SKS_rail","","","CUP_optic_LeupoldMk4",{"CUP_10Rnd_762x39_SKS_M",10},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"CUP_U_B_USMC_FROG3_DMARPAT",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_lxWS_PlateCarrier2_desert",{{"SmokeShell",5,1},{"rhs_mag_m67",1,1}}},{"B_AssaultPack_desert_lxWS",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_Kestrel4500",1},{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_ATragMX",1},{"rhsusf_mag_40Rnd_46x30_JHP",10,40}}},"H_mas_cia_airframe_d","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_SNP_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Sniper (Winter)"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_01", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_USMC_FROG3_DMARPAT"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_mas_cia_airframe_d"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_mas_cia_airframe_d"}; 
		weapons[] = {"CUP_SKS_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_SKS_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_desert_lxWS";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_SKS_rail","","","CUP_optic_LeupoldMk4",{"CUP_10Rnd_762x39_SKS_M",10},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"CUP_U_B_USMC_FROG3_DMARPAT",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_lxWS_PlateCarrier2_desert",{{"SmokeShell",5,1},{"rhs_mag_m67",1,1}}},{"B_AssaultPack_desert_lxWS",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_Kestrel4500",1},{"ACE_MapTools",1},{"ACE_RangeCard",1},{"ACE_ATragMX",1},{"rhsusf_mag_40Rnd_46x30_JHP",10,40}}},"H_mas_cia_airframe_d","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_Medic_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Doctor (Winter)"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanBossHead", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "Aegis_U_O_CombatUniform_tshirt_dst_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_paint2"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_paint2"}; 
		weapons[] = {"CUP_arifle_AK47_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_AK47_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_desert_lxWS";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47_top_rail","CUP_muzzle_Bizon","ACE_DBAL_A3_Red","rhsusf_acc_su230",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"Aegis_U_O_CombatUniform_tshirt_dst_F",{{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_EarPlugs",1},{"ACE_CableTie",4}}},{"V_lxWS_PlateCarrier2_desert",{{"SmokeShell",4,1},{"rhs_mag_mk84",2,1}}},{"B_AssaultPack_desert_lxWS",{{"ACE_wirecutter",1},{"ACE_HuntIR_monitor",1},{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_elasticBandage",40},{"ACE_quikclot",40},{"ACE_morphine",10},{"ACE_epinephrine",10},{"ACE_personalAidKit",4}}},"H_HelmetSpecB_paint2","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_Medic_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Doctor (Winter)"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanBossHead", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "Aegis_U_O_CombatUniform_tshirt_dst_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_paint2"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_paint2"}; 
		weapons[] = {"CUP_arifle_AK47_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_AK47_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_desert_lxWS";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47_top_rail","CUP_muzzle_Bizon","ACE_DBAL_A3_Red","rhsusf_acc_su230",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"Aegis_U_O_CombatUniform_tshirt_dst_F",{{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_EarPlugs",1},{"ACE_CableTie",4}}},{"V_lxWS_PlateCarrier2_desert",{{"SmokeShell",4,1},{"rhs_mag_mk84",2,1}}},{"B_AssaultPack_desert_lxWS",{{"ACE_wirecutter",1},{"ACE_HuntIR_monitor",1},{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_elasticBandage",40},{"ACE_quikclot",40},{"ACE_morphine",10},{"ACE_epinephrine",10},{"ACE_personalAidKit",4}}},"H_HelmetSpecB_paint2","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_Medic_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Doctor (Winter)"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanBossHead", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "Aegis_U_O_CombatUniform_tshirt_dst_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_paint2"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","H_HelmetSpecB_paint2"}; 
		weapons[] = {"CUP_arifle_AK47_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_AK47_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_desert_lxWS";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47_top_rail","CUP_muzzle_Bizon","ACE_DBAL_A3_Red","rhsusf_acc_su230",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"Aegis_U_O_CombatUniform_tshirt_dst_F",{{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_EarPlugs",1},{"ACE_CableTie",4}}},{"V_lxWS_PlateCarrier2_desert",{{"SmokeShell",4,1},{"rhs_mag_mk84",2,1}}},{"B_AssaultPack_desert_lxWS",{{"ACE_wirecutter",1},{"ACE_HuntIR_monitor",1},{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_elasticBandage",40},{"ACE_quikclot",40},{"ACE_morphine",10},{"ACE_epinephrine",10},{"ACE_personalAidKit",4}}},"H_HelmetSpecB_paint2","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_DIVER_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Diver (Winter)"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_06", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","NVGoggles_mas_cia_hv","G_B_Diving","H_HelmetSpecB_green"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","NVGoggles_mas_cia_hv","G_B_Diving","H_HelmetSpecB_green"}; 
		weapons[] = {"CUP_arifle_AK101_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_AK101_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_mas_cia_Kitbag_LB";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK101_top_rail","muzzle_snds_M","CUP_acc_ANPEQ_15_Black","CUP_optic_LeupoldMk4",{"CUP_30Rnd_556x45_AK",30},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_mas_cia_B_Wetsuit",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_mas_cia_RebreatherB",{{"SmokeShell",8,1},{"Chemlight_green",1,1},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",2,1}}},{"B_mas_cia_Kitbag_LB",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_elasticBandage",10},{"ACE_quikclot",10},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_epinephrine",1},{"ACE_microDAGR",1},{"rhsusf_mag_40Rnd_46x30_JHP",2,40}}},"H_HelmetSpecB_green","G_B_Diving",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch","NVGoggles_mas_cia_hv"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_DIVER_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Diver (Winter)"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_06", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","NVGoggles_mas_cia_hv","G_B_Diving","H_HelmetSpecB_green"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","NVGoggles_mas_cia_hv","G_B_Diving","H_HelmetSpecB_green"}; 
		weapons[] = {"CUP_arifle_AK101_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_AK101_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_mas_cia_Kitbag_LB";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK101_top_rail","muzzle_snds_M","CUP_acc_ANPEQ_15_Black","CUP_optic_LeupoldMk4",{"CUP_30Rnd_556x45_AK",30},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_mas_cia_B_Wetsuit",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_mas_cia_RebreatherB",{{"SmokeShell",8,1},{"Chemlight_green",1,1},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",2,1}}},{"B_mas_cia_Kitbag_LB",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_elasticBandage",10},{"ACE_quikclot",10},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_epinephrine",1},{"ACE_microDAGR",1},{"rhsusf_mag_40Rnd_46x30_JHP",2,40}}},"H_HelmetSpecB_green","G_B_Diving",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch","NVGoggles_mas_cia_hv"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_DIVER_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Diver (Winter)"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_06", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "U_mas_cia_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","NVGoggles_mas_cia_hv","G_B_Diving","H_HelmetSpecB_green"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","TFAR_anprc148jem","ItemGPS","NVGoggles_mas_cia_hv","G_B_Diving","H_HelmetSpecB_green"}; 
		weapons[] = {"CUP_arifle_AK101_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_arifle_AK101_top_rail","rhsusf_weap_MP7A2_folded","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_mas_cia_Kitbag_LB";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK101_top_rail","muzzle_snds_M","CUP_acc_ANPEQ_15_Black","CUP_optic_LeupoldMk4",{"CUP_30Rnd_556x45_AK",30},{},""},{},{"rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3",{"rhsusf_mag_40Rnd_46x30_JHP",40},{},""},{"U_mas_cia_B_Wetsuit",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{"V_mas_cia_RebreatherB",{{"SmokeShell",8,1},{"Chemlight_green",1,1},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",2,1}}},{"B_mas_cia_Kitbag_LB",{{"ACE_CableTie",3},{"ACE_IR_Strobe_Item",1},{"ACE_elasticBandage",10},{"ACE_quikclot",10},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_epinephrine",1},{"ACE_microDAGR",1},{"rhsusf_mag_40Rnd_46x30_JHP",2,40}}},"H_HelmetSpecB_green","G_B_Diving",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch","NVGoggles_mas_cia_hv"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_Officer_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Officer (Winter)"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"AfricanHead_01", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_BDUv2_gloves_dirty_desert"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_Beret_gen_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_Beret_gen_F"}; 
		weapons[] = {"CUP_hgun_Makarov","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_hgun_Makarov","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"CUP_hgun_Makarov","","","",{"CUP_8Rnd_9x18_Makarov_M",8},{},""},{"CUP_U_B_BDUv2_gloves_dirty_desert",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{},{},"H_Beret_gen_F","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_Officer_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Officer (Winter)"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"AfricanHead_01", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_BDUv2_gloves_dirty_desert"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_Beret_gen_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_Beret_gen_F"}; 
		weapons[] = {"CUP_hgun_Makarov","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_hgun_Makarov","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"CUP_hgun_Makarov","","","",{"CUP_8Rnd_9x18_Makarov_M",8},{},""},{"CUP_U_B_BDUv2_gloves_dirty_desert",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{},{},"H_Beret_gen_F","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_Officer_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Officer (Winter)"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"AfricanHead_01", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "CUP_U_B_BDUv2_gloves_dirty_desert"; 
		linkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_Beret_gen_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","Itemwatch","ItemGPS","H_Beret_gen_F"}; 
		weapons[] = {"CUP_hgun_Makarov","ACE_Yardage450"}; 
		respawnWeapons[] = {"CUP_hgun_Makarov","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"CUP_hgun_Makarov","","","",{"CUP_8Rnd_9x18_Makarov_M",8},{},""},{"CUP_U_B_BDUv2_gloves_dirty_desert",{{"ACE_elasticBandage",8},{"ACE_quikclot",10},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_tourniquet",4},{"ACE_microDAGR",1},{"ACE_EntrenchingTool",1},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1}}},{},{},"H_Beret_gen_F","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","ItemCompass","Itemwatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 
};
class CfgPatches
{
	class bm_specops_faction_MALI_FAMA_2021
	{
		author = "BloodyMystik & Orka";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"CUP_Weapons_AK","CUP_Weapons_East_Attachments","CUP_Weapons_West_Attachments","CUP_Weapons_Ammunition","rhsusf_c_weapons","Blastcore_MainCore","ace_compat_rhs_usf3_arsenal","ace_compat_rhs_usf3","CUP_Creatures_Military_USMC","CUP_Creatures_Military_RACS","CUP_Weapons_Grenades","A3_Weapons_F","ace_realisticnames","A3_Atlas_Characters_F_Atlas_Headgear","ace_yardage450","tfar_handhelds","CUP_Weapons_Sa58","ace_irlight","A3_Weapons_F_Acc","ace_scopes","ace_fcs","Characters_f_lxWS","CUP_Creatures_Military_USArmy","A3_Aegis_Characters_F_Aegis_Uniforms","ace_medical_treatment","ace_microdagr","ace_trenches","ace_hearing","A3_Aegis_Characters_F_Aegis_Vests","ace_attach","ace_chemlights","rhsusf_c_troops","A3_Weapons_F_Enoch","A3_Aegis_Weapons_F_Aegis","ace_captives","CUP_Weapons_SKS","ace_kestrel4500","ace_maptools","ace_rangecard","ace_atragmx","mas_cia_jsog","ace_logistics_wirecutter","ace_huntir","A3_Characters_F","A3_Aegis_Characters_F_Aegis_Headgear","CUP_Weapons_Makarov","A3_Characters_F_Exp_Headgear","bm_specops_faction_US_ARMA_BASE"};
		skipWhenMissingDependencies = 1; 
	};
};
class CfgFactionClasses {
	// As Friendly (BluFOR)
	class BS_B_MALI_FAMA_2021_BASE { 
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
		brokenSkullArsenal[]={"SmokeShellBlue","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","SmokeShellRed","SmokeShellYellow","ACE_bodyBag","ACE_bodyBag_blue","ACE_bodyBag_white","ACE_bloodIV","ACE_bloodIV_250","ACE_bloodIV_500","ACE_plasmaIV","ACE_plasmaIV_250","ACE_plasmaIV_500","ACE_salineIV","ACE_salineIV_250","ACE_salineIV_500","ACE_splint","ACE_surgicalKit","ACE_suture","ACE_tourniquet","ACE_personalAidKit","ACE_morphine","ACE_epinephrine","ACE_quikclot","ACE_elasticBandage","ACE_adenosine","ACE_WaterBottle","ACE_Sunflower_Seeds","ACE_Humanitarian_Ration","ACE_Can_Franta","ACE_wirecutter","ACE_RangeCard","MineDetector","ACE_microDAGR","ACE_MapTools","ACE_Clacker","ACE_M26_Clacker","ACE_Kestrel4500","ACE_HuntIR_monitor","ACE_Fortify","ACE_EntrenchingTool","ACE_DefusalKit","ACE_DeadManSwitch","ACE_DAGR","ACE_ATragMX","ACE_artilleryTable","ACE_RangeTable_82mm","DemoCharge_Remote_Mag","rhsusf_m112_mag","ATMine_Range_Mag","Aegis_HandFlare_Green","Aegis_HandFlare_Red","plp_bo_w_BottleLiqCream","plp_bo_w_BottleGin","plp_bo_w_BottleLiqOrange","plp_bo_w_BottleTequila","ACE_CableTie","plp_bo_w_Cigar","plp_bo_w_CigarCutter","ACE_EarPlugs","plp_bo_w_CigarFine","ACE_IR_Strobe_Item","plp_bo_w_CigarBoxSealed","ACE_SpareBarrel","ACE_SpraypaintBlack","ACE_SpraypaintBlue","ACE_SpraypaintGreen","ACE_SpraypaintRed","ACE_SpraypaintWhite","ACE_SpraypaintYellow","plp_bo_w_SunBlocker","plp_bo_w_SunMilk","ACE_UAVBattery","CUP_arifle_AK47_top_rail","CUP_muzzle_Bizon","CUP_acc_ANPEQ_15_Black","CUP_optic_TrijiconRx01_kf_black","CUP_30Rnd_762x39_AK47_M","rhs_weap_m72a7","rhsusf_weap_MP7A2_folded","rhsusf_acc_rotex_mp7","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_xps3","rhsusf_mag_40Rnd_46x30_JHP","CUP_U_B_USMC_MCCUU_des_roll_pads_gloves","CUP_V_I_RACS_Carrier_Vest","CUP_HandGrenade_L109A2_HE","H_HelmetSpecB_green","ACE_Yardage450","ItemMap","ItemGPS","TFAR_anprc148jem","ItemCompass","Itemwatch","CUP_arifle_AK47_GL_top_rail","CUP_muzzle_snds_socom762rc","ACE_DBAL_A3_Red","optic_MRCO","CUP_U_B_USMC_MCCUU_des_pads_gloves","V_lxWS_PlateCarrier1_desert","CUP_H_USArmy_ECH_Headset_MARPAT_des","CUP_optic_HensoldtZO_low_RDS","Aegis_U_O_CombatFatigues_dst_F","Aegis_V_PlateCarrier2_alt_desert","SmokeShell","Chemlight_green","rhs_mag_m67","rhs_mag_mk84","rhsusf_ach_bare_des_headset","CUP_arifle_RPK74_top_rail","CUP_optic_SB_11_4x20_PM","75rnd_762x39_AK12_Mag_F","rhsusf_ach_helmet_ucp_norotos","CUP_SKS_rail","CUP_optic_LeupoldMk4","CUP_10Rnd_762x39_SKS_M","CUP_U_B_USMC_FROG3_DMARPAT","V_lxWS_PlateCarrier2_desert","H_mas_cia_airframe_d","rhsusf_acc_su230","Aegis_U_O_CombatUniform_tshirt_dst_F","H_HelmetSpecB_paint2","CUP_arifle_AK101_top_rail","muzzle_snds_M","CUP_30Rnd_556x45_AK","U_mas_cia_B_Wetsuit","V_mas_cia_RebreatherB","NVGoggles_mas_cia_hv","CUP_hgun_Makarov","CUP_8Rnd_9x18_Makarov_M","CUP_U_B_BDUv2_gloves_dirty_desert","H_Beret_gen_F"};

		garage[]={{"B_APC_Tracked_01_AA_F",2,1000,0},{"B_Quadbike_01_F",0,100,-1},{"B_LSV_01_armed_F",0,300,2},{"B_LSV_01_light_F",0,100,-1},{"B_MRAP_01_hmg_F",1,600,2},{"B_MRAP_01_gmg_F",1,600,2},{"B_MRAP_01_F",1,500,-1},{"B_Truck_01_covered_F",1,50,3},{"B_Truck_01_transport_F",1,50,3},{"B_Truck_01_Repair_F",1,50,-1},{"B_Truck_01_flatbed_F",1,50,-1},{"B_Truck_01_cargo_F",1,50,-1},{"B_Boat_Transport_01_F",0,50,-1},{"B_Boat_Armed_01_minigun_F",1,50,-1},{"APC_Wheeled_01_mortar_base_lxWS",2,40,1},{"B_APC_Wheeled_01_cannon_v2_F",2,40,1},{"B_APC_Wheeled_01_atgm_lxWS_v2",2,40,1},{"B_Plane_CAS_01_dynamicLoadout_F",2,2000,-1},{"B_VTOL_01_armed_F",2,2000,-1},{"B_SDV_01_F",1,50,-1},{"B_AFV_Wheeled_01_cannon_F",2,40,1},{"B_AFV_Wheeled_01_up_cannon_F",2,40,1},{"B_MBT_01_TUSK_F",2,2500,1},{"B_Plane_Fighter_05_Stealth_F",2,2000,-1}};
		SamSystem[]={};
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
	class BS_B_MALI_FAMA_2021 : BS_B_MALI_FAMA_2021_BASE { 
		useForSpecOps = 1;   
		displayName = "MALI - FAMA (2021)";
		side = 1;       
		flag = "\A3\Data_F\Flags\flag_US_CO.paa";
		icon = "\A3\Data_F\Flags\flag_US_CO.paa";
		priority = 0; 
	};

	// As Opposite Forces (OpFOR)
	class BS_O_MALI_FAMA_2021 : BS_B_MALI_FAMA_2021_BASE { 
		useForSpecOps = 1;
		displayName = "MALI - FAMA (2021)";
		side = 0;       
		flag = "\A3\Data_F\Flags\flag_US_CO.paa";
		icon = "\A3\Data_F\Flags\flag_US_CO.paa";
		priority = 0; 
	};
	
    // As Independent (Independent)
	class BS_I_MALI_FAMA_2021 : BS_B_MALI_FAMA_2021_BASE { 
		useForSpecOps = 1;
		displayName = "MALI - FAMA (2021)";
		side = 2;       
		flag = "\A3\Data_F\Flags\flag_US_CO.paa";
		icon = "\A3\Data_F\Flags\flag_US_CO.paa";
		priority = 0; 
	};
};
// As Friendly (BluFOR)
class SpecOps_Module_BLUFOR_Factions { 
	class BS_B_MALI_FAMA_2021 { name = "MALI - FAMA (2021)"; value = "BS_B_MALI_FAMA_2021"; };  
};
// As Friendly (BluFOR)
class SpecOps_Module_OPFOR_Factions { 
	class BS_O_MALI_FAMA_2021 { name = "MALI - FAMA (2021)"; value = "BS_O_MALI_FAMA_2021"; };  
};
// As Friendly (BluFOR)
class SpecOps_Module_GRE_Factions { 
	class BS_I_MALI_FAMA_2021 { name = "MALI - FAMA (2021)"; value = "BS_I_MALI_FAMA_2021"; };  
};