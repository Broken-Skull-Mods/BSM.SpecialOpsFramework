

class CfgVehicles {
	class B_Survivor_F;
	class I_G_Survivor_F;
	class O_G_Survivor_F; 
	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_DIVER_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Special (Woodland)"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_KP_OR_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_GPNVG18_WP_GM_TAR_BLK","H_PilotHelmetHeli_O"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_GPNVG18_WP_GM_TAR_BLK","H_PilotHelmetHeli_O"}; 
		weapons[] = {"rhsusf_weap_MP7A2","Tier1_P320","ACE_Vector"}; 
		respawnWeapons[] = {"rhsusf_weap_MP7A2","Tier1_P320","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhsusf_weap_MP7A2","","rhsusf_acc_anpeq15side_bk","Tier1_Eotech551_Riser_Black",{"rhsusf_mag_40Rnd_46x30_AP",40},{},"rhsusf_acc_grip2"},{},{"Tier1_P320","","Tier1_X300U","Tier1_Docter",{"Tier1_17Rnd_9x19_P320_JHP",17},{},""},{"USP_G3C_KP_OR_MCT",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"rhsusf_mag_40Rnd_46x30_AP",1,40}}},{"USP_CRYE_CPC_COMMS_MCT",{{"rhsusf_mag_40Rnd_46x30_AP",19,40}}},{"USP_ZIPON_PACK_CPC_RGR",{}},"H_PilotHelmetHeli_O","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_GPNVG18_WP_GM_TAR_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_DIVER_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Special (Woodland)"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_KP_OR_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_GPNVG18_WP_GM_TAR_BLK","H_PilotHelmetHeli_O"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_GPNVG18_WP_GM_TAR_BLK","H_PilotHelmetHeli_O"}; 
		weapons[] = {"rhsusf_weap_MP7A2","Tier1_P320","ACE_Vector"}; 
		respawnWeapons[] = {"rhsusf_weap_MP7A2","Tier1_P320","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhsusf_weap_MP7A2","","rhsusf_acc_anpeq15side_bk","Tier1_Eotech551_Riser_Black",{"rhsusf_mag_40Rnd_46x30_AP",40},{},"rhsusf_acc_grip2"},{},{"Tier1_P320","","Tier1_X300U","Tier1_Docter",{"Tier1_17Rnd_9x19_P320_JHP",17},{},""},{"USP_G3C_KP_OR_MCT",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"rhsusf_mag_40Rnd_46x30_AP",1,40}}},{"USP_CRYE_CPC_COMMS_MCT",{{"rhsusf_mag_40Rnd_46x30_AP",19,40}}},{"USP_ZIPON_PACK_CPC_RGR",{}},"H_PilotHelmetHeli_O","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_GPNVG18_WP_GM_TAR_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_DIVER_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Special (Woodland)"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_KP_OR_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_GPNVG18_WP_GM_TAR_BLK","H_PilotHelmetHeli_O"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_GPNVG18_WP_GM_TAR_BLK","H_PilotHelmetHeli_O"}; 
		weapons[] = {"rhsusf_weap_MP7A2","Tier1_P320","ACE_Vector"}; 
		respawnWeapons[] = {"rhsusf_weap_MP7A2","Tier1_P320","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhsusf_weap_MP7A2","","rhsusf_acc_anpeq15side_bk","Tier1_Eotech551_Riser_Black",{"rhsusf_mag_40Rnd_46x30_AP",40},{},"rhsusf_acc_grip2"},{},{"Tier1_P320","","Tier1_X300U","Tier1_Docter",{"Tier1_17Rnd_9x19_P320_JHP",17},{},""},{"USP_G3C_KP_OR_MCT",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"rhsusf_mag_40Rnd_46x30_AP",1,40}}},{"USP_CRYE_CPC_COMMS_MCT",{{"rhsusf_mag_40Rnd_46x30_AP",19,40}}},{"USP_ZIPON_PACK_CPC_RGR",{}},"H_PilotHelmetHeli_O","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_GPNVG18_WP_GM_TAR_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_VAR_0_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 1"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male02GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_P320_TB","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_P320_TB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_RF2_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"Tier1_P320_TB","","Tier1_X300U","Tier1_Docter",{},{},""},{"USP_G3C_MX_MCW",{}},{"USP_CRYE_CPC_COMMS_MCT",{}},{"USP_ZIPON_PACK_CPC_AT_RF2_MCT",{}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_VAR_0_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 1"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male02GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_P320_TB","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_P320_TB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_RF2_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"Tier1_P320_TB","","Tier1_X300U","Tier1_Docter",{},{},""},{"USP_G3C_MX_MCW",{}},{"USP_CRYE_CPC_COMMS_MCT",{}},{"USP_ZIPON_PACK_CPC_AT_RF2_MCT",{}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_VAR_0_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 1"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male02GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_P320_TB","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_P320_TB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_RF2_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"Tier1_P320_TB","","Tier1_X300U","Tier1_Docter",{},{},""},{"USP_G3C_MX_MCW",{}},{"USP_CRYE_CPC_COMMS_MCT",{}},{"USP_ZIPON_PACK_CPC_AT_RF2_MCT",{}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_AR_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Machine Gunner (Woodland)"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male04GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_MK46_Mod0","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_MK46_Mod0","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_MK46_Mod0","rhsusf_acc_nt4_black","Tier1_Mk46Mod0_LA5_M600V_Black_FL","rhsusf_acc_su230_mrds",{"rhsusf_200Rnd_556x45_M855_soft_pouch",200},{},"Tier1_SAW_Bipod_2"},{},{},{"USP_G3C_MX_MCW",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"USP_CRYE_CPC_COMMS_MCT",{{"rhsusf_200Rnd_556x45_M855_soft_pouch",4,200}}},{"USP_DELTA_BAG_M81",{{"rhsusf_200Rnd_556x45_M855_soft_pouch",4,200}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_AR_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Machine Gunner (Woodland)"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male04GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_MK46_Mod0","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_MK46_Mod0","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_MK46_Mod0","rhsusf_acc_nt4_black","Tier1_Mk46Mod0_LA5_M600V_Black_FL","rhsusf_acc_su230_mrds",{"rhsusf_200Rnd_556x45_M855_soft_pouch",200},{},"Tier1_SAW_Bipod_2"},{},{},{"USP_G3C_MX_MCW",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"USP_CRYE_CPC_COMMS_MCT",{{"rhsusf_200Rnd_556x45_M855_soft_pouch",4,200}}},{"USP_DELTA_BAG_M81",{{"rhsusf_200Rnd_556x45_M855_soft_pouch",4,200}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_AR_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Machine Gunner (Woodland)"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male04GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_MK46_Mod0","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_MK46_Mod0","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_MK46_Mod0","rhsusf_acc_nt4_black","Tier1_Mk46Mod0_LA5_M600V_Black_FL","rhsusf_acc_su230_mrds",{"rhsusf_200Rnd_556x45_M855_soft_pouch",200},{},"Tier1_SAW_Bipod_2"},{},{},{"USP_G3C_MX_MCW",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"USP_CRYE_CPC_COMMS_MCT",{{"rhsusf_200Rnd_556x45_M855_soft_pouch",4,200}}},{"USP_DELTA_BAG_M81",{{"rhsusf_200Rnd_556x45_M855_soft_pouch",4,200}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_Rifleman_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Rifleman (Woodland)"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_RS_CU_KP_MX_VQ_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_HK416D145_CTR","Tier1_P320_TB","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_HK416D145_CTR","Tier1_P320_TB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_HK416D145_CTR","","Tier1_416_LA5_Side","rhsusf_acc_su230a_mrds",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},"Tier1_GripPod_Black"},{},{"Tier1_P320_TB","Tier1_Octane9","Tier1_DBALPL","Tier1_MRDS",{"Tier1_21Rnd_9x19_P320_FMJ",21},{},""},{"USP_G3C_RS_CU_KP_MX_VQ_MCT",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",1,30}}},{"USP_CRYE_CPC_COMMS_MCT",{{"rhs_mag_30Rnd_556x45_Mk318_Stanag",23,30}}},{"USP_DELTA_BAG_M81",{{"rhs_mag_30Rnd_556x45_Mk318_Stanag",6,30}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_Rifleman_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Rifleman (Woodland)"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_RS_CU_KP_MX_VQ_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_HK416D145_CTR","Tier1_P320_TB","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_HK416D145_CTR","Tier1_P320_TB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_HK416D145_CTR","","Tier1_416_LA5_Side","rhsusf_acc_su230a_mrds",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},"Tier1_GripPod_Black"},{},{"Tier1_P320_TB","Tier1_Octane9","Tier1_DBALPL","Tier1_MRDS",{"Tier1_21Rnd_9x19_P320_FMJ",21},{},""},{"USP_G3C_RS_CU_KP_MX_VQ_MCT",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",1,30}}},{"USP_CRYE_CPC_COMMS_MCT",{{"rhs_mag_30Rnd_556x45_Mk318_Stanag",23,30}}},{"USP_DELTA_BAG_M81",{{"rhs_mag_30Rnd_556x45_Mk318_Stanag",6,30}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_Rifleman_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Rifleman (Woodland)"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_RS_CU_KP_MX_VQ_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_HK416D145_CTR","Tier1_P320_TB","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_HK416D145_CTR","Tier1_P320_TB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_HK416D145_CTR","","Tier1_416_LA5_Side","rhsusf_acc_su230a_mrds",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},"Tier1_GripPod_Black"},{},{"Tier1_P320_TB","Tier1_Octane9","Tier1_DBALPL","Tier1_MRDS",{"Tier1_21Rnd_9x19_P320_FMJ",21},{},""},{"USP_G3C_RS_CU_KP_MX_VQ_MCT",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",1,30}}},{"USP_CRYE_CPC_COMMS_MCT",{{"rhs_mag_30Rnd_556x45_Mk318_Stanag",23,30}}},{"USP_DELTA_BAG_M81",{{"rhs_mag_30Rnd_556x45_Mk318_Stanag",6,30}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_GL_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Grenadier (Woodland)"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male02GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_CS_KP_OR_VQ_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_HK416D10_CTR","rhs_weap_M320","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_HK416D10_CTR","rhs_weap_M320","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_HK416D10_CTR","","Tier1_416_LA5_M600V_alt_Black","rhsusf_acc_su230a",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},"Tier1_GripPod_Black"},{},{"rhs_weap_M320","","","",{"rhs_mag_M441_HE",1},{},""},{"USP_G3C_CS_KP_OR_VQ_MCT",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",1,30}}},{"USP_CRYE_CPC_COMMS_MCT",{{"1Rnd_HE_Grenade_shell",23,1},{"1Rnd_Smoke_Grenade_shell",13,1},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",8,30}}},{"USP_DELTA_BAG_M81",{{"1Rnd_HE_Grenade_shell",21,1},{"1Rnd_Smoke_Grenade_shell",12,1},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",7,30}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_GL_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Grenadier (Woodland)"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male02GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_CS_KP_OR_VQ_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_HK416D10_CTR","rhs_weap_M320","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_HK416D10_CTR","rhs_weap_M320","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_HK416D10_CTR","","Tier1_416_LA5_M600V_alt_Black","rhsusf_acc_su230a",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},"Tier1_GripPod_Black"},{},{"rhs_weap_M320","","","",{"rhs_mag_M441_HE",1},{},""},{"USP_G3C_CS_KP_OR_VQ_MCT",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",1,30}}},{"USP_CRYE_CPC_COMMS_MCT",{{"1Rnd_HE_Grenade_shell",23,1},{"1Rnd_Smoke_Grenade_shell",13,1},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",8,30}}},{"USP_DELTA_BAG_M81",{{"1Rnd_HE_Grenade_shell",21,1},{"1Rnd_Smoke_Grenade_shell",12,1},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",7,30}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_GL_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Grenadier (Woodland)"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male02GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_CS_KP_OR_VQ_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_HK416D10_CTR","rhs_weap_M320","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_HK416D10_CTR","rhs_weap_M320","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_HK416D10_CTR","","Tier1_416_LA5_M600V_alt_Black","rhsusf_acc_su230a",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},"Tier1_GripPod_Black"},{},{"rhs_weap_M320","","","",{"rhs_mag_M441_HE",1},{},""},{"USP_G3C_CS_KP_OR_VQ_MCT",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",1,30}}},{"USP_CRYE_CPC_COMMS_MCT",{{"1Rnd_HE_Grenade_shell",23,1},{"1Rnd_Smoke_Grenade_shell",13,1},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",8,30}}},{"USP_DELTA_BAG_M81",{{"1Rnd_HE_Grenade_shell",21,1},{"1Rnd_Smoke_Grenade_shell",12,1},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",7,30}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_Medic_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Doctor (Woodland)"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male02GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_CS_CU_KP_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","USP_SHEMAGH_NECK5_RGR","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","USP_SHEMAGH_NECK5_RGR","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_HK416D10_CTR","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_HK416D10_CTR","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_HK416D10_CTR","","Tier1_416_LA5_Side","rhsusf_acc_su230a_mrds",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},"Tier1_GripPod_Black"},{},{},{"USP_G3C_CS_CU_KP_MCT",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"kat_accuvac",1},{"kat_stethoscope",1}}},{"USP_CRYE_CPC_COMMS_MCT",{{"rhs_mag_30Rnd_556x45_Mk318_Stanag",20,30}}},{"USP_DELTA_BAG_M81",{{"ACE_adenosine",2},{"ACE_elasticBandage",15},{"ACE_packingBandage",15},{"ACE_quikclot",15},{"ACE_morphine",4},{"ACE_epinephrine",4},{"ACE_plasmaIV",3},{"ACE_plasmaIV_500",6},{"ACE_splint",2},{"ACE_suture",12},{"ACE_tourniquet",4},{"kat_larynx",6},{"kat_naloxone",2},{"kat_IO_FAST",7},{"kat_ncdKit",2},{"kat_aatKit",12},{"kat_chestSeal",6},{"kat_Pulseoximeter",3}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","USP_SHEMAGH_NECK5_RGR",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_Medic_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Doctor (Woodland)"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male02GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_CS_CU_KP_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","USP_SHEMAGH_NECK5_RGR","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","USP_SHEMAGH_NECK5_RGR","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_HK416D10_CTR","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_HK416D10_CTR","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_HK416D10_CTR","","Tier1_416_LA5_Side","rhsusf_acc_su230a_mrds",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},"Tier1_GripPod_Black"},{},{},{"USP_G3C_CS_CU_KP_MCT",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"kat_accuvac",1},{"kat_stethoscope",1}}},{"USP_CRYE_CPC_COMMS_MCT",{{"rhs_mag_30Rnd_556x45_Mk318_Stanag",20,30}}},{"USP_DELTA_BAG_M81",{{"ACE_adenosine",2},{"ACE_elasticBandage",15},{"ACE_packingBandage",15},{"ACE_quikclot",15},{"ACE_morphine",4},{"ACE_epinephrine",4},{"ACE_plasmaIV",3},{"ACE_plasmaIV_500",6},{"ACE_splint",2},{"ACE_suture",12},{"ACE_tourniquet",4},{"kat_larynx",6},{"kat_naloxone",2},{"kat_IO_FAST",7},{"kat_ncdKit",2},{"kat_aatKit",12},{"kat_chestSeal",6},{"kat_Pulseoximeter",3}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","USP_SHEMAGH_NECK5_RGR",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_Medic_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Doctor (Woodland)"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male02GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_CS_CU_KP_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","USP_SHEMAGH_NECK5_RGR","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","USP_SHEMAGH_NECK5_RGR","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_HK416D10_CTR","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_HK416D10_CTR","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_HK416D10_CTR","","Tier1_416_LA5_Side","rhsusf_acc_su230a_mrds",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},"Tier1_GripPod_Black"},{},{},{"USP_G3C_CS_CU_KP_MCT",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"kat_accuvac",1},{"kat_stethoscope",1}}},{"USP_CRYE_CPC_COMMS_MCT",{{"rhs_mag_30Rnd_556x45_Mk318_Stanag",20,30}}},{"USP_DELTA_BAG_M81",{{"ACE_adenosine",2},{"ACE_elasticBandage",15},{"ACE_packingBandage",15},{"ACE_quikclot",15},{"ACE_morphine",4},{"ACE_epinephrine",4},{"ACE_plasmaIV",3},{"ACE_plasmaIV_500",6},{"ACE_splint",2},{"ACE_suture",12},{"ACE_tourniquet",4},{"kat_larynx",6},{"kat_naloxone",2},{"kat_IO_FAST",7},{"kat_ncdKit",2},{"kat_aatKit",12},{"kat_chestSeal",6},{"kat_Pulseoximeter",3}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","USP_SHEMAGH_NECK5_RGR",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_SNP_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Sniper (Woodland)"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_CU_KP_OR_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Balaclava_oli_lxWS","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Balaclava_oli_lxWS","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"rhs_weap_m14ebrri","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m14ebrri","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m14ebrri","rhsusf_acc_aac_scarh_silencer","rhsusf_acc_anpeq15side_bk","Tier1_LeupoldM3A_Geissele_Black",{"ACE_20Rnd_762x51_Mag_Tracer_Dim",20},{},"rhsusf_acc_harris_bipod"},{},{},{"USP_G3C_CU_KP_OR_MCT",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"ACE_20Rnd_762x51_Mag_Tracer_Dim",1,20}}},{"USP_CRYE_CPC_COMMS_MCT",{{"ACE_20Rnd_762x51_Mag_Tracer_Dim",18,20}}},{"USP_DELTA_BAG_M81",{{"ACE_20Rnd_762x51_Mag_Tracer_Dim",1,20}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Balaclava_oli_lxWS",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_SNP_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Sniper (Woodland)"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_CU_KP_OR_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Balaclava_oli_lxWS","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Balaclava_oli_lxWS","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"rhs_weap_m14ebrri","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m14ebrri","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m14ebrri","rhsusf_acc_aac_scarh_silencer","rhsusf_acc_anpeq15side_bk","Tier1_LeupoldM3A_Geissele_Black",{"ACE_20Rnd_762x51_Mag_Tracer_Dim",20},{},"rhsusf_acc_harris_bipod"},{},{},{"USP_G3C_CU_KP_OR_MCT",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"ACE_20Rnd_762x51_Mag_Tracer_Dim",1,20}}},{"USP_CRYE_CPC_COMMS_MCT",{{"ACE_20Rnd_762x51_Mag_Tracer_Dim",18,20}}},{"USP_DELTA_BAG_M81",{{"ACE_20Rnd_762x51_Mag_Tracer_Dim",1,20}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Balaclava_oli_lxWS",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_SNP_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Sniper (Woodland)"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_CU_KP_OR_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Balaclava_oli_lxWS","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Balaclava_oli_lxWS","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"rhs_weap_m14ebrri","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m14ebrri","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m14ebrri","rhsusf_acc_aac_scarh_silencer","rhsusf_acc_anpeq15side_bk","Tier1_LeupoldM3A_Geissele_Black",{"ACE_20Rnd_762x51_Mag_Tracer_Dim",20},{},"rhsusf_acc_harris_bipod"},{},{},{"USP_G3C_CU_KP_OR_MCT",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"ACE_20Rnd_762x51_Mag_Tracer_Dim",1,20}}},{"USP_CRYE_CPC_COMMS_MCT",{{"ACE_20Rnd_762x51_Mag_Tracer_Dim",18,20}}},{"USP_DELTA_BAG_M81",{{"ACE_20Rnd_762x51_Mag_Tracer_Dim",1,20}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Balaclava_oli_lxWS",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_VAR_1_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 2"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_03", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_KP_MX_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CTW"}; 
		weapons[] = {"Tier1_SIG_MCX_115_Virtus_300BLK_Black","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_SIG_MCX_115_Virtus_300BLK_Black","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_SIG_MCX_115_Virtus_300BLK_Black","Tier1_SOCOM556_2_Mini_Black","Tier1_MCX_LA5_Side","rhsusf_acc_ACOG_RMR",{"Tier1_30Rnd_762x35_300BLK_RNBT_PMAG",30},{},"Tier1_GripPod_MLOK_Black"},{"rhs_weap_m72a7","","","",{},{},""},{},{"USP_G3C_KP_MX_MCT",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_RGR",{}},{"USP_DELTA_BAG_MCT",{}},"USP_OPSCORE_FASTMTC_MCT_CTW","USP_BALACLAVA_ADV3_MCT",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_VAR_1_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 2"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_03", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_KP_MX_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CTW"}; 
		weapons[] = {"Tier1_SIG_MCX_115_Virtus_300BLK_Black","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_SIG_MCX_115_Virtus_300BLK_Black","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_SIG_MCX_115_Virtus_300BLK_Black","Tier1_SOCOM556_2_Mini_Black","Tier1_MCX_LA5_Side","rhsusf_acc_ACOG_RMR",{"Tier1_30Rnd_762x35_300BLK_RNBT_PMAG",30},{},"Tier1_GripPod_MLOK_Black"},{"rhs_weap_m72a7","","","",{},{},""},{},{"USP_G3C_KP_MX_MCT",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_RGR",{}},{"USP_DELTA_BAG_MCT",{}},"USP_OPSCORE_FASTMTC_MCT_CTW","USP_BALACLAVA_ADV3_MCT",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_VAR_1_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 2"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_03", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_KP_MX_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CTW"}; 
		weapons[] = {"Tier1_SIG_MCX_115_Virtus_300BLK_Black","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_SIG_MCX_115_Virtus_300BLK_Black","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_SIG_MCX_115_Virtus_300BLK_Black","Tier1_SOCOM556_2_Mini_Black","Tier1_MCX_LA5_Side","rhsusf_acc_ACOG_RMR",{"Tier1_30Rnd_762x35_300BLK_RNBT_PMAG",30},{},"Tier1_GripPod_MLOK_Black"},{"rhs_weap_m72a7","","","",{},{},""},{},{"USP_G3C_KP_MX_MCT",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_RGR",{}},{"USP_DELTA_BAG_MCT",{}},"USP_OPSCORE_FASTMTC_MCT_CTW","USP_BALACLAVA_ADV3_MCT",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_VAR_2_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 3"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_MK48_Mod0","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_MK48_Mod0","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_MK48_Mod0","Tier1_SOCOM762MG_Black","Tier1_Mk48Mod0_LA5_M600V_FL","Tier1_Elcan_156_C2_Docter_Black",{"Tier1_250Rnd_762x51_Belt_M80",250},{},"Tier1_SAW_Bipod_2"},{},{},{"USP_G3C_MX_MCT",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_RGR",{}},{"USP_DELTA_BAG_MCT",{{"Tier1_250Rnd_762x51_Belt_M61_AP",1,250},{"Tier1_250Rnd_762x51_Belt_M62_Tracer",1,250}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_VAR_2_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 3"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_MK48_Mod0","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_MK48_Mod0","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_MK48_Mod0","Tier1_SOCOM762MG_Black","Tier1_Mk48Mod0_LA5_M600V_FL","Tier1_Elcan_156_C2_Docter_Black",{"Tier1_250Rnd_762x51_Belt_M80",250},{},"Tier1_SAW_Bipod_2"},{},{},{"USP_G3C_MX_MCT",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_RGR",{}},{"USP_DELTA_BAG_MCT",{{"Tier1_250Rnd_762x51_Belt_M61_AP",1,250},{"Tier1_250Rnd_762x51_Belt_M62_Tracer",1,250}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_VAR_2_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 3"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_MK48_Mod0","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_MK48_Mod0","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_MK48_Mod0","Tier1_SOCOM762MG_Black","Tier1_Mk48Mod0_LA5_M600V_FL","Tier1_Elcan_156_C2_Docter_Black",{"Tier1_250Rnd_762x51_Belt_M80",250},{},"Tier1_SAW_Bipod_2"},{},{},{"USP_G3C_MX_MCT",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_RGR",{}},{"USP_DELTA_BAG_MCT",{{"Tier1_250Rnd_762x51_Belt_M61_AP",1,250},{"Tier1_250Rnd_762x51_Belt_M62_Tracer",1,250}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_VAR_3_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 4"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_03", "Male01GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_KP_MX_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"rhs_weap_hk416d145_m320","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_hk416d145_m320","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d145_m320","Tier1_KAC_556_QDC_CQB_Black","rhsusf_acc_anpeq15_bk_top","Tier1_EXPS3_0_G33_Black_Up",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{"1Rnd_HE_Grenade_shell",1},""},{"rhs_weap_m72a7","","","",{},{},""},{},{"USP_G3C_KP_MX_MCT",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_RGR",{{"rhs_mag_M397_HET",1,1}}},{"USP_DELTA_BAG_MCT",{{"ACE_HuntIR_monitor",1},{"ACE_CTS9",1,1},{"rhs_mag_m18_green",1,1},{"rhs_mag_m18_red",1,1},{"SmokeShell",1,1},{"rhs_mag_mk84",1,1},{"rhs_mag_m67",1,1},{"rhs_mag_m18_yellow",1,1},{"Chemlight_blue",1,1},{"ACE_FlareTripMine_Mag",1,1},{"DemoCharge_Remote_Mag",1,1},{"rhsusf_m112_mag",1,1},{"SLAMDirectionalMine_Wire_Mag",1,1},{"rhs_mag_M397_HET",1,1},{"rhs_mag_M433_HEDP",1,1}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","USP_BALACLAVA_ADV3_MCT",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_VAR_3_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 4"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_03", "Male01GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_KP_MX_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"rhs_weap_hk416d145_m320","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_hk416d145_m320","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d145_m320","Tier1_KAC_556_QDC_CQB_Black","rhsusf_acc_anpeq15_bk_top","Tier1_EXPS3_0_G33_Black_Up",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{"1Rnd_HE_Grenade_shell",1},""},{"rhs_weap_m72a7","","","",{},{},""},{},{"USP_G3C_KP_MX_MCT",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_RGR",{{"rhs_mag_M397_HET",1,1}}},{"USP_DELTA_BAG_MCT",{{"ACE_HuntIR_monitor",1},{"ACE_CTS9",1,1},{"rhs_mag_m18_green",1,1},{"rhs_mag_m18_red",1,1},{"SmokeShell",1,1},{"rhs_mag_mk84",1,1},{"rhs_mag_m67",1,1},{"rhs_mag_m18_yellow",1,1},{"Chemlight_blue",1,1},{"ACE_FlareTripMine_Mag",1,1},{"DemoCharge_Remote_Mag",1,1},{"rhsusf_m112_mag",1,1},{"SLAMDirectionalMine_Wire_Mag",1,1},{"rhs_mag_M397_HET",1,1},{"rhs_mag_M433_HEDP",1,1}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","USP_BALACLAVA_ADV3_MCT",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_VAR_3_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 4"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_03", "Male01GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_KP_MX_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"rhs_weap_hk416d145_m320","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_hk416d145_m320","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d145_m320","Tier1_KAC_556_QDC_CQB_Black","rhsusf_acc_anpeq15_bk_top","Tier1_EXPS3_0_G33_Black_Up",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{"1Rnd_HE_Grenade_shell",1},""},{"rhs_weap_m72a7","","","",{},{},""},{},{"USP_G3C_KP_MX_MCT",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_RGR",{{"rhs_mag_M397_HET",1,1}}},{"USP_DELTA_BAG_MCT",{{"ACE_HuntIR_monitor",1},{"ACE_CTS9",1,1},{"rhs_mag_m18_green",1,1},{"rhs_mag_m18_red",1,1},{"SmokeShell",1,1},{"rhs_mag_mk84",1,1},{"rhs_mag_m67",1,1},{"rhs_mag_m18_yellow",1,1},{"Chemlight_blue",1,1},{"ACE_FlareTripMine_Mag",1,1},{"DemoCharge_Remote_Mag",1,1},{"rhsusf_m112_mag",1,1},{"SLAMDirectionalMine_Wire_Mag",1,1},{"rhs_mag_M397_HET",1,1},{"rhs_mag_M433_HEDP",1,1}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","USP_BALACLAVA_ADV3_MCT",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_VAR_4_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 5"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male03GRE" ,"G_NATO_default"};
		uniformClass = "U_B_T_Sniper_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"srifle_LRR_F","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"srifle_LRR_F","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"srifle_LRR_F","","","rhsusf_acc_nxs_5522x56_md_sun",{"ACE_7Rnd_408_305gr_Mag",7},{},""},{"rhs_weap_m72a7","","","",{},{},""},{},{"U_B_T_Sniper_F",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_RGR",{}},{"USP_DELTA_BAG_MCT",{}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","USP_BALACLAVA_ADV3_MCT",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_VAR_4_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 5"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male03GRE" ,"G_NATO_default"};
		uniformClass = "U_B_T_Sniper_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"srifle_LRR_F","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"srifle_LRR_F","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"srifle_LRR_F","","","rhsusf_acc_nxs_5522x56_md_sun",{"ACE_7Rnd_408_305gr_Mag",7},{},""},{"rhs_weap_m72a7","","","",{},{},""},{},{"U_B_T_Sniper_F",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_RGR",{}},{"USP_DELTA_BAG_MCT",{}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","USP_BALACLAVA_ADV3_MCT",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_VAR_4_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 5"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male03GRE" ,"G_NATO_default"};
		uniformClass = "U_B_T_Sniper_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"srifle_LRR_F","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"srifle_LRR_F","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"srifle_LRR_F","","","rhsusf_acc_nxs_5522x56_md_sun",{"ACE_7Rnd_408_305gr_Mag",7},{},""},{"rhs_weap_m72a7","","","",{},{},""},{},{"U_B_T_Sniper_F",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_RGR",{}},{"USP_DELTA_BAG_MCT",{}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","USP_BALACLAVA_ADV3_MCT",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_RTO_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Anti-Tank (Woodland)"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male01GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_HK416D10_CTR","rhs_weap_fgm148","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_HK416D10_CTR","rhs_weap_fgm148","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_HK416D10_CTR","","Tier1_416_LA5_Side","rhsusf_acc_su230_mrds",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},"Tier1_GripPod_Black"},{"rhs_weap_fgm148","","","",{"rhs_fgm148_magazine_AT",1},{},""},{},{"USP_G3C_MX_MCW",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",1,30}}},{"USP_CRYE_CPC_COMMS_MCT",{{"rhs_mag_30Rnd_556x45_Mk318_Stanag",19,30}}},{"USP_45L_RUCKSACK_GRN",{}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_RTO_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Anti-Tank (Woodland)"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male01GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_HK416D10_CTR","rhs_weap_fgm148","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_HK416D10_CTR","rhs_weap_fgm148","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_HK416D10_CTR","","Tier1_416_LA5_Side","rhsusf_acc_su230_mrds",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},"Tier1_GripPod_Black"},{"rhs_weap_fgm148","","","",{"rhs_fgm148_magazine_AT",1},{},""},{},{"USP_G3C_MX_MCW",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",1,30}}},{"USP_CRYE_CPC_COMMS_MCT",{{"rhs_mag_30Rnd_556x45_Mk318_Stanag",19,30}}},{"USP_45L_RUCKSACK_GRN",{}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_RTO_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Anti-Tank (Woodland)"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male01GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_HK416D10_CTR","rhs_weap_fgm148","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_HK416D10_CTR","rhs_weap_fgm148","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_HK416D10_CTR","","Tier1_416_LA5_Side","rhsusf_acc_su230_mrds",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},"Tier1_GripPod_Black"},{"rhs_weap_fgm148","","","",{"rhs_fgm148_magazine_AT",1},{},""},{},{"USP_G3C_MX_MCW",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",1,30}}},{"USP_CRYE_CPC_COMMS_MCT",{{"rhs_mag_30Rnd_556x45_Mk318_Stanag",19,30}}},{"USP_45L_RUCKSACK_GRN",{}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_VAR_5_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 6"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_03", "Male04GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_M110k5_ACS_65mm","rhs_weap_fgm148","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_M110k5_ACS_65mm","rhs_weap_fgm148","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_M110k5_ACS_65mm","Tier1_KAC_762_DSR","","Tier1_LeupoldM3A_Geissele_Docter_Tan",{"Tier1_20Rnd_65x48_Creedmoor_SR25_Mag",20},{},""},{"rhs_weap_fgm148","","","",{"rhs_fgm148_magazine_AT",1},{},""},{},{"USP_G3C_MX_MCW",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_MCT",{}},{"USP_45L_RUCKSACK_GRN",{{"rhs_fgm148_magazine_AT",1,1},{"Titan_AA",1,1}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_VAR_5_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 6"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_03", "Male04GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_M110k5_ACS_65mm","rhs_weap_fgm148","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_M110k5_ACS_65mm","rhs_weap_fgm148","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_M110k5_ACS_65mm","Tier1_KAC_762_DSR","","Tier1_LeupoldM3A_Geissele_Docter_Tan",{"Tier1_20Rnd_65x48_Creedmoor_SR25_Mag",20},{},""},{"rhs_weap_fgm148","","","",{"rhs_fgm148_magazine_AT",1},{},""},{},{"USP_G3C_MX_MCW",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_MCT",{}},{"USP_45L_RUCKSACK_GRN",{{"rhs_fgm148_magazine_AT",1,1},{"Titan_AA",1,1}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_VAR_5_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 6"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_03", "Male04GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_M110k5_ACS_65mm","rhs_weap_fgm148","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_M110k5_ACS_65mm","rhs_weap_fgm148","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_M110k5_ACS_65mm","Tier1_KAC_762_DSR","","Tier1_LeupoldM3A_Geissele_Docter_Tan",{"Tier1_20Rnd_65x48_Creedmoor_SR25_Mag",20},{},""},{"rhs_weap_fgm148","","","",{"rhs_fgm148_magazine_AT",1},{},""},{},{"USP_G3C_MX_MCW",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_MCT",{}},{"USP_45L_RUCKSACK_GRN",{{"rhs_fgm148_magazine_AT",1,1},{"Titan_AA",1,1}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_VAR_6_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 7"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male04GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS14_WP_TAR","G_Bandanna_oli","USP_BASEBALL_CAP_MCT"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS14_WP_TAR","G_Bandanna_oli","USP_BASEBALL_CAP_MCT"}; 
		weapons[] = {"Tier1_HK416D10_CTR","rhs_weap_fgm148","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_HK416D10_CTR","rhs_weap_fgm148","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_HK416D10_CTR","","Tier1_416_LA5_Side","rhsusf_acc_ACOG_RMR",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},"Tier1_GripPod_Black"},{"rhs_weap_fgm148","","","",{"rhs_fgm148_magazine_AT",1},{},""},{},{"USP_G3C_MX_MCW",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_MCT",{}},{"USP_45L_RUCKSACK_GRN",{}},"USP_BASEBALL_CAP_MCT","G_Bandanna_oli",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS14_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_VAR_6_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 7"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male04GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS14_WP_TAR","G_Bandanna_oli","USP_BASEBALL_CAP_MCT"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS14_WP_TAR","G_Bandanna_oli","USP_BASEBALL_CAP_MCT"}; 
		weapons[] = {"Tier1_HK416D10_CTR","rhs_weap_fgm148","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_HK416D10_CTR","rhs_weap_fgm148","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_HK416D10_CTR","","Tier1_416_LA5_Side","rhsusf_acc_ACOG_RMR",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},"Tier1_GripPod_Black"},{"rhs_weap_fgm148","","","",{"rhs_fgm148_magazine_AT",1},{},""},{},{"USP_G3C_MX_MCW",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_MCT",{}},{"USP_45L_RUCKSACK_GRN",{}},"USP_BASEBALL_CAP_MCT","G_Bandanna_oli",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS14_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_VAR_6_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 7"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male04GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS14_WP_TAR","G_Bandanna_oli","USP_BASEBALL_CAP_MCT"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS14_WP_TAR","G_Bandanna_oli","USP_BASEBALL_CAP_MCT"}; 
		weapons[] = {"Tier1_HK416D10_CTR","rhs_weap_fgm148","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_HK416D10_CTR","rhs_weap_fgm148","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_HK416D10_CTR","","Tier1_416_LA5_Side","rhsusf_acc_ACOG_RMR",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},"Tier1_GripPod_Black"},{"rhs_weap_fgm148","","","",{"rhs_fgm148_magazine_AT",1},{},""},{},{"USP_G3C_MX_MCW",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_MCT",{}},{"USP_45L_RUCKSACK_GRN",{}},"USP_BASEBALL_CAP_MCT","G_Bandanna_oli",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS14_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_VAR_7_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 8"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_03", "Male02GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_MK46_Mod0_Para","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_MK46_Mod0_Para","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_MK46_Mod0_Para","rhsusf_acc_nt4_black","Tier1_Mk46Mod0_LA5_M600V_Black_FL","rhsusf_acc_su230",{"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch",200},{},"Tier1_SAW_Bipod_2"},{},{},{"USP_G3C_MX_MCW",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_MCT",{}},{"USP_DELTA_BAG_M81",{{"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch",1,200},{"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_coyote",1,200},{"rhsusf_200Rnd_556x45_M855_soft_pouch_ucp",1,200},{"rhsusf_200Rnd_556x45_M855_soft_pouch_coyote",1,200}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_VAR_7_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 8"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_03", "Male02GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_MK46_Mod0_Para","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_MK46_Mod0_Para","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_MK46_Mod0_Para","rhsusf_acc_nt4_black","Tier1_Mk46Mod0_LA5_M600V_Black_FL","rhsusf_acc_su230",{"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch",200},{},"Tier1_SAW_Bipod_2"},{},{},{"USP_G3C_MX_MCW",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_MCT",{}},{"USP_DELTA_BAG_M81",{{"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch",1,200},{"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_coyote",1,200},{"rhsusf_200Rnd_556x45_M855_soft_pouch_ucp",1,200},{"rhsusf_200Rnd_556x45_M855_soft_pouch_coyote",1,200}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_VAR_7_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 8"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_03", "Male02GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_MK46_Mod0_Para","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_MK46_Mod0_Para","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_MK46_Mod0_Para","rhsusf_acc_nt4_black","Tier1_Mk46Mod0_LA5_M600V_Black_FL","rhsusf_acc_su230",{"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch",200},{},"Tier1_SAW_Bipod_2"},{},{},{"USP_G3C_MX_MCW",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_MCT",{}},{"USP_DELTA_BAG_M81",{{"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch",1,200},{"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_coyote",1,200},{"rhsusf_200Rnd_556x45_M855_soft_pouch_ucp",1,200},{"rhsusf_200Rnd_556x45_M855_soft_pouch_coyote",1,200}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_VAR_8_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 9"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_VQ_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_SHEMAGH_NECK8_CBR","USP_OPSCORE_FASTMTC_MCT_CMSW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_SHEMAGH_NECK8_CBR","USP_OPSCORE_FASTMTC_MCT_CMSW"}; 
		weapons[] = {"Tier1_SR16_Carbine_Mod2_CTR_Black","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_SR16_Carbine_Mod2_CTR_Black","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_SR16_Carbine_Mod2_CTR_Black","Tier1_SRD762_Black","Tier1_URX4_NGAL_M600V_alt_Black_FL","Tier1_Eotech551_3xMag_Riser_Black_Up",{"rhs_mag_30Rnd_556x45_Mk262_PMAG",30},{},"Tier1_AFG_MLOK_Black"},{"rhs_weap_m72a7","","","",{},{},""},{},{"USP_G3C_VQ_MCT",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_RGR",{}},{"USP_DELTA_BAG_MCT",{{"rhs_mag_30Rnd_556x45_M193_Stanag",1,30},{"rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red",1,30}}},"USP_OPSCORE_FASTMTC_MCT_CMSW","USP_SHEMAGH_NECK8_CBR",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_VAR_8_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 9"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_VQ_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_SHEMAGH_NECK8_CBR","USP_OPSCORE_FASTMTC_MCT_CMSW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_SHEMAGH_NECK8_CBR","USP_OPSCORE_FASTMTC_MCT_CMSW"}; 
		weapons[] = {"Tier1_SR16_Carbine_Mod2_CTR_Black","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_SR16_Carbine_Mod2_CTR_Black","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_SR16_Carbine_Mod2_CTR_Black","Tier1_SRD762_Black","Tier1_URX4_NGAL_M600V_alt_Black_FL","Tier1_Eotech551_3xMag_Riser_Black_Up",{"rhs_mag_30Rnd_556x45_Mk262_PMAG",30},{},"Tier1_AFG_MLOK_Black"},{"rhs_weap_m72a7","","","",{},{},""},{},{"USP_G3C_VQ_MCT",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_RGR",{}},{"USP_DELTA_BAG_MCT",{{"rhs_mag_30Rnd_556x45_M193_Stanag",1,30},{"rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red",1,30}}},"USP_OPSCORE_FASTMTC_MCT_CMSW","USP_SHEMAGH_NECK8_CBR",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_VAR_8_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 9"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_VQ_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_SHEMAGH_NECK8_CBR","USP_OPSCORE_FASTMTC_MCT_CMSW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_SHEMAGH_NECK8_CBR","USP_OPSCORE_FASTMTC_MCT_CMSW"}; 
		weapons[] = {"Tier1_SR16_Carbine_Mod2_CTR_Black","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_SR16_Carbine_Mod2_CTR_Black","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_SR16_Carbine_Mod2_CTR_Black","Tier1_SRD762_Black","Tier1_URX4_NGAL_M600V_alt_Black_FL","Tier1_Eotech551_3xMag_Riser_Black_Up",{"rhs_mag_30Rnd_556x45_Mk262_PMAG",30},{},"Tier1_AFG_MLOK_Black"},{"rhs_weap_m72a7","","","",{},{},""},{},{"USP_G3C_VQ_MCT",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_RGR",{}},{"USP_DELTA_BAG_MCT",{{"rhs_mag_30Rnd_556x45_M193_Stanag",1,30},{"rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red",1,30}}},"USP_OPSCORE_FASTMTC_MCT_CMSW","USP_SHEMAGH_NECK8_CBR",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_VAR_9_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 10"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male01GRE" ,"G_NATO_default"};
		uniformClass = "U_O_FullGhillie_lsh"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Balaclava_oli_lxWS","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Balaclava_oli_lxWS","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"rhs_weap_m14ebrri","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m14ebrri","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m14ebrri","rhsusf_acc_aac_scarh_silencer","rhsusf_acc_anpeq15side_bk","Tier1_LeupoldM3A_Geissele_Black",{"ACE_20Rnd_762x51_Mag_Tracer_Dim",20},{},"rhsusf_acc_harris_bipod"},{},{},{"U_O_FullGhillie_lsh",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_MCT",{}},{"USP_DELTA_BAG_M81",{}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Balaclava_oli_lxWS",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_VAR_9_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 10"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male01GRE" ,"G_NATO_default"};
		uniformClass = "U_O_FullGhillie_lsh"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Balaclava_oli_lxWS","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Balaclava_oli_lxWS","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"rhs_weap_m14ebrri","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m14ebrri","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m14ebrri","rhsusf_acc_aac_scarh_silencer","rhsusf_acc_anpeq15side_bk","Tier1_LeupoldM3A_Geissele_Black",{"ACE_20Rnd_762x51_Mag_Tracer_Dim",20},{},"rhsusf_acc_harris_bipod"},{},{},{"U_O_FullGhillie_lsh",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_MCT",{}},{"USP_DELTA_BAG_M81",{}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Balaclava_oli_lxWS",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_VAR_9_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 10"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male01GRE" ,"G_NATO_default"};
		uniformClass = "U_O_FullGhillie_lsh"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Balaclava_oli_lxWS","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Balaclava_oli_lxWS","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"rhs_weap_m14ebrri","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m14ebrri","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m14ebrri","rhsusf_acc_aac_scarh_silencer","rhsusf_acc_anpeq15side_bk","Tier1_LeupoldM3A_Geissele_Black",{"ACE_20Rnd_762x51_Mag_Tracer_Dim",20},{},"rhsusf_acc_harris_bipod"},{},{},{"U_O_FullGhillie_lsh",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_MCT",{}},{"USP_DELTA_BAG_M81",{}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Balaclava_oli_lxWS",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_DIVER_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Special (Desert)"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_KP_OR_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_GPNVG18_WP_GM_TAR_BLK","H_PilotHelmetHeli_O"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_GPNVG18_WP_GM_TAR_BLK","H_PilotHelmetHeli_O"}; 
		weapons[] = {"rhsusf_weap_MP7A2","Tier1_P320","ACE_Vector"}; 
		respawnWeapons[] = {"rhsusf_weap_MP7A2","Tier1_P320","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhsusf_weap_MP7A2","","rhsusf_acc_anpeq15side_bk","Tier1_Eotech551_Riser_Black",{"rhsusf_mag_40Rnd_46x30_AP",40},{},"rhsusf_acc_grip2"},{},{"Tier1_P320","","Tier1_X300U","Tier1_Docter",{"Tier1_17Rnd_9x19_P320_JHP",17},{},""},{"USP_G3C_KP_OR_MCT",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"rhsusf_mag_40Rnd_46x30_AP",1,40}}},{"USP_CRYE_CPC_COMMS_MCT",{{"rhsusf_mag_40Rnd_46x30_AP",24,40}}},{"USP_ZIPON_PACK_CPC_RGR",{{"rhsusf_mag_40Rnd_46x30_AP",15,40}}},"H_PilotHelmetHeli_O","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_GPNVG18_WP_GM_TAR_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_DIVER_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Special (Desert)"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_KP_OR_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_GPNVG18_WP_GM_TAR_BLK","H_PilotHelmetHeli_O"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_GPNVG18_WP_GM_TAR_BLK","H_PilotHelmetHeli_O"}; 
		weapons[] = {"rhsusf_weap_MP7A2","Tier1_P320","ACE_Vector"}; 
		respawnWeapons[] = {"rhsusf_weap_MP7A2","Tier1_P320","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhsusf_weap_MP7A2","","rhsusf_acc_anpeq15side_bk","Tier1_Eotech551_Riser_Black",{"rhsusf_mag_40Rnd_46x30_AP",40},{},"rhsusf_acc_grip2"},{},{"Tier1_P320","","Tier1_X300U","Tier1_Docter",{"Tier1_17Rnd_9x19_P320_JHP",17},{},""},{"USP_G3C_KP_OR_MCT",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"rhsusf_mag_40Rnd_46x30_AP",1,40}}},{"USP_CRYE_CPC_COMMS_MCT",{{"rhsusf_mag_40Rnd_46x30_AP",24,40}}},{"USP_ZIPON_PACK_CPC_RGR",{{"rhsusf_mag_40Rnd_46x30_AP",15,40}}},"H_PilotHelmetHeli_O","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_GPNVG18_WP_GM_TAR_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_DIVER_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Special (Desert)"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_KP_OR_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_GPNVG18_WP_GM_TAR_BLK","H_PilotHelmetHeli_O"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_GPNVG18_WP_GM_TAR_BLK","H_PilotHelmetHeli_O"}; 
		weapons[] = {"rhsusf_weap_MP7A2","Tier1_P320","ACE_Vector"}; 
		respawnWeapons[] = {"rhsusf_weap_MP7A2","Tier1_P320","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhsusf_weap_MP7A2","","rhsusf_acc_anpeq15side_bk","Tier1_Eotech551_Riser_Black",{"rhsusf_mag_40Rnd_46x30_AP",40},{},"rhsusf_acc_grip2"},{},{"Tier1_P320","","Tier1_X300U","Tier1_Docter",{"Tier1_17Rnd_9x19_P320_JHP",17},{},""},{"USP_G3C_KP_OR_MCT",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"rhsusf_mag_40Rnd_46x30_AP",1,40}}},{"USP_CRYE_CPC_COMMS_MCT",{{"rhsusf_mag_40Rnd_46x30_AP",24,40}}},{"USP_ZIPON_PACK_CPC_RGR",{{"rhsusf_mag_40Rnd_46x30_AP",15,40}}},"H_PilotHelmetHeli_O","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_GPNVG18_WP_GM_TAR_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_VAR_10_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 11"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_P320_TB","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_P320_TB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_RF2_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"Tier1_P320_TB","","Tier1_X300U","Tier1_Docter",{},{},""},{"USP_G3C_MX_MCW",{}},{"USP_CRYE_CPC_COMMS_MCT",{}},{"USP_ZIPON_PACK_CPC_AT_RF2_MCT",{}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_VAR_10_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 11"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_P320_TB","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_P320_TB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_RF2_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"Tier1_P320_TB","","Tier1_X300U","Tier1_Docter",{},{},""},{"USP_G3C_MX_MCW",{}},{"USP_CRYE_CPC_COMMS_MCT",{}},{"USP_ZIPON_PACK_CPC_AT_RF2_MCT",{}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_VAR_10_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 11"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_P320_TB","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_P320_TB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_RF2_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"Tier1_P320_TB","","Tier1_X300U","Tier1_Docter",{},{},""},{"USP_G3C_MX_MCW",{}},{"USP_CRYE_CPC_COMMS_MCT",{}},{"USP_ZIPON_PACK_CPC_AT_RF2_MCT",{}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_AR_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Machine Gunner (Desert)"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_MK46_Mod0","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_MK46_Mod0","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_MK46_Mod0","rhsusf_acc_nt4_black","Tier1_Mk46Mod0_LA5_M600V_Black_FL","rhsusf_acc_su230_mrds",{"rhsusf_200Rnd_556x45_M855_soft_pouch",200},{},"Tier1_SAW_Bipod_2"},{},{},{"USP_G3C_MX_MCW",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"USP_CRYE_CPC_COMMS_MCT",{{"rhsusf_200Rnd_556x45_M855_soft_pouch",4,200}}},{"USP_DELTA_BAG_M81",{{"rhsusf_200Rnd_556x45_M855_soft_pouch",4,200}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_AR_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Machine Gunner (Desert)"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_MK46_Mod0","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_MK46_Mod0","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_MK46_Mod0","rhsusf_acc_nt4_black","Tier1_Mk46Mod0_LA5_M600V_Black_FL","rhsusf_acc_su230_mrds",{"rhsusf_200Rnd_556x45_M855_soft_pouch",200},{},"Tier1_SAW_Bipod_2"},{},{},{"USP_G3C_MX_MCW",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"USP_CRYE_CPC_COMMS_MCT",{{"rhsusf_200Rnd_556x45_M855_soft_pouch",4,200}}},{"USP_DELTA_BAG_M81",{{"rhsusf_200Rnd_556x45_M855_soft_pouch",4,200}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_AR_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Machine Gunner (Desert)"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_MK46_Mod0","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_MK46_Mod0","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_MK46_Mod0","rhsusf_acc_nt4_black","Tier1_Mk46Mod0_LA5_M600V_Black_FL","rhsusf_acc_su230_mrds",{"rhsusf_200Rnd_556x45_M855_soft_pouch",200},{},"Tier1_SAW_Bipod_2"},{},{},{"USP_G3C_MX_MCW",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"USP_CRYE_CPC_COMMS_MCT",{{"rhsusf_200Rnd_556x45_M855_soft_pouch",4,200}}},{"USP_DELTA_BAG_M81",{{"rhsusf_200Rnd_556x45_M855_soft_pouch",4,200}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_Rifleman_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Rifleman (Desert)"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_RS_CU_KP_MX_VQ_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_HK416D145_CTR","Tier1_P320_TB","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_HK416D145_CTR","Tier1_P320_TB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_HK416D145_CTR","","Tier1_416_LA5_Side","rhsusf_acc_su230a_mrds",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},"Tier1_GripPod_Black"},{},{"Tier1_P320_TB","Tier1_Octane9","Tier1_DBALPL","Tier1_MRDS",{"Tier1_21Rnd_9x19_P320_FMJ",21},{},""},{"USP_G3C_RS_CU_KP_MX_VQ_MCT",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",1,30}}},{"USP_CRYE_CPC_COMMS_MCT",{{"rhs_mag_30Rnd_556x45_Mk318_Stanag",23,30}}},{"USP_DELTA_BAG_M81",{{"rhs_mag_30Rnd_556x45_Mk318_Stanag",21,30}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_Rifleman_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Rifleman (Desert)"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_RS_CU_KP_MX_VQ_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_HK416D145_CTR","Tier1_P320_TB","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_HK416D145_CTR","Tier1_P320_TB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_HK416D145_CTR","","Tier1_416_LA5_Side","rhsusf_acc_su230a_mrds",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},"Tier1_GripPod_Black"},{},{"Tier1_P320_TB","Tier1_Octane9","Tier1_DBALPL","Tier1_MRDS",{"Tier1_21Rnd_9x19_P320_FMJ",21},{},""},{"USP_G3C_RS_CU_KP_MX_VQ_MCT",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",1,30}}},{"USP_CRYE_CPC_COMMS_MCT",{{"rhs_mag_30Rnd_556x45_Mk318_Stanag",23,30}}},{"USP_DELTA_BAG_M81",{{"rhs_mag_30Rnd_556x45_Mk318_Stanag",21,30}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_Rifleman_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Rifleman (Desert)"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_RS_CU_KP_MX_VQ_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_HK416D145_CTR","Tier1_P320_TB","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_HK416D145_CTR","Tier1_P320_TB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_HK416D145_CTR","","Tier1_416_LA5_Side","rhsusf_acc_su230a_mrds",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},"Tier1_GripPod_Black"},{},{"Tier1_P320_TB","Tier1_Octane9","Tier1_DBALPL","Tier1_MRDS",{"Tier1_21Rnd_9x19_P320_FMJ",21},{},""},{"USP_G3C_RS_CU_KP_MX_VQ_MCT",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",1,30}}},{"USP_CRYE_CPC_COMMS_MCT",{{"rhs_mag_30Rnd_556x45_Mk318_Stanag",23,30}}},{"USP_DELTA_BAG_M81",{{"rhs_mag_30Rnd_556x45_Mk318_Stanag",21,30}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_GL_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Grenadier (Desert)"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_CS_KP_OR_VQ_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_HK416D10_CTR","rhs_weap_M320","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_HK416D10_CTR","rhs_weap_M320","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_HK416D10_CTR","","Tier1_416_LA5_M600V_alt_Black","rhsusf_acc_su230a",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},"Tier1_GripPod_Black"},{},{"rhs_weap_M320","","","",{"rhs_mag_M441_HE",1},{},""},{"USP_G3C_CS_KP_OR_VQ_MCT",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",1,30}}},{"USP_CRYE_CPC_COMMS_MCT",{{"1Rnd_HE_Grenade_shell",23,1},{"1Rnd_Smoke_Grenade_shell",13,1},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",8,30}}},{"USP_DELTA_BAG_M81",{{"1Rnd_HE_Grenade_shell",21,1},{"1Rnd_Smoke_Grenade_shell",12,1},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",7,30}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_GL_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Grenadier (Desert)"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_CS_KP_OR_VQ_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_HK416D10_CTR","rhs_weap_M320","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_HK416D10_CTR","rhs_weap_M320","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_HK416D10_CTR","","Tier1_416_LA5_M600V_alt_Black","rhsusf_acc_su230a",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},"Tier1_GripPod_Black"},{},{"rhs_weap_M320","","","",{"rhs_mag_M441_HE",1},{},""},{"USP_G3C_CS_KP_OR_VQ_MCT",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",1,30}}},{"USP_CRYE_CPC_COMMS_MCT",{{"1Rnd_HE_Grenade_shell",23,1},{"1Rnd_Smoke_Grenade_shell",13,1},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",8,30}}},{"USP_DELTA_BAG_M81",{{"1Rnd_HE_Grenade_shell",21,1},{"1Rnd_Smoke_Grenade_shell",12,1},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",7,30}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_GL_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Grenadier (Desert)"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_CS_KP_OR_VQ_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_HK416D10_CTR","rhs_weap_M320","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_HK416D10_CTR","rhs_weap_M320","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_HK416D10_CTR","","Tier1_416_LA5_M600V_alt_Black","rhsusf_acc_su230a",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},"Tier1_GripPod_Black"},{},{"rhs_weap_M320","","","",{"rhs_mag_M441_HE",1},{},""},{"USP_G3C_CS_KP_OR_VQ_MCT",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",1,30}}},{"USP_CRYE_CPC_COMMS_MCT",{{"1Rnd_HE_Grenade_shell",23,1},{"1Rnd_Smoke_Grenade_shell",13,1},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",8,30}}},{"USP_DELTA_BAG_M81",{{"1Rnd_HE_Grenade_shell",21,1},{"1Rnd_Smoke_Grenade_shell",12,1},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",7,30}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_Medic_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Doctor (Desert)"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male04GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_CS_CU_KP_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","USP_SHEMAGH_NECK5_RGR","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","USP_SHEMAGH_NECK5_RGR","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_HK416D10_CTR","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_HK416D10_CTR","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_HK416D10_CTR","","Tier1_416_LA5_Side","rhsusf_acc_su230a_mrds",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},"Tier1_GripPod_Black"},{},{},{"USP_G3C_CS_CU_KP_MCT",{{"kat_accuvac",1},{"kat_stethoscope",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"USP_CRYE_CPC_COMMS_MCT",{{"rhs_mag_30Rnd_556x45_Mk318_Stanag",23,30}}},{"USP_DELTA_BAG_M81",{{"ACE_adenosine",2},{"ACE_elasticBandage",15},{"ACE_packingBandage",15},{"ACE_quikclot",15},{"ACE_morphine",4},{"ACE_epinephrine",4},{"ACE_plasmaIV",3},{"ACE_plasmaIV_500",6},{"ACE_splint",2},{"ACE_suture",12},{"ACE_tourniquet",4},{"kat_larynx",6},{"kat_naloxone",2},{"kat_IO_FAST",7},{"kat_ncdKit",2},{"kat_aatKit",12},{"kat_chestSeal",6},{"kat_Pulseoximeter",3},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",1,30}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","USP_SHEMAGH_NECK5_RGR",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_Medic_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Doctor (Desert)"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male04GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_CS_CU_KP_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","USP_SHEMAGH_NECK5_RGR","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","USP_SHEMAGH_NECK5_RGR","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_HK416D10_CTR","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_HK416D10_CTR","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_HK416D10_CTR","","Tier1_416_LA5_Side","rhsusf_acc_su230a_mrds",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},"Tier1_GripPod_Black"},{},{},{"USP_G3C_CS_CU_KP_MCT",{{"kat_accuvac",1},{"kat_stethoscope",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"USP_CRYE_CPC_COMMS_MCT",{{"rhs_mag_30Rnd_556x45_Mk318_Stanag",23,30}}},{"USP_DELTA_BAG_M81",{{"ACE_adenosine",2},{"ACE_elasticBandage",15},{"ACE_packingBandage",15},{"ACE_quikclot",15},{"ACE_morphine",4},{"ACE_epinephrine",4},{"ACE_plasmaIV",3},{"ACE_plasmaIV_500",6},{"ACE_splint",2},{"ACE_suture",12},{"ACE_tourniquet",4},{"kat_larynx",6},{"kat_naloxone",2},{"kat_IO_FAST",7},{"kat_ncdKit",2},{"kat_aatKit",12},{"kat_chestSeal",6},{"kat_Pulseoximeter",3},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",1,30}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","USP_SHEMAGH_NECK5_RGR",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_Medic_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Doctor (Desert)"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male04GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_CS_CU_KP_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","USP_SHEMAGH_NECK5_RGR","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","USP_SHEMAGH_NECK5_RGR","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_HK416D10_CTR","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_HK416D10_CTR","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_HK416D10_CTR","","Tier1_416_LA5_Side","rhsusf_acc_su230a_mrds",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},"Tier1_GripPod_Black"},{},{},{"USP_G3C_CS_CU_KP_MCT",{{"kat_accuvac",1},{"kat_stethoscope",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"USP_CRYE_CPC_COMMS_MCT",{{"rhs_mag_30Rnd_556x45_Mk318_Stanag",23,30}}},{"USP_DELTA_BAG_M81",{{"ACE_adenosine",2},{"ACE_elasticBandage",15},{"ACE_packingBandage",15},{"ACE_quikclot",15},{"ACE_morphine",4},{"ACE_epinephrine",4},{"ACE_plasmaIV",3},{"ACE_plasmaIV_500",6},{"ACE_splint",2},{"ACE_suture",12},{"ACE_tourniquet",4},{"kat_larynx",6},{"kat_naloxone",2},{"kat_IO_FAST",7},{"kat_ncdKit",2},{"kat_aatKit",12},{"kat_chestSeal",6},{"kat_Pulseoximeter",3},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",1,30}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","USP_SHEMAGH_NECK5_RGR",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_SNP_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Sniper (Desert)"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_CU_KP_OR_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Balaclava_oli_lxWS","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Balaclava_oli_lxWS","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"rhs_weap_m14ebrri","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m14ebrri","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m14ebrri","rhsusf_acc_aac_scarh_silencer","rhsusf_acc_anpeq15side_bk","Tier1_LeupoldM3A_Geissele_Black",{"ACE_20Rnd_762x51_Mag_Tracer_Dim",20},{},"rhsusf_acc_harris_bipod"},{},{},{"USP_G3C_CU_KP_OR_MCT",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"ACE_20Rnd_762x51_Mag_Tracer_Dim",1,20}}},{"USP_CRYE_CPC_COMMS_MCT",{{"ACE_20Rnd_762x51_Mag_Tracer_Dim",18,20}}},{"USP_DELTA_BAG_M81",{{"ACE_20Rnd_762x51_Mag_Tracer_Dim",16,20}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Balaclava_oli_lxWS",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_SNP_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Sniper (Desert)"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_CU_KP_OR_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Balaclava_oli_lxWS","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Balaclava_oli_lxWS","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"rhs_weap_m14ebrri","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m14ebrri","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m14ebrri","rhsusf_acc_aac_scarh_silencer","rhsusf_acc_anpeq15side_bk","Tier1_LeupoldM3A_Geissele_Black",{"ACE_20Rnd_762x51_Mag_Tracer_Dim",20},{},"rhsusf_acc_harris_bipod"},{},{},{"USP_G3C_CU_KP_OR_MCT",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"ACE_20Rnd_762x51_Mag_Tracer_Dim",1,20}}},{"USP_CRYE_CPC_COMMS_MCT",{{"ACE_20Rnd_762x51_Mag_Tracer_Dim",18,20}}},{"USP_DELTA_BAG_M81",{{"ACE_20Rnd_762x51_Mag_Tracer_Dim",16,20}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Balaclava_oli_lxWS",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_SNP_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Sniper (Desert)"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_CU_KP_OR_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Balaclava_oli_lxWS","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Balaclava_oli_lxWS","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"rhs_weap_m14ebrri","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m14ebrri","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m14ebrri","rhsusf_acc_aac_scarh_silencer","rhsusf_acc_anpeq15side_bk","Tier1_LeupoldM3A_Geissele_Black",{"ACE_20Rnd_762x51_Mag_Tracer_Dim",20},{},"rhsusf_acc_harris_bipod"},{},{},{"USP_G3C_CU_KP_OR_MCT",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"ACE_20Rnd_762x51_Mag_Tracer_Dim",1,20}}},{"USP_CRYE_CPC_COMMS_MCT",{{"ACE_20Rnd_762x51_Mag_Tracer_Dim",18,20}}},{"USP_DELTA_BAG_M81",{{"ACE_20Rnd_762x51_Mag_Tracer_Dim",16,20}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Balaclava_oli_lxWS",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_VAR_11_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 12"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male02GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_KP_MX_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CTW"}; 
		weapons[] = {"Tier1_SIG_MCX_115_Virtus_300BLK_Black","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_SIG_MCX_115_Virtus_300BLK_Black","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_SIG_MCX_115_Virtus_300BLK_Black","Tier1_SOCOM556_2_Mini_Black","Tier1_MCX_LA5_Side","rhsusf_acc_ACOG_RMR",{"Tier1_30Rnd_762x35_300BLK_RNBT_PMAG",30},{},"Tier1_GripPod_MLOK_Black"},{"rhs_weap_m72a7","","","",{},{},""},{},{"USP_G3C_KP_MX_MCT",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_RGR",{}},{"USP_DELTA_BAG_MCT",{}},"USP_OPSCORE_FASTMTC_MCT_CTW","USP_BALACLAVA_ADV3_MCT",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_VAR_11_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 12"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male02GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_KP_MX_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CTW"}; 
		weapons[] = {"Tier1_SIG_MCX_115_Virtus_300BLK_Black","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_SIG_MCX_115_Virtus_300BLK_Black","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_SIG_MCX_115_Virtus_300BLK_Black","Tier1_SOCOM556_2_Mini_Black","Tier1_MCX_LA5_Side","rhsusf_acc_ACOG_RMR",{"Tier1_30Rnd_762x35_300BLK_RNBT_PMAG",30},{},"Tier1_GripPod_MLOK_Black"},{"rhs_weap_m72a7","","","",{},{},""},{},{"USP_G3C_KP_MX_MCT",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_RGR",{}},{"USP_DELTA_BAG_MCT",{}},"USP_OPSCORE_FASTMTC_MCT_CTW","USP_BALACLAVA_ADV3_MCT",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_VAR_11_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 12"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male02GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_KP_MX_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CTW"}; 
		weapons[] = {"Tier1_SIG_MCX_115_Virtus_300BLK_Black","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_SIG_MCX_115_Virtus_300BLK_Black","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_SIG_MCX_115_Virtus_300BLK_Black","Tier1_SOCOM556_2_Mini_Black","Tier1_MCX_LA5_Side","rhsusf_acc_ACOG_RMR",{"Tier1_30Rnd_762x35_300BLK_RNBT_PMAG",30},{},"Tier1_GripPod_MLOK_Black"},{"rhs_weap_m72a7","","","",{},{},""},{},{"USP_G3C_KP_MX_MCT",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_RGR",{}},{"USP_DELTA_BAG_MCT",{}},"USP_OPSCORE_FASTMTC_MCT_CTW","USP_BALACLAVA_ADV3_MCT",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_VAR_12_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 13"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male02GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_MK48_Mod0","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_MK48_Mod0","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_MK48_Mod0","Tier1_SOCOM762MG_Black","Tier1_Mk48Mod0_LA5_M600V_FL","Tier1_Elcan_156_C2_Docter_Black",{"Tier1_250Rnd_762x51_Belt_M80",250},{},"Tier1_SAW_Bipod_2"},{},{},{"USP_G3C_MX_MCT",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_RGR",{}},{"USP_DELTA_BAG_MCT",{{"Tier1_250Rnd_762x51_Belt_M61_AP",1,250},{"Tier1_250Rnd_762x51_Belt_M62_Tracer",1,250}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_VAR_12_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 13"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male02GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_MK48_Mod0","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_MK48_Mod0","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_MK48_Mod0","Tier1_SOCOM762MG_Black","Tier1_Mk48Mod0_LA5_M600V_FL","Tier1_Elcan_156_C2_Docter_Black",{"Tier1_250Rnd_762x51_Belt_M80",250},{},"Tier1_SAW_Bipod_2"},{},{},{"USP_G3C_MX_MCT",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_RGR",{}},{"USP_DELTA_BAG_MCT",{{"Tier1_250Rnd_762x51_Belt_M61_AP",1,250},{"Tier1_250Rnd_762x51_Belt_M62_Tracer",1,250}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_VAR_12_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 13"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male02GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_MK48_Mod0","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_MK48_Mod0","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_MK48_Mod0","Tier1_SOCOM762MG_Black","Tier1_Mk48Mod0_LA5_M600V_FL","Tier1_Elcan_156_C2_Docter_Black",{"Tier1_250Rnd_762x51_Belt_M80",250},{},"Tier1_SAW_Bipod_2"},{},{},{"USP_G3C_MX_MCT",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_RGR",{}},{"USP_DELTA_BAG_MCT",{{"Tier1_250Rnd_762x51_Belt_M61_AP",1,250},{"Tier1_250Rnd_762x51_Belt_M62_Tracer",1,250}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_VAR_13_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 14"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_KP_MX_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"rhs_weap_hk416d145_m320","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_hk416d145_m320","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d145_m320","Tier1_KAC_556_QDC_CQB_Black","rhsusf_acc_anpeq15_bk_top","Tier1_EXPS3_0_G33_Black_Up",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{"1Rnd_HE_Grenade_shell",1},""},{"rhs_weap_m72a7","","","",{},{},""},{},{"USP_G3C_KP_MX_MCT",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_RGR",{{"rhs_mag_M397_HET",1,1}}},{"USP_DELTA_BAG_MCT",{{"ACE_HuntIR_monitor",1},{"ACE_CTS9",1,1},{"rhs_mag_m18_green",1,1},{"rhs_mag_m18_red",1,1},{"SmokeShell",1,1},{"rhs_mag_mk84",1,1},{"rhs_mag_m67",1,1},{"rhs_mag_m18_yellow",1,1},{"Chemlight_blue",1,1},{"ACE_FlareTripMine_Mag",1,1},{"DemoCharge_Remote_Mag",1,1},{"rhsusf_m112_mag",1,1},{"SLAMDirectionalMine_Wire_Mag",1,1},{"rhs_mag_M397_HET",1,1},{"rhs_mag_M433_HEDP",1,1}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","USP_BALACLAVA_ADV3_MCT",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_VAR_13_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 14"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_KP_MX_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"rhs_weap_hk416d145_m320","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_hk416d145_m320","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d145_m320","Tier1_KAC_556_QDC_CQB_Black","rhsusf_acc_anpeq15_bk_top","Tier1_EXPS3_0_G33_Black_Up",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{"1Rnd_HE_Grenade_shell",1},""},{"rhs_weap_m72a7","","","",{},{},""},{},{"USP_G3C_KP_MX_MCT",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_RGR",{{"rhs_mag_M397_HET",1,1}}},{"USP_DELTA_BAG_MCT",{{"ACE_HuntIR_monitor",1},{"ACE_CTS9",1,1},{"rhs_mag_m18_green",1,1},{"rhs_mag_m18_red",1,1},{"SmokeShell",1,1},{"rhs_mag_mk84",1,1},{"rhs_mag_m67",1,1},{"rhs_mag_m18_yellow",1,1},{"Chemlight_blue",1,1},{"ACE_FlareTripMine_Mag",1,1},{"DemoCharge_Remote_Mag",1,1},{"rhsusf_m112_mag",1,1},{"SLAMDirectionalMine_Wire_Mag",1,1},{"rhs_mag_M397_HET",1,1},{"rhs_mag_M433_HEDP",1,1}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","USP_BALACLAVA_ADV3_MCT",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_VAR_13_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 14"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_KP_MX_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"rhs_weap_hk416d145_m320","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_hk416d145_m320","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d145_m320","Tier1_KAC_556_QDC_CQB_Black","rhsusf_acc_anpeq15_bk_top","Tier1_EXPS3_0_G33_Black_Up",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{"1Rnd_HE_Grenade_shell",1},""},{"rhs_weap_m72a7","","","",{},{},""},{},{"USP_G3C_KP_MX_MCT",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_RGR",{{"rhs_mag_M397_HET",1,1}}},{"USP_DELTA_BAG_MCT",{{"ACE_HuntIR_monitor",1},{"ACE_CTS9",1,1},{"rhs_mag_m18_green",1,1},{"rhs_mag_m18_red",1,1},{"SmokeShell",1,1},{"rhs_mag_mk84",1,1},{"rhs_mag_m67",1,1},{"rhs_mag_m18_yellow",1,1},{"Chemlight_blue",1,1},{"ACE_FlareTripMine_Mag",1,1},{"DemoCharge_Remote_Mag",1,1},{"rhsusf_m112_mag",1,1},{"SLAMDirectionalMine_Wire_Mag",1,1},{"rhs_mag_M397_HET",1,1},{"rhs_mag_M433_HEDP",1,1}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","USP_BALACLAVA_ADV3_MCT",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_VAR_14_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 15"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "U_B_T_Sniper_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"srifle_LRR_F","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"srifle_LRR_F","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"srifle_LRR_F","","","rhsusf_acc_nxs_5522x56_md_sun",{"ACE_7Rnd_408_305gr_Mag",7},{},""},{"rhs_weap_m72a7","","","",{},{},""},{},{"U_B_T_Sniper_F",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_RGR",{}},{"USP_DELTA_BAG_MCT",{}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","USP_BALACLAVA_ADV3_MCT",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_VAR_14_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 15"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "U_B_T_Sniper_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"srifle_LRR_F","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"srifle_LRR_F","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"srifle_LRR_F","","","rhsusf_acc_nxs_5522x56_md_sun",{"ACE_7Rnd_408_305gr_Mag",7},{},""},{"rhs_weap_m72a7","","","",{},{},""},{},{"U_B_T_Sniper_F",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_RGR",{}},{"USP_DELTA_BAG_MCT",{}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","USP_BALACLAVA_ADV3_MCT",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_VAR_14_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 15"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "U_B_T_Sniper_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"srifle_LRR_F","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"srifle_LRR_F","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"srifle_LRR_F","","","rhsusf_acc_nxs_5522x56_md_sun",{"ACE_7Rnd_408_305gr_Mag",7},{},""},{"rhs_weap_m72a7","","","",{},{},""},{},{"U_B_T_Sniper_F",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_RGR",{}},{"USP_DELTA_BAG_MCT",{}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","USP_BALACLAVA_ADV3_MCT",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_RTO_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Anti-Tank (Desert)"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_03", "Male03GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_HK416D10_CTR","rhs_weap_fgm148","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_HK416D10_CTR","rhs_weap_fgm148","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_HK416D10_CTR","","Tier1_416_LA5_Side","rhsusf_acc_su230_mrds",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},"Tier1_GripPod_Black"},{"rhs_weap_fgm148","","","",{"rhs_fgm148_magazine_AT",1},{},""},{},{"USP_G3C_MX_MCW",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",1,30}}},{"USP_CRYE_CPC_COMMS_MCT",{{"rhs_mag_30Rnd_556x45_Mk318_Stanag",23,30}}},{"USP_45L_RUCKSACK_GRN",{{"rhs_mag_30Rnd_556x45_Mk318_Stanag",6,30}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_RTO_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Anti-Tank (Desert)"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_03", "Male03GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_HK416D10_CTR","rhs_weap_fgm148","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_HK416D10_CTR","rhs_weap_fgm148","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_HK416D10_CTR","","Tier1_416_LA5_Side","rhsusf_acc_su230_mrds",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},"Tier1_GripPod_Black"},{"rhs_weap_fgm148","","","",{"rhs_fgm148_magazine_AT",1},{},""},{},{"USP_G3C_MX_MCW",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",1,30}}},{"USP_CRYE_CPC_COMMS_MCT",{{"rhs_mag_30Rnd_556x45_Mk318_Stanag",23,30}}},{"USP_45L_RUCKSACK_GRN",{{"rhs_mag_30Rnd_556x45_Mk318_Stanag",6,30}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_RTO_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Anti-Tank (Desert)"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_03", "Male03GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_HK416D10_CTR","rhs_weap_fgm148","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_HK416D10_CTR","rhs_weap_fgm148","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_HK416D10_CTR","","Tier1_416_LA5_Side","rhsusf_acc_su230_mrds",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},"Tier1_GripPod_Black"},{"rhs_weap_fgm148","","","",{"rhs_fgm148_magazine_AT",1},{},""},{},{"USP_G3C_MX_MCW",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",1,30}}},{"USP_CRYE_CPC_COMMS_MCT",{{"rhs_mag_30Rnd_556x45_Mk318_Stanag",23,30}}},{"USP_45L_RUCKSACK_GRN",{{"rhs_mag_30Rnd_556x45_Mk318_Stanag",6,30}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_VAR_15_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 16"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_M110k5_ACS_65mm","rhs_weap_fgm148","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_M110k5_ACS_65mm","rhs_weap_fgm148","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_M110k5_ACS_65mm","Tier1_KAC_762_DSR","","Tier1_LeupoldM3A_Geissele_Docter_Tan",{"Tier1_20Rnd_65x48_Creedmoor_SR25_Mag",20},{},""},{"rhs_weap_fgm148","","","",{"rhs_fgm148_magazine_AT",1},{},""},{},{"USP_G3C_MX_MCW",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_MCT",{}},{"USP_45L_RUCKSACK_GRN",{{"rhs_fgm148_magazine_AT",1,1},{"Titan_AA",1,1}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_VAR_15_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 16"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_M110k5_ACS_65mm","rhs_weap_fgm148","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_M110k5_ACS_65mm","rhs_weap_fgm148","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_M110k5_ACS_65mm","Tier1_KAC_762_DSR","","Tier1_LeupoldM3A_Geissele_Docter_Tan",{"Tier1_20Rnd_65x48_Creedmoor_SR25_Mag",20},{},""},{"rhs_weap_fgm148","","","",{"rhs_fgm148_magazine_AT",1},{},""},{},{"USP_G3C_MX_MCW",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_MCT",{}},{"USP_45L_RUCKSACK_GRN",{{"rhs_fgm148_magazine_AT",1,1},{"Titan_AA",1,1}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_VAR_15_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 16"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_M110k5_ACS_65mm","rhs_weap_fgm148","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_M110k5_ACS_65mm","rhs_weap_fgm148","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_M110k5_ACS_65mm","Tier1_KAC_762_DSR","","Tier1_LeupoldM3A_Geissele_Docter_Tan",{"Tier1_20Rnd_65x48_Creedmoor_SR25_Mag",20},{},""},{"rhs_weap_fgm148","","","",{"rhs_fgm148_magazine_AT",1},{},""},{},{"USP_G3C_MX_MCW",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_MCT",{}},{"USP_45L_RUCKSACK_GRN",{{"rhs_fgm148_magazine_AT",1,1},{"Titan_AA",1,1}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_VAR_16_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 17"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS14_WP_TAR","G_Bandanna_oli","USP_BASEBALL_CAP_MCT"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS14_WP_TAR","G_Bandanna_oli","USP_BASEBALL_CAP_MCT"}; 
		weapons[] = {"Tier1_HK416D10_CTR","rhs_weap_fgm148","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_HK416D10_CTR","rhs_weap_fgm148","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_HK416D10_CTR","","Tier1_416_LA5_Side","rhsusf_acc_ACOG_RMR",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},"Tier1_GripPod_Black"},{"rhs_weap_fgm148","","","",{"rhs_fgm148_magazine_AT",1},{},""},{},{"USP_G3C_MX_MCW",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_MCT",{}},{"USP_45L_RUCKSACK_GRN",{}},"USP_BASEBALL_CAP_MCT","G_Bandanna_oli",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS14_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_VAR_16_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 17"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS14_WP_TAR","G_Bandanna_oli","USP_BASEBALL_CAP_MCT"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS14_WP_TAR","G_Bandanna_oli","USP_BASEBALL_CAP_MCT"}; 
		weapons[] = {"Tier1_HK416D10_CTR","rhs_weap_fgm148","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_HK416D10_CTR","rhs_weap_fgm148","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_HK416D10_CTR","","Tier1_416_LA5_Side","rhsusf_acc_ACOG_RMR",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},"Tier1_GripPod_Black"},{"rhs_weap_fgm148","","","",{"rhs_fgm148_magazine_AT",1},{},""},{},{"USP_G3C_MX_MCW",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_MCT",{}},{"USP_45L_RUCKSACK_GRN",{}},"USP_BASEBALL_CAP_MCT","G_Bandanna_oli",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS14_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_VAR_16_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 17"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS14_WP_TAR","G_Bandanna_oli","USP_BASEBALL_CAP_MCT"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS14_WP_TAR","G_Bandanna_oli","USP_BASEBALL_CAP_MCT"}; 
		weapons[] = {"Tier1_HK416D10_CTR","rhs_weap_fgm148","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_HK416D10_CTR","rhs_weap_fgm148","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_HK416D10_CTR","","Tier1_416_LA5_Side","rhsusf_acc_ACOG_RMR",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},"Tier1_GripPod_Black"},{"rhs_weap_fgm148","","","",{"rhs_fgm148_magazine_AT",1},{},""},{},{"USP_G3C_MX_MCW",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_MCT",{}},{"USP_45L_RUCKSACK_GRN",{}},"USP_BASEBALL_CAP_MCT","G_Bandanna_oli",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS14_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_VAR_17_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 18"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male02GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_MK46_Mod0_Para","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_MK46_Mod0_Para","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_MK46_Mod0_Para","rhsusf_acc_nt4_black","Tier1_Mk46Mod0_LA5_M600V_Black_FL","rhsusf_acc_su230",{"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch",200},{},"Tier1_SAW_Bipod_2"},{},{},{"USP_G3C_MX_MCW",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_MCT",{}},{"USP_DELTA_BAG_M81",{{"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch",1,200},{"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_coyote",1,200},{"rhsusf_200Rnd_556x45_M855_soft_pouch_ucp",1,200},{"rhsusf_200Rnd_556x45_M855_soft_pouch_coyote",1,200}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_VAR_17_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 18"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male02GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_MK46_Mod0_Para","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_MK46_Mod0_Para","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_MK46_Mod0_Para","rhsusf_acc_nt4_black","Tier1_Mk46Mod0_LA5_M600V_Black_FL","rhsusf_acc_su230",{"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch",200},{},"Tier1_SAW_Bipod_2"},{},{},{"USP_G3C_MX_MCW",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_MCT",{}},{"USP_DELTA_BAG_M81",{{"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch",1,200},{"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_coyote",1,200},{"rhsusf_200Rnd_556x45_M855_soft_pouch_ucp",1,200},{"rhsusf_200Rnd_556x45_M855_soft_pouch_coyote",1,200}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_VAR_17_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 18"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male02GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_MK46_Mod0_Para","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_MK46_Mod0_Para","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_MK46_Mod0_Para","rhsusf_acc_nt4_black","Tier1_Mk46Mod0_LA5_M600V_Black_FL","rhsusf_acc_su230",{"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch",200},{},"Tier1_SAW_Bipod_2"},{},{},{"USP_G3C_MX_MCW",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_MCT",{}},{"USP_DELTA_BAG_M81",{{"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch",1,200},{"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_coyote",1,200},{"rhsusf_200Rnd_556x45_M855_soft_pouch_ucp",1,200},{"rhsusf_200Rnd_556x45_M855_soft_pouch_coyote",1,200}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_VAR_18_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 19"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_03", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_VQ_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_SHEMAGH_NECK8_CBR","USP_OPSCORE_FASTMTC_MCT_CMSW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_SHEMAGH_NECK8_CBR","USP_OPSCORE_FASTMTC_MCT_CMSW"}; 
		weapons[] = {"Tier1_SR16_Carbine_Mod2_CTR_Black","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_SR16_Carbine_Mod2_CTR_Black","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_SR16_Carbine_Mod2_CTR_Black","Tier1_SRD762_Black","Tier1_URX4_NGAL_M600V_alt_Black_FL","Tier1_Eotech551_3xMag_Riser_Black_Up",{"rhs_mag_30Rnd_556x45_Mk262_PMAG",30},{},"Tier1_AFG_MLOK_Black"},{"rhs_weap_m72a7","","","",{},{},""},{},{"USP_G3C_VQ_MCT",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_RGR",{}},{"USP_DELTA_BAG_MCT",{{"rhs_mag_30Rnd_556x45_M193_Stanag",1,30},{"rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red",1,30}}},"USP_OPSCORE_FASTMTC_MCT_CMSW","USP_SHEMAGH_NECK8_CBR",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_VAR_18_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 19"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_03", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_VQ_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_SHEMAGH_NECK8_CBR","USP_OPSCORE_FASTMTC_MCT_CMSW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_SHEMAGH_NECK8_CBR","USP_OPSCORE_FASTMTC_MCT_CMSW"}; 
		weapons[] = {"Tier1_SR16_Carbine_Mod2_CTR_Black","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_SR16_Carbine_Mod2_CTR_Black","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_SR16_Carbine_Mod2_CTR_Black","Tier1_SRD762_Black","Tier1_URX4_NGAL_M600V_alt_Black_FL","Tier1_Eotech551_3xMag_Riser_Black_Up",{"rhs_mag_30Rnd_556x45_Mk262_PMAG",30},{},"Tier1_AFG_MLOK_Black"},{"rhs_weap_m72a7","","","",{},{},""},{},{"USP_G3C_VQ_MCT",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_RGR",{}},{"USP_DELTA_BAG_MCT",{{"rhs_mag_30Rnd_556x45_M193_Stanag",1,30},{"rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red",1,30}}},"USP_OPSCORE_FASTMTC_MCT_CMSW","USP_SHEMAGH_NECK8_CBR",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_VAR_18_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 19"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_03", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_VQ_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_SHEMAGH_NECK8_CBR","USP_OPSCORE_FASTMTC_MCT_CMSW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_SHEMAGH_NECK8_CBR","USP_OPSCORE_FASTMTC_MCT_CMSW"}; 
		weapons[] = {"Tier1_SR16_Carbine_Mod2_CTR_Black","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_SR16_Carbine_Mod2_CTR_Black","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_SR16_Carbine_Mod2_CTR_Black","Tier1_SRD762_Black","Tier1_URX4_NGAL_M600V_alt_Black_FL","Tier1_Eotech551_3xMag_Riser_Black_Up",{"rhs_mag_30Rnd_556x45_Mk262_PMAG",30},{},"Tier1_AFG_MLOK_Black"},{"rhs_weap_m72a7","","","",{},{},""},{},{"USP_G3C_VQ_MCT",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_RGR",{}},{"USP_DELTA_BAG_MCT",{{"rhs_mag_30Rnd_556x45_M193_Stanag",1,30},{"rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red",1,30}}},"USP_OPSCORE_FASTMTC_MCT_CMSW","USP_SHEMAGH_NECK8_CBR",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_VAR_19_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 20"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male03GRE" ,"G_NATO_default"};
		uniformClass = "U_O_FullGhillie_lsh"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Balaclava_oli_lxWS","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Balaclava_oli_lxWS","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"rhs_weap_m14ebrri","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m14ebrri","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m14ebrri","rhsusf_acc_aac_scarh_silencer","rhsusf_acc_anpeq15side_bk","Tier1_LeupoldM3A_Geissele_Black",{"ACE_20Rnd_762x51_Mag_Tracer_Dim",20},{},"rhsusf_acc_harris_bipod"},{},{},{"U_O_FullGhillie_lsh",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_MCT",{}},{"USP_DELTA_BAG_M81",{}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Balaclava_oli_lxWS",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_VAR_19_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 20"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male03GRE" ,"G_NATO_default"};
		uniformClass = "U_O_FullGhillie_lsh"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Balaclava_oli_lxWS","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Balaclava_oli_lxWS","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"rhs_weap_m14ebrri","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m14ebrri","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m14ebrri","rhsusf_acc_aac_scarh_silencer","rhsusf_acc_anpeq15side_bk","Tier1_LeupoldM3A_Geissele_Black",{"ACE_20Rnd_762x51_Mag_Tracer_Dim",20},{},"rhsusf_acc_harris_bipod"},{},{},{"U_O_FullGhillie_lsh",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_MCT",{}},{"USP_DELTA_BAG_M81",{}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Balaclava_oli_lxWS",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_VAR_19_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 20"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male03GRE" ,"G_NATO_default"};
		uniformClass = "U_O_FullGhillie_lsh"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Balaclava_oli_lxWS","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Balaclava_oli_lxWS","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"rhs_weap_m14ebrri","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m14ebrri","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m14ebrri","rhsusf_acc_aac_scarh_silencer","rhsusf_acc_anpeq15side_bk","Tier1_LeupoldM3A_Geissele_Black",{"ACE_20Rnd_762x51_Mag_Tracer_Dim",20},{},"rhsusf_acc_harris_bipod"},{},{},{"U_O_FullGhillie_lsh",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_MCT",{}},{"USP_DELTA_BAG_M81",{}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Balaclava_oli_lxWS",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_DIVER_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Special (Winter)"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male03GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_KP_OR_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_GPNVG18_WP_GM_TAR_BLK","H_PilotHelmetHeli_O"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_GPNVG18_WP_GM_TAR_BLK","H_PilotHelmetHeli_O"}; 
		weapons[] = {"rhsusf_weap_MP7A2","Tier1_P320","ACE_Vector"}; 
		respawnWeapons[] = {"rhsusf_weap_MP7A2","Tier1_P320","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhsusf_weap_MP7A2","","rhsusf_acc_anpeq15side_bk","Tier1_Eotech551_Riser_Black",{"rhsusf_mag_40Rnd_46x30_AP",40},{},"rhsusf_acc_grip2"},{},{"Tier1_P320","","Tier1_X300U","Tier1_Docter",{"Tier1_17Rnd_9x19_P320_JHP",17},{},""},{"USP_G3C_KP_OR_MCT",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"rhsusf_mag_40Rnd_46x30_AP",1,40}}},{"USP_CRYE_CPC_COMMS_MCT",{{"rhsusf_mag_40Rnd_46x30_AP",24,40}}},{"USP_ZIPON_PACK_CPC_RGR",{{"rhsusf_mag_40Rnd_46x30_AP",22,40}}},"H_PilotHelmetHeli_O","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_GPNVG18_WP_GM_TAR_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_DIVER_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Special (Winter)"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male03GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_KP_OR_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_GPNVG18_WP_GM_TAR_BLK","H_PilotHelmetHeli_O"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_GPNVG18_WP_GM_TAR_BLK","H_PilotHelmetHeli_O"}; 
		weapons[] = {"rhsusf_weap_MP7A2","Tier1_P320","ACE_Vector"}; 
		respawnWeapons[] = {"rhsusf_weap_MP7A2","Tier1_P320","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhsusf_weap_MP7A2","","rhsusf_acc_anpeq15side_bk","Tier1_Eotech551_Riser_Black",{"rhsusf_mag_40Rnd_46x30_AP",40},{},"rhsusf_acc_grip2"},{},{"Tier1_P320","","Tier1_X300U","Tier1_Docter",{"Tier1_17Rnd_9x19_P320_JHP",17},{},""},{"USP_G3C_KP_OR_MCT",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"rhsusf_mag_40Rnd_46x30_AP",1,40}}},{"USP_CRYE_CPC_COMMS_MCT",{{"rhsusf_mag_40Rnd_46x30_AP",24,40}}},{"USP_ZIPON_PACK_CPC_RGR",{{"rhsusf_mag_40Rnd_46x30_AP",22,40}}},"H_PilotHelmetHeli_O","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_GPNVG18_WP_GM_TAR_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_DIVER_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Special (Winter)"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male03GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_KP_OR_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_GPNVG18_WP_GM_TAR_BLK","H_PilotHelmetHeli_O"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_GPNVG18_WP_GM_TAR_BLK","H_PilotHelmetHeli_O"}; 
		weapons[] = {"rhsusf_weap_MP7A2","Tier1_P320","ACE_Vector"}; 
		respawnWeapons[] = {"rhsusf_weap_MP7A2","Tier1_P320","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhsusf_weap_MP7A2","","rhsusf_acc_anpeq15side_bk","Tier1_Eotech551_Riser_Black",{"rhsusf_mag_40Rnd_46x30_AP",40},{},"rhsusf_acc_grip2"},{},{"Tier1_P320","","Tier1_X300U","Tier1_Docter",{"Tier1_17Rnd_9x19_P320_JHP",17},{},""},{"USP_G3C_KP_OR_MCT",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"rhsusf_mag_40Rnd_46x30_AP",1,40}}},{"USP_CRYE_CPC_COMMS_MCT",{{"rhsusf_mag_40Rnd_46x30_AP",24,40}}},{"USP_ZIPON_PACK_CPC_RGR",{{"rhsusf_mag_40Rnd_46x30_AP",22,40}}},"H_PilotHelmetHeli_O","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_GPNVG18_WP_GM_TAR_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_VAR_20_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 21"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_P320_TB","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_P320_TB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_RF2_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"Tier1_P320_TB","","Tier1_X300U","Tier1_Docter",{},{},""},{"USP_G3C_MX_MCW",{}},{"USP_CRYE_CPC_COMMS_MCT",{}},{"USP_ZIPON_PACK_CPC_AT_RF2_MCT",{}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_VAR_20_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 21"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_P320_TB","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_P320_TB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_RF2_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"Tier1_P320_TB","","Tier1_X300U","Tier1_Docter",{},{},""},{"USP_G3C_MX_MCW",{}},{"USP_CRYE_CPC_COMMS_MCT",{}},{"USP_ZIPON_PACK_CPC_AT_RF2_MCT",{}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_VAR_20_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 21"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_P320_TB","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_P320_TB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PACK_CPC_AT_RF2_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"Tier1_P320_TB","","Tier1_X300U","Tier1_Docter",{},{},""},{"USP_G3C_MX_MCW",{}},{"USP_CRYE_CPC_COMMS_MCT",{}},{"USP_ZIPON_PACK_CPC_AT_RF2_MCT",{}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_AR_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Machine Gunner (Winter)"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_03", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_MK46_Mod0","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_MK46_Mod0","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_MK46_Mod0","rhsusf_acc_nt4_black","Tier1_Mk46Mod0_LA5_M600V_Black_FL","rhsusf_acc_su230_mrds",{"rhsusf_200Rnd_556x45_M855_soft_pouch",200},{},"Tier1_SAW_Bipod_2"},{},{},{"USP_G3C_MX_MCW",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"USP_CRYE_CPC_COMMS_MCT",{{"rhsusf_200Rnd_556x45_M855_soft_pouch",4,200}}},{"USP_DELTA_BAG_M81",{{"rhsusf_200Rnd_556x45_M855_soft_pouch",4,200}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_AR_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Machine Gunner (Winter)"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_03", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_MK46_Mod0","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_MK46_Mod0","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_MK46_Mod0","rhsusf_acc_nt4_black","Tier1_Mk46Mod0_LA5_M600V_Black_FL","rhsusf_acc_su230_mrds",{"rhsusf_200Rnd_556x45_M855_soft_pouch",200},{},"Tier1_SAW_Bipod_2"},{},{},{"USP_G3C_MX_MCW",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"USP_CRYE_CPC_COMMS_MCT",{{"rhsusf_200Rnd_556x45_M855_soft_pouch",4,200}}},{"USP_DELTA_BAG_M81",{{"rhsusf_200Rnd_556x45_M855_soft_pouch",4,200}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_AR_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Machine Gunner (Winter)"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_03", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_MK46_Mod0","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_MK46_Mod0","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_MK46_Mod0","rhsusf_acc_nt4_black","Tier1_Mk46Mod0_LA5_M600V_Black_FL","rhsusf_acc_su230_mrds",{"rhsusf_200Rnd_556x45_M855_soft_pouch",200},{},"Tier1_SAW_Bipod_2"},{},{},{"USP_G3C_MX_MCW",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"USP_CRYE_CPC_COMMS_MCT",{{"rhsusf_200Rnd_556x45_M855_soft_pouch",4,200}}},{"USP_DELTA_BAG_M81",{{"rhsusf_200Rnd_556x45_M855_soft_pouch",4,200}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_Rifleman_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Rifleman (Winter)"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male01GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_RS_CU_KP_MX_VQ_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_HK416D145_CTR","Tier1_P320_TB","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_HK416D145_CTR","Tier1_P320_TB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_HK416D145_CTR","","Tier1_416_LA5_Side","rhsusf_acc_su230a_mrds",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},"Tier1_GripPod_Black"},{},{"Tier1_P320_TB","Tier1_Octane9","Tier1_DBALPL","Tier1_MRDS",{"Tier1_21Rnd_9x19_P320_FMJ",21},{},""},{"USP_G3C_RS_CU_KP_MX_VQ_MCT",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",1,30}}},{"USP_CRYE_CPC_COMMS_MCT",{{"rhs_mag_30Rnd_556x45_Mk318_Stanag",23,30}}},{"USP_DELTA_BAG_M81",{{"rhs_mag_30Rnd_556x45_Mk318_Stanag",21,30}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_Rifleman_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Rifleman (Winter)"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male01GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_RS_CU_KP_MX_VQ_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_HK416D145_CTR","Tier1_P320_TB","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_HK416D145_CTR","Tier1_P320_TB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_HK416D145_CTR","","Tier1_416_LA5_Side","rhsusf_acc_su230a_mrds",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},"Tier1_GripPod_Black"},{},{"Tier1_P320_TB","Tier1_Octane9","Tier1_DBALPL","Tier1_MRDS",{"Tier1_21Rnd_9x19_P320_FMJ",21},{},""},{"USP_G3C_RS_CU_KP_MX_VQ_MCT",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",1,30}}},{"USP_CRYE_CPC_COMMS_MCT",{{"rhs_mag_30Rnd_556x45_Mk318_Stanag",23,30}}},{"USP_DELTA_BAG_M81",{{"rhs_mag_30Rnd_556x45_Mk318_Stanag",21,30}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_Rifleman_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Rifleman (Winter)"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male01GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_RS_CU_KP_MX_VQ_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_HK416D145_CTR","Tier1_P320_TB","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_HK416D145_CTR","Tier1_P320_TB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_HK416D145_CTR","","Tier1_416_LA5_Side","rhsusf_acc_su230a_mrds",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},"Tier1_GripPod_Black"},{},{"Tier1_P320_TB","Tier1_Octane9","Tier1_DBALPL","Tier1_MRDS",{"Tier1_21Rnd_9x19_P320_FMJ",21},{},""},{"USP_G3C_RS_CU_KP_MX_VQ_MCT",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",1,30}}},{"USP_CRYE_CPC_COMMS_MCT",{{"rhs_mag_30Rnd_556x45_Mk318_Stanag",23,30}}},{"USP_DELTA_BAG_M81",{{"rhs_mag_30Rnd_556x45_Mk318_Stanag",21,30}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_GL_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Grenadier (Winter)"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_03", "Male04GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_CS_KP_OR_VQ_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_HK416D10_CTR","rhs_weap_M320","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_HK416D10_CTR","rhs_weap_M320","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_HK416D10_CTR","","Tier1_416_LA5_M600V_alt_Black","rhsusf_acc_su230a",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},"Tier1_GripPod_Black"},{},{"rhs_weap_M320","","","",{"rhs_mag_M441_HE",1},{},""},{"USP_G3C_CS_KP_OR_VQ_MCT",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",1,30}}},{"USP_CRYE_CPC_COMMS_MCT",{{"1Rnd_HE_Grenade_shell",23,1},{"1Rnd_Smoke_Grenade_shell",13,1},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",8,30}}},{"USP_DELTA_BAG_M81",{{"1Rnd_HE_Grenade_shell",21,1},{"1Rnd_Smoke_Grenade_shell",12,1},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",7,30}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_GL_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Grenadier (Winter)"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_03", "Male04GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_CS_KP_OR_VQ_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_HK416D10_CTR","rhs_weap_M320","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_HK416D10_CTR","rhs_weap_M320","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_HK416D10_CTR","","Tier1_416_LA5_M600V_alt_Black","rhsusf_acc_su230a",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},"Tier1_GripPod_Black"},{},{"rhs_weap_M320","","","",{"rhs_mag_M441_HE",1},{},""},{"USP_G3C_CS_KP_OR_VQ_MCT",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",1,30}}},{"USP_CRYE_CPC_COMMS_MCT",{{"1Rnd_HE_Grenade_shell",23,1},{"1Rnd_Smoke_Grenade_shell",13,1},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",8,30}}},{"USP_DELTA_BAG_M81",{{"1Rnd_HE_Grenade_shell",21,1},{"1Rnd_Smoke_Grenade_shell",12,1},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",7,30}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_GL_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Grenadier (Winter)"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_03", "Male04GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_CS_KP_OR_VQ_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_HK416D10_CTR","rhs_weap_M320","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_HK416D10_CTR","rhs_weap_M320","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_HK416D10_CTR","","Tier1_416_LA5_M600V_alt_Black","rhsusf_acc_su230a",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},"Tier1_GripPod_Black"},{},{"rhs_weap_M320","","","",{"rhs_mag_M441_HE",1},{},""},{"USP_G3C_CS_KP_OR_VQ_MCT",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",1,30}}},{"USP_CRYE_CPC_COMMS_MCT",{{"1Rnd_HE_Grenade_shell",23,1},{"1Rnd_Smoke_Grenade_shell",13,1},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",8,30}}},{"USP_DELTA_BAG_M81",{{"1Rnd_HE_Grenade_shell",21,1},{"1Rnd_Smoke_Grenade_shell",12,1},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",7,30}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_Medic_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Doctor (Winter)"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_03", "Male01GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_CS_CU_KP_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","USP_SHEMAGH_NECK5_RGR","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","USP_SHEMAGH_NECK5_RGR","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_HK416D10_CTR","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_HK416D10_CTR","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_HK416D10_CTR","","Tier1_416_LA5_Side","rhsusf_acc_su230a_mrds",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},"Tier1_GripPod_Black"},{},{},{"USP_G3C_CS_CU_KP_MCT",{{"kat_accuvac",1},{"kat_stethoscope",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"USP_CRYE_CPC_COMMS_MCT",{{"rhs_mag_30Rnd_556x45_Mk318_Stanag",23,30}}},{"USP_DELTA_BAG_M81",{{"ACE_adenosine",2},{"ACE_elasticBandage",15},{"ACE_packingBandage",15},{"ACE_quikclot",15},{"ACE_morphine",4},{"ACE_epinephrine",4},{"ACE_plasmaIV",3},{"ACE_plasmaIV_500",6},{"ACE_splint",2},{"ACE_suture",12},{"ACE_tourniquet",4},{"kat_larynx",6},{"kat_naloxone",2},{"kat_IO_FAST",7},{"kat_ncdKit",2},{"kat_aatKit",12},{"kat_chestSeal",6},{"kat_Pulseoximeter",3},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",1,30}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","USP_SHEMAGH_NECK5_RGR",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_Medic_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Doctor (Winter)"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_03", "Male01GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_CS_CU_KP_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","USP_SHEMAGH_NECK5_RGR","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","USP_SHEMAGH_NECK5_RGR","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_HK416D10_CTR","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_HK416D10_CTR","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_HK416D10_CTR","","Tier1_416_LA5_Side","rhsusf_acc_su230a_mrds",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},"Tier1_GripPod_Black"},{},{},{"USP_G3C_CS_CU_KP_MCT",{{"kat_accuvac",1},{"kat_stethoscope",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"USP_CRYE_CPC_COMMS_MCT",{{"rhs_mag_30Rnd_556x45_Mk318_Stanag",23,30}}},{"USP_DELTA_BAG_M81",{{"ACE_adenosine",2},{"ACE_elasticBandage",15},{"ACE_packingBandage",15},{"ACE_quikclot",15},{"ACE_morphine",4},{"ACE_epinephrine",4},{"ACE_plasmaIV",3},{"ACE_plasmaIV_500",6},{"ACE_splint",2},{"ACE_suture",12},{"ACE_tourniquet",4},{"kat_larynx",6},{"kat_naloxone",2},{"kat_IO_FAST",7},{"kat_ncdKit",2},{"kat_aatKit",12},{"kat_chestSeal",6},{"kat_Pulseoximeter",3},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",1,30}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","USP_SHEMAGH_NECK5_RGR",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_Medic_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Doctor (Winter)"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_03", "Male01GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_CS_CU_KP_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","USP_SHEMAGH_NECK5_RGR","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","USP_SHEMAGH_NECK5_RGR","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_HK416D10_CTR","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_HK416D10_CTR","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_HK416D10_CTR","","Tier1_416_LA5_Side","rhsusf_acc_su230a_mrds",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},"Tier1_GripPod_Black"},{},{},{"USP_G3C_CS_CU_KP_MCT",{{"kat_accuvac",1},{"kat_stethoscope",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"USP_CRYE_CPC_COMMS_MCT",{{"rhs_mag_30Rnd_556x45_Mk318_Stanag",23,30}}},{"USP_DELTA_BAG_M81",{{"ACE_adenosine",2},{"ACE_elasticBandage",15},{"ACE_packingBandage",15},{"ACE_quikclot",15},{"ACE_morphine",4},{"ACE_epinephrine",4},{"ACE_plasmaIV",3},{"ACE_plasmaIV_500",6},{"ACE_splint",2},{"ACE_suture",12},{"ACE_tourniquet",4},{"kat_larynx",6},{"kat_naloxone",2},{"kat_IO_FAST",7},{"kat_ncdKit",2},{"kat_aatKit",12},{"kat_chestSeal",6},{"kat_Pulseoximeter",3},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",1,30}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","USP_SHEMAGH_NECK5_RGR",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_SNP_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Sniper (Winter)"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male01GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_CU_KP_OR_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Balaclava_oli_lxWS","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Balaclava_oli_lxWS","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"rhs_weap_m14ebrri","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m14ebrri","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m14ebrri","rhsusf_acc_aac_scarh_silencer","rhsusf_acc_anpeq15side_bk","Tier1_LeupoldM3A_Geissele_Black",{"ACE_20Rnd_762x51_Mag_Tracer_Dim",20},{},"rhsusf_acc_harris_bipod"},{},{},{"USP_G3C_CU_KP_OR_MCT",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"ACE_20Rnd_762x51_Mag_Tracer_Dim",1,20}}},{"USP_CRYE_CPC_COMMS_MCT",{{"ACE_20Rnd_762x51_Mag_Tracer_Dim",18,20}}},{"USP_DELTA_BAG_M81",{{"ACE_20Rnd_762x51_Mag_Tracer_Dim",16,20}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Balaclava_oli_lxWS",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_SNP_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Sniper (Winter)"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male01GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_CU_KP_OR_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Balaclava_oli_lxWS","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Balaclava_oli_lxWS","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"rhs_weap_m14ebrri","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m14ebrri","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m14ebrri","rhsusf_acc_aac_scarh_silencer","rhsusf_acc_anpeq15side_bk","Tier1_LeupoldM3A_Geissele_Black",{"ACE_20Rnd_762x51_Mag_Tracer_Dim",20},{},"rhsusf_acc_harris_bipod"},{},{},{"USP_G3C_CU_KP_OR_MCT",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"ACE_20Rnd_762x51_Mag_Tracer_Dim",1,20}}},{"USP_CRYE_CPC_COMMS_MCT",{{"ACE_20Rnd_762x51_Mag_Tracer_Dim",18,20}}},{"USP_DELTA_BAG_M81",{{"ACE_20Rnd_762x51_Mag_Tracer_Dim",16,20}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Balaclava_oli_lxWS",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_SNP_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Sniper (Winter)"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male01GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_CU_KP_OR_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Balaclava_oli_lxWS","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Balaclava_oli_lxWS","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"rhs_weap_m14ebrri","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m14ebrri","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m14ebrri","rhsusf_acc_aac_scarh_silencer","rhsusf_acc_anpeq15side_bk","Tier1_LeupoldM3A_Geissele_Black",{"ACE_20Rnd_762x51_Mag_Tracer_Dim",20},{},"rhsusf_acc_harris_bipod"},{},{},{"USP_G3C_CU_KP_OR_MCT",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"ACE_20Rnd_762x51_Mag_Tracer_Dim",1,20}}},{"USP_CRYE_CPC_COMMS_MCT",{{"ACE_20Rnd_762x51_Mag_Tracer_Dim",18,20}}},{"USP_DELTA_BAG_M81",{{"ACE_20Rnd_762x51_Mag_Tracer_Dim",16,20}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Balaclava_oli_lxWS",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_VAR_21_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 22"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_KP_MX_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CTW"}; 
		weapons[] = {"Tier1_SIG_MCX_115_Virtus_300BLK_Black","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_SIG_MCX_115_Virtus_300BLK_Black","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_SIG_MCX_115_Virtus_300BLK_Black","Tier1_SOCOM556_2_Mini_Black","Tier1_MCX_LA5_Side","rhsusf_acc_ACOG_RMR",{"Tier1_30Rnd_762x35_300BLK_RNBT_PMAG",30},{},"Tier1_GripPod_MLOK_Black"},{"rhs_weap_m72a7","","","",{},{},""},{},{"USP_G3C_KP_MX_MCT",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_RGR",{}},{"USP_DELTA_BAG_MCT",{}},"USP_OPSCORE_FASTMTC_MCT_CTW","USP_BALACLAVA_ADV3_MCT",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_VAR_21_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 22"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_KP_MX_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CTW"}; 
		weapons[] = {"Tier1_SIG_MCX_115_Virtus_300BLK_Black","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_SIG_MCX_115_Virtus_300BLK_Black","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_SIG_MCX_115_Virtus_300BLK_Black","Tier1_SOCOM556_2_Mini_Black","Tier1_MCX_LA5_Side","rhsusf_acc_ACOG_RMR",{"Tier1_30Rnd_762x35_300BLK_RNBT_PMAG",30},{},"Tier1_GripPod_MLOK_Black"},{"rhs_weap_m72a7","","","",{},{},""},{},{"USP_G3C_KP_MX_MCT",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_RGR",{}},{"USP_DELTA_BAG_MCT",{}},"USP_OPSCORE_FASTMTC_MCT_CTW","USP_BALACLAVA_ADV3_MCT",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_VAR_21_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 22"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_KP_MX_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CTW"}; 
		weapons[] = {"Tier1_SIG_MCX_115_Virtus_300BLK_Black","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_SIG_MCX_115_Virtus_300BLK_Black","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_SIG_MCX_115_Virtus_300BLK_Black","Tier1_SOCOM556_2_Mini_Black","Tier1_MCX_LA5_Side","rhsusf_acc_ACOG_RMR",{"Tier1_30Rnd_762x35_300BLK_RNBT_PMAG",30},{},"Tier1_GripPod_MLOK_Black"},{"rhs_weap_m72a7","","","",{},{},""},{},{"USP_G3C_KP_MX_MCT",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_RGR",{}},{"USP_DELTA_BAG_MCT",{}},"USP_OPSCORE_FASTMTC_MCT_CTW","USP_BALACLAVA_ADV3_MCT",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_VAR_22_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 23"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_03", "Male03GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_MK48_Mod0","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_MK48_Mod0","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_MK48_Mod0","Tier1_SOCOM762MG_Black","Tier1_Mk48Mod0_LA5_M600V_FL","Tier1_Elcan_156_C2_Docter_Black",{"Tier1_250Rnd_762x51_Belt_M80",250},{},"Tier1_SAW_Bipod_2"},{},{},{"USP_G3C_MX_MCT",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_RGR",{}},{"USP_DELTA_BAG_MCT",{{"Tier1_250Rnd_762x51_Belt_M61_AP",1,250},{"Tier1_250Rnd_762x51_Belt_M62_Tracer",1,250}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_VAR_22_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 23"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_03", "Male03GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_MK48_Mod0","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_MK48_Mod0","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_MK48_Mod0","Tier1_SOCOM762MG_Black","Tier1_Mk48Mod0_LA5_M600V_FL","Tier1_Elcan_156_C2_Docter_Black",{"Tier1_250Rnd_762x51_Belt_M80",250},{},"Tier1_SAW_Bipod_2"},{},{},{"USP_G3C_MX_MCT",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_RGR",{}},{"USP_DELTA_BAG_MCT",{{"Tier1_250Rnd_762x51_Belt_M61_AP",1,250},{"Tier1_250Rnd_762x51_Belt_M62_Tracer",1,250}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_VAR_22_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 23"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_03", "Male03GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_MK48_Mod0","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_MK48_Mod0","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_MK48_Mod0","Tier1_SOCOM762MG_Black","Tier1_Mk48Mod0_LA5_M600V_FL","Tier1_Elcan_156_C2_Docter_Black",{"Tier1_250Rnd_762x51_Belt_M80",250},{},"Tier1_SAW_Bipod_2"},{},{},{"USP_G3C_MX_MCT",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_RGR",{}},{"USP_DELTA_BAG_MCT",{{"Tier1_250Rnd_762x51_Belt_M61_AP",1,250},{"Tier1_250Rnd_762x51_Belt_M62_Tracer",1,250}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_VAR_23_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 24"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_KP_MX_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"rhs_weap_hk416d145_m320","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_hk416d145_m320","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d145_m320","Tier1_KAC_556_QDC_CQB_Black","rhsusf_acc_anpeq15_bk_top","Tier1_EXPS3_0_G33_Black_Up",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{"1Rnd_HE_Grenade_shell",1},""},{"rhs_weap_m72a7","","","",{},{},""},{},{"USP_G3C_KP_MX_MCT",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_RGR",{{"rhs_mag_M397_HET",1,1}}},{"USP_DELTA_BAG_MCT",{{"ACE_HuntIR_monitor",1},{"ACE_CTS9",1,1},{"rhs_mag_m18_green",1,1},{"rhs_mag_m18_red",1,1},{"SmokeShell",1,1},{"rhs_mag_mk84",1,1},{"rhs_mag_m67",1,1},{"rhs_mag_m18_yellow",1,1},{"Chemlight_blue",1,1},{"ACE_FlareTripMine_Mag",1,1},{"DemoCharge_Remote_Mag",1,1},{"rhsusf_m112_mag",1,1},{"SLAMDirectionalMine_Wire_Mag",1,1},{"rhs_mag_M397_HET",1,1},{"rhs_mag_M433_HEDP",1,1}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","USP_BALACLAVA_ADV3_MCT",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_VAR_23_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 24"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_KP_MX_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"rhs_weap_hk416d145_m320","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_hk416d145_m320","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d145_m320","Tier1_KAC_556_QDC_CQB_Black","rhsusf_acc_anpeq15_bk_top","Tier1_EXPS3_0_G33_Black_Up",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{"1Rnd_HE_Grenade_shell",1},""},{"rhs_weap_m72a7","","","",{},{},""},{},{"USP_G3C_KP_MX_MCT",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_RGR",{{"rhs_mag_M397_HET",1,1}}},{"USP_DELTA_BAG_MCT",{{"ACE_HuntIR_monitor",1},{"ACE_CTS9",1,1},{"rhs_mag_m18_green",1,1},{"rhs_mag_m18_red",1,1},{"SmokeShell",1,1},{"rhs_mag_mk84",1,1},{"rhs_mag_m67",1,1},{"rhs_mag_m18_yellow",1,1},{"Chemlight_blue",1,1},{"ACE_FlareTripMine_Mag",1,1},{"DemoCharge_Remote_Mag",1,1},{"rhsusf_m112_mag",1,1},{"SLAMDirectionalMine_Wire_Mag",1,1},{"rhs_mag_M397_HET",1,1},{"rhs_mag_M433_HEDP",1,1}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","USP_BALACLAVA_ADV3_MCT",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_VAR_23_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 24"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_KP_MX_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"rhs_weap_hk416d145_m320","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_hk416d145_m320","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d145_m320","Tier1_KAC_556_QDC_CQB_Black","rhsusf_acc_anpeq15_bk_top","Tier1_EXPS3_0_G33_Black_Up",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{"1Rnd_HE_Grenade_shell",1},""},{"rhs_weap_m72a7","","","",{},{},""},{},{"USP_G3C_KP_MX_MCT",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_RGR",{{"rhs_mag_M397_HET",1,1}}},{"USP_DELTA_BAG_MCT",{{"ACE_HuntIR_monitor",1},{"ACE_CTS9",1,1},{"rhs_mag_m18_green",1,1},{"rhs_mag_m18_red",1,1},{"SmokeShell",1,1},{"rhs_mag_mk84",1,1},{"rhs_mag_m67",1,1},{"rhs_mag_m18_yellow",1,1},{"Chemlight_blue",1,1},{"ACE_FlareTripMine_Mag",1,1},{"DemoCharge_Remote_Mag",1,1},{"rhsusf_m112_mag",1,1},{"SLAMDirectionalMine_Wire_Mag",1,1},{"rhs_mag_M397_HET",1,1},{"rhs_mag_M433_HEDP",1,1}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","USP_BALACLAVA_ADV3_MCT",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_VAR_24_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 25"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male01GRE" ,"G_NATO_default"};
		uniformClass = "U_B_T_Sniper_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"srifle_LRR_F","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"srifle_LRR_F","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"srifle_LRR_F","","","rhsusf_acc_nxs_5522x56_md_sun",{"ACE_7Rnd_408_305gr_Mag",7},{},""},{"rhs_weap_m72a7","","","",{},{},""},{},{"U_B_T_Sniper_F",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_RGR",{}},{"USP_DELTA_BAG_MCT",{}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","USP_BALACLAVA_ADV3_MCT",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_VAR_24_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 25"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male01GRE" ,"G_NATO_default"};
		uniformClass = "U_B_T_Sniper_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"srifle_LRR_F","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"srifle_LRR_F","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"srifle_LRR_F","","","rhsusf_acc_nxs_5522x56_md_sun",{"ACE_7Rnd_408_305gr_Mag",7},{},""},{"rhs_weap_m72a7","","","",{},{},""},{},{"U_B_T_Sniper_F",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_RGR",{}},{"USP_DELTA_BAG_MCT",{}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","USP_BALACLAVA_ADV3_MCT",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_VAR_24_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 25"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male01GRE" ,"G_NATO_default"};
		uniformClass = "U_B_T_Sniper_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_BALACLAVA_ADV3_MCT","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"srifle_LRR_F","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"srifle_LRR_F","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"srifle_LRR_F","","","rhsusf_acc_nxs_5522x56_md_sun",{"ACE_7Rnd_408_305gr_Mag",7},{},""},{"rhs_weap_m72a7","","","",{},{},""},{},{"U_B_T_Sniper_F",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_RGR",{}},{"USP_DELTA_BAG_MCT",{}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","USP_BALACLAVA_ADV3_MCT",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_RTO_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Anti-Tank (Winter)"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_03", "Male01GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_HK416D10_CTR","rhs_weap_fgm148","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_HK416D10_CTR","rhs_weap_fgm148","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_HK416D10_CTR","","Tier1_416_LA5_Side","rhsusf_acc_su230_mrds",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},"Tier1_GripPod_Black"},{"rhs_weap_fgm148","","","",{"rhs_fgm148_magazine_AT",1},{},""},{},{"USP_G3C_MX_MCW",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",1,30}}},{"USP_CRYE_CPC_COMMS_MCT",{{"rhs_mag_30Rnd_556x45_Mk318_Stanag",23,30}}},{"USP_45L_RUCKSACK_GRN",{{"rhs_mag_30Rnd_556x45_Mk318_Stanag",6,30}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_RTO_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Anti-Tank (Winter)"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_03", "Male01GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_HK416D10_CTR","rhs_weap_fgm148","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_HK416D10_CTR","rhs_weap_fgm148","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_HK416D10_CTR","","Tier1_416_LA5_Side","rhsusf_acc_su230_mrds",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},"Tier1_GripPod_Black"},{"rhs_weap_fgm148","","","",{"rhs_fgm148_magazine_AT",1},{},""},{},{"USP_G3C_MX_MCW",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",1,30}}},{"USP_CRYE_CPC_COMMS_MCT",{{"rhs_mag_30Rnd_556x45_Mk318_Stanag",23,30}}},{"USP_45L_RUCKSACK_GRN",{{"rhs_mag_30Rnd_556x45_Mk318_Stanag",6,30}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_RTO_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Anti-Tank (Winter)"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_03", "Male01GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_HK416D10_CTR","rhs_weap_fgm148","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_HK416D10_CTR","rhs_weap_fgm148","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_HK416D10_CTR","","Tier1_416_LA5_Side","rhsusf_acc_su230_mrds",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},"Tier1_GripPod_Black"},{"rhs_weap_fgm148","","","",{"rhs_fgm148_magazine_AT",1},{},""},{},{"USP_G3C_MX_MCW",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",1,30}}},{"USP_CRYE_CPC_COMMS_MCT",{{"rhs_mag_30Rnd_556x45_Mk318_Stanag",23,30}}},{"USP_45L_RUCKSACK_GRN",{{"rhs_mag_30Rnd_556x45_Mk318_Stanag",6,30}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_VAR_25_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 26"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male03GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_M110k5_ACS_65mm","rhs_weap_fgm148","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_M110k5_ACS_65mm","rhs_weap_fgm148","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_M110k5_ACS_65mm","Tier1_KAC_762_DSR","","Tier1_LeupoldM3A_Geissele_Docter_Tan",{"Tier1_20Rnd_65x48_Creedmoor_SR25_Mag",20},{},""},{"rhs_weap_fgm148","","","",{"rhs_fgm148_magazine_AT",1},{},""},{},{"USP_G3C_MX_MCW",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_MCT",{}},{"USP_45L_RUCKSACK_GRN",{{"rhs_fgm148_magazine_AT",1,1},{"Titan_AA",1,1}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_VAR_25_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 26"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male03GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_M110k5_ACS_65mm","rhs_weap_fgm148","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_M110k5_ACS_65mm","rhs_weap_fgm148","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_M110k5_ACS_65mm","Tier1_KAC_762_DSR","","Tier1_LeupoldM3A_Geissele_Docter_Tan",{"Tier1_20Rnd_65x48_Creedmoor_SR25_Mag",20},{},""},{"rhs_weap_fgm148","","","",{"rhs_fgm148_magazine_AT",1},{},""},{},{"USP_G3C_MX_MCW",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_MCT",{}},{"USP_45L_RUCKSACK_GRN",{{"rhs_fgm148_magazine_AT",1,1},{"Titan_AA",1,1}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_VAR_25_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 26"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male03GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_M110k5_ACS_65mm","rhs_weap_fgm148","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_M110k5_ACS_65mm","rhs_weap_fgm148","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_M110k5_ACS_65mm","Tier1_KAC_762_DSR","","Tier1_LeupoldM3A_Geissele_Docter_Tan",{"Tier1_20Rnd_65x48_Creedmoor_SR25_Mag",20},{},""},{"rhs_weap_fgm148","","","",{"rhs_fgm148_magazine_AT",1},{},""},{},{"USP_G3C_MX_MCW",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_MCT",{}},{"USP_45L_RUCKSACK_GRN",{{"rhs_fgm148_magazine_AT",1,1},{"Titan_AA",1,1}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_VAR_26_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 27"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS14_WP_TAR","G_Bandanna_oli","USP_BASEBALL_CAP_MCT"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS14_WP_TAR","G_Bandanna_oli","USP_BASEBALL_CAP_MCT"}; 
		weapons[] = {"Tier1_HK416D10_CTR","rhs_weap_fgm148","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_HK416D10_CTR","rhs_weap_fgm148","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_HK416D10_CTR","","Tier1_416_LA5_Side","rhsusf_acc_ACOG_RMR",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},"Tier1_GripPod_Black"},{"rhs_weap_fgm148","","","",{"rhs_fgm148_magazine_AT",1},{},""},{},{"USP_G3C_MX_MCW",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_MCT",{}},{"USP_45L_RUCKSACK_GRN",{}},"USP_BASEBALL_CAP_MCT","G_Bandanna_oli",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS14_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_VAR_26_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 27"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS14_WP_TAR","G_Bandanna_oli","USP_BASEBALL_CAP_MCT"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS14_WP_TAR","G_Bandanna_oli","USP_BASEBALL_CAP_MCT"}; 
		weapons[] = {"Tier1_HK416D10_CTR","rhs_weap_fgm148","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_HK416D10_CTR","rhs_weap_fgm148","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_HK416D10_CTR","","Tier1_416_LA5_Side","rhsusf_acc_ACOG_RMR",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},"Tier1_GripPod_Black"},{"rhs_weap_fgm148","","","",{"rhs_fgm148_magazine_AT",1},{},""},{},{"USP_G3C_MX_MCW",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_MCT",{}},{"USP_45L_RUCKSACK_GRN",{}},"USP_BASEBALL_CAP_MCT","G_Bandanna_oli",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS14_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_VAR_26_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 27"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS14_WP_TAR","G_Bandanna_oli","USP_BASEBALL_CAP_MCT"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS14_WP_TAR","G_Bandanna_oli","USP_BASEBALL_CAP_MCT"}; 
		weapons[] = {"Tier1_HK416D10_CTR","rhs_weap_fgm148","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_HK416D10_CTR","rhs_weap_fgm148","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_45L_RUCKSACK_GRN";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_HK416D10_CTR","","Tier1_416_LA5_Side","rhsusf_acc_ACOG_RMR",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},"Tier1_GripPod_Black"},{"rhs_weap_fgm148","","","",{"rhs_fgm148_magazine_AT",1},{},""},{},{"USP_G3C_MX_MCW",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_MCT",{}},{"USP_45L_RUCKSACK_GRN",{}},"USP_BASEBALL_CAP_MCT","G_Bandanna_oli",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS14_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_VAR_27_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 28"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male01GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_MK46_Mod0_Para","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_MK46_Mod0_Para","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_MK46_Mod0_Para","rhsusf_acc_nt4_black","Tier1_Mk46Mod0_LA5_M600V_Black_FL","rhsusf_acc_su230",{"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch",200},{},"Tier1_SAW_Bipod_2"},{},{},{"USP_G3C_MX_MCW",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_MCT",{}},{"USP_DELTA_BAG_M81",{{"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch",1,200},{"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_coyote",1,200},{"rhsusf_200Rnd_556x45_M855_soft_pouch_ucp",1,200},{"rhsusf_200Rnd_556x45_M855_soft_pouch_coyote",1,200}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_VAR_27_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 28"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male01GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_MK46_Mod0_Para","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_MK46_Mod0_Para","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_MK46_Mod0_Para","rhsusf_acc_nt4_black","Tier1_Mk46Mod0_LA5_M600V_Black_FL","rhsusf_acc_su230",{"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch",200},{},"Tier1_SAW_Bipod_2"},{},{},{"USP_G3C_MX_MCW",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_MCT",{}},{"USP_DELTA_BAG_M81",{{"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch",1,200},{"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_coyote",1,200},{"rhsusf_200Rnd_556x45_M855_soft_pouch_ucp",1,200},{"rhsusf_200Rnd_556x45_M855_soft_pouch_coyote",1,200}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_VAR_27_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 28"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male01GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_MX_MCW"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Bandanna_beast","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"Tier1_MK46_Mod0_Para","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_MK46_Mod0_Para","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_MK46_Mod0_Para","rhsusf_acc_nt4_black","Tier1_Mk46Mod0_LA5_M600V_Black_FL","rhsusf_acc_su230",{"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch",200},{},"Tier1_SAW_Bipod_2"},{},{},{"USP_G3C_MX_MCW",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_MCT",{}},{"USP_DELTA_BAG_M81",{{"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch",1,200},{"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_coyote",1,200},{"rhsusf_200Rnd_556x45_M855_soft_pouch_ucp",1,200},{"rhsusf_200Rnd_556x45_M855_soft_pouch_coyote",1,200}}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Bandanna_beast",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_VAR_28_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 29"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male03GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_VQ_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_SHEMAGH_NECK8_CBR","USP_OPSCORE_FASTMTC_MCT_CMSW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_SHEMAGH_NECK8_CBR","USP_OPSCORE_FASTMTC_MCT_CMSW"}; 
		weapons[] = {"Tier1_SR16_Carbine_Mod2_CTR_Black","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_SR16_Carbine_Mod2_CTR_Black","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_SR16_Carbine_Mod2_CTR_Black","Tier1_SRD762_Black","Tier1_URX4_NGAL_M600V_alt_Black_FL","Tier1_Eotech551_3xMag_Riser_Black_Up",{"rhs_mag_30Rnd_556x45_Mk262_PMAG",30},{},"Tier1_AFG_MLOK_Black"},{"rhs_weap_m72a7","","","",{},{},""},{},{"USP_G3C_VQ_MCT",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_RGR",{}},{"USP_DELTA_BAG_MCT",{{"rhs_mag_30Rnd_556x45_M193_Stanag",1,30},{"rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red",1,30}}},"USP_OPSCORE_FASTMTC_MCT_CMSW","USP_SHEMAGH_NECK8_CBR",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_VAR_28_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 29"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male03GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_VQ_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_SHEMAGH_NECK8_CBR","USP_OPSCORE_FASTMTC_MCT_CMSW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_SHEMAGH_NECK8_CBR","USP_OPSCORE_FASTMTC_MCT_CMSW"}; 
		weapons[] = {"Tier1_SR16_Carbine_Mod2_CTR_Black","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_SR16_Carbine_Mod2_CTR_Black","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_SR16_Carbine_Mod2_CTR_Black","Tier1_SRD762_Black","Tier1_URX4_NGAL_M600V_alt_Black_FL","Tier1_Eotech551_3xMag_Riser_Black_Up",{"rhs_mag_30Rnd_556x45_Mk262_PMAG",30},{},"Tier1_AFG_MLOK_Black"},{"rhs_weap_m72a7","","","",{},{},""},{},{"USP_G3C_VQ_MCT",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_RGR",{}},{"USP_DELTA_BAG_MCT",{{"rhs_mag_30Rnd_556x45_M193_Stanag",1,30},{"rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red",1,30}}},"USP_OPSCORE_FASTMTC_MCT_CMSW","USP_SHEMAGH_NECK8_CBR",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_VAR_28_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 29"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male03GRE" ,"G_NATO_default"};
		uniformClass = "USP_G3C_VQ_MCT"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_SHEMAGH_NECK8_CBR","USP_OPSCORE_FASTMTC_MCT_CMSW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","USP_PVS15_WP_TAR","USP_SHEMAGH_NECK8_CBR","USP_OPSCORE_FASTMTC_MCT_CMSW"}; 
		weapons[] = {"Tier1_SR16_Carbine_Mod2_CTR_Black","rhs_weap_m72a7","ACE_Vector"}; 
		respawnWeapons[] = {"Tier1_SR16_Carbine_Mod2_CTR_Black","rhs_weap_m72a7","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"Tier1_SR16_Carbine_Mod2_CTR_Black","Tier1_SRD762_Black","Tier1_URX4_NGAL_M600V_alt_Black_FL","Tier1_Eotech551_3xMag_Riser_Black_Up",{"rhs_mag_30Rnd_556x45_Mk262_PMAG",30},{},"Tier1_AFG_MLOK_Black"},{"rhs_weap_m72a7","","","",{},{},""},{},{"USP_G3C_VQ_MCT",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_RGR",{}},{"USP_DELTA_BAG_MCT",{{"rhs_mag_30Rnd_556x45_M193_Stanag",1,30},{"rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red",1,30}}},"USP_OPSCORE_FASTMTC_MCT_CMSW","USP_SHEMAGH_NECK8_CBR",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_JPN_SAKUSENGUN_2028_VAR_29_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 30"; 
		faction = "BS_O_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male02GRE" ,"G_NATO_default"};
		uniformClass = "U_O_FullGhillie_lsh"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Balaclava_oli_lxWS","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Balaclava_oli_lxWS","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"rhs_weap_m14ebrri","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m14ebrri","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m14ebrri","rhsusf_acc_aac_scarh_silencer","rhsusf_acc_anpeq15side_bk","Tier1_LeupoldM3A_Geissele_Black",{"ACE_20Rnd_762x51_Mag_Tracer_Dim",20},{},"rhsusf_acc_harris_bipod"},{},{},{"U_O_FullGhillie_lsh",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_MCT",{}},{"USP_DELTA_BAG_M81",{}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Balaclava_oli_lxWS",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_JPN_SAKUSENGUN_2028_VAR_29_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 30"; 
		faction = "BS_B_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male02GRE" ,"G_NATO_default"};
		uniformClass = "U_O_FullGhillie_lsh"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Balaclava_oli_lxWS","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Balaclava_oli_lxWS","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"rhs_weap_m14ebrri","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m14ebrri","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m14ebrri","rhsusf_acc_aac_scarh_silencer","rhsusf_acc_anpeq15side_bk","Tier1_LeupoldM3A_Geissele_Black",{"ACE_20Rnd_762x51_Mag_Tracer_Dim",20},{},"rhsusf_acc_harris_bipod"},{},{},{"U_O_FullGhillie_lsh",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_MCT",{}},{"USP_DELTA_BAG_M81",{}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Balaclava_oli_lxWS",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_JPN_SAKUSENGUN_2028_VAR_29_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 0, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 30"; 
		faction = "BS_I_JPN_SAKUSENGUN_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male02GRE" ,"G_NATO_default"};
		uniformClass = "U_O_FullGhillie_lsh"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Balaclava_oli_lxWS","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","USP_PVS15_WP_TAR","G_Balaclava_oli_lxWS","USP_OPSCORE_FASTMTC_MCT_CMGTW"}; 
		weapons[] = {"rhs_weap_m14ebrri","ACE_Vector"}; 
		respawnWeapons[] = {"rhs_weap_m14ebrri","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_DELTA_BAG_M81";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m14ebrri","rhsusf_acc_aac_scarh_silencer","rhsusf_acc_anpeq15side_bk","Tier1_LeupoldM3A_Geissele_Black",{"ACE_20Rnd_762x51_Mag_Tracer_Dim",20},{},"rhsusf_acc_harris_bipod"},{},{},{"U_O_FullGhillie_lsh",{{"ACE_RangeCard",1}}},{"USP_CRYE_CPC_COMMS_MCT",{}},{"USP_DELTA_BAG_M81",{}},"USP_OPSCORE_FASTMTC_MCT_CMGTW","G_Balaclava_oli_lxWS",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_PVS15_WP_TAR"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	class JGSDF_87AWa;
	class BS_B_JPN_SAKUSENGUN_2028_aUuB2VopusE:JGSDF_87AWa {
		scope=2;
		side=1;
		faction="BS_B_JPN_SAKUSENGUN_2028";
		crew="BS_B_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_JPN_SAKUSENGUN_2028_aUuB2VopusE:JGSDF_87AWa {
		scope=2;
		side=0;
		faction="BS_O_JPN_SAKUSENGUN_2028";
		crew="BS_O_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_JPN_SAKUSENGUN_2028_aUuB2VopusE:JGSDF_87AWa {
		scope=2;
		side=2;
		faction="BS_I_JPN_SAKUSENGUN_2028";
		crew="BS_I_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 

	class JGSDF_AAVC7;
	class BS_B_JPN_SAKUSENGUN_2028_s2q6OdIXQQQ:JGSDF_AAVC7 {
		scope=2;
		side=1;
		faction="BS_B_JPN_SAKUSENGUN_2028";
		crew="BS_B_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_JPN_SAKUSENGUN_2028_s2q6OdIXQQQ:JGSDF_AAVC7 {
		scope=2;
		side=0;
		faction="BS_O_JPN_SAKUSENGUN_2028";
		crew="BS_O_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_JPN_SAKUSENGUN_2028_s2q6OdIXQQQ:JGSDF_AAVC7 {
		scope=2;
		side=2;
		faction="BS_I_JPN_SAKUSENGUN_2028";
		crew="BS_I_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 

	class JGSDF_AAVP7;
	class BS_B_JPN_SAKUSENGUN_2028_7MuJOdKXBwQ:JGSDF_AAVP7 {
		scope=2;
		side=1;
		faction="BS_B_JPN_SAKUSENGUN_2028";
		crew="BS_B_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_JPN_SAKUSENGUN_2028_7MuJOdKXBwQ:JGSDF_AAVP7 {
		scope=2;
		side=0;
		faction="BS_O_JPN_SAKUSENGUN_2028";
		crew="BS_O_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_JPN_SAKUSENGUN_2028_7MuJOdKXBwQ:JGSDF_AAVP7 {
		scope=2;
		side=2;
		faction="BS_I_JPN_SAKUSENGUN_2028";
		crew="BS_I_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 

	class JGSDF_KR130BW_B;
	class BS_B_JPN_SAKUSENGUN_2028_aBjj4n_GfMQ:JGSDF_KR130BW_B {
		scope=2;
		side=1;
		faction="BS_B_JPN_SAKUSENGUN_2028";
		crew="BS_B_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_JPN_SAKUSENGUN_2028_aBjj4n_GfMQ:JGSDF_KR130BW_B {
		scope=2;
		side=0;
		faction="BS_O_JPN_SAKUSENGUN_2028";
		crew="BS_O_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_JPN_SAKUSENGUN_2028_aBjj4n_GfMQ:JGSDF_KR130BW_B {
		scope=2;
		side=2;
		faction="BS_I_JPN_SAKUSENGUN_2028";
		crew="BS_I_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 

	class JGSDF_KU50AW;
	class BS_B_JPN_SAKUSENGUN_2028_sooKT0NKJDY:JGSDF_KU50AW {
		scope=2;
		side=1;
		faction="BS_B_JPN_SAKUSENGUN_2028";
		crew="BS_B_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_JPN_SAKUSENGUN_2028_sooKT0NKJDY:JGSDF_KU50AW {
		scope=2;
		side=0;
		faction="BS_O_JPN_SAKUSENGUN_2028";
		crew="BS_O_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_JPN_SAKUSENGUN_2028_sooKT0NKJDY:JGSDF_KU50AW {
		scope=2;
		side=2;
		faction="BS_I_JPN_SAKUSENGUN_2028";
		crew="BS_I_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 

	class JGSDF_KU50AW_SMK;
	class BS_B_JPN_SAKUSENGUN_2028_iGj_v277fT4:JGSDF_KU50AW_SMK {
		scope=2;
		side=1;
		faction="BS_B_JPN_SAKUSENGUN_2028";
		crew="BS_B_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_JPN_SAKUSENGUN_2028_iGj_v277fT4:JGSDF_KU50AW_SMK {
		scope=2;
		side=0;
		faction="BS_O_JPN_SAKUSENGUN_2028";
		crew="BS_O_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_JPN_SAKUSENGUN_2028_iGj_v277fT4:JGSDF_KU50AW_SMK {
		scope=2;
		side=2;
		faction="BS_I_JPN_SAKUSENGUN_2028";
		crew="BS_I_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 

	class JGSDF_KU50AW_MG;
	class BS_B_JPN_SAKUSENGUN_2028_y_B9UhEs_Ws:JGSDF_KU50AW_MG {
		scope=2;
		side=1;
		faction="BS_B_JPN_SAKUSENGUN_2028";
		crew="BS_B_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_JPN_SAKUSENGUN_2028_y_B9UhEs_Ws:JGSDF_KU50AW_MG {
		scope=2;
		side=0;
		faction="BS_O_JPN_SAKUSENGUN_2028";
		crew="BS_O_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_JPN_SAKUSENGUN_2028_y_B9UhEs_Ws:JGSDF_KU50AW_MG {
		scope=2;
		side=2;
		faction="BS_I_JPN_SAKUSENGUN_2028";
		crew="BS_I_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 

	class JGSDF_SUB_B;
	class BS_B_JPN_SAKUSENGUN_2028_1o6uIHS1130:JGSDF_SUB_B {
		scope=2;
		side=1;
		faction="BS_B_JPN_SAKUSENGUN_2028";
		crew="BS_B_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_JPN_SAKUSENGUN_2028_1o6uIHS1130:JGSDF_SUB_B {
		scope=2;
		side=0;
		faction="BS_O_JPN_SAKUSENGUN_2028";
		crew="BS_O_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_JPN_SAKUSENGUN_2028_1o6uIHS1130:JGSDF_SUB_B {
		scope=2;
		side=2;
		faction="BS_I_JPN_SAKUSENGUN_2028";
		crew="BS_I_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 

	class JGSDF_KR130W_B;
	class BS_B_JPN_SAKUSENGUN_2028_ok20_sD9QLE:JGSDF_KR130W_B {
		scope=2;
		side=1;
		faction="BS_B_JPN_SAKUSENGUN_2028";
		crew="BS_B_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_JPN_SAKUSENGUN_2028_ok20_sD9QLE:JGSDF_KR130W_B {
		scope=2;
		side=0;
		faction="BS_O_JPN_SAKUSENGUN_2028";
		crew="BS_O_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_JPN_SAKUSENGUN_2028_ok20_sD9QLE:JGSDF_KR130W_B {
		scope=2;
		side=2;
		faction="BS_I_JPN_SAKUSENGUN_2028";
		crew="BS_I_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 

	class JGSDF_KS130W_A;
	class BS_B_JPN_SAKUSENGUN_2028_mBsektWDTmc:JGSDF_KS130W_A {
		scope=2;
		side=1;
		faction="BS_B_JPN_SAKUSENGUN_2028";
		crew="BS_B_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_JPN_SAKUSENGUN_2028_mBsektWDTmc:JGSDF_KS130W_A {
		scope=2;
		side=0;
		faction="BS_O_JPN_SAKUSENGUN_2028";
		crew="BS_O_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_JPN_SAKUSENGUN_2028_mBsektWDTmc:JGSDF_KS130W_A {
		scope=2;
		side=2;
		faction="BS_I_JPN_SAKUSENGUN_2028";
		crew="BS_I_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 

	class JGSDF_89FV;
	class BS_B_JPN_SAKUSENGUN_2028_bBrXubhVocs:JGSDF_89FV {
		scope=2;
		side=1;
		faction="BS_B_JPN_SAKUSENGUN_2028";
		crew="BS_B_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_JPN_SAKUSENGUN_2028_bBrXubhVocs:JGSDF_89FV {
		scope=2;
		side=0;
		faction="BS_O_JPN_SAKUSENGUN_2028";
		crew="BS_O_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_JPN_SAKUSENGUN_2028_bBrXubhVocs:JGSDF_89FV {
		scope=2;
		side=2;
		faction="BS_I_JPN_SAKUSENGUN_2028";
		crew="BS_I_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 

	class JGSDF_MBRS;
	class BS_B_JPN_SAKUSENGUN_2028_H0L3L2SNNbM:JGSDF_MBRS {
		scope=2;
		side=1;
		faction="BS_B_JPN_SAKUSENGUN_2028";
		crew="BS_B_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_JPN_SAKUSENGUN_2028_H0L3L2SNNbM:JGSDF_MBRS {
		scope=2;
		side=0;
		faction="BS_O_JPN_SAKUSENGUN_2028";
		crew="BS_O_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_JPN_SAKUSENGUN_2028_H0L3L2SNNbM:JGSDF_MBRS {
		scope=2;
		side=2;
		faction="BS_I_JPN_SAKUSENGUN_2028";
		crew="BS_I_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 

	class JGSDF_KU140W_A;
	class BS_B_JPN_SAKUSENGUN_2028_B4ky3GpvdV0:JGSDF_KU140W_A {
		scope=2;
		side=1;
		faction="BS_B_JPN_SAKUSENGUN_2028";
		crew="BS_B_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_JPN_SAKUSENGUN_2028_B4ky3GpvdV0:JGSDF_KU140W_A {
		scope=2;
		side=0;
		faction="BS_O_JPN_SAKUSENGUN_2028";
		crew="BS_O_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_JPN_SAKUSENGUN_2028_B4ky3GpvdV0:JGSDF_KU140W_A {
		scope=2;
		side=2;
		faction="BS_I_JPN_SAKUSENGUN_2028";
		crew="BS_I_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 

	class JGSDF_KU140W_B;
	class BS_B_JPN_SAKUSENGUN_2028_uooy3GpwdV0:JGSDF_KU140W_B {
		scope=2;
		side=1;
		faction="BS_B_JPN_SAKUSENGUN_2028";
		crew="BS_B_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_JPN_SAKUSENGUN_2028_uooy3GpwdV0:JGSDF_KU140W_B {
		scope=2;
		side=0;
		faction="BS_O_JPN_SAKUSENGUN_2028";
		crew="BS_O_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_JPN_SAKUSENGUN_2028_uooy3GpwdV0:JGSDF_KU140W_B {
		scope=2;
		side=2;
		faction="BS_I_JPN_SAKUSENGUN_2028";
		crew="BS_I_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 

	class JGSDF_BXD10_RT;
	class BS_B_JPN_SAKUSENGUN_2028_HQlKM6MGfB0:JGSDF_BXD10_RT {
		scope=2;
		side=1;
		faction="BS_B_JPN_SAKUSENGUN_2028";
		crew="BS_B_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_JPN_SAKUSENGUN_2028_HQlKM6MGfB0:JGSDF_BXD10_RT {
		scope=2;
		side=0;
		faction="BS_O_JPN_SAKUSENGUN_2028";
		crew="BS_O_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_JPN_SAKUSENGUN_2028_HQlKM6MGfB0:JGSDF_BXD10_RT {
		scope=2;
		side=2;
		faction="BS_I_JPN_SAKUSENGUN_2028";
		crew="BS_I_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 

	class JGSDF_155SPH;
	class BS_B_JPN_SAKUSENGUN_2028_PS8Gl5AflsM:JGSDF_155SPH {
		scope=2;
		side=1;
		faction="BS_B_JPN_SAKUSENGUN_2028";
		crew="BS_B_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_JPN_SAKUSENGUN_2028_PS8Gl5AflsM:JGSDF_155SPH {
		scope=2;
		side=0;
		faction="BS_O_JPN_SAKUSENGUN_2028";
		crew="BS_O_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_JPN_SAKUSENGUN_2028_PS8Gl5AflsM:JGSDF_155SPH {
		scope=2;
		side=2;
		faction="BS_I_JPN_SAKUSENGUN_2028";
		crew="BS_I_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 

	class JGSDF_ADS;
	class BS_B_JPN_SAKUSENGUN_2028_l1o6wmMC3QM:JGSDF_ADS {
		scope=2;
		side=1;
		faction="BS_B_JPN_SAKUSENGUN_2028";
		crew="BS_B_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_JPN_SAKUSENGUN_2028_l1o6wmMC3QM:JGSDF_ADS {
		scope=2;
		side=0;
		faction="BS_O_JPN_SAKUSENGUN_2028";
		crew="BS_O_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_JPN_SAKUSENGUN_2028_l1o6wmMC3QM:JGSDF_ADS {
		scope=2;
		side=2;
		faction="BS_I_JPN_SAKUSENGUN_2028";
		crew="BS_I_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 

	class JGSDF_MSP;
	class BS_B_JPN_SAKUSENGUN_2028_CeJDsGNJK_M:JGSDF_MSP {
		scope=2;
		side=1;
		faction="BS_B_JPN_SAKUSENGUN_2028";
		crew="BS_B_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_JPN_SAKUSENGUN_2028_CeJDsGNJK_M:JGSDF_MSP {
		scope=2;
		side=0;
		faction="BS_O_JPN_SAKUSENGUN_2028";
		crew="BS_O_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_JPN_SAKUSENGUN_2028_CeJDsGNJK_M:JGSDF_MSP {
		scope=2;
		side=2;
		faction="BS_I_JPN_SAKUSENGUN_2028";
		crew="BS_I_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 

	class JGSDF_ASV;
	class BS_B_JPN_SAKUSENGUN_2028_Az5ywmMvHgQ:JGSDF_ASV {
		scope=2;
		side=1;
		faction="BS_B_JPN_SAKUSENGUN_2028";
		crew="BS_B_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_JPN_SAKUSENGUN_2028_Az5ywmMvHgQ:JGSDF_ASV {
		scope=2;
		side=0;
		faction="BS_O_JPN_SAKUSENGUN_2028";
		crew="BS_O_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_JPN_SAKUSENGUN_2028_Az5ywmMvHgQ:JGSDF_ASV {
		scope=2;
		side=2;
		faction="BS_I_JPN_SAKUSENGUN_2028";
		crew="BS_I_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 

	class JGSDF_SKW477C;
	class BS_B_JPN_SAKUSENGUN_2028_6cCDbFNj72Y:JGSDF_SKW477C {
		scope=2;
		side=1;
		faction="BS_B_JPN_SAKUSENGUN_2028";
		crew="BS_B_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_JPN_SAKUSENGUN_2028_6cCDbFNj72Y:JGSDF_SKW477C {
		scope=2;
		side=0;
		faction="BS_O_JPN_SAKUSENGUN_2028";
		crew="BS_O_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_JPN_SAKUSENGUN_2028_6cCDbFNj72Y:JGSDF_SKW477C {
		scope=2;
		side=2;
		faction="BS_I_JPN_SAKUSENGUN_2028";
		crew="BS_I_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 

	class JGSDF_SKW477TF;
	class BS_B_JPN_SAKUSENGUN_2028_Xgy1Y8FzU2w:JGSDF_SKW477TF {
		scope=2;
		side=1;
		faction="BS_B_JPN_SAKUSENGUN_2028";
		crew="BS_B_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_JPN_SAKUSENGUN_2028_Xgy1Y8FzU2w:JGSDF_SKW477TF {
		scope=2;
		side=0;
		faction="BS_O_JPN_SAKUSENGUN_2028";
		crew="BS_O_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_JPN_SAKUSENGUN_2028_Xgy1Y8FzU2w:JGSDF_SKW477TF {
		scope=2;
		side=2;
		faction="BS_I_JPN_SAKUSENGUN_2028";
		crew="BS_I_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 

	class JGSDF_SKW477TF_Air;
	class BS_B_JPN_SAKUSENGUN_2028_rREfdk9lws4:JGSDF_SKW477TF_Air {
		scope=2;
		side=1;
		faction="BS_B_JPN_SAKUSENGUN_2028";
		crew="BS_B_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_JPN_SAKUSENGUN_2028_rREfdk9lws4:JGSDF_SKW477TF_Air {
		scope=2;
		side=0;
		faction="BS_O_JPN_SAKUSENGUN_2028";
		crew="BS_O_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_JPN_SAKUSENGUN_2028_rREfdk9lws4:JGSDF_SKW477TF_Air {
		scope=2;
		side=2;
		faction="BS_I_JPN_SAKUSENGUN_2028";
		crew="BS_I_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 

	class JGSDF_SKW477S;
	class BS_B_JPN_SAKUSENGUN_2028_uaWDbFNT72Y:JGSDF_SKW477S {
		scope=2;
		side=1;
		faction="BS_B_JPN_SAKUSENGUN_2028";
		crew="BS_B_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_JPN_SAKUSENGUN_2028_uaWDbFNT72Y:JGSDF_SKW477S {
		scope=2;
		side=0;
		faction="BS_O_JPN_SAKUSENGUN_2028";
		crew="BS_O_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_JPN_SAKUSENGUN_2028_uaWDbFNT72Y:JGSDF_SKW477S {
		scope=2;
		side=2;
		faction="BS_I_JPN_SAKUSENGUN_2028";
		crew="BS_I_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 

	class JGSDF_SKW477;
	class BS_B_JPN_SAKUSENGUN_2028_sEx7eef9wdY:JGSDF_SKW477 {
		scope=2;
		side=1;
		faction="BS_B_JPN_SAKUSENGUN_2028";
		crew="BS_B_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_JPN_SAKUSENGUN_2028_sEx7eef9wdY:JGSDF_SKW477 {
		scope=2;
		side=0;
		faction="BS_O_JPN_SAKUSENGUN_2028";
		crew="BS_O_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_JPN_SAKUSENGUN_2028_sEx7eef9wdY:JGSDF_SKW477 {
		scope=2;
		side=2;
		faction="BS_I_JPN_SAKUSENGUN_2028";
		crew="BS_I_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 

	class JGSDF_BXD10;
	class BS_B_JPN_SAKUSENGUN_2028_lpIMSwX3pGc:JGSDF_BXD10 {
		scope=2;
		side=1;
		faction="BS_B_JPN_SAKUSENGUN_2028";
		crew="BS_B_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_JPN_SAKUSENGUN_2028_lpIMSwX3pGc:JGSDF_BXD10 {
		scope=2;
		side=0;
		faction="BS_O_JPN_SAKUSENGUN_2028";
		crew="BS_O_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_JPN_SAKUSENGUN_2028_lpIMSwX3pGc:JGSDF_BXD10 {
		scope=2;
		side=2;
		faction="BS_I_JPN_SAKUSENGUN_2028";
		crew="BS_I_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 

	class JGSDF_BXD10_MG;
	class BS_B_JPN_SAKUSENGUN_2028_D20SM6MDOx0:JGSDF_BXD10_MG {
		scope=2;
		side=1;
		faction="BS_B_JPN_SAKUSENGUN_2028";
		crew="BS_B_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_JPN_SAKUSENGUN_2028_D20SM6MDOx0:JGSDF_BXD10_MG {
		scope=2;
		side=0;
		faction="BS_O_JPN_SAKUSENGUN_2028";
		crew="BS_O_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_JPN_SAKUSENGUN_2028_D20SM6MDOx0:JGSDF_BXD10_MG {
		scope=2;
		side=2;
		faction="BS_I_JPN_SAKUSENGUN_2028";
		crew="BS_I_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 

	class JGSDF_10TK;
	class BS_B_JPN_SAKUSENGUN_2028_Y3yee_Q1_6M:JGSDF_10TK {
		scope=2;
		side=1;
		faction="BS_B_JPN_SAKUSENGUN_2028";
		crew="BS_B_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_JPN_SAKUSENGUN_2028_Y3yee_Q1_6M:JGSDF_10TK {
		scope=2;
		side=0;
		faction="BS_O_JPN_SAKUSENGUN_2028";
		crew="BS_O_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_JPN_SAKUSENGUN_2028_Y3yee_Q1_6M:JGSDF_10TK {
		scope=2;
		side=2;
		faction="BS_I_JPN_SAKUSENGUN_2028";
		crew="BS_I_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 

	class JGSDF_STBe_d;
	class BS_B_JPN_SAKUSENGUN_2028_zi3AbSLtZIY:JGSDF_STBe_d {
		scope=2;
		side=1;
		faction="BS_B_JPN_SAKUSENGUN_2028";
		crew="BS_B_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_JPN_SAKUSENGUN_2028_zi3AbSLtZIY:JGSDF_STBe_d {
		scope=2;
		side=0;
		faction="BS_O_JPN_SAKUSENGUN_2028";
		crew="BS_O_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_JPN_SAKUSENGUN_2028_zi3AbSLtZIY:JGSDF_STBe_d {
		scope=2;
		side=2;
		faction="BS_I_JPN_SAKUSENGUN_2028";
		crew="BS_I_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 

	class JGSDF_STBe;
	class BS_B_JPN_SAKUSENGUN_2028_tT5Y0uysOkY:JGSDF_STBe {
		scope=2;
		side=1;
		faction="BS_B_JPN_SAKUSENGUN_2028";
		crew="BS_B_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_JPN_SAKUSENGUN_2028_tT5Y0uysOkY:JGSDF_STBe {
		scope=2;
		side=0;
		faction="BS_O_JPN_SAKUSENGUN_2028";
		crew="BS_O_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_JPN_SAKUSENGUN_2028_tT5Y0uysOkY:JGSDF_STBe {
		scope=2;
		side=2;
		faction="BS_I_JPN_SAKUSENGUN_2028";
		crew="BS_I_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 

	class JGSDF_SRBa;
	class BS_B_JPN_SAKUSENGUN_2028_r2d7yOxa2TQ:JGSDF_SRBa {
		scope=2;
		side=1;
		faction="BS_B_JPN_SAKUSENGUN_2028";
		crew="BS_B_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_JPN_SAKUSENGUN_2028_r2d7yOxa2TQ:JGSDF_SRBa {
		scope=2;
		side=0;
		faction="BS_O_JPN_SAKUSENGUN_2028";
		crew="BS_O_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_JPN_SAKUSENGUN_2028_r2d7yOxa2TQ:JGSDF_SRBa {
		scope=2;
		side=2;
		faction="BS_I_JPN_SAKUSENGUN_2028";
		crew="BS_I_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 

	class JGSDF_90TK;
	class BS_B_JPN_SAKUSENGUN_2028_a_ZiaLLFDLs:JGSDF_90TK {
		scope=2;
		side=1;
		faction="BS_B_JPN_SAKUSENGUN_2028";
		crew="BS_B_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_JPN_SAKUSENGUN_2028_a_ZiaLLFDLs:JGSDF_90TK {
		scope=2;
		side=0;
		faction="BS_O_JPN_SAKUSENGUN_2028";
		crew="BS_O_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_JPN_SAKUSENGUN_2028_a_ZiaLLFDLs:JGSDF_90TK {
		scope=2;
		side=2;
		faction="BS_I_JPN_SAKUSENGUN_2028";
		crew="BS_I_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 

	class JGSDF_91TKB;
	class BS_B_JPN_SAKUSENGUN_2028_fuWm8C7Db30:JGSDF_91TKB {
		scope=2;
		side=1;
		faction="BS_B_JPN_SAKUSENGUN_2028";
		crew="BS_B_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_JPN_SAKUSENGUN_2028_fuWm8C7Db30:JGSDF_91TKB {
		scope=2;
		side=0;
		faction="BS_O_JPN_SAKUSENGUN_2028";
		crew="BS_O_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_JPN_SAKUSENGUN_2028_fuWm8C7Db30:JGSDF_91TKB {
		scope=2;
		side=2;
		faction="BS_I_JPN_SAKUSENGUN_2028";
		crew="BS_I_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 

	class rhsusf_f22;
	class BS_B_JPN_SAKUSENGUN_2028_LnDPXO6Y_qw:rhsusf_f22 {
		scope=2;
		side=1;
		faction="BS_B_JPN_SAKUSENGUN_2028";
		crew="BS_B_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_JPN_SAKUSENGUN_2028_LnDPXO6Y_qw:rhsusf_f22 {
		scope=2;
		side=0;
		faction="BS_O_JPN_SAKUSENGUN_2028";
		crew="BS_O_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_JPN_SAKUSENGUN_2028_LnDPXO6Y_qw:rhsusf_f22 {
		scope=2;
		side=2;
		faction="BS_I_JPN_SAKUSENGUN_2028";
		crew="BS_I_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 

	class B_Plane_CAS_01_dynamicLoadout_F;
	class BS_B_JPN_SAKUSENGUN_2028_XI4tDhq8hpw:B_Plane_CAS_01_dynamicLoadout_F {
		scope=2;
		side=1;
		faction="BS_B_JPN_SAKUSENGUN_2028";
		crew="BS_B_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_JPN_SAKUSENGUN_2028_XI4tDhq8hpw:B_Plane_CAS_01_dynamicLoadout_F {
		scope=2;
		side=0;
		faction="BS_O_JPN_SAKUSENGUN_2028";
		crew="BS_O_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_JPN_SAKUSENGUN_2028_XI4tDhq8hpw:B_Plane_CAS_01_dynamicLoadout_F {
		scope=2;
		side=2;
		faction="BS_I_JPN_SAKUSENGUN_2028";
		crew="BS_I_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 

	class RHS_Stinger_AA_pod_D;
	class BS_B_JPN_SAKUSENGUN_2028_SvQlMfJZcyY:RHS_Stinger_AA_pod_D {
		scope=2;
		side=1;
		faction="BS_B_JPN_SAKUSENGUN_2028";
		crew="BS_B_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_JPN_SAKUSENGUN_2028_SvQlMfJZcyY:RHS_Stinger_AA_pod_D {
		scope=2;
		side=0;
		faction="BS_O_JPN_SAKUSENGUN_2028";
		crew="BS_O_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_JPN_SAKUSENGUN_2028_SvQlMfJZcyY:RHS_Stinger_AA_pod_D {
		scope=2;
		side=2;
		faction="BS_I_JPN_SAKUSENGUN_2028";
		crew="BS_I_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 

	class RHS_M2StaticMG_D;
	class BS_B_JPN_SAKUSENGUN_2028__tBz_CZwvVw:RHS_M2StaticMG_D {
		scope=2;
		side=1;
		faction="BS_B_JPN_SAKUSENGUN_2028";
		crew="BS_B_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_JPN_SAKUSENGUN_2028__tBz_CZwvVw:RHS_M2StaticMG_D {
		scope=2;
		side=0;
		faction="BS_O_JPN_SAKUSENGUN_2028";
		crew="BS_O_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_JPN_SAKUSENGUN_2028__tBz_CZwvVw:RHS_M2StaticMG_D {
		scope=2;
		side=2;
		faction="BS_I_JPN_SAKUSENGUN_2028";
		crew="BS_I_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 

	class RHS_M2StaticMG_MiniTripod_D;
	class BS_B_JPN_SAKUSENGUN_2028_uhDfiI2G_7E:RHS_M2StaticMG_MiniTripod_D {
		scope=2;
		side=1;
		faction="BS_B_JPN_SAKUSENGUN_2028";
		crew="BS_B_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_JPN_SAKUSENGUN_2028_uhDfiI2G_7E:RHS_M2StaticMG_MiniTripod_D {
		scope=2;
		side=0;
		faction="BS_O_JPN_SAKUSENGUN_2028";
		crew="BS_O_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_JPN_SAKUSENGUN_2028_uhDfiI2G_7E:RHS_M2StaticMG_MiniTripod_D {
		scope=2;
		side=2;
		faction="BS_I_JPN_SAKUSENGUN_2028";
		crew="BS_I_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 

	class rhsgref_cdf_b_SPG9M;
	class BS_B_JPN_SAKUSENGUN_2028_EVebRiKV_BA:rhsgref_cdf_b_SPG9M {
		scope=2;
		side=1;
		faction="BS_B_JPN_SAKUSENGUN_2028";
		crew="BS_B_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_JPN_SAKUSENGUN_2028_EVebRiKV_BA:rhsgref_cdf_b_SPG9M {
		scope=2;
		side=0;
		faction="BS_O_JPN_SAKUSENGUN_2028";
		crew="BS_O_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_JPN_SAKUSENGUN_2028_EVebRiKV_BA:rhsgref_cdf_b_SPG9M {
		scope=2;
		side=2;
		faction="BS_I_JPN_SAKUSENGUN_2028";
		crew="BS_I_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 

	class RHS_UH60M_ESSS;
	class BS_B_JPN_SAKUSENGUN_2028_OenZqvfN__I:RHS_UH60M_ESSS {
		scope=2;
		side=1;
		faction="BS_B_JPN_SAKUSENGUN_2028";
		crew="BS_B_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_JPN_SAKUSENGUN_2028_OenZqvfN__I:RHS_UH60M_ESSS {
		scope=2;
		side=0;
		faction="BS_O_JPN_SAKUSENGUN_2028";
		crew="BS_O_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_JPN_SAKUSENGUN_2028_OenZqvfN__I:RHS_UH60M_ESSS {
		scope=2;
		side=2;
		faction="BS_I_JPN_SAKUSENGUN_2028";
		crew="BS_I_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 

	class RHS_CH_47F;
	class BS_B_JPN_SAKUSENGUN_2028_pVdMW49hADs:RHS_CH_47F {
		scope=2;
		side=1;
		faction="BS_B_JPN_SAKUSENGUN_2028";
		crew="BS_B_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_JPN_SAKUSENGUN_2028_pVdMW49hADs:RHS_CH_47F {
		scope=2;
		side=0;
		faction="BS_O_JPN_SAKUSENGUN_2028";
		crew="BS_O_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_JPN_SAKUSENGUN_2028_pVdMW49hADs:RHS_CH_47F {
		scope=2;
		side=2;
		faction="BS_I_JPN_SAKUSENGUN_2028";
		crew="BS_I_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 

	class RHS_AH64D_wd;
	class BS_B_JPN_SAKUSENGUN_2028_GWEdtnFtwZ4:RHS_AH64D_wd {
		scope=2;
		side=1;
		faction="BS_B_JPN_SAKUSENGUN_2028";
		crew="BS_B_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_JPN_SAKUSENGUN_2028_GWEdtnFtwZ4:RHS_AH64D_wd {
		scope=2;
		side=0;
		faction="BS_O_JPN_SAKUSENGUN_2028";
		crew="BS_O_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_JPN_SAKUSENGUN_2028_GWEdtnFtwZ4:RHS_AH64D_wd {
		scope=2;
		side=2;
		faction="BS_I_JPN_SAKUSENGUN_2028";
		crew="BS_I_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 

	class rhs_uh1h_hidf_unarmed;
	class BS_B_JPN_SAKUSENGUN_2028_QS4ldszptTQ:rhs_uh1h_hidf_unarmed {
		scope=2;
		side=1;
		faction="BS_B_JPN_SAKUSENGUN_2028";
		crew="BS_B_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_JPN_SAKUSENGUN_2028_QS4ldszptTQ:rhs_uh1h_hidf_unarmed {
		scope=2;
		side=0;
		faction="BS_O_JPN_SAKUSENGUN_2028";
		crew="BS_O_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_JPN_SAKUSENGUN_2028_QS4ldszptTQ:rhs_uh1h_hidf_unarmed {
		scope=2;
		side=2;
		faction="BS_I_JPN_SAKUSENGUN_2028";
		crew="BS_I_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 

	class JGSDF_KR140;
	class BS_B_JPN_SAKUSENGUN_2028_mb7fyK576JI:JGSDF_KR140 {
		scope=2;
		side=1;
		faction="BS_B_JPN_SAKUSENGUN_2028";
		crew="BS_B_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_JPN_SAKUSENGUN_2028_mb7fyK576JI:JGSDF_KR140 {
		scope=2;
		side=0;
		faction="BS_O_JPN_SAKUSENGUN_2028";
		crew="BS_O_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_JPN_SAKUSENGUN_2028_mb7fyK576JI:JGSDF_KR140 {
		scope=2;
		side=2;
		faction="BS_I_JPN_SAKUSENGUN_2028";
		crew="BS_I_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 

	class B_Mortar_01_F;
	class BS_B_JPN_SAKUSENGUN_2028_gdLSc7FB4Sg:B_Mortar_01_F {
		scope=2;
		side=1;
		faction="BS_B_JPN_SAKUSENGUN_2028";
		crew="BS_B_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_JPN_SAKUSENGUN_2028_gdLSc7FB4Sg:B_Mortar_01_F {
		scope=2;
		side=0;
		faction="BS_O_JPN_SAKUSENGUN_2028";
		crew="BS_O_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_JPN_SAKUSENGUN_2028_gdLSc7FB4Sg:B_Mortar_01_F {
		scope=2;
		side=2;
		faction="BS_I_JPN_SAKUSENGUN_2028";
		crew="BS_I_JPN_SAKUSENGUN_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL"
		}; 
	}; 
};
class CfgGroups { 
	class East { 
		class JPN_SAKUSENGUN_2028 { 
			name="JAPAN - SAKUSENGUN (2028)";
			class Infantry {
				name="Infantry";
				class BS_O_JPN_SAKUSENGUN_2028_Fireteam_WL {
					name="Fireteam (Woodland)";
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					side=0;
					faction="BS_O_JPN_SAKUSENGUN_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_GL_WL";
					};
				};
				class BS_O_JPN_SAKUSENGUN_2028_Squad_WL {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Squad (Woodland)";
					side=0;
					faction="BS_O_JPN_SAKUSENGUN_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_GL_WL";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_AR_WL";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_GL_WL";
					};
				};
				class BS_O_JPN_SAKUSENGUN_2028_AT_WL {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Anti-Tank (Woodland)";
					side=0;
					faction="BS_O_JPN_SAKUSENGUN_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
				};
			};
			class Motorized {
				name="Mechanize Infantry";
				class BS_O_JPN_SAKUSENGUN_2028_LightVehicle_WL_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="LAV (Woodland)";
					side=0;
					faction="BS_O_JPN_SAKUSENGUN_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_y_B9UhEs_Ws";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_AR_WL";
					};
				};
				class BS_O_JPN_SAKUSENGUN_2028_Tank_WL_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Type73APC(A) (Woodland) ";
					side=0;
					faction="BS_O_JPN_SAKUSENGUN_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_1o6uIHS1130";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_AR_WL";
					};
				};
				class BS_O_JPN_SAKUSENGUN_2028_Tank_WL_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Type82CCV (Woodland) ";
					side=0;
					faction="BS_O_JPN_SAKUSENGUN_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_ok20_sD9QLE";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_AR_WL";
					};
				};
				class BS_O_JPN_SAKUSENGUN_2028_Tank_WL_2 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Type87RCV (Woodland) ";
					side=0;
					faction="BS_O_JPN_SAKUSENGUN_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_mBsektWDTmc";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_AR_WL";
					};
				};
				class BS_O_JPN_SAKUSENGUN_2028_Tank_WL_3 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Type89IFV (Woodland) ";
					side=0;
					faction="BS_O_JPN_SAKUSENGUN_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_bBrXubhVocs";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_AR_WL";
					};
				};
				class BS_O_JPN_SAKUSENGUN_2028_Tank_WL_4 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Type155SPH (Woodland) ";
					side=0;
					faction="BS_O_JPN_SAKUSENGUN_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_PS8Gl5AflsM";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_AR_WL";
					};
				};
				class BS_O_JPN_SAKUSENGUN_2028_Tank_WL_5 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Type10MTB (Woodland) ";
					side=0;
					faction="BS_O_JPN_SAKUSENGUN_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_Y3yee_Q1_6M";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_AR_WL";
					};
				};
				class BS_O_JPN_SAKUSENGUN_2028_Tank_WL_6 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Type74 TK (blade) (Woodland) ";
					side=0;
					faction="BS_O_JPN_SAKUSENGUN_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_zi3AbSLtZIY";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_AR_WL";
					};
				};
				class BS_O_JPN_SAKUSENGUN_2028_Tank_WL_7 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Type74MTB (Woodland) ";
					side=0;
					faction="BS_O_JPN_SAKUSENGUN_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_tT5Y0uysOkY";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_JPN_SAKUSENGUN_2028_AR_WL";
					};
				};
			};
		};
	};
	class Indep { 
		class JPN_SAKUSENGUN_2028 { 
			name="JAPAN - SAKUSENGUN (2028)";
			class Infantry {
				name="Infantry";
				class BS_I_JPN_SAKUSENGUN_2028_Fireteam_WL {
					name="Fireteam (Woodland)";
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					side=2;
					faction="BS_I_JPN_SAKUSENGUN_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_GL_WL";
					};
				};
				class BS_I_JPN_SAKUSENGUN_2028_Squad_WL {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Squad (Woodland)";
					side=2;
					faction="BS_I_JPN_SAKUSENGUN_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_GL_WL";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_AR_WL";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_GL_WL";
					};
				};
				class BS_I_JPN_SAKUSENGUN_2028_AT_WL {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Anti-Tank (Woodland)";
					side=2;
					faction="BS_I_JPN_SAKUSENGUN_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
				};
			};
			class Motorized {
				name="Mechanize Infantry";
				class BS_I_JPN_SAKUSENGUN_2028_LightVehicle_WL_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="LAV (Woodland)";
					side=2;
					faction="BS_I_JPN_SAKUSENGUN_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_y_B9UhEs_Ws";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_AR_WL";
					};
				};
				class BS_I_JPN_SAKUSENGUN_2028_Tank_WL_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Type73APC(A) (Woodland) ";
					side=2;
					faction="BS_I_JPN_SAKUSENGUN_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_1o6uIHS1130";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_AR_WL";
					};
				};
				class BS_I_JPN_SAKUSENGUN_2028_Tank_WL_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Type82CCV (Woodland) ";
					side=2;
					faction="BS_I_JPN_SAKUSENGUN_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_ok20_sD9QLE";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_AR_WL";
					};
				};
				class BS_I_JPN_SAKUSENGUN_2028_Tank_WL_2 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Type87RCV (Woodland) ";
					side=2;
					faction="BS_I_JPN_SAKUSENGUN_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_mBsektWDTmc";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_AR_WL";
					};
				};
				class BS_I_JPN_SAKUSENGUN_2028_Tank_WL_3 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Type89IFV (Woodland) ";
					side=2;
					faction="BS_I_JPN_SAKUSENGUN_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_bBrXubhVocs";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_AR_WL";
					};
				};
				class BS_I_JPN_SAKUSENGUN_2028_Tank_WL_4 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Type155SPH (Woodland) ";
					side=2;
					faction="BS_I_JPN_SAKUSENGUN_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_PS8Gl5AflsM";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_AR_WL";
					};
				};
				class BS_I_JPN_SAKUSENGUN_2028_Tank_WL_5 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Type10MTB (Woodland) ";
					side=2;
					faction="BS_I_JPN_SAKUSENGUN_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_Y3yee_Q1_6M";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_AR_WL";
					};
				};
				class BS_I_JPN_SAKUSENGUN_2028_Tank_WL_6 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Type74 TK (blade) (Woodland) ";
					side=2;
					faction="BS_I_JPN_SAKUSENGUN_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_zi3AbSLtZIY";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_AR_WL";
					};
				};
				class BS_I_JPN_SAKUSENGUN_2028_Tank_WL_7 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Type74MTB (Woodland) ";
					side=2;
					faction="BS_I_JPN_SAKUSENGUN_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_tT5Y0uysOkY";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_JPN_SAKUSENGUN_2028_AR_WL";
					};
				};
			};
		};
	};
	class West { 
		class JPN_SAKUSENGUN_2028 { 
			name="JAPAN - SAKUSENGUN (2028)";
			class Infantry {
				name="Infantry";
				class BS_B_JPN_SAKUSENGUN_2028_Fireteam_WL {
					name="Fireteam (Woodland)";
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					side=1;
					faction="BS_B_JPN_SAKUSENGUN_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_GL_WL";
					};
				};
				class BS_B_JPN_SAKUSENGUN_2028_Squad_WL {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Squad (Woodland)";
					side=1;
					faction="BS_B_JPN_SAKUSENGUN_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_GL_WL";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_AR_WL";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_GL_WL";
					};
				};
				class BS_B_JPN_SAKUSENGUN_2028_AT_WL {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Anti-Tank (Woodland)";
					side=1;
					faction="BS_B_JPN_SAKUSENGUN_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
				};
			};
			class Motorized {
				name="Mechanize Infantry";
				class BS_B_JPN_SAKUSENGUN_2028_LightVehicle_WL_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="LAV (Woodland)";
					side=1;
					faction="BS_B_JPN_SAKUSENGUN_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_y_B9UhEs_Ws";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_AR_WL";
					};
				};
				class BS_B_JPN_SAKUSENGUN_2028_Tank_WL_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Type73APC(A) (Woodland) ";
					side=1;
					faction="BS_B_JPN_SAKUSENGUN_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_1o6uIHS1130";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_AR_WL";
					};
				};
				class BS_B_JPN_SAKUSENGUN_2028_Tank_WL_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Type82CCV (Woodland) ";
					side=1;
					faction="BS_B_JPN_SAKUSENGUN_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_ok20_sD9QLE";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_AR_WL";
					};
				};
				class BS_B_JPN_SAKUSENGUN_2028_Tank_WL_2 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Type87RCV (Woodland) ";
					side=1;
					faction="BS_B_JPN_SAKUSENGUN_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_mBsektWDTmc";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_AR_WL";
					};
				};
				class BS_B_JPN_SAKUSENGUN_2028_Tank_WL_3 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Type89IFV (Woodland) ";
					side=1;
					faction="BS_B_JPN_SAKUSENGUN_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_bBrXubhVocs";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_AR_WL";
					};
				};
				class BS_B_JPN_SAKUSENGUN_2028_Tank_WL_4 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Type155SPH (Woodland) ";
					side=1;
					faction="BS_B_JPN_SAKUSENGUN_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_PS8Gl5AflsM";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_AR_WL";
					};
				};
				class BS_B_JPN_SAKUSENGUN_2028_Tank_WL_5 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Type10MTB (Woodland) ";
					side=1;
					faction="BS_B_JPN_SAKUSENGUN_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_Y3yee_Q1_6M";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_AR_WL";
					};
				};
				class BS_B_JPN_SAKUSENGUN_2028_Tank_WL_6 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Type74 TK (blade) (Woodland) ";
					side=1;
					faction="BS_B_JPN_SAKUSENGUN_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_zi3AbSLtZIY";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_AR_WL";
					};
				};
				class BS_B_JPN_SAKUSENGUN_2028_Tank_WL_7 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Type74MTB (Woodland) ";
					side=1;
					faction="BS_B_JPN_SAKUSENGUN_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_tT5Y0uysOkY";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_JPN_SAKUSENGUN_2028_AR_WL";
					};
				};
			};
		};
	};
};

