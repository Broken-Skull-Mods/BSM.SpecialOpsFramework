#include "\bsm_faction_mali_fama_2021\audio.hpp"


class CfgVehicles {
	class B_Survivor_F;
	class I_G_Survivor_F;
	class O_G_Survivor_F; 
	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_AR_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Machine Gunner (Woodland)"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_04", "Male01FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_24"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhs_1PN138","USP_CRYE_AIRFRAME_CMWV"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhs_1PN138","USP_CRYE_AIRFRAME_CMWV"}; 
		weapons[] = {"rhs_weap_pkp","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_pkp","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_pkp","","","rhs_acc_nita",{"rhs_100Rnd_762x54mmR_7BZ3",100},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_24",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1}}},{"B_Kitbag_tan",{{"rhs_100Rnd_762x54mmR_7BZ3",4,100}}},"USP_CRYE_AIRFRAME_CMWV","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","","rhs_1PN138"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_AR_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Machine Gunner (Woodland)"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_04", "Male01FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_24"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhs_1PN138","USP_CRYE_AIRFRAME_CMWV"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhs_1PN138","USP_CRYE_AIRFRAME_CMWV"}; 
		weapons[] = {"rhs_weap_pkp","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_pkp","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_pkp","","","rhs_acc_nita",{"rhs_100Rnd_762x54mmR_7BZ3",100},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_24",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1}}},{"B_Kitbag_tan",{{"rhs_100Rnd_762x54mmR_7BZ3",4,100}}},"USP_CRYE_AIRFRAME_CMWV","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","","rhs_1PN138"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_AR_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Machine Gunner (Woodland)"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_04", "Male01FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_24"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhs_1PN138","USP_CRYE_AIRFRAME_CMWV"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhs_1PN138","USP_CRYE_AIRFRAME_CMWV"}; 
		weapons[] = {"rhs_weap_pkp","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_pkp","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_pkp","","","rhs_acc_nita",{"rhs_100Rnd_762x54mmR_7BZ3",100},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_24",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1}}},{"B_Kitbag_tan",{{"rhs_100Rnd_762x54mmR_7BZ3",4,100}}},"USP_CRYE_AIRFRAME_CMWV","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","","rhs_1PN138"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_GL_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Grenadier (Woodland)"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"PersianHead_A3_04_l", "Male02PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_17"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"rhs_weap_m16a4_carryhandle_M203","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_M203","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m16a4_carryhandle_M203","","rhsusf_acc_anpeq15side_bk","rhsusf_acc_ACOG3_USMC",{"rhs_mag_30Rnd_556x45_Mk318_PMAG",30},{"1Rnd_HE_Grenade_shell",1},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_17",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"1Rnd_HE_Grenade_shell",4,1},{"1Rnd_Smoke_Grenade_shell",2,1},{"rhs_mag_30Rnd_556x45_Mk318_PMAG",1,30}}},{"B_Kitbag_tan",{{"1Rnd_HE_Grenade_shell",28,1},{"1Rnd_Smoke_Grenade_shell",16,1},{"rhs_mag_30Rnd_556x45_Mk318_PMAG",11,30}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_GL_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Grenadier (Woodland)"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"PersianHead_A3_04_l", "Male02PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_17"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"rhs_weap_m16a4_carryhandle_M203","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_M203","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m16a4_carryhandle_M203","","rhsusf_acc_anpeq15side_bk","rhsusf_acc_ACOG3_USMC",{"rhs_mag_30Rnd_556x45_Mk318_PMAG",30},{"1Rnd_HE_Grenade_shell",1},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_17",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"1Rnd_HE_Grenade_shell",4,1},{"1Rnd_Smoke_Grenade_shell",2,1},{"rhs_mag_30Rnd_556x45_Mk318_PMAG",1,30}}},{"B_Kitbag_tan",{{"1Rnd_HE_Grenade_shell",28,1},{"1Rnd_Smoke_Grenade_shell",16,1},{"rhs_mag_30Rnd_556x45_Mk318_PMAG",11,30}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_GL_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Grenadier (Woodland)"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"PersianHead_A3_04_l", "Male02PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_17"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"rhs_weap_m16a4_carryhandle_M203","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_M203","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m16a4_carryhandle_M203","","rhsusf_acc_anpeq15side_bk","rhsusf_acc_ACOG3_USMC",{"rhs_mag_30Rnd_556x45_Mk318_PMAG",30},{"1Rnd_HE_Grenade_shell",1},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_17",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"1Rnd_HE_Grenade_shell",4,1},{"1Rnd_Smoke_Grenade_shell",2,1},{"rhs_mag_30Rnd_556x45_Mk318_PMAG",1,30}}},{"B_Kitbag_tan",{{"1Rnd_HE_Grenade_shell",28,1},{"1Rnd_Smoke_Grenade_shell",16,1},{"rhs_mag_30Rnd_556x45_Mk318_PMAG",11,30}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_Rifleman_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Rifleman (Woodland)"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_03", "Male03FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_14"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhs_1PN138","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhs_1PN138","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"rhs_weap_ak103_npz","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak103_npz","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak103_npz","rhs_acc_dtk3","rhs_acc_perst1ik","rhsusf_acc_ACOG2_USMC",{"rhs_30Rnd_762x39mm_polymer",30},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_14",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"rhs_30Rnd_762x39mm_polymer",1,30}}},{"B_Kitbag_tan",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"ACE_wirecutter",1},{"rhs_30Rnd_762x39mm_polymer",20,30}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","","rhs_1PN138"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_Rifleman_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Rifleman (Woodland)"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_03", "Male03FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_14"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhs_1PN138","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhs_1PN138","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"rhs_weap_ak103_npz","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak103_npz","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak103_npz","rhs_acc_dtk3","rhs_acc_perst1ik","rhsusf_acc_ACOG2_USMC",{"rhs_30Rnd_762x39mm_polymer",30},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_14",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"rhs_30Rnd_762x39mm_polymer",1,30}}},{"B_Kitbag_tan",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"ACE_wirecutter",1},{"rhs_30Rnd_762x39mm_polymer",20,30}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","","rhs_1PN138"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_Rifleman_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Rifleman (Woodland)"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_03", "Male03FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_14"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhs_1PN138","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhs_1PN138","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"rhs_weap_ak103_npz","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak103_npz","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak103_npz","rhs_acc_dtk3","rhs_acc_perst1ik","rhsusf_acc_ACOG2_USMC",{"rhs_30Rnd_762x39mm_polymer",30},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_14",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"rhs_30Rnd_762x39mm_polymer",1,30}}},{"B_Kitbag_tan",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"ACE_wirecutter",1},{"rhs_30Rnd_762x39mm_polymer",20,30}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","","rhs_1PN138"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_RTO_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Special 2 (Woodland)"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanBossHead", "Male03FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_16"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"rhs_weap_ak105_npz","rhs_weap_rpg7","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak105_npz","rhs_weap_rpg7","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak105_npz","rhs_acc_dtk3","rhs_acc_perst1ik","rhsusf_acc_ACOG3_USMC",{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",30},{},""},{"rhs_weap_rpg7","","","rhs_acc_pgo7v3",{"rhs_rpg7_PG7VL_mag",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_16",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"ACE_wirecutter",1},{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",1,30}}},{"B_Kitbag_tan",{{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",19,30}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_RTO_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Special 2 (Woodland)"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanBossHead", "Male03FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_16"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"rhs_weap_ak105_npz","rhs_weap_rpg7","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak105_npz","rhs_weap_rpg7","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak105_npz","rhs_acc_dtk3","rhs_acc_perst1ik","rhsusf_acc_ACOG3_USMC",{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",30},{},""},{"rhs_weap_rpg7","","","rhs_acc_pgo7v3",{"rhs_rpg7_PG7VL_mag",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_16",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"ACE_wirecutter",1},{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",1,30}}},{"B_Kitbag_tan",{{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",19,30}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_RTO_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Special 2 (Woodland)"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanBossHead", "Male03FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_16"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"rhs_weap_ak105_npz","rhs_weap_rpg7","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak105_npz","rhs_weap_rpg7","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak105_npz","rhs_acc_dtk3","rhs_acc_perst1ik","rhsusf_acc_ACOG3_USMC",{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",30},{},""},{"rhs_weap_rpg7","","","rhs_acc_pgo7v3",{"rhs_rpg7_PG7VL_mag",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_16",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"ACE_wirecutter",1},{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",1,30}}},{"B_Kitbag_tan",{{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",19,30}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_SNP_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Sniper (Woodland)"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_06", "Male02FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_15"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"rhs_weap_svdp_npz","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_npz","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_npz","rhs_acc_tgpv2","","rhsusf_acc_nxs_3515x50f1_md",{"rhs_10Rnd_762x54mmR_7N14",10},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_15",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"rhs_10Rnd_762x54mmR_7N14",1,10}}},{"LOP_V_6B23_Rifleman_TAN",{{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"rhs_10Rnd_762x54mmR_7N14",6,10}}},{"B_Kitbag_tan",{{"rhs_10Rnd_762x54mmR_7N14",13,10}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_SNP_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Sniper (Woodland)"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_06", "Male02FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_15"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"rhs_weap_svdp_npz","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_npz","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_npz","rhs_acc_tgpv2","","rhsusf_acc_nxs_3515x50f1_md",{"rhs_10Rnd_762x54mmR_7N14",10},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_15",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"rhs_10Rnd_762x54mmR_7N14",1,10}}},{"LOP_V_6B23_Rifleman_TAN",{{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"rhs_10Rnd_762x54mmR_7N14",6,10}}},{"B_Kitbag_tan",{{"rhs_10Rnd_762x54mmR_7N14",13,10}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_SNP_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Sniper (Woodland)"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_06", "Male02FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_15"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"rhs_weap_svdp_npz","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_npz","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_npz","rhs_acc_tgpv2","","rhsusf_acc_nxs_3515x50f1_md",{"rhs_10Rnd_762x54mmR_7N14",10},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_15",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"rhs_10Rnd_762x54mmR_7N14",1,10}}},{"LOP_V_6B23_Rifleman_TAN",{{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"rhs_10Rnd_762x54mmR_7N14",6,10}}},{"B_Kitbag_tan",{{"rhs_10Rnd_762x54mmR_7N14",13,10}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_Medic_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Doctor (Woodland)"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"AfricanHead_01", "Male01FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_AFR_Fatigue_04"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"hlc_rifle_falosw","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"hlc_rifle_falosw","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_falosw","","rhsusf_acc_anpeq15A","rhs_acc_1p87",{"rhs_mag_20Rnd_762x51_m80_fnfal",20},{},"rhsusf_acc_harris_bipod"},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_AFR_Fatigue_04",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"ACE_surgicalKit",1}}},{"LOP_V_6B23_Rifleman_TAN",{{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"rhs_mag_20Rnd_762x51_m80_fnfal",2,20}}},{"B_Kitbag_tan",{{"kat_accuvac",1},{"kat_AED",1},{"kat_stethoscope",1},{"ACE_surgicalKit",1},{"ACE_adenosine",2},{"ACE_elasticBandage",15},{"ACE_packingBandage",15},{"ACE_quikclot",15},{"kat_larynx",6},{"ACE_epinephrine",4},{"ACE_morphine",4},{"kat_naloxone",2},{"kat_IO_FAST",7},{"kat_ncdKit",2},{"kat_aatKit",12},{"kat_chestSeal",6},{"ACE_plasmaIV",3},{"ACE_plasmaIV_500",6},{"kat_Pulseoximeter",3},{"ACE_splint",2},{"ACE_suture",12},{"ACE_tourniquet",4},{"rhs_mag_20Rnd_762x51_m80_fnfal",2,20}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_Medic_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Doctor (Woodland)"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"AfricanHead_01", "Male01FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_AFR_Fatigue_04"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"hlc_rifle_falosw","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"hlc_rifle_falosw","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_falosw","","rhsusf_acc_anpeq15A","rhs_acc_1p87",{"rhs_mag_20Rnd_762x51_m80_fnfal",20},{},"rhsusf_acc_harris_bipod"},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_AFR_Fatigue_04",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"ACE_surgicalKit",1}}},{"LOP_V_6B23_Rifleman_TAN",{{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"rhs_mag_20Rnd_762x51_m80_fnfal",2,20}}},{"B_Kitbag_tan",{{"kat_accuvac",1},{"kat_AED",1},{"kat_stethoscope",1},{"ACE_surgicalKit",1},{"ACE_adenosine",2},{"ACE_elasticBandage",15},{"ACE_packingBandage",15},{"ACE_quikclot",15},{"kat_larynx",6},{"ACE_epinephrine",4},{"ACE_morphine",4},{"kat_naloxone",2},{"kat_IO_FAST",7},{"kat_ncdKit",2},{"kat_aatKit",12},{"kat_chestSeal",6},{"ACE_plasmaIV",3},{"ACE_plasmaIV_500",6},{"kat_Pulseoximeter",3},{"ACE_splint",2},{"ACE_suture",12},{"ACE_tourniquet",4},{"rhs_mag_20Rnd_762x51_m80_fnfal",2,20}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_Medic_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Doctor (Woodland)"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"AfricanHead_01", "Male01FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_AFR_Fatigue_04"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"hlc_rifle_falosw","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"hlc_rifle_falosw","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_falosw","","rhsusf_acc_anpeq15A","rhs_acc_1p87",{"rhs_mag_20Rnd_762x51_m80_fnfal",20},{},"rhsusf_acc_harris_bipod"},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_AFR_Fatigue_04",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"ACE_surgicalKit",1}}},{"LOP_V_6B23_Rifleman_TAN",{{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"rhs_mag_20Rnd_762x51_m80_fnfal",2,20}}},{"B_Kitbag_tan",{{"kat_accuvac",1},{"kat_AED",1},{"kat_stethoscope",1},{"ACE_surgicalKit",1},{"ACE_adenosine",2},{"ACE_elasticBandage",15},{"ACE_packingBandage",15},{"ACE_quikclot",15},{"kat_larynx",6},{"ACE_epinephrine",4},{"ACE_morphine",4},{"kat_naloxone",2},{"kat_IO_FAST",7},{"kat_ncdKit",2},{"kat_aatKit",12},{"kat_chestSeal",6},{"ACE_plasmaIV",3},{"ACE_plasmaIV_500",6},{"kat_Pulseoximeter",3},{"ACE_splint",2},{"ACE_suture",12},{"ACE_tourniquet",4},{"rhs_mag_20Rnd_762x51_m80_fnfal",2,20}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_DIVER_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Special 1 (Woodland)"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_05", "Male02FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_BH_Fatigue_GUE_TRI_TAN"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"rhs_weap_ak105_npz","rhs_weap_igla","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak105_npz","rhs_weap_igla","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak105_npz","rhs_acc_dtk3","rhs_acc_perst1ik","rhsusf_acc_ACOG3_USMC",{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",30},{},""},{"rhs_weap_igla","","","",{"Titan_AA",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_BH_Fatigue_GUE_TRI_TAN",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"ACE_wirecutter",1},{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",4,30}}},{"B_Kitbag_tan",{{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",16,30}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_DIVER_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Special 1 (Woodland)"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_05", "Male02FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_BH_Fatigue_GUE_TRI_TAN"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"rhs_weap_ak105_npz","rhs_weap_igla","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak105_npz","rhs_weap_igla","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak105_npz","rhs_acc_dtk3","rhs_acc_perst1ik","rhsusf_acc_ACOG3_USMC",{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",30},{},""},{"rhs_weap_igla","","","",{"Titan_AA",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_BH_Fatigue_GUE_TRI_TAN",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"ACE_wirecutter",1},{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",4,30}}},{"B_Kitbag_tan",{{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",16,30}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_DIVER_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Special 1 (Woodland)"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_05", "Male02FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_BH_Fatigue_GUE_TRI_TAN"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"rhs_weap_ak105_npz","rhs_weap_igla","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak105_npz","rhs_weap_igla","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak105_npz","rhs_acc_dtk3","rhs_acc_perst1ik","rhsusf_acc_ACOG3_USMC",{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",30},{},""},{"rhs_weap_igla","","","",{"Titan_AA",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_BH_Fatigue_GUE_TRI_TAN",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"ACE_wirecutter",1},{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",4,30}}},{"B_Kitbag_tan",{{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",16,30}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_Officer_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Officer (Woodland)"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"PersianHead_A3_04_l", "Male02PER" ,"G_NATO_default"};
		uniformClass = "U_I_C_Soldier_Para_4_F"; 
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
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74n_npz","rhs_acc_dtk1983","","rhsusf_acc_eotech_xps3",{},{},""},{},{"hgun_Pistol_heavy_01_green_F","","","",{"11Rnd_45ACP_Mag",15},{},""},{"U_I_C_Soldier_Para_4_F",{}},{"rhsgref_6b23_ttsko_mountain_nco",{}},{},"lxWS_H_cloth_5_C","G_Aviator",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_Officer_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Officer (Woodland)"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"PersianHead_A3_04_l", "Male02PER" ,"G_NATO_default"};
		uniformClass = "U_I_C_Soldier_Para_4_F"; 
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
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74n_npz","rhs_acc_dtk1983","","rhsusf_acc_eotech_xps3",{},{},""},{},{"hgun_Pistol_heavy_01_green_F","","","",{"11Rnd_45ACP_Mag",15},{},""},{"U_I_C_Soldier_Para_4_F",{}},{"rhsgref_6b23_ttsko_mountain_nco",{}},{},"lxWS_H_cloth_5_C","G_Aviator",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_Officer_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Officer (Woodland)"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"PersianHead_A3_04_l", "Male02PER" ,"G_NATO_default"};
		uniformClass = "U_I_C_Soldier_Para_4_F"; 
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
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74n_npz","rhs_acc_dtk1983","","rhsusf_acc_eotech_xps3",{},{},""},{},{"hgun_Pistol_heavy_01_green_F","","","",{"11Rnd_45ACP_Mag",15},{},""},{"U_I_C_Soldier_Para_4_F",{}},{"rhsgref_6b23_ttsko_mountain_nco",{}},{},"lxWS_H_cloth_5_C","G_Aviator",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_VAR_0_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 1"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_02", "Male02FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_15"; 
		linkedItems[] = {"ItemMap","ItemGPS","USP_CRYE_AIRFRAME_CMWV"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","USP_CRYE_AIRFRAME_CMWV"}; 
		weapons[] = {"rhs_weap_svdp_wd_npz","rhs_weap_igla","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_wd_npz","rhs_weap_igla","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Carryall_ocamo";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_wd_npz","rhs_acc_tgpv2","","optic_tws",{"rhs_10Rnd_762x54mmR_7N14",10},{},""},{"rhs_weap_igla","","","",{"rhs_mag_9k38_rocket",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_15",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4}}},{"LOP_V_6B23_Rifleman_TAN",{{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1}}},{"B_Carryall_ocamo",{}},"USP_CRYE_AIRFRAME_CMWV","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_VAR_0_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 1"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_02", "Male02FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_15"; 
		linkedItems[] = {"ItemMap","ItemGPS","USP_CRYE_AIRFRAME_CMWV"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","USP_CRYE_AIRFRAME_CMWV"}; 
		weapons[] = {"rhs_weap_svdp_wd_npz","rhs_weap_igla","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_wd_npz","rhs_weap_igla","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Carryall_ocamo";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_wd_npz","rhs_acc_tgpv2","","optic_tws",{"rhs_10Rnd_762x54mmR_7N14",10},{},""},{"rhs_weap_igla","","","",{"rhs_mag_9k38_rocket",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_15",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4}}},{"LOP_V_6B23_Rifleman_TAN",{{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1}}},{"B_Carryall_ocamo",{}},"USP_CRYE_AIRFRAME_CMWV","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_VAR_0_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 1"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_02", "Male02FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_15"; 
		linkedItems[] = {"ItemMap","ItemGPS","USP_CRYE_AIRFRAME_CMWV"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","USP_CRYE_AIRFRAME_CMWV"}; 
		weapons[] = {"rhs_weap_svdp_wd_npz","rhs_weap_igla","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_wd_npz","rhs_weap_igla","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Carryall_ocamo";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_wd_npz","rhs_acc_tgpv2","","optic_tws",{"rhs_10Rnd_762x54mmR_7N14",10},{},""},{"rhs_weap_igla","","","",{"rhs_mag_9k38_rocket",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_15",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4}}},{"LOP_V_6B23_Rifleman_TAN",{{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1}}},{"B_Carryall_ocamo",{}},"USP_CRYE_AIRFRAME_CMWV","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_AR_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Machine Gunner (Desert)"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"AfricanHead_03", "Male02FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_24"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhs_1PN138","USP_CRYE_AIRFRAME_CMWV"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhs_1PN138","USP_CRYE_AIRFRAME_CMWV"}; 
		weapons[] = {"rhs_weap_pkp","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_pkp","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_pkp","","","rhs_acc_nita",{"rhs_100Rnd_762x54mmR_7BZ3",100},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_24",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1}}},{"B_Kitbag_tan",{{"rhs_100Rnd_762x54mmR_7BZ3",4,100}}},"USP_CRYE_AIRFRAME_CMWV","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","","rhs_1PN138"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_AR_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Machine Gunner (Desert)"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"AfricanHead_03", "Male02FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_24"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhs_1PN138","USP_CRYE_AIRFRAME_CMWV"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhs_1PN138","USP_CRYE_AIRFRAME_CMWV"}; 
		weapons[] = {"rhs_weap_pkp","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_pkp","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_pkp","","","rhs_acc_nita",{"rhs_100Rnd_762x54mmR_7BZ3",100},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_24",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1}}},{"B_Kitbag_tan",{{"rhs_100Rnd_762x54mmR_7BZ3",4,100}}},"USP_CRYE_AIRFRAME_CMWV","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","","rhs_1PN138"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_AR_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Machine Gunner (Desert)"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"AfricanHead_03", "Male02FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_24"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhs_1PN138","USP_CRYE_AIRFRAME_CMWV"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhs_1PN138","USP_CRYE_AIRFRAME_CMWV"}; 
		weapons[] = {"rhs_weap_pkp","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_pkp","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_pkp","","","rhs_acc_nita",{"rhs_100Rnd_762x54mmR_7BZ3",100},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_24",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1}}},{"B_Kitbag_tan",{{"rhs_100Rnd_762x54mmR_7BZ3",4,100}}},"USP_CRYE_AIRFRAME_CMWV","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","","rhs_1PN138"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_GL_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Grenadier (Desert)"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"PersianHead_A3_03", "Male01PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_17"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"rhs_weap_m16a4_carryhandle_M203","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_M203","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m16a4_carryhandle_M203","","rhsusf_acc_anpeq15side_bk","rhsusf_acc_ACOG3_USMC",{"rhs_mag_30Rnd_556x45_Mk318_PMAG",30},{"1Rnd_HE_Grenade_shell",1},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_17",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"1Rnd_HE_Grenade_shell",4,1},{"1Rnd_Smoke_Grenade_shell",2,1},{"rhs_mag_30Rnd_556x45_Mk318_PMAG",1,30}}},{"B_Kitbag_tan",{{"1Rnd_HE_Grenade_shell",28,1},{"1Rnd_Smoke_Grenade_shell",16,1},{"rhs_mag_30Rnd_556x45_Mk318_PMAG",11,30}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_GL_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Grenadier (Desert)"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"PersianHead_A3_03", "Male01PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_17"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"rhs_weap_m16a4_carryhandle_M203","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_M203","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m16a4_carryhandle_M203","","rhsusf_acc_anpeq15side_bk","rhsusf_acc_ACOG3_USMC",{"rhs_mag_30Rnd_556x45_Mk318_PMAG",30},{"1Rnd_HE_Grenade_shell",1},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_17",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"1Rnd_HE_Grenade_shell",4,1},{"1Rnd_Smoke_Grenade_shell",2,1},{"rhs_mag_30Rnd_556x45_Mk318_PMAG",1,30}}},{"B_Kitbag_tan",{{"1Rnd_HE_Grenade_shell",28,1},{"1Rnd_Smoke_Grenade_shell",16,1},{"rhs_mag_30Rnd_556x45_Mk318_PMAG",11,30}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_GL_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Grenadier (Desert)"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"PersianHead_A3_03", "Male01PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_17"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"rhs_weap_m16a4_carryhandle_M203","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_M203","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m16a4_carryhandle_M203","","rhsusf_acc_anpeq15side_bk","rhsusf_acc_ACOG3_USMC",{"rhs_mag_30Rnd_556x45_Mk318_PMAG",30},{"1Rnd_HE_Grenade_shell",1},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_17",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"1Rnd_HE_Grenade_shell",4,1},{"1Rnd_Smoke_Grenade_shell",2,1},{"rhs_mag_30Rnd_556x45_Mk318_PMAG",1,30}}},{"B_Kitbag_tan",{{"1Rnd_HE_Grenade_shell",28,1},{"1Rnd_Smoke_Grenade_shell",16,1},{"rhs_mag_30Rnd_556x45_Mk318_PMAG",11,30}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_Rifleman_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Rifleman (Desert)"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanBossHead", "Male03FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_14"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhs_1PN138","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhs_1PN138","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"rhs_weap_ak103_npz","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak103_npz","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak103_npz","rhs_acc_dtk3","rhs_acc_perst1ik","rhsusf_acc_ACOG2_USMC",{"rhs_30Rnd_762x39mm_polymer",30},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_14",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"ACE_EarPlugs",2},{"ACE_morphine",2},{"kat_guedel",4},{"kat_chestSeal",2},{"ACE_tourniquet",6},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",2},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",4},{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"rhs_30Rnd_762x39mm_polymer",1,30}}},{"B_Kitbag_tan",{{"ACE_EarPlugs",2},{"ACE_morphine",2},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",2},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"ACE_wirecutter",1},{"rhs_30Rnd_762x39mm_polymer",20,30}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","","rhs_1PN138"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_Rifleman_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Rifleman (Desert)"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanBossHead", "Male03FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_14"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhs_1PN138","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhs_1PN138","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"rhs_weap_ak103_npz","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak103_npz","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak103_npz","rhs_acc_dtk3","rhs_acc_perst1ik","rhsusf_acc_ACOG2_USMC",{"rhs_30Rnd_762x39mm_polymer",30},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_14",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"ACE_EarPlugs",2},{"ACE_morphine",2},{"kat_guedel",4},{"kat_chestSeal",2},{"ACE_tourniquet",6},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",2},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",4},{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"rhs_30Rnd_762x39mm_polymer",1,30}}},{"B_Kitbag_tan",{{"ACE_EarPlugs",2},{"ACE_morphine",2},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",2},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"ACE_wirecutter",1},{"rhs_30Rnd_762x39mm_polymer",20,30}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","","rhs_1PN138"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_Rifleman_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Rifleman (Desert)"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanBossHead", "Male03FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_14"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhs_1PN138","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhs_1PN138","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"rhs_weap_ak103_npz","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak103_npz","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak103_npz","rhs_acc_dtk3","rhs_acc_perst1ik","rhsusf_acc_ACOG2_USMC",{"rhs_30Rnd_762x39mm_polymer",30},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_14",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"ACE_EarPlugs",2},{"ACE_morphine",2},{"kat_guedel",4},{"kat_chestSeal",2},{"ACE_tourniquet",6},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",2},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",4},{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"rhs_30Rnd_762x39mm_polymer",1,30}}},{"B_Kitbag_tan",{{"ACE_EarPlugs",2},{"ACE_morphine",2},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",2},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"ACE_wirecutter",1},{"rhs_30Rnd_762x39mm_polymer",20,30}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","","rhs_1PN138"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_RTO_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Special 2 (Desert)"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_01", "Male03FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_16"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"rhs_weap_ak105_npz","rhs_weap_rpg7","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak105_npz","rhs_weap_rpg7","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak105_npz","rhs_acc_dtk3","rhs_acc_perst1ik","rhsusf_acc_ACOG3_USMC",{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",30},{},""},{"rhs_weap_rpg7","","","rhs_acc_pgo7v3",{"rhs_rpg7_PG7VL_mag",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_16",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"ACE_wirecutter",1},{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",1,30}}},{"B_Kitbag_tan",{{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",21,30}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_RTO_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Special 2 (Desert)"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_01", "Male03FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_16"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"rhs_weap_ak105_npz","rhs_weap_rpg7","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak105_npz","rhs_weap_rpg7","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak105_npz","rhs_acc_dtk3","rhs_acc_perst1ik","rhsusf_acc_ACOG3_USMC",{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",30},{},""},{"rhs_weap_rpg7","","","rhs_acc_pgo7v3",{"rhs_rpg7_PG7VL_mag",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_16",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"ACE_wirecutter",1},{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",1,30}}},{"B_Kitbag_tan",{{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",21,30}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_RTO_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Special 2 (Desert)"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_01", "Male03FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_16"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"rhs_weap_ak105_npz","rhs_weap_rpg7","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak105_npz","rhs_weap_rpg7","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak105_npz","rhs_acc_dtk3","rhs_acc_perst1ik","rhsusf_acc_ACOG3_USMC",{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",30},{},""},{"rhs_weap_rpg7","","","rhs_acc_pgo7v3",{"rhs_rpg7_PG7VL_mag",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_16",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"ACE_wirecutter",1},{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",1,30}}},{"B_Kitbag_tan",{{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",21,30}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_SNP_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Sniper (Desert)"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"AfricanHead_01", "Male02FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_15"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"rhs_weap_svdp_npz","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_npz","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_npz","rhs_acc_tgpv2","","rhsusf_acc_nxs_3515x50f1_md",{"rhs_10Rnd_762x54mmR_7N14",10},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_15",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"rhs_10Rnd_762x54mmR_7N14",1,10}}},{"LOP_V_6B23_Rifleman_TAN",{{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"rhs_10Rnd_762x54mmR_7N14",6,10}}},{"B_Kitbag_tan",{{"rhs_10Rnd_762x54mmR_7N14",33,10}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_SNP_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Sniper (Desert)"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"AfricanHead_01", "Male02FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_15"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"rhs_weap_svdp_npz","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_npz","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_npz","rhs_acc_tgpv2","","rhsusf_acc_nxs_3515x50f1_md",{"rhs_10Rnd_762x54mmR_7N14",10},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_15",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"rhs_10Rnd_762x54mmR_7N14",1,10}}},{"LOP_V_6B23_Rifleman_TAN",{{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"rhs_10Rnd_762x54mmR_7N14",6,10}}},{"B_Kitbag_tan",{{"rhs_10Rnd_762x54mmR_7N14",33,10}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_SNP_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Sniper (Desert)"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"AfricanHead_01", "Male02FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_15"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"rhs_weap_svdp_npz","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_npz","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_npz","rhs_acc_tgpv2","","rhsusf_acc_nxs_3515x50f1_md",{"rhs_10Rnd_762x54mmR_7N14",10},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_15",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"rhs_10Rnd_762x54mmR_7N14",1,10}}},{"LOP_V_6B23_Rifleman_TAN",{{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"rhs_10Rnd_762x54mmR_7N14",6,10}}},{"B_Kitbag_tan",{{"rhs_10Rnd_762x54mmR_7N14",33,10}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_Medic_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Doctor (Desert)"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_07", "Male02FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_AFR_Fatigue_04"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"hlc_rifle_falosw","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"hlc_rifle_falosw","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_falosw","","rhsusf_acc_anpeq15A","rhs_acc_1p87",{"rhs_mag_20Rnd_762x51_m80_fnfal",20},{},"rhsusf_acc_harris_bipod"},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_AFR_Fatigue_04",{{"ACE_elasticBandage",12},{"ACE_surgicalKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"kat_accuvac",1},{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"rhs_mag_20Rnd_762x51_m80_fnfal",2,20}}},{"B_Kitbag_tan",{{"kat_accuvac",1},{"kat_AED",1},{"kat_stethoscope",1},{"ACE_surgicalKit",1},{"ACE_adenosine",2},{"ACE_elasticBandage",15},{"ACE_packingBandage",15},{"ACE_quikclot",15},{"kat_larynx",6},{"ACE_epinephrine",4},{"ACE_morphine",4},{"kat_naloxone",2},{"kat_IO_FAST",7},{"kat_ncdKit",2},{"kat_aatKit",12},{"kat_chestSeal",6},{"ACE_plasmaIV",3},{"ACE_plasmaIV_500",6},{"kat_Pulseoximeter",3},{"ACE_splint",2},{"ACE_suture",12},{"ACE_tourniquet",4},{"rhs_mag_20Rnd_762x51_m80_fnfal",2,20}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_Medic_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Doctor (Desert)"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_07", "Male02FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_AFR_Fatigue_04"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"hlc_rifle_falosw","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"hlc_rifle_falosw","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_falosw","","rhsusf_acc_anpeq15A","rhs_acc_1p87",{"rhs_mag_20Rnd_762x51_m80_fnfal",20},{},"rhsusf_acc_harris_bipod"},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_AFR_Fatigue_04",{{"ACE_elasticBandage",12},{"ACE_surgicalKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"kat_accuvac",1},{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"rhs_mag_20Rnd_762x51_m80_fnfal",2,20}}},{"B_Kitbag_tan",{{"kat_accuvac",1},{"kat_AED",1},{"kat_stethoscope",1},{"ACE_surgicalKit",1},{"ACE_adenosine",2},{"ACE_elasticBandage",15},{"ACE_packingBandage",15},{"ACE_quikclot",15},{"kat_larynx",6},{"ACE_epinephrine",4},{"ACE_morphine",4},{"kat_naloxone",2},{"kat_IO_FAST",7},{"kat_ncdKit",2},{"kat_aatKit",12},{"kat_chestSeal",6},{"ACE_plasmaIV",3},{"ACE_plasmaIV_500",6},{"kat_Pulseoximeter",3},{"ACE_splint",2},{"ACE_suture",12},{"ACE_tourniquet",4},{"rhs_mag_20Rnd_762x51_m80_fnfal",2,20}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_Medic_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Doctor (Desert)"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_07", "Male02FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_AFR_Fatigue_04"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"hlc_rifle_falosw","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"hlc_rifle_falosw","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_falosw","","rhsusf_acc_anpeq15A","rhs_acc_1p87",{"rhs_mag_20Rnd_762x51_m80_fnfal",20},{},"rhsusf_acc_harris_bipod"},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_AFR_Fatigue_04",{{"ACE_elasticBandage",12},{"ACE_surgicalKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"kat_accuvac",1},{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"rhs_mag_20Rnd_762x51_m80_fnfal",2,20}}},{"B_Kitbag_tan",{{"kat_accuvac",1},{"kat_AED",1},{"kat_stethoscope",1},{"ACE_surgicalKit",1},{"ACE_adenosine",2},{"ACE_elasticBandage",15},{"ACE_packingBandage",15},{"ACE_quikclot",15},{"kat_larynx",6},{"ACE_epinephrine",4},{"ACE_morphine",4},{"kat_naloxone",2},{"kat_IO_FAST",7},{"kat_ncdKit",2},{"kat_aatKit",12},{"kat_chestSeal",6},{"ACE_plasmaIV",3},{"ACE_plasmaIV_500",6},{"kat_Pulseoximeter",3},{"ACE_splint",2},{"ACE_suture",12},{"ACE_tourniquet",4},{"rhs_mag_20Rnd_762x51_m80_fnfal",2,20}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_DIVER_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Special 1 (Desert)"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_07", "Male01FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_BH_Fatigue_GUE_TRI_TAN"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"rhs_weap_ak105_npz","rhs_weap_igla","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak105_npz","rhs_weap_igla","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak105_npz","rhs_acc_dtk3","rhs_acc_perst1ik","rhsusf_acc_ACOG3_USMC",{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",30},{},""},{"rhs_weap_igla","","","",{"Titan_AA",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_BH_Fatigue_GUE_TRI_TAN",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"ACE_wirecutter",1},{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",4,30}}},{"B_Kitbag_tan",{{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",21,30}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_DIVER_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Special 1 (Desert)"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_07", "Male01FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_BH_Fatigue_GUE_TRI_TAN"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"rhs_weap_ak105_npz","rhs_weap_igla","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak105_npz","rhs_weap_igla","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak105_npz","rhs_acc_dtk3","rhs_acc_perst1ik","rhsusf_acc_ACOG3_USMC",{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",30},{},""},{"rhs_weap_igla","","","",{"Titan_AA",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_BH_Fatigue_GUE_TRI_TAN",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"ACE_wirecutter",1},{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",4,30}}},{"B_Kitbag_tan",{{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",21,30}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_DIVER_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Special 1 (Desert)"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_07", "Male01FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_BH_Fatigue_GUE_TRI_TAN"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"rhs_weap_ak105_npz","rhs_weap_igla","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak105_npz","rhs_weap_igla","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak105_npz","rhs_acc_dtk3","rhs_acc_perst1ik","rhsusf_acc_ACOG3_USMC",{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",30},{},""},{"rhs_weap_igla","","","",{"Titan_AA",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_BH_Fatigue_GUE_TRI_TAN",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"ACE_wirecutter",1},{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",4,30}}},{"B_Kitbag_tan",{{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",21,30}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_Officer_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Officer (Desert)"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"PersianHead_A3_04_a", "Male03PER" ,"G_NATO_default"};
		uniformClass = "U_I_C_Soldier_Para_4_F"; 
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
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74n_npz","rhs_acc_dtk1983","","rhsusf_acc_eotech_xps3",{},{},""},{},{"hgun_Pistol_heavy_01_green_F","","","",{"11Rnd_45ACP_Mag",15},{},""},{"U_I_C_Soldier_Para_4_F",{}},{"rhsgref_6b23_ttsko_mountain_nco",{}},{},"lxWS_H_cloth_5_C","G_Aviator",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_Officer_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Officer (Desert)"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"PersianHead_A3_04_a", "Male03PER" ,"G_NATO_default"};
		uniformClass = "U_I_C_Soldier_Para_4_F"; 
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
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74n_npz","rhs_acc_dtk1983","","rhsusf_acc_eotech_xps3",{},{},""},{},{"hgun_Pistol_heavy_01_green_F","","","",{"11Rnd_45ACP_Mag",15},{},""},{"U_I_C_Soldier_Para_4_F",{}},{"rhsgref_6b23_ttsko_mountain_nco",{}},{},"lxWS_H_cloth_5_C","G_Aviator",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_Officer_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Officer (Desert)"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"PersianHead_A3_04_a", "Male03PER" ,"G_NATO_default"};
		uniformClass = "U_I_C_Soldier_Para_4_F"; 
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
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74n_npz","rhs_acc_dtk1983","","rhsusf_acc_eotech_xps3",{},{},""},{},{"hgun_Pistol_heavy_01_green_F","","","",{"11Rnd_45ACP_Mag",15},{},""},{"U_I_C_Soldier_Para_4_F",{}},{"rhsgref_6b23_ttsko_mountain_nco",{}},{},"lxWS_H_cloth_5_C","G_Aviator",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_VAR_1_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 2"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_04", "Male02FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_15"; 
		linkedItems[] = {"ItemMap","ItemGPS","USP_CRYE_AIRFRAME_CMWV"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","USP_CRYE_AIRFRAME_CMWV"}; 
		weapons[] = {"rhs_weap_svdp_wd_npz","rhs_weap_igla","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_wd_npz","rhs_weap_igla","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Carryall_ocamo";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_wd_npz","rhs_acc_tgpv2","","optic_tws",{"rhs_10Rnd_762x54mmR_7N14",10},{},""},{"rhs_weap_igla","","","",{"rhs_mag_9k38_rocket",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_15",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4}}},{"LOP_V_6B23_Rifleman_TAN",{{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1}}},{"B_Carryall_ocamo",{}},"USP_CRYE_AIRFRAME_CMWV","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_VAR_1_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 2"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_04", "Male02FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_15"; 
		linkedItems[] = {"ItemMap","ItemGPS","USP_CRYE_AIRFRAME_CMWV"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","USP_CRYE_AIRFRAME_CMWV"}; 
		weapons[] = {"rhs_weap_svdp_wd_npz","rhs_weap_igla","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_wd_npz","rhs_weap_igla","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Carryall_ocamo";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_wd_npz","rhs_acc_tgpv2","","optic_tws",{"rhs_10Rnd_762x54mmR_7N14",10},{},""},{"rhs_weap_igla","","","",{"rhs_mag_9k38_rocket",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_15",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4}}},{"LOP_V_6B23_Rifleman_TAN",{{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1}}},{"B_Carryall_ocamo",{}},"USP_CRYE_AIRFRAME_CMWV","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_VAR_1_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 2"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_04", "Male02FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_15"; 
		linkedItems[] = {"ItemMap","ItemGPS","USP_CRYE_AIRFRAME_CMWV"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","USP_CRYE_AIRFRAME_CMWV"}; 
		weapons[] = {"rhs_weap_svdp_wd_npz","rhs_weap_igla","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_wd_npz","rhs_weap_igla","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Carryall_ocamo";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_wd_npz","rhs_acc_tgpv2","","optic_tws",{"rhs_10Rnd_762x54mmR_7N14",10},{},""},{"rhs_weap_igla","","","",{"rhs_mag_9k38_rocket",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_15",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4}}},{"LOP_V_6B23_Rifleman_TAN",{{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1}}},{"B_Carryall_ocamo",{}},"USP_CRYE_AIRFRAME_CMWV","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_AR_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Machine Gunner (Winter)"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanBossHead", "Male02FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_24"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhs_1PN138","USP_CRYE_AIRFRAME_CMWV"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhs_1PN138","USP_CRYE_AIRFRAME_CMWV"}; 
		weapons[] = {"rhs_weap_pkp","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_pkp","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_pkp","","","rhs_acc_nita",{"rhs_100Rnd_762x54mmR_7BZ3",100},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_24",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1}}},{"B_Kitbag_tan",{{"rhs_100Rnd_762x54mmR_7BZ3",4,100}}},"USP_CRYE_AIRFRAME_CMWV","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","","rhs_1PN138"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_AR_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Machine Gunner (Winter)"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanBossHead", "Male02FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_24"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhs_1PN138","USP_CRYE_AIRFRAME_CMWV"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhs_1PN138","USP_CRYE_AIRFRAME_CMWV"}; 
		weapons[] = {"rhs_weap_pkp","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_pkp","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_pkp","","","rhs_acc_nita",{"rhs_100Rnd_762x54mmR_7BZ3",100},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_24",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1}}},{"B_Kitbag_tan",{{"rhs_100Rnd_762x54mmR_7BZ3",4,100}}},"USP_CRYE_AIRFRAME_CMWV","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","","rhs_1PN138"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_AR_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Machine Gunner (Winter)"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanBossHead", "Male02FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_24"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhs_1PN138","USP_CRYE_AIRFRAME_CMWV"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhs_1PN138","USP_CRYE_AIRFRAME_CMWV"}; 
		weapons[] = {"rhs_weap_pkp","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_pkp","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_pkp","","","rhs_acc_nita",{"rhs_100Rnd_762x54mmR_7BZ3",100},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_24",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1}}},{"B_Kitbag_tan",{{"rhs_100Rnd_762x54mmR_7BZ3",4,100}}},"USP_CRYE_AIRFRAME_CMWV","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","","rhs_1PN138"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_GL_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Grenadier (Winter)"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"PersianHead_A3_02", "Male02PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_17"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"rhs_weap_m16a4_carryhandle_M203","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_M203","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m16a4_carryhandle_M203","","rhsusf_acc_anpeq15side_bk","rhsusf_acc_ACOG3_USMC",{"rhs_mag_30Rnd_556x45_Mk318_PMAG",30},{"1Rnd_HE_Grenade_shell",1},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_17",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"1Rnd_HE_Grenade_shell",4,1},{"1Rnd_Smoke_Grenade_shell",2,1},{"rhs_mag_30Rnd_556x45_Mk318_PMAG",1,30}}},{"B_Kitbag_tan",{{"1Rnd_HE_Grenade_shell",28,1},{"1Rnd_Smoke_Grenade_shell",16,1},{"rhs_mag_30Rnd_556x45_Mk318_PMAG",11,30}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_GL_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Grenadier (Winter)"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"PersianHead_A3_02", "Male02PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_17"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"rhs_weap_m16a4_carryhandle_M203","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_M203","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m16a4_carryhandle_M203","","rhsusf_acc_anpeq15side_bk","rhsusf_acc_ACOG3_USMC",{"rhs_mag_30Rnd_556x45_Mk318_PMAG",30},{"1Rnd_HE_Grenade_shell",1},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_17",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"1Rnd_HE_Grenade_shell",4,1},{"1Rnd_Smoke_Grenade_shell",2,1},{"rhs_mag_30Rnd_556x45_Mk318_PMAG",1,30}}},{"B_Kitbag_tan",{{"1Rnd_HE_Grenade_shell",28,1},{"1Rnd_Smoke_Grenade_shell",16,1},{"rhs_mag_30Rnd_556x45_Mk318_PMAG",11,30}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_GL_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Grenadier (Winter)"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"PersianHead_A3_02", "Male02PER" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_17"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"rhs_weap_m16a4_carryhandle_M203","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_M203","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m16a4_carryhandle_M203","","rhsusf_acc_anpeq15side_bk","rhsusf_acc_ACOG3_USMC",{"rhs_mag_30Rnd_556x45_Mk318_PMAG",30},{"1Rnd_HE_Grenade_shell",1},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_17",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"1Rnd_HE_Grenade_shell",4,1},{"1Rnd_Smoke_Grenade_shell",2,1},{"rhs_mag_30Rnd_556x45_Mk318_PMAG",1,30}}},{"B_Kitbag_tan",{{"1Rnd_HE_Grenade_shell",28,1},{"1Rnd_Smoke_Grenade_shell",16,1},{"rhs_mag_30Rnd_556x45_Mk318_PMAG",11,30}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_Rifleman_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Rifleman (Winter)"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"AfricanHead_03", "Male01FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_14"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhs_1PN138","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhs_1PN138","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"rhs_weap_ak103_npz","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak103_npz","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak103_npz","rhs_acc_dtk3","rhs_acc_perst1ik","rhsusf_acc_ACOG2_USMC",{"rhs_30Rnd_762x39mm_polymer",30},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_14",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"ACE_EarPlugs",3},{"ACE_morphine",2},{"kat_guedel",4},{"kat_chestSeal",2},{"ACE_tourniquet",6},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",2},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",4},{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"rhs_30Rnd_762x39mm_polymer",1,30}}},{"B_Kitbag_tan",{{"ACE_EarPlugs",3},{"ACE_morphine",2},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",3},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"ACE_wirecutter",1},{"rhs_30Rnd_762x39mm_polymer",20,30}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","","rhs_1PN138"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_Rifleman_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Rifleman (Winter)"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"AfricanHead_03", "Male01FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_14"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhs_1PN138","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhs_1PN138","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"rhs_weap_ak103_npz","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak103_npz","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak103_npz","rhs_acc_dtk3","rhs_acc_perst1ik","rhsusf_acc_ACOG2_USMC",{"rhs_30Rnd_762x39mm_polymer",30},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_14",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"ACE_EarPlugs",3},{"ACE_morphine",2},{"kat_guedel",4},{"kat_chestSeal",2},{"ACE_tourniquet",6},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",2},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",4},{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"rhs_30Rnd_762x39mm_polymer",1,30}}},{"B_Kitbag_tan",{{"ACE_EarPlugs",3},{"ACE_morphine",2},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",3},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"ACE_wirecutter",1},{"rhs_30Rnd_762x39mm_polymer",20,30}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","","rhs_1PN138"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_Rifleman_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Rifleman (Winter)"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"AfricanHead_03", "Male01FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_14"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhs_1PN138","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhs_1PN138","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"rhs_weap_ak103_npz","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak103_npz","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak103_npz","rhs_acc_dtk3","rhs_acc_perst1ik","rhsusf_acc_ACOG2_USMC",{"rhs_30Rnd_762x39mm_polymer",30},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_14",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"ACE_EarPlugs",3},{"ACE_morphine",2},{"kat_guedel",4},{"kat_chestSeal",2},{"ACE_tourniquet",6},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",2},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",4},{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"rhs_30Rnd_762x39mm_polymer",1,30}}},{"B_Kitbag_tan",{{"ACE_EarPlugs",3},{"ACE_morphine",2},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",3},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"ACE_wirecutter",1},{"rhs_30Rnd_762x39mm_polymer",20,30}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","","rhs_1PN138"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_RTO_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Special 2 (Winter)"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_08", "Male02FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_16"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"rhs_weap_ak105_npz","rhs_weap_rpg7","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak105_npz","rhs_weap_rpg7","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak105_npz","rhs_acc_dtk3","rhs_acc_perst1ik","rhsusf_acc_ACOG3_USMC",{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",30},{},""},{"rhs_weap_rpg7","","","rhs_acc_pgo7v3",{"rhs_rpg7_PG7VL_mag",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_16",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"ACE_wirecutter",1},{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",1,30}}},{"B_Kitbag_tan",{{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",21,30}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_RTO_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Special 2 (Winter)"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_08", "Male02FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_16"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"rhs_weap_ak105_npz","rhs_weap_rpg7","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak105_npz","rhs_weap_rpg7","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak105_npz","rhs_acc_dtk3","rhs_acc_perst1ik","rhsusf_acc_ACOG3_USMC",{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",30},{},""},{"rhs_weap_rpg7","","","rhs_acc_pgo7v3",{"rhs_rpg7_PG7VL_mag",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_16",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"ACE_wirecutter",1},{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",1,30}}},{"B_Kitbag_tan",{{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",21,30}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_RTO_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Special 2 (Winter)"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_08", "Male02FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_16"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"rhs_weap_ak105_npz","rhs_weap_rpg7","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak105_npz","rhs_weap_rpg7","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak105_npz","rhs_acc_dtk3","rhs_acc_perst1ik","rhsusf_acc_ACOG3_USMC",{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",30},{},""},{"rhs_weap_rpg7","","","rhs_acc_pgo7v3",{"rhs_rpg7_PG7VL_mag",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_16",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"ACE_wirecutter",1},{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",1,30}}},{"B_Kitbag_tan",{{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",21,30}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_SNP_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Sniper (Winter)"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_04", "Male03FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_15"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"rhs_weap_svdp_npz","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_npz","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_npz","rhs_acc_tgpv2","","rhsusf_acc_nxs_3515x50f1_md",{"rhs_10Rnd_762x54mmR_7N14",10},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_15",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"rhs_10Rnd_762x54mmR_7N14",1,10}}},{"LOP_V_6B23_Rifleman_TAN",{{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"rhs_10Rnd_762x54mmR_7N14",6,10}}},{"B_Kitbag_tan",{{"rhs_10Rnd_762x54mmR_7N14",47,10}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_SNP_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Sniper (Winter)"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_04", "Male03FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_15"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"rhs_weap_svdp_npz","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_npz","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_npz","rhs_acc_tgpv2","","rhsusf_acc_nxs_3515x50f1_md",{"rhs_10Rnd_762x54mmR_7N14",10},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_15",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"rhs_10Rnd_762x54mmR_7N14",1,10}}},{"LOP_V_6B23_Rifleman_TAN",{{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"rhs_10Rnd_762x54mmR_7N14",6,10}}},{"B_Kitbag_tan",{{"rhs_10Rnd_762x54mmR_7N14",47,10}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_SNP_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Sniper (Winter)"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_04", "Male03FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_15"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"rhs_weap_svdp_npz","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_npz","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_npz","rhs_acc_tgpv2","","rhsusf_acc_nxs_3515x50f1_md",{"rhs_10Rnd_762x54mmR_7N14",10},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_15",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"rhs_10Rnd_762x54mmR_7N14",1,10}}},{"LOP_V_6B23_Rifleman_TAN",{{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"rhs_10Rnd_762x54mmR_7N14",6,10}}},{"B_Kitbag_tan",{{"rhs_10Rnd_762x54mmR_7N14",47,10}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_Medic_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Doctor (Winter)"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_03", "Male01FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_AFR_Fatigue_04"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"hlc_rifle_falosw","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"hlc_rifle_falosw","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_falosw","","rhsusf_acc_anpeq15A","rhs_acc_1p87",{"rhs_mag_20Rnd_762x51_m80_fnfal",20},{},"rhsusf_acc_harris_bipod"},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_AFR_Fatigue_04",{{"ACE_elasticBandage",12},{"ACE_surgicalKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"kat_accuvac",1},{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"rhs_mag_20Rnd_762x51_m80_fnfal",2,20}}},{"B_Kitbag_tan",{{"kat_accuvac",1},{"kat_AED",1},{"kat_stethoscope",1},{"ACE_surgicalKit",1},{"ACE_adenosine",2},{"ACE_elasticBandage",15},{"ACE_packingBandage",15},{"ACE_quikclot",15},{"kat_larynx",6},{"ACE_epinephrine",4},{"ACE_morphine",4},{"kat_naloxone",2},{"kat_IO_FAST",7},{"kat_ncdKit",2},{"kat_aatKit",12},{"kat_chestSeal",6},{"ACE_plasmaIV",3},{"ACE_plasmaIV_500",6},{"kat_Pulseoximeter",3},{"ACE_splint",2},{"ACE_suture",12},{"ACE_tourniquet",4},{"rhs_mag_20Rnd_762x51_m80_fnfal",2,20}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_Medic_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Doctor (Winter)"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_03", "Male01FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_AFR_Fatigue_04"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"hlc_rifle_falosw","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"hlc_rifle_falosw","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_falosw","","rhsusf_acc_anpeq15A","rhs_acc_1p87",{"rhs_mag_20Rnd_762x51_m80_fnfal",20},{},"rhsusf_acc_harris_bipod"},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_AFR_Fatigue_04",{{"ACE_elasticBandage",12},{"ACE_surgicalKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"kat_accuvac",1},{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"rhs_mag_20Rnd_762x51_m80_fnfal",2,20}}},{"B_Kitbag_tan",{{"kat_accuvac",1},{"kat_AED",1},{"kat_stethoscope",1},{"ACE_surgicalKit",1},{"ACE_adenosine",2},{"ACE_elasticBandage",15},{"ACE_packingBandage",15},{"ACE_quikclot",15},{"kat_larynx",6},{"ACE_epinephrine",4},{"ACE_morphine",4},{"kat_naloxone",2},{"kat_IO_FAST",7},{"kat_ncdKit",2},{"kat_aatKit",12},{"kat_chestSeal",6},{"ACE_plasmaIV",3},{"ACE_plasmaIV_500",6},{"kat_Pulseoximeter",3},{"ACE_splint",2},{"ACE_suture",12},{"ACE_tourniquet",4},{"rhs_mag_20Rnd_762x51_m80_fnfal",2,20}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_Medic_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Doctor (Winter)"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_03", "Male01FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_AFR_Fatigue_04"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"hlc_rifle_falosw","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"hlc_rifle_falosw","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_falosw","","rhsusf_acc_anpeq15A","rhs_acc_1p87",{"rhs_mag_20Rnd_762x51_m80_fnfal",20},{},"rhsusf_acc_harris_bipod"},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_AFR_Fatigue_04",{{"ACE_elasticBandage",12},{"ACE_surgicalKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"kat_accuvac",1},{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"rhs_mag_20Rnd_762x51_m80_fnfal",2,20}}},{"B_Kitbag_tan",{{"kat_accuvac",1},{"kat_AED",1},{"kat_stethoscope",1},{"ACE_surgicalKit",1},{"ACE_adenosine",2},{"ACE_elasticBandage",15},{"ACE_packingBandage",15},{"ACE_quikclot",15},{"kat_larynx",6},{"ACE_epinephrine",4},{"ACE_morphine",4},{"kat_naloxone",2},{"kat_IO_FAST",7},{"kat_ncdKit",2},{"kat_aatKit",12},{"kat_chestSeal",6},{"ACE_plasmaIV",3},{"ACE_plasmaIV_500",6},{"kat_Pulseoximeter",3},{"ACE_splint",2},{"ACE_suture",12},{"ACE_tourniquet",4},{"rhs_mag_20Rnd_762x51_m80_fnfal",2,20}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_DIVER_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Special 1 (Winter)"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_05", "Male03FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_BH_Fatigue_GUE_TRI_TAN"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"rhs_weap_ak105_npz","rhs_weap_igla","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak105_npz","rhs_weap_igla","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak105_npz","rhs_acc_dtk3","rhs_acc_perst1ik","rhsusf_acc_ACOG3_USMC",{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",30},{},""},{"rhs_weap_igla","","","",{"Titan_AA",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_BH_Fatigue_GUE_TRI_TAN",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"ACE_wirecutter",1},{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",4,30}}},{"B_Kitbag_tan",{{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",21,30}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_DIVER_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Special 1 (Winter)"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_05", "Male03FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_BH_Fatigue_GUE_TRI_TAN"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"rhs_weap_ak105_npz","rhs_weap_igla","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak105_npz","rhs_weap_igla","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak105_npz","rhs_acc_dtk3","rhs_acc_perst1ik","rhsusf_acc_ACOG3_USMC",{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",30},{},""},{"rhs_weap_igla","","","",{"Titan_AA",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_BH_Fatigue_GUE_TRI_TAN",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"ACE_wirecutter",1},{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",4,30}}},{"B_Kitbag_tan",{{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",21,30}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_DIVER_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Special 1 (Winter)"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanHead_A3_05", "Male03FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_BH_Fatigue_GUE_TRI_TAN"; 
		linkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","rhsusf_ach_bare_des_headset"}; 
		weapons[] = {"rhs_weap_ak105_npz","rhs_weap_igla","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_ak105_npz","rhs_weap_igla","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_tan";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak105_npz","rhs_acc_dtk3","rhs_acc_perst1ik","rhsusf_acc_ACOG3_USMC",{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",30},{},""},{"rhs_weap_igla","","","",{"Titan_AA",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_BH_Fatigue_GUE_TRI_TAN",{{"ACE_elasticBandage",12},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"LOP_V_6B23_Rifleman_TAN",{{"ACE_wirecutter",1},{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",4,30}}},{"B_Kitbag_tan",{{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",21,30}}},"rhsusf_ach_bare_des_headset","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_Officer_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Officer (Winter)"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"PersianHead_A3_02", "Male03PER" ,"G_NATO_default"};
		uniformClass = "U_I_C_Soldier_Para_4_F"; 
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
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74n_npz","rhs_acc_dtk1983","","rhsusf_acc_eotech_xps3",{},{},""},{},{"hgun_Pistol_heavy_01_green_F","","","",{"11Rnd_45ACP_Mag",15},{},""},{"U_I_C_Soldier_Para_4_F",{}},{"rhsgref_6b23_ttsko_mountain_nco",{}},{},"lxWS_H_cloth_5_C","G_Aviator",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_Officer_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Officer (Winter)"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"PersianHead_A3_02", "Male03PER" ,"G_NATO_default"};
		uniformClass = "U_I_C_Soldier_Para_4_F"; 
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
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74n_npz","rhs_acc_dtk1983","","rhsusf_acc_eotech_xps3",{},{},""},{},{"hgun_Pistol_heavy_01_green_F","","","",{"11Rnd_45ACP_Mag",15},{},""},{"U_I_C_Soldier_Para_4_F",{}},{"rhsgref_6b23_ttsko_mountain_nco",{}},{},"lxWS_H_cloth_5_C","G_Aviator",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_Officer_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 0, 0, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 3; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Officer (Winter)"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"PersianHead_A3_02", "Male03PER" ,"G_NATO_default"};
		uniformClass = "U_I_C_Soldier_Para_4_F"; 
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
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74n_npz","rhs_acc_dtk1983","","rhsusf_acc_eotech_xps3",{},{},""},{},{"hgun_Pistol_heavy_01_green_F","","","",{"11Rnd_45ACP_Mag",15},{},""},{"U_I_C_Soldier_Para_4_F",{}},{"rhsgref_6b23_ttsko_mountain_nco",{}},{},"lxWS_H_cloth_5_C","G_Aviator",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_MALI_FAMA_2021_VAR_2_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 3"; 
		faction = "BS_O_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanBossHead", "Male01FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_15"; 
		linkedItems[] = {"ItemMap","ItemGPS","USP_CRYE_AIRFRAME_CMWV"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","USP_CRYE_AIRFRAME_CMWV"}; 
		weapons[] = {"rhs_weap_svdp_wd_npz","rhs_weap_igla","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_wd_npz","rhs_weap_igla","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Carryall_ocamo";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_wd_npz","rhs_acc_tgpv2","","optic_tws",{"rhs_10Rnd_762x54mmR_7N14",10},{},""},{"rhs_weap_igla","","","",{"rhs_mag_9k38_rocket",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_15",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4}}},{"LOP_V_6B23_Rifleman_TAN",{{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1}}},{"B_Carryall_ocamo",{}},"USP_CRYE_AIRFRAME_CMWV","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_MALI_FAMA_2021_VAR_2_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 3"; 
		faction = "BS_B_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanBossHead", "Male01FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_15"; 
		linkedItems[] = {"ItemMap","ItemGPS","USP_CRYE_AIRFRAME_CMWV"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","USP_CRYE_AIRFRAME_CMWV"}; 
		weapons[] = {"rhs_weap_svdp_wd_npz","rhs_weap_igla","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_wd_npz","rhs_weap_igla","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Carryall_ocamo";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_wd_npz","rhs_acc_tgpv2","","optic_tws",{"rhs_10Rnd_762x54mmR_7N14",10},{},""},{"rhs_weap_igla","","","",{"rhs_mag_9k38_rocket",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_15",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4}}},{"LOP_V_6B23_Rifleman_TAN",{{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1}}},{"B_Carryall_ocamo",{}},"USP_CRYE_AIRFRAME_CMWV","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_MALI_FAMA_2021_VAR_2_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 0, 0, 1, 0, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 5; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 3"; 
		faction = "BS_I_MALI_FAMA_2021"; 
		identityTypes[] = {"TanoanBossHead", "Male01FRE" ,"G_NATO_default"};
		uniformClass = "LOP_U_ISTS_Fatigue_15"; 
		linkedItems[] = {"ItemMap","ItemGPS","USP_CRYE_AIRFRAME_CMWV"}; 
		respawnlinkedItems[] = {"ItemMap","ItemGPS","USP_CRYE_AIRFRAME_CMWV"}; 
		weapons[] = {"rhs_weap_svdp_wd_npz","rhs_weap_igla","hgun_Rook40_F","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_svdp_wd_npz","rhs_weap_igla","hgun_Rook40_F","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Carryall_ocamo";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_wd_npz","rhs_acc_tgpv2","","optic_tws",{"rhs_10Rnd_762x54mmR_7N14",10},{},""},{"rhs_weap_igla","","","",{"rhs_mag_9k38_rocket",1},{},""},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_ISTS_Fatigue_15",{{"ACE_elasticBandage",12},{"ACE_epinephrine",2},{"ACE_morphine",4}}},{"LOP_V_6B23_Rifleman_TAN",{{"SmokeShell",2,1},{"rhs_mag_rgo",1,1},{"SmokeShellYellow",1,1},{"SmokeShellRed",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1}}},{"B_Carryall_ocamo",{}},"USP_CRYE_AIRFRAME_CMWV","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	class O_G_Van_02_vehicle_F;
	class BS_B_MALI_FAMA_2021_RhvwXhgvddY:O_G_Van_02_vehicle_F {
		scope=2;
		side=1;
		faction="BS_B_MALI_FAMA_2021";
		crew="BS_B_MALI_FAMA_2021_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_MALI_FAMA_2021_Rifleman_DT"
		}; 
	}; 
	class BS_O_MALI_FAMA_2021_RhvwXhgvddY:O_G_Van_02_vehicle_F {
		scope=2;
		side=0;
		faction="BS_O_MALI_FAMA_2021";
		crew="BS_O_MALI_FAMA_2021_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_MALI_FAMA_2021_Rifleman_DT"
		}; 
	}; 
	class BS_I_MALI_FAMA_2021_RhvwXhgvddY:O_G_Van_02_vehicle_F {
		scope=2;
		side=2;
		faction="BS_I_MALI_FAMA_2021";
		crew="BS_I_MALI_FAMA_2021_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_MALI_FAMA_2021_Rifleman_DT"
		}; 
	}; 

	class O_G_Van_02_transport_F;
	class BS_B_MALI_FAMA_2021_F_Gl2yltO4w:O_G_Van_02_transport_F {
		scope=2;
		side=1;
		faction="BS_B_MALI_FAMA_2021";
		crew="BS_B_MALI_FAMA_2021_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_MALI_FAMA_2021_Rifleman_DT"
		}; 
	}; 
	class BS_O_MALI_FAMA_2021_F_Gl2yltO4w:O_G_Van_02_transport_F {
		scope=2;
		side=0;
		faction="BS_O_MALI_FAMA_2021";
		crew="BS_O_MALI_FAMA_2021_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_MALI_FAMA_2021_Rifleman_DT"
		}; 
	}; 
	class BS_I_MALI_FAMA_2021_F_Gl2yltO4w:O_G_Van_02_transport_F {
		scope=2;
		side=2;
		faction="BS_I_MALI_FAMA_2021";
		crew="BS_I_MALI_FAMA_2021_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_MALI_FAMA_2021_Rifleman_DT"
		}; 
	}; 

	class LOP_ISTS_OPF_ZSU234;
	class BS_B_MALI_FAMA_2021_RT6WoGl2BNM:LOP_ISTS_OPF_ZSU234 {
		scope=2;
		side=1;
		faction="BS_B_MALI_FAMA_2021";
		crew="BS_B_MALI_FAMA_2021_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_MALI_FAMA_2021_Rifleman_DT",
			"BS_B_MALI_FAMA_2021_Rifleman_DT",
			"BS_B_MALI_FAMA_2021_Rifleman_DT"
		}; 
	}; 
	class BS_O_MALI_FAMA_2021_RT6WoGl2BNM:LOP_ISTS_OPF_ZSU234 {
		scope=2;
		side=0;
		faction="BS_O_MALI_FAMA_2021";
		crew="BS_O_MALI_FAMA_2021_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_MALI_FAMA_2021_Rifleman_DT",
			"BS_O_MALI_FAMA_2021_Rifleman_DT",
			"BS_O_MALI_FAMA_2021_Rifleman_DT"
		}; 
	}; 
	class BS_I_MALI_FAMA_2021_RT6WoGl2BNM:LOP_ISTS_OPF_ZSU234 {
		scope=2;
		side=2;
		faction="BS_I_MALI_FAMA_2021";
		crew="BS_I_MALI_FAMA_2021_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_MALI_FAMA_2021_Rifleman_DT",
			"BS_I_MALI_FAMA_2021_Rifleman_DT",
			"BS_I_MALI_FAMA_2021_Rifleman_DT"
		}; 
	}; 

	class LOP_ISTS_OPF_BMP2;
	class BS_B_MALI_FAMA_2021_XVp0sBvjEGI:LOP_ISTS_OPF_BMP2 {
		scope=2;
		side=1;
		faction="BS_B_MALI_FAMA_2021";
		crew="BS_B_MALI_FAMA_2021_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_MALI_FAMA_2021_Rifleman_DT",
			"BS_B_MALI_FAMA_2021_Rifleman_DT",
			"BS_B_MALI_FAMA_2021_Rifleman_DT"
		}; 
	}; 
	class BS_O_MALI_FAMA_2021_XVp0sBvjEGI:LOP_ISTS_OPF_BMP2 {
		scope=2;
		side=0;
		faction="BS_O_MALI_FAMA_2021";
		crew="BS_O_MALI_FAMA_2021_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_MALI_FAMA_2021_Rifleman_DT",
			"BS_O_MALI_FAMA_2021_Rifleman_DT",
			"BS_O_MALI_FAMA_2021_Rifleman_DT"
		}; 
	}; 
	class BS_I_MALI_FAMA_2021_XVp0sBvjEGI:LOP_ISTS_OPF_BMP2 {
		scope=2;
		side=2;
		faction="BS_I_MALI_FAMA_2021";
		crew="BS_I_MALI_FAMA_2021_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_MALI_FAMA_2021_Rifleman_DT",
			"BS_I_MALI_FAMA_2021_Rifleman_DT",
			"BS_I_MALI_FAMA_2021_Rifleman_DT"
		}; 
	}; 

	class LOP_ISTS_OPF_T72BA;
	class BS_B_MALI_FAMA_2021_gtQxTw__UB0:LOP_ISTS_OPF_T72BA {
		scope=2;
		side=1;
		faction="BS_B_MALI_FAMA_2021";
		crew="BS_B_MALI_FAMA_2021_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_MALI_FAMA_2021_Rifleman_DT",
			"BS_B_MALI_FAMA_2021_Rifleman_DT"
		}; 
	}; 
	class BS_O_MALI_FAMA_2021_gtQxTw__UB0:LOP_ISTS_OPF_T72BA {
		scope=2;
		side=0;
		faction="BS_O_MALI_FAMA_2021";
		crew="BS_O_MALI_FAMA_2021_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_MALI_FAMA_2021_Rifleman_DT",
			"BS_O_MALI_FAMA_2021_Rifleman_DT"
		}; 
	}; 
	class BS_I_MALI_FAMA_2021_gtQxTw__UB0:LOP_ISTS_OPF_T72BA {
		scope=2;
		side=2;
		faction="BS_I_MALI_FAMA_2021";
		crew="BS_I_MALI_FAMA_2021_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_MALI_FAMA_2021_Rifleman_DT",
			"BS_I_MALI_FAMA_2021_Rifleman_DT"
		}; 
	}; 

	class LOP_ISTS_OPF_M1025_W_M2;
	class BS_B_MALI_FAMA_2021_M0jBGna30gU:LOP_ISTS_OPF_M1025_W_M2 {
		scope=2;
		side=1;
		faction="BS_B_MALI_FAMA_2021";
		crew="BS_B_MALI_FAMA_2021_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_MALI_FAMA_2021_Rifleman_DT",
			"BS_B_MALI_FAMA_2021_Rifleman_DT"
		}; 
	}; 
	class BS_O_MALI_FAMA_2021_M0jBGna30gU:LOP_ISTS_OPF_M1025_W_M2 {
		scope=2;
		side=0;
		faction="BS_O_MALI_FAMA_2021";
		crew="BS_O_MALI_FAMA_2021_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_MALI_FAMA_2021_Rifleman_DT",
			"BS_O_MALI_FAMA_2021_Rifleman_DT"
		}; 
	}; 
	class BS_I_MALI_FAMA_2021_M0jBGna30gU:LOP_ISTS_OPF_M1025_W_M2 {
		scope=2;
		side=2;
		faction="BS_I_MALI_FAMA_2021";
		crew="BS_I_MALI_FAMA_2021_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_MALI_FAMA_2021_Rifleman_DT",
			"BS_I_MALI_FAMA_2021_Rifleman_DT"
		}; 
	}; 

	class LOP_ISTS_OPF_Landrover_M2;
	class BS_B_MALI_FAMA_2021_RZuKiAYzlF8:LOP_ISTS_OPF_Landrover_M2 {
		scope=2;
		side=1;
		faction="BS_B_MALI_FAMA_2021";
		crew="BS_B_MALI_FAMA_2021_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_MALI_FAMA_2021_Rifleman_DT",
			"BS_B_MALI_FAMA_2021_Rifleman_DT"
		}; 
	}; 
	class BS_O_MALI_FAMA_2021_RZuKiAYzlF8:LOP_ISTS_OPF_Landrover_M2 {
		scope=2;
		side=0;
		faction="BS_O_MALI_FAMA_2021";
		crew="BS_O_MALI_FAMA_2021_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_MALI_FAMA_2021_Rifleman_DT",
			"BS_O_MALI_FAMA_2021_Rifleman_DT"
		}; 
	}; 
	class BS_I_MALI_FAMA_2021_RZuKiAYzlF8:LOP_ISTS_OPF_Landrover_M2 {
		scope=2;
		side=2;
		faction="BS_I_MALI_FAMA_2021";
		crew="BS_I_MALI_FAMA_2021_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_MALI_FAMA_2021_Rifleman_DT",
			"BS_I_MALI_FAMA_2021_Rifleman_DT"
		}; 
	}; 

	class rhs_KORD_VDV;
	class BS_B_MALI_FAMA_2021_q8hB_PsocO8:rhs_KORD_VDV {
		scope=2;
		side=1;
		faction="BS_B_MALI_FAMA_2021";
		crew="BS_B_MALI_FAMA_2021_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_MALI_FAMA_2021_Rifleman_DT"
		}; 
	}; 
	class BS_O_MALI_FAMA_2021_q8hB_PsocO8:rhs_KORD_VDV {
		scope=2;
		side=0;
		faction="BS_O_MALI_FAMA_2021";
		crew="BS_O_MALI_FAMA_2021_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_MALI_FAMA_2021_Rifleman_DT"
		}; 
	}; 
	class BS_I_MALI_FAMA_2021_q8hB_PsocO8:rhs_KORD_VDV {
		scope=2;
		side=2;
		faction="BS_I_MALI_FAMA_2021";
		crew="BS_I_MALI_FAMA_2021_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_MALI_FAMA_2021_Rifleman_DT"
		}; 
	}; 

	class rhs_KORD_high_VDV;
	class BS_B_MALI_FAMA_2021_BoirN23OUlM:rhs_KORD_high_VDV {
		scope=2;
		side=1;
		faction="BS_B_MALI_FAMA_2021";
		crew="BS_B_MALI_FAMA_2021_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_MALI_FAMA_2021_Rifleman_DT"
		}; 
	}; 
	class BS_O_MALI_FAMA_2021_BoirN23OUlM:rhs_KORD_high_VDV {
		scope=2;
		side=0;
		faction="BS_O_MALI_FAMA_2021";
		crew="BS_O_MALI_FAMA_2021_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_MALI_FAMA_2021_Rifleman_DT"
		}; 
	}; 
	class BS_I_MALI_FAMA_2021_BoirN23OUlM:rhs_KORD_high_VDV {
		scope=2;
		side=2;
		faction="BS_I_MALI_FAMA_2021";
		crew="BS_I_MALI_FAMA_2021_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_MALI_FAMA_2021_Rifleman_DT"
		}; 
	}; 

	class RHS_ZU23_VDV;
	class BS_B_MALI_FAMA_2021_qfQBAQzpvJM:RHS_ZU23_VDV {
		scope=2;
		side=1;
		faction="BS_B_MALI_FAMA_2021";
		crew="BS_B_MALI_FAMA_2021_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_MALI_FAMA_2021_Rifleman_DT",
			"BS_B_MALI_FAMA_2021_Rifleman_DT"
		}; 
	}; 
	class BS_O_MALI_FAMA_2021_qfQBAQzpvJM:RHS_ZU23_VDV {
		scope=2;
		side=0;
		faction="BS_O_MALI_FAMA_2021";
		crew="BS_O_MALI_FAMA_2021_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_MALI_FAMA_2021_Rifleman_DT",
			"BS_O_MALI_FAMA_2021_Rifleman_DT"
		}; 
	}; 
	class BS_I_MALI_FAMA_2021_qfQBAQzpvJM:RHS_ZU23_VDV {
		scope=2;
		side=2;
		faction="BS_I_MALI_FAMA_2021";
		crew="BS_I_MALI_FAMA_2021_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_MALI_FAMA_2021_Rifleman_DT",
			"BS_I_MALI_FAMA_2021_Rifleman_DT"
		}; 
	}; 

	class rhs_SPG9M_VDV;
	class BS_B_MALI_FAMA_2021_KS52TWw9giM:rhs_SPG9M_VDV {
		scope=2;
		side=1;
		faction="BS_B_MALI_FAMA_2021";
		crew="BS_B_MALI_FAMA_2021_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_MALI_FAMA_2021_Rifleman_DT"
		}; 
	}; 
	class BS_O_MALI_FAMA_2021_KS52TWw9giM:rhs_SPG9M_VDV {
		scope=2;
		side=0;
		faction="BS_O_MALI_FAMA_2021";
		crew="BS_O_MALI_FAMA_2021_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_MALI_FAMA_2021_Rifleman_DT"
		}; 
	}; 
	class BS_I_MALI_FAMA_2021_KS52TWw9giM:rhs_SPG9M_VDV {
		scope=2;
		side=2;
		faction="BS_I_MALI_FAMA_2021";
		crew="BS_I_MALI_FAMA_2021_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_MALI_FAMA_2021_Rifleman_DT"
		}; 
	}; 

	class O_Heli_Light_02_unarmed_F;
	class BS_B_MALI_FAMA_2021_6KM6hJp_iEg:O_Heli_Light_02_unarmed_F {
		scope=2;
		side=1;
		faction="BS_B_MALI_FAMA_2021";
		crew="BS_B_MALI_FAMA_2021_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_MALI_FAMA_2021_Rifleman_DT",
			"BS_B_MALI_FAMA_2021_Rifleman_DT"
		}; 
	}; 
	class BS_O_MALI_FAMA_2021_6KM6hJp_iEg:O_Heli_Light_02_unarmed_F {
		scope=2;
		side=0;
		faction="BS_O_MALI_FAMA_2021";
		crew="BS_O_MALI_FAMA_2021_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_MALI_FAMA_2021_Rifleman_DT",
			"BS_O_MALI_FAMA_2021_Rifleman_DT"
		}; 
	}; 
	class BS_I_MALI_FAMA_2021_6KM6hJp_iEg:O_Heli_Light_02_unarmed_F {
		scope=2;
		side=2;
		faction="BS_I_MALI_FAMA_2021";
		crew="BS_I_MALI_FAMA_2021_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_MALI_FAMA_2021_Rifleman_DT",
			"BS_I_MALI_FAMA_2021_Rifleman_DT"
		}; 
	}; 

	class O_SFIA_Heli_Attack_02_dynamicLoadout_lxWS;
	class BS_B_MALI_FAMA_2021_7__Q_0TTPRI:O_SFIA_Heli_Attack_02_dynamicLoadout_lxWS {
		scope=2;
		side=1;
		faction="BS_B_MALI_FAMA_2021";
		crew="BS_B_MALI_FAMA_2021_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_MALI_FAMA_2021_Rifleman_DT",
			"BS_B_MALI_FAMA_2021_Rifleman_DT",
			"BS_B_MALI_FAMA_2021_Rifleman_DT"
		}; 
	}; 
	class BS_O_MALI_FAMA_2021_7__Q_0TTPRI:O_SFIA_Heli_Attack_02_dynamicLoadout_lxWS {
		scope=2;
		side=0;
		faction="BS_O_MALI_FAMA_2021";
		crew="BS_O_MALI_FAMA_2021_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_MALI_FAMA_2021_Rifleman_DT",
			"BS_O_MALI_FAMA_2021_Rifleman_DT",
			"BS_O_MALI_FAMA_2021_Rifleman_DT"
		}; 
	}; 
	class BS_I_MALI_FAMA_2021_7__Q_0TTPRI:O_SFIA_Heli_Attack_02_dynamicLoadout_lxWS {
		scope=2;
		side=2;
		faction="BS_I_MALI_FAMA_2021";
		crew="BS_I_MALI_FAMA_2021_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_MALI_FAMA_2021_Rifleman_DT",
			"BS_I_MALI_FAMA_2021_Rifleman_DT",
			"BS_I_MALI_FAMA_2021_Rifleman_DT"
		}; 
	}; 
};
class CfgGroups { 
	class East { 
		class MALI_FAMA_2021 { 
			name="MALI - FAMA (2021)";
			class Infantry {
				name="Infantry";
				class BS_O_MALI_FAMA_2021_Fireteam_WL {
					name="Fireteam (WL)";
					side=0;
					faction="BS_O_MALI_FAMA_2021";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_GL_WL";
					};
				};
				class BS_O_MALI_FAMA_2021_Fireteam_WT {
					name="Fireteam (WT)";
					side=0;
					faction="BS_O_MALI_FAMA_2021";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_Rifleman_WT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_AR_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_GL_WT";
					};
				};
				class BS_O_MALI_FAMA_2021_Fireteam_DT {
					name="Fireteam (DT)";
					side=0;
					faction="BS_O_MALI_FAMA_2021";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_Rifleman_DT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_AR_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_GL_DT";
					};
				};
				class BS_O_MALI_FAMA_2021_Squad_WL {
					name="Squad (WL)";
					side=0;
					faction="BS_O_MALI_FAMA_2021";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_GL_WL";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_Rifleman_WL";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_Rifleman_WL";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_AR_WL";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_GL_WL";
					};
				};
				class BS_O_MALI_FAMA_2021_Squad_WT {
					name="Squad (WT)";
					side=0;
					faction="BS_O_MALI_FAMA_2021";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_Rifleman_WT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_AR_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_GL_WT";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_Rifleman_WT";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_Rifleman_WT";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_AR_WT";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_GL_WT";
					};
				};
				class BS_O_MALI_FAMA_2021_Squad_DT {
					name="Squad (DT)";
					side=0;
					faction="BS_O_MALI_FAMA_2021";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_Rifleman_DT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_AR_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_GL_DT";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_Rifleman_DT";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_Rifleman_DT";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_AR_DT";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_GL_DT";
					};
				};
				class BS_O_MALI_FAMA_2021_AT_WL {
					name="Anti-Tank (WL)";
					side=0;
					faction="BS_O_MALI_FAMA_2021";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_Rifleman_WL";
					};
				};
				class BS_O_MALI_FAMA_2021_AT_WT {
					name="Anti-Tank (WT)";
					side=0;
					faction="BS_O_MALI_FAMA_2021";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_Rifleman_WT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_Rifleman_WT";
					};
				};
				class BS_O_MALI_FAMA_2021_AT_DT {
					name="Anti-Tank (DT)";
					side=0;
					faction="BS_O_MALI_FAMA_2021";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_Rifleman_DT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_Rifleman_DT";
					};
				};
			};
			class Motorized {
				name="Mechanize Infantry";
				class BS_O_MALI_FAMA_2021_Tank_WL_0 {
					name="BMP-2 (obr. 1980g.) (WL) ";
					side=0;
					faction="BS_O_MALI_FAMA_2021";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_MALI_FAMA_2021_XVp0sBvjEGI";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_AR_WL";
					};
				};
				class BS_O_MALI_FAMA_2021_Tank_WT_0 {
					name="BMP-2 (obr. 1980g.) (WT) ";
					side=0;
					faction="BS_O_MALI_FAMA_2021";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_MALI_FAMA_2021_XVp0sBvjEGI";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_AR_WT";
					};
				};
				class BS_O_MALI_FAMA_2021_Tank_DT_0 {
					name="BMP-2 (obr. 1980g.) (DT) ";
					side=0;
					faction="BS_O_MALI_FAMA_2021";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_MALI_FAMA_2021_XVp0sBvjEGI";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_AR_DT";
					};
				};
				class BS_O_MALI_FAMA_2021_Tank_WL_1 {
					name="T-72B (obr. 1984g.) (WL) ";
					side=0;
					faction="BS_O_MALI_FAMA_2021";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_MALI_FAMA_2021_gtQxTw__UB0";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_AR_WL";
					};
				};
				class BS_O_MALI_FAMA_2021_Tank_WT_1 {
					name="T-72B (obr. 1984g.) (WT) ";
					side=0;
					faction="BS_O_MALI_FAMA_2021";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_MALI_FAMA_2021_gtQxTw__UB0";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_AR_WT";
					};
				};
				class BS_O_MALI_FAMA_2021_Tank_DT_1 {
					name="T-72B (obr. 1984g.) (DT) ";
					side=0;
					faction="BS_O_MALI_FAMA_2021";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_MALI_FAMA_2021_gtQxTw__UB0";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_MALI_FAMA_2021_AR_DT";
					};
				};
			};
		};
	};
	class Indep { 
		class MALI_FAMA_2021 { 
			name="MALI - FAMA (2021)";
			class Infantry {
				name="Infantry";
				class BS_I_MALI_FAMA_2021_Fireteam_WL {
					name="Fireteam (WL)";
					side=1;
					faction="BS_I_MALI_FAMA_2021";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_GL_WL";
					};
				};
				class BS_I_MALI_FAMA_2021_Fireteam_WT {
					name="Fireteam (WT)";
					side=1;
					faction="BS_I_MALI_FAMA_2021";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_Rifleman_WT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_AR_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_GL_WT";
					};
				};
				class BS_I_MALI_FAMA_2021_Fireteam_DT {
					name="Fireteam (DT)";
					side=1;
					faction="BS_I_MALI_FAMA_2021";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_Rifleman_DT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_AR_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_GL_DT";
					};
				};
				class BS_I_MALI_FAMA_2021_Squad_WL {
					name="Squad (WL)";
					side=1;
					faction="BS_I_MALI_FAMA_2021";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_GL_WL";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_Rifleman_WL";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_Rifleman_WL";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_AR_WL";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_GL_WL";
					};
				};
				class BS_I_MALI_FAMA_2021_Squad_WT {
					name="Squad (WT)";
					side=1;
					faction="BS_I_MALI_FAMA_2021";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_Rifleman_WT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_AR_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_GL_WT";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_Rifleman_WT";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_Rifleman_WT";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_AR_WT";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_GL_WT";
					};
				};
				class BS_I_MALI_FAMA_2021_Squad_DT {
					name="Squad (DT)";
					side=1;
					faction="BS_I_MALI_FAMA_2021";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_Rifleman_DT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_AR_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_GL_DT";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_Rifleman_DT";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_Rifleman_DT";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_AR_DT";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_GL_DT";
					};
				};
				class BS_I_MALI_FAMA_2021_AT_WL {
					name="Anti-Tank (WL)";
					side=1;
					faction="BS_I_MALI_FAMA_2021";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_Rifleman_WL";
					};
				};
				class BS_I_MALI_FAMA_2021_AT_WT {
					name="Anti-Tank (WT)";
					side=1;
					faction="BS_I_MALI_FAMA_2021";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_Rifleman_WT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_Rifleman_WT";
					};
				};
				class BS_I_MALI_FAMA_2021_AT_DT {
					name="Anti-Tank (DT)";
					side=1;
					faction="BS_I_MALI_FAMA_2021";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_Rifleman_DT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_Rifleman_DT";
					};
				};
			};
			class Motorized {
				name="Mechanize Infantry";
				class BS_I_MALI_FAMA_2021_Tank_WL_0 {
					name="BMP-2 (obr. 1980g.) (WL) ";
					side=1;
					faction="BS_I_MALI_FAMA_2021";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_MALI_FAMA_2021_XVp0sBvjEGI";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_AR_WL";
					};
				};
				class BS_I_MALI_FAMA_2021_Tank_WT_0 {
					name="BMP-2 (obr. 1980g.) (WT) ";
					side=1;
					faction="BS_I_MALI_FAMA_2021";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_MALI_FAMA_2021_XVp0sBvjEGI";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_AR_WT";
					};
				};
				class BS_I_MALI_FAMA_2021_Tank_DT_0 {
					name="BMP-2 (obr. 1980g.) (DT) ";
					side=1;
					faction="BS_I_MALI_FAMA_2021";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_MALI_FAMA_2021_XVp0sBvjEGI";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_AR_DT";
					};
				};
				class BS_I_MALI_FAMA_2021_Tank_WL_1 {
					name="T-72B (obr. 1984g.) (WL) ";
					side=1;
					faction="BS_I_MALI_FAMA_2021";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_MALI_FAMA_2021_gtQxTw__UB0";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_AR_WL";
					};
				};
				class BS_I_MALI_FAMA_2021_Tank_WT_1 {
					name="T-72B (obr. 1984g.) (WT) ";
					side=1;
					faction="BS_I_MALI_FAMA_2021";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_MALI_FAMA_2021_gtQxTw__UB0";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_AR_WT";
					};
				};
				class BS_I_MALI_FAMA_2021_Tank_DT_1 {
					name="T-72B (obr. 1984g.) (DT) ";
					side=1;
					faction="BS_I_MALI_FAMA_2021";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_MALI_FAMA_2021_gtQxTw__UB0";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_MALI_FAMA_2021_AR_DT";
					};
				};
			};
		};
	};
	class West { 
		class MALI_FAMA_2021 { 
			name="MALI - FAMA (2021)";
			class Infantry {
				name="Infantry";
				class BS_B_MALI_FAMA_2021_Fireteam_WL {
					name="Fireteam (WL)";
					side=2;
					faction="BS_B_MALI_FAMA_2021";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_GL_WL";
					};
				};
				class BS_B_MALI_FAMA_2021_Fireteam_WT {
					name="Fireteam (WT)";
					side=2;
					faction="BS_B_MALI_FAMA_2021";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_Rifleman_WT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_AR_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_GL_WT";
					};
				};
				class BS_B_MALI_FAMA_2021_Fireteam_DT {
					name="Fireteam (DT)";
					side=2;
					faction="BS_B_MALI_FAMA_2021";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_Rifleman_DT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_AR_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_GL_DT";
					};
				};
				class BS_B_MALI_FAMA_2021_Squad_WL {
					name="Squad (WL)";
					side=2;
					faction="BS_B_MALI_FAMA_2021";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_GL_WL";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_Rifleman_WL";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_Rifleman_WL";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_AR_WL";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_GL_WL";
					};
				};
				class BS_B_MALI_FAMA_2021_Squad_WT {
					name="Squad (WT)";
					side=2;
					faction="BS_B_MALI_FAMA_2021";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_Rifleman_WT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_AR_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_GL_WT";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_Rifleman_WT";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_Rifleman_WT";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_AR_WT";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_GL_WT";
					};
				};
				class BS_B_MALI_FAMA_2021_Squad_DT {
					name="Squad (DT)";
					side=2;
					faction="BS_B_MALI_FAMA_2021";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_Rifleman_DT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_AR_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_GL_DT";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_Rifleman_DT";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_Rifleman_DT";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_AR_DT";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_GL_DT";
					};
				};
				class BS_B_MALI_FAMA_2021_AT_WL {
					name="Anti-Tank (WL)";
					side=2;
					faction="BS_B_MALI_FAMA_2021";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_Rifleman_WL";
					};
				};
				class BS_B_MALI_FAMA_2021_AT_WT {
					name="Anti-Tank (WT)";
					side=2;
					faction="BS_B_MALI_FAMA_2021";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_Rifleman_WT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_Rifleman_WT";
					};
				};
				class BS_B_MALI_FAMA_2021_AT_DT {
					name="Anti-Tank (DT)";
					side=2;
					faction="BS_B_MALI_FAMA_2021";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_Rifleman_DT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_Rifleman_DT";
					};
				};
			};
			class Motorized {
				name="Mechanize Infantry";
				class BS_B_MALI_FAMA_2021_Tank_WL_0 {
					name="BMP-2 (obr. 1980g.) (WL) ";
					side=2;
					faction="BS_B_MALI_FAMA_2021";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_XVp0sBvjEGI";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_AR_WL";
					};
				};
				class BS_B_MALI_FAMA_2021_Tank_WT_0 {
					name="BMP-2 (obr. 1980g.) (WT) ";
					side=2;
					faction="BS_B_MALI_FAMA_2021";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_XVp0sBvjEGI";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_AR_WT";
					};
				};
				class BS_B_MALI_FAMA_2021_Tank_DT_0 {
					name="BMP-2 (obr. 1980g.) (DT) ";
					side=2;
					faction="BS_B_MALI_FAMA_2021";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_XVp0sBvjEGI";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_AR_DT";
					};
				};
				class BS_B_MALI_FAMA_2021_Tank_WL_1 {
					name="T-72B (obr. 1984g.) (WL) ";
					side=2;
					faction="BS_B_MALI_FAMA_2021";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_gtQxTw__UB0";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_AR_WL";
					};
				};
				class BS_B_MALI_FAMA_2021_Tank_WT_1 {
					name="T-72B (obr. 1984g.) (WT) ";
					side=2;
					faction="BS_B_MALI_FAMA_2021";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_gtQxTw__UB0";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_AR_WT";
					};
				};
				class BS_B_MALI_FAMA_2021_Tank_DT_1 {
					name="T-72B (obr. 1984g.) (DT) ";
					side=2;
					faction="BS_B_MALI_FAMA_2021";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_gtQxTw__UB0";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_MALI_FAMA_2021_AR_DT";
					};
				};
			};
		};
	};
};

