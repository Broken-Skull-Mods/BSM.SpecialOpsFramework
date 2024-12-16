
#include "\bsm_faction_usa_ranger_2000s\audio.hpp"


class CfgVehicles {
	class B_Survivor_F;
	class I_G_Survivor_F;
	class O_G_Survivor_F; 
	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_Rifleman_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Rifleman (Woodland)"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"TanoanHead_A3_05", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"hlc_rifle_M4","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_M4","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_HYDRATION_PACK_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_M4","rhsusf_acc_SF3P556","rhsusf_acc_anpeq15side_bk","rhsusf_acc_ACOG_RMR",{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",30},{},""},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",1,30}}},{"USP_CRYE_JPC_ASLT_RGR",{{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",27,30}}},{"USP_HYDRATION_PACK_RGR",{{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",6,30}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_Rifleman_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Rifleman (Woodland)"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"TanoanHead_A3_05", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"hlc_rifle_M4","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_M4","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_HYDRATION_PACK_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_M4","rhsusf_acc_SF3P556","rhsusf_acc_anpeq15side_bk","rhsusf_acc_ACOG_RMR",{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",30},{},""},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",1,30}}},{"USP_CRYE_JPC_ASLT_RGR",{{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",27,30}}},{"USP_HYDRATION_PACK_RGR",{{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",6,30}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_Rifleman_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Rifleman (Woodland)"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"TanoanHead_A3_05", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"hlc_rifle_M4","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_M4","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_HYDRATION_PACK_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_M4","rhsusf_acc_SF3P556","rhsusf_acc_anpeq15side_bk","rhsusf_acc_ACOG_RMR",{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",30},{},""},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",1,30}}},{"USP_CRYE_JPC_ASLT_RGR",{{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",27,30}}},{"USP_HYDRATION_PACK_RGR",{{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",6,30}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_GL_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Grenadier (Woodland)"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"TanoanHead_A3_01", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"hlc_rifle_m4m203","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_m4m203","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_m4m203","","Tier1_M249_LA5_M600V_Black_FL","rhsusf_acc_ACOG_RMR",{"ACE_30Rnd_556x45_Stanag_Mk262_mag",30},{"rhs_mag_M433_HEDP",1},""},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",1,30}}},{"USP_CRYE_JPC_GRB_RGR",{{"1Rnd_HE_Grenade_shell",23,1},{"1Rnd_Smoke_Grenade_shell",13,1},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",9,30}}},{"USP_ZIPON_PACK_CPC_RGR",{{"1Rnd_HE_Grenade_shell",21,1},{"1Rnd_Smoke_Grenade_shell",12,1},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",8,30}}},"USP_HEAD_MICH_TC2002_TAN","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_GL_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Grenadier (Woodland)"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"TanoanHead_A3_01", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"hlc_rifle_m4m203","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_m4m203","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_m4m203","","Tier1_M249_LA5_M600V_Black_FL","rhsusf_acc_ACOG_RMR",{"ACE_30Rnd_556x45_Stanag_Mk262_mag",30},{"rhs_mag_M433_HEDP",1},""},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",1,30}}},{"USP_CRYE_JPC_GRB_RGR",{{"1Rnd_HE_Grenade_shell",23,1},{"1Rnd_Smoke_Grenade_shell",13,1},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",9,30}}},{"USP_ZIPON_PACK_CPC_RGR",{{"1Rnd_HE_Grenade_shell",21,1},{"1Rnd_Smoke_Grenade_shell",12,1},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",8,30}}},"USP_HEAD_MICH_TC2002_TAN","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_GL_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Grenadier (Woodland)"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"TanoanHead_A3_01", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"hlc_rifle_m4m203","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_m4m203","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_m4m203","","Tier1_M249_LA5_M600V_Black_FL","rhsusf_acc_ACOG_RMR",{"ACE_30Rnd_556x45_Stanag_Mk262_mag",30},{"rhs_mag_M433_HEDP",1},""},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",1,30}}},{"USP_CRYE_JPC_GRB_RGR",{{"1Rnd_HE_Grenade_shell",23,1},{"1Rnd_Smoke_Grenade_shell",13,1},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",9,30}}},{"USP_ZIPON_PACK_CPC_RGR",{{"1Rnd_HE_Grenade_shell",21,1},{"1Rnd_Smoke_Grenade_shell",12,1},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",8,30}}},"USP_HEAD_MICH_TC2002_TAN","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_AR_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Machine Gunner (Woodland)"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"TanoanHead_A3_05", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_BLK2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_BLK2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"Tier1_MK48_Mod1_Desert","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_MK48_Mod1_Desert","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_MK48_Mod1_Desert","rhsusf_acc_ARDEC_M240","Tier1_Mk48Mod1_LA5_M600V_Black","Tier1_EXPS3_0_G33_Tano_Up",{"hlc_200Rnd_762x51_B_M60E4",200},{},"Tier1_SAW_Bipod_2_Desert"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"USP_CRYE_JPC_MGB_RGR",{{"hlc_200Rnd_762x51_B_M60E4",1,200}}},{"USP_REEBOW_3DAP_RGR",{{"hlc_200Rnd_762x51_B_M60E4",1,200}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_BLK2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_AR_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Machine Gunner (Woodland)"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"TanoanHead_A3_05", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_BLK2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_BLK2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"Tier1_MK48_Mod1_Desert","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_MK48_Mod1_Desert","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_MK48_Mod1_Desert","rhsusf_acc_ARDEC_M240","Tier1_Mk48Mod1_LA5_M600V_Black","Tier1_EXPS3_0_G33_Tano_Up",{"hlc_200Rnd_762x51_B_M60E4",200},{},"Tier1_SAW_Bipod_2_Desert"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"USP_CRYE_JPC_MGB_RGR",{{"hlc_200Rnd_762x51_B_M60E4",1,200}}},{"USP_REEBOW_3DAP_RGR",{{"hlc_200Rnd_762x51_B_M60E4",1,200}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_BLK2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_AR_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Machine Gunner (Woodland)"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"TanoanHead_A3_05", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_BLK2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_BLK2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"Tier1_MK48_Mod1_Desert","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_MK48_Mod1_Desert","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_MK48_Mod1_Desert","rhsusf_acc_ARDEC_M240","Tier1_Mk48Mod1_LA5_M600V_Black","Tier1_EXPS3_0_G33_Tano_Up",{"hlc_200Rnd_762x51_B_M60E4",200},{},"Tier1_SAW_Bipod_2_Desert"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"USP_CRYE_JPC_MGB_RGR",{{"hlc_200Rnd_762x51_B_M60E4",1,200}}},{"USP_REEBOW_3DAP_RGR",{{"hlc_200Rnd_762x51_B_M60E4",1,200}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_BLK2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_SNP_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Sniper (Woodland)"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_09", "Male02ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"hlc_rifle_M14dmr_Rail","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_M14dmr_Rail","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_M14dmr_Rail","hlc_muzzle_Gunfighter_comp","","rhsusf_acc_LEUPOLDMK4",{"ACE_20Rnd_762x51_Mag_SD",20},{},""},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"ACE_20Rnd_762x51_Mag_SD",1,20}}},{"USP_EAGLE_CIRAS_LOAD",{{"ACE_20Rnd_762x51_Mag_SD",18,20}}},{"B_Kitbag_rgr",{{"ACE_20Rnd_762x51_Mag_SD",23,20}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_SNP_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Sniper (Woodland)"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_09", "Male02ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"hlc_rifle_M14dmr_Rail","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_M14dmr_Rail","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_M14dmr_Rail","hlc_muzzle_Gunfighter_comp","","rhsusf_acc_LEUPOLDMK4",{"ACE_20Rnd_762x51_Mag_SD",20},{},""},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"ACE_20Rnd_762x51_Mag_SD",1,20}}},{"USP_EAGLE_CIRAS_LOAD",{{"ACE_20Rnd_762x51_Mag_SD",18,20}}},{"B_Kitbag_rgr",{{"ACE_20Rnd_762x51_Mag_SD",23,20}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_SNP_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Sniper (Woodland)"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_09", "Male02ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"hlc_rifle_M14dmr_Rail","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_M14dmr_Rail","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_M14dmr_Rail","hlc_muzzle_Gunfighter_comp","","rhsusf_acc_LEUPOLDMK4",{"ACE_20Rnd_762x51_Mag_SD",20},{},""},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"ACE_20Rnd_762x51_Mag_SD",1,20}}},{"USP_EAGLE_CIRAS_LOAD",{{"ACE_20Rnd_762x51_Mag_SD",18,20}}},{"B_Kitbag_rgr",{{"ACE_20Rnd_762x51_Mag_SD",23,20}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_DIVER_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Special (Woodland)"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_05", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "TFAR_bussole";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d_grip","","rhsusf_acc_anpeq15side_bk","rhsusf_acc_ACOG_d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",1,30}}},{"USP_CRYE_JPC_DMB_RGR",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",23,30}}},{"TFAR_bussole",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",3,30}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_DIVER_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Special (Woodland)"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_05", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "TFAR_bussole";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d_grip","","rhsusf_acc_anpeq15side_bk","rhsusf_acc_ACOG_d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",1,30}}},{"USP_CRYE_JPC_DMB_RGR",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",23,30}}},{"TFAR_bussole",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",3,30}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_DIVER_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Special (Woodland)"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_05", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "TFAR_bussole";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d_grip","","rhsusf_acc_anpeq15side_bk","rhsusf_acc_ACOG_d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",1,30}}},{"USP_CRYE_JPC_DMB_RGR",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",23,30}}},{"TFAR_bussole",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",3,30}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_RTO_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Anti-Tank (Woodland)"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_13", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_d_grip","rhs_weap_maaws","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d_grip","rhs_weap_maaws","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_PATROL_PACK_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d_grip","","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{"rhs_weap_maaws","","","",{"rhs_mag_maaws_HEDP",1},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",1}}},{"V_PlateCarrierGL_rgr",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",14,30}}},{"USP_PATROL_PACK_RGR",{{"MRAWS_HEAT_F",1,1},{"MRAWS_HE_F",1,1},{"rhs_mag_maaws_HEDP",1,1}}},"USP_HEAD_MICH_TC2002_TAN","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_RTO_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Anti-Tank (Woodland)"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_13", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_d_grip","rhs_weap_maaws","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d_grip","rhs_weap_maaws","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_PATROL_PACK_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d_grip","","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{"rhs_weap_maaws","","","",{"rhs_mag_maaws_HEDP",1},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",1}}},{"V_PlateCarrierGL_rgr",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",14,30}}},{"USP_PATROL_PACK_RGR",{{"MRAWS_HEAT_F",1,1},{"MRAWS_HE_F",1,1},{"rhs_mag_maaws_HEDP",1,1}}},"USP_HEAD_MICH_TC2002_TAN","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_RTO_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Anti-Tank (Woodland)"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_13", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_d_grip","rhs_weap_maaws","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d_grip","rhs_weap_maaws","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_PATROL_PACK_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d_grip","","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{"rhs_weap_maaws","","","",{"rhs_mag_maaws_HEDP",1},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",1}}},{"V_PlateCarrierGL_rgr",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",14,30}}},{"USP_PATROL_PACK_RGR",{{"MRAWS_HEAT_F",1,1},{"MRAWS_HE_F",1,1},{"rhs_mag_maaws_HEDP",1,1}}},"USP_HEAD_MICH_TC2002_TAN","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_Medic_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Doctor (Woodland)"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"TanoanHead_A3_06", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d_grip","","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"kat_accuvac",1},{"kat_stethoscope",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"USP_CRYE_JPC_DMB_RGR",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",23,30}}},{"B_Kitbag_rgr",{{"ACE_adenosine",2},{"ACE_elasticBandage",15},{"ACE_packingBandage",15},{"ACE_quikclot",15},{"ACE_morphine",4},{"ACE_epinephrine",4},{"ACE_plasmaIV",3},{"ACE_plasmaIV_500",6},{"ACE_splint",2},{"ACE_suture",12},{"ACE_tourniquet",4},{"kat_larynx",6},{"kat_naloxone",2},{"kat_IO_FAST",7},{"kat_ncdKit",2},{"kat_aatKit",12},{"kat_chestSeal",6},{"kat_Pulseoximeter",3},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",9,30}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_Medic_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Doctor (Woodland)"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"TanoanHead_A3_06", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d_grip","","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"kat_accuvac",1},{"kat_stethoscope",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"USP_CRYE_JPC_DMB_RGR",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",23,30}}},{"B_Kitbag_rgr",{{"ACE_adenosine",2},{"ACE_elasticBandage",15},{"ACE_packingBandage",15},{"ACE_quikclot",15},{"ACE_morphine",4},{"ACE_epinephrine",4},{"ACE_plasmaIV",3},{"ACE_plasmaIV_500",6},{"ACE_splint",2},{"ACE_suture",12},{"ACE_tourniquet",4},{"kat_larynx",6},{"kat_naloxone",2},{"kat_IO_FAST",7},{"kat_ncdKit",2},{"kat_aatKit",12},{"kat_chestSeal",6},{"kat_Pulseoximeter",3},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",9,30}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_Medic_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Doctor (Woodland)"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"TanoanHead_A3_06", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d_grip","","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"kat_accuvac",1},{"kat_stethoscope",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"USP_CRYE_JPC_DMB_RGR",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",23,30}}},{"B_Kitbag_rgr",{{"ACE_adenosine",2},{"ACE_elasticBandage",15},{"ACE_packingBandage",15},{"ACE_quikclot",15},{"ACE_morphine",4},{"ACE_epinephrine",4},{"ACE_plasmaIV",3},{"ACE_plasmaIV_500",6},{"ACE_splint",2},{"ACE_suture",12},{"ACE_tourniquet",4},{"kat_larynx",6},{"kat_naloxone",2},{"kat_IO_FAST",7},{"kat_ncdKit",2},{"kat_aatKit",12},{"kat_chestSeal",6},{"kat_Pulseoximeter",3},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",9,30}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_VAR_0_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 1"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_13", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_THM_BEANIE_RGR"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_THM_BEANIE_RGR"}; 
		weapons[] = {"rhs_weap_m24sws_wd","rhs_weap_maaws","rhs_weap_M320","Laserdesignator"}; 
		respawnWeapons[] = {"rhs_weap_m24sws_wd","rhs_weap_maaws","rhs_weap_M320","Laserdesignator"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m24sws_wd","","","rhsusf_acc_LEUPOLDMK4_wd",{"rhsusf_5Rnd_762x51_m118_special_Mag",5},{},""},{"rhs_weap_maaws","","","",{"rhs_mag_maaws_HEAT",1},{},""},{"rhs_weap_M320","","","",{"rhs_mag_M441_HE",1},{},""},{"rhs_uniform_g3_rgr",{}},{"USP_EAGLE_CIRAS",{}},{"USP_REEBOW_3DAP_ACC1_RGR",{{"MRAWS_HE_F",1,1},{"MRAWS_HEAT_F",1,1},{"rhs_mag_maaws_HEDP",1,1}}},"USP_THM_BEANIE_RGR","",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_VAR_0_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 1"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_13", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_THM_BEANIE_RGR"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_THM_BEANIE_RGR"}; 
		weapons[] = {"rhs_weap_m24sws_wd","rhs_weap_maaws","rhs_weap_M320","Laserdesignator"}; 
		respawnWeapons[] = {"rhs_weap_m24sws_wd","rhs_weap_maaws","rhs_weap_M320","Laserdesignator"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m24sws_wd","","","rhsusf_acc_LEUPOLDMK4_wd",{"rhsusf_5Rnd_762x51_m118_special_Mag",5},{},""},{"rhs_weap_maaws","","","",{"rhs_mag_maaws_HEAT",1},{},""},{"rhs_weap_M320","","","",{"rhs_mag_M441_HE",1},{},""},{"rhs_uniform_g3_rgr",{}},{"USP_EAGLE_CIRAS",{}},{"USP_REEBOW_3DAP_ACC1_RGR",{{"MRAWS_HE_F",1,1},{"MRAWS_HEAT_F",1,1},{"rhs_mag_maaws_HEDP",1,1}}},"USP_THM_BEANIE_RGR","",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_VAR_0_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 1"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_13", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_THM_BEANIE_RGR"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_THM_BEANIE_RGR"}; 
		weapons[] = {"rhs_weap_m24sws_wd","rhs_weap_maaws","rhs_weap_M320","Laserdesignator"}; 
		respawnWeapons[] = {"rhs_weap_m24sws_wd","rhs_weap_maaws","rhs_weap_M320","Laserdesignator"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m24sws_wd","","","rhsusf_acc_LEUPOLDMK4_wd",{"rhsusf_5Rnd_762x51_m118_special_Mag",5},{},""},{"rhs_weap_maaws","","","",{"rhs_mag_maaws_HEAT",1},{},""},{"rhs_weap_M320","","","",{"rhs_mag_M441_HE",1},{},""},{"rhs_uniform_g3_rgr",{}},{"USP_EAGLE_CIRAS",{}},{"USP_REEBOW_3DAP_ACC1_RGR",{{"MRAWS_HE_F",1,1},{"MRAWS_HEAT_F",1,1},{"rhs_mag_maaws_HEDP",1,1}}},"USP_THM_BEANIE_RGR","",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_VAR_1_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 2"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_04", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","rhsusf_opscore_mar_ut_pelt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","rhsusf_opscore_mar_ut_pelt"}; 
		weapons[] = {"rhs_weap_mk17_STD_grip3","rhs_weap_fim92","rhsusf_weap_m9","Laserdesignator"}; 
		respawnWeapons[] = {"rhs_weap_mk17_STD_grip3","rhs_weap_fim92","rhsusf_weap_m9","Laserdesignator"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC10_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_mk17_STD_grip3","rhsgref_sdn6_suppressor","rhsusf_acc_anpeq15side","rhsusf_acc_compm4",{"rhs_mag_20Rnd_SCAR_762x51_m61_ap",20},{},"rhsusf_acc_grip2"},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1}}},{},{"USP_REEBOW_3DAP_ACC10_RGR",{{"optic_Holosight_arid_F",1},{"optic_Holosight_blk_F",1},{"optic_Holosight_khk_F",1},{"optic_Holosight_lush_F",1},{"optic_Holosight",1},{"optic_Holosight_smg_blk_F",1},{"optic_Holosight_smg_khk_F",1},{"optic_Holosight_smg",1},{"rhsusf_acc_EOTECH",1},{"rhsusf_acc_eotech_xps3",1},{"rhsusf_acc_rvg_blk",1},{"rhsusf_acc_rvg_de",1},{"rhsusf_acc_grip4_bipod",1},{"rhsusf_acc_saw_lw_bipod",1},{"rhsusf_acc_saw_bipod",1},{"rhsusf_acc_grip4",1},{"rhsusf_acc_tdstubby_blk",1},{"rhsusf_acc_tdstubby_tan",1},{"rhsusf_acc_grip3",1},{"rhsusf_acc_grip3_tan",1},{"rhsusf_acc_grip2",1},{"rhsusf_acc_grip2_tan",1}}},"rhsusf_opscore_mar_ut_pelt","",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_VAR_1_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 2"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_04", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","rhsusf_opscore_mar_ut_pelt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","rhsusf_opscore_mar_ut_pelt"}; 
		weapons[] = {"rhs_weap_mk17_STD_grip3","rhs_weap_fim92","rhsusf_weap_m9","Laserdesignator"}; 
		respawnWeapons[] = {"rhs_weap_mk17_STD_grip3","rhs_weap_fim92","rhsusf_weap_m9","Laserdesignator"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC10_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_mk17_STD_grip3","rhsgref_sdn6_suppressor","rhsusf_acc_anpeq15side","rhsusf_acc_compm4",{"rhs_mag_20Rnd_SCAR_762x51_m61_ap",20},{},"rhsusf_acc_grip2"},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1}}},{},{"USP_REEBOW_3DAP_ACC10_RGR",{{"optic_Holosight_arid_F",1},{"optic_Holosight_blk_F",1},{"optic_Holosight_khk_F",1},{"optic_Holosight_lush_F",1},{"optic_Holosight",1},{"optic_Holosight_smg_blk_F",1},{"optic_Holosight_smg_khk_F",1},{"optic_Holosight_smg",1},{"rhsusf_acc_EOTECH",1},{"rhsusf_acc_eotech_xps3",1},{"rhsusf_acc_rvg_blk",1},{"rhsusf_acc_rvg_de",1},{"rhsusf_acc_grip4_bipod",1},{"rhsusf_acc_saw_lw_bipod",1},{"rhsusf_acc_saw_bipod",1},{"rhsusf_acc_grip4",1},{"rhsusf_acc_tdstubby_blk",1},{"rhsusf_acc_tdstubby_tan",1},{"rhsusf_acc_grip3",1},{"rhsusf_acc_grip3_tan",1},{"rhsusf_acc_grip2",1},{"rhsusf_acc_grip2_tan",1}}},"rhsusf_opscore_mar_ut_pelt","",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_VAR_1_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 2"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_04", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","rhsusf_opscore_mar_ut_pelt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","rhsusf_opscore_mar_ut_pelt"}; 
		weapons[] = {"rhs_weap_mk17_STD_grip3","rhs_weap_fim92","rhsusf_weap_m9","Laserdesignator"}; 
		respawnWeapons[] = {"rhs_weap_mk17_STD_grip3","rhs_weap_fim92","rhsusf_weap_m9","Laserdesignator"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC10_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_mk17_STD_grip3","rhsgref_sdn6_suppressor","rhsusf_acc_anpeq15side","rhsusf_acc_compm4",{"rhs_mag_20Rnd_SCAR_762x51_m61_ap",20},{},"rhsusf_acc_grip2"},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1}}},{},{"USP_REEBOW_3DAP_ACC10_RGR",{{"optic_Holosight_arid_F",1},{"optic_Holosight_blk_F",1},{"optic_Holosight_khk_F",1},{"optic_Holosight_lush_F",1},{"optic_Holosight",1},{"optic_Holosight_smg_blk_F",1},{"optic_Holosight_smg_khk_F",1},{"optic_Holosight_smg",1},{"rhsusf_acc_EOTECH",1},{"rhsusf_acc_eotech_xps3",1},{"rhsusf_acc_rvg_blk",1},{"rhsusf_acc_rvg_de",1},{"rhsusf_acc_grip4_bipod",1},{"rhsusf_acc_saw_lw_bipod",1},{"rhsusf_acc_saw_bipod",1},{"rhsusf_acc_grip4",1},{"rhsusf_acc_tdstubby_blk",1},{"rhsusf_acc_tdstubby_tan",1},{"rhsusf_acc_grip3",1},{"rhsusf_acc_grip3_tan",1},{"rhsusf_acc_grip2",1},{"rhsusf_acc_grip2_tan",1}}},"rhsusf_opscore_mar_ut_pelt","",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_VAR_2_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 3"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_11", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_BOONIE_HAT_RGR"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_BOONIE_HAT_RGR"}; 
		weapons[] = {"rhs_weap_m24sws_d","rhs_weap_maaws","rhsusf_weap_m9","Laserdesignator"}; 
		respawnWeapons[] = {"rhs_weap_m24sws_d","rhs_weap_maaws","rhsusf_weap_m9","Laserdesignator"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m24sws_d","","","rhsusf_acc_LEUPOLDMK4_d",{"rhsusf_5Rnd_762x51_m118_special_Mag",5},{},""},{"rhs_weap_maaws","","","",{"rhs_mag_maaws_HEAT",1},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{}},{"USP_EAGLE_CIRAS",{}},{"B_Kitbag_rgr",{{"rhs_mag_maaws_HE",1,1},{"rhs_mag_maaws_HEDP",1,1},{"MRAWS_HE_F",1,1}}},"USP_BOONIE_HAT_RGR","",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_VAR_2_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 3"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_11", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_BOONIE_HAT_RGR"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_BOONIE_HAT_RGR"}; 
		weapons[] = {"rhs_weap_m24sws_d","rhs_weap_maaws","rhsusf_weap_m9","Laserdesignator"}; 
		respawnWeapons[] = {"rhs_weap_m24sws_d","rhs_weap_maaws","rhsusf_weap_m9","Laserdesignator"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m24sws_d","","","rhsusf_acc_LEUPOLDMK4_d",{"rhsusf_5Rnd_762x51_m118_special_Mag",5},{},""},{"rhs_weap_maaws","","","",{"rhs_mag_maaws_HEAT",1},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{}},{"USP_EAGLE_CIRAS",{}},{"B_Kitbag_rgr",{{"rhs_mag_maaws_HE",1,1},{"rhs_mag_maaws_HEDP",1,1},{"MRAWS_HE_F",1,1}}},"USP_BOONIE_HAT_RGR","",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_VAR_2_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 3"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_11", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_BOONIE_HAT_RGR"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_BOONIE_HAT_RGR"}; 
		weapons[] = {"rhs_weap_m24sws_d","rhs_weap_maaws","rhsusf_weap_m9","Laserdesignator"}; 
		respawnWeapons[] = {"rhs_weap_m24sws_d","rhs_weap_maaws","rhsusf_weap_m9","Laserdesignator"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m24sws_d","","","rhsusf_acc_LEUPOLDMK4_d",{"rhsusf_5Rnd_762x51_m118_special_Mag",5},{},""},{"rhs_weap_maaws","","","",{"rhs_mag_maaws_HEAT",1},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{}},{"USP_EAGLE_CIRAS",{}},{"B_Kitbag_rgr",{{"rhs_mag_maaws_HE",1,1},{"rhs_mag_maaws_HEDP",1,1},{"MRAWS_HE_F",1,1}}},"USP_BOONIE_HAT_RGR","",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_VAR_3_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 4"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_15", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "U_B_FullGhillie_sard"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","rhsusf_opscore_mar_ut_pelt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","rhsusf_opscore_mar_ut_pelt"}; 
		weapons[] = {"hlc_rifle_M14_Rail","rhs_weap_M320","Laserdesignator"}; 
		respawnWeapons[] = {"hlc_rifle_M14_Rail","rhs_weap_M320","Laserdesignator"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_M14_Rail","rhsusf_acc_aac_scarh_silencer","","optic_tws",{"ACE_20Rnd_762x51_M993_AP_Mag",20},{},""},{},{"rhs_weap_M320","","","",{"rhs_mag_M441_HE",1},{},""},{"U_B_FullGhillie_sard",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1}}},{},{},"rhsusf_opscore_mar_ut_pelt","",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_VAR_3_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 4"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_15", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "U_B_FullGhillie_sard"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","rhsusf_opscore_mar_ut_pelt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","rhsusf_opscore_mar_ut_pelt"}; 
		weapons[] = {"hlc_rifle_M14_Rail","rhs_weap_M320","Laserdesignator"}; 
		respawnWeapons[] = {"hlc_rifle_M14_Rail","rhs_weap_M320","Laserdesignator"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_M14_Rail","rhsusf_acc_aac_scarh_silencer","","optic_tws",{"ACE_20Rnd_762x51_M993_AP_Mag",20},{},""},{},{"rhs_weap_M320","","","",{"rhs_mag_M441_HE",1},{},""},{"U_B_FullGhillie_sard",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1}}},{},{},"rhsusf_opscore_mar_ut_pelt","",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_VAR_3_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 4"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_15", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "U_B_FullGhillie_sard"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","rhsusf_opscore_mar_ut_pelt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","rhsusf_opscore_mar_ut_pelt"}; 
		weapons[] = {"hlc_rifle_M14_Rail","rhs_weap_M320","Laserdesignator"}; 
		respawnWeapons[] = {"hlc_rifle_M14_Rail","rhs_weap_M320","Laserdesignator"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_M14_Rail","rhsusf_acc_aac_scarh_silencer","","optic_tws",{"ACE_20Rnd_762x51_M993_AP_Mag",20},{},""},{},{"rhs_weap_M320","","","",{"rhs_mag_M441_HE",1},{},""},{"U_B_FullGhillie_sard",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1}}},{},{},"rhsusf_opscore_mar_ut_pelt","",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_VAR_4_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 5"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_08", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "B_CWU_coverall_od_AG_usn"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_MFRAME_TAN2","H_PilotHelmetHeli_O"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_MFRAME_TAN2","H_PilotHelmetHeli_O"}; 
		weapons[] = {"Tier1_MK48_Mod1","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_MK48_Mod1","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_M252_Gun_Bag";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_MK48_Mod1","","","optic_tws_mg",{"hlc_200Rnd_762x51_T_M60E4",200},{},"Tier1_SAW_Bipod_2"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"B_CWU_coverall_od_AG_usn",{}},{},{"rhs_M252_Gun_Bag",{}},"H_PilotHelmetHeli_O","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_VAR_4_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 5"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_08", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "B_CWU_coverall_od_AG_usn"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_MFRAME_TAN2","H_PilotHelmetHeli_O"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_MFRAME_TAN2","H_PilotHelmetHeli_O"}; 
		weapons[] = {"Tier1_MK48_Mod1","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_MK48_Mod1","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_M252_Gun_Bag";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_MK48_Mod1","","","optic_tws_mg",{"hlc_200Rnd_762x51_T_M60E4",200},{},"Tier1_SAW_Bipod_2"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"B_CWU_coverall_od_AG_usn",{}},{},{"rhs_M252_Gun_Bag",{}},"H_PilotHelmetHeli_O","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_VAR_4_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 5"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_08", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "B_CWU_coverall_od_AG_usn"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_MFRAME_TAN2","H_PilotHelmetHeli_O"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_MFRAME_TAN2","H_PilotHelmetHeli_O"}; 
		weapons[] = {"Tier1_MK48_Mod1","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_MK48_Mod1","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_M252_Gun_Bag";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_MK48_Mod1","","","optic_tws_mg",{"hlc_200Rnd_762x51_T_M60E4",200},{},"Tier1_SAW_Bipod_2"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"B_CWU_coverall_od_AG_usn",{}},{},{"rhs_M252_Gun_Bag",{}},"H_PilotHelmetHeli_O","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_VAR_5_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 6"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"AfricanHead_03", "Male02ENG" ,"G_NATO_default"};
		uniformClass = "B_CWU_coverall_tn_usn"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_MFRAME_TAN2","RHS_jetpilot_usaf"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_MFRAME_TAN2","RHS_jetpilot_usaf"}; 
		weapons[] = {"hlc_rifle_M14dmr_Rail","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_M14dmr_Rail","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_M252_Bipod_Bag";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_M14dmr_Rail","rhsusf_acc_aac_762sd_silencer","","optic_tws",{"hlc_20Rnd_762x51_barrier_M14",20},{},""},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"B_CWU_coverall_tn_usn",{}},{},{"rhs_M252_Bipod_Bag",{}},"RHS_jetpilot_usaf","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_VAR_5_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 6"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"AfricanHead_03", "Male02ENG" ,"G_NATO_default"};
		uniformClass = "B_CWU_coverall_tn_usn"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_MFRAME_TAN2","RHS_jetpilot_usaf"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_MFRAME_TAN2","RHS_jetpilot_usaf"}; 
		weapons[] = {"hlc_rifle_M14dmr_Rail","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_M14dmr_Rail","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_M252_Bipod_Bag";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_M14dmr_Rail","rhsusf_acc_aac_762sd_silencer","","optic_tws",{"hlc_20Rnd_762x51_barrier_M14",20},{},""},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"B_CWU_coverall_tn_usn",{}},{},{"rhs_M252_Bipod_Bag",{}},"RHS_jetpilot_usaf","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_VAR_5_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 6"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"AfricanHead_03", "Male02ENG" ,"G_NATO_default"};
		uniformClass = "B_CWU_coverall_tn_usn"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_MFRAME_TAN2","RHS_jetpilot_usaf"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_MFRAME_TAN2","RHS_jetpilot_usaf"}; 
		weapons[] = {"hlc_rifle_M14dmr_Rail","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_M14dmr_Rail","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_M252_Bipod_Bag";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_M14dmr_Rail","rhsusf_acc_aac_762sd_silencer","","optic_tws",{"hlc_20Rnd_762x51_barrier_M14",20},{},""},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"B_CWU_coverall_tn_usn",{}},{},{"rhs_M252_Bipod_Bag",{}},"RHS_jetpilot_usaf","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_Rifleman_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Rifleman (Desert)"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"TanoanHead_A3_07", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"hlc_rifle_M4","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_M4","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_HYDRATION_PACK_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_M4","rhsusf_acc_SF3P556","rhsusf_acc_anpeq15side_bk","rhsusf_acc_ACOG_RMR",{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",30},{},""},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",1,30}}},{"USP_CRYE_JPC_ASLT_RGR",{{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",27,30}}},{"USP_HYDRATION_PACK_RGR",{{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",6,30}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_Rifleman_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Rifleman (Desert)"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"TanoanHead_A3_07", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"hlc_rifle_M4","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_M4","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_HYDRATION_PACK_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_M4","rhsusf_acc_SF3P556","rhsusf_acc_anpeq15side_bk","rhsusf_acc_ACOG_RMR",{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",30},{},""},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",1,30}}},{"USP_CRYE_JPC_ASLT_RGR",{{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",27,30}}},{"USP_HYDRATION_PACK_RGR",{{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",6,30}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_Rifleman_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Rifleman (Desert)"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"TanoanHead_A3_07", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"hlc_rifle_M4","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_M4","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_HYDRATION_PACK_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_M4","rhsusf_acc_SF3P556","rhsusf_acc_anpeq15side_bk","rhsusf_acc_ACOG_RMR",{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",30},{},""},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",1,30}}},{"USP_CRYE_JPC_ASLT_RGR",{{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",27,30}}},{"USP_HYDRATION_PACK_RGR",{{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",6,30}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_GL_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Grenadier (Desert)"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"TanoanHead_A3_04", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"hlc_rifle_m4m203","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_m4m203","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_m4m203","","Tier1_M249_LA5_M600V_Black_FL","rhsusf_acc_ACOG_RMR",{"ACE_30Rnd_556x45_Stanag_Mk262_mag",30},{"rhs_mag_M433_HEDP",1},""},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",1,30}}},{"USP_CRYE_JPC_GRB_RGR",{{"1Rnd_HE_Grenade_shell",23,1},{"1Rnd_Smoke_Grenade_shell",13,1},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",9,30}}},{"USP_ZIPON_PACK_CPC_RGR",{{"1Rnd_HE_Grenade_shell",21,1},{"1Rnd_Smoke_Grenade_shell",12,1},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",8,30}}},"USP_HEAD_MICH_TC2002_TAN","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_GL_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Grenadier (Desert)"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"TanoanHead_A3_04", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"hlc_rifle_m4m203","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_m4m203","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_m4m203","","Tier1_M249_LA5_M600V_Black_FL","rhsusf_acc_ACOG_RMR",{"ACE_30Rnd_556x45_Stanag_Mk262_mag",30},{"rhs_mag_M433_HEDP",1},""},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",1,30}}},{"USP_CRYE_JPC_GRB_RGR",{{"1Rnd_HE_Grenade_shell",23,1},{"1Rnd_Smoke_Grenade_shell",13,1},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",9,30}}},{"USP_ZIPON_PACK_CPC_RGR",{{"1Rnd_HE_Grenade_shell",21,1},{"1Rnd_Smoke_Grenade_shell",12,1},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",8,30}}},"USP_HEAD_MICH_TC2002_TAN","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_GL_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Grenadier (Desert)"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"TanoanHead_A3_04", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"hlc_rifle_m4m203","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_m4m203","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_m4m203","","Tier1_M249_LA5_M600V_Black_FL","rhsusf_acc_ACOG_RMR",{"ACE_30Rnd_556x45_Stanag_Mk262_mag",30},{"rhs_mag_M433_HEDP",1},""},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",1,30}}},{"USP_CRYE_JPC_GRB_RGR",{{"1Rnd_HE_Grenade_shell",23,1},{"1Rnd_Smoke_Grenade_shell",13,1},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",9,30}}},{"USP_ZIPON_PACK_CPC_RGR",{{"1Rnd_HE_Grenade_shell",21,1},{"1Rnd_Smoke_Grenade_shell",12,1},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",8,30}}},"USP_HEAD_MICH_TC2002_TAN","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_AR_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Machine Gunner (Desert)"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_06", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_BLK2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_BLK2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"Tier1_MK48_Mod1_Desert","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_MK48_Mod1_Desert","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_MK48_Mod1_Desert","rhsusf_acc_ARDEC_M240","Tier1_Mk48Mod1_LA5_M600V_Black","Tier1_EXPS3_0_G33_Tano_Up",{"hlc_200Rnd_762x51_B_M60E4",200},{},"Tier1_SAW_Bipod_2_Desert"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"USP_CRYE_JPC_MGB_RGR",{{"hlc_200Rnd_762x51_B_M60E4",1,200}}},{"USP_REEBOW_3DAP_RGR",{{"hlc_200Rnd_762x51_B_M60E4",1,200}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_BLK2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_AR_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Machine Gunner (Desert)"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_06", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_BLK2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_BLK2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"Tier1_MK48_Mod1_Desert","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_MK48_Mod1_Desert","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_MK48_Mod1_Desert","rhsusf_acc_ARDEC_M240","Tier1_Mk48Mod1_LA5_M600V_Black","Tier1_EXPS3_0_G33_Tano_Up",{"hlc_200Rnd_762x51_B_M60E4",200},{},"Tier1_SAW_Bipod_2_Desert"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"USP_CRYE_JPC_MGB_RGR",{{"hlc_200Rnd_762x51_B_M60E4",1,200}}},{"USP_REEBOW_3DAP_RGR",{{"hlc_200Rnd_762x51_B_M60E4",1,200}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_BLK2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_AR_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Machine Gunner (Desert)"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_06", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_BLK2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_BLK2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"Tier1_MK48_Mod1_Desert","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_MK48_Mod1_Desert","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_MK48_Mod1_Desert","rhsusf_acc_ARDEC_M240","Tier1_Mk48Mod1_LA5_M600V_Black","Tier1_EXPS3_0_G33_Tano_Up",{"hlc_200Rnd_762x51_B_M60E4",200},{},"Tier1_SAW_Bipod_2_Desert"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"USP_CRYE_JPC_MGB_RGR",{{"hlc_200Rnd_762x51_B_M60E4",1,200}}},{"USP_REEBOW_3DAP_RGR",{{"hlc_200Rnd_762x51_B_M60E4",1,200}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_BLK2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_SNP_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Sniper (Desert)"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"TanoanHead_A3_04", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"hlc_rifle_M14dmr_Rail","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_M14dmr_Rail","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_M14dmr_Rail","hlc_muzzle_Gunfighter_comp","","rhsusf_acc_LEUPOLDMK4",{"ACE_20Rnd_762x51_Mag_SD",20},{},""},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"ACE_20Rnd_762x51_Mag_SD",1,20}}},{"USP_EAGLE_CIRAS_LOAD",{{"ACE_20Rnd_762x51_Mag_SD",18,20}}},{"B_Kitbag_rgr",{{"ACE_20Rnd_762x51_Mag_SD",23,20}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_SNP_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Sniper (Desert)"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"TanoanHead_A3_04", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"hlc_rifle_M14dmr_Rail","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_M14dmr_Rail","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_M14dmr_Rail","hlc_muzzle_Gunfighter_comp","","rhsusf_acc_LEUPOLDMK4",{"ACE_20Rnd_762x51_Mag_SD",20},{},""},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"ACE_20Rnd_762x51_Mag_SD",1,20}}},{"USP_EAGLE_CIRAS_LOAD",{{"ACE_20Rnd_762x51_Mag_SD",18,20}}},{"B_Kitbag_rgr",{{"ACE_20Rnd_762x51_Mag_SD",23,20}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_SNP_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Sniper (Desert)"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"TanoanHead_A3_04", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"hlc_rifle_M14dmr_Rail","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_M14dmr_Rail","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_M14dmr_Rail","hlc_muzzle_Gunfighter_comp","","rhsusf_acc_LEUPOLDMK4",{"ACE_20Rnd_762x51_Mag_SD",20},{},""},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"ACE_20Rnd_762x51_Mag_SD",1,20}}},{"USP_EAGLE_CIRAS_LOAD",{{"ACE_20Rnd_762x51_Mag_SD",18,20}}},{"B_Kitbag_rgr",{{"ACE_20Rnd_762x51_Mag_SD",23,20}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_DIVER_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Special (Desert)"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"TanoanBossHead", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "TFAR_bussole";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d_grip","","rhsusf_acc_anpeq15side_bk","rhsusf_acc_ACOG_d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",1,30}}},{"USP_CRYE_JPC_DMB_RGR",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",23,30}}},{"TFAR_bussole",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",3,30}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_DIVER_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Special (Desert)"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"TanoanBossHead", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "TFAR_bussole";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d_grip","","rhsusf_acc_anpeq15side_bk","rhsusf_acc_ACOG_d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",1,30}}},{"USP_CRYE_JPC_DMB_RGR",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",23,30}}},{"TFAR_bussole",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",3,30}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_DIVER_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Special (Desert)"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"TanoanBossHead", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "TFAR_bussole";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d_grip","","rhsusf_acc_anpeq15side_bk","rhsusf_acc_ACOG_d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",1,30}}},{"USP_CRYE_JPC_DMB_RGR",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",23,30}}},{"TFAR_bussole",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",3,30}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_RTO_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Anti-Tank (Desert)"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"AfricanHead_03", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_d_grip","rhs_weap_maaws","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d_grip","rhs_weap_maaws","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_PATROL_PACK_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d_grip","","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{"rhs_weap_maaws","","","",{"rhs_mag_maaws_HEDP",1},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",1}}},{"V_PlateCarrierGL_rgr",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",14,30}}},{"USP_PATROL_PACK_RGR",{{"MRAWS_HEAT_F",1,1},{"MRAWS_HE_F",1,1},{"rhs_mag_maaws_HEDP",1,1}}},"USP_HEAD_MICH_TC2002_TAN","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_RTO_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Anti-Tank (Desert)"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"AfricanHead_03", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_d_grip","rhs_weap_maaws","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d_grip","rhs_weap_maaws","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_PATROL_PACK_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d_grip","","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{"rhs_weap_maaws","","","",{"rhs_mag_maaws_HEDP",1},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",1}}},{"V_PlateCarrierGL_rgr",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",14,30}}},{"USP_PATROL_PACK_RGR",{{"MRAWS_HEAT_F",1,1},{"MRAWS_HE_F",1,1},{"rhs_mag_maaws_HEDP",1,1}}},"USP_HEAD_MICH_TC2002_TAN","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_RTO_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Anti-Tank (Desert)"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"AfricanHead_03", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_d_grip","rhs_weap_maaws","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d_grip","rhs_weap_maaws","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_PATROL_PACK_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d_grip","","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{"rhs_weap_maaws","","","",{"rhs_mag_maaws_HEDP",1},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",1}}},{"V_PlateCarrierGL_rgr",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",14,30}}},{"USP_PATROL_PACK_RGR",{{"MRAWS_HEAT_F",1,1},{"MRAWS_HE_F",1,1},{"rhs_mag_maaws_HEDP",1,1}}},"USP_HEAD_MICH_TC2002_TAN","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_Medic_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Doctor (Desert)"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"TanoanHead_A3_07", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d_grip","","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"kat_accuvac",1},{"kat_stethoscope",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"USP_CRYE_JPC_DMB_RGR",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",23,30}}},{"B_Kitbag_rgr",{{"ACE_adenosine",2},{"ACE_elasticBandage",15},{"ACE_packingBandage",15},{"ACE_quikclot",15},{"ACE_morphine",4},{"ACE_epinephrine",4},{"ACE_plasmaIV",3},{"ACE_plasmaIV_500",6},{"ACE_splint",2},{"ACE_suture",12},{"ACE_tourniquet",4},{"kat_larynx",6},{"kat_naloxone",2},{"kat_IO_FAST",7},{"kat_ncdKit",2},{"kat_aatKit",12},{"kat_chestSeal",6},{"kat_Pulseoximeter",3},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",9,30}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_Medic_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Doctor (Desert)"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"TanoanHead_A3_07", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d_grip","","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"kat_accuvac",1},{"kat_stethoscope",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"USP_CRYE_JPC_DMB_RGR",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",23,30}}},{"B_Kitbag_rgr",{{"ACE_adenosine",2},{"ACE_elasticBandage",15},{"ACE_packingBandage",15},{"ACE_quikclot",15},{"ACE_morphine",4},{"ACE_epinephrine",4},{"ACE_plasmaIV",3},{"ACE_plasmaIV_500",6},{"ACE_splint",2},{"ACE_suture",12},{"ACE_tourniquet",4},{"kat_larynx",6},{"kat_naloxone",2},{"kat_IO_FAST",7},{"kat_ncdKit",2},{"kat_aatKit",12},{"kat_chestSeal",6},{"kat_Pulseoximeter",3},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",9,30}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_Medic_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Doctor (Desert)"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"TanoanHead_A3_07", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d_grip","","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"kat_accuvac",1},{"kat_stethoscope",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"USP_CRYE_JPC_DMB_RGR",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",23,30}}},{"B_Kitbag_rgr",{{"ACE_adenosine",2},{"ACE_elasticBandage",15},{"ACE_packingBandage",15},{"ACE_quikclot",15},{"ACE_morphine",4},{"ACE_epinephrine",4},{"ACE_plasmaIV",3},{"ACE_plasmaIV_500",6},{"ACE_splint",2},{"ACE_suture",12},{"ACE_tourniquet",4},{"kat_larynx",6},{"kat_naloxone",2},{"kat_IO_FAST",7},{"kat_ncdKit",2},{"kat_aatKit",12},{"kat_chestSeal",6},{"kat_Pulseoximeter",3},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",9,30}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_VAR_6_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 7"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_20", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_THM_BEANIE_RGR"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_THM_BEANIE_RGR"}; 
		weapons[] = {"rhs_weap_m24sws_wd","rhs_weap_maaws","rhs_weap_M320","Laserdesignator"}; 
		respawnWeapons[] = {"rhs_weap_m24sws_wd","rhs_weap_maaws","rhs_weap_M320","Laserdesignator"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m24sws_wd","","","rhsusf_acc_LEUPOLDMK4_wd",{"rhsusf_5Rnd_762x51_m118_special_Mag",5},{},""},{"rhs_weap_maaws","","","",{"rhs_mag_maaws_HEAT",1},{},""},{"rhs_weap_M320","","","",{"rhs_mag_M441_HE",1},{},""},{"rhs_uniform_g3_rgr",{}},{"USP_EAGLE_CIRAS",{}},{"USP_REEBOW_3DAP_ACC1_RGR",{{"MRAWS_HE_F",1,1},{"MRAWS_HEAT_F",1,1},{"rhs_mag_maaws_HEDP",1,1}}},"USP_THM_BEANIE_RGR","",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_VAR_6_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 7"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_20", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_THM_BEANIE_RGR"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_THM_BEANIE_RGR"}; 
		weapons[] = {"rhs_weap_m24sws_wd","rhs_weap_maaws","rhs_weap_M320","Laserdesignator"}; 
		respawnWeapons[] = {"rhs_weap_m24sws_wd","rhs_weap_maaws","rhs_weap_M320","Laserdesignator"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m24sws_wd","","","rhsusf_acc_LEUPOLDMK4_wd",{"rhsusf_5Rnd_762x51_m118_special_Mag",5},{},""},{"rhs_weap_maaws","","","",{"rhs_mag_maaws_HEAT",1},{},""},{"rhs_weap_M320","","","",{"rhs_mag_M441_HE",1},{},""},{"rhs_uniform_g3_rgr",{}},{"USP_EAGLE_CIRAS",{}},{"USP_REEBOW_3DAP_ACC1_RGR",{{"MRAWS_HE_F",1,1},{"MRAWS_HEAT_F",1,1},{"rhs_mag_maaws_HEDP",1,1}}},"USP_THM_BEANIE_RGR","",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_VAR_6_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 7"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_20", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_THM_BEANIE_RGR"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_THM_BEANIE_RGR"}; 
		weapons[] = {"rhs_weap_m24sws_wd","rhs_weap_maaws","rhs_weap_M320","Laserdesignator"}; 
		respawnWeapons[] = {"rhs_weap_m24sws_wd","rhs_weap_maaws","rhs_weap_M320","Laserdesignator"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m24sws_wd","","","rhsusf_acc_LEUPOLDMK4_wd",{"rhsusf_5Rnd_762x51_m118_special_Mag",5},{},""},{"rhs_weap_maaws","","","",{"rhs_mag_maaws_HEAT",1},{},""},{"rhs_weap_M320","","","",{"rhs_mag_M441_HE",1},{},""},{"rhs_uniform_g3_rgr",{}},{"USP_EAGLE_CIRAS",{}},{"USP_REEBOW_3DAP_ACC1_RGR",{{"MRAWS_HE_F",1,1},{"MRAWS_HEAT_F",1,1},{"rhs_mag_maaws_HEDP",1,1}}},"USP_THM_BEANIE_RGR","",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_VAR_7_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 8"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"AfricanHead_03", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","rhsusf_opscore_mar_ut_pelt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","rhsusf_opscore_mar_ut_pelt"}; 
		weapons[] = {"rhs_weap_mk17_STD_grip3","rhs_weap_fim92","rhsusf_weap_m9","Laserdesignator"}; 
		respawnWeapons[] = {"rhs_weap_mk17_STD_grip3","rhs_weap_fim92","rhsusf_weap_m9","Laserdesignator"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC10_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_mk17_STD_grip3","rhsgref_sdn6_suppressor","rhsusf_acc_anpeq15side","rhsusf_acc_compm4",{"rhs_mag_20Rnd_SCAR_762x51_m61_ap",20},{},"rhsusf_acc_grip2"},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1}}},{},{"USP_REEBOW_3DAP_ACC10_RGR",{{"optic_Holosight_arid_F",1},{"optic_Holosight_blk_F",1},{"optic_Holosight_khk_F",1},{"optic_Holosight_lush_F",1},{"optic_Holosight",1},{"optic_Holosight_smg_blk_F",1},{"optic_Holosight_smg_khk_F",1},{"optic_Holosight_smg",1},{"rhsusf_acc_EOTECH",1},{"rhsusf_acc_eotech_xps3",1},{"rhsusf_acc_rvg_blk",1},{"rhsusf_acc_rvg_de",1},{"rhsusf_acc_grip4_bipod",1},{"rhsusf_acc_saw_lw_bipod",1},{"rhsusf_acc_saw_bipod",1},{"rhsusf_acc_grip4",1},{"rhsusf_acc_tdstubby_blk",1},{"rhsusf_acc_tdstubby_tan",1},{"rhsusf_acc_grip3",1},{"rhsusf_acc_grip3_tan",1},{"rhsusf_acc_grip2",1},{"rhsusf_acc_grip2_tan",1}}},"rhsusf_opscore_mar_ut_pelt","",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_VAR_7_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 8"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"AfricanHead_03", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","rhsusf_opscore_mar_ut_pelt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","rhsusf_opscore_mar_ut_pelt"}; 
		weapons[] = {"rhs_weap_mk17_STD_grip3","rhs_weap_fim92","rhsusf_weap_m9","Laserdesignator"}; 
		respawnWeapons[] = {"rhs_weap_mk17_STD_grip3","rhs_weap_fim92","rhsusf_weap_m9","Laserdesignator"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC10_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_mk17_STD_grip3","rhsgref_sdn6_suppressor","rhsusf_acc_anpeq15side","rhsusf_acc_compm4",{"rhs_mag_20Rnd_SCAR_762x51_m61_ap",20},{},"rhsusf_acc_grip2"},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1}}},{},{"USP_REEBOW_3DAP_ACC10_RGR",{{"optic_Holosight_arid_F",1},{"optic_Holosight_blk_F",1},{"optic_Holosight_khk_F",1},{"optic_Holosight_lush_F",1},{"optic_Holosight",1},{"optic_Holosight_smg_blk_F",1},{"optic_Holosight_smg_khk_F",1},{"optic_Holosight_smg",1},{"rhsusf_acc_EOTECH",1},{"rhsusf_acc_eotech_xps3",1},{"rhsusf_acc_rvg_blk",1},{"rhsusf_acc_rvg_de",1},{"rhsusf_acc_grip4_bipod",1},{"rhsusf_acc_saw_lw_bipod",1},{"rhsusf_acc_saw_bipod",1},{"rhsusf_acc_grip4",1},{"rhsusf_acc_tdstubby_blk",1},{"rhsusf_acc_tdstubby_tan",1},{"rhsusf_acc_grip3",1},{"rhsusf_acc_grip3_tan",1},{"rhsusf_acc_grip2",1},{"rhsusf_acc_grip2_tan",1}}},"rhsusf_opscore_mar_ut_pelt","",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_VAR_7_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 8"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"AfricanHead_03", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","rhsusf_opscore_mar_ut_pelt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","rhsusf_opscore_mar_ut_pelt"}; 
		weapons[] = {"rhs_weap_mk17_STD_grip3","rhs_weap_fim92","rhsusf_weap_m9","Laserdesignator"}; 
		respawnWeapons[] = {"rhs_weap_mk17_STD_grip3","rhs_weap_fim92","rhsusf_weap_m9","Laserdesignator"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC10_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_mk17_STD_grip3","rhsgref_sdn6_suppressor","rhsusf_acc_anpeq15side","rhsusf_acc_compm4",{"rhs_mag_20Rnd_SCAR_762x51_m61_ap",20},{},"rhsusf_acc_grip2"},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1}}},{},{"USP_REEBOW_3DAP_ACC10_RGR",{{"optic_Holosight_arid_F",1},{"optic_Holosight_blk_F",1},{"optic_Holosight_khk_F",1},{"optic_Holosight_lush_F",1},{"optic_Holosight",1},{"optic_Holosight_smg_blk_F",1},{"optic_Holosight_smg_khk_F",1},{"optic_Holosight_smg",1},{"rhsusf_acc_EOTECH",1},{"rhsusf_acc_eotech_xps3",1},{"rhsusf_acc_rvg_blk",1},{"rhsusf_acc_rvg_de",1},{"rhsusf_acc_grip4_bipod",1},{"rhsusf_acc_saw_lw_bipod",1},{"rhsusf_acc_saw_bipod",1},{"rhsusf_acc_grip4",1},{"rhsusf_acc_tdstubby_blk",1},{"rhsusf_acc_tdstubby_tan",1},{"rhsusf_acc_grip3",1},{"rhsusf_acc_grip3_tan",1},{"rhsusf_acc_grip2",1},{"rhsusf_acc_grip2_tan",1}}},"rhsusf_opscore_mar_ut_pelt","",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_VAR_8_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 9"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_02", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_BOONIE_HAT_RGR"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_BOONIE_HAT_RGR"}; 
		weapons[] = {"rhs_weap_m24sws_d","rhs_weap_maaws","rhsusf_weap_m9","Laserdesignator"}; 
		respawnWeapons[] = {"rhs_weap_m24sws_d","rhs_weap_maaws","rhsusf_weap_m9","Laserdesignator"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m24sws_d","","","rhsusf_acc_LEUPOLDMK4_d",{"rhsusf_5Rnd_762x51_m118_special_Mag",5},{},""},{"rhs_weap_maaws","","","",{"rhs_mag_maaws_HEAT",1},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{}},{"USP_EAGLE_CIRAS",{}},{"B_Kitbag_rgr",{{"rhs_mag_maaws_HE",1,1},{"rhs_mag_maaws_HEDP",1,1},{"MRAWS_HE_F",1,1}}},"USP_BOONIE_HAT_RGR","",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_VAR_8_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 9"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_02", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_BOONIE_HAT_RGR"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_BOONIE_HAT_RGR"}; 
		weapons[] = {"rhs_weap_m24sws_d","rhs_weap_maaws","rhsusf_weap_m9","Laserdesignator"}; 
		respawnWeapons[] = {"rhs_weap_m24sws_d","rhs_weap_maaws","rhsusf_weap_m9","Laserdesignator"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m24sws_d","","","rhsusf_acc_LEUPOLDMK4_d",{"rhsusf_5Rnd_762x51_m118_special_Mag",5},{},""},{"rhs_weap_maaws","","","",{"rhs_mag_maaws_HEAT",1},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{}},{"USP_EAGLE_CIRAS",{}},{"B_Kitbag_rgr",{{"rhs_mag_maaws_HE",1,1},{"rhs_mag_maaws_HEDP",1,1},{"MRAWS_HE_F",1,1}}},"USP_BOONIE_HAT_RGR","",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_VAR_8_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 9"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_02", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_BOONIE_HAT_RGR"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_BOONIE_HAT_RGR"}; 
		weapons[] = {"rhs_weap_m24sws_d","rhs_weap_maaws","rhsusf_weap_m9","Laserdesignator"}; 
		respawnWeapons[] = {"rhs_weap_m24sws_d","rhs_weap_maaws","rhsusf_weap_m9","Laserdesignator"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m24sws_d","","","rhsusf_acc_LEUPOLDMK4_d",{"rhsusf_5Rnd_762x51_m118_special_Mag",5},{},""},{"rhs_weap_maaws","","","",{"rhs_mag_maaws_HEAT",1},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{}},{"USP_EAGLE_CIRAS",{}},{"B_Kitbag_rgr",{{"rhs_mag_maaws_HE",1,1},{"rhs_mag_maaws_HEDP",1,1},{"MRAWS_HE_F",1,1}}},"USP_BOONIE_HAT_RGR","",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_VAR_9_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 10"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_15", "Male04ENG" ,"G_NATO_default"};
		uniformClass = "U_B_FullGhillie_sard"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","rhsusf_opscore_mar_ut_pelt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","rhsusf_opscore_mar_ut_pelt"}; 
		weapons[] = {"hlc_rifle_M14_Rail","rhs_weap_M320","Laserdesignator"}; 
		respawnWeapons[] = {"hlc_rifle_M14_Rail","rhs_weap_M320","Laserdesignator"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_M14_Rail","rhsusf_acc_aac_scarh_silencer","","optic_tws",{"ACE_20Rnd_762x51_M993_AP_Mag",20},{},""},{},{"rhs_weap_M320","","","",{"rhs_mag_M441_HE",1},{},""},{"U_B_FullGhillie_sard",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1}}},{},{},"rhsusf_opscore_mar_ut_pelt","",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_VAR_9_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 10"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_15", "Male04ENG" ,"G_NATO_default"};
		uniformClass = "U_B_FullGhillie_sard"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","rhsusf_opscore_mar_ut_pelt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","rhsusf_opscore_mar_ut_pelt"}; 
		weapons[] = {"hlc_rifle_M14_Rail","rhs_weap_M320","Laserdesignator"}; 
		respawnWeapons[] = {"hlc_rifle_M14_Rail","rhs_weap_M320","Laserdesignator"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_M14_Rail","rhsusf_acc_aac_scarh_silencer","","optic_tws",{"ACE_20Rnd_762x51_M993_AP_Mag",20},{},""},{},{"rhs_weap_M320","","","",{"rhs_mag_M441_HE",1},{},""},{"U_B_FullGhillie_sard",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1}}},{},{},"rhsusf_opscore_mar_ut_pelt","",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_VAR_9_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 10"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_15", "Male04ENG" ,"G_NATO_default"};
		uniformClass = "U_B_FullGhillie_sard"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","rhsusf_opscore_mar_ut_pelt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","rhsusf_opscore_mar_ut_pelt"}; 
		weapons[] = {"hlc_rifle_M14_Rail","rhs_weap_M320","Laserdesignator"}; 
		respawnWeapons[] = {"hlc_rifle_M14_Rail","rhs_weap_M320","Laserdesignator"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_M14_Rail","rhsusf_acc_aac_scarh_silencer","","optic_tws",{"ACE_20Rnd_762x51_M993_AP_Mag",20},{},""},{},{"rhs_weap_M320","","","",{"rhs_mag_M441_HE",1},{},""},{"U_B_FullGhillie_sard",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1}}},{},{},"rhsusf_opscore_mar_ut_pelt","",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_VAR_10_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 11"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"TanoanHead_A3_07", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "B_CWU_coverall_od_AG_usn"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_MFRAME_TAN2","H_PilotHelmetHeli_O"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_MFRAME_TAN2","H_PilotHelmetHeli_O"}; 
		weapons[] = {"Tier1_MK48_Mod1","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_MK48_Mod1","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_M252_Gun_Bag";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_MK48_Mod1","","","optic_tws_mg",{"hlc_200Rnd_762x51_T_M60E4",200},{},"Tier1_SAW_Bipod_2"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"B_CWU_coverall_od_AG_usn",{}},{},{"rhs_M252_Gun_Bag",{}},"H_PilotHelmetHeli_O","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_VAR_10_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 11"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"TanoanHead_A3_07", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "B_CWU_coverall_od_AG_usn"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_MFRAME_TAN2","H_PilotHelmetHeli_O"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_MFRAME_TAN2","H_PilotHelmetHeli_O"}; 
		weapons[] = {"Tier1_MK48_Mod1","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_MK48_Mod1","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_M252_Gun_Bag";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_MK48_Mod1","","","optic_tws_mg",{"hlc_200Rnd_762x51_T_M60E4",200},{},"Tier1_SAW_Bipod_2"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"B_CWU_coverall_od_AG_usn",{}},{},{"rhs_M252_Gun_Bag",{}},"H_PilotHelmetHeli_O","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_VAR_10_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 11"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"TanoanHead_A3_07", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "B_CWU_coverall_od_AG_usn"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_MFRAME_TAN2","H_PilotHelmetHeli_O"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_MFRAME_TAN2","H_PilotHelmetHeli_O"}; 
		weapons[] = {"Tier1_MK48_Mod1","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_MK48_Mod1","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_M252_Gun_Bag";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_MK48_Mod1","","","optic_tws_mg",{"hlc_200Rnd_762x51_T_M60E4",200},{},"Tier1_SAW_Bipod_2"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"B_CWU_coverall_od_AG_usn",{}},{},{"rhs_M252_Gun_Bag",{}},"H_PilotHelmetHeli_O","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_VAR_11_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 12"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_10", "Male02ENG" ,"G_NATO_default"};
		uniformClass = "B_CWU_coverall_tn_usn"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_MFRAME_TAN2","RHS_jetpilot_usaf"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_MFRAME_TAN2","RHS_jetpilot_usaf"}; 
		weapons[] = {"hlc_rifle_M14dmr_Rail","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_M14dmr_Rail","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_M252_Bipod_Bag";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_M14dmr_Rail","rhsusf_acc_aac_762sd_silencer","","optic_tws",{"hlc_20Rnd_762x51_barrier_M14",20},{},""},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"B_CWU_coverall_tn_usn",{}},{},{"rhs_M252_Bipod_Bag",{}},"RHS_jetpilot_usaf","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_VAR_11_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 12"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_10", "Male02ENG" ,"G_NATO_default"};
		uniformClass = "B_CWU_coverall_tn_usn"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_MFRAME_TAN2","RHS_jetpilot_usaf"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_MFRAME_TAN2","RHS_jetpilot_usaf"}; 
		weapons[] = {"hlc_rifle_M14dmr_Rail","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_M14dmr_Rail","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_M252_Bipod_Bag";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_M14dmr_Rail","rhsusf_acc_aac_762sd_silencer","","optic_tws",{"hlc_20Rnd_762x51_barrier_M14",20},{},""},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"B_CWU_coverall_tn_usn",{}},{},{"rhs_M252_Bipod_Bag",{}},"RHS_jetpilot_usaf","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_VAR_11_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 12"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_10", "Male02ENG" ,"G_NATO_default"};
		uniformClass = "B_CWU_coverall_tn_usn"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_MFRAME_TAN2","RHS_jetpilot_usaf"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_MFRAME_TAN2","RHS_jetpilot_usaf"}; 
		weapons[] = {"hlc_rifle_M14dmr_Rail","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_M14dmr_Rail","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_M252_Bipod_Bag";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_M14dmr_Rail","rhsusf_acc_aac_762sd_silencer","","optic_tws",{"hlc_20Rnd_762x51_barrier_M14",20},{},""},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"B_CWU_coverall_tn_usn",{}},{},{"rhs_M252_Bipod_Bag",{}},"RHS_jetpilot_usaf","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_Rifleman_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Rifleman (Winter)"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_13", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"hlc_rifle_M4","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_M4","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_HYDRATION_PACK_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_M4","rhsusf_acc_SF3P556","rhsusf_acc_anpeq15side_bk","rhsusf_acc_ACOG_RMR",{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",30},{},""},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",1,30}}},{"USP_CRYE_JPC_ASLT_RGR",{{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",27,30}}},{"USP_HYDRATION_PACK_RGR",{{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",6,30}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_Rifleman_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Rifleman (Winter)"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_13", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"hlc_rifle_M4","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_M4","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_HYDRATION_PACK_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_M4","rhsusf_acc_SF3P556","rhsusf_acc_anpeq15side_bk","rhsusf_acc_ACOG_RMR",{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",30},{},""},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",1,30}}},{"USP_CRYE_JPC_ASLT_RGR",{{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",27,30}}},{"USP_HYDRATION_PACK_RGR",{{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",6,30}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_Rifleman_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Rifleman (Winter)"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_13", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"hlc_rifle_M4","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_M4","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_HYDRATION_PACK_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_M4","rhsusf_acc_SF3P556","rhsusf_acc_anpeq15side_bk","rhsusf_acc_ACOG_RMR",{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",30},{},""},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",1,30}}},{"USP_CRYE_JPC_ASLT_RGR",{{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",27,30}}},{"USP_HYDRATION_PACK_RGR",{{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",6,30}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_GL_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Grenadier (Winter)"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"AfricanHead_02", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"hlc_rifle_m4m203","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_m4m203","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_m4m203","","Tier1_M249_LA5_M600V_Black_FL","rhsusf_acc_ACOG_RMR",{"ACE_30Rnd_556x45_Stanag_Mk262_mag",30},{"rhs_mag_M433_HEDP",1},""},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",1,30}}},{"USP_CRYE_JPC_GRB_RGR",{{"1Rnd_HE_Grenade_shell",23,1},{"1Rnd_Smoke_Grenade_shell",13,1},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",9,30}}},{"USP_ZIPON_PACK_CPC_RGR",{{"1Rnd_HE_Grenade_shell",21,1},{"1Rnd_Smoke_Grenade_shell",12,1},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",8,30}}},"USP_HEAD_MICH_TC2002_TAN","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_GL_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Grenadier (Winter)"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"AfricanHead_02", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"hlc_rifle_m4m203","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_m4m203","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_m4m203","","Tier1_M249_LA5_M600V_Black_FL","rhsusf_acc_ACOG_RMR",{"ACE_30Rnd_556x45_Stanag_Mk262_mag",30},{"rhs_mag_M433_HEDP",1},""},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",1,30}}},{"USP_CRYE_JPC_GRB_RGR",{{"1Rnd_HE_Grenade_shell",23,1},{"1Rnd_Smoke_Grenade_shell",13,1},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",9,30}}},{"USP_ZIPON_PACK_CPC_RGR",{{"1Rnd_HE_Grenade_shell",21,1},{"1Rnd_Smoke_Grenade_shell",12,1},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",8,30}}},"USP_HEAD_MICH_TC2002_TAN","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_GL_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Grenadier (Winter)"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"AfricanHead_02", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"hlc_rifle_m4m203","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_m4m203","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_m4m203","","Tier1_M249_LA5_M600V_Black_FL","rhsusf_acc_ACOG_RMR",{"ACE_30Rnd_556x45_Stanag_Mk262_mag",30},{"rhs_mag_M433_HEDP",1},""},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",1,30}}},{"USP_CRYE_JPC_GRB_RGR",{{"1Rnd_HE_Grenade_shell",23,1},{"1Rnd_Smoke_Grenade_shell",13,1},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",9,30}}},{"USP_ZIPON_PACK_CPC_RGR",{{"1Rnd_HE_Grenade_shell",21,1},{"1Rnd_Smoke_Grenade_shell",12,1},{"ACE_30Rnd_556x45_Stanag_Mk262_mag",8,30}}},"USP_HEAD_MICH_TC2002_TAN","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_AR_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Machine Gunner (Winter)"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"AfricanHead_02", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_BLK2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_BLK2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"Tier1_MK48_Mod1_Desert","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_MK48_Mod1_Desert","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_MK48_Mod1_Desert","rhsusf_acc_ARDEC_M240","Tier1_Mk48Mod1_LA5_M600V_Black","Tier1_EXPS3_0_G33_Tano_Up",{"hlc_200Rnd_762x51_B_M60E4",200},{},"Tier1_SAW_Bipod_2_Desert"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"USP_CRYE_JPC_MGB_RGR",{{"hlc_200Rnd_762x51_B_M60E4",1,200}}},{"USP_REEBOW_3DAP_RGR",{{"hlc_200Rnd_762x51_B_M60E4",1,200}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_BLK2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_AR_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Machine Gunner (Winter)"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"AfricanHead_02", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_BLK2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_BLK2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"Tier1_MK48_Mod1_Desert","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_MK48_Mod1_Desert","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_MK48_Mod1_Desert","rhsusf_acc_ARDEC_M240","Tier1_Mk48Mod1_LA5_M600V_Black","Tier1_EXPS3_0_G33_Tano_Up",{"hlc_200Rnd_762x51_B_M60E4",200},{},"Tier1_SAW_Bipod_2_Desert"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"USP_CRYE_JPC_MGB_RGR",{{"hlc_200Rnd_762x51_B_M60E4",1,200}}},{"USP_REEBOW_3DAP_RGR",{{"hlc_200Rnd_762x51_B_M60E4",1,200}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_BLK2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_AR_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Machine Gunner (Winter)"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"AfricanHead_02", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_BLK2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_BLK2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"Tier1_MK48_Mod1_Desert","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_MK48_Mod1_Desert","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_MK48_Mod1_Desert","rhsusf_acc_ARDEC_M240","Tier1_Mk48Mod1_LA5_M600V_Black","Tier1_EXPS3_0_G33_Tano_Up",{"hlc_200Rnd_762x51_B_M60E4",200},{},"Tier1_SAW_Bipod_2_Desert"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"USP_CRYE_JPC_MGB_RGR",{{"hlc_200Rnd_762x51_B_M60E4",1,200}}},{"USP_REEBOW_3DAP_RGR",{{"hlc_200Rnd_762x51_B_M60E4",1,200}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_BLK2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_SNP_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Sniper (Winter)"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_22_sa", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"hlc_rifle_M14dmr_Rail","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_M14dmr_Rail","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_M14dmr_Rail","hlc_muzzle_Gunfighter_comp","","rhsusf_acc_LEUPOLDMK4",{"ACE_20Rnd_762x51_Mag_SD",20},{},""},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"ACE_20Rnd_762x51_Mag_SD",1,20}}},{"USP_EAGLE_CIRAS_LOAD",{{"ACE_20Rnd_762x51_Mag_SD",18,20}}},{"B_Kitbag_rgr",{{"ACE_20Rnd_762x51_Mag_SD",23,20}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_SNP_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Sniper (Winter)"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_22_sa", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"hlc_rifle_M14dmr_Rail","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_M14dmr_Rail","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_M14dmr_Rail","hlc_muzzle_Gunfighter_comp","","rhsusf_acc_LEUPOLDMK4",{"ACE_20Rnd_762x51_Mag_SD",20},{},""},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"ACE_20Rnd_762x51_Mag_SD",1,20}}},{"USP_EAGLE_CIRAS_LOAD",{{"ACE_20Rnd_762x51_Mag_SD",18,20}}},{"B_Kitbag_rgr",{{"ACE_20Rnd_762x51_Mag_SD",23,20}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_SNP_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Sniper (Winter)"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_22_sa", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"hlc_rifle_M14dmr_Rail","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_M14dmr_Rail","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_M14dmr_Rail","hlc_muzzle_Gunfighter_comp","","rhsusf_acc_LEUPOLDMK4",{"ACE_20Rnd_762x51_Mag_SD",20},{},""},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"ACE_20Rnd_762x51_Mag_SD",1,20}}},{"USP_EAGLE_CIRAS_LOAD",{{"ACE_20Rnd_762x51_Mag_SD",18,20}}},{"B_Kitbag_rgr",{{"ACE_20Rnd_762x51_Mag_SD",23,20}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_DIVER_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Special (Winter)"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_17", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "TFAR_bussole";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d_grip","","rhsusf_acc_anpeq15side_bk","rhsusf_acc_ACOG_d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",1,30}}},{"USP_CRYE_JPC_DMB_RGR",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",23,30}}},{"TFAR_bussole",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",3,30}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_DIVER_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Special (Winter)"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_17", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "TFAR_bussole";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d_grip","","rhsusf_acc_anpeq15side_bk","rhsusf_acc_ACOG_d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",1,30}}},{"USP_CRYE_JPC_DMB_RGR",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",23,30}}},{"TFAR_bussole",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",3,30}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_DIVER_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Special (Winter)"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_17", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "TFAR_bussole";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d_grip","","rhsusf_acc_anpeq15side_bk","rhsusf_acc_ACOG_d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",1,30}}},{"USP_CRYE_JPC_DMB_RGR",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",23,30}}},{"TFAR_bussole",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",3,30}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_RTO_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Anti-Tank (Winter)"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"AfricanHead_02", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_d_grip","rhs_weap_maaws","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d_grip","rhs_weap_maaws","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_PATROL_PACK_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d_grip","","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{"rhs_weap_maaws","","","",{"rhs_mag_maaws_HEDP",1},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",1}}},{"V_PlateCarrierGL_rgr",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",14,30}}},{"USP_PATROL_PACK_RGR",{{"MRAWS_HEAT_F",1,1},{"MRAWS_HE_F",1,1},{"rhs_mag_maaws_HEDP",1,1}}},"USP_HEAD_MICH_TC2002_TAN","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_RTO_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Anti-Tank (Winter)"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"AfricanHead_02", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_d_grip","rhs_weap_maaws","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d_grip","rhs_weap_maaws","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_PATROL_PACK_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d_grip","","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{"rhs_weap_maaws","","","",{"rhs_mag_maaws_HEDP",1},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",1}}},{"V_PlateCarrierGL_rgr",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",14,30}}},{"USP_PATROL_PACK_RGR",{{"MRAWS_HEAT_F",1,1},{"MRAWS_HE_F",1,1},{"rhs_mag_maaws_HEDP",1,1}}},"USP_HEAD_MICH_TC2002_TAN","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_RTO_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Anti-Tank (Winter)"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"AfricanHead_02", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_d_grip","rhs_weap_maaws","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d_grip","rhs_weap_maaws","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_PATROL_PACK_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d_grip","","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{"rhs_weap_maaws","","","",{"rhs_mag_maaws_HEDP",1},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",1}}},{"V_PlateCarrierGL_rgr",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",14,30}}},{"USP_PATROL_PACK_RGR",{{"MRAWS_HEAT_F",1,1},{"MRAWS_HE_F",1,1},{"rhs_mag_maaws_HEDP",1,1}}},"USP_HEAD_MICH_TC2002_TAN","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_Medic_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Doctor (Winter)"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"TanoanHead_A3_02", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d_grip","","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"kat_accuvac",1},{"kat_stethoscope",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"USP_CRYE_JPC_DMB_RGR",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",23,30}}},{"B_Kitbag_rgr",{{"ACE_adenosine",2},{"ACE_elasticBandage",15},{"ACE_packingBandage",15},{"ACE_quikclot",15},{"ACE_morphine",4},{"ACE_epinephrine",4},{"ACE_plasmaIV",3},{"ACE_plasmaIV_500",6},{"ACE_splint",2},{"ACE_suture",12},{"ACE_tourniquet",4},{"kat_larynx",6},{"kat_naloxone",2},{"kat_IO_FAST",7},{"kat_ncdKit",2},{"kat_aatKit",12},{"kat_chestSeal",6},{"kat_Pulseoximeter",3},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",9,30}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_Medic_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Doctor (Winter)"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"TanoanHead_A3_02", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d_grip","","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"kat_accuvac",1},{"kat_stethoscope",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"USP_CRYE_JPC_DMB_RGR",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",23,30}}},{"B_Kitbag_rgr",{{"ACE_adenosine",2},{"ACE_elasticBandage",15},{"ACE_packingBandage",15},{"ACE_quikclot",15},{"ACE_morphine",4},{"ACE_epinephrine",4},{"ACE_plasmaIV",3},{"ACE_plasmaIV_500",6},{"ACE_splint",2},{"ACE_suture",12},{"ACE_tourniquet",4},{"kat_larynx",6},{"kat_naloxone",2},{"kat_IO_FAST",7},{"kat_ncdKit",2},{"kat_aatKit",12},{"kat_chestSeal",6},{"kat_Pulseoximeter",3},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",9,30}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_Medic_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Doctor (Winter)"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"TanoanHead_A3_02", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","USP_PVS15","USP_MFRAME_TAN2","USP_HEAD_MICH_TC2002_TAN"}; 
		weapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"}; 
		respawnWeapons[] = {"rhs_weap_m4a1_d_grip","rhsusf_weap_m9"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_d_grip","","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_ACOG_d",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"kat_accuvac",1},{"kat_stethoscope",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"USP_CRYE_JPC_DMB_RGR",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",23,30}}},{"B_Kitbag_rgr",{{"ACE_adenosine",2},{"ACE_elasticBandage",15},{"ACE_packingBandage",15},{"ACE_quikclot",15},{"ACE_morphine",4},{"ACE_epinephrine",4},{"ACE_plasmaIV",3},{"ACE_plasmaIV_500",6},{"ACE_splint",2},{"ACE_suture",12},{"ACE_tourniquet",4},{"kat_larynx",6},{"kat_naloxone",2},{"kat_IO_FAST",7},{"kat_ncdKit",2},{"kat_aatKit",12},{"kat_chestSeal",6},{"kat_Pulseoximeter",3},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",9,30}}},"USP_HEAD_MICH_TC2002_TAN","USP_MFRAME_TAN2",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_VAR_12_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 13"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_15", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_THM_BEANIE_RGR"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_THM_BEANIE_RGR"}; 
		weapons[] = {"rhs_weap_m24sws_wd","rhs_weap_maaws","rhs_weap_M320","Laserdesignator"}; 
		respawnWeapons[] = {"rhs_weap_m24sws_wd","rhs_weap_maaws","rhs_weap_M320","Laserdesignator"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m24sws_wd","","","rhsusf_acc_LEUPOLDMK4_wd",{"rhsusf_5Rnd_762x51_m118_special_Mag",5},{},""},{"rhs_weap_maaws","","","",{"rhs_mag_maaws_HEAT",1},{},""},{"rhs_weap_M320","","","",{"rhs_mag_M441_HE",1},{},""},{"rhs_uniform_g3_rgr",{}},{"USP_EAGLE_CIRAS",{}},{"USP_REEBOW_3DAP_ACC1_RGR",{{"MRAWS_HE_F",1,1},{"MRAWS_HEAT_F",1,1},{"rhs_mag_maaws_HEDP",1,1}}},"USP_THM_BEANIE_RGR","",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_VAR_12_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 13"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_15", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_THM_BEANIE_RGR"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_THM_BEANIE_RGR"}; 
		weapons[] = {"rhs_weap_m24sws_wd","rhs_weap_maaws","rhs_weap_M320","Laserdesignator"}; 
		respawnWeapons[] = {"rhs_weap_m24sws_wd","rhs_weap_maaws","rhs_weap_M320","Laserdesignator"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m24sws_wd","","","rhsusf_acc_LEUPOLDMK4_wd",{"rhsusf_5Rnd_762x51_m118_special_Mag",5},{},""},{"rhs_weap_maaws","","","",{"rhs_mag_maaws_HEAT",1},{},""},{"rhs_weap_M320","","","",{"rhs_mag_M441_HE",1},{},""},{"rhs_uniform_g3_rgr",{}},{"USP_EAGLE_CIRAS",{}},{"USP_REEBOW_3DAP_ACC1_RGR",{{"MRAWS_HE_F",1,1},{"MRAWS_HEAT_F",1,1},{"rhs_mag_maaws_HEDP",1,1}}},"USP_THM_BEANIE_RGR","",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_VAR_12_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 13"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_15", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_THM_BEANIE_RGR"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_THM_BEANIE_RGR"}; 
		weapons[] = {"rhs_weap_m24sws_wd","rhs_weap_maaws","rhs_weap_M320","Laserdesignator"}; 
		respawnWeapons[] = {"rhs_weap_m24sws_wd","rhs_weap_maaws","rhs_weap_M320","Laserdesignator"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m24sws_wd","","","rhsusf_acc_LEUPOLDMK4_wd",{"rhsusf_5Rnd_762x51_m118_special_Mag",5},{},""},{"rhs_weap_maaws","","","",{"rhs_mag_maaws_HEAT",1},{},""},{"rhs_weap_M320","","","",{"rhs_mag_M441_HE",1},{},""},{"rhs_uniform_g3_rgr",{}},{"USP_EAGLE_CIRAS",{}},{"USP_REEBOW_3DAP_ACC1_RGR",{{"MRAWS_HE_F",1,1},{"MRAWS_HEAT_F",1,1},{"rhs_mag_maaws_HEDP",1,1}}},"USP_THM_BEANIE_RGR","",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_VAR_13_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 14"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_19", "Male04ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","rhsusf_opscore_mar_ut_pelt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","rhsusf_opscore_mar_ut_pelt"}; 
		weapons[] = {"rhs_weap_mk17_STD_grip3","rhs_weap_fim92","rhsusf_weap_m9","Laserdesignator"}; 
		respawnWeapons[] = {"rhs_weap_mk17_STD_grip3","rhs_weap_fim92","rhsusf_weap_m9","Laserdesignator"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC10_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_mk17_STD_grip3","rhsgref_sdn6_suppressor","rhsusf_acc_anpeq15side","rhsusf_acc_compm4",{"rhs_mag_20Rnd_SCAR_762x51_m61_ap",20},{},"rhsusf_acc_grip2"},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1}}},{},{"USP_REEBOW_3DAP_ACC10_RGR",{{"optic_Holosight_arid_F",1},{"optic_Holosight_blk_F",1},{"optic_Holosight_khk_F",1},{"optic_Holosight_lush_F",1},{"optic_Holosight",1},{"optic_Holosight_smg_blk_F",1},{"optic_Holosight_smg_khk_F",1},{"optic_Holosight_smg",1},{"rhsusf_acc_EOTECH",1},{"rhsusf_acc_eotech_xps3",1},{"rhsusf_acc_rvg_blk",1},{"rhsusf_acc_rvg_de",1},{"rhsusf_acc_grip4_bipod",1},{"rhsusf_acc_saw_lw_bipod",1},{"rhsusf_acc_saw_bipod",1},{"rhsusf_acc_grip4",1},{"rhsusf_acc_tdstubby_blk",1},{"rhsusf_acc_tdstubby_tan",1},{"rhsusf_acc_grip3",1},{"rhsusf_acc_grip3_tan",1},{"rhsusf_acc_grip2",1},{"rhsusf_acc_grip2_tan",1}}},"rhsusf_opscore_mar_ut_pelt","",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_VAR_13_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 14"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_19", "Male04ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","rhsusf_opscore_mar_ut_pelt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","rhsusf_opscore_mar_ut_pelt"}; 
		weapons[] = {"rhs_weap_mk17_STD_grip3","rhs_weap_fim92","rhsusf_weap_m9","Laserdesignator"}; 
		respawnWeapons[] = {"rhs_weap_mk17_STD_grip3","rhs_weap_fim92","rhsusf_weap_m9","Laserdesignator"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC10_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_mk17_STD_grip3","rhsgref_sdn6_suppressor","rhsusf_acc_anpeq15side","rhsusf_acc_compm4",{"rhs_mag_20Rnd_SCAR_762x51_m61_ap",20},{},"rhsusf_acc_grip2"},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1}}},{},{"USP_REEBOW_3DAP_ACC10_RGR",{{"optic_Holosight_arid_F",1},{"optic_Holosight_blk_F",1},{"optic_Holosight_khk_F",1},{"optic_Holosight_lush_F",1},{"optic_Holosight",1},{"optic_Holosight_smg_blk_F",1},{"optic_Holosight_smg_khk_F",1},{"optic_Holosight_smg",1},{"rhsusf_acc_EOTECH",1},{"rhsusf_acc_eotech_xps3",1},{"rhsusf_acc_rvg_blk",1},{"rhsusf_acc_rvg_de",1},{"rhsusf_acc_grip4_bipod",1},{"rhsusf_acc_saw_lw_bipod",1},{"rhsusf_acc_saw_bipod",1},{"rhsusf_acc_grip4",1},{"rhsusf_acc_tdstubby_blk",1},{"rhsusf_acc_tdstubby_tan",1},{"rhsusf_acc_grip3",1},{"rhsusf_acc_grip3_tan",1},{"rhsusf_acc_grip2",1},{"rhsusf_acc_grip2_tan",1}}},"rhsusf_opscore_mar_ut_pelt","",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_VAR_13_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 14"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_19", "Male04ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","rhsusf_opscore_mar_ut_pelt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","rhsusf_opscore_mar_ut_pelt"}; 
		weapons[] = {"rhs_weap_mk17_STD_grip3","rhs_weap_fim92","rhsusf_weap_m9","Laserdesignator"}; 
		respawnWeapons[] = {"rhs_weap_mk17_STD_grip3","rhs_weap_fim92","rhsusf_weap_m9","Laserdesignator"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC10_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_mk17_STD_grip3","rhsgref_sdn6_suppressor","rhsusf_acc_anpeq15side","rhsusf_acc_compm4",{"rhs_mag_20Rnd_SCAR_762x51_m61_ap",20},{},"rhsusf_acc_grip2"},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1}}},{},{"USP_REEBOW_3DAP_ACC10_RGR",{{"optic_Holosight_arid_F",1},{"optic_Holosight_blk_F",1},{"optic_Holosight_khk_F",1},{"optic_Holosight_lush_F",1},{"optic_Holosight",1},{"optic_Holosight_smg_blk_F",1},{"optic_Holosight_smg_khk_F",1},{"optic_Holosight_smg",1},{"rhsusf_acc_EOTECH",1},{"rhsusf_acc_eotech_xps3",1},{"rhsusf_acc_rvg_blk",1},{"rhsusf_acc_rvg_de",1},{"rhsusf_acc_grip4_bipod",1},{"rhsusf_acc_saw_lw_bipod",1},{"rhsusf_acc_saw_bipod",1},{"rhsusf_acc_grip4",1},{"rhsusf_acc_tdstubby_blk",1},{"rhsusf_acc_tdstubby_tan",1},{"rhsusf_acc_grip3",1},{"rhsusf_acc_grip3_tan",1},{"rhsusf_acc_grip2",1},{"rhsusf_acc_grip2_tan",1}}},"rhsusf_opscore_mar_ut_pelt","",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_VAR_14_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 15"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_15", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_BOONIE_HAT_RGR"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_BOONIE_HAT_RGR"}; 
		weapons[] = {"rhs_weap_m24sws_d","rhs_weap_maaws","rhsusf_weap_m9","Laserdesignator"}; 
		respawnWeapons[] = {"rhs_weap_m24sws_d","rhs_weap_maaws","rhsusf_weap_m9","Laserdesignator"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m24sws_d","","","rhsusf_acc_LEUPOLDMK4_d",{"rhsusf_5Rnd_762x51_m118_special_Mag",5},{},""},{"rhs_weap_maaws","","","",{"rhs_mag_maaws_HEAT",1},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{}},{"USP_EAGLE_CIRAS",{}},{"B_Kitbag_rgr",{{"rhs_mag_maaws_HE",1,1},{"rhs_mag_maaws_HEDP",1,1},{"MRAWS_HE_F",1,1}}},"USP_BOONIE_HAT_RGR","",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_VAR_14_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 15"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_15", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_BOONIE_HAT_RGR"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_BOONIE_HAT_RGR"}; 
		weapons[] = {"rhs_weap_m24sws_d","rhs_weap_maaws","rhsusf_weap_m9","Laserdesignator"}; 
		respawnWeapons[] = {"rhs_weap_m24sws_d","rhs_weap_maaws","rhsusf_weap_m9","Laserdesignator"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m24sws_d","","","rhsusf_acc_LEUPOLDMK4_d",{"rhsusf_5Rnd_762x51_m118_special_Mag",5},{},""},{"rhs_weap_maaws","","","",{"rhs_mag_maaws_HEAT",1},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{}},{"USP_EAGLE_CIRAS",{}},{"B_Kitbag_rgr",{{"rhs_mag_maaws_HE",1,1},{"rhs_mag_maaws_HEDP",1,1},{"MRAWS_HE_F",1,1}}},"USP_BOONIE_HAT_RGR","",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_VAR_14_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 15"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_15", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "rhs_uniform_g3_rgr"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_BOONIE_HAT_RGR"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","USP_BOONIE_HAT_RGR"}; 
		weapons[] = {"rhs_weap_m24sws_d","rhs_weap_maaws","rhsusf_weap_m9","Laserdesignator"}; 
		respawnWeapons[] = {"rhs_weap_m24sws_d","rhs_weap_maaws","rhsusf_weap_m9","Laserdesignator"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m24sws_d","","","rhsusf_acc_LEUPOLDMK4_d",{"rhsusf_5Rnd_762x51_m118_special_Mag",5},{},""},{"rhs_weap_maaws","","","",{"rhs_mag_maaws_HEAT",1},{},""},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"rhs_uniform_g3_rgr",{}},{"USP_EAGLE_CIRAS",{}},{"B_Kitbag_rgr",{{"rhs_mag_maaws_HE",1,1},{"rhs_mag_maaws_HEDP",1,1},{"MRAWS_HE_F",1,1}}},"USP_BOONIE_HAT_RGR","",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_VAR_15_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 16"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_12", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "U_B_FullGhillie_sard"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","rhsusf_opscore_mar_ut_pelt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","rhsusf_opscore_mar_ut_pelt"}; 
		weapons[] = {"hlc_rifle_M14_Rail","rhs_weap_M320","Laserdesignator"}; 
		respawnWeapons[] = {"hlc_rifle_M14_Rail","rhs_weap_M320","Laserdesignator"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_M14_Rail","rhsusf_acc_aac_scarh_silencer","","optic_tws",{"ACE_20Rnd_762x51_M993_AP_Mag",20},{},""},{},{"rhs_weap_M320","","","",{"rhs_mag_M441_HE",1},{},""},{"U_B_FullGhillie_sard",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1}}},{},{},"rhsusf_opscore_mar_ut_pelt","",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_VAR_15_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 16"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_12", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "U_B_FullGhillie_sard"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","rhsusf_opscore_mar_ut_pelt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","rhsusf_opscore_mar_ut_pelt"}; 
		weapons[] = {"hlc_rifle_M14_Rail","rhs_weap_M320","Laserdesignator"}; 
		respawnWeapons[] = {"hlc_rifle_M14_Rail","rhs_weap_M320","Laserdesignator"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_M14_Rail","rhsusf_acc_aac_scarh_silencer","","optic_tws",{"ACE_20Rnd_762x51_M993_AP_Mag",20},{},""},{},{"rhs_weap_M320","","","",{"rhs_mag_M441_HE",1},{},""},{"U_B_FullGhillie_sard",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1}}},{},{},"rhsusf_opscore_mar_ut_pelt","",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_VAR_15_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 16"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_12", "Male06ENG" ,"G_NATO_default"};
		uniformClass = "U_B_FullGhillie_sard"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","rhsusf_opscore_mar_ut_pelt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15","rhsusf_opscore_mar_ut_pelt"}; 
		weapons[] = {"hlc_rifle_M14_Rail","rhs_weap_M320","Laserdesignator"}; 
		respawnWeapons[] = {"hlc_rifle_M14_Rail","rhs_weap_M320","Laserdesignator"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_M14_Rail","rhsusf_acc_aac_scarh_silencer","","optic_tws",{"ACE_20Rnd_762x51_M993_AP_Mag",20},{},""},{},{"rhs_weap_M320","","","",{"rhs_mag_M441_HE",1},{},""},{"U_B_FullGhillie_sard",{{"ACE_IR_Strobe_Item",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",4},{"ACE_epinephrine",2},{"ACE_morphine",4},{"ACE_elasticBandage",10},{"ACE_personalAidKit",1},{"ACE_microDAGR",1},{"ACE_RangeCard",1}}},{},{},"rhsusf_opscore_mar_ut_pelt","",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_VAR_16_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 17"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_13", "Male02ENG" ,"G_NATO_default"};
		uniformClass = "B_CWU_coverall_od_AG_usn"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_MFRAME_TAN2","H_PilotHelmetHeli_O"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_MFRAME_TAN2","H_PilotHelmetHeli_O"}; 
		weapons[] = {"Tier1_MK48_Mod1","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_MK48_Mod1","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_M252_Gun_Bag";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_MK48_Mod1","","","optic_tws_mg",{"hlc_200Rnd_762x51_T_M60E4",200},{},"Tier1_SAW_Bipod_2"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"B_CWU_coverall_od_AG_usn",{}},{},{"rhs_M252_Gun_Bag",{}},"H_PilotHelmetHeli_O","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_VAR_16_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 17"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_13", "Male02ENG" ,"G_NATO_default"};
		uniformClass = "B_CWU_coverall_od_AG_usn"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_MFRAME_TAN2","H_PilotHelmetHeli_O"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_MFRAME_TAN2","H_PilotHelmetHeli_O"}; 
		weapons[] = {"Tier1_MK48_Mod1","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_MK48_Mod1","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_M252_Gun_Bag";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_MK48_Mod1","","","optic_tws_mg",{"hlc_200Rnd_762x51_T_M60E4",200},{},"Tier1_SAW_Bipod_2"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"B_CWU_coverall_od_AG_usn",{}},{},{"rhs_M252_Gun_Bag",{}},"H_PilotHelmetHeli_O","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_VAR_16_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 17"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_13", "Male02ENG" ,"G_NATO_default"};
		uniformClass = "B_CWU_coverall_od_AG_usn"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_MFRAME_TAN2","H_PilotHelmetHeli_O"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_MFRAME_TAN2","H_PilotHelmetHeli_O"}; 
		weapons[] = {"Tier1_MK48_Mod1","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_MK48_Mod1","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_M252_Gun_Bag";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_MK48_Mod1","","","optic_tws_mg",{"hlc_200Rnd_762x51_T_M60E4",200},{},"Tier1_SAW_Bipod_2"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"B_CWU_coverall_od_AG_usn",{}},{},{"rhs_M252_Gun_Bag",{}},"H_PilotHelmetHeli_O","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_RANGER_2000_VAR_17_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 18"; 
		faction = "BS_O_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_02", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "B_CWU_coverall_tn_usn"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_MFRAME_TAN2","RHS_jetpilot_usaf"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_MFRAME_TAN2","RHS_jetpilot_usaf"}; 
		weapons[] = {"hlc_rifle_M14dmr_Rail","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_M14dmr_Rail","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_M252_Bipod_Bag";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_M14dmr_Rail","rhsusf_acc_aac_762sd_silencer","","optic_tws",{"hlc_20Rnd_762x51_barrier_M14",20},{},""},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"B_CWU_coverall_tn_usn",{}},{},{"rhs_M252_Bipod_Bag",{}},"RHS_jetpilot_usaf","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_RANGER_2000_VAR_17_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 18"; 
		faction = "BS_B_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_02", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "B_CWU_coverall_tn_usn"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_MFRAME_TAN2","RHS_jetpilot_usaf"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_MFRAME_TAN2","RHS_jetpilot_usaf"}; 
		weapons[] = {"hlc_rifle_M14dmr_Rail","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_M14dmr_Rail","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_M252_Bipod_Bag";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_M14dmr_Rail","rhsusf_acc_aac_762sd_silencer","","optic_tws",{"hlc_20Rnd_762x51_barrier_M14",20},{},""},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"B_CWU_coverall_tn_usn",{}},{},{"rhs_M252_Bipod_Bag",{}},"RHS_jetpilot_usaf","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_RANGER_2000_VAR_17_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 1, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 18"; 
		faction = "BS_I_US_RANGER_2000"; 
		identityTypes[] = {"WhiteHead_02", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "B_CWU_coverall_tn_usn"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_MFRAME_TAN2","RHS_jetpilot_usaf"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_MFRAME_TAN2","RHS_jetpilot_usaf"}; 
		weapons[] = {"hlc_rifle_M14dmr_Rail","rhsusf_weap_m9","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_M14dmr_Rail","rhsusf_weap_m9","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "rhs_M252_Bipod_Bag";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_M14dmr_Rail","rhsusf_acc_aac_762sd_silencer","","optic_tws",{"hlc_20Rnd_762x51_barrier_M14",20},{},""},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"B_CWU_coverall_tn_usn",{}},{},{"rhs_M252_Bipod_Bag",{}},"RHS_jetpilot_usaf","USP_MFRAME_TAN2",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	class rhsusf_m1165a1_gmv_mk19_m240_socom_d;
	class BS_B_US_RANGER_2000_Ry8jv0837j0:rhsusf_m1165a1_gmv_mk19_m240_socom_d {
		scope=2;
		side=1;
		faction="BS_B_US_RANGER_2000";
		crew="BS_B_US_RANGER_2000_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_US_RANGER_2000_Rifleman_DT",
			"BS_B_US_RANGER_2000_Rifleman_DT",
			"BS_B_US_RANGER_2000_Rifleman_DT",
			"BS_B_US_RANGER_2000_Rifleman_DT"
		}; 
	}; 
	class BS_O_US_RANGER_2000_Ry8jv0837j0:rhsusf_m1165a1_gmv_mk19_m240_socom_d {
		scope=2;
		side=0;
		faction="BS_O_US_RANGER_2000";
		crew="BS_O_US_RANGER_2000_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_US_RANGER_2000_Rifleman_DT",
			"BS_O_US_RANGER_2000_Rifleman_DT",
			"BS_O_US_RANGER_2000_Rifleman_DT",
			"BS_O_US_RANGER_2000_Rifleman_DT"
		}; 
	}; 
	class BS_I_US_RANGER_2000_Ry8jv0837j0:rhsusf_m1165a1_gmv_mk19_m240_socom_d {
		scope=2;
		side=2;
		faction="BS_I_US_RANGER_2000";
		crew="BS_I_US_RANGER_2000_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_US_RANGER_2000_Rifleman_DT",
			"BS_I_US_RANGER_2000_Rifleman_DT",
			"BS_I_US_RANGER_2000_Rifleman_DT",
			"BS_I_US_RANGER_2000_Rifleman_DT"
		}; 
	}; 

	class rhsusf_m1165a1_gmv_m2_m240_socom_d;
	class BS_B_US_RANGER_2000_FOnsEYP9ivA:rhsusf_m1165a1_gmv_m2_m240_socom_d {
		scope=2;
		side=1;
		faction="BS_B_US_RANGER_2000";
		crew="BS_B_US_RANGER_2000_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_US_RANGER_2000_Rifleman_DT",
			"BS_B_US_RANGER_2000_Rifleman_DT",
			"BS_B_US_RANGER_2000_Rifleman_DT",
			"BS_B_US_RANGER_2000_Rifleman_DT"
		}; 
	}; 
	class BS_O_US_RANGER_2000_FOnsEYP9ivA:rhsusf_m1165a1_gmv_m2_m240_socom_d {
		scope=2;
		side=0;
		faction="BS_O_US_RANGER_2000";
		crew="BS_O_US_RANGER_2000_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_US_RANGER_2000_Rifleman_DT",
			"BS_O_US_RANGER_2000_Rifleman_DT",
			"BS_O_US_RANGER_2000_Rifleman_DT",
			"BS_O_US_RANGER_2000_Rifleman_DT"
		}; 
	}; 
	class BS_I_US_RANGER_2000_FOnsEYP9ivA:rhsusf_m1165a1_gmv_m2_m240_socom_d {
		scope=2;
		side=2;
		faction="BS_I_US_RANGER_2000";
		crew="BS_I_US_RANGER_2000_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_US_RANGER_2000_Rifleman_DT",
			"BS_I_US_RANGER_2000_Rifleman_DT",
			"BS_I_US_RANGER_2000_Rifleman_DT",
			"BS_I_US_RANGER_2000_Rifleman_DT"
		}; 
	}; 

	class rhsusf_m1165a1_gmv_m134d_m240_socom_d;
	class BS_B_US_RANGER_2000_KJ8yxgbw5Wc:rhsusf_m1165a1_gmv_m134d_m240_socom_d {
		scope=2;
		side=1;
		faction="BS_B_US_RANGER_2000";
		crew="BS_B_US_RANGER_2000_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_US_RANGER_2000_Rifleman_DT",
			"BS_B_US_RANGER_2000_Rifleman_DT",
			"BS_B_US_RANGER_2000_Rifleman_DT",
			"BS_B_US_RANGER_2000_Rifleman_DT"
		}; 
	}; 
	class BS_O_US_RANGER_2000_KJ8yxgbw5Wc:rhsusf_m1165a1_gmv_m134d_m240_socom_d {
		scope=2;
		side=0;
		faction="BS_O_US_RANGER_2000";
		crew="BS_O_US_RANGER_2000_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_US_RANGER_2000_Rifleman_DT",
			"BS_O_US_RANGER_2000_Rifleman_DT",
			"BS_O_US_RANGER_2000_Rifleman_DT",
			"BS_O_US_RANGER_2000_Rifleman_DT"
		}; 
	}; 
	class BS_I_US_RANGER_2000_KJ8yxgbw5Wc:rhsusf_m1165a1_gmv_m134d_m240_socom_d {
		scope=2;
		side=2;
		faction="BS_I_US_RANGER_2000";
		crew="BS_I_US_RANGER_2000_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_US_RANGER_2000_Rifleman_DT",
			"BS_I_US_RANGER_2000_Rifleman_DT",
			"BS_I_US_RANGER_2000_Rifleman_DT",
			"BS_I_US_RANGER_2000_Rifleman_DT"
		}; 
	}; 

	class RHS_MELB_AH6M;
	class BS_B_US_RANGER_2000_uYpoma4OTj8:RHS_MELB_AH6M {
		scope=2;
		side=1;
		faction="BS_B_US_RANGER_2000";
		crew="BS_B_US_RANGER_2000_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_US_RANGER_2000_Rifleman_DT",
			"BS_B_US_RANGER_2000_Rifleman_DT"
		}; 
	}; 
	class BS_O_US_RANGER_2000_uYpoma4OTj8:RHS_MELB_AH6M {
		scope=2;
		side=0;
		faction="BS_O_US_RANGER_2000";
		crew="BS_O_US_RANGER_2000_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_US_RANGER_2000_Rifleman_DT",
			"BS_O_US_RANGER_2000_Rifleman_DT"
		}; 
	}; 
	class BS_I_US_RANGER_2000_uYpoma4OTj8:RHS_MELB_AH6M {
		scope=2;
		side=2;
		faction="BS_I_US_RANGER_2000";
		crew="BS_I_US_RANGER_2000_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_US_RANGER_2000_Rifleman_DT",
			"BS_I_US_RANGER_2000_Rifleman_DT"
		}; 
	}; 

	class RHS_MELB_MH6M;
	class BS_B_US_RANGER_2000_LaCxZtLGfRQ:RHS_MELB_MH6M {
		scope=2;
		side=1;
		faction="BS_B_US_RANGER_2000";
		crew="BS_B_US_RANGER_2000_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_US_RANGER_2000_Rifleman_DT",
			"BS_B_US_RANGER_2000_Rifleman_DT"
		}; 
	}; 
	class BS_O_US_RANGER_2000_LaCxZtLGfRQ:RHS_MELB_MH6M {
		scope=2;
		side=0;
		faction="BS_O_US_RANGER_2000";
		crew="BS_O_US_RANGER_2000_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_US_RANGER_2000_Rifleman_DT",
			"BS_O_US_RANGER_2000_Rifleman_DT"
		}; 
	}; 
	class BS_I_US_RANGER_2000_LaCxZtLGfRQ:RHS_MELB_MH6M {
		scope=2;
		side=2;
		faction="BS_I_US_RANGER_2000";
		crew="BS_I_US_RANGER_2000_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_US_RANGER_2000_Rifleman_DT",
			"BS_I_US_RANGER_2000_Rifleman_DT"
		}; 
	}; 

	class RHS_A10;
	class BS_B_US_RANGER_2000_Brx4CePSufA:RHS_A10 {
		scope=2;
		side=1;
		faction="BS_B_US_RANGER_2000";
		crew="BS_B_US_RANGER_2000_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_US_RANGER_2000_Rifleman_DT"
		}; 
	}; 
	class BS_O_US_RANGER_2000_Brx4CePSufA:RHS_A10 {
		scope=2;
		side=0;
		faction="BS_O_US_RANGER_2000";
		crew="BS_O_US_RANGER_2000_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_US_RANGER_2000_Rifleman_DT"
		}; 
	}; 
	class BS_I_US_RANGER_2000_Brx4CePSufA:RHS_A10 {
		scope=2;
		side=2;
		faction="BS_I_US_RANGER_2000";
		crew="BS_I_US_RANGER_2000_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_US_RANGER_2000_Rifleman_DT"
		}; 
	}; 

	class rhsusf_stryker_m1126_m2_wd;
	class BS_B_US_RANGER_2000_xjMcmlvSuhs:rhsusf_stryker_m1126_m2_wd {
		scope=2;
		side=1;
		faction="BS_B_US_RANGER_2000";
		crew="BS_B_US_RANGER_2000_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_US_RANGER_2000_Rifleman_DT",
			"BS_B_US_RANGER_2000_Rifleman_DT",
			"BS_B_US_RANGER_2000_Rifleman_DT",
			"BS_B_US_RANGER_2000_Rifleman_DT"
		}; 
	}; 
	class BS_O_US_RANGER_2000_xjMcmlvSuhs:rhsusf_stryker_m1126_m2_wd {
		scope=2;
		side=0;
		faction="BS_O_US_RANGER_2000";
		crew="BS_O_US_RANGER_2000_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_US_RANGER_2000_Rifleman_DT",
			"BS_O_US_RANGER_2000_Rifleman_DT",
			"BS_O_US_RANGER_2000_Rifleman_DT",
			"BS_O_US_RANGER_2000_Rifleman_DT"
		}; 
	}; 
	class BS_I_US_RANGER_2000_xjMcmlvSuhs:rhsusf_stryker_m1126_m2_wd {
		scope=2;
		side=2;
		faction="BS_I_US_RANGER_2000";
		crew="BS_I_US_RANGER_2000_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_US_RANGER_2000_Rifleman_DT",
			"BS_I_US_RANGER_2000_Rifleman_DT",
			"BS_I_US_RANGER_2000_Rifleman_DT",
			"BS_I_US_RANGER_2000_Rifleman_DT"
		}; 
	}; 

	class rhsusf_stryker_m1126_mk19_wd;
	class BS_B_US_RANGER_2000_1UAs8mtq3f0:rhsusf_stryker_m1126_mk19_wd {
		scope=2;
		side=1;
		faction="BS_B_US_RANGER_2000";
		crew="BS_B_US_RANGER_2000_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_US_RANGER_2000_Rifleman_DT",
			"BS_B_US_RANGER_2000_Rifleman_DT",
			"BS_B_US_RANGER_2000_Rifleman_DT",
			"BS_B_US_RANGER_2000_Rifleman_DT"
		}; 
	}; 
	class BS_O_US_RANGER_2000_1UAs8mtq3f0:rhsusf_stryker_m1126_mk19_wd {
		scope=2;
		side=0;
		faction="BS_O_US_RANGER_2000";
		crew="BS_O_US_RANGER_2000_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_US_RANGER_2000_Rifleman_DT",
			"BS_O_US_RANGER_2000_Rifleman_DT",
			"BS_O_US_RANGER_2000_Rifleman_DT",
			"BS_O_US_RANGER_2000_Rifleman_DT"
		}; 
	}; 
	class BS_I_US_RANGER_2000_1UAs8mtq3f0:rhsusf_stryker_m1126_mk19_wd {
		scope=2;
		side=2;
		faction="BS_I_US_RANGER_2000";
		crew="BS_I_US_RANGER_2000_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_US_RANGER_2000_Rifleman_DT",
			"BS_I_US_RANGER_2000_Rifleman_DT",
			"BS_I_US_RANGER_2000_Rifleman_DT",
			"BS_I_US_RANGER_2000_Rifleman_DT"
		}; 
	}; 

	class RHS_M252_WD;
	class BS_B_US_RANGER_2000_fo7uZLozwtw:RHS_M252_WD {
		scope=2;
		side=1;
		faction="BS_B_US_RANGER_2000";
		crew="BS_B_US_RANGER_2000_GL_DT";
		typicalCargo[]= { 
			"BS_B_US_RANGER_2000_GL_DT"
		}; 
	}; 
	class BS_O_US_RANGER_2000_fo7uZLozwtw:RHS_M252_WD {
		scope=2;
		side=0;
		faction="BS_O_US_RANGER_2000";
		crew="BS_O_US_RANGER_2000_GL_DT";
		typicalCargo[]= { 
			"BS_O_US_RANGER_2000_GL_DT"
		}; 
	}; 
	class BS_I_US_RANGER_2000_fo7uZLozwtw:RHS_M252_WD {
		scope=2;
		side=2;
		faction="BS_I_US_RANGER_2000";
		crew="BS_I_US_RANGER_2000_GL_DT";
		typicalCargo[]= { 
			"BS_I_US_RANGER_2000_GL_DT"
		}; 
	}; 

	class RHS_M2StaticMG_WD;
	class BS_B_US_RANGER_2000_CWmbLDgCfQk:RHS_M2StaticMG_WD {
		scope=2;
		side=1;
		faction="BS_B_US_RANGER_2000";
		crew="BS_B_US_RANGER_2000_GL_DT";
		typicalCargo[]= { 
			"BS_B_US_RANGER_2000_GL_DT"
		}; 
	}; 
	class BS_O_US_RANGER_2000_CWmbLDgCfQk:RHS_M2StaticMG_WD {
		scope=2;
		side=0;
		faction="BS_O_US_RANGER_2000";
		crew="BS_O_US_RANGER_2000_GL_DT";
		typicalCargo[]= { 
			"BS_O_US_RANGER_2000_GL_DT"
		}; 
	}; 
	class BS_I_US_RANGER_2000_CWmbLDgCfQk:RHS_M2StaticMG_WD {
		scope=2;
		side=2;
		faction="BS_I_US_RANGER_2000";
		crew="BS_I_US_RANGER_2000_GL_DT";
		typicalCargo[]= { 
			"BS_I_US_RANGER_2000_GL_DT"
		}; 
	}; 

	class RHS_TOW_TriPod_WD;
	class BS_B_US_RANGER_2000_A0ukXYOJftw:RHS_TOW_TriPod_WD {
		scope=2;
		side=1;
		faction="BS_B_US_RANGER_2000";
		crew="BS_B_US_RANGER_2000_GL_DT";
		typicalCargo[]= { 
			"BS_B_US_RANGER_2000_GL_DT"
		}; 
	}; 
	class BS_O_US_RANGER_2000_A0ukXYOJftw:RHS_TOW_TriPod_WD {
		scope=2;
		side=0;
		faction="BS_O_US_RANGER_2000";
		crew="BS_O_US_RANGER_2000_GL_DT";
		typicalCargo[]= { 
			"BS_O_US_RANGER_2000_GL_DT"
		}; 
	}; 
	class BS_I_US_RANGER_2000_A0ukXYOJftw:RHS_TOW_TriPod_WD {
		scope=2;
		side=2;
		faction="BS_I_US_RANGER_2000";
		crew="BS_I_US_RANGER_2000_GL_DT";
		typicalCargo[]= { 
			"BS_I_US_RANGER_2000_GL_DT"
		}; 
	}; 

	class RHS_MK19_TriPod_WD;
	class BS_B_US_RANGER_2000_Mz8sQT6TNtE:RHS_MK19_TriPod_WD {
		scope=2;
		side=1;
		faction="BS_B_US_RANGER_2000";
		crew="BS_B_US_RANGER_2000_GL_DT";
		typicalCargo[]= { 
			"BS_B_US_RANGER_2000_GL_DT"
		}; 
	}; 
	class BS_O_US_RANGER_2000_Mz8sQT6TNtE:RHS_MK19_TriPod_WD {
		scope=2;
		side=0;
		faction="BS_O_US_RANGER_2000";
		crew="BS_O_US_RANGER_2000_GL_DT";
		typicalCargo[]= { 
			"BS_O_US_RANGER_2000_GL_DT"
		}; 
	}; 
	class BS_I_US_RANGER_2000_Mz8sQT6TNtE:RHS_MK19_TriPod_WD {
		scope=2;
		side=2;
		faction="BS_I_US_RANGER_2000";
		crew="BS_I_US_RANGER_2000_GL_DT";
		typicalCargo[]= { 
			"BS_I_US_RANGER_2000_GL_DT"
		}; 
	}; 

	class rhsusf_m1a2sep1tuskiiwd_usarmy;
	class BS_B_US_RANGER_2000_IrQciOlY2yU:rhsusf_m1a2sep1tuskiiwd_usarmy {
		scope=2;
		side=1;
		faction="BS_B_US_RANGER_2000";
		crew="BS_B_US_RANGER_2000_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_US_RANGER_2000_Rifleman_DT",
			"BS_B_US_RANGER_2000_Rifleman_DT",
			"BS_B_US_RANGER_2000_Rifleman_DT"
		}; 
	}; 
	class BS_O_US_RANGER_2000_IrQciOlY2yU:rhsusf_m1a2sep1tuskiiwd_usarmy {
		scope=2;
		side=0;
		faction="BS_O_US_RANGER_2000";
		crew="BS_O_US_RANGER_2000_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_US_RANGER_2000_Rifleman_DT",
			"BS_O_US_RANGER_2000_Rifleman_DT",
			"BS_O_US_RANGER_2000_Rifleman_DT"
		}; 
	}; 
	class BS_I_US_RANGER_2000_IrQciOlY2yU:rhsusf_m1a2sep1tuskiiwd_usarmy {
		scope=2;
		side=2;
		faction="BS_I_US_RANGER_2000";
		crew="BS_I_US_RANGER_2000_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_US_RANGER_2000_Rifleman_DT",
			"BS_I_US_RANGER_2000_Rifleman_DT",
			"BS_I_US_RANGER_2000_Rifleman_DT"
		}; 
	}; 

	class rhsusf_stryker_m1132_m2_wd;
	class BS_B_US_RANGER_2000_q1UOAih6vZg:rhsusf_stryker_m1132_m2_wd {
		scope=2;
		side=1;
		faction="BS_B_US_RANGER_2000";
		crew="BS_B_US_RANGER_2000_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_US_RANGER_2000_Rifleman_DT",
			"BS_B_US_RANGER_2000_Rifleman_DT",
			"BS_B_US_RANGER_2000_Rifleman_DT",
			"BS_B_US_RANGER_2000_Rifleman_DT"
		}; 
	}; 
	class BS_O_US_RANGER_2000_q1UOAih6vZg:rhsusf_stryker_m1132_m2_wd {
		scope=2;
		side=0;
		faction="BS_O_US_RANGER_2000";
		crew="BS_O_US_RANGER_2000_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_US_RANGER_2000_Rifleman_DT",
			"BS_O_US_RANGER_2000_Rifleman_DT",
			"BS_O_US_RANGER_2000_Rifleman_DT",
			"BS_O_US_RANGER_2000_Rifleman_DT"
		}; 
	}; 
	class BS_I_US_RANGER_2000_q1UOAih6vZg:rhsusf_stryker_m1132_m2_wd {
		scope=2;
		side=2;
		faction="BS_I_US_RANGER_2000";
		crew="BS_I_US_RANGER_2000_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_US_RANGER_2000_Rifleman_DT",
			"BS_I_US_RANGER_2000_Rifleman_DT",
			"BS_I_US_RANGER_2000_Rifleman_DT",
			"BS_I_US_RANGER_2000_Rifleman_DT"
		}; 
	}; 

	class rhsusf_stryker_m1132_m2_np_wd;
	class BS_B_US_RANGER_2000_ALyQbH4L2mQ:rhsusf_stryker_m1132_m2_np_wd {
		scope=2;
		side=1;
		faction="BS_B_US_RANGER_2000";
		crew="BS_B_US_RANGER_2000_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_US_RANGER_2000_Rifleman_DT",
			"BS_B_US_RANGER_2000_Rifleman_DT",
			"BS_B_US_RANGER_2000_Rifleman_DT",
			"BS_B_US_RANGER_2000_Rifleman_DT"
		}; 
	}; 
	class BS_O_US_RANGER_2000_ALyQbH4L2mQ:rhsusf_stryker_m1132_m2_np_wd {
		scope=2;
		side=0;
		faction="BS_O_US_RANGER_2000";
		crew="BS_O_US_RANGER_2000_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_US_RANGER_2000_Rifleman_DT",
			"BS_O_US_RANGER_2000_Rifleman_DT",
			"BS_O_US_RANGER_2000_Rifleman_DT",
			"BS_O_US_RANGER_2000_Rifleman_DT"
		}; 
	}; 
	class BS_I_US_RANGER_2000_ALyQbH4L2mQ:rhsusf_stryker_m1132_m2_np_wd {
		scope=2;
		side=2;
		faction="BS_I_US_RANGER_2000";
		crew="BS_I_US_RANGER_2000_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_US_RANGER_2000_Rifleman_DT",
			"BS_I_US_RANGER_2000_Rifleman_DT",
			"BS_I_US_RANGER_2000_Rifleman_DT",
			"BS_I_US_RANGER_2000_Rifleman_DT"
		}; 
	}; 

	class RHS_M2A3_BUSKIII;
	class BS_B_US_RANGER_2000_iNILXiCKDqE:RHS_M2A3_BUSKIII {
		scope=2;
		side=1;
		faction="BS_B_US_RANGER_2000";
		crew="BS_B_US_RANGER_2000_Rifleman_DT";
		typicalCargo[]= { 
			"BS_B_US_RANGER_2000_Rifleman_DT",
			"BS_B_US_RANGER_2000_Rifleman_DT",
			"BS_B_US_RANGER_2000_Rifleman_DT",
			"BS_B_US_RANGER_2000_Rifleman_DT"
		}; 
	}; 
	class BS_O_US_RANGER_2000_iNILXiCKDqE:RHS_M2A3_BUSKIII {
		scope=2;
		side=0;
		faction="BS_O_US_RANGER_2000";
		crew="BS_O_US_RANGER_2000_Rifleman_DT";
		typicalCargo[]= { 
			"BS_O_US_RANGER_2000_Rifleman_DT",
			"BS_O_US_RANGER_2000_Rifleman_DT",
			"BS_O_US_RANGER_2000_Rifleman_DT",
			"BS_O_US_RANGER_2000_Rifleman_DT"
		}; 
	}; 
	class BS_I_US_RANGER_2000_iNILXiCKDqE:RHS_M2A3_BUSKIII {
		scope=2;
		side=2;
		faction="BS_I_US_RANGER_2000";
		crew="BS_I_US_RANGER_2000_Rifleman_DT";
		typicalCargo[]= { 
			"BS_I_US_RANGER_2000_Rifleman_DT",
			"BS_I_US_RANGER_2000_Rifleman_DT",
			"BS_I_US_RANGER_2000_Rifleman_DT",
			"BS_I_US_RANGER_2000_Rifleman_DT"
		}; 
	}; 

	class B_Heli_Transport_03_F;
	class BS_B_US_RANGER_2000_ysDwKg9CKtc:B_Heli_Transport_03_F {
		scope=2;
		side=1;
		faction="BS_B_US_RANGER_2000";
		crew="BS_B_US_RANGER_2000_GL_DT";
		typicalCargo[]= { 
			"BS_B_US_RANGER_2000_GL_DT",
			"BS_B_US_RANGER_2000_GL_DT",
			"BS_B_US_RANGER_2000_GL_DT",
			"BS_B_US_RANGER_2000_GL_DT",
			"BS_B_US_RANGER_2000_GL_DT",
			"BS_B_US_RANGER_2000_GL_DT",
			"BS_B_US_RANGER_2000_GL_DT"
		}; 
	}; 
	class BS_O_US_RANGER_2000_ysDwKg9CKtc:B_Heli_Transport_03_F {
		scope=2;
		side=0;
		faction="BS_O_US_RANGER_2000";
		crew="BS_O_US_RANGER_2000_GL_DT";
		typicalCargo[]= { 
			"BS_O_US_RANGER_2000_GL_DT",
			"BS_O_US_RANGER_2000_GL_DT",
			"BS_O_US_RANGER_2000_GL_DT",
			"BS_O_US_RANGER_2000_GL_DT",
			"BS_O_US_RANGER_2000_GL_DT",
			"BS_O_US_RANGER_2000_GL_DT",
			"BS_O_US_RANGER_2000_GL_DT"
		}; 
	}; 
	class BS_I_US_RANGER_2000_ysDwKg9CKtc:B_Heli_Transport_03_F {
		scope=2;
		side=2;
		faction="BS_I_US_RANGER_2000";
		crew="BS_I_US_RANGER_2000_GL_DT";
		typicalCargo[]= { 
			"BS_I_US_RANGER_2000_GL_DT",
			"BS_I_US_RANGER_2000_GL_DT",
			"BS_I_US_RANGER_2000_GL_DT",
			"BS_I_US_RANGER_2000_GL_DT",
			"BS_I_US_RANGER_2000_GL_DT",
			"BS_I_US_RANGER_2000_GL_DT",
			"BS_I_US_RANGER_2000_GL_DT"
		}; 
	}; 

	class B_Heli_Transport_03_unarmed_F;
	class BS_B_US_RANGER_2000_S5whMbr1n18:B_Heli_Transport_03_unarmed_F {
		scope=2;
		side=1;
		faction="BS_B_US_RANGER_2000";
		crew="BS_B_US_RANGER_2000_GL_DT";
		typicalCargo[]= { 
			"BS_B_US_RANGER_2000_GL_DT",
			"BS_B_US_RANGER_2000_GL_DT",
			"BS_B_US_RANGER_2000_GL_DT",
			"BS_B_US_RANGER_2000_GL_DT",
			"BS_B_US_RANGER_2000_GL_DT",
			"BS_B_US_RANGER_2000_GL_DT",
			"BS_B_US_RANGER_2000_GL_DT"
		}; 
	}; 
	class BS_O_US_RANGER_2000_S5whMbr1n18:B_Heli_Transport_03_unarmed_F {
		scope=2;
		side=0;
		faction="BS_O_US_RANGER_2000";
		crew="BS_O_US_RANGER_2000_GL_DT";
		typicalCargo[]= { 
			"BS_O_US_RANGER_2000_GL_DT",
			"BS_O_US_RANGER_2000_GL_DT",
			"BS_O_US_RANGER_2000_GL_DT",
			"BS_O_US_RANGER_2000_GL_DT",
			"BS_O_US_RANGER_2000_GL_DT",
			"BS_O_US_RANGER_2000_GL_DT",
			"BS_O_US_RANGER_2000_GL_DT"
		}; 
	}; 
	class BS_I_US_RANGER_2000_S5whMbr1n18:B_Heli_Transport_03_unarmed_F {
		scope=2;
		side=2;
		faction="BS_I_US_RANGER_2000";
		crew="BS_I_US_RANGER_2000_GL_DT";
		typicalCargo[]= { 
			"BS_I_US_RANGER_2000_GL_DT",
			"BS_I_US_RANGER_2000_GL_DT",
			"BS_I_US_RANGER_2000_GL_DT",
			"BS_I_US_RANGER_2000_GL_DT",
			"BS_I_US_RANGER_2000_GL_DT",
			"BS_I_US_RANGER_2000_GL_DT",
			"BS_I_US_RANGER_2000_GL_DT"
		}; 
	}; 

	class RHS_C130J;
	class BS_B_US_RANGER_2000_b9Qx6vL5Omg:RHS_C130J {
		scope=2;
		side=1;
		faction="BS_B_US_RANGER_2000";
		crew="BS_B_US_RANGER_2000_GL_DT";
		typicalCargo[]= { 
			"BS_B_US_RANGER_2000_GL_DT",
			"BS_B_US_RANGER_2000_GL_DT",
			"BS_B_US_RANGER_2000_GL_DT"
		}; 
	}; 
	class BS_O_US_RANGER_2000_b9Qx6vL5Omg:RHS_C130J {
		scope=2;
		side=0;
		faction="BS_O_US_RANGER_2000";
		crew="BS_O_US_RANGER_2000_GL_DT";
		typicalCargo[]= { 
			"BS_O_US_RANGER_2000_GL_DT",
			"BS_O_US_RANGER_2000_GL_DT",
			"BS_O_US_RANGER_2000_GL_DT"
		}; 
	}; 
	class BS_I_US_RANGER_2000_b9Qx6vL5Omg:RHS_C130J {
		scope=2;
		side=2;
		faction="BS_I_US_RANGER_2000";
		crew="BS_I_US_RANGER_2000_GL_DT";
		typicalCargo[]= { 
			"BS_I_US_RANGER_2000_GL_DT",
			"BS_I_US_RANGER_2000_GL_DT",
			"BS_I_US_RANGER_2000_GL_DT"
		}; 
	}; 

	class RHS_C130J_Cargo;
	class BS_B_US_RANGER_2000_PDi9Aikgwhc:RHS_C130J_Cargo {
		scope=2;
		side=1;
		faction="BS_B_US_RANGER_2000";
		crew="BS_B_US_RANGER_2000_GL_DT";
		typicalCargo[]= { 
			"BS_B_US_RANGER_2000_GL_DT",
			"BS_B_US_RANGER_2000_GL_DT",
			"BS_B_US_RANGER_2000_GL_DT"
		}; 
	}; 
	class BS_O_US_RANGER_2000_PDi9Aikgwhc:RHS_C130J_Cargo {
		scope=2;
		side=0;
		faction="BS_O_US_RANGER_2000";
		crew="BS_O_US_RANGER_2000_GL_DT";
		typicalCargo[]= { 
			"BS_O_US_RANGER_2000_GL_DT",
			"BS_O_US_RANGER_2000_GL_DT",
			"BS_O_US_RANGER_2000_GL_DT"
		}; 
	}; 
	class BS_I_US_RANGER_2000_PDi9Aikgwhc:RHS_C130J_Cargo {
		scope=2;
		side=2;
		faction="BS_I_US_RANGER_2000";
		crew="BS_I_US_RANGER_2000_GL_DT";
		typicalCargo[]= { 
			"BS_I_US_RANGER_2000_GL_DT",
			"BS_I_US_RANGER_2000_GL_DT",
			"BS_I_US_RANGER_2000_GL_DT"
		}; 
	}; 
};
class CfgGroups { 
	class East { 
		class US_RANGER_2000 { 
			name="US - RANGER (2008)";
			class Infantry {
				name="Infantry";
				class BS_O_US_RANGER_2000_Fireteam_WL {
					name="Fireteam (Woodland)";
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					side=0;
					faction="BS_O_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_GL_WL";
					};
				};
				class BS_O_US_RANGER_2000_Fireteam_WT {
					name="Fireteam (Winter)";
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					side=0;
					faction="BS_O_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_AR_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_GL_WT";
					};
				};
				class BS_O_US_RANGER_2000_Fireteam_DT {
					name="Fireteam (Desert)";
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					side=0;
					faction="BS_O_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_AR_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_GL_DT";
					};
				};
				class BS_O_US_RANGER_2000_Squad_WL {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Squad (Woodland)";
					side=0;
					faction="BS_O_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_GL_WL";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_AR_WL";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_GL_WL";
					};
				};
				class BS_O_US_RANGER_2000_Squad_WT {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="Squad (Winter)";
					side=0;
					faction="BS_O_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_AR_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_GL_WT";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_AR_WT";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_GL_WT";
					};
				};
				class BS_O_US_RANGER_2000_Squad_DT {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="Squad (Desert)";
					side=0;
					faction="BS_O_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_AR_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_GL_DT";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_AR_DT";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_GL_DT";
					};
				};
				class BS_O_US_RANGER_2000_AT_WL {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Anti-Tank (Woodland)";
					side=0;
					faction="BS_O_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WL";
					};
				};
				class BS_O_US_RANGER_2000_AT_WT {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="Anti-Tank (Winter)";
					side=0;
					faction="BS_O_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WT";
					};
				};
				class BS_O_US_RANGER_2000_AT_DT {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="Anti-Tank (Desert)";
					side=0;
					faction="BS_O_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_DT";
					};
				};
			};
			class Motorized {
				name="Mechanize Infantry";
				class BS_O_US_RANGER_2000_LightVehicle_WL_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="M1165A1 GMV (SAG-2/Mk19/M240) (Woodland)";
					side=0;
					faction="BS_O_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_US_RANGER_2000_Ry8jv0837j0";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_AR_WL";
					};
				};
				class BS_O_US_RANGER_2000_LightVehicle_WT_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="M1165A1 GMV (SAG-2/Mk19/M240) (Winter)";
					side=0;
					faction="BS_O_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_US_RANGER_2000_Ry8jv0837j0";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_AR_WT";
					};
				};
				class BS_O_US_RANGER_2000_LightVehicle_DT_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="M1165A1 GMV (SAG-2/Mk19/M240) (Desert)";
					side=0;
					faction="BS_O_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_US_RANGER_2000_Ry8jv0837j0";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_AR_DT";
					};
				};
				class BS_O_US_RANGER_2000_LightVehicle_WL_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="M1165A1 GMV (SAG-2/M2/M240) (Woodland)";
					side=0;
					faction="BS_O_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_US_RANGER_2000_FOnsEYP9ivA";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_AR_WL";
					};
				};
				class BS_O_US_RANGER_2000_LightVehicle_WT_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="M1165A1 GMV (SAG-2/M2/M240) (Winter)";
					side=0;
					faction="BS_O_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_US_RANGER_2000_FOnsEYP9ivA";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_AR_WT";
					};
				};
				class BS_O_US_RANGER_2000_LightVehicle_DT_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="M1165A1 GMV (SAG-2/M2/M240) (Desert)";
					side=0;
					faction="BS_O_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_US_RANGER_2000_FOnsEYP9ivA";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_AR_DT";
					};
				};
				class BS_O_US_RANGER_2000_LightVehicle_WL_2 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="M1165A1 GMV (SAG-2/M134D/M240) (Woodland)";
					side=0;
					faction="BS_O_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_US_RANGER_2000_KJ8yxgbw5Wc";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_AR_WL";
					};
				};
				class BS_O_US_RANGER_2000_LightVehicle_WT_2 {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="M1165A1 GMV (SAG-2/M134D/M240) (Winter)";
					side=0;
					faction="BS_O_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_US_RANGER_2000_KJ8yxgbw5Wc";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_AR_WT";
					};
				};
				class BS_O_US_RANGER_2000_LightVehicle_DT_2 {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="M1165A1 GMV (SAG-2/M134D/M240) (Desert)";
					side=0;
					faction="BS_O_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_US_RANGER_2000_KJ8yxgbw5Wc";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_AR_DT";
					};
				};
				class BS_O_US_RANGER_2000_Tank_WL_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="M1A2SEPv1 (TUSK II) (Woodland) ";
					side=0;
					faction="BS_O_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_US_RANGER_2000_IrQciOlY2yU";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_AR_WL";
					};
				};
				class BS_O_US_RANGER_2000_Tank_WT_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="M1A2SEPv1 (TUSK II) (Winter) ";
					side=0;
					faction="BS_O_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_US_RANGER_2000_IrQciOlY2yU";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_AR_WT";
					};
				};
				class BS_O_US_RANGER_2000_Tank_DT_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="M1A2SEPv1 (TUSK II) (Desert) ";
					side=0;
					faction="BS_O_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_US_RANGER_2000_IrQciOlY2yU";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_AR_DT";
					};
				};
				class BS_O_US_RANGER_2000_Tank_WL_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="M2A3 (BUSK III) (Woodland) ";
					side=0;
					faction="BS_O_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_US_RANGER_2000_iNILXiCKDqE";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_AR_WL";
					};
				};
				class BS_O_US_RANGER_2000_Tank_WT_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="M2A3 (BUSK III) (Winter) ";
					side=0;
					faction="BS_O_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_US_RANGER_2000_iNILXiCKDqE";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_AR_WT";
					};
				};
				class BS_O_US_RANGER_2000_Tank_DT_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="M2A3 (BUSK III) (Desert) ";
					side=0;
					faction="BS_O_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_US_RANGER_2000_iNILXiCKDqE";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_RANGER_2000_AR_DT";
					};
				};
			};
		};
	};
	class Indep { 
		class US_RANGER_2000 { 
			name="US - RANGER (2008)";
			class Infantry {
				name="Infantry";
				class BS_I_US_RANGER_2000_Fireteam_WL {
					name="Fireteam (Woodland)";
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					side=2;
					faction="BS_I_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_GL_WL";
					};
				};
				class BS_I_US_RANGER_2000_Fireteam_WT {
					name="Fireteam (Winter)";
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					side=2;
					faction="BS_I_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_AR_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_GL_WT";
					};
				};
				class BS_I_US_RANGER_2000_Fireteam_DT {
					name="Fireteam (Desert)";
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					side=2;
					faction="BS_I_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_AR_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_GL_DT";
					};
				};
				class BS_I_US_RANGER_2000_Squad_WL {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Squad (Woodland)";
					side=2;
					faction="BS_I_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_GL_WL";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_AR_WL";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_GL_WL";
					};
				};
				class BS_I_US_RANGER_2000_Squad_WT {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="Squad (Winter)";
					side=2;
					faction="BS_I_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_AR_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_GL_WT";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_AR_WT";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_GL_WT";
					};
				};
				class BS_I_US_RANGER_2000_Squad_DT {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="Squad (Desert)";
					side=2;
					faction="BS_I_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_AR_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_GL_DT";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_AR_DT";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_GL_DT";
					};
				};
				class BS_I_US_RANGER_2000_AT_WL {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Anti-Tank (Woodland)";
					side=2;
					faction="BS_I_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WL";
					};
				};
				class BS_I_US_RANGER_2000_AT_WT {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="Anti-Tank (Winter)";
					side=2;
					faction="BS_I_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WT";
					};
				};
				class BS_I_US_RANGER_2000_AT_DT {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="Anti-Tank (Desert)";
					side=2;
					faction="BS_I_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_DT";
					};
				};
			};
			class Motorized {
				name="Mechanize Infantry";
				class BS_I_US_RANGER_2000_LightVehicle_WL_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="M1165A1 GMV (SAG-2/Mk19/M240) (Woodland)";
					side=2;
					faction="BS_I_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_RANGER_2000_Ry8jv0837j0";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_AR_WL";
					};
				};
				class BS_I_US_RANGER_2000_LightVehicle_WT_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="M1165A1 GMV (SAG-2/Mk19/M240) (Winter)";
					side=2;
					faction="BS_I_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_RANGER_2000_Ry8jv0837j0";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_AR_WT";
					};
				};
				class BS_I_US_RANGER_2000_LightVehicle_DT_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="M1165A1 GMV (SAG-2/Mk19/M240) (Desert)";
					side=2;
					faction="BS_I_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_RANGER_2000_Ry8jv0837j0";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_AR_DT";
					};
				};
				class BS_I_US_RANGER_2000_LightVehicle_WL_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="M1165A1 GMV (SAG-2/M2/M240) (Woodland)";
					side=2;
					faction="BS_I_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_RANGER_2000_FOnsEYP9ivA";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_AR_WL";
					};
				};
				class BS_I_US_RANGER_2000_LightVehicle_WT_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="M1165A1 GMV (SAG-2/M2/M240) (Winter)";
					side=2;
					faction="BS_I_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_RANGER_2000_FOnsEYP9ivA";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_AR_WT";
					};
				};
				class BS_I_US_RANGER_2000_LightVehicle_DT_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="M1165A1 GMV (SAG-2/M2/M240) (Desert)";
					side=2;
					faction="BS_I_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_RANGER_2000_FOnsEYP9ivA";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_AR_DT";
					};
				};
				class BS_I_US_RANGER_2000_LightVehicle_WL_2 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="M1165A1 GMV (SAG-2/M134D/M240) (Woodland)";
					side=2;
					faction="BS_I_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_RANGER_2000_KJ8yxgbw5Wc";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_AR_WL";
					};
				};
				class BS_I_US_RANGER_2000_LightVehicle_WT_2 {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="M1165A1 GMV (SAG-2/M134D/M240) (Winter)";
					side=2;
					faction="BS_I_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_RANGER_2000_KJ8yxgbw5Wc";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_AR_WT";
					};
				};
				class BS_I_US_RANGER_2000_LightVehicle_DT_2 {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="M1165A1 GMV (SAG-2/M134D/M240) (Desert)";
					side=2;
					faction="BS_I_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_RANGER_2000_KJ8yxgbw5Wc";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_AR_DT";
					};
				};
				class BS_I_US_RANGER_2000_Tank_WL_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="M1A2SEPv1 (TUSK II) (Woodland) ";
					side=2;
					faction="BS_I_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_RANGER_2000_IrQciOlY2yU";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_AR_WL";
					};
				};
				class BS_I_US_RANGER_2000_Tank_WT_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="M1A2SEPv1 (TUSK II) (Winter) ";
					side=2;
					faction="BS_I_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_RANGER_2000_IrQciOlY2yU";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_AR_WT";
					};
				};
				class BS_I_US_RANGER_2000_Tank_DT_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="M1A2SEPv1 (TUSK II) (Desert) ";
					side=2;
					faction="BS_I_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_RANGER_2000_IrQciOlY2yU";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_AR_DT";
					};
				};
				class BS_I_US_RANGER_2000_Tank_WL_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="M2A3 (BUSK III) (Woodland) ";
					side=2;
					faction="BS_I_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_RANGER_2000_iNILXiCKDqE";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_AR_WL";
					};
				};
				class BS_I_US_RANGER_2000_Tank_WT_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="M2A3 (BUSK III) (Winter) ";
					side=2;
					faction="BS_I_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_RANGER_2000_iNILXiCKDqE";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_AR_WT";
					};
				};
				class BS_I_US_RANGER_2000_Tank_DT_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="M2A3 (BUSK III) (Desert) ";
					side=2;
					faction="BS_I_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_RANGER_2000_iNILXiCKDqE";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_RANGER_2000_AR_DT";
					};
				};
			};
		};
	};
	class West { 
		class US_RANGER_2000 { 
			name="US - RANGER (2008)";
			class Infantry {
				name="Infantry";
				class BS_B_US_RANGER_2000_Fireteam_WL {
					name="Fireteam (Woodland)";
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					side=1;
					faction="BS_B_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_GL_WL";
					};
				};
				class BS_B_US_RANGER_2000_Fireteam_WT {
					name="Fireteam (Winter)";
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					side=1;
					faction="BS_B_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_AR_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_GL_WT";
					};
				};
				class BS_B_US_RANGER_2000_Fireteam_DT {
					name="Fireteam (Desert)";
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					side=1;
					faction="BS_B_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_AR_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_GL_DT";
					};
				};
				class BS_B_US_RANGER_2000_Squad_WL {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Squad (Woodland)";
					side=1;
					faction="BS_B_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_GL_WL";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_AR_WL";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_GL_WL";
					};
				};
				class BS_B_US_RANGER_2000_Squad_WT {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="Squad (Winter)";
					side=1;
					faction="BS_B_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_AR_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_GL_WT";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_AR_WT";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_GL_WT";
					};
				};
				class BS_B_US_RANGER_2000_Squad_DT {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="Squad (Desert)";
					side=1;
					faction="BS_B_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_AR_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_GL_DT";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_AR_DT";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_GL_DT";
					};
				};
				class BS_B_US_RANGER_2000_AT_WL {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Anti-Tank (Woodland)";
					side=1;
					faction="BS_B_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WL";
					};
				};
				class BS_B_US_RANGER_2000_AT_WT {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="Anti-Tank (Winter)";
					side=1;
					faction="BS_B_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WT";
					};
				};
				class BS_B_US_RANGER_2000_AT_DT {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="Anti-Tank (Desert)";
					side=1;
					faction="BS_B_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_DT";
					};
				};
			};
			class Motorized {
				name="Mechanize Infantry";
				class BS_B_US_RANGER_2000_LightVehicle_WL_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="M1165A1 GMV (SAG-2/Mk19/M240) (Woodland)";
					side=1;
					faction="BS_B_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Ry8jv0837j0";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_AR_WL";
					};
				};
				class BS_B_US_RANGER_2000_LightVehicle_WT_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="M1165A1 GMV (SAG-2/Mk19/M240) (Winter)";
					side=1;
					faction="BS_B_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Ry8jv0837j0";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_AR_WT";
					};
				};
				class BS_B_US_RANGER_2000_LightVehicle_DT_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="M1165A1 GMV (SAG-2/Mk19/M240) (Desert)";
					side=1;
					faction="BS_B_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Ry8jv0837j0";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_AR_DT";
					};
				};
				class BS_B_US_RANGER_2000_LightVehicle_WL_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="M1165A1 GMV (SAG-2/M2/M240) (Woodland)";
					side=1;
					faction="BS_B_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_FOnsEYP9ivA";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_AR_WL";
					};
				};
				class BS_B_US_RANGER_2000_LightVehicle_WT_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="M1165A1 GMV (SAG-2/M2/M240) (Winter)";
					side=1;
					faction="BS_B_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_FOnsEYP9ivA";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_AR_WT";
					};
				};
				class BS_B_US_RANGER_2000_LightVehicle_DT_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="M1165A1 GMV (SAG-2/M2/M240) (Desert)";
					side=1;
					faction="BS_B_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_FOnsEYP9ivA";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_AR_DT";
					};
				};
				class BS_B_US_RANGER_2000_LightVehicle_WL_2 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="M1165A1 GMV (SAG-2/M134D/M240) (Woodland)";
					side=1;
					faction="BS_B_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_KJ8yxgbw5Wc";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_AR_WL";
					};
				};
				class BS_B_US_RANGER_2000_LightVehicle_WT_2 {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="M1165A1 GMV (SAG-2/M134D/M240) (Winter)";
					side=1;
					faction="BS_B_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_KJ8yxgbw5Wc";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_AR_WT";
					};
				};
				class BS_B_US_RANGER_2000_LightVehicle_DT_2 {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="M1165A1 GMV (SAG-2/M134D/M240) (Desert)";
					side=1;
					faction="BS_B_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_KJ8yxgbw5Wc";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_AR_DT";
					};
				};
				class BS_B_US_RANGER_2000_Tank_WL_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="M1A2SEPv1 (TUSK II) (Woodland) ";
					side=1;
					faction="BS_B_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_IrQciOlY2yU";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_AR_WL";
					};
				};
				class BS_B_US_RANGER_2000_Tank_WT_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="M1A2SEPv1 (TUSK II) (Winter) ";
					side=1;
					faction="BS_B_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_IrQciOlY2yU";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_AR_WT";
					};
				};
				class BS_B_US_RANGER_2000_Tank_DT_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="M1A2SEPv1 (TUSK II) (Desert) ";
					side=1;
					faction="BS_B_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_IrQciOlY2yU";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_AR_DT";
					};
				};
				class BS_B_US_RANGER_2000_Tank_WL_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="M2A3 (BUSK III) (Woodland) ";
					side=1;
					faction="BS_B_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_iNILXiCKDqE";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_AR_WL";
					};
				};
				class BS_B_US_RANGER_2000_Tank_WT_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Winter";
					name="M2A3 (BUSK III) (Winter) ";
					side=1;
					faction="BS_B_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_iNILXiCKDqE";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_AR_WT";
					};
				};
				class BS_B_US_RANGER_2000_Tank_DT_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Desert";
					name="M2A3 (BUSK III) (Desert) ";
					side=1;
					faction="BS_B_US_RANGER_2000";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_iNILXiCKDqE";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_RANGER_2000_AR_DT";
					};
				};
			};
		};
	};
};