class CfgPatches { 
	class bm_specops_faction_JPN_SAKUSENGUN_2028{
		author = "Broken Skull Mods";
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={
			"rhsusf_c_weapons",
			"ace_compat_rhs_usf3_arsenal",
			"Tier1_Weapons_cfg",
			"ace_compat_rhs_usf3",
			"USP_Gear_Body",
			"ace_hearing",
			"ace_medical_treatment",
			"ace_rangecard",
			"ace_microdagr",
			"ace_attach",
			"ace_captives",
			"kat_breathing",
			"kat_airway",
			"USP_Gear_Vest",
			"A3_Characters_F",
			"tfar_external_intercom",
			"ace_vector",
			"A3_Weapons_F",
			"tfar_handhelds",
			"USP_Gear_NVG",
			"USP_Gear_Head",
			"kat_pharma",
			"ace_ballistics",
			"ace_huntir",
			"ace_grenades",
			"ace_realisticnames",
			"ace_chemlights",
			"ace_explosives",
			"A3_Weapons_F_Explosives",
			"ace_compat_rhs_usf3_explosives",
			"A3_Weapons_F_LongRangeRifles_M320",
			"A3_Weapons_F_Mark_LongRangeRifles_M320",
			"ace_scopes",
			"A3_Characters_F_Exp",
			"ace_compat_rhs_usf3_javelin",
			"A3_Characters_F_Mark",
			"bm_specops_faction_US_ARMA_BASE"
};
		units[]={
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WL",
			"BS_O_JPN_SAKUSENGUN_2028_AR_WL",
			"BS_B_JPN_SAKUSENGUN_2028_AR_WL",
			"BS_I_JPN_SAKUSENGUN_2028_AR_WL",
			"BS_O_JPN_SAKUSENGUN_2028_Rifleman_WL",
			"BS_B_JPN_SAKUSENGUN_2028_Rifleman_WL",
			"BS_I_JPN_SAKUSENGUN_2028_Rifleman_WL",
			"BS_O_JPN_SAKUSENGUN_2028_GL_WL",
			"BS_B_JPN_SAKUSENGUN_2028_GL_WL",
			"BS_I_JPN_SAKUSENGUN_2028_GL_WL",
			"BS_O_JPN_SAKUSENGUN_2028_Medic_WL",
			"BS_B_JPN_SAKUSENGUN_2028_Medic_WL",
			"BS_I_JPN_SAKUSENGUN_2028_Medic_WL",
			"BS_O_JPN_SAKUSENGUN_2028_SNP_WL",
			"BS_B_JPN_SAKUSENGUN_2028_SNP_WL",
			"BS_I_JPN_SAKUSENGUN_2028_SNP_WL",
			"BS_O_JPN_SAKUSENGUN_2028_RTO_WL",
			"BS_B_JPN_SAKUSENGUN_2028_RTO_WL",
			"BS_I_JPN_SAKUSENGUN_2028_RTO_WL",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_DT",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_DT",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_DT",
			"BS_O_JPN_SAKUSENGUN_2028_AR_DT",
			"BS_B_JPN_SAKUSENGUN_2028_AR_DT",
			"BS_I_JPN_SAKUSENGUN_2028_AR_DT",
			"BS_O_JPN_SAKUSENGUN_2028_Rifleman_DT",
			"BS_B_JPN_SAKUSENGUN_2028_Rifleman_DT",
			"BS_I_JPN_SAKUSENGUN_2028_Rifleman_DT",
			"BS_O_JPN_SAKUSENGUN_2028_GL_DT",
			"BS_B_JPN_SAKUSENGUN_2028_GL_DT",
			"BS_I_JPN_SAKUSENGUN_2028_GL_DT",
			"BS_O_JPN_SAKUSENGUN_2028_Medic_DT",
			"BS_B_JPN_SAKUSENGUN_2028_Medic_DT",
			"BS_I_JPN_SAKUSENGUN_2028_Medic_DT",
			"BS_O_JPN_SAKUSENGUN_2028_SNP_DT",
			"BS_B_JPN_SAKUSENGUN_2028_SNP_DT",
			"BS_I_JPN_SAKUSENGUN_2028_SNP_DT",
			"BS_O_JPN_SAKUSENGUN_2028_RTO_DT",
			"BS_B_JPN_SAKUSENGUN_2028_RTO_DT",
			"BS_I_JPN_SAKUSENGUN_2028_RTO_DT",
			"BS_O_JPN_SAKUSENGUN_2028_DIVER_WT",
			"BS_B_JPN_SAKUSENGUN_2028_DIVER_WT",
			"BS_I_JPN_SAKUSENGUN_2028_DIVER_WT",
			"BS_O_JPN_SAKUSENGUN_2028_AR_WT",
			"BS_B_JPN_SAKUSENGUN_2028_AR_WT",
			"BS_I_JPN_SAKUSENGUN_2028_AR_WT",
			"BS_O_JPN_SAKUSENGUN_2028_Rifleman_WT",
			"BS_B_JPN_SAKUSENGUN_2028_Rifleman_WT",
			"BS_I_JPN_SAKUSENGUN_2028_Rifleman_WT",
			"BS_O_JPN_SAKUSENGUN_2028_GL_WT",
			"BS_B_JPN_SAKUSENGUN_2028_GL_WT",
			"BS_I_JPN_SAKUSENGUN_2028_GL_WT",
			"BS_O_JPN_SAKUSENGUN_2028_Medic_WT",
			"BS_B_JPN_SAKUSENGUN_2028_Medic_WT",
			"BS_I_JPN_SAKUSENGUN_2028_Medic_WT",
			"BS_O_JPN_SAKUSENGUN_2028_SNP_WT",
			"BS_B_JPN_SAKUSENGUN_2028_SNP_WT",
			"BS_I_JPN_SAKUSENGUN_2028_SNP_WT",
			"BS_O_JPN_SAKUSENGUN_2028_RTO_WT",
			"BS_B_JPN_SAKUSENGUN_2028_RTO_WT",
			"BS_I_JPN_SAKUSENGUN_2028_RTO_WT",
			"BS_B_JPN_SAKUSENGUN_2028_aUuB2VopusE",
			"BS_O_JPN_SAKUSENGUN_2028_aUuB2VopusE",
			"BS_I_JPN_SAKUSENGUN_2028_aUuB2VopusE",
			"BS_B_JPN_SAKUSENGUN_2028_s2q6OdIXQQQ",
			"BS_O_JPN_SAKUSENGUN_2028_s2q6OdIXQQQ",
			"BS_I_JPN_SAKUSENGUN_2028_s2q6OdIXQQQ",
			"BS_B_JPN_SAKUSENGUN_2028_7MuJOdKXBwQ",
			"BS_O_JPN_SAKUSENGUN_2028_7MuJOdKXBwQ",
			"BS_I_JPN_SAKUSENGUN_2028_7MuJOdKXBwQ",
			"BS_B_JPN_SAKUSENGUN_2028_aBjj4n_GfMQ",
			"BS_O_JPN_SAKUSENGUN_2028_aBjj4n_GfMQ",
			"BS_I_JPN_SAKUSENGUN_2028_aBjj4n_GfMQ",
			"BS_B_JPN_SAKUSENGUN_2028_sooKT0NKJDY",
			"BS_O_JPN_SAKUSENGUN_2028_sooKT0NKJDY",
			"BS_I_JPN_SAKUSENGUN_2028_sooKT0NKJDY",
			"BS_B_JPN_SAKUSENGUN_2028_iGj_v277fT4",
			"BS_O_JPN_SAKUSENGUN_2028_iGj_v277fT4",
			"BS_I_JPN_SAKUSENGUN_2028_iGj_v277fT4",
			"BS_B_JPN_SAKUSENGUN_2028_y_B9UhEs_Ws",
			"BS_O_JPN_SAKUSENGUN_2028_y_B9UhEs_Ws",
			"BS_I_JPN_SAKUSENGUN_2028_y_B9UhEs_Ws",
			"BS_B_JPN_SAKUSENGUN_2028_1o6uIHS1130",
			"BS_O_JPN_SAKUSENGUN_2028_1o6uIHS1130",
			"BS_I_JPN_SAKUSENGUN_2028_1o6uIHS1130",
			"BS_B_JPN_SAKUSENGUN_2028_ok20_sD9QLE",
			"BS_O_JPN_SAKUSENGUN_2028_ok20_sD9QLE",
			"BS_I_JPN_SAKUSENGUN_2028_ok20_sD9QLE",
			"BS_B_JPN_SAKUSENGUN_2028_mBsektWDTmc",
			"BS_O_JPN_SAKUSENGUN_2028_mBsektWDTmc",
			"BS_I_JPN_SAKUSENGUN_2028_mBsektWDTmc",
			"BS_B_JPN_SAKUSENGUN_2028_bBrXubhVocs",
			"BS_O_JPN_SAKUSENGUN_2028_bBrXubhVocs",
			"BS_I_JPN_SAKUSENGUN_2028_bBrXubhVocs",
			"BS_B_JPN_SAKUSENGUN_2028_H0L3L2SNNbM",
			"BS_O_JPN_SAKUSENGUN_2028_H0L3L2SNNbM",
			"BS_I_JPN_SAKUSENGUN_2028_H0L3L2SNNbM",
			"BS_B_JPN_SAKUSENGUN_2028_B4ky3GpvdV0",
			"BS_O_JPN_SAKUSENGUN_2028_B4ky3GpvdV0",
			"BS_I_JPN_SAKUSENGUN_2028_B4ky3GpvdV0",
			"BS_B_JPN_SAKUSENGUN_2028_uooy3GpwdV0",
			"BS_O_JPN_SAKUSENGUN_2028_uooy3GpwdV0",
			"BS_I_JPN_SAKUSENGUN_2028_uooy3GpwdV0",
			"BS_B_JPN_SAKUSENGUN_2028_HQlKM6MGfB0",
			"BS_O_JPN_SAKUSENGUN_2028_HQlKM6MGfB0",
			"BS_I_JPN_SAKUSENGUN_2028_HQlKM6MGfB0",
			"BS_B_JPN_SAKUSENGUN_2028_PS8Gl5AflsM",
			"BS_O_JPN_SAKUSENGUN_2028_PS8Gl5AflsM",
			"BS_I_JPN_SAKUSENGUN_2028_PS8Gl5AflsM",
			"BS_B_JPN_SAKUSENGUN_2028_l1o6wmMC3QM",
			"BS_O_JPN_SAKUSENGUN_2028_l1o6wmMC3QM",
			"BS_I_JPN_SAKUSENGUN_2028_l1o6wmMC3QM",
			"BS_B_JPN_SAKUSENGUN_2028_CeJDsGNJK_M",
			"BS_O_JPN_SAKUSENGUN_2028_CeJDsGNJK_M",
			"BS_I_JPN_SAKUSENGUN_2028_CeJDsGNJK_M",
			"BS_B_JPN_SAKUSENGUN_2028_Az5ywmMvHgQ",
			"BS_O_JPN_SAKUSENGUN_2028_Az5ywmMvHgQ",
			"BS_I_JPN_SAKUSENGUN_2028_Az5ywmMvHgQ",
			"BS_B_JPN_SAKUSENGUN_2028_6cCDbFNj72Y",
			"BS_O_JPN_SAKUSENGUN_2028_6cCDbFNj72Y",
			"BS_I_JPN_SAKUSENGUN_2028_6cCDbFNj72Y",
			"BS_B_JPN_SAKUSENGUN_2028_Xgy1Y8FzU2w",
			"BS_O_JPN_SAKUSENGUN_2028_Xgy1Y8FzU2w",
			"BS_I_JPN_SAKUSENGUN_2028_Xgy1Y8FzU2w",
			"BS_B_JPN_SAKUSENGUN_2028_rREfdk9lws4",
			"BS_O_JPN_SAKUSENGUN_2028_rREfdk9lws4",
			"BS_I_JPN_SAKUSENGUN_2028_rREfdk9lws4",
			"BS_B_JPN_SAKUSENGUN_2028_uaWDbFNT72Y",
			"BS_O_JPN_SAKUSENGUN_2028_uaWDbFNT72Y",
			"BS_I_JPN_SAKUSENGUN_2028_uaWDbFNT72Y",
			"BS_B_JPN_SAKUSENGUN_2028_sEx7eef9wdY",
			"BS_O_JPN_SAKUSENGUN_2028_sEx7eef9wdY",
			"BS_I_JPN_SAKUSENGUN_2028_sEx7eef9wdY",
			"BS_B_JPN_SAKUSENGUN_2028_lpIMSwX3pGc",
			"BS_O_JPN_SAKUSENGUN_2028_lpIMSwX3pGc",
			"BS_I_JPN_SAKUSENGUN_2028_lpIMSwX3pGc",
			"BS_B_JPN_SAKUSENGUN_2028_D20SM6MDOx0",
			"BS_O_JPN_SAKUSENGUN_2028_D20SM6MDOx0",
			"BS_I_JPN_SAKUSENGUN_2028_D20SM6MDOx0",
			"BS_B_JPN_SAKUSENGUN_2028_Y3yee_Q1_6M",
			"BS_O_JPN_SAKUSENGUN_2028_Y3yee_Q1_6M",
			"BS_I_JPN_SAKUSENGUN_2028_Y3yee_Q1_6M",
			"BS_B_JPN_SAKUSENGUN_2028_zi3AbSLtZIY",
			"BS_O_JPN_SAKUSENGUN_2028_zi3AbSLtZIY",
			"BS_I_JPN_SAKUSENGUN_2028_zi3AbSLtZIY",
			"BS_B_JPN_SAKUSENGUN_2028_tT5Y0uysOkY",
			"BS_O_JPN_SAKUSENGUN_2028_tT5Y0uysOkY",
			"BS_I_JPN_SAKUSENGUN_2028_tT5Y0uysOkY",
			"BS_B_JPN_SAKUSENGUN_2028_r2d7yOxa2TQ",
			"BS_O_JPN_SAKUSENGUN_2028_r2d7yOxa2TQ",
			"BS_I_JPN_SAKUSENGUN_2028_r2d7yOxa2TQ",
			"BS_B_JPN_SAKUSENGUN_2028_a_ZiaLLFDLs",
			"BS_O_JPN_SAKUSENGUN_2028_a_ZiaLLFDLs",
			"BS_I_JPN_SAKUSENGUN_2028_a_ZiaLLFDLs",
			"BS_B_JPN_SAKUSENGUN_2028_fuWm8C7Db30",
			"BS_O_JPN_SAKUSENGUN_2028_fuWm8C7Db30",
			"BS_I_JPN_SAKUSENGUN_2028_fuWm8C7Db30",
			"BS_B_JPN_SAKUSENGUN_2028_LnDPXO6Y_qw",
			"BS_O_JPN_SAKUSENGUN_2028_LnDPXO6Y_qw",
			"BS_I_JPN_SAKUSENGUN_2028_LnDPXO6Y_qw",
			"BS_B_JPN_SAKUSENGUN_2028_XI4tDhq8hpw",
			"BS_O_JPN_SAKUSENGUN_2028_XI4tDhq8hpw",
			"BS_I_JPN_SAKUSENGUN_2028_XI4tDhq8hpw",
			"BS_B_JPN_SAKUSENGUN_2028_SvQlMfJZcyY",
			"BS_O_JPN_SAKUSENGUN_2028_SvQlMfJZcyY",
			"BS_I_JPN_SAKUSENGUN_2028_SvQlMfJZcyY",
			"BS_B_JPN_SAKUSENGUN_2028__tBz_CZwvVw",
			"BS_O_JPN_SAKUSENGUN_2028__tBz_CZwvVw",
			"BS_I_JPN_SAKUSENGUN_2028__tBz_CZwvVw",
			"BS_B_JPN_SAKUSENGUN_2028_uhDfiI2G_7E",
			"BS_O_JPN_SAKUSENGUN_2028_uhDfiI2G_7E",
			"BS_I_JPN_SAKUSENGUN_2028_uhDfiI2G_7E",
			"BS_B_JPN_SAKUSENGUN_2028_EVebRiKV_BA",
			"BS_O_JPN_SAKUSENGUN_2028_EVebRiKV_BA",
			"BS_I_JPN_SAKUSENGUN_2028_EVebRiKV_BA",
			"BS_B_JPN_SAKUSENGUN_2028_OenZqvfN__I",
			"BS_O_JPN_SAKUSENGUN_2028_OenZqvfN__I",
			"BS_I_JPN_SAKUSENGUN_2028_OenZqvfN__I",
			"BS_B_JPN_SAKUSENGUN_2028_pVdMW49hADs",
			"BS_O_JPN_SAKUSENGUN_2028_pVdMW49hADs",
			"BS_I_JPN_SAKUSENGUN_2028_pVdMW49hADs",
			"BS_B_JPN_SAKUSENGUN_2028_GWEdtnFtwZ4",
			"BS_O_JPN_SAKUSENGUN_2028_GWEdtnFtwZ4",
			"BS_I_JPN_SAKUSENGUN_2028_GWEdtnFtwZ4",
			"BS_B_JPN_SAKUSENGUN_2028_QS4ldszptTQ",
			"BS_O_JPN_SAKUSENGUN_2028_QS4ldszptTQ",
			"BS_I_JPN_SAKUSENGUN_2028_QS4ldszptTQ",
			"BS_B_JPN_SAKUSENGUN_2028_mb7fyK576JI",
			"BS_O_JPN_SAKUSENGUN_2028_mb7fyK576JI",
			"BS_I_JPN_SAKUSENGUN_2028_mb7fyK576JI",
			"BS_B_JPN_SAKUSENGUN_2028_gdLSc7FB4Sg",
			"BS_O_JPN_SAKUSENGUN_2028_gdLSc7FB4Sg",
			"BS_I_JPN_SAKUSENGUN_2028_gdLSc7FB4Sg"
};
	};
};
class CfgFactionClasses {
	// As Friendly (BluFOR)
	class BS_B_JPN_SAKUSENGUN_2028_BASE { 
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
		brokenSkullArsenal[]={"rhsusf_weap_MP7A2","rhsusf_acc_anpeq15side_bk","Tier1_Eotech551_Riser_Black","rhsusf_mag_40Rnd_46x30_AP","rhsusf_acc_grip2","Tier1_P320","Tier1_X300U","Tier1_Docter","Tier1_17Rnd_9x19_P320_JHP","USP_G3C_KP_OR_MCT","ACE_EarPlugs","ACE_morphine","ACE_tourniquet","ACE_packingBandage","ACE_quikclot","ACE_RangeCard","ACE_microDAGR","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_CableTie","kat_chestSeal","kat_guedel","USP_CRYE_CPC_COMMS_MCT","H_PilotHelmetHeli_O","ACE_Vector","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","USP_GPNVG18_WP_GM_TAR_BLK","Tier1_P320_TB","USP_G3C_MX_MCW","USP_OPSCORE_FASTMTC_MCT_CMGTW","TFAR_anprc154","USP_PVS15_WP_TAR","Tier1_MK46_Mod0","rhsusf_acc_nt4_black","Tier1_Mk46Mod0_LA5_M600V_Black_FL","rhsusf_acc_su230_mrds","rhsusf_200Rnd_556x45_M855_soft_pouch","Tier1_SAW_Bipod_2","Tier1_HK416D145_CTR","Tier1_416_LA5_Side","rhsusf_acc_su230a_mrds","rhs_mag_30Rnd_556x45_Mk318_Stanag","Tier1_GripPod_Black","Tier1_Octane9","Tier1_DBALPL","Tier1_MRDS","Tier1_21Rnd_9x19_P320_FMJ","USP_G3C_RS_CU_KP_MX_VQ_MCT","Tier1_HK416D10_CTR","Tier1_416_LA5_M600V_alt_Black","rhsusf_acc_su230a","rhs_weap_M320","rhs_mag_M441_HE","USP_G3C_CS_KP_OR_VQ_MCT","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","USP_G3C_CS_CU_KP_MCT","kat_accuvac","kat_stethoscope","ACE_adenosine","ACE_elasticBandage","ACE_plasmaIV","ACE_plasmaIV_500","ACE_splint","ACE_suture","kat_larynx","kat_naloxone","kat_IO_FAST","kat_ncdKit","kat_aatKit","kat_Pulseoximeter","rhs_weap_m14ebrri","rhsusf_acc_aac_scarh_silencer","Tier1_LeupoldM3A_Geissele_Black","ACE_20Rnd_762x51_Mag_Tracer_Dim","rhsusf_acc_harris_bipod","USP_G3C_CU_KP_OR_MCT","Tier1_SIG_MCX_115_Virtus_300BLK_Black","Tier1_SOCOM556_2_Mini_Black","Tier1_MCX_LA5_Side","rhsusf_acc_ACOG_RMR","Tier1_30Rnd_762x35_300BLK_RNBT_PMAG","Tier1_GripPod_MLOK_Black","rhs_weap_m72a7","USP_G3C_KP_MX_MCT","USP_CRYE_CPC_COMMS_RGR","USP_OPSCORE_FASTMTC_MCT_CTW","Tier1_MK48_Mod0","Tier1_SOCOM762MG_Black","Tier1_Mk48Mod0_LA5_M600V_FL","Tier1_Elcan_156_C2_Docter_Black","Tier1_250Rnd_762x51_Belt_M80","USP_G3C_MX_MCT","Tier1_250Rnd_762x51_Belt_M61_AP","Tier1_250Rnd_762x51_Belt_M62_Tracer","rhs_weap_hk416d145_m320","Tier1_KAC_556_QDC_CQB_Black","rhsusf_acc_anpeq15_bk_top","Tier1_EXPS3_0_G33_Black_Up","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M397_HET","ACE_HuntIR_monitor","ACE_CTS9","rhs_mag_m18_green","rhs_mag_m18_red","SmokeShell","rhs_mag_mk84","rhs_mag_m67","rhs_mag_m18_yellow","Chemlight_blue","ACE_FlareTripMine_Mag","DemoCharge_Remote_Mag","rhsusf_m112_mag","SLAMDirectionalMine_Wire_Mag","rhs_mag_M433_HEDP","srifle_LRR_F","rhsusf_acc_nxs_5522x56_md_sun","ACE_7Rnd_408_305gr_Mag","U_B_T_Sniper_F","rhs_weap_fgm148","rhs_fgm148_magazine_AT","Tier1_M110k5_ACS_65mm","Tier1_KAC_762_DSR","Tier1_LeupoldM3A_Geissele_Docter_Tan","Tier1_20Rnd_65x48_Creedmoor_SR25_Mag","Titan_AA","USP_BASEBALL_CAP_MCT","USP_PVS14_WP_TAR","Tier1_MK46_Mod0_Para","rhsusf_acc_su230","rhsusf_200Rnd_556x45_M855_mixed_soft_pouch","rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_coyote","rhsusf_200Rnd_556x45_M855_soft_pouch_ucp","rhsusf_200Rnd_556x45_M855_soft_pouch_coyote","Tier1_SR16_Carbine_Mod2_CTR_Black","Tier1_SRD762_Black","Tier1_URX4_NGAL_M600V_alt_Black_FL","Tier1_Eotech551_3xMag_Riser_Black_Up","rhs_mag_30Rnd_556x45_Mk262_PMAG","Tier1_AFG_MLOK_Black","USP_G3C_VQ_MCT","rhs_mag_30Rnd_556x45_M193_Stanag","rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red","USP_OPSCORE_FASTMTC_MCT_CMSW","U_O_FullGhillie_lsh"};