class CfgPatches { 
	class bm_specops_faction_MALI_FAMA_2021{
		author = "Broken Skull Mods";
		weapons[]={};
		requiredVersion=0.1;
		skipWhenMissingDependencies = 1;
		requiredAddons[]={
			"rhs_c_weapons",
			"ace_compat_rhs_afrf3",
			"A3_Weapons_F_Pistols_Rook40",
			"ace_realisticnames",
			"ace_ballistics",
			"A3_Weapons_F_Acc",
			"A3_Weapons_F",
			"ace_smallarms",
			"po_factions_me",
			"ace_medical_treatment",
			"ace_hearing",
			"kat_airway",
			"kat_breathing",
			"ace_rangecard",
			"ace_microdagr",
			"ace_attach",
			"ace_captives",
			"po_factions_eu",
			"USP_Gear_Head",
			"ace_yardage450",
			"rhs_c_troops",
			"ace_compat_rhs_afrf3_nightvision",
			"rhsusf_c_weapons",
			"ace_compat_rhs_usf3_arsenal",
			"rhsusf_c_troops",
			"ace_compat_rhs_usf3",
			"ace_compat_rhs_afrf3_arsenal",
			"ace_logistics_wirecutter",
			"hlcweapons_falpocalypse",
			"rhsgref_c_weapons",
			"po_factions_afr",
			"kat_circulation",
			"kat_pharma",
			"A3_Weapons_F_Enoch_Pistols_Pistol_Heavy_01",
			"A3_Characters_F_Exp",
			"rhsgref_c_troops",
			"RHSGREF_ArmorNerf",
			"Characters_f_lxWS_headgear",
			"ace_optics",
			"ace_scopes",
			"bm_specops_faction_US_ARMA_BASE"
};
		units[]={
			"BS_O_MALI_FAMA_2021_AR_WL",
			"BS_B_MALI_FAMA_2021_AR_WL",
			"BS_I_MALI_FAMA_2021_AR_WL",
			"BS_O_MALI_FAMA_2021_GL_WL",
			"BS_B_MALI_FAMA_2021_GL_WL",
			"BS_I_MALI_FAMA_2021_GL_WL",
			"BS_O_MALI_FAMA_2021_Rifleman_WL",
			"BS_B_MALI_FAMA_2021_Rifleman_WL",
			"BS_I_MALI_FAMA_2021_Rifleman_WL",
			"BS_O_MALI_FAMA_2021_RTO_WL",
			"BS_B_MALI_FAMA_2021_RTO_WL",
			"BS_I_MALI_FAMA_2021_RTO_WL",
			"BS_O_MALI_FAMA_2021_SNP_WL",
			"BS_B_MALI_FAMA_2021_SNP_WL",
			"BS_I_MALI_FAMA_2021_SNP_WL",
			"BS_O_MALI_FAMA_2021_Medic_WL",
			"BS_B_MALI_FAMA_2021_Medic_WL",
			"BS_I_MALI_FAMA_2021_Medic_WL",
			"BS_O_MALI_FAMA_2021_DIVER_WL",
			"BS_B_MALI_FAMA_2021_DIVER_WL",
			"BS_I_MALI_FAMA_2021_DIVER_WL",
			"BS_O_MALI_FAMA_2021_Officer_WL",
			"BS_B_MALI_FAMA_2021_Officer_WL",
			"BS_I_MALI_FAMA_2021_Officer_WL",
			"BS_O_MALI_FAMA_2021_AR_DT",
			"BS_B_MALI_FAMA_2021_AR_DT",
			"BS_I_MALI_FAMA_2021_AR_DT",
			"BS_O_MALI_FAMA_2021_GL_DT",
			"BS_B_MALI_FAMA_2021_GL_DT",
			"BS_I_MALI_FAMA_2021_GL_DT",
			"BS_O_MALI_FAMA_2021_Rifleman_DT",
			"BS_B_MALI_FAMA_2021_Rifleman_DT",
			"BS_I_MALI_FAMA_2021_Rifleman_DT",
			"BS_O_MALI_FAMA_2021_RTO_DT",
			"BS_B_MALI_FAMA_2021_RTO_DT",
			"BS_I_MALI_FAMA_2021_RTO_DT",
			"BS_O_MALI_FAMA_2021_SNP_DT",
			"BS_B_MALI_FAMA_2021_SNP_DT",
			"BS_I_MALI_FAMA_2021_SNP_DT",
			"BS_O_MALI_FAMA_2021_Medic_DT",
			"BS_B_MALI_FAMA_2021_Medic_DT",
			"BS_I_MALI_FAMA_2021_Medic_DT",
			"BS_O_MALI_FAMA_2021_DIVER_DT",
			"BS_B_MALI_FAMA_2021_DIVER_DT",
			"BS_I_MALI_FAMA_2021_DIVER_DT",
			"BS_O_MALI_FAMA_2021_Officer_DT",
			"BS_B_MALI_FAMA_2021_Officer_DT",
			"BS_I_MALI_FAMA_2021_Officer_DT",
			"BS_O_MALI_FAMA_2021_AR_WT",
			"BS_B_MALI_FAMA_2021_AR_WT",
			"BS_I_MALI_FAMA_2021_AR_WT",
			"BS_O_MALI_FAMA_2021_GL_WT",
			"BS_B_MALI_FAMA_2021_GL_WT",
			"BS_I_MALI_FAMA_2021_GL_WT",
			"BS_O_MALI_FAMA_2021_Rifleman_WT",
			"BS_B_MALI_FAMA_2021_Rifleman_WT",
			"BS_I_MALI_FAMA_2021_Rifleman_WT",
			"BS_O_MALI_FAMA_2021_RTO_WT",
			"BS_B_MALI_FAMA_2021_RTO_WT",
			"BS_I_MALI_FAMA_2021_RTO_WT",
			"BS_O_MALI_FAMA_2021_SNP_WT",
			"BS_B_MALI_FAMA_2021_SNP_WT",
			"BS_I_MALI_FAMA_2021_SNP_WT",
			"BS_O_MALI_FAMA_2021_Medic_WT",
			"BS_B_MALI_FAMA_2021_Medic_WT",
			"BS_I_MALI_FAMA_2021_Medic_WT",
			"BS_O_MALI_FAMA_2021_DIVER_WT",
			"BS_B_MALI_FAMA_2021_DIVER_WT",
			"BS_I_MALI_FAMA_2021_DIVER_WT",
			"BS_O_MALI_FAMA_2021_Officer_WT",
			"BS_B_MALI_FAMA_2021_Officer_WT",
			"BS_I_MALI_FAMA_2021_Officer_WT",
			"BS_B_MALI_FAMA_2021_RhvwXhgvddY",
			"BS_O_MALI_FAMA_2021_RhvwXhgvddY",
			"BS_I_MALI_FAMA_2021_RhvwXhgvddY",
			"BS_B_MALI_FAMA_2021_F_Gl2yltO4w",
			"BS_O_MALI_FAMA_2021_F_Gl2yltO4w",
			"BS_I_MALI_FAMA_2021_F_Gl2yltO4w",
			"BS_B_MALI_FAMA_2021_RT6WoGl2BNM",
			"BS_O_MALI_FAMA_2021_RT6WoGl2BNM",
			"BS_I_MALI_FAMA_2021_RT6WoGl2BNM",
			"BS_B_MALI_FAMA_2021_XVp0sBvjEGI",
			"BS_O_MALI_FAMA_2021_XVp0sBvjEGI",
			"BS_I_MALI_FAMA_2021_XVp0sBvjEGI",
			"BS_B_MALI_FAMA_2021_gtQxTw__UB0",
			"BS_O_MALI_FAMA_2021_gtQxTw__UB0",
			"BS_I_MALI_FAMA_2021_gtQxTw__UB0",
			"BS_B_MALI_FAMA_2021_M0jBGna30gU",
			"BS_O_MALI_FAMA_2021_M0jBGna30gU",
			"BS_I_MALI_FAMA_2021_M0jBGna30gU",
			"BS_B_MALI_FAMA_2021_RZuKiAYzlF8",
			"BS_O_MALI_FAMA_2021_RZuKiAYzlF8",
			"BS_I_MALI_FAMA_2021_RZuKiAYzlF8",
			"BS_B_MALI_FAMA_2021_q8hB_PsocO8",
			"BS_O_MALI_FAMA_2021_q8hB_PsocO8",
			"BS_I_MALI_FAMA_2021_q8hB_PsocO8",
			"BS_B_MALI_FAMA_2021_BoirN23OUlM",
			"BS_O_MALI_FAMA_2021_BoirN23OUlM",
			"BS_I_MALI_FAMA_2021_BoirN23OUlM",
			"BS_B_MALI_FAMA_2021_qfQBAQzpvJM",
			"BS_O_MALI_FAMA_2021_qfQBAQzpvJM",
			"BS_I_MALI_FAMA_2021_qfQBAQzpvJM",
			"BS_B_MALI_FAMA_2021_KS52TWw9giM",
			"BS_O_MALI_FAMA_2021_KS52TWw9giM",
			"BS_I_MALI_FAMA_2021_KS52TWw9giM",
			"BS_B_MALI_FAMA_2021_6KM6hJp_iEg",
			"BS_O_MALI_FAMA_2021_6KM6hJp_iEg",
			"BS_I_MALI_FAMA_2021_6KM6hJp_iEg",
			"BS_B_MALI_FAMA_2021_7__Q_0TTPRI",
			"BS_O_MALI_FAMA_2021_7__Q_0TTPRI",
			"BS_I_MALI_FAMA_2021_7__Q_0TTPRI"
};
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
		brokenSkullArsenal[]={"rhs_weap_pkp","rhs_acc_nita","rhs_100Rnd_762x54mmR_7BZ3","hgun_Rook40_F","muzzle_snds_L","16Rnd_9x21_Mag","LOP_U_ISTS_Fatigue_24","ACE_elasticBandage","ACE_EarPlugs","ACE_morphine","kat_guedel","kat_chestSeal","ACE_tourniquet","ACE_packingBandage","ACE_quikclot","ACE_RangeCard","ACE_microDAGR","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_CableTie","LOP_V_6B23_Rifleman_TAN","SmokeShell","rhs_mag_rgo","SmokeShellYellow","SmokeShellRed","SmokeShellPurple","SmokeShellOrange","SmokeShellGreen","SmokeShellBlue","USP_CRYE_AIRFRAME_CMWV","ACE_Yardage450","ItemMap","ItemGPS","rhs_1PN138","rhs_weap_m16a4_carryhandle_M203","rhsusf_acc_anpeq15side_bk","rhsusf_acc_ACOG3_USMC","rhs_mag_30Rnd_556x45_Mk318_PMAG","1Rnd_HE_Grenade_shell","LOP_U_ISTS_Fatigue_17","1Rnd_Smoke_Grenade_shell","rhsusf_ach_bare_des_headset","rhs_weap_ak103_npz","rhs_acc_dtk3","rhs_acc_perst1ik","rhsusf_acc_ACOG2_USMC","rhs_30Rnd_762x39mm_polymer","LOP_U_ISTS_Fatigue_14","ACE_wirecutter","rhs_weap_ak105_npz","rhs_30Rnd_545x39_7N10_2mag_camo_AK","rhs_weap_rpg7","rhs_acc_pgo7v3","rhs_rpg7_PG7VL_mag","LOP_U_ISTS_Fatigue_16","rhs_weap_svdp_npz","rhs_acc_tgpv2","rhsusf_acc_nxs_3515x50f1_md","rhs_10Rnd_762x54mmR_7N14","LOP_U_ISTS_Fatigue_15","hlc_rifle_falosw","rhsusf_acc_anpeq15A","rhs_acc_1p87","rhs_mag_20Rnd_762x51_m80_fnfal","rhsusf_acc_harris_bipod","LOP_U_AFR_Fatigue_04","ACE_surgicalKit","kat_accuvac","kat_AED","kat_stethoscope","ACE_adenosine","kat_larynx","kat_naloxone","kat_IO_FAST","kat_ncdKit","kat_aatKit","ACE_plasmaIV","ACE_plasmaIV_500","kat_Pulseoximeter","ACE_splint","ACE_suture","rhs_weap_igla","Titan_AA","LOP_U_BH_Fatigue_GUE_TRI_TAN","rhs_weap_ak74n_npz","rhs_acc_dtk1983","rhsusf_acc_eotech_xps3","hgun_Pistol_heavy_01_green_F","11Rnd_45ACP_Mag","U_I_C_Soldier_Para_4_F","rhsgref_6b23_ttsko_mountain_nco","lxWS_H_cloth_5_C","Binocular","ItemRadio","rhs_weap_svdp_wd_npz","optic_tws","rhs_mag_9k38_rocket"};