class CfgPatches { 
	class bm_specops_faction_US_RANGER_2000{
		author = "Broken Skull Mods";
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={
			"hlcweapons_ar15",
			"rhsusf_c_weapons",
			"ace_compat_rhs_usf3_arsenal",
			"ace_ballistics",
			"ace_compat_rhs_usf3",
			"rhsusf_c_troops",
			"ace_hearing",
			"ace_medical_treatment",
			"ace_rangecard",
			"ace_microdagr",
			"ace_attach",
			"ace_captives",
			"kat_breathing",
			"kat_airway",
			"USP_Gear_Vest",
			"USP_Gear_Head",
			"ace_vector",
			"A3_Weapons_F",
			"tfar_handhelds",
			"USP_Gear_NVG",
			"Tier1_Weapons_cfg",
			"hlcweapons_core",
			"hlcweapons_m14",
			"ace_compat_rhs_usf3_scopes",
			"A3_Characters_F",
			"A3_Characters_F_Mark",
			"A3_Weapons_F_Tank",
			"kat_pharma",
			"A3_Weapons_F_Mark",
			"ace_laser",
			"rhsgref_c_weapons",
			"A3_Weapons_F_Enoch_Acc",
			"ace_realisticnames",
			"A3_Weapons_F_Exp",
			"A3_Weapons_F_Acc",
			"ace_scopes",
			"AB_CWU_Coverall",
			"tfar_external_intercom",
			"bm_specops_faction_US_ARMA_BASE"
};
		units[]={
			"BS_O_US_RANGER_2000_Rifleman_WL",
			"BS_B_US_RANGER_2000_Rifleman_WL",
			"BS_I_US_RANGER_2000_Rifleman_WL",
			"BS_O_US_RANGER_2000_GL_WL",
			"BS_B_US_RANGER_2000_GL_WL",
			"BS_I_US_RANGER_2000_GL_WL",
			"BS_O_US_RANGER_2000_AR_WL",
			"BS_B_US_RANGER_2000_AR_WL",
			"BS_I_US_RANGER_2000_AR_WL",
			"BS_O_US_RANGER_2000_SNP_WL",
			"BS_B_US_RANGER_2000_SNP_WL",
			"BS_I_US_RANGER_2000_SNP_WL",
			"BS_O_US_RANGER_2000_DIVER_WL",
			"BS_B_US_RANGER_2000_DIVER_WL",
			"BS_I_US_RANGER_2000_DIVER_WL",
			"BS_O_US_RANGER_2000_RTO_WL",
			"BS_B_US_RANGER_2000_RTO_WL",
			"BS_I_US_RANGER_2000_RTO_WL",
			"BS_O_US_RANGER_2000_Medic_WL",
			"BS_B_US_RANGER_2000_Medic_WL",
			"BS_I_US_RANGER_2000_Medic_WL",
			"BS_O_US_RANGER_2000_Rifleman_DT",
			"BS_B_US_RANGER_2000_Rifleman_DT",
			"BS_I_US_RANGER_2000_Rifleman_DT",
			"BS_O_US_RANGER_2000_GL_DT",
			"BS_B_US_RANGER_2000_GL_DT",
			"BS_I_US_RANGER_2000_GL_DT",
			"BS_O_US_RANGER_2000_AR_DT",
			"BS_B_US_RANGER_2000_AR_DT",
			"BS_I_US_RANGER_2000_AR_DT",
			"BS_O_US_RANGER_2000_SNP_DT",
			"BS_B_US_RANGER_2000_SNP_DT",
			"BS_I_US_RANGER_2000_SNP_DT",
			"BS_O_US_RANGER_2000_DIVER_DT",
			"BS_B_US_RANGER_2000_DIVER_DT",
			"BS_I_US_RANGER_2000_DIVER_DT",
			"BS_O_US_RANGER_2000_RTO_DT",
			"BS_B_US_RANGER_2000_RTO_DT",
			"BS_I_US_RANGER_2000_RTO_DT",
			"BS_O_US_RANGER_2000_Medic_DT",
			"BS_B_US_RANGER_2000_Medic_DT",
			"BS_I_US_RANGER_2000_Medic_DT",
			"BS_O_US_RANGER_2000_Rifleman_WT",
			"BS_B_US_RANGER_2000_Rifleman_WT",
			"BS_I_US_RANGER_2000_Rifleman_WT",
			"BS_O_US_RANGER_2000_GL_WT",
			"BS_B_US_RANGER_2000_GL_WT",
			"BS_I_US_RANGER_2000_GL_WT",
			"BS_O_US_RANGER_2000_AR_WT",
			"BS_B_US_RANGER_2000_AR_WT",
			"BS_I_US_RANGER_2000_AR_WT",
			"BS_O_US_RANGER_2000_SNP_WT",
			"BS_B_US_RANGER_2000_SNP_WT",
			"BS_I_US_RANGER_2000_SNP_WT",
			"BS_O_US_RANGER_2000_DIVER_WT",
			"BS_B_US_RANGER_2000_DIVER_WT",
			"BS_I_US_RANGER_2000_DIVER_WT",
			"BS_O_US_RANGER_2000_RTO_WT",
			"BS_B_US_RANGER_2000_RTO_WT",
			"BS_I_US_RANGER_2000_RTO_WT",
			"BS_O_US_RANGER_2000_Medic_WT",
			"BS_B_US_RANGER_2000_Medic_WT",
			"BS_I_US_RANGER_2000_Medic_WT",
			"BS_B_US_RANGER_2000_Ry8jv0837j0",
			"BS_O_US_RANGER_2000_Ry8jv0837j0",
			"BS_I_US_RANGER_2000_Ry8jv0837j0",
			"BS_B_US_RANGER_2000_FOnsEYP9ivA",
			"BS_O_US_RANGER_2000_FOnsEYP9ivA",
			"BS_I_US_RANGER_2000_FOnsEYP9ivA",
			"BS_B_US_RANGER_2000_KJ8yxgbw5Wc",
			"BS_O_US_RANGER_2000_KJ8yxgbw5Wc",
			"BS_I_US_RANGER_2000_KJ8yxgbw5Wc",
			"BS_B_US_RANGER_2000_uYpoma4OTj8",
			"BS_O_US_RANGER_2000_uYpoma4OTj8",
			"BS_I_US_RANGER_2000_uYpoma4OTj8",
			"BS_B_US_RANGER_2000_LaCxZtLGfRQ",
			"BS_O_US_RANGER_2000_LaCxZtLGfRQ",
			"BS_I_US_RANGER_2000_LaCxZtLGfRQ",
			"BS_B_US_RANGER_2000_Brx4CePSufA",
			"BS_O_US_RANGER_2000_Brx4CePSufA",
			"BS_I_US_RANGER_2000_Brx4CePSufA",
			"BS_B_US_RANGER_2000_xjMcmlvSuhs",
			"BS_O_US_RANGER_2000_xjMcmlvSuhs",
			"BS_I_US_RANGER_2000_xjMcmlvSuhs",
			"BS_B_US_RANGER_2000_1UAs8mtq3f0",
			"BS_O_US_RANGER_2000_1UAs8mtq3f0",
			"BS_I_US_RANGER_2000_1UAs8mtq3f0",
			"BS_B_US_RANGER_2000_fo7uZLozwtw",
			"BS_O_US_RANGER_2000_fo7uZLozwtw",
			"BS_I_US_RANGER_2000_fo7uZLozwtw",
			"BS_B_US_RANGER_2000_CWmbLDgCfQk",
			"BS_O_US_RANGER_2000_CWmbLDgCfQk",
			"BS_I_US_RANGER_2000_CWmbLDgCfQk",
			"BS_B_US_RANGER_2000_A0ukXYOJftw",
			"BS_O_US_RANGER_2000_A0ukXYOJftw",
			"BS_I_US_RANGER_2000_A0ukXYOJftw",
			"BS_B_US_RANGER_2000_Mz8sQT6TNtE",
			"BS_O_US_RANGER_2000_Mz8sQT6TNtE",
			"BS_I_US_RANGER_2000_Mz8sQT6TNtE",
			"BS_B_US_RANGER_2000_IrQciOlY2yU",
			"BS_O_US_RANGER_2000_IrQciOlY2yU",
			"BS_I_US_RANGER_2000_IrQciOlY2yU",
			"BS_B_US_RANGER_2000_q1UOAih6vZg",
			"BS_O_US_RANGER_2000_q1UOAih6vZg",
			"BS_I_US_RANGER_2000_q1UOAih6vZg",
			"BS_B_US_RANGER_2000_ALyQbH4L2mQ",
			"BS_O_US_RANGER_2000_ALyQbH4L2mQ",
			"BS_I_US_RANGER_2000_ALyQbH4L2mQ",
			"BS_B_US_RANGER_2000_iNILXiCKDqE",
			"BS_O_US_RANGER_2000_iNILXiCKDqE",
			"BS_I_US_RANGER_2000_iNILXiCKDqE",
			"BS_B_US_RANGER_2000_ysDwKg9CKtc",
			"BS_O_US_RANGER_2000_ysDwKg9CKtc",
			"BS_I_US_RANGER_2000_ysDwKg9CKtc",
			"BS_B_US_RANGER_2000_S5whMbr1n18",
			"BS_O_US_RANGER_2000_S5whMbr1n18",
			"BS_I_US_RANGER_2000_S5whMbr1n18",
			"BS_B_US_RANGER_2000_b9Qx6vL5Omg",
			"BS_O_US_RANGER_2000_b9Qx6vL5Omg",
			"BS_I_US_RANGER_2000_b9Qx6vL5Omg",
			"BS_B_US_RANGER_2000_PDi9Aikgwhc",
			"BS_O_US_RANGER_2000_PDi9Aikgwhc",
			"BS_I_US_RANGER_2000_PDi9Aikgwhc"
};
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
		brokenSkullArsenal[]={"hlc_rifle_M4","rhsusf_acc_SF3P556","rhsusf_acc_anpeq15side_bk","rhsusf_acc_ACOG_RMR","ACE_30Rnd_556x45_Stanag_M995_AP_mag","rhsusf_weap_m9","rhsusf_mag_15Rnd_9x19_JHP","rhs_uniform_g3_rgr","ACE_EarPlugs","ACE_morphine","ACE_tourniquet","ACE_packingBandage","ACE_quikclot","ACE_RangeCard","ACE_microDAGR","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_CableTie","kat_chestSeal","kat_guedel","USP_CRYE_JPC_ASLT_RGR","USP_HEAD_MICH_TC2002_TAN","ACE_Vector","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15","hlc_rifle_m4m203","Tier1_M249_LA5_M600V_Black_FL","ACE_30Rnd_556x45_Stanag_Mk262_mag","rhs_mag_M433_HEDP","USP_CRYE_JPC_GRB_RGR","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","Tier1_MK48_Mod1_Desert","rhsusf_acc_ARDEC_M240","Tier1_Mk48Mod1_LA5_M600V_Black","Tier1_EXPS3_0_G33_Tano_Up","hlc_200Rnd_762x51_B_M60E4","Tier1_SAW_Bipod_2_Desert","USP_CRYE_JPC_MGB_RGR","hlc_rifle_M14dmr_Rail","hlc_muzzle_Gunfighter_comp","rhsusf_acc_LEUPOLDMK4","ACE_20Rnd_762x51_Mag_SD","USP_EAGLE_CIRAS_LOAD","rhs_weap_m4a1_d_grip","rhsusf_acc_ACOG_d","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_acc_grip1","USP_CRYE_JPC_DMB_RGR","ItemRadio","rhsusf_acc_anpeq15_bk_top","rhs_weap_maaws","rhs_mag_maaws_HEDP","ACE_elasticBandage","ACE_personalAidKit","V_PlateCarrierGL_rgr","MRAWS_HEAT_F","MRAWS_HE_F","kat_accuvac","kat_stethoscope","ACE_adenosine","ACE_plasmaIV","ACE_plasmaIV_500","ACE_splint","ACE_suture","kat_larynx","kat_naloxone","kat_IO_FAST","kat_ncdKit","kat_aatKit","kat_Pulseoximeter","rhs_weap_m24sws_wd","rhsusf_acc_LEUPOLDMK4_wd","rhsusf_5Rnd_762x51_m118_special_Mag","rhs_mag_maaws_HEAT","rhs_weap_M320","rhs_mag_M441_HE","USP_EAGLE_CIRAS","USP_THM_BEANIE_RGR","Laserdesignator","Laserbatteries","rhs_weap_mk17_STD_grip3","rhsgref_sdn6_suppressor","rhsusf_acc_anpeq15side","rhsusf_acc_compm4","rhs_mag_20Rnd_SCAR_762x51_m61_ap","rhsusf_acc_grip2","rhs_weap_fim92","rhs_fim92_mag","optic_Holosight_arid_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_lush_F","optic_Holosight","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","optic_Holosight_smg","rhsusf_acc_EOTECH","rhsusf_acc_eotech_xps3","rhsusf_acc_rvg_blk","rhsusf_acc_rvg_de","rhsusf_acc_grip4_bipod","rhsusf_acc_saw_lw_bipod","rhsusf_acc_saw_bipod","rhsusf_acc_grip4","rhsusf_acc_tdstubby_blk","rhsusf_acc_tdstubby_tan","rhsusf_acc_grip3","rhsusf_acc_grip3_tan","rhsusf_acc_grip2_tan","rhsusf_opscore_mar_ut_pelt","rhs_weap_m24sws_d","rhsusf_acc_LEUPOLDMK4_d","rhs_mag_maaws_HE","USP_BOONIE_HAT_RGR","hlc_rifle_M14_Rail","rhsusf_acc_aac_scarh_silencer","optic_tws","ACE_20Rnd_762x51_M993_AP_Mag","U_B_FullGhillie_sard","Tier1_MK48_Mod1","optic_tws_mg","hlc_200Rnd_762x51_T_M60E4","Tier1_SAW_Bipod_2","B_CWU_coverall_od_AG_usn","H_PilotHelmetHeli_O","rhsusf_acc_aac_762sd_silencer","hlc_20Rnd_762x51_barrier_M14","B_CWU_coverall_tn_usn","RHS_jetpilot_usaf"};

