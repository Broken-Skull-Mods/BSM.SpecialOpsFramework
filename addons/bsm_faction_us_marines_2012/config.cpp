#include "\bsm_faction_us_marines_2012\audio.hpp"


class CfgVehicles {
	class B_Survivor_F;
	class I_G_Survivor_F;
	class O_G_Survivor_F; 
	// This unit is for OpFOR
	class BS_O_US_Marines_2012_GL_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Grenadier (Woodland)"; 
		faction = "BS_O_US_Marines_2012"; 
		identityTypes[] = {"GreekHead_A3_03", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","rhs_googles_clear","rhsusf_lwh_helmet_marpatwd_ess"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","rhs_googles_clear","rhsusf_lwh_helmet_marpatwd_ess"}; 
		weapons[] = {"rhs_weap_m4a1_carryhandle_m203S","rhs_weap_M320","rhsusf_bino_m24"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_carryhandle_m203S","rhs_weap_M320","rhsusf_bino_m24"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_carryhandle_m203S","","ACE_acc_pointer_green","rhsusf_acc_su230a_mrds",{"75Rnd_556x45_Stanag_lxWS",75},{},""},{},{"rhs_weap_M320","","","",{"rhs_mag_M441_HE",1},{},""},{"rhs_uniform_FROG01_wd",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"rhsusf_spc_teamleader",{{"1Rnd_HE_Grenade_shell",12,1},{"1Rnd_Smoke_Grenade_shell",7,1},{"75Rnd_556x45_Stanag_lxWS",4,75}}},{"USP_45L_RUCKSACK_GRN",{{"1Rnd_HE_Grenade_shell",33,1},{"1Rnd_Smoke_Grenade_shell",19,1},{"75Rnd_556x45_Stanag_lxWS",12,75}}},"rhsusf_lwh_helmet_marpatwd_ess","rhs_googles_clear",{"rhsusf_bino_m24","","","",{},{},""},{"ItemMap","","TFAR_anprc152","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_Marines_2012_GL_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Grenadier (Woodland)"; 
		faction = "BS_B_US_Marines_2012"; 
		identityTypes[] = {"GreekHead_A3_03", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","rhs_googles_clear","rhsusf_lwh_helmet_marpatwd_ess"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","rhs_googles_clear","rhsusf_lwh_helmet_marpatwd_ess"}; 
		weapons[] = {"rhs_weap_m4a1_carryhandle_m203S","rhs_weap_M320","rhsusf_bino_m24"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_carryhandle_m203S","rhs_weap_M320","rhsusf_bino_m24"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_carryhandle_m203S","","ACE_acc_pointer_green","rhsusf_acc_su230a_mrds",{"75Rnd_556x45_Stanag_lxWS",75},{},""},{},{"rhs_weap_M320","","","",{"rhs_mag_M441_HE",1},{},""},{"rhs_uniform_FROG01_wd",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"rhsusf_spc_teamleader",{{"1Rnd_HE_Grenade_shell",12,1},{"1Rnd_Smoke_Grenade_shell",7,1},{"75Rnd_556x45_Stanag_lxWS",4,75}}},{"USP_45L_RUCKSACK_GRN",{{"1Rnd_HE_Grenade_shell",33,1},{"1Rnd_Smoke_Grenade_shell",19,1},{"75Rnd_556x45_Stanag_lxWS",12,75}}},"rhsusf_lwh_helmet_marpatwd_ess","rhs_googles_clear",{"rhsusf_bino_m24","","","",{},{},""},{"ItemMap","","TFAR_anprc152","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_Marines_2012_GL_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Grenadier (Woodland)"; 
		faction = "BS_I_US_Marines_2012"; 
		identityTypes[] = {"GreekHead_A3_03", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","rhs_googles_clear","rhsusf_lwh_helmet_marpatwd_ess"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","rhs_googles_clear","rhsusf_lwh_helmet_marpatwd_ess"}; 
		weapons[] = {"rhs_weap_m4a1_carryhandle_m203S","rhs_weap_M320","rhsusf_bino_m24"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_carryhandle_m203S","rhs_weap_M320","rhsusf_bino_m24"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_carryhandle_m203S","","ACE_acc_pointer_green","rhsusf_acc_su230a_mrds",{"75Rnd_556x45_Stanag_lxWS",75},{},""},{},{"rhs_weap_M320","","","",{"rhs_mag_M441_HE",1},{},""},{"rhs_uniform_FROG01_wd",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"rhsusf_spc_teamleader",{{"1Rnd_HE_Grenade_shell",12,1},{"1Rnd_Smoke_Grenade_shell",7,1},{"75Rnd_556x45_Stanag_lxWS",4,75}}},{"USP_45L_RUCKSACK_GRN",{{"1Rnd_HE_Grenade_shell",33,1},{"1Rnd_Smoke_Grenade_shell",19,1},{"75Rnd_556x45_Stanag_lxWS",12,75}}},"rhsusf_lwh_helmet_marpatwd_ess","rhs_googles_clear",{"rhsusf_bino_m24","","","",{},{},""},{"ItemMap","","TFAR_anprc152","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_Marines_2012_Medic_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Doctor (Woodland)"; 
		faction = "BS_O_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_02", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_ess"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_ess"}; 
		weapons[] = {"rhs_m4_acog_usmc","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_m4_acog_usmc","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_m4_acog_usmc","","acc_pointer_IR","rhsusf_acc_ACOG_USMC",{"rhs_mag_30Rnd_556x45_M855_Stanag",30},{},"Tier1_Harris_Bipod_Black"},{},{"rhsusf_weap_m9","","","",{},{},""},{"rhs_uniform_FROG01_wd",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"ACE_surgicalKit",1}}},{"rhsusf_spc_rifleman",{{"rhs_mag_30Rnd_556x45_M855_Stanag",14,30}}},{"USP_45L_RUCKSACK_GRN",{{"kat_accuvac",1},{"kat_AED",1},{"kat_stethoscope",1},{"ACE_surgicalKit",1},{"ACE_adenosine",2},{"ACE_elasticBandage",15},{"ACE_packingBandage",15},{"ACE_quikclot",15},{"kat_larynx",6},{"ACE_epinephrine",4},{"ACE_morphine",4},{"kat_naloxone",2},{"kat_IO_FAST",7},{"kat_ncdKit",2},{"kat_aatKit",12},{"kat_chestSeal",6},{"ACE_plasmaIV",3},{"ACE_plasmaIV_500",6},{"kat_Pulseoximeter",3},{"ACE_splint",2},{"ACE_suture",12},{"ACE_tourniquet",4},{"rhs_mag_30Rnd_556x45_M855_Stanag",6,30}}},"rhsusf_lwh_helmet_marpatwd_ess","rhs_googles_black",{"ACE_Vector","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_Marines_2012_Medic_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Doctor (Woodland)"; 
		faction = "BS_B_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_02", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_ess"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_ess"}; 
		weapons[] = {"rhs_m4_acog_usmc","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_m4_acog_usmc","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_m4_acog_usmc","","acc_pointer_IR","rhsusf_acc_ACOG_USMC",{"rhs_mag_30Rnd_556x45_M855_Stanag",30},{},"Tier1_Harris_Bipod_Black"},{},{"rhsusf_weap_m9","","","",{},{},""},{"rhs_uniform_FROG01_wd",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"ACE_surgicalKit",1}}},{"rhsusf_spc_rifleman",{{"rhs_mag_30Rnd_556x45_M855_Stanag",14,30}}},{"USP_45L_RUCKSACK_GRN",{{"kat_accuvac",1},{"kat_AED",1},{"kat_stethoscope",1},{"ACE_surgicalKit",1},{"ACE_adenosine",2},{"ACE_elasticBandage",15},{"ACE_packingBandage",15},{"ACE_quikclot",15},{"kat_larynx",6},{"ACE_epinephrine",4},{"ACE_morphine",4},{"kat_naloxone",2},{"kat_IO_FAST",7},{"kat_ncdKit",2},{"kat_aatKit",12},{"kat_chestSeal",6},{"ACE_plasmaIV",3},{"ACE_plasmaIV_500",6},{"kat_Pulseoximeter",3},{"ACE_splint",2},{"ACE_suture",12},{"ACE_tourniquet",4},{"rhs_mag_30Rnd_556x45_M855_Stanag",6,30}}},"rhsusf_lwh_helmet_marpatwd_ess","rhs_googles_black",{"ACE_Vector","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_Marines_2012_Medic_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Doctor (Woodland)"; 
		faction = "BS_I_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_02", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_ess"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_ess"}; 
		weapons[] = {"rhs_m4_acog_usmc","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_m4_acog_usmc","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_m4_acog_usmc","","acc_pointer_IR","rhsusf_acc_ACOG_USMC",{"rhs_mag_30Rnd_556x45_M855_Stanag",30},{},"Tier1_Harris_Bipod_Black"},{},{"rhsusf_weap_m9","","","",{},{},""},{"rhs_uniform_FROG01_wd",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"ACE_surgicalKit",1}}},{"rhsusf_spc_rifleman",{{"rhs_mag_30Rnd_556x45_M855_Stanag",14,30}}},{"USP_45L_RUCKSACK_GRN",{{"kat_accuvac",1},{"kat_AED",1},{"kat_stethoscope",1},{"ACE_surgicalKit",1},{"ACE_adenosine",2},{"ACE_elasticBandage",15},{"ACE_packingBandage",15},{"ACE_quikclot",15},{"kat_larynx",6},{"ACE_epinephrine",4},{"ACE_morphine",4},{"kat_naloxone",2},{"kat_IO_FAST",7},{"kat_ncdKit",2},{"kat_aatKit",12},{"kat_chestSeal",6},{"ACE_plasmaIV",3},{"ACE_plasmaIV_500",6},{"kat_Pulseoximeter",3},{"ACE_splint",2},{"ACE_suture",12},{"ACE_tourniquet",4},{"rhs_mag_30Rnd_556x45_M855_Stanag",6,30}}},"rhsusf_lwh_helmet_marpatwd_ess","rhs_googles_black",{"ACE_Vector","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_Marines_2012_AR_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Machine Gunner (Woodland)"; 
		faction = "BS_O_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_12", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_OAKLEY_SI2_BLK","rhsusf_lwh_helmet_marpatwd_ess"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_OAKLEY_SI2_BLK","rhsusf_lwh_helmet_marpatwd_ess"}; 
		weapons[] = {"rhs_weap_m249_pip","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m249_pip","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m249_pip","","","rhsusf_acc_ACOG2_USMC",{"rhsusf_200rnd_556x45_mixed_box",200},{},"rhsusf_acc_saw_bipod"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_FMJ",15},{},""},{"rhs_uniform_FROG01_wd",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"rhsusf_spc_mg",{{"rhs_mag_an_m8hc",2,1},{"rhs_mag_m67",2,1},{"rhsusf_200rnd_556x45_mixed_box",1,200}}},{"USP_45L_RUCKSACK_GRN",{{"rhsusf_200rnd_556x45_mixed_box",7,200}}},"rhsusf_lwh_helmet_marpatwd_ess","USP_OAKLEY_SI2_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_Marines_2012_AR_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Machine Gunner (Woodland)"; 
		faction = "BS_B_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_12", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_OAKLEY_SI2_BLK","rhsusf_lwh_helmet_marpatwd_ess"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_OAKLEY_SI2_BLK","rhsusf_lwh_helmet_marpatwd_ess"}; 
		weapons[] = {"rhs_weap_m249_pip","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m249_pip","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m249_pip","","","rhsusf_acc_ACOG2_USMC",{"rhsusf_200rnd_556x45_mixed_box",200},{},"rhsusf_acc_saw_bipod"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_FMJ",15},{},""},{"rhs_uniform_FROG01_wd",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"rhsusf_spc_mg",{{"rhs_mag_an_m8hc",2,1},{"rhs_mag_m67",2,1},{"rhsusf_200rnd_556x45_mixed_box",1,200}}},{"USP_45L_RUCKSACK_GRN",{{"rhsusf_200rnd_556x45_mixed_box",7,200}}},"rhsusf_lwh_helmet_marpatwd_ess","USP_OAKLEY_SI2_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_Marines_2012_AR_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Machine Gunner (Woodland)"; 
		faction = "BS_I_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_12", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_OAKLEY_SI2_BLK","rhsusf_lwh_helmet_marpatwd_ess"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_OAKLEY_SI2_BLK","rhsusf_lwh_helmet_marpatwd_ess"}; 
		weapons[] = {"rhs_weap_m249_pip","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m249_pip","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m249_pip","","","rhsusf_acc_ACOG2_USMC",{"rhsusf_200rnd_556x45_mixed_box",200},{},"rhsusf_acc_saw_bipod"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_FMJ",15},{},""},{"rhs_uniform_FROG01_wd",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"rhsusf_spc_mg",{{"rhs_mag_an_m8hc",2,1},{"rhs_mag_m67",2,1},{"rhsusf_200rnd_556x45_mixed_box",1,200}}},{"USP_45L_RUCKSACK_GRN",{{"rhsusf_200rnd_556x45_mixed_box",7,200}}},"rhsusf_lwh_helmet_marpatwd_ess","USP_OAKLEY_SI2_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_Marines_2012_Rifleman_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Rifleman (Woodland)"; 
		faction = "BS_O_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_15", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","G_Bandanna_beast","rhsusf_lwh_helmet_marpatwd_headset_blk"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","G_Bandanna_beast","rhsusf_lwh_helmet_marpatwd_headset_blk"}; 
		weapons[] = {"rhs_weap_m4a1_mstock","rhsusf_weap_m1911a1"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_mstock","rhsusf_weap_m1911a1"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_mstock","muzzle_snds_M","rhsusf_acc_anpeq15A","rhsusf_acc_ACOG_RMR",{"75Rnd_556x45_Stanag_lxWS",75},{},""},{},{"rhsusf_weap_m1911a1","","","",{"rhsusf_mag_7x45acp_MHP",7},{},""},{"rhs_uniform_FROG01_wd",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"rhsusf_spc_corpsman",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"ACE_wirecutter",1},{"75Rnd_556x45_Stanag_lxWS",3,75}}},{"USP_45L_RUCKSACK_GRN",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"75Rnd_556x45_Stanag_lxWS",21,75}}},"rhsusf_lwh_helmet_marpatwd_headset_blk","G_Bandanna_beast",{},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_Marines_2012_Rifleman_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Rifleman (Woodland)"; 
		faction = "BS_B_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_15", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","G_Bandanna_beast","rhsusf_lwh_helmet_marpatwd_headset_blk"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","G_Bandanna_beast","rhsusf_lwh_helmet_marpatwd_headset_blk"}; 
		weapons[] = {"rhs_weap_m4a1_mstock","rhsusf_weap_m1911a1"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_mstock","rhsusf_weap_m1911a1"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_mstock","muzzle_snds_M","rhsusf_acc_anpeq15A","rhsusf_acc_ACOG_RMR",{"75Rnd_556x45_Stanag_lxWS",75},{},""},{},{"rhsusf_weap_m1911a1","","","",{"rhsusf_mag_7x45acp_MHP",7},{},""},{"rhs_uniform_FROG01_wd",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"rhsusf_spc_corpsman",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"ACE_wirecutter",1},{"75Rnd_556x45_Stanag_lxWS",3,75}}},{"USP_45L_RUCKSACK_GRN",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"75Rnd_556x45_Stanag_lxWS",21,75}}},"rhsusf_lwh_helmet_marpatwd_headset_blk","G_Bandanna_beast",{},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_Marines_2012_Rifleman_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Rifleman (Woodland)"; 
		faction = "BS_I_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_15", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","G_Bandanna_beast","rhsusf_lwh_helmet_marpatwd_headset_blk"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","G_Bandanna_beast","rhsusf_lwh_helmet_marpatwd_headset_blk"}; 
		weapons[] = {"rhs_weap_m4a1_mstock","rhsusf_weap_m1911a1"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_mstock","rhsusf_weap_m1911a1"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_mstock","muzzle_snds_M","rhsusf_acc_anpeq15A","rhsusf_acc_ACOG_RMR",{"75Rnd_556x45_Stanag_lxWS",75},{},""},{},{"rhsusf_weap_m1911a1","","","",{"rhsusf_mag_7x45acp_MHP",7},{},""},{"rhs_uniform_FROG01_wd",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"rhsusf_spc_corpsman",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"ACE_wirecutter",1},{"75Rnd_556x45_Stanag_lxWS",3,75}}},{"USP_45L_RUCKSACK_GRN",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"75Rnd_556x45_Stanag_lxWS",21,75}}},"rhsusf_lwh_helmet_marpatwd_headset_blk","G_Bandanna_beast",{},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_Marines_2012_SNP_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Sniper (Woodland)"; 
		faction = "BS_O_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_07", "Male04ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_BALACLAVA_ADV_SMC1_BLK","rhsusf_lwh_helmet_marpatwd_ess"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_BALACLAVA_ADV_SMC1_BLK","rhsusf_lwh_helmet_marpatwd_ess"}; 
		weapons[] = {"rhs_weap_sr25","rhsusf_weap_m1911a1","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_sr25","rhsusf_weap_m1911a1","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_sr25","rhsusf_acc_SR25S","acc_pointer_IR","rhsusf_acc_M8541_mrds",{"rhsusf_20Rnd_762x51_SR25_mk316_special_Mag",20},{},"Tier1_Harris_Bipod_Black"},{},{"rhsusf_weap_m1911a1","","","",{"rhsusf_mag_7x45acp_MHP",7},{},""},{"rhs_uniform_FROG01_wd",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"rhsusf_spc_marksman",{{"rhsusf_20Rnd_762x51_SR25_mk316_special_Mag",4,20}}},{"B_Kitbag_sgg",{{"rhsusf_20Rnd_762x51_SR25_mk316_special_Mag",16,20}}},"rhsusf_lwh_helmet_marpatwd_ess","USP_BALACLAVA_ADV_SMC1_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_Marines_2012_SNP_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Sniper (Woodland)"; 
		faction = "BS_B_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_07", "Male04ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_BALACLAVA_ADV_SMC1_BLK","rhsusf_lwh_helmet_marpatwd_ess"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_BALACLAVA_ADV_SMC1_BLK","rhsusf_lwh_helmet_marpatwd_ess"}; 
		weapons[] = {"rhs_weap_sr25","rhsusf_weap_m1911a1","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_sr25","rhsusf_weap_m1911a1","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_sr25","rhsusf_acc_SR25S","acc_pointer_IR","rhsusf_acc_M8541_mrds",{"rhsusf_20Rnd_762x51_SR25_mk316_special_Mag",20},{},"Tier1_Harris_Bipod_Black"},{},{"rhsusf_weap_m1911a1","","","",{"rhsusf_mag_7x45acp_MHP",7},{},""},{"rhs_uniform_FROG01_wd",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"rhsusf_spc_marksman",{{"rhsusf_20Rnd_762x51_SR25_mk316_special_Mag",4,20}}},{"B_Kitbag_sgg",{{"rhsusf_20Rnd_762x51_SR25_mk316_special_Mag",16,20}}},"rhsusf_lwh_helmet_marpatwd_ess","USP_BALACLAVA_ADV_SMC1_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_Marines_2012_SNP_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Sniper (Woodland)"; 
		faction = "BS_I_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_07", "Male04ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_BALACLAVA_ADV_SMC1_BLK","rhsusf_lwh_helmet_marpatwd_ess"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_BALACLAVA_ADV_SMC1_BLK","rhsusf_lwh_helmet_marpatwd_ess"}; 
		weapons[] = {"rhs_weap_sr25","rhsusf_weap_m1911a1","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_sr25","rhsusf_weap_m1911a1","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_sr25","rhsusf_acc_SR25S","acc_pointer_IR","rhsusf_acc_M8541_mrds",{"rhsusf_20Rnd_762x51_SR25_mk316_special_Mag",20},{},"Tier1_Harris_Bipod_Black"},{},{"rhsusf_weap_m1911a1","","","",{"rhsusf_mag_7x45acp_MHP",7},{},""},{"rhs_uniform_FROG01_wd",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"rhsusf_spc_marksman",{{"rhsusf_20Rnd_762x51_SR25_mk316_special_Mag",4,20}}},{"B_Kitbag_sgg",{{"rhsusf_20Rnd_762x51_SR25_mk316_special_Mag",16,20}}},"rhsusf_lwh_helmet_marpatwd_ess","USP_BALACLAVA_ADV_SMC1_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_Marines_2012_VAR_0_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 1"; 
		faction = "BS_O_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_22_sa", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS31","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS31","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_headset"}; 
		weapons[] = {"rhs_m4_acog_usmc","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_m4_acog_usmc","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_MC";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_m4_acog_usmc","","rhsusf_acc_anpeq15_bk","rhsusf_acc_ACOG_USMC",{"rhs_mag_30Rnd_556x45_M855_Stanag",30},{},""},{"rhs_weap_m72a7","","","",{"rhs_m72a7_mag",1},{},""},{},{"rhs_uniform_FROG01_wd",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1}}},{},{"USP_45L_RUCKSACK_MC",{}},"rhsusf_lwh_helmet_marpatwd_headset","rhs_googles_black",{"ACE_Vector","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","USP_PVS31"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_Marines_2012_VAR_0_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 1"; 
		faction = "BS_B_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_22_sa", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS31","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS31","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_headset"}; 
		weapons[] = {"rhs_m4_acog_usmc","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_m4_acog_usmc","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_MC";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_m4_acog_usmc","","rhsusf_acc_anpeq15_bk","rhsusf_acc_ACOG_USMC",{"rhs_mag_30Rnd_556x45_M855_Stanag",30},{},""},{"rhs_weap_m72a7","","","",{"rhs_m72a7_mag",1},{},""},{},{"rhs_uniform_FROG01_wd",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1}}},{},{"USP_45L_RUCKSACK_MC",{}},"rhsusf_lwh_helmet_marpatwd_headset","rhs_googles_black",{"ACE_Vector","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","USP_PVS31"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_Marines_2012_VAR_0_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 1"; 
		faction = "BS_I_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_22_sa", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS31","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS31","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_headset"}; 
		weapons[] = {"rhs_m4_acog_usmc","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_m4_acog_usmc","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_MC";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_m4_acog_usmc","","rhsusf_acc_anpeq15_bk","rhsusf_acc_ACOG_USMC",{"rhs_mag_30Rnd_556x45_M855_Stanag",30},{},""},{"rhs_weap_m72a7","","","",{"rhs_m72a7_mag",1},{},""},{},{"rhs_uniform_FROG01_wd",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1}}},{},{"USP_45L_RUCKSACK_MC",{}},"rhsusf_lwh_helmet_marpatwd_headset","rhs_googles_black",{"ACE_Vector","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","USP_PVS31"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_Marines_2012_VAR_1_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 2"; 
		faction = "BS_O_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_21", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_BALACLAVA_ADV2_BLK","rhsusf_lwh_helmet_marpatwd_blk_ess"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_BALACLAVA_ADV2_BLK","rhsusf_lwh_helmet_marpatwd_blk_ess"}; 
		weapons[] = {"rhs_weap_m249_pip","rhs_weap_smaw","rhsusf_weap_m9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_m249_pip","rhs_weap_smaw","rhsusf_weap_m9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_CBR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m249_pip","","","",{"rhsusf_200rnd_556x45_mixed_box",200},{},"rhsusf_acc_saw_bipod"},{"rhs_weap_smaw","","","rhs_weap_optic_smaw",{},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_FMJ",15},{},""},{"rhs_uniform_FROG01_wd",{{"ACE_EarPlugs",2},{"ACE_IR_Strobe_Item",2},{"ACE_SpareBarrel",1,1}}},{"rhsusf_spc_mg",{{"ACE_elasticBandage",10},{"ACE_microDAGR",1},{"ACE_epinephrine",4},{"ACE_morphine",4},{"ACE_tourniquet",4},{"rhs_mag_an_m8hc",4,1},{"rhs_mag_m67",2,1},{"ACE_SpareBarrel",1,1}}},{"USP_REEBOW_3DAP_ACC1_CBR",{{"optic_ERCO_khk_F",1},{"optic_Hamr_lush_lxWS",1},{"rhsusf_acc_eotech_552_wd",1},{"",1,0}}},"rhsusf_lwh_helmet_marpatwd_blk_ess","USP_BALACLAVA_ADV2_BLK",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_Marines_2012_VAR_1_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 2"; 
		faction = "BS_B_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_21", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_BALACLAVA_ADV2_BLK","rhsusf_lwh_helmet_marpatwd_blk_ess"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_BALACLAVA_ADV2_BLK","rhsusf_lwh_helmet_marpatwd_blk_ess"}; 
		weapons[] = {"rhs_weap_m249_pip","rhs_weap_smaw","rhsusf_weap_m9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_m249_pip","rhs_weap_smaw","rhsusf_weap_m9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_CBR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m249_pip","","","",{"rhsusf_200rnd_556x45_mixed_box",200},{},"rhsusf_acc_saw_bipod"},{"rhs_weap_smaw","","","rhs_weap_optic_smaw",{},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_FMJ",15},{},""},{"rhs_uniform_FROG01_wd",{{"ACE_EarPlugs",2},{"ACE_IR_Strobe_Item",2},{"ACE_SpareBarrel",1,1}}},{"rhsusf_spc_mg",{{"ACE_elasticBandage",10},{"ACE_microDAGR",1},{"ACE_epinephrine",4},{"ACE_morphine",4},{"ACE_tourniquet",4},{"rhs_mag_an_m8hc",4,1},{"rhs_mag_m67",2,1},{"ACE_SpareBarrel",1,1}}},{"USP_REEBOW_3DAP_ACC1_CBR",{{"optic_ERCO_khk_F",1},{"optic_Hamr_lush_lxWS",1},{"rhsusf_acc_eotech_552_wd",1},{"",1,0}}},"rhsusf_lwh_helmet_marpatwd_blk_ess","USP_BALACLAVA_ADV2_BLK",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_Marines_2012_VAR_1_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 2"; 
		faction = "BS_I_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_21", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_BALACLAVA_ADV2_BLK","rhsusf_lwh_helmet_marpatwd_blk_ess"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_BALACLAVA_ADV2_BLK","rhsusf_lwh_helmet_marpatwd_blk_ess"}; 
		weapons[] = {"rhs_weap_m249_pip","rhs_weap_smaw","rhsusf_weap_m9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_m249_pip","rhs_weap_smaw","rhsusf_weap_m9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_CBR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m249_pip","","","",{"rhsusf_200rnd_556x45_mixed_box",200},{},"rhsusf_acc_saw_bipod"},{"rhs_weap_smaw","","","rhs_weap_optic_smaw",{},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_FMJ",15},{},""},{"rhs_uniform_FROG01_wd",{{"ACE_EarPlugs",2},{"ACE_IR_Strobe_Item",2},{"ACE_SpareBarrel",1,1}}},{"rhsusf_spc_mg",{{"ACE_elasticBandage",10},{"ACE_microDAGR",1},{"ACE_epinephrine",4},{"ACE_morphine",4},{"ACE_tourniquet",4},{"rhs_mag_an_m8hc",4,1},{"rhs_mag_m67",2,1},{"ACE_SpareBarrel",1,1}}},{"USP_REEBOW_3DAP_ACC1_CBR",{{"optic_ERCO_khk_F",1},{"optic_Hamr_lush_lxWS",1},{"rhsusf_acc_eotech_552_wd",1},{"",1,0}}},"rhsusf_lwh_helmet_marpatwd_blk_ess","USP_BALACLAVA_ADV2_BLK",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_Marines_2012_VAR_2_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 3"; 
		faction = "BS_O_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_04", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_RAID_BD7_BLK3","rhsusf_lwh_helmet_marpatwd"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_RAID_BD7_BLK3","rhsusf_lwh_helmet_marpatwd"}; 
		weapons[] = {"rhs_weap_fim92","rhsusf_bino_leopold_mk4"}; 
		respawnWeapons[] = {"rhs_weap_fim92","rhsusf_bino_leopold_mk4"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{},{"rhs_uniform_FROG01_wd",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1}}},{},{"USP_45L_RUCKSACK",{{"ACE_suture",1},{"",1,0},{"DemoCharge_Remote_Mag",1,1},{"rhs_fim92_mag",1,1}}},"rhsusf_lwh_helmet_marpatwd","USP_RAID_BD7_BLK3",{"rhsusf_bino_leopold_mk4","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_Marines_2012_VAR_2_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 3"; 
		faction = "BS_B_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_04", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_RAID_BD7_BLK3","rhsusf_lwh_helmet_marpatwd"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_RAID_BD7_BLK3","rhsusf_lwh_helmet_marpatwd"}; 
		weapons[] = {"rhs_weap_fim92","rhsusf_bino_leopold_mk4"}; 
		respawnWeapons[] = {"rhs_weap_fim92","rhsusf_bino_leopold_mk4"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{},{"rhs_uniform_FROG01_wd",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1}}},{},{"USP_45L_RUCKSACK",{{"ACE_suture",1},{"",1,0},{"DemoCharge_Remote_Mag",1,1},{"rhs_fim92_mag",1,1}}},"rhsusf_lwh_helmet_marpatwd","USP_RAID_BD7_BLK3",{"rhsusf_bino_leopold_mk4","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_Marines_2012_VAR_2_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 3"; 
		faction = "BS_I_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_04", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_RAID_BD7_BLK3","rhsusf_lwh_helmet_marpatwd"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_RAID_BD7_BLK3","rhsusf_lwh_helmet_marpatwd"}; 
		weapons[] = {"rhs_weap_fim92","rhsusf_bino_leopold_mk4"}; 
		respawnWeapons[] = {"rhs_weap_fim92","rhsusf_bino_leopold_mk4"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{},{"rhs_uniform_FROG01_wd",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1}}},{},{"USP_45L_RUCKSACK",{{"ACE_suture",1},{"",1,0},{"DemoCharge_Remote_Mag",1,1},{"rhs_fim92_mag",1,1}}},"rhsusf_lwh_helmet_marpatwd","USP_RAID_BD7_BLK3",{"rhsusf_bino_leopold_mk4","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_Marines_2012_VAR_3_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 4"; 
		faction = "BS_O_US_Marines_2012"; 
		identityTypes[] = {"AfricanHead_03", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_headset"}; 
		weapons[] = {"rhs_weap_m40a5","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m40a5","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m40a5","","","rhsusf_acc_su230a_mrds",{},{},""},{"rhs_weap_m72a7","","","",{"rhs_m72a7_mag",1},{},""},{},{"rhs_uniform_FROG01_wd",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1}}},{},{"USP_45L_RUCKSACK",{}},"rhsusf_lwh_helmet_marpatwd_headset","rhs_googles_black",{"ACE_Vector","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_Marines_2012_VAR_3_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 4"; 
		faction = "BS_B_US_Marines_2012"; 
		identityTypes[] = {"AfricanHead_03", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_headset"}; 
		weapons[] = {"rhs_weap_m40a5","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m40a5","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m40a5","","","rhsusf_acc_su230a_mrds",{},{},""},{"rhs_weap_m72a7","","","",{"rhs_m72a7_mag",1},{},""},{},{"rhs_uniform_FROG01_wd",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1}}},{},{"USP_45L_RUCKSACK",{}},"rhsusf_lwh_helmet_marpatwd_headset","rhs_googles_black",{"ACE_Vector","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_Marines_2012_VAR_3_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 4"; 
		faction = "BS_I_US_Marines_2012"; 
		identityTypes[] = {"AfricanHead_03", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_headset"}; 
		weapons[] = {"rhs_weap_m40a5","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m40a5","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m40a5","","","rhsusf_acc_su230a_mrds",{},{},""},{"rhs_weap_m72a7","","","",{"rhs_m72a7_mag",1},{},""},{},{"rhs_uniform_FROG01_wd",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1}}},{},{"USP_45L_RUCKSACK",{}},"rhsusf_lwh_helmet_marpatwd_headset","rhs_googles_black",{"ACE_Vector","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_Marines_2012_RTO_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Special 2 (Woodland)"; 
		faction = "BS_O_US_Marines_2012"; 
		identityTypes[] = {"TanoanHead_A3_08", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_ess"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_ess"}; 
		weapons[] = {"rhs_m4_acog_usmc","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_m4_acog_usmc","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_CBR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_m4_acog_usmc","","ACE_DBAL_A3_Red","rhsusf_acc_ACOG_USMC",{"rhs_mag_30Rnd_556x45_M855_Stanag",30},{},"Tier1_Harris_Bipod_Black"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_FROG01_wd",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"rhs_mag_30Rnd_556x45_M855_Stanag",1,30}}},{"rhsusf_spc_iar",{{"ACE_wirecutter",1},{"rhs_mag_30Rnd_556x45_M855_Stanag",14,30}}},{"USP_ZIPON_PACK_CPC_AT_CBR",{{"rhs_mag_30Rnd_556x45_M855_Stanag",5,30}}},"rhsusf_lwh_helmet_marpatwd_ess","rhs_googles_black",{"ACE_Vector","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_Marines_2012_RTO_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Special 2 (Woodland)"; 
		faction = "BS_B_US_Marines_2012"; 
		identityTypes[] = {"TanoanHead_A3_08", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_ess"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_ess"}; 
		weapons[] = {"rhs_m4_acog_usmc","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_m4_acog_usmc","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_CBR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_m4_acog_usmc","","ACE_DBAL_A3_Red","rhsusf_acc_ACOG_USMC",{"rhs_mag_30Rnd_556x45_M855_Stanag",30},{},"Tier1_Harris_Bipod_Black"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_FROG01_wd",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"rhs_mag_30Rnd_556x45_M855_Stanag",1,30}}},{"rhsusf_spc_iar",{{"ACE_wirecutter",1},{"rhs_mag_30Rnd_556x45_M855_Stanag",14,30}}},{"USP_ZIPON_PACK_CPC_AT_CBR",{{"rhs_mag_30Rnd_556x45_M855_Stanag",5,30}}},"rhsusf_lwh_helmet_marpatwd_ess","rhs_googles_black",{"ACE_Vector","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_Marines_2012_RTO_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Special 2 (Woodland)"; 
		faction = "BS_I_US_Marines_2012"; 
		identityTypes[] = {"TanoanHead_A3_08", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_ess"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_ess"}; 
		weapons[] = {"rhs_m4_acog_usmc","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_m4_acog_usmc","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_CBR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_m4_acog_usmc","","ACE_DBAL_A3_Red","rhsusf_acc_ACOG_USMC",{"rhs_mag_30Rnd_556x45_M855_Stanag",30},{},"Tier1_Harris_Bipod_Black"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_FROG01_wd",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"rhs_mag_30Rnd_556x45_M855_Stanag",1,30}}},{"rhsusf_spc_iar",{{"ACE_wirecutter",1},{"rhs_mag_30Rnd_556x45_M855_Stanag",14,30}}},{"USP_ZIPON_PACK_CPC_AT_CBR",{{"rhs_mag_30Rnd_556x45_M855_Stanag",5,30}}},"rhsusf_lwh_helmet_marpatwd_ess","rhs_googles_black",{"ACE_Vector","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_Marines_2012_VAR_4_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 5"; 
		faction = "BS_O_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_09", "Male02ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_headset"}; 
		weapons[] = {"rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_cbr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{"rhs_weap_m72a7","","","",{"rhs_m72a7_mag",1},{},""},{},{"rhs_uniform_FROG01_wd",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1}}},{},{"B_Kitbag_cbr",{}},"rhsusf_lwh_helmet_marpatwd_headset","rhs_googles_black",{"ACE_Vector","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_Marines_2012_VAR_4_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 5"; 
		faction = "BS_B_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_09", "Male02ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_headset"}; 
		weapons[] = {"rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_cbr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{"rhs_weap_m72a7","","","",{"rhs_m72a7_mag",1},{},""},{},{"rhs_uniform_FROG01_wd",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1}}},{},{"B_Kitbag_cbr",{}},"rhsusf_lwh_helmet_marpatwd_headset","rhs_googles_black",{"ACE_Vector","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_Marines_2012_VAR_4_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 5"; 
		faction = "BS_I_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_09", "Male02ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_headset"}; 
		weapons[] = {"rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_cbr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{"rhs_weap_m72a7","","","",{"rhs_m72a7_mag",1},{},""},{},{"rhs_uniform_FROG01_wd",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1}}},{},{"B_Kitbag_cbr",{}},"rhsusf_lwh_helmet_marpatwd_headset","rhs_googles_black",{"ACE_Vector","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_Marines_2012_DIVER_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Special 1 (Woodland)"; 
		faction = "BS_O_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_06", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "U_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","G_B_Diving","rhsusf_lwh_helmet_marpatd_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","G_B_Diving","rhsusf_lwh_helmet_marpatd_headset"}; 
		weapons[] = {"rhs_weap_m4a1_mstock","Laserdesignator_01_khk_F"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_mstock","Laserdesignator_01_khk_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_FieldPack_blk";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_mstock","Tier1_KAC_556_QDC_CQB_Black","","rhsusf_acc_su230a_mrds",{"Tier1_30Rnd_556x45_M856_EMag",30},{},"rhsusf_acc_grip2"},{},{},{"U_B_Wetsuit",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"ACE_wirecutter",1},{"Tier1_30Rnd_556x45_M856_EMag",3,30}}},{"V_RebreatherB",{}},{"B_FieldPack_blk",{{"Tier1_30Rnd_556x45_M856_EMag",17,30}}},"rhsusf_lwh_helmet_marpatd_headset","G_B_Diving",{"Laserdesignator_01_khk_F","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_Marines_2012_DIVER_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Special 1 (Woodland)"; 
		faction = "BS_B_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_06", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "U_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","G_B_Diving","rhsusf_lwh_helmet_marpatd_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","G_B_Diving","rhsusf_lwh_helmet_marpatd_headset"}; 
		weapons[] = {"rhs_weap_m4a1_mstock","Laserdesignator_01_khk_F"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_mstock","Laserdesignator_01_khk_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_FieldPack_blk";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_mstock","Tier1_KAC_556_QDC_CQB_Black","","rhsusf_acc_su230a_mrds",{"Tier1_30Rnd_556x45_M856_EMag",30},{},"rhsusf_acc_grip2"},{},{},{"U_B_Wetsuit",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"ACE_wirecutter",1},{"Tier1_30Rnd_556x45_M856_EMag",3,30}}},{"V_RebreatherB",{}},{"B_FieldPack_blk",{{"Tier1_30Rnd_556x45_M856_EMag",17,30}}},"rhsusf_lwh_helmet_marpatd_headset","G_B_Diving",{"Laserdesignator_01_khk_F","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_Marines_2012_DIVER_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Special 1 (Woodland)"; 
		faction = "BS_I_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_06", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "U_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","G_B_Diving","rhsusf_lwh_helmet_marpatd_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","G_B_Diving","rhsusf_lwh_helmet_marpatd_headset"}; 
		weapons[] = {"rhs_weap_m4a1_mstock","Laserdesignator_01_khk_F"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_mstock","Laserdesignator_01_khk_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_FieldPack_blk";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_mstock","Tier1_KAC_556_QDC_CQB_Black","","rhsusf_acc_su230a_mrds",{"Tier1_30Rnd_556x45_M856_EMag",30},{},"rhsusf_acc_grip2"},{},{},{"U_B_Wetsuit",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"ACE_wirecutter",1},{"Tier1_30Rnd_556x45_M856_EMag",3,30}}},{"V_RebreatherB",{}},{"B_FieldPack_blk",{{"Tier1_30Rnd_556x45_M856_EMag",17,30}}},"rhsusf_lwh_helmet_marpatd_headset","G_B_Diving",{"Laserdesignator_01_khk_F","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_Marines_2012_GL_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Grenadier (Desert)"; 
		faction = "BS_O_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_06", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_d"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","USP_STRAIGHTJACKET_BLK","rhsusf_lwh_helmet_marpatd_ess"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","USP_STRAIGHTJACKET_BLK","rhsusf_lwh_helmet_marpatd_ess"}; 
		weapons[] = {"rhs_weap_m4a1_m203s_d","rhs_weap_M320","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_m203s_d","rhs_weap_M320","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_MCD";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_m203s_d","","rhsusf_acc_anpeq16a","rhsusf_acc_eotech_xps3",{"rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan",30},{},"rhsusf_acc_grip_m203_d"},{},{"rhs_weap_M320","","","",{"rhs_mag_M441_HE",1},{},""},{"rhs_uniform_FROG01_d",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan",1,30}}},{"rhsusf_spc_patchless_radio",{{"rhs_mag_an_m8hc",2,1},{"rhs_mag_m67",2,1},{"1Rnd_HE_Grenade_shell",9,1},{"1Rnd_Smoke_Grenade_shell",5,1},{"rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan",5,30}}},{"USP_45L_RUCKSACK_MCD",{{"1Rnd_HE_Grenade_shell",33,1},{"1Rnd_Smoke_Grenade_shell",19,1},{"rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan",23,30}}},"rhsusf_lwh_helmet_marpatd_ess","USP_STRAIGHTJACKET_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_Marines_2012_GL_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Grenadier (Desert)"; 
		faction = "BS_B_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_06", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_d"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","USP_STRAIGHTJACKET_BLK","rhsusf_lwh_helmet_marpatd_ess"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","USP_STRAIGHTJACKET_BLK","rhsusf_lwh_helmet_marpatd_ess"}; 
		weapons[] = {"rhs_weap_m4a1_m203s_d","rhs_weap_M320","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_m203s_d","rhs_weap_M320","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_MCD";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_m203s_d","","rhsusf_acc_anpeq16a","rhsusf_acc_eotech_xps3",{"rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan",30},{},"rhsusf_acc_grip_m203_d"},{},{"rhs_weap_M320","","","",{"rhs_mag_M441_HE",1},{},""},{"rhs_uniform_FROG01_d",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan",1,30}}},{"rhsusf_spc_patchless_radio",{{"rhs_mag_an_m8hc",2,1},{"rhs_mag_m67",2,1},{"1Rnd_HE_Grenade_shell",9,1},{"1Rnd_Smoke_Grenade_shell",5,1},{"rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan",5,30}}},{"USP_45L_RUCKSACK_MCD",{{"1Rnd_HE_Grenade_shell",33,1},{"1Rnd_Smoke_Grenade_shell",19,1},{"rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan",23,30}}},"rhsusf_lwh_helmet_marpatd_ess","USP_STRAIGHTJACKET_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_Marines_2012_GL_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Grenadier (Desert)"; 
		faction = "BS_I_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_06", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_d"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","USP_STRAIGHTJACKET_BLK","rhsusf_lwh_helmet_marpatd_ess"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","USP_STRAIGHTJACKET_BLK","rhsusf_lwh_helmet_marpatd_ess"}; 
		weapons[] = {"rhs_weap_m4a1_m203s_d","rhs_weap_M320","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_m203s_d","rhs_weap_M320","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_MCD";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_m203s_d","","rhsusf_acc_anpeq16a","rhsusf_acc_eotech_xps3",{"rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan",30},{},"rhsusf_acc_grip_m203_d"},{},{"rhs_weap_M320","","","",{"rhs_mag_M441_HE",1},{},""},{"rhs_uniform_FROG01_d",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan",1,30}}},{"rhsusf_spc_patchless_radio",{{"rhs_mag_an_m8hc",2,1},{"rhs_mag_m67",2,1},{"1Rnd_HE_Grenade_shell",9,1},{"1Rnd_Smoke_Grenade_shell",5,1},{"rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan",5,30}}},{"USP_45L_RUCKSACK_MCD",{{"1Rnd_HE_Grenade_shell",33,1},{"1Rnd_Smoke_Grenade_shell",19,1},{"rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan",23,30}}},"rhsusf_lwh_helmet_marpatd_ess","USP_STRAIGHTJACKET_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_Marines_2012_Medic_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Doctor (Desert)"; 
		faction = "BS_O_US_Marines_2012"; 
		identityTypes[] = {"PersianHead_A3_01", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_d"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15_TAR","USP_BALACLAVA_OAK_BLK","rhsusf_lwh_helmet_marpatd"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15_TAR","USP_BALACLAVA_OAK_BLK","rhsusf_lwh_helmet_marpatd"}; 
		weapons[] = {"rhs_weap_m4a1_d","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_MCD";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d","","","",{"rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan",30},{},""},{"rhs_weap_m72a7","","","",{"rhs_m72a7_mag",1},{},""},{},{"rhs_uniform_FROG01_d",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"ACE_surgicalKit",1}}},{"rhsusf_spc_light",{{"rhs_mag_an_m8hc",2,1},{"rhs_mag_m67",2,1},{"rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan",6,30}}},{"USP_45L_RUCKSACK_MCD",{{"kat_accuvac",1},{"kat_AED",1},{"kat_stethoscope",1},{"ACE_surgicalKit",1},{"ACE_adenosine",2},{"ACE_elasticBandage",15},{"ACE_packingBandage",15},{"ACE_quikclot",15},{"kat_larynx",6},{"ACE_epinephrine",4},{"ACE_morphine",4},{"kat_naloxone",2},{"kat_IO_FAST",7},{"kat_ncdKit",2},{"kat_aatKit",12},{"kat_chestSeal",6},{"ACE_plasmaIV",3},{"ACE_plasmaIV_500",6},{"kat_Pulseoximeter",3},{"ACE_splint",2},{"ACE_suture",12},{"ACE_tourniquet",4},{"rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan",14,30}}},"rhsusf_lwh_helmet_marpatd","USP_BALACLAVA_OAK_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","USP_PVS15_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_Marines_2012_Medic_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Doctor (Desert)"; 
		faction = "BS_B_US_Marines_2012"; 
		identityTypes[] = {"PersianHead_A3_01", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_d"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15_TAR","USP_BALACLAVA_OAK_BLK","rhsusf_lwh_helmet_marpatd"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15_TAR","USP_BALACLAVA_OAK_BLK","rhsusf_lwh_helmet_marpatd"}; 
		weapons[] = {"rhs_weap_m4a1_d","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_MCD";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d","","","",{"rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan",30},{},""},{"rhs_weap_m72a7","","","",{"rhs_m72a7_mag",1},{},""},{},{"rhs_uniform_FROG01_d",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"ACE_surgicalKit",1}}},{"rhsusf_spc_light",{{"rhs_mag_an_m8hc",2,1},{"rhs_mag_m67",2,1},{"rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan",6,30}}},{"USP_45L_RUCKSACK_MCD",{{"kat_accuvac",1},{"kat_AED",1},{"kat_stethoscope",1},{"ACE_surgicalKit",1},{"ACE_adenosine",2},{"ACE_elasticBandage",15},{"ACE_packingBandage",15},{"ACE_quikclot",15},{"kat_larynx",6},{"ACE_epinephrine",4},{"ACE_morphine",4},{"kat_naloxone",2},{"kat_IO_FAST",7},{"kat_ncdKit",2},{"kat_aatKit",12},{"kat_chestSeal",6},{"ACE_plasmaIV",3},{"ACE_plasmaIV_500",6},{"kat_Pulseoximeter",3},{"ACE_splint",2},{"ACE_suture",12},{"ACE_tourniquet",4},{"rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan",14,30}}},"rhsusf_lwh_helmet_marpatd","USP_BALACLAVA_OAK_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","USP_PVS15_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_Marines_2012_Medic_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Doctor (Desert)"; 
		faction = "BS_I_US_Marines_2012"; 
		identityTypes[] = {"PersianHead_A3_01", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_d"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15_TAR","USP_BALACLAVA_OAK_BLK","rhsusf_lwh_helmet_marpatd"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15_TAR","USP_BALACLAVA_OAK_BLK","rhsusf_lwh_helmet_marpatd"}; 
		weapons[] = {"rhs_weap_m4a1_d","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_MCD";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d","","","",{"rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan",30},{},""},{"rhs_weap_m72a7","","","",{"rhs_m72a7_mag",1},{},""},{},{"rhs_uniform_FROG01_d",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"ACE_surgicalKit",1}}},{"rhsusf_spc_light",{{"rhs_mag_an_m8hc",2,1},{"rhs_mag_m67",2,1},{"rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan",6,30}}},{"USP_45L_RUCKSACK_MCD",{{"kat_accuvac",1},{"kat_AED",1},{"kat_stethoscope",1},{"ACE_surgicalKit",1},{"ACE_adenosine",2},{"ACE_elasticBandage",15},{"ACE_packingBandage",15},{"ACE_quikclot",15},{"kat_larynx",6},{"ACE_epinephrine",4},{"ACE_morphine",4},{"kat_naloxone",2},{"kat_IO_FAST",7},{"kat_ncdKit",2},{"kat_aatKit",12},{"kat_chestSeal",6},{"ACE_plasmaIV",3},{"ACE_plasmaIV_500",6},{"kat_Pulseoximeter",3},{"ACE_splint",2},{"ACE_suture",12},{"ACE_tourniquet",4},{"rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan",14,30}}},"rhsusf_lwh_helmet_marpatd","USP_BALACLAVA_OAK_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","USP_PVS15_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_Marines_2012_AR_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Machine Gunner (Desert)"; 
		faction = "BS_O_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_22_sa", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_d"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","USP_PVS15_TAR","USP_OAKLEY_SI2_BLK","rhsusf_lwh_helmet_marpatd_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","USP_PVS15_TAR","USP_OAKLEY_SI2_BLK","rhsusf_lwh_helmet_marpatd_headset"}; 
		weapons[] = {"rhs_weap_m249_pip_L","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m249_pip_L","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_MCD";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m249_pip_L","","","rhsusf_acc_g33_T1",{"rhsusf_200rnd_556x45_mixed_box",200},{},"rhsusf_acc_saw_bipod"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_FMJ",15},{},""},{"rhs_uniform_FROG01_d",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"rhsusf_spc_mg",{{"rhs_mag_an_m8hc",2,1},{"rhs_mag_m67",2,1},{"rhsusf_200rnd_556x45_mixed_box",1,200}}},{"USP_45L_RUCKSACK_MCD",{{"rhsusf_200rnd_556x45_mixed_box",7,200}}},"rhsusf_lwh_helmet_marpatd_headset","USP_OAKLEY_SI2_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_Marines_2012_AR_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Machine Gunner (Desert)"; 
		faction = "BS_B_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_22_sa", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_d"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","USP_PVS15_TAR","USP_OAKLEY_SI2_BLK","rhsusf_lwh_helmet_marpatd_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","USP_PVS15_TAR","USP_OAKLEY_SI2_BLK","rhsusf_lwh_helmet_marpatd_headset"}; 
		weapons[] = {"rhs_weap_m249_pip_L","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m249_pip_L","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_MCD";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m249_pip_L","","","rhsusf_acc_g33_T1",{"rhsusf_200rnd_556x45_mixed_box",200},{},"rhsusf_acc_saw_bipod"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_FMJ",15},{},""},{"rhs_uniform_FROG01_d",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"rhsusf_spc_mg",{{"rhs_mag_an_m8hc",2,1},{"rhs_mag_m67",2,1},{"rhsusf_200rnd_556x45_mixed_box",1,200}}},{"USP_45L_RUCKSACK_MCD",{{"rhsusf_200rnd_556x45_mixed_box",7,200}}},"rhsusf_lwh_helmet_marpatd_headset","USP_OAKLEY_SI2_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_Marines_2012_AR_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Machine Gunner (Desert)"; 
		faction = "BS_I_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_22_sa", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_d"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","USP_PVS15_TAR","USP_OAKLEY_SI2_BLK","rhsusf_lwh_helmet_marpatd_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","USP_PVS15_TAR","USP_OAKLEY_SI2_BLK","rhsusf_lwh_helmet_marpatd_headset"}; 
		weapons[] = {"rhs_weap_m249_pip_L","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m249_pip_L","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_MCD";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m249_pip_L","","","rhsusf_acc_g33_T1",{"rhsusf_200rnd_556x45_mixed_box",200},{},"rhsusf_acc_saw_bipod"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_FMJ",15},{},""},{"rhs_uniform_FROG01_d",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"rhsusf_spc_mg",{{"rhs_mag_an_m8hc",2,1},{"rhs_mag_m67",2,1},{"rhsusf_200rnd_556x45_mixed_box",1,200}}},{"USP_45L_RUCKSACK_MCD",{{"rhsusf_200rnd_556x45_mixed_box",7,200}}},"rhsusf_lwh_helmet_marpatd_headset","USP_OAKLEY_SI2_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_Marines_2012_Rifleman_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Rifleman (Desert)"; 
		faction = "BS_O_US_Marines_2012"; 
		identityTypes[] = {"GreekHead_A3_10_sa", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_d"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_PVS15_WP","G_Bandanna_beast","rhsusf_lwh_helmet_marpatd_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_PVS15_WP","G_Bandanna_beast","rhsusf_lwh_helmet_marpatd_headset"}; 
		weapons[] = {"rhs_weap_m4a1_d","rhsusf_weap_m1911a1"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d","rhsusf_weap_m1911a1"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_MCD";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d","","rhsusf_acc_anpeq16a","rhsusf_acc_su230a_mrds_c",{"rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan",30},{},"rhsusf_acc_grip1"},{},{"rhsusf_weap_m1911a1","","","",{"rhsusf_mag_7x45acp_MHP",7},{},""},{"rhs_uniform_FROG01_d",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan",1,30}}},{"rhsusf_spc_corpsman",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"ACE_wirecutter",1},{"rhs_mag_an_m8hc",2,1},{"rhs_mag_m67",2,1},{"rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan",3,30}}},{"USP_45L_RUCKSACK_MCD",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan",26,30}}},"rhsusf_lwh_helmet_marpatd_headset","G_Bandanna_beast",{},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr","USP_PVS15_WP"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_Marines_2012_Rifleman_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Rifleman (Desert)"; 
		faction = "BS_B_US_Marines_2012"; 
		identityTypes[] = {"GreekHead_A3_10_sa", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_d"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_PVS15_WP","G_Bandanna_beast","rhsusf_lwh_helmet_marpatd_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_PVS15_WP","G_Bandanna_beast","rhsusf_lwh_helmet_marpatd_headset"}; 
		weapons[] = {"rhs_weap_m4a1_d","rhsusf_weap_m1911a1"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d","rhsusf_weap_m1911a1"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_MCD";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d","","rhsusf_acc_anpeq16a","rhsusf_acc_su230a_mrds_c",{"rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan",30},{},"rhsusf_acc_grip1"},{},{"rhsusf_weap_m1911a1","","","",{"rhsusf_mag_7x45acp_MHP",7},{},""},{"rhs_uniform_FROG01_d",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan",1,30}}},{"rhsusf_spc_corpsman",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"ACE_wirecutter",1},{"rhs_mag_an_m8hc",2,1},{"rhs_mag_m67",2,1},{"rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan",3,30}}},{"USP_45L_RUCKSACK_MCD",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan",26,30}}},"rhsusf_lwh_helmet_marpatd_headset","G_Bandanna_beast",{},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr","USP_PVS15_WP"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_Marines_2012_Rifleman_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Rifleman (Desert)"; 
		faction = "BS_I_US_Marines_2012"; 
		identityTypes[] = {"GreekHead_A3_10_sa", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_d"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_PVS15_WP","G_Bandanna_beast","rhsusf_lwh_helmet_marpatd_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_PVS15_WP","G_Bandanna_beast","rhsusf_lwh_helmet_marpatd_headset"}; 
		weapons[] = {"rhs_weap_m4a1_d","rhsusf_weap_m1911a1"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d","rhsusf_weap_m1911a1"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_MCD";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d","","rhsusf_acc_anpeq16a","rhsusf_acc_su230a_mrds_c",{"rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan",30},{},"rhsusf_acc_grip1"},{},{"rhsusf_weap_m1911a1","","","",{"rhsusf_mag_7x45acp_MHP",7},{},""},{"rhs_uniform_FROG01_d",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan",1,30}}},{"rhsusf_spc_corpsman",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"ACE_wirecutter",1},{"rhs_mag_an_m8hc",2,1},{"rhs_mag_m67",2,1},{"rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan",3,30}}},{"USP_45L_RUCKSACK_MCD",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan",26,30}}},"rhsusf_lwh_helmet_marpatd_headset","G_Bandanna_beast",{},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr","USP_PVS15_WP"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_Marines_2012_SNP_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Sniper (Desert)"; 
		faction = "BS_O_US_Marines_2012"; 
		identityTypes[] = {"TanoanHead_A3_04", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_d"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15_TAR","USP_BALACLAVA_ADV2_BLK","rhsusf_lwh_helmet_marpatd_ess"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15_TAR","USP_BALACLAVA_ADV2_BLK","rhsusf_lwh_helmet_marpatd_ess"}; 
		weapons[] = {"rhs_weap_sr25_ec","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_sr25_ec","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_BLK";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_sr25_ec","","acc_pointer_IR","rhsusf_acc_M8541",{"rhsusf_20Rnd_762x51_SR25_m62_Mag",20},{},"rhsusf_acc_harris_bipod"},{},{},{"rhs_uniform_FROG01_d",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"rhsusf_spc_marksman",{{"rhs_mag_an_m8hc",2,1},{"rhs_mag_m67",2,1},{"rhsusf_20Rnd_762x51_SR25_m62_Mag",2,20}}},{"USP_REEBOW_3DAP_BLK",{{"rhsusf_20Rnd_762x51_SR25_m62_Mag",12,20}}},"rhsusf_lwh_helmet_marpatd_ess","USP_BALACLAVA_ADV2_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","USP_PVS15_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_Marines_2012_SNP_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Sniper (Desert)"; 
		faction = "BS_B_US_Marines_2012"; 
		identityTypes[] = {"TanoanHead_A3_04", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_d"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15_TAR","USP_BALACLAVA_ADV2_BLK","rhsusf_lwh_helmet_marpatd_ess"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15_TAR","USP_BALACLAVA_ADV2_BLK","rhsusf_lwh_helmet_marpatd_ess"}; 
		weapons[] = {"rhs_weap_sr25_ec","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_sr25_ec","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_BLK";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_sr25_ec","","acc_pointer_IR","rhsusf_acc_M8541",{"rhsusf_20Rnd_762x51_SR25_m62_Mag",20},{},"rhsusf_acc_harris_bipod"},{},{},{"rhs_uniform_FROG01_d",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"rhsusf_spc_marksman",{{"rhs_mag_an_m8hc",2,1},{"rhs_mag_m67",2,1},{"rhsusf_20Rnd_762x51_SR25_m62_Mag",2,20}}},{"USP_REEBOW_3DAP_BLK",{{"rhsusf_20Rnd_762x51_SR25_m62_Mag",12,20}}},"rhsusf_lwh_helmet_marpatd_ess","USP_BALACLAVA_ADV2_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","USP_PVS15_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_Marines_2012_SNP_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Sniper (Desert)"; 
		faction = "BS_I_US_Marines_2012"; 
		identityTypes[] = {"TanoanHead_A3_04", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_d"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15_TAR","USP_BALACLAVA_ADV2_BLK","rhsusf_lwh_helmet_marpatd_ess"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15_TAR","USP_BALACLAVA_ADV2_BLK","rhsusf_lwh_helmet_marpatd_ess"}; 
		weapons[] = {"rhs_weap_sr25_ec","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_sr25_ec","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_BLK";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_sr25_ec","","acc_pointer_IR","rhsusf_acc_M8541",{"rhsusf_20Rnd_762x51_SR25_m62_Mag",20},{},"rhsusf_acc_harris_bipod"},{},{},{"rhs_uniform_FROG01_d",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"rhsusf_spc_marksman",{{"rhs_mag_an_m8hc",2,1},{"rhs_mag_m67",2,1},{"rhsusf_20Rnd_762x51_SR25_m62_Mag",2,20}}},{"USP_REEBOW_3DAP_BLK",{{"rhsusf_20Rnd_762x51_SR25_m62_Mag",12,20}}},"rhsusf_lwh_helmet_marpatd_ess","USP_BALACLAVA_ADV2_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","USP_PVS15_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_Marines_2012_DIVER_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Special 1 (Desert)"; 
		faction = "BS_O_US_Marines_2012"; 
		identityTypes[] = {"GreekHead_A3_02", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "U_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_PVS15_TAR","G_B_Diving","rhsusf_lwh_helmet_marpatd_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_PVS15_TAR","G_B_Diving","rhsusf_lwh_helmet_marpatd_headset"}; 
		weapons[] = {"rhs_weap_m4a1_d_mstock","Laserdesignator_01_khk_F"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d_mstock","Laserdesignator_01_khk_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_FieldPack_blk";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d_mstock","Tier1_SOCOM556_2_DE","","rhsusf_acc_su230a_mrds_c",{"rhs_mag_30Rnd_556x45_Mk318_SCAR",30},{},""},{},{},{"U_B_Wetsuit",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"ACE_wirecutter",1},{"rhs_mag_30Rnd_556x45_Mk318_SCAR",3,30}}},{"V_RebreatherB",{}},{"B_FieldPack_blk",{{"rhs_mag_30Rnd_556x45_Mk318_SCAR",17,30}}},"rhsusf_lwh_helmet_marpatd_headset","G_B_Diving",{"Laserdesignator_01_khk_F","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr","USP_PVS15_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_Marines_2012_DIVER_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Special 1 (Desert)"; 
		faction = "BS_B_US_Marines_2012"; 
		identityTypes[] = {"GreekHead_A3_02", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "U_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_PVS15_TAR","G_B_Diving","rhsusf_lwh_helmet_marpatd_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_PVS15_TAR","G_B_Diving","rhsusf_lwh_helmet_marpatd_headset"}; 
		weapons[] = {"rhs_weap_m4a1_d_mstock","Laserdesignator_01_khk_F"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d_mstock","Laserdesignator_01_khk_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_FieldPack_blk";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d_mstock","Tier1_SOCOM556_2_DE","","rhsusf_acc_su230a_mrds_c",{"rhs_mag_30Rnd_556x45_Mk318_SCAR",30},{},""},{},{},{"U_B_Wetsuit",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"ACE_wirecutter",1},{"rhs_mag_30Rnd_556x45_Mk318_SCAR",3,30}}},{"V_RebreatherB",{}},{"B_FieldPack_blk",{{"rhs_mag_30Rnd_556x45_Mk318_SCAR",17,30}}},"rhsusf_lwh_helmet_marpatd_headset","G_B_Diving",{"Laserdesignator_01_khk_F","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr","USP_PVS15_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_Marines_2012_DIVER_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Special 1 (Desert)"; 
		faction = "BS_I_US_Marines_2012"; 
		identityTypes[] = {"GreekHead_A3_02", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "U_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_PVS15_TAR","G_B_Diving","rhsusf_lwh_helmet_marpatd_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_PVS15_TAR","G_B_Diving","rhsusf_lwh_helmet_marpatd_headset"}; 
		weapons[] = {"rhs_weap_m4a1_d_mstock","Laserdesignator_01_khk_F"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d_mstock","Laserdesignator_01_khk_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_FieldPack_blk";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d_mstock","Tier1_SOCOM556_2_DE","","rhsusf_acc_su230a_mrds_c",{"rhs_mag_30Rnd_556x45_Mk318_SCAR",30},{},""},{},{},{"U_B_Wetsuit",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"ACE_wirecutter",1},{"rhs_mag_30Rnd_556x45_Mk318_SCAR",3,30}}},{"V_RebreatherB",{}},{"B_FieldPack_blk",{{"rhs_mag_30Rnd_556x45_Mk318_SCAR",17,30}}},"rhsusf_lwh_helmet_marpatd_headset","G_B_Diving",{"Laserdesignator_01_khk_F","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr","USP_PVS15_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_Marines_2012_VAR_5_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 6"; 
		faction = "BS_O_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_12", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_d"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS31","USP_RAID_BD7_BLK3","rhsusf_lwh_helmet_marpatd_ess"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS31","USP_RAID_BD7_BLK3","rhsusf_lwh_helmet_marpatd_ess"}; 
		weapons[] = {"rhs_weap_mk17_LB","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_mk17_LB","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Carryall_blk";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_mk17_LB","suppressor_h_lxWS","rhsusf_acc_anpeq16a_top","rhsusf_acc_g33_xps3",{"rhs_mag_20Rnd_SCAR_762x51_m80_ball",20},{},"rhsusf_acc_kac_grip"},{"rhs_weap_m72a7","","","",{"rhs_m72a7_mag",1},{},""},{},{"rhs_uniform_FROG01_d",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1}}},{"rhsusf_spc_patchless",{{"ACE_wirecutter",1},{"ACE_microDAGR",1},{"rhs_mag_an_m8hc",4,1},{"rhs_mag_m67",4,1}}},{"B_Carryall_blk",{}},"rhsusf_lwh_helmet_marpatd_ess","USP_RAID_BD7_BLK3",{"ACE_Vector","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","USP_PVS31"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_Marines_2012_VAR_5_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 6"; 
		faction = "BS_B_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_12", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_d"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS31","USP_RAID_BD7_BLK3","rhsusf_lwh_helmet_marpatd_ess"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS31","USP_RAID_BD7_BLK3","rhsusf_lwh_helmet_marpatd_ess"}; 
		weapons[] = {"rhs_weap_mk17_LB","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_mk17_LB","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Carryall_blk";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_mk17_LB","suppressor_h_lxWS","rhsusf_acc_anpeq16a_top","rhsusf_acc_g33_xps3",{"rhs_mag_20Rnd_SCAR_762x51_m80_ball",20},{},"rhsusf_acc_kac_grip"},{"rhs_weap_m72a7","","","",{"rhs_m72a7_mag",1},{},""},{},{"rhs_uniform_FROG01_d",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1}}},{"rhsusf_spc_patchless",{{"ACE_wirecutter",1},{"ACE_microDAGR",1},{"rhs_mag_an_m8hc",4,1},{"rhs_mag_m67",4,1}}},{"B_Carryall_blk",{}},"rhsusf_lwh_helmet_marpatd_ess","USP_RAID_BD7_BLK3",{"ACE_Vector","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","USP_PVS31"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_Marines_2012_VAR_5_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 6"; 
		faction = "BS_I_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_12", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_d"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS31","USP_RAID_BD7_BLK3","rhsusf_lwh_helmet_marpatd_ess"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS31","USP_RAID_BD7_BLK3","rhsusf_lwh_helmet_marpatd_ess"}; 
		weapons[] = {"rhs_weap_mk17_LB","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_mk17_LB","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Carryall_blk";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_mk17_LB","suppressor_h_lxWS","rhsusf_acc_anpeq16a_top","rhsusf_acc_g33_xps3",{"rhs_mag_20Rnd_SCAR_762x51_m80_ball",20},{},"rhsusf_acc_kac_grip"},{"rhs_weap_m72a7","","","",{"rhs_m72a7_mag",1},{},""},{},{"rhs_uniform_FROG01_d",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1}}},{"rhsusf_spc_patchless",{{"ACE_wirecutter",1},{"ACE_microDAGR",1},{"rhs_mag_an_m8hc",4,1},{"rhs_mag_m67",4,1}}},{"B_Carryall_blk",{}},"rhsusf_lwh_helmet_marpatd_ess","USP_RAID_BD7_BLK3",{"ACE_Vector","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","USP_PVS31"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_Marines_2012_VAR_6_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 7"; 
		faction = "BS_O_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_06", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_d"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_BALACLAVA_ADV2_BLK","rhsusf_lwh_helmet_marpatd_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_BALACLAVA_ADV2_BLK","rhsusf_lwh_helmet_marpatd_headset"}; 
		weapons[] = {"rhs_weap_m249_light_L","rhs_weap_smaw","rhsusf_weap_m9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_m249_light_L","rhs_weap_smaw","rhsusf_weap_m9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_CBR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m249_light_L","","","rhsusf_acc_su230a_mrds_c",{"rhsusf_200rnd_556x45_mixed_box",200},{},"rhsusf_acc_saw_bipod"},{"rhs_weap_smaw","","","rhs_weap_optic_smaw",{},{"rhs_mag_smaw_SR",5},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_FMJ",15},{},""},{"rhs_uniform_FROG01_d",{{"ACE_EarPlugs",2},{"ACE_IR_Strobe_Item",2},{"ACE_SpareBarrel",1,1}}},{"rhsusf_spc_mg",{{"ACE_elasticBandage",10},{"ACE_microDAGR",1},{"ACE_epinephrine",4},{"ACE_morphine",4},{"ACE_tourniquet",4},{"rhs_mag_an_m8hc",4,1},{"rhs_mag_m67",2,1},{"ACE_SpareBarrel",1,1}}},{"USP_REEBOW_3DAP_ACC1_CBR",{{"rhs_weap_optic_smaw",1},{"rhsusf_acc_su230a_mrds",1},{"rhsusf_acc_su230a_mrds_c",1},{"rhsusf_acc_ACOG_RMR",1},{"",1,0}}},"rhsusf_lwh_helmet_marpatd_headset","USP_BALACLAVA_ADV2_BLK",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_Marines_2012_VAR_6_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 7"; 
		faction = "BS_B_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_06", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_d"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_BALACLAVA_ADV2_BLK","rhsusf_lwh_helmet_marpatd_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_BALACLAVA_ADV2_BLK","rhsusf_lwh_helmet_marpatd_headset"}; 
		weapons[] = {"rhs_weap_m249_light_L","rhs_weap_smaw","rhsusf_weap_m9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_m249_light_L","rhs_weap_smaw","rhsusf_weap_m9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_CBR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m249_light_L","","","rhsusf_acc_su230a_mrds_c",{"rhsusf_200rnd_556x45_mixed_box",200},{},"rhsusf_acc_saw_bipod"},{"rhs_weap_smaw","","","rhs_weap_optic_smaw",{},{"rhs_mag_smaw_SR",5},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_FMJ",15},{},""},{"rhs_uniform_FROG01_d",{{"ACE_EarPlugs",2},{"ACE_IR_Strobe_Item",2},{"ACE_SpareBarrel",1,1}}},{"rhsusf_spc_mg",{{"ACE_elasticBandage",10},{"ACE_microDAGR",1},{"ACE_epinephrine",4},{"ACE_morphine",4},{"ACE_tourniquet",4},{"rhs_mag_an_m8hc",4,1},{"rhs_mag_m67",2,1},{"ACE_SpareBarrel",1,1}}},{"USP_REEBOW_3DAP_ACC1_CBR",{{"rhs_weap_optic_smaw",1},{"rhsusf_acc_su230a_mrds",1},{"rhsusf_acc_su230a_mrds_c",1},{"rhsusf_acc_ACOG_RMR",1},{"",1,0}}},"rhsusf_lwh_helmet_marpatd_headset","USP_BALACLAVA_ADV2_BLK",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_Marines_2012_VAR_6_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 7"; 
		faction = "BS_I_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_06", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_d"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_BALACLAVA_ADV2_BLK","rhsusf_lwh_helmet_marpatd_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_BALACLAVA_ADV2_BLK","rhsusf_lwh_helmet_marpatd_headset"}; 
		weapons[] = {"rhs_weap_m249_light_L","rhs_weap_smaw","rhsusf_weap_m9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_m249_light_L","rhs_weap_smaw","rhsusf_weap_m9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_CBR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m249_light_L","","","rhsusf_acc_su230a_mrds_c",{"rhsusf_200rnd_556x45_mixed_box",200},{},"rhsusf_acc_saw_bipod"},{"rhs_weap_smaw","","","rhs_weap_optic_smaw",{},{"rhs_mag_smaw_SR",5},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_FMJ",15},{},""},{"rhs_uniform_FROG01_d",{{"ACE_EarPlugs",2},{"ACE_IR_Strobe_Item",2},{"ACE_SpareBarrel",1,1}}},{"rhsusf_spc_mg",{{"ACE_elasticBandage",10},{"ACE_microDAGR",1},{"ACE_epinephrine",4},{"ACE_morphine",4},{"ACE_tourniquet",4},{"rhs_mag_an_m8hc",4,1},{"rhs_mag_m67",2,1},{"ACE_SpareBarrel",1,1}}},{"USP_REEBOW_3DAP_ACC1_CBR",{{"rhs_weap_optic_smaw",1},{"rhsusf_acc_su230a_mrds",1},{"rhsusf_acc_su230a_mrds_c",1},{"rhsusf_acc_ACOG_RMR",1},{"",1,0}}},"rhsusf_lwh_helmet_marpatd_headset","USP_BALACLAVA_ADV2_BLK",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_Marines_2012_VAR_7_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 8"; 
		faction = "BS_O_US_Marines_2012"; 
		identityTypes[] = {"PersianHead_A3_01", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_d"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_FORETREX","rhsusf_lwh_helmet_marpatd"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_FORETREX","rhsusf_lwh_helmet_marpatd"}; 
		weapons[] = {"rhs_weap_m16a4_imod","rhs_weap_fim92","rhsusf_bino_leopold_mk4"}; 
		respawnWeapons[] = {"rhs_weap_m16a4_imod","rhs_weap_fim92","rhsusf_bino_leopold_mk4"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m16a4_imod","","","optic_tws",{"hlc_30rnd_556x45_EPR",30},{},""},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{},{"rhs_uniform_FROG01_d",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1}}},{"rhsusf_spc_teamleader",{{"ACE_wirecutter",1},{"ACE_microDAGR",1},{"rhs_mag_an_m8hc",4,1},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",4,1}}},{"USP_45L_RUCKSACK",{{"ACE_suture",1},{"DemoCharge_Remote_Mag",1,1},{"rhs_fim92_mag",1,1}}},"rhsusf_lwh_helmet_marpatd","USP_FORETREX",{"rhsusf_bino_leopold_mk4","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_Marines_2012_VAR_7_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 8"; 
		faction = "BS_B_US_Marines_2012"; 
		identityTypes[] = {"PersianHead_A3_01", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_d"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_FORETREX","rhsusf_lwh_helmet_marpatd"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_FORETREX","rhsusf_lwh_helmet_marpatd"}; 
		weapons[] = {"rhs_weap_m16a4_imod","rhs_weap_fim92","rhsusf_bino_leopold_mk4"}; 
		respawnWeapons[] = {"rhs_weap_m16a4_imod","rhs_weap_fim92","rhsusf_bino_leopold_mk4"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m16a4_imod","","","optic_tws",{"hlc_30rnd_556x45_EPR",30},{},""},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{},{"rhs_uniform_FROG01_d",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1}}},{"rhsusf_spc_teamleader",{{"ACE_wirecutter",1},{"ACE_microDAGR",1},{"rhs_mag_an_m8hc",4,1},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",4,1}}},{"USP_45L_RUCKSACK",{{"ACE_suture",1},{"DemoCharge_Remote_Mag",1,1},{"rhs_fim92_mag",1,1}}},"rhsusf_lwh_helmet_marpatd","USP_FORETREX",{"rhsusf_bino_leopold_mk4","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_Marines_2012_VAR_7_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 8"; 
		faction = "BS_I_US_Marines_2012"; 
		identityTypes[] = {"PersianHead_A3_01", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_d"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_FORETREX","rhsusf_lwh_helmet_marpatd"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_FORETREX","rhsusf_lwh_helmet_marpatd"}; 
		weapons[] = {"rhs_weap_m16a4_imod","rhs_weap_fim92","rhsusf_bino_leopold_mk4"}; 
		respawnWeapons[] = {"rhs_weap_m16a4_imod","rhs_weap_fim92","rhsusf_bino_leopold_mk4"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m16a4_imod","","","optic_tws",{"hlc_30rnd_556x45_EPR",30},{},""},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{},{"rhs_uniform_FROG01_d",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1}}},{"rhsusf_spc_teamleader",{{"ACE_wirecutter",1},{"ACE_microDAGR",1},{"rhs_mag_an_m8hc",4,1},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",4,1}}},{"USP_45L_RUCKSACK",{{"ACE_suture",1},{"DemoCharge_Remote_Mag",1,1},{"rhs_fim92_mag",1,1}}},"rhsusf_lwh_helmet_marpatd","USP_FORETREX",{"rhsusf_bino_leopold_mk4","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_Marines_2012_VAR_8_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 9"; 
		faction = "BS_O_US_Marines_2012"; 
		identityTypes[] = {"GreekHead_A3_10_a", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_d"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_STRAIGHTJACKET_BJM13_BLK","rhsusf_lwh_helmet_marpatd_ess"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_STRAIGHTJACKET_BJM13_BLK","rhsusf_lwh_helmet_marpatd_ess"}; 
		weapons[] = {"rhs_weap_m40a5_d","rhs_weap_m72a7","Laserdesignator"}; 
		respawnWeapons[] = {"rhs_weap_m40a5_d","rhs_weap_m72a7","Laserdesignator"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_mcamo";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m40a5_d","","","rhsusf_acc_nxs_3515x50f1_h58_sun",{"rhsusf_5Rnd_762x51_AICS_m118_special_Mag",5},{},"rhsusf_acc_harris_swivel"},{"rhs_weap_m72a7","","","",{"rhs_m72a7_mag",1},{},""},{},{"rhs_uniform_FROG01_d",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1}}},{"rhsusf_spc_marksman",{{"ACE_wirecutter",1},{"ACE_microDAGR",1},{"rhs_mag_an_m8hc",4,1},{"rhs_mag_m67",1,1}}},{"B_Kitbag_mcamo",{}},"rhsusf_lwh_helmet_marpatd_ess","USP_STRAIGHTJACKET_BJM13_BLK",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_Marines_2012_VAR_8_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 9"; 
		faction = "BS_B_US_Marines_2012"; 
		identityTypes[] = {"GreekHead_A3_10_a", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_d"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_STRAIGHTJACKET_BJM13_BLK","rhsusf_lwh_helmet_marpatd_ess"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_STRAIGHTJACKET_BJM13_BLK","rhsusf_lwh_helmet_marpatd_ess"}; 
		weapons[] = {"rhs_weap_m40a5_d","rhs_weap_m72a7","Laserdesignator"}; 
		respawnWeapons[] = {"rhs_weap_m40a5_d","rhs_weap_m72a7","Laserdesignator"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_mcamo";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m40a5_d","","","rhsusf_acc_nxs_3515x50f1_h58_sun",{"rhsusf_5Rnd_762x51_AICS_m118_special_Mag",5},{},"rhsusf_acc_harris_swivel"},{"rhs_weap_m72a7","","","",{"rhs_m72a7_mag",1},{},""},{},{"rhs_uniform_FROG01_d",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1}}},{"rhsusf_spc_marksman",{{"ACE_wirecutter",1},{"ACE_microDAGR",1},{"rhs_mag_an_m8hc",4,1},{"rhs_mag_m67",1,1}}},{"B_Kitbag_mcamo",{}},"rhsusf_lwh_helmet_marpatd_ess","USP_STRAIGHTJACKET_BJM13_BLK",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_Marines_2012_VAR_8_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 9"; 
		faction = "BS_I_US_Marines_2012"; 
		identityTypes[] = {"GreekHead_A3_10_a", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_d"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_STRAIGHTJACKET_BJM13_BLK","rhsusf_lwh_helmet_marpatd_ess"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_STRAIGHTJACKET_BJM13_BLK","rhsusf_lwh_helmet_marpatd_ess"}; 
		weapons[] = {"rhs_weap_m40a5_d","rhs_weap_m72a7","Laserdesignator"}; 
		respawnWeapons[] = {"rhs_weap_m40a5_d","rhs_weap_m72a7","Laserdesignator"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_mcamo";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m40a5_d","","","rhsusf_acc_nxs_3515x50f1_h58_sun",{"rhsusf_5Rnd_762x51_AICS_m118_special_Mag",5},{},"rhsusf_acc_harris_swivel"},{"rhs_weap_m72a7","","","",{"rhs_m72a7_mag",1},{},""},{},{"rhs_uniform_FROG01_d",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1}}},{"rhsusf_spc_marksman",{{"ACE_wirecutter",1},{"ACE_microDAGR",1},{"rhs_mag_an_m8hc",4,1},{"rhs_mag_m67",1,1}}},{"B_Kitbag_mcamo",{}},"rhsusf_lwh_helmet_marpatd_ess","USP_STRAIGHTJACKET_BJM13_BLK",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_Marines_2012_RTO_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Special 2 (Desert)"; 
		faction = "BS_O_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_11", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_d"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_PVS15","rhs_googles_black","rhsusf_lwh_helmet_marpatd"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_PVS15","rhs_googles_black","rhsusf_lwh_helmet_marpatd"}; 
		weapons[] = {"rhs_weap_m4a1_d","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_SM_CBR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d","Tier1_SOCOM556_2_Mini_DE","","",{"rhs_mag_30Rnd_556x45_M855A1_EPM_Pull",30},{},""},{},{},{"rhs_uniform_FROG01_d",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"rhs_mag_30Rnd_556x45_M855A1_EPM_Pull",1,30}}},{"rhsusf_spc_light",{{"ACE_wirecutter",1},{"rhs_mag_an_m8hc",2,1},{"rhs_mag_m67",2,1},{"rhs_mag_30Rnd_556x45_M855A1_EPM_Pull",4,30}}},{"USP_ZIPON_PACK_CPC_AT_SM_CBR",{{"rhs_mag_30Rnd_556x45_M855A1_EPM_Pull",15,30}}},"rhsusf_lwh_helmet_marpatd","rhs_googles_black",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_Marines_2012_RTO_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Special 2 (Desert)"; 
		faction = "BS_B_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_11", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_d"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_PVS15","rhs_googles_black","rhsusf_lwh_helmet_marpatd"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_PVS15","rhs_googles_black","rhsusf_lwh_helmet_marpatd"}; 
		weapons[] = {"rhs_weap_m4a1_d","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_SM_CBR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d","Tier1_SOCOM556_2_Mini_DE","","",{"rhs_mag_30Rnd_556x45_M855A1_EPM_Pull",30},{},""},{},{},{"rhs_uniform_FROG01_d",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"rhs_mag_30Rnd_556x45_M855A1_EPM_Pull",1,30}}},{"rhsusf_spc_light",{{"ACE_wirecutter",1},{"rhs_mag_an_m8hc",2,1},{"rhs_mag_m67",2,1},{"rhs_mag_30Rnd_556x45_M855A1_EPM_Pull",4,30}}},{"USP_ZIPON_PACK_CPC_AT_SM_CBR",{{"rhs_mag_30Rnd_556x45_M855A1_EPM_Pull",15,30}}},"rhsusf_lwh_helmet_marpatd","rhs_googles_black",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_Marines_2012_RTO_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Special 2 (Desert)"; 
		faction = "BS_I_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_11", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_d"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_PVS15","rhs_googles_black","rhsusf_lwh_helmet_marpatd"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_PVS15","rhs_googles_black","rhsusf_lwh_helmet_marpatd"}; 
		weapons[] = {"rhs_weap_m4a1_d","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_SM_CBR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d","Tier1_SOCOM556_2_Mini_DE","","",{"rhs_mag_30Rnd_556x45_M855A1_EPM_Pull",30},{},""},{},{},{"rhs_uniform_FROG01_d",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"rhs_mag_30Rnd_556x45_M855A1_EPM_Pull",1,30}}},{"rhsusf_spc_light",{{"ACE_wirecutter",1},{"rhs_mag_an_m8hc",2,1},{"rhs_mag_m67",2,1},{"rhs_mag_30Rnd_556x45_M855A1_EPM_Pull",4,30}}},{"USP_ZIPON_PACK_CPC_AT_SM_CBR",{{"rhs_mag_30Rnd_556x45_M855A1_EPM_Pull",15,30}}},"rhsusf_lwh_helmet_marpatd","rhs_googles_black",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_Marines_2012_VAR_9_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 10"; 
		faction = "BS_O_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_16", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_d"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_OAKLEY_SI2_BLK","rhsusf_lwh_helmet_marpatd"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_OAKLEY_SI2_BLK","rhsusf_lwh_helmet_marpatd"}; 
		weapons[] = {"rhs_weap_m4a1_d","rhs_weap_M136","Binocular"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d","rhs_weap_M136","Binocular"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d","Tier1_SandmanS_Desert","Tier1_Mk18_LA5_M603V_FL","optic_tws_mg",{"rhs_mag_30Rnd_556x45_Mk318_SCAR",30},{},""},{"rhs_weap_M136","","","",{},{},""},{},{"rhs_uniform_FROG01_d",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1}}},{"rhsusf_spc_teamleader",{{"ACE_wirecutter",1},{"ACE_microDAGR",1},{"rhs_mag_an_m8hc",4,1},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",4,1}}},{"USP_45L_RUCKSACK",{{"ACE_suture",1},{"DemoCharge_Remote_Mag",1,1}}},"rhsusf_lwh_helmet_marpatd","USP_OAKLEY_SI2_BLK",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_Marines_2012_VAR_9_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 10"; 
		faction = "BS_B_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_16", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_d"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_OAKLEY_SI2_BLK","rhsusf_lwh_helmet_marpatd"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_OAKLEY_SI2_BLK","rhsusf_lwh_helmet_marpatd"}; 
		weapons[] = {"rhs_weap_m4a1_d","rhs_weap_M136","Binocular"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d","rhs_weap_M136","Binocular"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d","Tier1_SandmanS_Desert","Tier1_Mk18_LA5_M603V_FL","optic_tws_mg",{"rhs_mag_30Rnd_556x45_Mk318_SCAR",30},{},""},{"rhs_weap_M136","","","",{},{},""},{},{"rhs_uniform_FROG01_d",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1}}},{"rhsusf_spc_teamleader",{{"ACE_wirecutter",1},{"ACE_microDAGR",1},{"rhs_mag_an_m8hc",4,1},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",4,1}}},{"USP_45L_RUCKSACK",{{"ACE_suture",1},{"DemoCharge_Remote_Mag",1,1}}},"rhsusf_lwh_helmet_marpatd","USP_OAKLEY_SI2_BLK",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_Marines_2012_VAR_9_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 10"; 
		faction = "BS_I_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_16", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_d"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_OAKLEY_SI2_BLK","rhsusf_lwh_helmet_marpatd"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_OAKLEY_SI2_BLK","rhsusf_lwh_helmet_marpatd"}; 
		weapons[] = {"rhs_weap_m4a1_d","rhs_weap_M136","Binocular"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d","rhs_weap_M136","Binocular"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d","Tier1_SandmanS_Desert","Tier1_Mk18_LA5_M603V_FL","optic_tws_mg",{"rhs_mag_30Rnd_556x45_Mk318_SCAR",30},{},""},{"rhs_weap_M136","","","",{},{},""},{},{"rhs_uniform_FROG01_d",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1}}},{"rhsusf_spc_teamleader",{{"ACE_wirecutter",1},{"ACE_microDAGR",1},{"rhs_mag_an_m8hc",4,1},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",4,1}}},{"USP_45L_RUCKSACK",{{"ACE_suture",1},{"DemoCharge_Remote_Mag",1,1}}},"rhsusf_lwh_helmet_marpatd","USP_OAKLEY_SI2_BLK",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_Marines_2012_VAR_10_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 11"; 
		faction = "BS_O_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_21", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_d"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_OAKLEY_SI2_BLK","rhsusf_lwh_helmet_marpatd"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_OAKLEY_SI2_BLK","rhsusf_lwh_helmet_marpatd"}; 
		weapons[] = {"Binocular"}; 
		respawnWeapons[] = {"Binocular"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_M252_Bipod_Bag";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{},{"rhs_uniform_FROG01_d",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1}}},{"rhsusf_spc_teamleader",{{"ACE_wirecutter",1},{"ACE_microDAGR",1},{"rhs_mag_an_m8hc",4,1},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",4,1}}},{"rhs_M252_Bipod_Bag",{{"ACE_suture",1}}},"rhsusf_lwh_helmet_marpatd","USP_OAKLEY_SI2_BLK",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_Marines_2012_VAR_10_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 11"; 
		faction = "BS_B_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_21", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_d"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_OAKLEY_SI2_BLK","rhsusf_lwh_helmet_marpatd"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_OAKLEY_SI2_BLK","rhsusf_lwh_helmet_marpatd"}; 
		weapons[] = {"Binocular"}; 
		respawnWeapons[] = {"Binocular"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_M252_Bipod_Bag";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{},{"rhs_uniform_FROG01_d",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1}}},{"rhsusf_spc_teamleader",{{"ACE_wirecutter",1},{"ACE_microDAGR",1},{"rhs_mag_an_m8hc",4,1},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",4,1}}},{"rhs_M252_Bipod_Bag",{{"ACE_suture",1}}},"rhsusf_lwh_helmet_marpatd","USP_OAKLEY_SI2_BLK",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_Marines_2012_VAR_10_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 11"; 
		faction = "BS_I_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_21", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_d"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_OAKLEY_SI2_BLK","rhsusf_lwh_helmet_marpatd"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_OAKLEY_SI2_BLK","rhsusf_lwh_helmet_marpatd"}; 
		weapons[] = {"Binocular"}; 
		respawnWeapons[] = {"Binocular"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_M252_Bipod_Bag";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{},{"rhs_uniform_FROG01_d",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1}}},{"rhsusf_spc_teamleader",{{"ACE_wirecutter",1},{"ACE_microDAGR",1},{"rhs_mag_an_m8hc",4,1},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",4,1}}},{"rhs_M252_Bipod_Bag",{{"ACE_suture",1}}},"rhsusf_lwh_helmet_marpatd","USP_OAKLEY_SI2_BLK",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_Marines_2012_VAR_11_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 12"; 
		faction = "BS_O_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_18", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_d"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_OAKLEY_SI2_BLK","rhsusf_lwh_helmet_marpatd"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_OAKLEY_SI2_BLK","rhsusf_lwh_helmet_marpatd"}; 
		weapons[] = {"Binocular"}; 
		respawnWeapons[] = {"Binocular"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_M252_Gun_Bag";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{},{"rhs_uniform_FROG01_d",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1}}},{"rhsusf_spc_teamleader",{{"ACE_wirecutter",1},{"ACE_microDAGR",1},{"rhs_mag_an_m8hc",4,1},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",4,1}}},{"rhs_M252_Gun_Bag",{{"ACE_suture",1}}},"rhsusf_lwh_helmet_marpatd","USP_OAKLEY_SI2_BLK",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_Marines_2012_VAR_11_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 12"; 
		faction = "BS_B_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_18", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_d"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_OAKLEY_SI2_BLK","rhsusf_lwh_helmet_marpatd"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_OAKLEY_SI2_BLK","rhsusf_lwh_helmet_marpatd"}; 
		weapons[] = {"Binocular"}; 
		respawnWeapons[] = {"Binocular"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_M252_Gun_Bag";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{},{"rhs_uniform_FROG01_d",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1}}},{"rhsusf_spc_teamleader",{{"ACE_wirecutter",1},{"ACE_microDAGR",1},{"rhs_mag_an_m8hc",4,1},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",4,1}}},{"rhs_M252_Gun_Bag",{{"ACE_suture",1}}},"rhsusf_lwh_helmet_marpatd","USP_OAKLEY_SI2_BLK",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_Marines_2012_VAR_11_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 12"; 
		faction = "BS_I_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_18", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_d"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_OAKLEY_SI2_BLK","rhsusf_lwh_helmet_marpatd"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_OAKLEY_SI2_BLK","rhsusf_lwh_helmet_marpatd"}; 
		weapons[] = {"Binocular"}; 
		respawnWeapons[] = {"Binocular"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_M252_Gun_Bag";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{},{"rhs_uniform_FROG01_d",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1}}},{"rhsusf_spc_teamleader",{{"ACE_wirecutter",1},{"ACE_microDAGR",1},{"rhs_mag_an_m8hc",4,1},{"rhs_mag_m67",4,1},{"rhs_mag_mk84",4,1}}},{"rhs_M252_Gun_Bag",{{"ACE_suture",1}}},"rhsusf_lwh_helmet_marpatd","USP_OAKLEY_SI2_BLK",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_Marines_2012_GL_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Grenadier (Winter)"; 
		faction = "BS_O_US_Marines_2012"; 
		identityTypes[] = {"PersianHead_A3_04_l", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","rhs_googles_clear","rhsusf_lwh_helmet_marpatwd_ess"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","rhs_googles_clear","rhsusf_lwh_helmet_marpatwd_ess"}; 
		weapons[] = {"rhs_weap_m4a1_carryhandle_m203S","rhs_weap_M320","rhsusf_bino_m24"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_carryhandle_m203S","rhs_weap_M320","rhsusf_bino_m24"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_carryhandle_m203S","","ACE_acc_pointer_green","rhsusf_acc_su230a_mrds",{"75Rnd_556x45_Stanag_lxWS",75},{},""},{},{"rhs_weap_M320","","","",{"rhs_mag_M441_HE",1},{},""},{"rhs_uniform_FROG01_wd",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"rhsusf_spc_teamleader",{{"1Rnd_HE_Grenade_shell",12,1},{"1Rnd_Smoke_Grenade_shell",7,1},{"75Rnd_556x45_Stanag_lxWS",4,75}}},{"USP_45L_RUCKSACK_GRN",{{"1Rnd_HE_Grenade_shell",33,1},{"1Rnd_Smoke_Grenade_shell",19,1},{"75Rnd_556x45_Stanag_lxWS",12,75}}},"rhsusf_lwh_helmet_marpatwd_ess","rhs_googles_clear",{"rhsusf_bino_m24","","","",{},{},""},{"ItemMap","","TFAR_anprc152","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_Marines_2012_GL_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Grenadier (Winter)"; 
		faction = "BS_B_US_Marines_2012"; 
		identityTypes[] = {"PersianHead_A3_04_l", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","rhs_googles_clear","rhsusf_lwh_helmet_marpatwd_ess"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","rhs_googles_clear","rhsusf_lwh_helmet_marpatwd_ess"}; 
		weapons[] = {"rhs_weap_m4a1_carryhandle_m203S","rhs_weap_M320","rhsusf_bino_m24"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_carryhandle_m203S","rhs_weap_M320","rhsusf_bino_m24"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_carryhandle_m203S","","ACE_acc_pointer_green","rhsusf_acc_su230a_mrds",{"75Rnd_556x45_Stanag_lxWS",75},{},""},{},{"rhs_weap_M320","","","",{"rhs_mag_M441_HE",1},{},""},{"rhs_uniform_FROG01_wd",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"rhsusf_spc_teamleader",{{"1Rnd_HE_Grenade_shell",12,1},{"1Rnd_Smoke_Grenade_shell",7,1},{"75Rnd_556x45_Stanag_lxWS",4,75}}},{"USP_45L_RUCKSACK_GRN",{{"1Rnd_HE_Grenade_shell",33,1},{"1Rnd_Smoke_Grenade_shell",19,1},{"75Rnd_556x45_Stanag_lxWS",12,75}}},"rhsusf_lwh_helmet_marpatwd_ess","rhs_googles_clear",{"rhsusf_bino_m24","","","",{},{},""},{"ItemMap","","TFAR_anprc152","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_Marines_2012_GL_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Grenadier (Winter)"; 
		faction = "BS_I_US_Marines_2012"; 
		identityTypes[] = {"PersianHead_A3_04_l", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","rhs_googles_clear","rhsusf_lwh_helmet_marpatwd_ess"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","rhs_googles_clear","rhsusf_lwh_helmet_marpatwd_ess"}; 
		weapons[] = {"rhs_weap_m4a1_carryhandle_m203S","rhs_weap_M320","rhsusf_bino_m24"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_carryhandle_m203S","rhs_weap_M320","rhsusf_bino_m24"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_carryhandle_m203S","","ACE_acc_pointer_green","rhsusf_acc_su230a_mrds",{"75Rnd_556x45_Stanag_lxWS",75},{},""},{},{"rhs_weap_M320","","","",{"rhs_mag_M441_HE",1},{},""},{"rhs_uniform_FROG01_wd",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"rhsusf_spc_teamleader",{{"1Rnd_HE_Grenade_shell",12,1},{"1Rnd_Smoke_Grenade_shell",7,1},{"75Rnd_556x45_Stanag_lxWS",4,75}}},{"USP_45L_RUCKSACK_GRN",{{"1Rnd_HE_Grenade_shell",33,1},{"1Rnd_Smoke_Grenade_shell",19,1},{"75Rnd_556x45_Stanag_lxWS",12,75}}},"rhsusf_lwh_helmet_marpatwd_ess","rhs_googles_clear",{"rhsusf_bino_m24","","","",{},{},""},{"ItemMap","","TFAR_anprc152","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_Marines_2012_Medic_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Doctor (Winter)"; 
		faction = "BS_O_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_14", "Male04ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_ess"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_ess"}; 
		weapons[] = {"rhs_m4_acog_usmc","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_m4_acog_usmc","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_m4_acog_usmc","","acc_pointer_IR","rhsusf_acc_ACOG_USMC",{"rhs_mag_30Rnd_556x45_M855_Stanag",30},{},"Tier1_Harris_Bipod_Black"},{},{"rhsusf_weap_m9","","","",{},{},""},{"rhs_uniform_FROG01_wd",{{"ACE_surgicalKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"rhsusf_spc_rifleman",{{"rhs_mag_30Rnd_556x45_M855_Stanag",14,30}}},{"USP_45L_RUCKSACK_GRN",{{"kat_accuvac",2},{"kat_AED",2},{"kat_stethoscope",2},{"ACE_surgicalKit",3},{"ACE_adenosine",2},{"ACE_elasticBandage",15},{"ACE_packingBandage",15},{"ACE_quikclot",15},{"kat_larynx",6},{"ACE_epinephrine",4},{"ACE_morphine",4},{"kat_naloxone",2},{"kat_IO_FAST",7},{"kat_ncdKit",2},{"kat_aatKit",12},{"kat_chestSeal",6},{"ACE_plasmaIV",3},{"ACE_plasmaIV_500",6},{"kat_Pulseoximeter",3},{"ACE_splint",2},{"ACE_suture",12},{"ACE_tourniquet",4},{"rhs_mag_30Rnd_556x45_M855_Stanag",14,30}}},"rhsusf_lwh_helmet_marpatwd_ess","rhs_googles_black",{"ACE_Vector","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_Marines_2012_Medic_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Doctor (Winter)"; 
		faction = "BS_B_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_14", "Male04ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_ess"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_ess"}; 
		weapons[] = {"rhs_m4_acog_usmc","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_m4_acog_usmc","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_m4_acog_usmc","","acc_pointer_IR","rhsusf_acc_ACOG_USMC",{"rhs_mag_30Rnd_556x45_M855_Stanag",30},{},"Tier1_Harris_Bipod_Black"},{},{"rhsusf_weap_m9","","","",{},{},""},{"rhs_uniform_FROG01_wd",{{"ACE_surgicalKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"rhsusf_spc_rifleman",{{"rhs_mag_30Rnd_556x45_M855_Stanag",14,30}}},{"USP_45L_RUCKSACK_GRN",{{"kat_accuvac",2},{"kat_AED",2},{"kat_stethoscope",2},{"ACE_surgicalKit",3},{"ACE_adenosine",2},{"ACE_elasticBandage",15},{"ACE_packingBandage",15},{"ACE_quikclot",15},{"kat_larynx",6},{"ACE_epinephrine",4},{"ACE_morphine",4},{"kat_naloxone",2},{"kat_IO_FAST",7},{"kat_ncdKit",2},{"kat_aatKit",12},{"kat_chestSeal",6},{"ACE_plasmaIV",3},{"ACE_plasmaIV_500",6},{"kat_Pulseoximeter",3},{"ACE_splint",2},{"ACE_suture",12},{"ACE_tourniquet",4},{"rhs_mag_30Rnd_556x45_M855_Stanag",14,30}}},"rhsusf_lwh_helmet_marpatwd_ess","rhs_googles_black",{"ACE_Vector","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_Marines_2012_Medic_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Doctor (Winter)"; 
		faction = "BS_I_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_14", "Male04ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_ess"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_ess"}; 
		weapons[] = {"rhs_m4_acog_usmc","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_m4_acog_usmc","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_m4_acog_usmc","","acc_pointer_IR","rhsusf_acc_ACOG_USMC",{"rhs_mag_30Rnd_556x45_M855_Stanag",30},{},"Tier1_Harris_Bipod_Black"},{},{"rhsusf_weap_m9","","","",{},{},""},{"rhs_uniform_FROG01_wd",{{"ACE_surgicalKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"rhsusf_spc_rifleman",{{"rhs_mag_30Rnd_556x45_M855_Stanag",14,30}}},{"USP_45L_RUCKSACK_GRN",{{"kat_accuvac",2},{"kat_AED",2},{"kat_stethoscope",2},{"ACE_surgicalKit",3},{"ACE_adenosine",2},{"ACE_elasticBandage",15},{"ACE_packingBandage",15},{"ACE_quikclot",15},{"kat_larynx",6},{"ACE_epinephrine",4},{"ACE_morphine",4},{"kat_naloxone",2},{"kat_IO_FAST",7},{"kat_ncdKit",2},{"kat_aatKit",12},{"kat_chestSeal",6},{"ACE_plasmaIV",3},{"ACE_plasmaIV_500",6},{"kat_Pulseoximeter",3},{"ACE_splint",2},{"ACE_suture",12},{"ACE_tourniquet",4},{"rhs_mag_30Rnd_556x45_M855_Stanag",14,30}}},"rhsusf_lwh_helmet_marpatwd_ess","rhs_googles_black",{"ACE_Vector","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_Marines_2012_AR_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Machine Gunner (Winter)"; 
		faction = "BS_O_US_Marines_2012"; 
		identityTypes[] = {"TanoanHead_A3_07", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_OAKLEY_SI2_BLK","rhsusf_lwh_helmet_marpatwd_ess"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_OAKLEY_SI2_BLK","rhsusf_lwh_helmet_marpatwd_ess"}; 
		weapons[] = {"rhs_weap_m249_pip","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m249_pip","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m249_pip","","","rhsusf_acc_ACOG2_USMC",{"rhsusf_200rnd_556x45_mixed_box",200},{},"rhsusf_acc_saw_bipod"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_FMJ",15},{},""},{"rhs_uniform_FROG01_wd",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"rhsusf_spc_mg",{{"rhs_mag_an_m8hc",2,1},{"rhs_mag_m67",2,1},{"rhsusf_200rnd_556x45_mixed_box",1,200}}},{"USP_45L_RUCKSACK_GRN",{{"rhsusf_200rnd_556x45_mixed_box",7,200}}},"rhsusf_lwh_helmet_marpatwd_ess","USP_OAKLEY_SI2_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_Marines_2012_AR_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Machine Gunner (Winter)"; 
		faction = "BS_B_US_Marines_2012"; 
		identityTypes[] = {"TanoanHead_A3_07", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_OAKLEY_SI2_BLK","rhsusf_lwh_helmet_marpatwd_ess"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_OAKLEY_SI2_BLK","rhsusf_lwh_helmet_marpatwd_ess"}; 
		weapons[] = {"rhs_weap_m249_pip","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m249_pip","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m249_pip","","","rhsusf_acc_ACOG2_USMC",{"rhsusf_200rnd_556x45_mixed_box",200},{},"rhsusf_acc_saw_bipod"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_FMJ",15},{},""},{"rhs_uniform_FROG01_wd",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"rhsusf_spc_mg",{{"rhs_mag_an_m8hc",2,1},{"rhs_mag_m67",2,1},{"rhsusf_200rnd_556x45_mixed_box",1,200}}},{"USP_45L_RUCKSACK_GRN",{{"rhsusf_200rnd_556x45_mixed_box",7,200}}},"rhsusf_lwh_helmet_marpatwd_ess","USP_OAKLEY_SI2_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_Marines_2012_AR_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Machine Gunner (Winter)"; 
		faction = "BS_I_US_Marines_2012"; 
		identityTypes[] = {"TanoanHead_A3_07", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_OAKLEY_SI2_BLK","rhsusf_lwh_helmet_marpatwd_ess"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_OAKLEY_SI2_BLK","rhsusf_lwh_helmet_marpatwd_ess"}; 
		weapons[] = {"rhs_weap_m249_pip","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m249_pip","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m249_pip","","","rhsusf_acc_ACOG2_USMC",{"rhsusf_200rnd_556x45_mixed_box",200},{},"rhsusf_acc_saw_bipod"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_FMJ",15},{},""},{"rhs_uniform_FROG01_wd",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"rhsusf_spc_mg",{{"rhs_mag_an_m8hc",2,1},{"rhs_mag_m67",2,1},{"rhsusf_200rnd_556x45_mixed_box",1,200}}},{"USP_45L_RUCKSACK_GRN",{{"rhsusf_200rnd_556x45_mixed_box",7,200}}},"rhsusf_lwh_helmet_marpatwd_ess","USP_OAKLEY_SI2_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_Marines_2012_Rifleman_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Rifleman (Winter)"; 
		faction = "BS_O_US_Marines_2012"; 
		identityTypes[] = {"TanoanBossHead", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","G_Bandanna_beast","rhsusf_lwh_helmet_marpatwd_headset_blk"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","G_Bandanna_beast","rhsusf_lwh_helmet_marpatwd_headset_blk"}; 
		weapons[] = {"rhs_weap_m4a1_mstock","rhsusf_weap_m1911a1"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_mstock","rhsusf_weap_m1911a1"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_mstock","muzzle_snds_M","rhsusf_acc_anpeq15A","rhsusf_acc_ACOG_RMR",{"75Rnd_556x45_Stanag_lxWS",75},{},""},{},{"rhsusf_weap_m1911a1","","","",{"rhsusf_mag_7x45acp_MHP",7},{},""},{"rhs_uniform_FROG01_wd",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"rhsusf_spc_corpsman",{{"ACE_EarPlugs",2},{"ACE_morphine",2},{"kat_guedel",4},{"kat_chestSeal",2},{"ACE_tourniquet",8},{"ACE_packingBandage",20},{"ACE_quikclot",20},{"ACE_RangeCard",2},{"ACE_microDAGR",2},{"ACE_IR_Strobe_Item",2},{"ACE_epinephrine",2},{"ACE_CableTie",6},{"75Rnd_556x45_Stanag_lxWS",3,75}}},{"USP_45L_RUCKSACK_GRN",{{"ACE_EarPlugs",2},{"ACE_morphine",2},{"kat_guedel",4},{"kat_chestSeal",2},{"ACE_tourniquet",6},{"ACE_packingBandage",11},{"ACE_quikclot",10},{"ACE_RangeCard",2},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"75Rnd_556x45_Stanag_lxWS",21,75}}},"rhsusf_lwh_helmet_marpatwd_headset_blk","G_Bandanna_beast",{},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_Marines_2012_Rifleman_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Rifleman (Winter)"; 
		faction = "BS_B_US_Marines_2012"; 
		identityTypes[] = {"TanoanBossHead", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","G_Bandanna_beast","rhsusf_lwh_helmet_marpatwd_headset_blk"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","G_Bandanna_beast","rhsusf_lwh_helmet_marpatwd_headset_blk"}; 
		weapons[] = {"rhs_weap_m4a1_mstock","rhsusf_weap_m1911a1"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_mstock","rhsusf_weap_m1911a1"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_mstock","muzzle_snds_M","rhsusf_acc_anpeq15A","rhsusf_acc_ACOG_RMR",{"75Rnd_556x45_Stanag_lxWS",75},{},""},{},{"rhsusf_weap_m1911a1","","","",{"rhsusf_mag_7x45acp_MHP",7},{},""},{"rhs_uniform_FROG01_wd",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"rhsusf_spc_corpsman",{{"ACE_EarPlugs",2},{"ACE_morphine",2},{"kat_guedel",4},{"kat_chestSeal",2},{"ACE_tourniquet",8},{"ACE_packingBandage",20},{"ACE_quikclot",20},{"ACE_RangeCard",2},{"ACE_microDAGR",2},{"ACE_IR_Strobe_Item",2},{"ACE_epinephrine",2},{"ACE_CableTie",6},{"75Rnd_556x45_Stanag_lxWS",3,75}}},{"USP_45L_RUCKSACK_GRN",{{"ACE_EarPlugs",2},{"ACE_morphine",2},{"kat_guedel",4},{"kat_chestSeal",2},{"ACE_tourniquet",6},{"ACE_packingBandage",11},{"ACE_quikclot",10},{"ACE_RangeCard",2},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"75Rnd_556x45_Stanag_lxWS",21,75}}},"rhsusf_lwh_helmet_marpatwd_headset_blk","G_Bandanna_beast",{},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_Marines_2012_Rifleman_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Rifleman (Winter)"; 
		faction = "BS_I_US_Marines_2012"; 
		identityTypes[] = {"TanoanBossHead", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","G_Bandanna_beast","rhsusf_lwh_helmet_marpatwd_headset_blk"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","G_Bandanna_beast","rhsusf_lwh_helmet_marpatwd_headset_blk"}; 
		weapons[] = {"rhs_weap_m4a1_mstock","rhsusf_weap_m1911a1"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_mstock","rhsusf_weap_m1911a1"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_mstock","muzzle_snds_M","rhsusf_acc_anpeq15A","rhsusf_acc_ACOG_RMR",{"75Rnd_556x45_Stanag_lxWS",75},{},""},{},{"rhsusf_weap_m1911a1","","","",{"rhsusf_mag_7x45acp_MHP",7},{},""},{"rhs_uniform_FROG01_wd",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"rhsusf_spc_corpsman",{{"ACE_EarPlugs",2},{"ACE_morphine",2},{"kat_guedel",4},{"kat_chestSeal",2},{"ACE_tourniquet",8},{"ACE_packingBandage",20},{"ACE_quikclot",20},{"ACE_RangeCard",2},{"ACE_microDAGR",2},{"ACE_IR_Strobe_Item",2},{"ACE_epinephrine",2},{"ACE_CableTie",6},{"75Rnd_556x45_Stanag_lxWS",3,75}}},{"USP_45L_RUCKSACK_GRN",{{"ACE_EarPlugs",2},{"ACE_morphine",2},{"kat_guedel",4},{"kat_chestSeal",2},{"ACE_tourniquet",6},{"ACE_packingBandage",11},{"ACE_quikclot",10},{"ACE_RangeCard",2},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"75Rnd_556x45_Stanag_lxWS",21,75}}},"rhsusf_lwh_helmet_marpatwd_headset_blk","G_Bandanna_beast",{},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_Marines_2012_SNP_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Sniper (Winter)"; 
		faction = "BS_O_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_22_l", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_BALACLAVA_ADV_SMC1_BLK","rhsusf_lwh_helmet_marpatwd_ess"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_BALACLAVA_ADV_SMC1_BLK","rhsusf_lwh_helmet_marpatwd_ess"}; 
		weapons[] = {"rhs_weap_sr25","rhsusf_weap_m1911a1","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_sr25","rhsusf_weap_m1911a1","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_sr25","rhsusf_acc_SR25S","acc_pointer_IR","rhsusf_acc_M8541_mrds",{"rhsusf_20Rnd_762x51_SR25_mk316_special_Mag",20},{},"Tier1_Harris_Bipod_Black"},{},{"rhsusf_weap_m1911a1","","","",{"rhsusf_mag_7x45acp_MHP",7},{},""},{"rhs_uniform_FROG01_wd",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"rhsusf_spc_marksman",{{"rhsusf_20Rnd_762x51_SR25_mk316_special_Mag",4,20}}},{"B_Kitbag_sgg",{{"rhsusf_20Rnd_762x51_SR25_mk316_special_Mag",17,20}}},"rhsusf_lwh_helmet_marpatwd_ess","USP_BALACLAVA_ADV_SMC1_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_Marines_2012_SNP_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Sniper (Winter)"; 
		faction = "BS_B_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_22_l", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_BALACLAVA_ADV_SMC1_BLK","rhsusf_lwh_helmet_marpatwd_ess"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_BALACLAVA_ADV_SMC1_BLK","rhsusf_lwh_helmet_marpatwd_ess"}; 
		weapons[] = {"rhs_weap_sr25","rhsusf_weap_m1911a1","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_sr25","rhsusf_weap_m1911a1","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_sr25","rhsusf_acc_SR25S","acc_pointer_IR","rhsusf_acc_M8541_mrds",{"rhsusf_20Rnd_762x51_SR25_mk316_special_Mag",20},{},"Tier1_Harris_Bipod_Black"},{},{"rhsusf_weap_m1911a1","","","",{"rhsusf_mag_7x45acp_MHP",7},{},""},{"rhs_uniform_FROG01_wd",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"rhsusf_spc_marksman",{{"rhsusf_20Rnd_762x51_SR25_mk316_special_Mag",4,20}}},{"B_Kitbag_sgg",{{"rhsusf_20Rnd_762x51_SR25_mk316_special_Mag",17,20}}},"rhsusf_lwh_helmet_marpatwd_ess","USP_BALACLAVA_ADV_SMC1_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_Marines_2012_SNP_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Sniper (Winter)"; 
		faction = "BS_I_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_22_l", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_BALACLAVA_ADV_SMC1_BLK","rhsusf_lwh_helmet_marpatwd_ess"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_BALACLAVA_ADV_SMC1_BLK","rhsusf_lwh_helmet_marpatwd_ess"}; 
		weapons[] = {"rhs_weap_sr25","rhsusf_weap_m1911a1","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_sr25","rhsusf_weap_m1911a1","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_sgg";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_sr25","rhsusf_acc_SR25S","acc_pointer_IR","rhsusf_acc_M8541_mrds",{"rhsusf_20Rnd_762x51_SR25_mk316_special_Mag",20},{},"Tier1_Harris_Bipod_Black"},{},{"rhsusf_weap_m1911a1","","","",{"rhsusf_mag_7x45acp_MHP",7},{},""},{"rhs_uniform_FROG01_wd",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"rhsusf_spc_marksman",{{"rhsusf_20Rnd_762x51_SR25_mk316_special_Mag",4,20}}},{"B_Kitbag_sgg",{{"rhsusf_20Rnd_762x51_SR25_mk316_special_Mag",17,20}}},"rhsusf_lwh_helmet_marpatwd_ess","USP_BALACLAVA_ADV_SMC1_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_Marines_2012_VAR_12_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 13"; 
		faction = "BS_O_US_Marines_2012"; 
		identityTypes[] = {"TanoanHead_A3_07", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS31","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS31","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_headset"}; 
		weapons[] = {"rhs_m4_acog_usmc","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_m4_acog_usmc","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_MC";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_m4_acog_usmc","","rhsusf_acc_anpeq15_bk","rhsusf_acc_ACOG_USMC",{"rhs_mag_30Rnd_556x45_M855_Stanag",30},{},""},{"rhs_weap_m72a7","","","",{"rhs_m72a7_mag",1},{},""},{},{"rhs_uniform_FROG01_wd",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1}}},{},{"USP_45L_RUCKSACK_MC",{}},"rhsusf_lwh_helmet_marpatwd_headset","rhs_googles_black",{"ACE_Vector","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","USP_PVS31"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_Marines_2012_VAR_12_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 13"; 
		faction = "BS_B_US_Marines_2012"; 
		identityTypes[] = {"TanoanHead_A3_07", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS31","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS31","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_headset"}; 
		weapons[] = {"rhs_m4_acog_usmc","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_m4_acog_usmc","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_MC";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_m4_acog_usmc","","rhsusf_acc_anpeq15_bk","rhsusf_acc_ACOG_USMC",{"rhs_mag_30Rnd_556x45_M855_Stanag",30},{},""},{"rhs_weap_m72a7","","","",{"rhs_m72a7_mag",1},{},""},{},{"rhs_uniform_FROG01_wd",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1}}},{},{"USP_45L_RUCKSACK_MC",{}},"rhsusf_lwh_helmet_marpatwd_headset","rhs_googles_black",{"ACE_Vector","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","USP_PVS31"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_Marines_2012_VAR_12_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 13"; 
		faction = "BS_I_US_Marines_2012"; 
		identityTypes[] = {"TanoanHead_A3_07", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS31","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS31","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_headset"}; 
		weapons[] = {"rhs_m4_acog_usmc","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_m4_acog_usmc","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_MC";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_m4_acog_usmc","","rhsusf_acc_anpeq15_bk","rhsusf_acc_ACOG_USMC",{"rhs_mag_30Rnd_556x45_M855_Stanag",30},{},""},{"rhs_weap_m72a7","","","",{"rhs_m72a7_mag",1},{},""},{},{"rhs_uniform_FROG01_wd",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1}}},{},{"USP_45L_RUCKSACK_MC",{}},"rhsusf_lwh_helmet_marpatwd_headset","rhs_googles_black",{"ACE_Vector","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","USP_PVS31"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_Marines_2012_VAR_13_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 14"; 
		faction = "BS_O_US_Marines_2012"; 
		identityTypes[] = {"TanoanHead_A3_07", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_BALACLAVA_ADV2_BLK","rhsusf_lwh_helmet_marpatwd_blk_ess"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_BALACLAVA_ADV2_BLK","rhsusf_lwh_helmet_marpatwd_blk_ess"}; 
		weapons[] = {"rhs_weap_m249_pip","rhs_weap_smaw","rhsusf_weap_m9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_m249_pip","rhs_weap_smaw","rhsusf_weap_m9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_CBR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m249_pip","","","",{"rhsusf_200rnd_556x45_mixed_box",200},{},"rhsusf_acc_saw_bipod"},{"rhs_weap_smaw","","","rhs_weap_optic_smaw",{},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_FMJ",15},{},""},{"rhs_uniform_FROG01_wd",{{"ACE_EarPlugs",2},{"ACE_IR_Strobe_Item",2},{"ACE_SpareBarrel",1,1}}},{"rhsusf_spc_mg",{{"ACE_elasticBandage",10},{"ACE_microDAGR",1},{"ACE_epinephrine",4},{"ACE_morphine",4},{"ACE_tourniquet",4},{"rhs_mag_an_m8hc",4,1},{"rhs_mag_m67",2,1},{"ACE_SpareBarrel",1,1}}},{"USP_REEBOW_3DAP_ACC1_CBR",{{"optic_ERCO_khk_F",1},{"optic_Hamr_lush_lxWS",1},{"rhsusf_acc_eotech_552_wd",1},{"",1,0}}},"rhsusf_lwh_helmet_marpatwd_blk_ess","USP_BALACLAVA_ADV2_BLK",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_Marines_2012_VAR_13_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 14"; 
		faction = "BS_B_US_Marines_2012"; 
		identityTypes[] = {"TanoanHead_A3_07", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_BALACLAVA_ADV2_BLK","rhsusf_lwh_helmet_marpatwd_blk_ess"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_BALACLAVA_ADV2_BLK","rhsusf_lwh_helmet_marpatwd_blk_ess"}; 
		weapons[] = {"rhs_weap_m249_pip","rhs_weap_smaw","rhsusf_weap_m9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_m249_pip","rhs_weap_smaw","rhsusf_weap_m9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_CBR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m249_pip","","","",{"rhsusf_200rnd_556x45_mixed_box",200},{},"rhsusf_acc_saw_bipod"},{"rhs_weap_smaw","","","rhs_weap_optic_smaw",{},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_FMJ",15},{},""},{"rhs_uniform_FROG01_wd",{{"ACE_EarPlugs",2},{"ACE_IR_Strobe_Item",2},{"ACE_SpareBarrel",1,1}}},{"rhsusf_spc_mg",{{"ACE_elasticBandage",10},{"ACE_microDAGR",1},{"ACE_epinephrine",4},{"ACE_morphine",4},{"ACE_tourniquet",4},{"rhs_mag_an_m8hc",4,1},{"rhs_mag_m67",2,1},{"ACE_SpareBarrel",1,1}}},{"USP_REEBOW_3DAP_ACC1_CBR",{{"optic_ERCO_khk_F",1},{"optic_Hamr_lush_lxWS",1},{"rhsusf_acc_eotech_552_wd",1},{"",1,0}}},"rhsusf_lwh_helmet_marpatwd_blk_ess","USP_BALACLAVA_ADV2_BLK",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_Marines_2012_VAR_13_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 14"; 
		faction = "BS_I_US_Marines_2012"; 
		identityTypes[] = {"TanoanHead_A3_07", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_BALACLAVA_ADV2_BLK","rhsusf_lwh_helmet_marpatwd_blk_ess"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","USP_BALACLAVA_ADV2_BLK","rhsusf_lwh_helmet_marpatwd_blk_ess"}; 
		weapons[] = {"rhs_weap_m249_pip","rhs_weap_smaw","rhsusf_weap_m9","ACE_Yardage450"}; 
		respawnWeapons[] = {"rhs_weap_m249_pip","rhs_weap_smaw","rhsusf_weap_m9","ACE_Yardage450"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_CBR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m249_pip","","","",{"rhsusf_200rnd_556x45_mixed_box",200},{},"rhsusf_acc_saw_bipod"},{"rhs_weap_smaw","","","rhs_weap_optic_smaw",{},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_FMJ",15},{},""},{"rhs_uniform_FROG01_wd",{{"ACE_EarPlugs",2},{"ACE_IR_Strobe_Item",2},{"ACE_SpareBarrel",1,1}}},{"rhsusf_spc_mg",{{"ACE_elasticBandage",10},{"ACE_microDAGR",1},{"ACE_epinephrine",4},{"ACE_morphine",4},{"ACE_tourniquet",4},{"rhs_mag_an_m8hc",4,1},{"rhs_mag_m67",2,1},{"ACE_SpareBarrel",1,1}}},{"USP_REEBOW_3DAP_ACC1_CBR",{{"optic_ERCO_khk_F",1},{"optic_Hamr_lush_lxWS",1},{"rhsusf_acc_eotech_552_wd",1},{"",1,0}}},"rhsusf_lwh_helmet_marpatwd_blk_ess","USP_BALACLAVA_ADV2_BLK",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_Marines_2012_VAR_14_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 15"; 
		faction = "BS_O_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_10", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_RAID_BD7_BLK3","rhsusf_lwh_helmet_marpatwd"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_RAID_BD7_BLK3","rhsusf_lwh_helmet_marpatwd"}; 
		weapons[] = {"rhs_weap_fim92","rhsusf_bino_leopold_mk4"}; 
		respawnWeapons[] = {"rhs_weap_fim92","rhsusf_bino_leopold_mk4"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{},{"rhs_uniform_FROG01_wd",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1}}},{},{"USP_45L_RUCKSACK",{{"ACE_suture",1},{"",1,0},{"DemoCharge_Remote_Mag",1,1},{"rhs_fim92_mag",1,1}}},"rhsusf_lwh_helmet_marpatwd","USP_RAID_BD7_BLK3",{"rhsusf_bino_leopold_mk4","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_Marines_2012_VAR_14_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 15"; 
		faction = "BS_B_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_10", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_RAID_BD7_BLK3","rhsusf_lwh_helmet_marpatwd"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_RAID_BD7_BLK3","rhsusf_lwh_helmet_marpatwd"}; 
		weapons[] = {"rhs_weap_fim92","rhsusf_bino_leopold_mk4"}; 
		respawnWeapons[] = {"rhs_weap_fim92","rhsusf_bino_leopold_mk4"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{},{"rhs_uniform_FROG01_wd",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1}}},{},{"USP_45L_RUCKSACK",{{"ACE_suture",1},{"",1,0},{"DemoCharge_Remote_Mag",1,1},{"rhs_fim92_mag",1,1}}},"rhsusf_lwh_helmet_marpatwd","USP_RAID_BD7_BLK3",{"rhsusf_bino_leopold_mk4","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_Marines_2012_VAR_14_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 15"; 
		faction = "BS_I_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_10", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_RAID_BD7_BLK3","rhsusf_lwh_helmet_marpatwd"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_RAID_BD7_BLK3","rhsusf_lwh_helmet_marpatwd"}; 
		weapons[] = {"rhs_weap_fim92","rhsusf_bino_leopold_mk4"}; 
		respawnWeapons[] = {"rhs_weap_fim92","rhsusf_bino_leopold_mk4"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{},{"rhs_uniform_FROG01_wd",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1}}},{},{"USP_45L_RUCKSACK",{{"ACE_suture",1},{"",1,0},{"DemoCharge_Remote_Mag",1,1},{"rhs_fim92_mag",1,1}}},"rhsusf_lwh_helmet_marpatwd","USP_RAID_BD7_BLK3",{"rhsusf_bino_leopold_mk4","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_Marines_2012_VAR_15_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 16"; 
		faction = "BS_O_US_Marines_2012"; 
		identityTypes[] = {"GreekHead_A3_06", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_headset"}; 
		weapons[] = {"rhs_weap_m40a5","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m40a5","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m40a5","","","rhsusf_acc_su230a_mrds",{},{},""},{"rhs_weap_m72a7","","","",{"rhs_m72a7_mag",1},{},""},{},{"rhs_uniform_FROG01_wd",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1}}},{},{"USP_45L_RUCKSACK",{}},"rhsusf_lwh_helmet_marpatwd_headset","rhs_googles_black",{"ACE_Vector","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_Marines_2012_VAR_15_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 16"; 
		faction = "BS_B_US_Marines_2012"; 
		identityTypes[] = {"GreekHead_A3_06", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_headset"}; 
		weapons[] = {"rhs_weap_m40a5","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m40a5","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m40a5","","","rhsusf_acc_su230a_mrds",{},{},""},{"rhs_weap_m72a7","","","",{"rhs_m72a7_mag",1},{},""},{},{"rhs_uniform_FROG01_wd",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1}}},{},{"USP_45L_RUCKSACK",{}},"rhsusf_lwh_helmet_marpatwd_headset","rhs_googles_black",{"ACE_Vector","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_Marines_2012_VAR_15_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 16"; 
		faction = "BS_I_US_Marines_2012"; 
		identityTypes[] = {"GreekHead_A3_06", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_headset"}; 
		weapons[] = {"rhs_weap_m40a5","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m40a5","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m40a5","","","rhsusf_acc_su230a_mrds",{},{},""},{"rhs_weap_m72a7","","","",{"rhs_m72a7_mag",1},{},""},{},{"rhs_uniform_FROG01_wd",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1}}},{},{"USP_45L_RUCKSACK",{}},"rhsusf_lwh_helmet_marpatwd_headset","rhs_googles_black",{"ACE_Vector","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_Marines_2012_RTO_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Special 2 (Winter)"; 
		faction = "BS_O_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_22_a", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_ess"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_ess"}; 
		weapons[] = {"rhs_m4_acog_usmc","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_m4_acog_usmc","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_CBR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_m4_acog_usmc","","ACE_DBAL_A3_Red","rhsusf_acc_ACOG_USMC",{"rhs_mag_30Rnd_556x45_M855_Stanag",30},{},"Tier1_Harris_Bipod_Black"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_FROG01_wd",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"rhs_mag_30Rnd_556x45_M855_Stanag",1,30}}},{"rhsusf_spc_iar",{{"ACE_wirecutter",1},{"rhs_mag_30Rnd_556x45_M855_Stanag",14,30}}},{"USP_ZIPON_PACK_CPC_AT_CBR",{{"rhs_mag_30Rnd_556x45_M855_Stanag",21,30}}},"rhsusf_lwh_helmet_marpatwd_ess","rhs_googles_black",{"ACE_Vector","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_Marines_2012_RTO_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Special 2 (Winter)"; 
		faction = "BS_B_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_22_a", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_ess"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_ess"}; 
		weapons[] = {"rhs_m4_acog_usmc","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_m4_acog_usmc","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_CBR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_m4_acog_usmc","","ACE_DBAL_A3_Red","rhsusf_acc_ACOG_USMC",{"rhs_mag_30Rnd_556x45_M855_Stanag",30},{},"Tier1_Harris_Bipod_Black"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_FROG01_wd",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"rhs_mag_30Rnd_556x45_M855_Stanag",1,30}}},{"rhsusf_spc_iar",{{"ACE_wirecutter",1},{"rhs_mag_30Rnd_556x45_M855_Stanag",14,30}}},{"USP_ZIPON_PACK_CPC_AT_CBR",{{"rhs_mag_30Rnd_556x45_M855_Stanag",21,30}}},"rhsusf_lwh_helmet_marpatwd_ess","rhs_googles_black",{"ACE_Vector","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_Marines_2012_RTO_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Special 2 (Winter)"; 
		faction = "BS_I_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_22_a", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_ess"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_ess"}; 
		weapons[] = {"rhs_m4_acog_usmc","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_m4_acog_usmc","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_CBR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_m4_acog_usmc","","ACE_DBAL_A3_Red","rhsusf_acc_ACOG_USMC",{"rhs_mag_30Rnd_556x45_M855_Stanag",30},{},"Tier1_Harris_Bipod_Black"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_FROG01_wd",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"rhs_mag_30Rnd_556x45_M855_Stanag",1,30}}},{"rhsusf_spc_iar",{{"ACE_wirecutter",1},{"rhs_mag_30Rnd_556x45_M855_Stanag",14,30}}},{"USP_ZIPON_PACK_CPC_AT_CBR",{{"rhs_mag_30Rnd_556x45_M855_Stanag",21,30}}},"rhsusf_lwh_helmet_marpatwd_ess","rhs_googles_black",{"ACE_Vector","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_Marines_2012_VAR_16_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 17"; 
		faction = "BS_O_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_03", "Male04ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_headset"}; 
		weapons[] = {"rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_cbr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{"rhs_weap_m72a7","","","",{"rhs_m72a7_mag",1},{},""},{},{"rhs_uniform_FROG01_wd",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1}}},{},{"B_Kitbag_cbr",{}},"rhsusf_lwh_helmet_marpatwd_headset","rhs_googles_black",{"ACE_Vector","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_Marines_2012_VAR_16_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 17"; 
		faction = "BS_B_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_03", "Male04ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_headset"}; 
		weapons[] = {"rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_cbr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{"rhs_weap_m72a7","","","",{"rhs_m72a7_mag",1},{},""},{},{"rhs_uniform_FROG01_wd",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1}}},{},{"B_Kitbag_cbr",{}},"rhsusf_lwh_helmet_marpatwd_headset","rhs_googles_black",{"ACE_Vector","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_Marines_2012_VAR_16_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 17"; 
		faction = "BS_I_US_Marines_2012"; 
		identityTypes[] = {"WhiteHead_03", "Male04ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_FROG01_wd"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_googles_black","rhsusf_lwh_helmet_marpatwd_headset"}; 
		weapons[] = {"rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_cbr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{"rhs_weap_m72a7","","","",{"rhs_m72a7_mag",1},{},""},{},{"rhs_uniform_FROG01_wd",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1}}},{},{"B_Kitbag_cbr",{}},"rhsusf_lwh_helmet_marpatwd_headset","rhs_googles_black",{"ACE_Vector","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_Marines_2012_DIVER_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Special 1 (Winter)"; 
		faction = "BS_O_US_Marines_2012"; 
		identityTypes[] = {"GreekHead_A3_09", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "U_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","G_B_Diving","rhsusf_lwh_helmet_marpatd_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","G_B_Diving","rhsusf_lwh_helmet_marpatd_headset"}; 
		weapons[] = {"rhs_weap_m4a1_mstock","Laserdesignator_01_khk_F"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_mstock","Laserdesignator_01_khk_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_FieldPack_blk";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_mstock","Tier1_KAC_556_QDC_CQB_Black","","rhsusf_acc_su230a_mrds",{"Tier1_30Rnd_556x45_M856_EMag",30},{},"rhsusf_acc_grip2"},{},{},{"U_B_Wetsuit",{{"ACE_wirecutter",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"Tier1_30Rnd_556x45_M856_EMag",3,30}}},{"V_RebreatherB",{}},{"B_FieldPack_blk",{{"ACE_wirecutter",1},{"Tier1_30Rnd_556x45_M856_EMag",18,30}}},"rhsusf_lwh_helmet_marpatd_headset","G_B_Diving",{"Laserdesignator_01_khk_F","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_Marines_2012_DIVER_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Special 1 (Winter)"; 
		faction = "BS_B_US_Marines_2012"; 
		identityTypes[] = {"GreekHead_A3_09", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "U_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","G_B_Diving","rhsusf_lwh_helmet_marpatd_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","G_B_Diving","rhsusf_lwh_helmet_marpatd_headset"}; 
		weapons[] = {"rhs_weap_m4a1_mstock","Laserdesignator_01_khk_F"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_mstock","Laserdesignator_01_khk_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_FieldPack_blk";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_mstock","Tier1_KAC_556_QDC_CQB_Black","","rhsusf_acc_su230a_mrds",{"Tier1_30Rnd_556x45_M856_EMag",30},{},"rhsusf_acc_grip2"},{},{},{"U_B_Wetsuit",{{"ACE_wirecutter",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"Tier1_30Rnd_556x45_M856_EMag",3,30}}},{"V_RebreatherB",{}},{"B_FieldPack_blk",{{"ACE_wirecutter",1},{"Tier1_30Rnd_556x45_M856_EMag",18,30}}},"rhsusf_lwh_helmet_marpatd_headset","G_B_Diving",{"Laserdesignator_01_khk_F","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_Marines_2012_DIVER_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Special 1 (Winter)"; 
		faction = "BS_I_US_Marines_2012"; 
		identityTypes[] = {"GreekHead_A3_09", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "U_B_Wetsuit"; 
		linkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","G_B_Diving","rhsusf_lwh_helmet_marpatd_headset"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","TFAR_microdagr","TFAR_anprc152","ItemGPS","G_B_Diving","rhsusf_lwh_helmet_marpatd_headset"}; 
		weapons[] = {"rhs_weap_m4a1_mstock","Laserdesignator_01_khk_F"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_mstock","Laserdesignator_01_khk_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_FieldPack_blk";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_mstock","Tier1_KAC_556_QDC_CQB_Black","","rhsusf_acc_su230a_mrds",{"Tier1_30Rnd_556x45_M856_EMag",30},{},"rhsusf_acc_grip2"},{},{},{"U_B_Wetsuit",{{"ACE_wirecutter",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"Tier1_30Rnd_556x45_M856_EMag",3,30}}},{"V_RebreatherB",{}},{"B_FieldPack_blk",{{"ACE_wirecutter",1},{"Tier1_30Rnd_556x45_M856_EMag",18,30}}},"rhsusf_lwh_helmet_marpatd_headset","G_B_Diving",{"Laserdesignator_01_khk_F","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	class RHS_UH1Y_FFAR;
	class BS_B_US_Marines_2012_w1_nnxkMANQ:RHS_UH1Y_FFAR {
		scope=2;
		side=1;
		faction="BS_B_US_Marines_2012";
		crew="BS_B_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_US_Marines_2012_Rifleman_WL",
			"BS_B_US_Marines_2012_Rifleman_WL",
			"BS_B_US_Marines_2012_Rifleman_WL",
			"BS_B_US_Marines_2012_Rifleman_WL",
			"BS_B_US_Marines_2012_Rifleman_WL",
			"BS_B_US_Marines_2012_Rifleman_WL",
			"BS_B_US_Marines_2012_Rifleman_WL",
			"BS_B_US_Marines_2012_Rifleman_WL",
			"BS_B_US_Marines_2012_Rifleman_WL",
			"BS_B_US_Marines_2012_Rifleman_WL"
		}; 
	}; 
	class BS_O_US_Marines_2012_w1_nnxkMANQ:RHS_UH1Y_FFAR {
		scope=2;
		side=0;
		faction="BS_O_US_Marines_2012";
		crew="BS_O_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_US_Marines_2012_Rifleman_WL",
			"BS_O_US_Marines_2012_Rifleman_WL",
			"BS_O_US_Marines_2012_Rifleman_WL",
			"BS_O_US_Marines_2012_Rifleman_WL",
			"BS_O_US_Marines_2012_Rifleman_WL",
			"BS_O_US_Marines_2012_Rifleman_WL",
			"BS_O_US_Marines_2012_Rifleman_WL",
			"BS_O_US_Marines_2012_Rifleman_WL",
			"BS_O_US_Marines_2012_Rifleman_WL",
			"BS_O_US_Marines_2012_Rifleman_WL"
		}; 
	}; 
	class BS_I_US_Marines_2012_w1_nnxkMANQ:RHS_UH1Y_FFAR {
		scope=2;
		side=2;
		faction="BS_I_US_Marines_2012";
		crew="BS_I_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_US_Marines_2012_Rifleman_WL",
			"BS_I_US_Marines_2012_Rifleman_WL",
			"BS_I_US_Marines_2012_Rifleman_WL",
			"BS_I_US_Marines_2012_Rifleman_WL",
			"BS_I_US_Marines_2012_Rifleman_WL",
			"BS_I_US_Marines_2012_Rifleman_WL",
			"BS_I_US_Marines_2012_Rifleman_WL",
			"BS_I_US_Marines_2012_Rifleman_WL",
			"BS_I_US_Marines_2012_Rifleman_WL",
			"BS_I_US_Marines_2012_Rifleman_WL"
		}; 
	}; 

	class rhsusf_M142_usmc_WD;
	class BS_B_US_Marines_2012_NQKL6j9ns90:rhsusf_M142_usmc_WD {
		scope=2;
		side=1;
		faction="BS_B_US_Marines_2012";
		crew="BS_B_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_US_Marines_2012_Rifleman_WL",
			"BS_B_US_Marines_2012_Rifleman_WL",
			"BS_B_US_Marines_2012_Rifleman_WL"
		}; 
	}; 
	class BS_O_US_Marines_2012_NQKL6j9ns90:rhsusf_M142_usmc_WD {
		scope=2;
		side=0;
		faction="BS_O_US_Marines_2012";
		crew="BS_O_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_US_Marines_2012_Rifleman_WL",
			"BS_O_US_Marines_2012_Rifleman_WL",
			"BS_O_US_Marines_2012_Rifleman_WL"
		}; 
	}; 
	class BS_I_US_Marines_2012_NQKL6j9ns90:rhsusf_M142_usmc_WD {
		scope=2;
		side=2;
		faction="BS_I_US_Marines_2012";
		crew="BS_I_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_US_Marines_2012_Rifleman_WL",
			"BS_I_US_Marines_2012_Rifleman_WL",
			"BS_I_US_Marines_2012_Rifleman_WL"
		}; 
	}; 

	class rhsusf_m1240a1_m240_usmc_wd;
	class BS_B_US_Marines_2012_HbmvO3BzK9I:rhsusf_m1240a1_m240_usmc_wd {
		scope=2;
		side=1;
		faction="BS_B_US_Marines_2012";
		crew="BS_B_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_US_Marines_2012_Rifleman_WL",
			"BS_B_US_Marines_2012_Rifleman_WL",
			"BS_B_US_Marines_2012_Rifleman_WL"
		}; 
	}; 
	class BS_O_US_Marines_2012_HbmvO3BzK9I:rhsusf_m1240a1_m240_usmc_wd {
		scope=2;
		side=0;
		faction="BS_O_US_Marines_2012";
		crew="BS_O_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_US_Marines_2012_Rifleman_WL",
			"BS_O_US_Marines_2012_Rifleman_WL",
			"BS_O_US_Marines_2012_Rifleman_WL"
		}; 
	}; 
	class BS_I_US_Marines_2012_HbmvO3BzK9I:rhsusf_m1240a1_m240_usmc_wd {
		scope=2;
		side=2;
		faction="BS_I_US_Marines_2012";
		crew="BS_I_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_US_Marines_2012_Rifleman_WL",
			"BS_I_US_Marines_2012_Rifleman_WL",
			"BS_I_US_Marines_2012_Rifleman_WL"
		}; 
	}; 

	class rhsusf_m1240a1_m2_usmc_wd;
	class BS_B_US_Marines_2012_gc_5HjsAqnU:rhsusf_m1240a1_m2_usmc_wd {
		scope=2;
		side=1;
		faction="BS_B_US_Marines_2012";
		crew="BS_B_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_US_Marines_2012_Rifleman_WL",
			"BS_B_US_Marines_2012_Rifleman_WL",
			"BS_B_US_Marines_2012_Rifleman_WL"
		}; 
	}; 
	class BS_O_US_Marines_2012_gc_5HjsAqnU:rhsusf_m1240a1_m2_usmc_wd {
		scope=2;
		side=0;
		faction="BS_O_US_Marines_2012";
		crew="BS_O_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_US_Marines_2012_Rifleman_WL",
			"BS_O_US_Marines_2012_Rifleman_WL",
			"BS_O_US_Marines_2012_Rifleman_WL"
		}; 
	}; 
	class BS_I_US_Marines_2012_gc_5HjsAqnU:rhsusf_m1240a1_m2_usmc_wd {
		scope=2;
		side=2;
		faction="BS_I_US_Marines_2012";
		crew="BS_I_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_US_Marines_2012_Rifleman_WL",
			"BS_I_US_Marines_2012_Rifleman_WL",
			"BS_I_US_Marines_2012_Rifleman_WL"
		}; 
	}; 

	class RHS_AH1Z_wd;
	class BS_B_US_Marines_2012_RCmTyjDFTXc:RHS_AH1Z_wd {
		scope=2;
		side=1;
		faction="BS_B_US_Marines_2012";
		crew="BS_B_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_US_Marines_2012_Rifleman_WL",
			"BS_B_US_Marines_2012_Rifleman_WL"
		}; 
	}; 
	class BS_O_US_Marines_2012_RCmTyjDFTXc:RHS_AH1Z_wd {
		scope=2;
		side=0;
		faction="BS_O_US_Marines_2012";
		crew="BS_O_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_US_Marines_2012_Rifleman_WL",
			"BS_O_US_Marines_2012_Rifleman_WL"
		}; 
	}; 
	class BS_I_US_Marines_2012_RCmTyjDFTXc:RHS_AH1Z_wd {
		scope=2;
		side=2;
		faction="BS_I_US_Marines_2012";
		crew="BS_I_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_US_Marines_2012_Rifleman_WL",
			"BS_I_US_Marines_2012_Rifleman_WL"
		}; 
	}; 

	class rhsusf_m1151_mk19_v3_usmc_wd;
	class BS_B_US_Marines_2012_hVNgIhL9HGg:rhsusf_m1151_mk19_v3_usmc_wd {
		scope=2;
		side=1;
		faction="BS_B_US_Marines_2012";
		crew="BS_B_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_US_Marines_2012_Rifleman_WL",
			"BS_B_US_Marines_2012_Rifleman_WL",
			"BS_B_US_Marines_2012_Rifleman_WL"
		}; 
	}; 
	class BS_O_US_Marines_2012_hVNgIhL9HGg:rhsusf_m1151_mk19_v3_usmc_wd {
		scope=2;
		side=0;
		faction="BS_O_US_Marines_2012";
		crew="BS_O_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_US_Marines_2012_Rifleman_WL",
			"BS_O_US_Marines_2012_Rifleman_WL",
			"BS_O_US_Marines_2012_Rifleman_WL"
		}; 
	}; 
	class BS_I_US_Marines_2012_hVNgIhL9HGg:rhsusf_m1151_mk19_v3_usmc_wd {
		scope=2;
		side=2;
		faction="BS_I_US_Marines_2012";
		crew="BS_I_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_US_Marines_2012_Rifleman_WL",
			"BS_I_US_Marines_2012_Rifleman_WL",
			"BS_I_US_Marines_2012_Rifleman_WL"
		}; 
	}; 

	class rhsusf_m1151_m240_v3_usmc_wd;
	class BS_B_US_Marines_2012_vhiXAaessfQ:rhsusf_m1151_m240_v3_usmc_wd {
		scope=2;
		side=1;
		faction="BS_B_US_Marines_2012";
		crew="BS_B_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_US_Marines_2012_Rifleman_WL",
			"BS_B_US_Marines_2012_Rifleman_WL",
			"BS_B_US_Marines_2012_Rifleman_WL"
		}; 
	}; 
	class BS_O_US_Marines_2012_vhiXAaessfQ:rhsusf_m1151_m240_v3_usmc_wd {
		scope=2;
		side=0;
		faction="BS_O_US_Marines_2012";
		crew="BS_O_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_US_Marines_2012_Rifleman_WL",
			"BS_O_US_Marines_2012_Rifleman_WL",
			"BS_O_US_Marines_2012_Rifleman_WL"
		}; 
	}; 
	class BS_I_US_Marines_2012_vhiXAaessfQ:rhsusf_m1151_m240_v3_usmc_wd {
		scope=2;
		side=2;
		faction="BS_I_US_Marines_2012";
		crew="BS_I_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_US_Marines_2012_Rifleman_WL",
			"BS_I_US_Marines_2012_Rifleman_WL",
			"BS_I_US_Marines_2012_Rifleman_WL"
		}; 
	}; 

	class RHS_M252_WD;
	class BS_B_US_Marines_2012_fo7uZLozwtw:RHS_M252_WD {
		scope=2;
		side=1;
		faction="BS_B_US_Marines_2012";
		crew="BS_B_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_US_Marines_2012_Rifleman_WL",
			"BS_B_US_Marines_2012_Rifleman_WL"
		}; 
	}; 
	class BS_O_US_Marines_2012_fo7uZLozwtw:RHS_M252_WD {
		scope=2;
		side=0;
		faction="BS_O_US_Marines_2012";
		crew="BS_O_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_US_Marines_2012_Rifleman_WL",
			"BS_O_US_Marines_2012_Rifleman_WL"
		}; 
	}; 
	class BS_I_US_Marines_2012_fo7uZLozwtw:RHS_M252_WD {
		scope=2;
		side=2;
		faction="BS_I_US_Marines_2012";
		crew="BS_I_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_US_Marines_2012_Rifleman_WL",
			"BS_I_US_Marines_2012_Rifleman_WL"
		}; 
	}; 

	class RHS_Stinger_AA_pod_USMC_D;
	class BS_B_US_Marines_2012_OcMkBvQ0lYU:RHS_Stinger_AA_pod_USMC_D {
		scope=2;
		side=1;
		faction="BS_B_US_Marines_2012";
		crew="BS_B_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_US_Marines_2012_Rifleman_WL"
		}; 
	}; 
	class BS_O_US_Marines_2012_OcMkBvQ0lYU:RHS_Stinger_AA_pod_USMC_D {
		scope=2;
		side=0;
		faction="BS_O_US_Marines_2012";
		crew="BS_O_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_US_Marines_2012_Rifleman_WL"
		}; 
	}; 
	class BS_I_US_Marines_2012_OcMkBvQ0lYU:RHS_Stinger_AA_pod_USMC_D {
		scope=2;
		side=2;
		faction="BS_I_US_Marines_2012";
		crew="BS_I_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_US_Marines_2012_Rifleman_WL"
		}; 
	}; 

	class RHS_M2StaticMG_MiniTripod_USMC_D;
	class BS_B_US_Marines_2012_6fUhjeOGeXM:RHS_M2StaticMG_MiniTripod_USMC_D {
		scope=2;
		side=1;
		faction="BS_B_US_Marines_2012";
		crew="BS_B_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_US_Marines_2012_Rifleman_WL"
		}; 
	}; 
	class BS_O_US_Marines_2012_6fUhjeOGeXM:RHS_M2StaticMG_MiniTripod_USMC_D {
		scope=2;
		side=0;
		faction="BS_O_US_Marines_2012";
		crew="BS_O_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_US_Marines_2012_Rifleman_WL"
		}; 
	}; 
	class BS_I_US_Marines_2012_6fUhjeOGeXM:RHS_M2StaticMG_MiniTripod_USMC_D {
		scope=2;
		side=2;
		faction="BS_I_US_Marines_2012";
		crew="BS_I_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_US_Marines_2012_Rifleman_WL"
		}; 
	}; 

	class RHS_TOW_TriPod_USMC_D;
	class BS_B_US_Marines_2012_w5amcOnnEM0:RHS_TOW_TriPod_USMC_D {
		scope=2;
		side=1;
		faction="BS_B_US_Marines_2012";
		crew="BS_B_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_US_Marines_2012_Rifleman_WL"
		}; 
	}; 
	class BS_O_US_Marines_2012_w5amcOnnEM0:RHS_TOW_TriPod_USMC_D {
		scope=2;
		side=0;
		faction="BS_O_US_Marines_2012";
		crew="BS_O_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_US_Marines_2012_Rifleman_WL"
		}; 
	}; 
	class BS_I_US_Marines_2012_w5amcOnnEM0:RHS_TOW_TriPod_USMC_D {
		scope=2;
		side=2;
		faction="BS_I_US_Marines_2012";
		crew="BS_I_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_US_Marines_2012_Rifleman_WL"
		}; 
	}; 

	class RHS_M2StaticMG_USMC_D;
	class BS_B_US_Marines_2012_Kc24xKIvVKI:RHS_M2StaticMG_USMC_D {
		scope=2;
		side=1;
		faction="BS_B_US_Marines_2012";
		crew="BS_B_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_US_Marines_2012_Rifleman_WL"
		}; 
	}; 
	class BS_O_US_Marines_2012_Kc24xKIvVKI:RHS_M2StaticMG_USMC_D {
		scope=2;
		side=0;
		faction="BS_O_US_Marines_2012";
		crew="BS_O_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_US_Marines_2012_Rifleman_WL"
		}; 
	}; 
	class BS_I_US_Marines_2012_Kc24xKIvVKI:RHS_M2StaticMG_USMC_D {
		scope=2;
		side=2;
		faction="BS_I_US_Marines_2012";
		crew="BS_I_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_US_Marines_2012_Rifleman_WL"
		}; 
	}; 

	class rhsusf_stryker_m1126_m2_wd;
	class BS_B_US_Marines_2012_xjMcmlvSuhs:rhsusf_stryker_m1126_m2_wd {
		scope=2;
		side=1;
		faction="BS_B_US_Marines_2012";
		crew="BS_B_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_US_Marines_2012_Rifleman_WL",
			"BS_B_US_Marines_2012_Rifleman_WL",
			"BS_B_US_Marines_2012_Rifleman_WL",
			"BS_B_US_Marines_2012_Rifleman_WL",
			"BS_B_US_Marines_2012_Rifleman_WL"
		}; 
	}; 
	class BS_O_US_Marines_2012_xjMcmlvSuhs:rhsusf_stryker_m1126_m2_wd {
		scope=2;
		side=0;
		faction="BS_O_US_Marines_2012";
		crew="BS_O_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_US_Marines_2012_Rifleman_WL",
			"BS_O_US_Marines_2012_Rifleman_WL",
			"BS_O_US_Marines_2012_Rifleman_WL",
			"BS_O_US_Marines_2012_Rifleman_WL",
			"BS_O_US_Marines_2012_Rifleman_WL"
		}; 
	}; 
	class BS_I_US_Marines_2012_xjMcmlvSuhs:rhsusf_stryker_m1126_m2_wd {
		scope=2;
		side=2;
		faction="BS_I_US_Marines_2012";
		crew="BS_I_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_US_Marines_2012_Rifleman_WL",
			"BS_I_US_Marines_2012_Rifleman_WL",
			"BS_I_US_Marines_2012_Rifleman_WL",
			"BS_I_US_Marines_2012_Rifleman_WL",
			"BS_I_US_Marines_2012_Rifleman_WL"
		}; 
	}; 

	class rhsusf_M1232_MC_MK19_usmc_wd;
	class BS_B_US_Marines_2012_7K59JMh3iuI:rhsusf_M1232_MC_MK19_usmc_wd {
		scope=2;
		side=1;
		faction="BS_B_US_Marines_2012";
		crew="BS_B_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_US_Marines_2012_Rifleman_WL",
			"BS_B_US_Marines_2012_Rifleman_WL",
			"BS_B_US_Marines_2012_Rifleman_WL",
			"BS_B_US_Marines_2012_Rifleman_WL",
			"BS_B_US_Marines_2012_Rifleman_WL",
			"BS_B_US_Marines_2012_Rifleman_WL"
		}; 
	}; 
	class BS_O_US_Marines_2012_7K59JMh3iuI:rhsusf_M1232_MC_MK19_usmc_wd {
		scope=2;
		side=0;
		faction="BS_O_US_Marines_2012";
		crew="BS_O_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_US_Marines_2012_Rifleman_WL",
			"BS_O_US_Marines_2012_Rifleman_WL",
			"BS_O_US_Marines_2012_Rifleman_WL",
			"BS_O_US_Marines_2012_Rifleman_WL",
			"BS_O_US_Marines_2012_Rifleman_WL",
			"BS_O_US_Marines_2012_Rifleman_WL"
		}; 
	}; 
	class BS_I_US_Marines_2012_7K59JMh3iuI:rhsusf_M1232_MC_MK19_usmc_wd {
		scope=2;
		side=2;
		faction="BS_I_US_Marines_2012";
		crew="BS_I_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_US_Marines_2012_Rifleman_WL",
			"BS_I_US_Marines_2012_Rifleman_WL",
			"BS_I_US_Marines_2012_Rifleman_WL",
			"BS_I_US_Marines_2012_Rifleman_WL",
			"BS_I_US_Marines_2012_Rifleman_WL",
			"BS_I_US_Marines_2012_Rifleman_WL"
		}; 
	}; 

	class rhsusf_M1232_MC_M2_usmc_wd;
	class BS_B_US_Marines_2012_qZXAeEnWjzw:rhsusf_M1232_MC_M2_usmc_wd {
		scope=2;
		side=1;
		faction="BS_B_US_Marines_2012";
		crew="BS_B_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_US_Marines_2012_Rifleman_WL",
			"BS_B_US_Marines_2012_Rifleman_WL",
			"BS_B_US_Marines_2012_Rifleman_WL",
			"BS_B_US_Marines_2012_Rifleman_WL",
			"BS_B_US_Marines_2012_Rifleman_WL",
			"BS_B_US_Marines_2012_Rifleman_WL"
		}; 
	}; 
	class BS_O_US_Marines_2012_qZXAeEnWjzw:rhsusf_M1232_MC_M2_usmc_wd {
		scope=2;
		side=0;
		faction="BS_O_US_Marines_2012";
		crew="BS_O_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_US_Marines_2012_Rifleman_WL",
			"BS_O_US_Marines_2012_Rifleman_WL",
			"BS_O_US_Marines_2012_Rifleman_WL",
			"BS_O_US_Marines_2012_Rifleman_WL",
			"BS_O_US_Marines_2012_Rifleman_WL",
			"BS_O_US_Marines_2012_Rifleman_WL"
		}; 
	}; 
	class BS_I_US_Marines_2012_qZXAeEnWjzw:rhsusf_M1232_MC_M2_usmc_wd {
		scope=2;
		side=2;
		faction="BS_I_US_Marines_2012";
		crew="BS_I_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_US_Marines_2012_Rifleman_WL",
			"BS_I_US_Marines_2012_Rifleman_WL",
			"BS_I_US_Marines_2012_Rifleman_WL",
			"BS_I_US_Marines_2012_Rifleman_WL",
			"BS_I_US_Marines_2012_Rifleman_WL",
			"BS_I_US_Marines_2012_Rifleman_WL"
		}; 
	}; 

	class rhsusf_CH53E_USMC;
	class BS_B_US_Marines_2012_19G6dLT4qPA:rhsusf_CH53E_USMC {
		scope=2;
		side=1;
		faction="BS_B_US_Marines_2012";
		crew="BS_B_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_US_Marines_2012_Rifleman_WL",
			"BS_B_US_Marines_2012_Rifleman_WL"
		}; 
	}; 
	class BS_O_US_Marines_2012_19G6dLT4qPA:rhsusf_CH53E_USMC {
		scope=2;
		side=0;
		faction="BS_O_US_Marines_2012";
		crew="BS_O_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_US_Marines_2012_Rifleman_WL",
			"BS_O_US_Marines_2012_Rifleman_WL"
		}; 
	}; 
	class BS_I_US_Marines_2012_19G6dLT4qPA:rhsusf_CH53E_USMC {
		scope=2;
		side=2;
		faction="BS_I_US_Marines_2012";
		crew="BS_I_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_US_Marines_2012_Rifleman_WL",
			"BS_I_US_Marines_2012_Rifleman_WL"
		}; 
	}; 

	class rhsusf_CGRCAT1A2_M2_usmc_wd;
	class BS_B_US_Marines_2012_TykxnxXFSSE:rhsusf_CGRCAT1A2_M2_usmc_wd {
		scope=2;
		side=1;
		faction="BS_B_US_Marines_2012";
		crew="BS_B_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_US_Marines_2012_Rifleman_WL",
			"BS_B_US_Marines_2012_Rifleman_WL",
			"BS_B_US_Marines_2012_Rifleman_WL"
		}; 
	}; 
	class BS_O_US_Marines_2012_TykxnxXFSSE:rhsusf_CGRCAT1A2_M2_usmc_wd {
		scope=2;
		side=0;
		faction="BS_O_US_Marines_2012";
		crew="BS_O_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_US_Marines_2012_Rifleman_WL",
			"BS_O_US_Marines_2012_Rifleman_WL",
			"BS_O_US_Marines_2012_Rifleman_WL"
		}; 
	}; 
	class BS_I_US_Marines_2012_TykxnxXFSSE:rhsusf_CGRCAT1A2_M2_usmc_wd {
		scope=2;
		side=2;
		faction="BS_I_US_Marines_2012";
		crew="BS_I_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_US_Marines_2012_Rifleman_WL",
			"BS_I_US_Marines_2012_Rifleman_WL",
			"BS_I_US_Marines_2012_Rifleman_WL"
		}; 
	}; 

	class rhsusf_CGRCAT1A2_Mk19_usmc_wd;
	class BS_B_US_Marines_2012_etQO4he9_9k:rhsusf_CGRCAT1A2_Mk19_usmc_wd {
		scope=2;
		side=1;
		faction="BS_B_US_Marines_2012";
		crew="BS_B_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_US_Marines_2012_Rifleman_WL",
			"BS_B_US_Marines_2012_Rifleman_WL",
			"BS_B_US_Marines_2012_Rifleman_WL"
		}; 
	}; 
	class BS_O_US_Marines_2012_etQO4he9_9k:rhsusf_CGRCAT1A2_Mk19_usmc_wd {
		scope=2;
		side=0;
		faction="BS_O_US_Marines_2012";
		crew="BS_O_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_US_Marines_2012_Rifleman_WL",
			"BS_O_US_Marines_2012_Rifleman_WL",
			"BS_O_US_Marines_2012_Rifleman_WL"
		}; 
	}; 
	class BS_I_US_Marines_2012_etQO4he9_9k:rhsusf_CGRCAT1A2_Mk19_usmc_wd {
		scope=2;
		side=2;
		faction="BS_I_US_Marines_2012";
		crew="BS_I_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_US_Marines_2012_Rifleman_WL",
			"BS_I_US_Marines_2012_Rifleman_WL",
			"BS_I_US_Marines_2012_Rifleman_WL"
		}; 
	}; 

	class rhsusf_m1a1fep_d;
	class BS_B_US_Marines_2012_7HljAWX87ZI:rhsusf_m1a1fep_d {
		scope=2;
		side=1;
		faction="BS_B_US_Marines_2012";
		crew="BS_B_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_US_Marines_2012_Rifleman_WL",
			"BS_B_US_Marines_2012_Rifleman_WL",
			"BS_B_US_Marines_2012_Rifleman_WL",
			"BS_B_US_Marines_2012_Rifleman_WL"
		}; 
	}; 
	class BS_O_US_Marines_2012_7HljAWX87ZI:rhsusf_m1a1fep_d {
		scope=2;
		side=0;
		faction="BS_O_US_Marines_2012";
		crew="BS_O_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_US_Marines_2012_Rifleman_WL",
			"BS_O_US_Marines_2012_Rifleman_WL",
			"BS_O_US_Marines_2012_Rifleman_WL",
			"BS_O_US_Marines_2012_Rifleman_WL"
		}; 
	}; 
	class BS_I_US_Marines_2012_7HljAWX87ZI:rhsusf_m1a1fep_d {
		scope=2;
		side=2;
		faction="BS_I_US_Marines_2012";
		crew="BS_I_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_US_Marines_2012_Rifleman_WL",
			"BS_I_US_Marines_2012_Rifleman_WL",
			"BS_I_US_Marines_2012_Rifleman_WL",
			"BS_I_US_Marines_2012_Rifleman_WL"
		}; 
	}; 

	class rhsusf_m1a1fep_od;
	class BS_B_US_Marines_2012_G4soXKGJAw4:rhsusf_m1a1fep_od {
		scope=2;
		side=1;
		faction="BS_B_US_Marines_2012";
		crew="BS_B_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_US_Marines_2012_Rifleman_WL",
			"BS_B_US_Marines_2012_Rifleman_WL",
			"BS_B_US_Marines_2012_Rifleman_WL",
			"BS_B_US_Marines_2012_Rifleman_WL"
		}; 
	}; 
	class BS_O_US_Marines_2012_G4soXKGJAw4:rhsusf_m1a1fep_od {
		scope=2;
		side=0;
		faction="BS_O_US_Marines_2012";
		crew="BS_O_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_US_Marines_2012_Rifleman_WL",
			"BS_O_US_Marines_2012_Rifleman_WL",
			"BS_O_US_Marines_2012_Rifleman_WL",
			"BS_O_US_Marines_2012_Rifleman_WL"
		}; 
	}; 
	class BS_I_US_Marines_2012_G4soXKGJAw4:rhsusf_m1a1fep_od {
		scope=2;
		side=2;
		faction="BS_I_US_Marines_2012";
		crew="BS_I_US_Marines_2012_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_US_Marines_2012_Rifleman_WL",
			"BS_I_US_Marines_2012_Rifleman_WL",
			"BS_I_US_Marines_2012_Rifleman_WL",
			"BS_I_US_Marines_2012_Rifleman_WL"
		}; 
	}; 
};
class CfgGroups { 
	class East { 
		class US_Marines_2012 { 
			name="US - Marine (2012)";
			class Infantry {
				name="Infantry";
				class BS_O_US_Marines_2012_Fireteam_WL {
					name="Fireteam (WL)";
					side=0;
					faction="BS_O_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_GL_WL";
					};
				};
				class BS_O_US_Marines_2012_Fireteam_WT {
					name="Fireteam (WT)";
					side=0;
					faction="BS_O_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_GL_WT";
					};
				};
				class BS_O_US_Marines_2012_Fireteam_DT {
					name="Fireteam (DT)";
					side=0;
					faction="BS_O_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_DT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_GL_DT";
					};
				};
				class BS_O_US_Marines_2012_Squad_WL {
					name="Squad (WL)";
					side=0;
					faction="BS_O_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_GL_WL";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WL";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WL";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_WL";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_GL_WL";
					};
				};
				class BS_O_US_Marines_2012_Squad_WT {
					name="Squad (WT)";
					side=0;
					faction="BS_O_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_GL_WT";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WT";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WT";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_WT";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_GL_WT";
					};
				};
				class BS_O_US_Marines_2012_Squad_DT {
					name="Squad (DT)";
					side=0;
					faction="BS_O_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_DT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_GL_DT";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_DT";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_DT";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_DT";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_GL_DT";
					};
				};
				class BS_O_US_Marines_2012_AT_WL {
					name="Anti-Tank (WL)";
					side=0;
					faction="BS_O_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WL";
					};
				};
				class BS_O_US_Marines_2012_AT_WT {
					name="Anti-Tank (WT)";
					side=0;
					faction="BS_O_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WT";
					};
				};
				class BS_O_US_Marines_2012_AT_DT {
					name="Anti-Tank (DT)";
					side=0;
					faction="BS_O_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_DT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_DT";
					};
				};
			};
			class Motorized {
				name="Mechanize Infantry";
				class BS_O_US_Marines_2012_LightVehicle_WL_0 {
					name="M1240 (O-GPK/M240) (WL)";
					side=0;
					faction="BS_O_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_US_Marines_2012_HbmvO3BzK9I";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_WL";
					};
				};
				class BS_O_US_Marines_2012_LightVehicle_WT_0 {
					name="M1240 (O-GPK/M240) (WT)";
					side=0;
					faction="BS_O_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_US_Marines_2012_HbmvO3BzK9I";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_WT";
					};
				};
				class BS_O_US_Marines_2012_LightVehicle_DT_0 {
					name="M1240 (O-GPK/M240) (DT)";
					side=0;
					faction="BS_O_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_US_Marines_2012_HbmvO3BzK9I";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_DT";
					};
				};
				class BS_O_US_Marines_2012_LightVehicle_WL_1 {
					name="M1240 (O-GPK/M2) (WL)";
					side=0;
					faction="BS_O_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_US_Marines_2012_gc_5HjsAqnU";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_WL";
					};
				};
				class BS_O_US_Marines_2012_LightVehicle_WT_1 {
					name="M1240 (O-GPK/M2) (WT)";
					side=0;
					faction="BS_O_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_US_Marines_2012_gc_5HjsAqnU";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_WT";
					};
				};
				class BS_O_US_Marines_2012_LightVehicle_DT_1 {
					name="M1240 (O-GPK/M2) (DT)";
					side=0;
					faction="BS_O_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_US_Marines_2012_gc_5HjsAqnU";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_DT";
					};
				};
				class BS_O_US_Marines_2012_LightVehicle_WL_2 {
					name="M1151A1 (MCTAGS/Mk19) (WL)";
					side=0;
					faction="BS_O_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_US_Marines_2012_hVNgIhL9HGg";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_WL";
					};
				};
				class BS_O_US_Marines_2012_LightVehicle_WT_2 {
					name="M1151A1 (MCTAGS/Mk19) (WT)";
					side=0;
					faction="BS_O_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_US_Marines_2012_hVNgIhL9HGg";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_WT";
					};
				};
				class BS_O_US_Marines_2012_LightVehicle_DT_2 {
					name="M1151A1 (MCTAGS/Mk19) (DT)";
					side=0;
					faction="BS_O_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_US_Marines_2012_hVNgIhL9HGg";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_DT";
					};
				};
				class BS_O_US_Marines_2012_LightVehicle_WL_3 {
					name="M1151A1 (MCTAGS/M240) (WL)";
					side=0;
					faction="BS_O_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_US_Marines_2012_vhiXAaessfQ";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_WL";
					};
				};
				class BS_O_US_Marines_2012_LightVehicle_WT_3 {
					name="M1151A1 (MCTAGS/M240) (WT)";
					side=0;
					faction="BS_O_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_US_Marines_2012_vhiXAaessfQ";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_WT";
					};
				};
				class BS_O_US_Marines_2012_LightVehicle_DT_3 {
					name="M1151A1 (MCTAGS/M240) (DT)";
					side=0;
					faction="BS_O_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_US_Marines_2012_vhiXAaessfQ";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_DT";
					};
				};
				class BS_O_US_Marines_2012_LightVehicle_WL_4 {
					name="CGR CAT1A2 (MCTAGS/M2) (WL)";
					side=0;
					faction="BS_O_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_US_Marines_2012_TykxnxXFSSE";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_WL";
					};
				};
				class BS_O_US_Marines_2012_LightVehicle_WT_4 {
					name="CGR CAT1A2 (MCTAGS/M2) (WT)";
					side=0;
					faction="BS_O_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_US_Marines_2012_TykxnxXFSSE";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_WT";
					};
				};
				class BS_O_US_Marines_2012_LightVehicle_DT_4 {
					name="CGR CAT1A2 (MCTAGS/M2) (DT)";
					side=0;
					faction="BS_O_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_US_Marines_2012_TykxnxXFSSE";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_DT";
					};
				};
				class BS_O_US_Marines_2012_LightVehicle_WL_5 {
					name="CGR CAT1A2 (MCTAGS/Mk19) (WL)";
					side=0;
					faction="BS_O_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_US_Marines_2012_etQO4he9_9k";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_WL";
					};
				};
				class BS_O_US_Marines_2012_LightVehicle_WT_5 {
					name="CGR CAT1A2 (MCTAGS/Mk19) (WT)";
					side=0;
					faction="BS_O_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_US_Marines_2012_etQO4he9_9k";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_WT";
					};
				};
				class BS_O_US_Marines_2012_LightVehicle_DT_5 {
					name="CGR CAT1A2 (MCTAGS/Mk19) (DT)";
					side=0;
					faction="BS_O_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_US_Marines_2012_etQO4he9_9k";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_DT";
					};
				};
				class BS_O_US_Marines_2012_Tank_WL_0 {
					name="M1126 (M2) (WL) ";
					side=0;
					faction="BS_O_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_US_Marines_2012_xjMcmlvSuhs";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_WL";
					};
				};
				class BS_O_US_Marines_2012_Tank_WT_0 {
					name="M1126 (M2) (WT) ";
					side=0;
					faction="BS_O_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_US_Marines_2012_xjMcmlvSuhs";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_WT";
					};
				};
				class BS_O_US_Marines_2012_Tank_DT_0 {
					name="M1126 (M2) (DT) ";
					side=0;
					faction="BS_O_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_US_Marines_2012_xjMcmlvSuhs";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_DT";
					};
				};
				class BS_O_US_Marines_2012_Tank_WL_1 {
					name="M1A1FEP (WL) ";
					side=0;
					faction="BS_O_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_US_Marines_2012_7HljAWX87ZI";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_WL";
					};
				};
				class BS_O_US_Marines_2012_Tank_WT_1 {
					name="M1A1FEP (WT) ";
					side=0;
					faction="BS_O_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_US_Marines_2012_7HljAWX87ZI";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_WT";
					};
				};
				class BS_O_US_Marines_2012_Tank_DT_1 {
					name="M1A1FEP (DT) ";
					side=0;
					faction="BS_O_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_US_Marines_2012_7HljAWX87ZI";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_DT";
					};
				};
				class BS_O_US_Marines_2012_Tank_WL_2 {
					name="M1A1FEP (O) (WL) ";
					side=0;
					faction="BS_O_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_US_Marines_2012_G4soXKGJAw4";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_WL";
					};
				};
				class BS_O_US_Marines_2012_Tank_WT_2 {
					name="M1A1FEP (O) (WT) ";
					side=0;
					faction="BS_O_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_US_Marines_2012_G4soXKGJAw4";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_WT";
					};
				};
				class BS_O_US_Marines_2012_Tank_DT_2 {
					name="M1A1FEP (O) (DT) ";
					side=0;
					faction="BS_O_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_US_Marines_2012_G4soXKGJAw4";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_Marines_2012_AR_DT";
					};
				};
			};
		};
	};
	class Indep { 
		class US_Marines_2012 { 
			name="US - Marine (2012)";
			class Infantry {
				name="Infantry";
				class BS_I_US_Marines_2012_Fireteam_WL {
					name="Fireteam (WL)";
					side=1;
					faction="BS_I_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_GL_WL";
					};
				};
				class BS_I_US_Marines_2012_Fireteam_WT {
					name="Fireteam (WT)";
					side=1;
					faction="BS_I_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_GL_WT";
					};
				};
				class BS_I_US_Marines_2012_Fireteam_DT {
					name="Fireteam (DT)";
					side=1;
					faction="BS_I_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_DT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_GL_DT";
					};
				};
				class BS_I_US_Marines_2012_Squad_WL {
					name="Squad (WL)";
					side=1;
					faction="BS_I_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_GL_WL";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WL";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WL";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_WL";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_GL_WL";
					};
				};
				class BS_I_US_Marines_2012_Squad_WT {
					name="Squad (WT)";
					side=1;
					faction="BS_I_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_GL_WT";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WT";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WT";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_WT";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_GL_WT";
					};
				};
				class BS_I_US_Marines_2012_Squad_DT {
					name="Squad (DT)";
					side=1;
					faction="BS_I_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_DT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_GL_DT";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_DT";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_DT";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_DT";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_GL_DT";
					};
				};
				class BS_I_US_Marines_2012_AT_WL {
					name="Anti-Tank (WL)";
					side=1;
					faction="BS_I_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WL";
					};
				};
				class BS_I_US_Marines_2012_AT_WT {
					name="Anti-Tank (WT)";
					side=1;
					faction="BS_I_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WT";
					};
				};
				class BS_I_US_Marines_2012_AT_DT {
					name="Anti-Tank (DT)";
					side=1;
					faction="BS_I_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_DT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_DT";
					};
				};
			};
			class Motorized {
				name="Mechanize Infantry";
				class BS_I_US_Marines_2012_LightVehicle_WL_0 {
					name="M1240 (O-GPK/M240) (WL)";
					side=1;
					faction="BS_I_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_Marines_2012_HbmvO3BzK9I";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_WL";
					};
				};
				class BS_I_US_Marines_2012_LightVehicle_WT_0 {
					name="M1240 (O-GPK/M240) (WT)";
					side=1;
					faction="BS_I_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_Marines_2012_HbmvO3BzK9I";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_WT";
					};
				};
				class BS_I_US_Marines_2012_LightVehicle_DT_0 {
					name="M1240 (O-GPK/M240) (DT)";
					side=1;
					faction="BS_I_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_Marines_2012_HbmvO3BzK9I";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_DT";
					};
				};
				class BS_I_US_Marines_2012_LightVehicle_WL_1 {
					name="M1240 (O-GPK/M2) (WL)";
					side=1;
					faction="BS_I_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_Marines_2012_gc_5HjsAqnU";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_WL";
					};
				};
				class BS_I_US_Marines_2012_LightVehicle_WT_1 {
					name="M1240 (O-GPK/M2) (WT)";
					side=1;
					faction="BS_I_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_Marines_2012_gc_5HjsAqnU";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_WT";
					};
				};
				class BS_I_US_Marines_2012_LightVehicle_DT_1 {
					name="M1240 (O-GPK/M2) (DT)";
					side=1;
					faction="BS_I_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_Marines_2012_gc_5HjsAqnU";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_DT";
					};
				};
				class BS_I_US_Marines_2012_LightVehicle_WL_2 {
					name="M1151A1 (MCTAGS/Mk19) (WL)";
					side=1;
					faction="BS_I_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_Marines_2012_hVNgIhL9HGg";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_WL";
					};
				};
				class BS_I_US_Marines_2012_LightVehicle_WT_2 {
					name="M1151A1 (MCTAGS/Mk19) (WT)";
					side=1;
					faction="BS_I_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_Marines_2012_hVNgIhL9HGg";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_WT";
					};
				};
				class BS_I_US_Marines_2012_LightVehicle_DT_2 {
					name="M1151A1 (MCTAGS/Mk19) (DT)";
					side=1;
					faction="BS_I_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_Marines_2012_hVNgIhL9HGg";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_DT";
					};
				};
				class BS_I_US_Marines_2012_LightVehicle_WL_3 {
					name="M1151A1 (MCTAGS/M240) (WL)";
					side=1;
					faction="BS_I_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_Marines_2012_vhiXAaessfQ";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_WL";
					};
				};
				class BS_I_US_Marines_2012_LightVehicle_WT_3 {
					name="M1151A1 (MCTAGS/M240) (WT)";
					side=1;
					faction="BS_I_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_Marines_2012_vhiXAaessfQ";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_WT";
					};
				};
				class BS_I_US_Marines_2012_LightVehicle_DT_3 {
					name="M1151A1 (MCTAGS/M240) (DT)";
					side=1;
					faction="BS_I_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_Marines_2012_vhiXAaessfQ";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_DT";
					};
				};
				class BS_I_US_Marines_2012_LightVehicle_WL_4 {
					name="CGR CAT1A2 (MCTAGS/M2) (WL)";
					side=1;
					faction="BS_I_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_Marines_2012_TykxnxXFSSE";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_WL";
					};
				};
				class BS_I_US_Marines_2012_LightVehicle_WT_4 {
					name="CGR CAT1A2 (MCTAGS/M2) (WT)";
					side=1;
					faction="BS_I_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_Marines_2012_TykxnxXFSSE";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_WT";
					};
				};
				class BS_I_US_Marines_2012_LightVehicle_DT_4 {
					name="CGR CAT1A2 (MCTAGS/M2) (DT)";
					side=1;
					faction="BS_I_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_Marines_2012_TykxnxXFSSE";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_DT";
					};
				};
				class BS_I_US_Marines_2012_LightVehicle_WL_5 {
					name="CGR CAT1A2 (MCTAGS/Mk19) (WL)";
					side=1;
					faction="BS_I_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_Marines_2012_etQO4he9_9k";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_WL";
					};
				};
				class BS_I_US_Marines_2012_LightVehicle_WT_5 {
					name="CGR CAT1A2 (MCTAGS/Mk19) (WT)";
					side=1;
					faction="BS_I_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_Marines_2012_etQO4he9_9k";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_WT";
					};
				};
				class BS_I_US_Marines_2012_LightVehicle_DT_5 {
					name="CGR CAT1A2 (MCTAGS/Mk19) (DT)";
					side=1;
					faction="BS_I_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_Marines_2012_etQO4he9_9k";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_DT";
					};
				};
				class BS_I_US_Marines_2012_Tank_WL_0 {
					name="M1126 (M2) (WL) ";
					side=1;
					faction="BS_I_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_Marines_2012_xjMcmlvSuhs";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_WL";
					};
				};
				class BS_I_US_Marines_2012_Tank_WT_0 {
					name="M1126 (M2) (WT) ";
					side=1;
					faction="BS_I_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_Marines_2012_xjMcmlvSuhs";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_WT";
					};
				};
				class BS_I_US_Marines_2012_Tank_DT_0 {
					name="M1126 (M2) (DT) ";
					side=1;
					faction="BS_I_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_Marines_2012_xjMcmlvSuhs";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_DT";
					};
				};
				class BS_I_US_Marines_2012_Tank_WL_1 {
					name="M1A1FEP (WL) ";
					side=1;
					faction="BS_I_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_Marines_2012_7HljAWX87ZI";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_WL";
					};
				};
				class BS_I_US_Marines_2012_Tank_WT_1 {
					name="M1A1FEP (WT) ";
					side=1;
					faction="BS_I_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_Marines_2012_7HljAWX87ZI";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_WT";
					};
				};
				class BS_I_US_Marines_2012_Tank_DT_1 {
					name="M1A1FEP (DT) ";
					side=1;
					faction="BS_I_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_Marines_2012_7HljAWX87ZI";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_DT";
					};
				};
				class BS_I_US_Marines_2012_Tank_WL_2 {
					name="M1A1FEP (O) (WL) ";
					side=1;
					faction="BS_I_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_Marines_2012_G4soXKGJAw4";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_WL";
					};
				};
				class BS_I_US_Marines_2012_Tank_WT_2 {
					name="M1A1FEP (O) (WT) ";
					side=1;
					faction="BS_I_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_Marines_2012_G4soXKGJAw4";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_WT";
					};
				};
				class BS_I_US_Marines_2012_Tank_DT_2 {
					name="M1A1FEP (O) (DT) ";
					side=1;
					faction="BS_I_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_Marines_2012_G4soXKGJAw4";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_US_Marines_2012_AR_DT";
					};
				};
			};
		};
	};
	class West { 
		class US_Marines_2012 { 
			name="US - Marine (2012)";
			class Infantry {
				name="Infantry";
				class BS_B_US_Marines_2012_Fireteam_WL {
					name="Fireteam (WL)";
					side=2;
					faction="BS_B_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_GL_WL";
					};
				};
				class BS_B_US_Marines_2012_Fireteam_WT {
					name="Fireteam (WT)";
					side=2;
					faction="BS_B_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_GL_WT";
					};
				};
				class BS_B_US_Marines_2012_Fireteam_DT {
					name="Fireteam (DT)";
					side=2;
					faction="BS_B_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_DT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_GL_DT";
					};
				};
				class BS_B_US_Marines_2012_Squad_WL {
					name="Squad (WL)";
					side=2;
					faction="BS_B_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_GL_WL";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WL";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WL";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_WL";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_GL_WL";
					};
				};
				class BS_B_US_Marines_2012_Squad_WT {
					name="Squad (WT)";
					side=2;
					faction="BS_B_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_GL_WT";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WT";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WT";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_WT";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_GL_WT";
					};
				};
				class BS_B_US_Marines_2012_Squad_DT {
					name="Squad (DT)";
					side=2;
					faction="BS_B_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_DT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_GL_DT";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_DT";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_DT";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_DT";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_GL_DT";
					};
				};
				class BS_B_US_Marines_2012_AT_WL {
					name="Anti-Tank (WL)";
					side=2;
					faction="BS_B_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WL";
					};
				};
				class BS_B_US_Marines_2012_AT_WT {
					name="Anti-Tank (WT)";
					side=2;
					faction="BS_B_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WT";
					};
				};
				class BS_B_US_Marines_2012_AT_DT {
					name="Anti-Tank (DT)";
					side=2;
					faction="BS_B_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_DT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_DT";
					};
				};
			};
			class Motorized {
				name="Mechanize Infantry";
				class BS_B_US_Marines_2012_LightVehicle_WL_0 {
					name="M1240 (O-GPK/M240) (WL)";
					side=2;
					faction="BS_B_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_HbmvO3BzK9I";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_WL";
					};
				};
				class BS_B_US_Marines_2012_LightVehicle_WT_0 {
					name="M1240 (O-GPK/M240) (WT)";
					side=2;
					faction="BS_B_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_HbmvO3BzK9I";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_WT";
					};
				};
				class BS_B_US_Marines_2012_LightVehicle_DT_0 {
					name="M1240 (O-GPK/M240) (DT)";
					side=2;
					faction="BS_B_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_HbmvO3BzK9I";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_DT";
					};
				};
				class BS_B_US_Marines_2012_LightVehicle_WL_1 {
					name="M1240 (O-GPK/M2) (WL)";
					side=2;
					faction="BS_B_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_gc_5HjsAqnU";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_WL";
					};
				};
				class BS_B_US_Marines_2012_LightVehicle_WT_1 {
					name="M1240 (O-GPK/M2) (WT)";
					side=2;
					faction="BS_B_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_gc_5HjsAqnU";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_WT";
					};
				};
				class BS_B_US_Marines_2012_LightVehicle_DT_1 {
					name="M1240 (O-GPK/M2) (DT)";
					side=2;
					faction="BS_B_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_gc_5HjsAqnU";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_DT";
					};
				};
				class BS_B_US_Marines_2012_LightVehicle_WL_2 {
					name="M1151A1 (MCTAGS/Mk19) (WL)";
					side=2;
					faction="BS_B_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_hVNgIhL9HGg";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_WL";
					};
				};
				class BS_B_US_Marines_2012_LightVehicle_WT_2 {
					name="M1151A1 (MCTAGS/Mk19) (WT)";
					side=2;
					faction="BS_B_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_hVNgIhL9HGg";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_WT";
					};
				};
				class BS_B_US_Marines_2012_LightVehicle_DT_2 {
					name="M1151A1 (MCTAGS/Mk19) (DT)";
					side=2;
					faction="BS_B_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_hVNgIhL9HGg";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_DT";
					};
				};
				class BS_B_US_Marines_2012_LightVehicle_WL_3 {
					name="M1151A1 (MCTAGS/M240) (WL)";
					side=2;
					faction="BS_B_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_vhiXAaessfQ";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_WL";
					};
				};
				class BS_B_US_Marines_2012_LightVehicle_WT_3 {
					name="M1151A1 (MCTAGS/M240) (WT)";
					side=2;
					faction="BS_B_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_vhiXAaessfQ";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_WT";
					};
				};
				class BS_B_US_Marines_2012_LightVehicle_DT_3 {
					name="M1151A1 (MCTAGS/M240) (DT)";
					side=2;
					faction="BS_B_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_vhiXAaessfQ";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_DT";
					};
				};
				class BS_B_US_Marines_2012_LightVehicle_WL_4 {
					name="CGR CAT1A2 (MCTAGS/M2) (WL)";
					side=2;
					faction="BS_B_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_TykxnxXFSSE";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_WL";
					};
				};
				class BS_B_US_Marines_2012_LightVehicle_WT_4 {
					name="CGR CAT1A2 (MCTAGS/M2) (WT)";
					side=2;
					faction="BS_B_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_TykxnxXFSSE";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_WT";
					};
				};
				class BS_B_US_Marines_2012_LightVehicle_DT_4 {
					name="CGR CAT1A2 (MCTAGS/M2) (DT)";
					side=2;
					faction="BS_B_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_TykxnxXFSSE";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_DT";
					};
				};
				class BS_B_US_Marines_2012_LightVehicle_WL_5 {
					name="CGR CAT1A2 (MCTAGS/Mk19) (WL)";
					side=2;
					faction="BS_B_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_etQO4he9_9k";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_WL";
					};
				};
				class BS_B_US_Marines_2012_LightVehicle_WT_5 {
					name="CGR CAT1A2 (MCTAGS/Mk19) (WT)";
					side=2;
					faction="BS_B_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_etQO4he9_9k";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_WT";
					};
				};
				class BS_B_US_Marines_2012_LightVehicle_DT_5 {
					name="CGR CAT1A2 (MCTAGS/Mk19) (DT)";
					side=2;
					faction="BS_B_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_etQO4he9_9k";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_DT";
					};
				};
				class BS_B_US_Marines_2012_Tank_WL_0 {
					name="M1126 (M2) (WL) ";
					side=2;
					faction="BS_B_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_xjMcmlvSuhs";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_WL";
					};
				};
				class BS_B_US_Marines_2012_Tank_WT_0 {
					name="M1126 (M2) (WT) ";
					side=2;
					faction="BS_B_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_xjMcmlvSuhs";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_WT";
					};
				};
				class BS_B_US_Marines_2012_Tank_DT_0 {
					name="M1126 (M2) (DT) ";
					side=2;
					faction="BS_B_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_xjMcmlvSuhs";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_DT";
					};
				};
				class BS_B_US_Marines_2012_Tank_WL_1 {
					name="M1A1FEP (WL) ";
					side=2;
					faction="BS_B_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_7HljAWX87ZI";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_WL";
					};
				};
				class BS_B_US_Marines_2012_Tank_WT_1 {
					name="M1A1FEP (WT) ";
					side=2;
					faction="BS_B_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_7HljAWX87ZI";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_WT";
					};
				};
				class BS_B_US_Marines_2012_Tank_DT_1 {
					name="M1A1FEP (DT) ";
					side=2;
					faction="BS_B_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_7HljAWX87ZI";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_DT";
					};
				};
				class BS_B_US_Marines_2012_Tank_WL_2 {
					name="M1A1FEP (O) (WL) ";
					side=2;
					faction="BS_B_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_G4soXKGJAw4";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_WL";
					};
				};
				class BS_B_US_Marines_2012_Tank_WT_2 {
					name="M1A1FEP (O) (WT) ";
					side=2;
					faction="BS_B_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_G4soXKGJAw4";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_WT";
					};
				};
				class BS_B_US_Marines_2012_Tank_DT_2 {
					name="M1A1FEP (O) (DT) ";
					side=2;
					faction="BS_B_US_Marines_2012";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_G4soXKGJAw4";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_Marines_2012_AR_DT";
					};
				};
			};
		};
	};
};