		garage[]={{"BS_B_MALI_FAMA_2021_RhvwXhgvddY",0,50,-1},{"BS_B_MALI_FAMA_2021_F_Gl2yltO4w",0,50,-1},{"BS_B_MALI_FAMA_2021_RT6WoGl2BNM",2,1500,0},{"BS_B_MALI_FAMA_2021_XVp0sBvjEGI",2,10,1},{"BS_B_MALI_FAMA_2021_gtQxTw__UB0",2,1500,1},{"BS_B_MALI_FAMA_2021_M0jBGna30gU",0,500,-1},{"BS_B_MALI_FAMA_2021_RZuKiAYzlF8",0,200,-1},{"BS_B_MALI_FAMA_2021_q8hB_PsocO8",0,10,-1},{"BS_B_MALI_FAMA_2021_BoirN23OUlM",0,10,-1},{"BS_B_MALI_FAMA_2021_qfQBAQzpvJM",0,100,-1},{"BS_B_MALI_FAMA_2021_KS52TWw9giM",0,150,-1},{"BS_B_MALI_FAMA_2021_6KM6hJp_iEg",0,700,-1},{"BS_B_MALI_FAMA_2021_7__Q_0TTPRI",0,3000,-1}};
		SamSystem[]={{"BS_B_MALI_FAMA_2021_qfQBAQzpvJM","ZU-23-2"}};
		SearchLight[]={};
		StaticLowMG[]={{"BS_B_MALI_FAMA_2021_q8hB_PsocO8","KORD (6T7)"}};
		StaticHighMG[]={{"BS_B_MALI_FAMA_2021_BoirN23OUlM","KORD (6U16)"}};
		StaticMotar[]={{"BS_B_MALI_FAMA_2021_KS52TWw9giM","SPG-9M"}};
		StaticAntiAir[]={};
		VehicleTechnicals[]={};
		VehicleAntiAircraft[]={"BS_B_MALI_FAMA_2021_RT6WoGl2BNM"};
		VehicleTanks[]={"BS_B_MALI_FAMA_2021_XVp0sBvjEGI","BS_B_MALI_FAMA_2021_gtQxTw__UB0"};
		VehicleTransport[]={};
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