		garage[]={{"BS_B_US_RANGER_2000_Ry8jv0837j0",1,500,2},{"BS_B_US_RANGER_2000_FOnsEYP9ivA",1,500,2},{"BS_B_US_RANGER_2000_KJ8yxgbw5Wc",1,500,2},{"BS_B_US_RANGER_2000_uYpoma4OTj8",2,1000,-1},{"BS_B_US_RANGER_2000_LaCxZtLGfRQ",2,7000,-1},{"BS_B_US_RANGER_2000_Brx4CePSufA",2,2000,-1},{"BS_B_US_RANGER_2000_xjMcmlvSuhs",1,40,3},{"BS_B_US_RANGER_2000_1UAs8mtq3f0",1,40,3},{"BS_B_US_RANGER_2000_fo7uZLozwtw",0,10,-1},{"BS_B_US_RANGER_2000_CWmbLDgCfQk",0,10,-1},{"BS_B_US_RANGER_2000_A0ukXYOJftw",0,50,-1},{"BS_B_US_RANGER_2000_Mz8sQT6TNtE",0,10,-1},{"BS_B_US_RANGER_2000_IrQciOlY2yU",2,1500,1},{"BS_B_US_RANGER_2000_q1UOAih6vZg",1,40,3},{"BS_B_US_RANGER_2000_ALyQbH4L2mQ",1,40,3},{"BS_B_US_RANGER_2000_iNILXiCKDqE",2,1000,1},{"BS_B_US_RANGER_2000_ysDwKg9CKtc",2,1000,-1},{"BS_B_US_RANGER_2000_S5whMbr1n18",2,1000,-1},{"BS_B_US_RANGER_2000_b9Qx6vL5Omg",2,20,-1},{"BS_B_US_RANGER_2000_PDi9Aikgwhc",2,20,-1}};
		SamSystem[]={};
		SearchLight[]={};
		StaticLowMG[]={{"BS_B_US_RANGER_2000_Mz8sQT6TNtE","Mk19 (M3)"}};
		StaticHighMG[]={{"BS_B_US_RANGER_2000_CWmbLDgCfQk","M2HB (M3 AA)"}};
		StaticMotar[]={{"BS_B_US_RANGER_2000_fo7uZLozwtw","M252"}};
		StaticAntiAir[]={{"BS_B_US_RANGER_2000_A0ukXYOJftw","M41A4 TOW"}};
		VehicleTechnicals[]={"BS_B_US_RANGER_2000_Ry8jv0837j0","BS_B_US_RANGER_2000_FOnsEYP9ivA","BS_B_US_RANGER_2000_KJ8yxgbw5Wc"};
		VehicleAntiAircraft[]={};
		VehicleTanks[]={"BS_B_US_RANGER_2000_IrQciOlY2yU","BS_B_US_RANGER_2000_iNILXiCKDqE"};
		VehicleTransport[]={"BS_B_US_RANGER_2000_xjMcmlvSuhs","BS_B_US_RANGER_2000_1UAs8mtq3f0","BS_B_US_RANGER_2000_q1UOAih6vZg","BS_B_US_RANGER_2000_ALyQbH4L2mQ"};
	};
	// As Friendly (BluFOR)
	class BS_B_US_RANGER_2000 : BS_B_US_RANGER_2000_BASE { 
		useForSpecOps = 1;   
		displayName = "US - RANGER (2008)";
		side = 1;       
		flag = "\A3\Data_F\Flags\flag_US_CO.paa";
		icon = "\A3\Data_F\Flags\flag_US_CO.paa";
		priority = 0; 
	};
	// As Opposite Forces (OpFOR)
	class BS_O_US_RANGER_2000 : BS_B_US_RANGER_2000_BASE { 
		useForSpecOps = 1;
		displayName = "US - RANGER (2008)";
		side = 0;       
		flag = "\A3\Data_F\Flags\flag_US_CO.paa";
		icon = "\A3\Data_F\Flags\flag_US_CO.paa";
		priority = 0; 
	};
	// As Independent (Independent)
	class BS_I_US_RANGER_2000 : BS_B_US_RANGER_2000_BASE { 
		useForSpecOps = 1;
		displayName = "US - RANGER (2008)";
		side = 2;       
		flag = "\A3\Data_F\Flags\flag_US_CO.paa";
		icon = "\A3\Data_F\Flags\flag_US_CO.paa";
		priority = 0; 
	};
};
// As Friendly (BluFOR)
class SpecOps_Module_BLUFOR_Factions { 
	class BS_B_US_RANGER_2000 { name = "US - RANGER (2008)"; value = "BS_B_US_RANGER_2000"; };  
};
// As Friendly (BluFOR)
class SpecOps_Module_OPFOR_Factions { 
	class BS_O_US_RANGER_2000 { name = "US - RANGER (2008)"; value = "BS_O_US_RANGER_2000"; };  
};
// As Friendly (BluFOR)
class SpecOps_Module_GRE_Factions { 
	class BS_I_US_RANGER_2000 { name = "US - RANGER (2008)"; value = "BS_I_US_RANGER_2000"; };  
};