class CfgPatches { 
	class bm_specops_faction_US_Marines_2012{
		author = "Broken Skull Mods";
		weapons[]={};
		requiredVersion=0.1;
		skipWhenMissingDependencies = 1;
		requiredAddons[]={
			"rhsusf_c_weapons",
			"ace_laserpointer",
			"Weapons_F_lxWS",
			"rhsusf_c_troops",
			"ace_hearing",
			"ace_medical_treatment",
			"kat_airway",
			"kat_breathing",
			"ace_rangecard",
			"ace_microdagr",
			"ace_attach",
			"ace_captives",
			"A3_Weapons_F",
			"tfar_handhelds",
			"A3_Weapons_F_Acc",
			"Tier1_Weapons_cfg",
			"ace_compat_rhs_usf3",
			"RHSUSAF_ArmorNerf",
			"kat_circulation",
			"kat_pharma",
			"ace_vector",
			"ace_compat_rhs_usf3_arsenal",
			"rhsusf_sounds",
			"ace_logistics_wirecutter",
			"A3_Weapons_F_Items",
			"ace_medical_engine",
			"ace_compat_rhs_usf3_nightvision",
			"USP_Gear_NVG",
			"ace_overheating",
			"A3_Weapons_F_Exp",
			"ace_realisticnames",
			"Weapons_1_F_lxWS_Acc",
			"ace_yardage450",
			"A3_Weapons_F_Explosives",
			"ace_explosives",
			"rhsusf_weapon_sounds",
			"ace_irlight",
			"A3_Characters_F",
			"tfar_core",
			"ace_medical_vitals",
			"ace_compat_rhs_usf3_scopes",
			"ace_scopes",
			"hlcweapons_core",
			"A3_Weapons_F_Mark",
			"ace_laser",
			"ace_optics",
			"bm_specops_faction_US_ARMA_BASE"
};
		units[]={
			"BS_O_US_Marines_2012_GL_WL",
			"BS_B_US_Marines_2012_GL_WL",
			"BS_I_US_Marines_2012_GL_WL",
			"BS_O_US_Marines_2012_Medic_WL",
			"BS_B_US_Marines_2012_Medic_WL",
			"BS_I_US_Marines_2012_Medic_WL",
			"BS_O_US_Marines_2012_AR_WL",
			"BS_B_US_Marines_2012_AR_WL",
			"BS_I_US_Marines_2012_AR_WL",
			"BS_O_US_Marines_2012_Rifleman_WL",
			"BS_B_US_Marines_2012_Rifleman_WL",
			"BS_I_US_Marines_2012_Rifleman_WL",
			"BS_O_US_Marines_2012_SNP_WL",
			"BS_B_US_Marines_2012_SNP_WL",
			"BS_I_US_Marines_2012_SNP_WL",
			"BS_O_US_Marines_2012_RTO_WL",
			"BS_B_US_Marines_2012_RTO_WL",
			"BS_I_US_Marines_2012_RTO_WL",
			"BS_O_US_Marines_2012_DIVER_WL",
			"BS_B_US_Marines_2012_DIVER_WL",
			"BS_I_US_Marines_2012_DIVER_WL",
			"BS_O_US_Marines_2012_GL_DT",
			"BS_B_US_Marines_2012_GL_DT",
			"BS_I_US_Marines_2012_GL_DT",
			"BS_O_US_Marines_2012_Medic_DT",
			"BS_B_US_Marines_2012_Medic_DT",
			"BS_I_US_Marines_2012_Medic_DT",
			"BS_O_US_Marines_2012_AR_DT",
			"BS_B_US_Marines_2012_AR_DT",
			"BS_I_US_Marines_2012_AR_DT",
			"BS_O_US_Marines_2012_Rifleman_DT",
			"BS_B_US_Marines_2012_Rifleman_DT",
			"BS_I_US_Marines_2012_Rifleman_DT",
			"BS_O_US_Marines_2012_SNP_DT",
			"BS_B_US_Marines_2012_SNP_DT",
			"BS_I_US_Marines_2012_SNP_DT",
			"BS_O_US_Marines_2012_DIVER_DT",
			"BS_B_US_Marines_2012_DIVER_DT",
			"BS_I_US_Marines_2012_DIVER_DT",
			"BS_O_US_Marines_2012_RTO_DT",
			"BS_B_US_Marines_2012_RTO_DT",
			"BS_I_US_Marines_2012_RTO_DT",
			"BS_O_US_Marines_2012_GL_WT",
			"BS_B_US_Marines_2012_GL_WT",
			"BS_I_US_Marines_2012_GL_WT",
			"BS_O_US_Marines_2012_Medic_WT",
			"BS_B_US_Marines_2012_Medic_WT",
			"BS_I_US_Marines_2012_Medic_WT",
			"BS_O_US_Marines_2012_AR_WT",
			"BS_B_US_Marines_2012_AR_WT",
			"BS_I_US_Marines_2012_AR_WT",
			"BS_O_US_Marines_2012_Rifleman_WT",
			"BS_B_US_Marines_2012_Rifleman_WT",
			"BS_I_US_Marines_2012_Rifleman_WT",
			"BS_O_US_Marines_2012_SNP_WT",
			"BS_B_US_Marines_2012_SNP_WT",
			"BS_I_US_Marines_2012_SNP_WT",
			"BS_O_US_Marines_2012_RTO_WT",
			"BS_B_US_Marines_2012_RTO_WT",
			"BS_I_US_Marines_2012_RTO_WT",
			"BS_O_US_Marines_2012_DIVER_WT",
			"BS_B_US_Marines_2012_DIVER_WT",
			"BS_I_US_Marines_2012_DIVER_WT",
			"BS_B_US_Marines_2012_w1_nnxkMANQ",
			"BS_O_US_Marines_2012_w1_nnxkMANQ",
			"BS_I_US_Marines_2012_w1_nnxkMANQ",
			"BS_B_US_Marines_2012_NQKL6j9ns90",
			"BS_O_US_Marines_2012_NQKL6j9ns90",
			"BS_I_US_Marines_2012_NQKL6j9ns90",
			"BS_B_US_Marines_2012_HbmvO3BzK9I",
			"BS_O_US_Marines_2012_HbmvO3BzK9I",
			"BS_I_US_Marines_2012_HbmvO3BzK9I",
			"BS_B_US_Marines_2012_gc_5HjsAqnU",
			"BS_O_US_Marines_2012_gc_5HjsAqnU",
			"BS_I_US_Marines_2012_gc_5HjsAqnU",
			"BS_B_US_Marines_2012_RCmTyjDFTXc",
			"BS_O_US_Marines_2012_RCmTyjDFTXc",
			"BS_I_US_Marines_2012_RCmTyjDFTXc",
			"BS_B_US_Marines_2012_hVNgIhL9HGg",
			"BS_O_US_Marines_2012_hVNgIhL9HGg",
			"BS_I_US_Marines_2012_hVNgIhL9HGg",
			"BS_B_US_Marines_2012_vhiXAaessfQ",
			"BS_O_US_Marines_2012_vhiXAaessfQ",
			"BS_I_US_Marines_2012_vhiXAaessfQ",
			"BS_B_US_Marines_2012_fo7uZLozwtw",
			"BS_O_US_Marines_2012_fo7uZLozwtw",
			"BS_I_US_Marines_2012_fo7uZLozwtw",
			"BS_B_US_Marines_2012_OcMkBvQ0lYU",
			"BS_O_US_Marines_2012_OcMkBvQ0lYU",
			"BS_I_US_Marines_2012_OcMkBvQ0lYU",
			"BS_B_US_Marines_2012_6fUhjeOGeXM",
			"BS_O_US_Marines_2012_6fUhjeOGeXM",
			"BS_I_US_Marines_2012_6fUhjeOGeXM",
			"BS_B_US_Marines_2012_w5amcOnnEM0",
			"BS_O_US_Marines_2012_w5amcOnnEM0",
			"BS_I_US_Marines_2012_w5amcOnnEM0",
			"BS_B_US_Marines_2012_Kc24xKIvVKI",
			"BS_O_US_Marines_2012_Kc24xKIvVKI",
			"BS_I_US_Marines_2012_Kc24xKIvVKI",
			"BS_B_US_Marines_2012_xjMcmlvSuhs",
			"BS_O_US_Marines_2012_xjMcmlvSuhs",
			"BS_I_US_Marines_2012_xjMcmlvSuhs",
			"BS_B_US_Marines_2012_7K59JMh3iuI",
			"BS_O_US_Marines_2012_7K59JMh3iuI",
			"BS_I_US_Marines_2012_7K59JMh3iuI",
			"BS_B_US_Marines_2012_qZXAeEnWjzw",
			"BS_O_US_Marines_2012_qZXAeEnWjzw",
			"BS_I_US_Marines_2012_qZXAeEnWjzw",
			"BS_B_US_Marines_2012_19G6dLT4qPA",
			"BS_O_US_Marines_2012_19G6dLT4qPA",
			"BS_I_US_Marines_2012_19G6dLT4qPA",
			"BS_B_US_Marines_2012_TykxnxXFSSE",
			"BS_O_US_Marines_2012_TykxnxXFSSE",
			"BS_I_US_Marines_2012_TykxnxXFSSE",
			"BS_B_US_Marines_2012_etQO4he9_9k",
			"BS_O_US_Marines_2012_etQO4he9_9k",
			"BS_I_US_Marines_2012_etQO4he9_9k",
			"BS_B_US_Marines_2012_7HljAWX87ZI",
			"BS_O_US_Marines_2012_7HljAWX87ZI",
			"BS_I_US_Marines_2012_7HljAWX87ZI",
			"BS_B_US_Marines_2012_G4soXKGJAw4",
			"BS_O_US_Marines_2012_G4soXKGJAw4",
			"BS_I_US_Marines_2012_G4soXKGJAw4"
};
	};
};
class CfgFactionClasses {
	// As Friendly (BluFOR)
	class BS_B_US_Marines_2012_BASE { 
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
		brokenSkullArsenal[]={"rhs_weap_m4a1_carryhandle_m203S","ACE_acc_pointer_green","rhsusf_acc_su230a_mrds","75Rnd_556x45_Stanag_lxWS","rhs_weap_M320","rhs_mag_M441_HE","rhs_uniform_FROG01_wd","ACE_EarPlugs","ACE_morphine","kat_guedel","kat_chestSeal","ACE_tourniquet","ACE_packingBandage","ACE_quikclot","ACE_RangeCard","ACE_microDAGR","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_CableTie","rhsusf_spc_teamleader","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","rhsusf_lwh_helmet_marpatwd_ess","rhsusf_bino_m24","ItemMap","TFAR_anprc152","ItemCompass","TFAR_microdagr","rhs_m4_acog_usmc","acc_pointer_IR","rhsusf_acc_ACOG_USMC","rhs_mag_30Rnd_556x45_M855_Stanag","Tier1_Harris_Bipod_Black","rhsusf_weap_m9","ACE_surgicalKit","rhsusf_spc_rifleman","kat_accuvac","kat_AED","kat_stethoscope","ACE_adenosine","ACE_elasticBandage","kat_larynx","kat_naloxone","kat_IO_FAST","kat_ncdKit","kat_aatKit","ACE_plasmaIV","ACE_plasmaIV_500","kat_Pulseoximeter","ACE_splint","ACE_suture","ACE_Vector","ItemRadio","ItemWatch","rhs_weap_m249_pip","rhsusf_acc_ACOG2_USMC","rhsusf_200rnd_556x45_mixed_box","rhsusf_acc_saw_bipod","rhsusf_mag_15Rnd_9x19_FMJ","rhsusf_spc_mg","rhs_mag_an_m8hc","rhs_mag_m67","ItemGPS","rhs_weap_m4a1_mstock","muzzle_snds_M","rhsusf_acc_anpeq15A","rhsusf_acc_ACOG_RMR","rhsusf_weap_m1911a1","rhsusf_mag_7x45acp_MHP","rhsusf_spc_corpsman","ACE_wirecutter","rhsusf_lwh_helmet_marpatwd_headset_blk","rhs_weap_sr25","rhsusf_acc_SR25S","rhsusf_acc_M8541_mrds","rhsusf_20Rnd_762x51_SR25_mk316_special_Mag","rhsusf_spc_marksman","rhsusf_acc_anpeq15_bk","rhs_weap_m72a7","rhs_m72a7_mag","FirstAidKit","rhsusf_ANPVS_14","rhsusf_lwh_helmet_marpatwd_headset","USP_PVS31","rhs_weap_smaw","rhs_weap_optic_smaw","ACE_SpareBarrel","optic_ERCO_khk_F","optic_Hamr_lush_lxWS","rhsusf_acc_eotech_552_wd","rhsusf_lwh_helmet_marpatwd_blk_ess","ACE_Yardage450","rhs_weap_fim92","rhs_fim92_mag","DemoCharge_Remote_Mag","rhsusf_lwh_helmet_marpatwd","rhsusf_bino_leopold_mk4","rhs_weap_m40a5","ACE_DBAL_A3_Red","rhsusf_mag_15Rnd_9x19_JHP","rhsusf_spc_iar","Tier1_KAC_556_QDC_CQB_Black","Tier1_30Rnd_556x45_M856_EMag","rhsusf_acc_grip2","U_B_Wetsuit","V_RebreatherB","rhsusf_lwh_helmet_marpatd_headset","Laserdesignator_01_khk_F","Laserbatteries","rhs_weap_m4a1_m203s_d","rhsusf_acc_anpeq16a","rhsusf_acc_eotech_xps3","rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan","rhsusf_acc_grip_m203_d","rhs_uniform_FROG01_d","rhsusf_spc_patchless_radio","rhsusf_lwh_helmet_marpatd_ess","USP_PVS15_WP_TAR","rhs_weap_m4a1_d","rhsusf_spc_light","rhsusf_lwh_helmet_marpatd","USP_PVS15_TAR","rhs_weap_m249_pip_L","rhsusf_acc_g33_T1","rhsusf_acc_su230a_mrds_c","rhsusf_acc_grip1","USP_PVS15_WP","rhs_weap_sr25_ec","rhsusf_acc_M8541","rhsusf_20Rnd_762x51_SR25_m62_Mag","rhsusf_acc_harris_bipod","rhs_weap_m4a1_d_mstock","Tier1_SOCOM556_2_DE","rhs_mag_30Rnd_556x45_Mk318_SCAR","rhs_weap_mk17_LB","suppressor_h_lxWS","rhsusf_acc_anpeq16a_top","rhsusf_acc_g33_xps3","rhs_mag_20Rnd_SCAR_762x51_m80_ball","rhsusf_acc_kac_grip","rhsusf_spc_patchless","rhs_weap_m249_light_L","rhs_mag_smaw_SR","rhs_weap_m16a4_imod","optic_tws","hlc_30rnd_556x45_EPR","rhs_mag_mk84","rhs_weap_m40a5_d","rhsusf_acc_nxs_3515x50f1_h58_sun","rhsusf_5Rnd_762x51_AICS_m118_special_Mag","rhsusf_acc_harris_swivel","Laserdesignator","Tier1_SOCOM556_2_Mini_DE","rhs_mag_30Rnd_556x45_M855A1_EPM_Pull","USP_PVS15","Tier1_SandmanS_Desert","Tier1_Mk18_LA5_M603V_FL","optic_tws_mg","rhs_weap_M136","Binocular"};