		garage[]={{"BS_B_JPN_SAKUSENGUN_2028_aUuB2VopusE",2,1500,0},{"BS_B_JPN_SAKUSENGUN_2028_s2q6OdIXQQQ",0,4000,-1},{"BS_B_JPN_SAKUSENGUN_2028_7MuJOdKXBwQ",0,4000,-1},{"BS_B_JPN_SAKUSENGUN_2028_aBjj4n_GfMQ",0,100,-1},{"BS_B_JPN_SAKUSENGUN_2028_sooKT0NKJDY",0,100,-1},{"BS_B_JPN_SAKUSENGUN_2028_iGj_v277fT4",0,100,-1},{"BS_B_JPN_SAKUSENGUN_2028_y_B9UhEs_Ws",2,100,2},{"BS_B_JPN_SAKUSENGUN_2028_1o6uIHS1130",2,4000,1},{"BS_B_JPN_SAKUSENGUN_2028_ok20_sD9QLE",0,100,1},{"BS_B_JPN_SAKUSENGUN_2028_mBsektWDTmc",0,100,1},{"BS_B_JPN_SAKUSENGUN_2028_bBrXubhVocs",2,4000,1},{"BS_B_JPN_SAKUSENGUN_2028_H0L3L2SNNbM",2,4000,-1},{"BS_B_JPN_SAKUSENGUN_2028_B4ky3GpvdV0",2,100,-1},{"BS_B_JPN_SAKUSENGUN_2028_uooy3GpwdV0",2,100,-1},{"BS_B_JPN_SAKUSENGUN_2028_HQlKM6MGfB0",0,100,3},{"BS_B_JPN_SAKUSENGUN_2028_PS8Gl5AflsM",2,4000,1},{"BS_B_JPN_SAKUSENGUN_2028_l1o6wmMC3QM",2,4000,-1},{"BS_B_JPN_SAKUSENGUN_2028_CeJDsGNJK_M",0,4000,-1},{"BS_B_JPN_SAKUSENGUN_2028_Az5ywmMvHgQ",0,4000,3},{"BS_B_JPN_SAKUSENGUN_2028_6cCDbFNj72Y",0,50,3},{"BS_B_JPN_SAKUSENGUN_2028_Xgy1Y8FzU2w",0,50,-1},{"BS_B_JPN_SAKUSENGUN_2028_rREfdk9lws4",0,50,-1},{"BS_B_JPN_SAKUSENGUN_2028_uaWDbFNT72Y",0,50,-1},{"BS_B_JPN_SAKUSENGUN_2028_sEx7eef9wdY",0,50,3},{"BS_B_JPN_SAKUSENGUN_2028_lpIMSwX3pGc",0,100,3},{"BS_B_JPN_SAKUSENGUN_2028_D20SM6MDOx0",0,100,3},{"BS_B_JPN_SAKUSENGUN_2028_Y3yee_Q1_6M",2,1000,1},{"BS_B_JPN_SAKUSENGUN_2028_zi3AbSLtZIY",2,1000,1},{"BS_B_JPN_SAKUSENGUN_2028_tT5Y0uysOkY",2,1000,1},{"BS_B_JPN_SAKUSENGUN_2028_r2d7yOxa2TQ",2,1000,-1},{"BS_B_JPN_SAKUSENGUN_2028_a_ZiaLLFDLs",2,1000,-1},{"BS_B_JPN_SAKUSENGUN_2028_fuWm8C7Db30",2,1500,-1},{"BS_B_JPN_SAKUSENGUN_2028_LnDPXO6Y_qw",2,80000,-1},{"BS_B_JPN_SAKUSENGUN_2028_XI4tDhq8hpw",2,2000,-1},{"BS_B_JPN_SAKUSENGUN_2028_SvQlMfJZcyY",0,70,-1},{"BS_B_JPN_SAKUSENGUN_2028__tBz_CZwvVw",0,10,-1},{"BS_B_JPN_SAKUSENGUN_2028_uhDfiI2G_7E",0,10,-1},{"BS_B_JPN_SAKUSENGUN_2028_EVebRiKV_BA",0,150,-1},{"BS_B_JPN_SAKUSENGUN_2028_OenZqvfN__I",2,1000,-1},{"BS_B_JPN_SAKUSENGUN_2028_pVdMW49hADs",2,700,-1},{"BS_B_JPN_SAKUSENGUN_2028_GWEdtnFtwZ4",2,10000,-1},{"BS_B_JPN_SAKUSENGUN_2028_QS4ldszptTQ",2,10000,-1},{"BS_B_JPN_SAKUSENGUN_2028_mb7fyK576JI",2,4000,-1},{"BS_B_JPN_SAKUSENGUN_2028_gdLSc7FB4Sg",0,200,-1}};
		SamSystem[]={{"BS_B_JPN_SAKUSENGUN_2028_SvQlMfJZcyY","FIM-92F (DMS)"}};
		SearchLight[]={};
		StaticLowMG[]={{"BS_B_JPN_SAKUSENGUN_2028_uhDfiI2G_7E","M2HB (M3)"}};
		StaticHighMG[]={{"BS_B_JPN_SAKUSENGUN_2028__tBz_CZwvVw","M2HB (M3 AA)"}};
		StaticMotar[]={{"BS_B_JPN_SAKUSENGUN_2028_gdLSc7FB4Sg","Mk6 Mortar"}};
		StaticAntiAir[]={};
		VehicleTechnicals[]={"BS_B_JPN_SAKUSENGUN_2028_y_B9UhEs_Ws"};
		VehicleAntiAircraft[]={"BS_B_JPN_SAKUSENGUN_2028_aUuB2VopusE"};
		VehicleTanks[]={"BS_B_JPN_SAKUSENGUN_2028_1o6uIHS1130","BS_B_JPN_SAKUSENGUN_2028_ok20_sD9QLE","BS_B_JPN_SAKUSENGUN_2028_mBsektWDTmc","BS_B_JPN_SAKUSENGUN_2028_bBrXubhVocs","BS_B_JPN_SAKUSENGUN_2028_PS8Gl5AflsM","BS_B_JPN_SAKUSENGUN_2028_Y3yee_Q1_6M","BS_B_JPN_SAKUSENGUN_2028_zi3AbSLtZIY","BS_B_JPN_SAKUSENGUN_2028_tT5Y0uysOkY"};
		VehicleTransport[]={"BS_B_JPN_SAKUSENGUN_2028_HQlKM6MGfB0","BS_B_JPN_SAKUSENGUN_2028_Az5ywmMvHgQ","BS_B_JPN_SAKUSENGUN_2028_6cCDbFNj72Y","BS_B_JPN_SAKUSENGUN_2028_sEx7eef9wdY","BS_B_JPN_SAKUSENGUN_2028_lpIMSwX3pGc","BS_B_JPN_SAKUSENGUN_2028_D20SM6MDOx0"};
	};
	// As Friendly (BluFOR)
	class BS_B_JPN_SAKUSENGUN_2028 : BS_B_JPN_SAKUSENGUN_2028_BASE { 
		useForSpecOps = 1;   
		displayName = "JAPAN - SAKUSENGUN (2028)";
		side = 1;       
		flag = "\A3\Data_F\Flags\flag_US_CO.paa";
		icon = "\A3\Data_F\Flags\flag_US_CO.paa";
		priority = 0; 
	};
	// As Opposite Forces (OpFOR)
	class BS_O_JPN_SAKUSENGUN_2028 : BS_B_JPN_SAKUSENGUN_2028_BASE { 
		useForSpecOps = 1;
		displayName = "JAPAN - SAKUSENGUN (2028)";
		side = 0;       
		flag = "\A3\Data_F\Flags\flag_US_CO.paa";
		icon = "\A3\Data_F\Flags\flag_US_CO.paa";
		priority = 0; 
	};
	// As Independent (Independent)
	class BS_I_JPN_SAKUSENGUN_2028 : BS_B_JPN_SAKUSENGUN_2028_BASE { 
		useForSpecOps = 1;
		displayName = "JAPAN - SAKUSENGUN (2028)";
		side = 2;       
		flag = "\A3\Data_F\Flags\flag_US_CO.paa";
		icon = "\A3\Data_F\Flags\flag_US_CO.paa";
		priority = 0; 
	};
};
// As Friendly (BluFOR)
class SpecOps_Module_BLUFOR_Factions { 
	class BS_B_JPN_SAKUSENGUN_2028 { name = "JAPAN - SAKUSENGUN (2028)"; value = "BS_B_JPN_SAKUSENGUN_2028"; };  
};
// As Friendly (BluFOR)
class SpecOps_Module_OPFOR_Factions { 
	class BS_O_JPN_SAKUSENGUN_2028 { name = "JAPAN - SAKUSENGUN (2028)"; value = "BS_O_JPN_SAKUSENGUN_2028"; };  
};
// As Friendly (BluFOR)
class SpecOps_Module_GRE_Factions { 
	class BS_I_JPN_SAKUSENGUN_2028 { name = "JAPAN - SAKUSENGUN (2028)"; value = "BS_I_JPN_SAKUSENGUN_2028"; };  
};