		garage[]={{"BS_B_US_Marines_2012_w1_nnxkMANQ",2,700,-1},{"BS_B_US_Marines_2012_NQKL6j9ns90",0,50,-1},{"BS_B_US_Marines_2012_HbmvO3BzK9I",1,500,2},{"BS_B_US_Marines_2012_gc_5HjsAqnU",1,500,2},{"BS_B_US_Marines_2012_RCmTyjDFTXc",2,10000,-1},{"BS_B_US_Marines_2012_hVNgIhL9HGg",1,500,2},{"BS_B_US_Marines_2012_vhiXAaessfQ",1,500,2},{"BS_B_US_Marines_2012_fo7uZLozwtw",0,10,-1},{"BS_B_US_Marines_2012_OcMkBvQ0lYU",0,70,-1},{"BS_B_US_Marines_2012_6fUhjeOGeXM",0,10,-1},{"BS_B_US_Marines_2012_w5amcOnnEM0",0,50,-1},{"BS_B_US_Marines_2012_Kc24xKIvVKI",0,10,-1},{"BS_B_US_Marines_2012_xjMcmlvSuhs",2,40,1},{"BS_B_US_Marines_2012_7K59JMh3iuI",1,500,3},{"BS_B_US_Marines_2012_qZXAeEnWjzw",1,500,3},{"BS_B_US_Marines_2012_19G6dLT4qPA",2,10000,-1},{"BS_B_US_Marines_2012_TykxnxXFSSE",1,500,2},{"BS_B_US_Marines_2012_etQO4he9_9k",1,500,2},{"BS_B_US_Marines_2012_7HljAWX87ZI",2,1500,1},{"BS_B_US_Marines_2012_G4soXKGJAw4",2,1500,1}};
		SamSystem[]={};
		SearchLight[]={};
		StaticLowMG[]={{"BS_B_US_Marines_2012_6fUhjeOGeXM","M2HB (M3)"}};
		StaticHighMG[]={{"BS_B_US_Marines_2012_Kc24xKIvVKI","M2HB (M3 AA)"}};
		StaticMotar[]={{"BS_B_US_Marines_2012_fo7uZLozwtw","M252"}};
		StaticAntiAir[]={{"BS_B_US_Marines_2012_OcMkBvQ0lYU","FIM-92F (DMS)"},{"BS_B_US_Marines_2012_w5amcOnnEM0","M41A4 TOW"}};
		VehicleTechnicals[]={"BS_B_US_Marines_2012_HbmvO3BzK9I","BS_B_US_Marines_2012_gc_5HjsAqnU","BS_B_US_Marines_2012_hVNgIhL9HGg","BS_B_US_Marines_2012_vhiXAaessfQ","BS_B_US_Marines_2012_TykxnxXFSSE","BS_B_US_Marines_2012_etQO4he9_9k"};
		VehicleAntiAircraft[]={};
		VehicleTanks[]={"BS_B_US_Marines_2012_xjMcmlvSuhs","BS_B_US_Marines_2012_7HljAWX87ZI","BS_B_US_Marines_2012_G4soXKGJAw4"};
		VehicleTransport[]={"BS_B_US_Marines_2012_7K59JMh3iuI","BS_B_US_Marines_2012_qZXAeEnWjzw"};
	};
	// As Friendly (BluFOR)
	class BS_B_US_Marines_2012 : BS_B_US_Marines_2012_BASE { 
		useForSpecOps = 1;   
		displayName = "US - Marine (2012)";
		side = 1;       
		flag = "\A3\Data_F\Flags\flag_US_CO.paa";
		icon = "\A3\Data_F\Flags\flag_US_CO.paa";
		priority = 0; 
	};
	// As Opposite Forces (OpFOR)
	class BS_O_US_Marines_2012 : BS_B_US_Marines_2012_BASE { 
		useForSpecOps = 1;
		displayName = "US - Marine (2012)";
		side = 0;       
		flag = "\A3\Data_F\Flags\flag_US_CO.paa";
		icon = "\A3\Data_F\Flags\flag_US_CO.paa";
		priority = 0; 
	};
	// As Independent (Independent)
	class BS_I_US_Marines_2012 : BS_B_US_Marines_2012_BASE { 
		useForSpecOps = 1;
		displayName = "US - Marine (2012)";
		side = 2;       
		flag = "\A3\Data_F\Flags\flag_US_CO.paa";
		icon = "\A3\Data_F\Flags\flag_US_CO.paa";
		priority = 0; 
	};
};
// As Friendly (BluFOR)
class SpecOps_Module_BLUFOR_Factions { 
	class BS_B_US_Marines_2012 { name = "US - Marine (2012)"; value = "BS_B_US_Marines_2012"; };  
};
// As Friendly (BluFOR)
class SpecOps_Module_OPFOR_Factions { 
	class BS_O_US_Marines_2012 { name = "US - Marine (2012)"; value = "BS_O_US_Marines_2012"; };  
};
// As Friendly (BluFOR)
class SpecOps_Module_GRE_Factions { 
	class BS_I_US_Marines_2012 { name = "US - Marine (2012)"; value = "BS_I_US_Marines_2012"; };  
};