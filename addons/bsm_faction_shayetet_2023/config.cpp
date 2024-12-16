

class CfgVehicles {
	class B_Survivor_F;
	class I_G_Survivor_F;
	class O_G_Survivor_F; 
	// This unit is for OpFOR
	class BS_O_ISRL_SHAYETET_2023_Rifleman_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Rifleman (Woodland)"; 
		faction = "BS_O_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_06", "Male04GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PANEL_CPC_SMK_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_TRG20_F","","Tier1_MP7_NGAL_M300C_Black_FL","rhsusf_acc_su230a_mrds",{"hlc_30rnd_556x45_SPR",30},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"ACE_wirecutter",1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"hlc_30rnd_556x45_SPR",9,30}}},{"USP_ZIPON_PANEL_CPC_SMK_RGR",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"hlc_30rnd_556x45_SPR",6,30}}},"rhsgref_helmet_pasgt_olive","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ISRL_SHAYETET_2023_Rifleman_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Rifleman (Woodland)"; 
		faction = "BS_B_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_06", "Male04GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PANEL_CPC_SMK_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_TRG20_F","","Tier1_MP7_NGAL_M300C_Black_FL","rhsusf_acc_su230a_mrds",{"hlc_30rnd_556x45_SPR",30},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"ACE_wirecutter",1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"hlc_30rnd_556x45_SPR",9,30}}},{"USP_ZIPON_PANEL_CPC_SMK_RGR",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"hlc_30rnd_556x45_SPR",6,30}}},"rhsgref_helmet_pasgt_olive","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ISRL_SHAYETET_2023_Rifleman_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Rifleman (Woodland)"; 
		faction = "BS_I_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_06", "Male04GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PANEL_CPC_SMK_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_TRG20_F","","Tier1_MP7_NGAL_M300C_Black_FL","rhsusf_acc_su230a_mrds",{"hlc_30rnd_556x45_SPR",30},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"ACE_wirecutter",1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"hlc_30rnd_556x45_SPR",9,30}}},{"USP_ZIPON_PANEL_CPC_SMK_RGR",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"hlc_30rnd_556x45_SPR",6,30}}},"rhsgref_helmet_pasgt_olive","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ISRL_SHAYETET_2023_AR_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Machine Gunner (Woodland)"; 
		faction = "BS_O_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_19", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_SF_BLK","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_SF_BLK","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"LMG_Zafir_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"LMG_Zafir_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_MCB";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"LMG_Zafir_F","","Tier1_MP7_NGAL_M300C_Black","rhsusf_acc_su230a_mrds",{"150Rnd_762x54_Box",150},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"150Rnd_762x54_Box",3,150}}},{"USP_REEBOW_3DAP_ACC1_MCB",{{"150Rnd_762x54_Box",4,150}}},"rhsgref_helmet_pasgt_olive","USP_SHEMAGH_SF_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ISRL_SHAYETET_2023_AR_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Machine Gunner (Woodland)"; 
		faction = "BS_B_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_19", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_SF_BLK","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_SF_BLK","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"LMG_Zafir_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"LMG_Zafir_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_MCB";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"LMG_Zafir_F","","Tier1_MP7_NGAL_M300C_Black","rhsusf_acc_su230a_mrds",{"150Rnd_762x54_Box",150},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"150Rnd_762x54_Box",3,150}}},{"USP_REEBOW_3DAP_ACC1_MCB",{{"150Rnd_762x54_Box",4,150}}},"rhsgref_helmet_pasgt_olive","USP_SHEMAGH_SF_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ISRL_SHAYETET_2023_AR_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Machine Gunner (Woodland)"; 
		faction = "BS_I_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_19", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_SF_BLK","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_SF_BLK","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"LMG_Zafir_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"LMG_Zafir_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_MCB";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"LMG_Zafir_F","","Tier1_MP7_NGAL_M300C_Black","rhsusf_acc_su230a_mrds",{"150Rnd_762x54_Box",150},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"150Rnd_762x54_Box",3,150}}},{"USP_REEBOW_3DAP_ACC1_MCB",{{"150Rnd_762x54_Box",4,150}}},"rhsgref_helmet_pasgt_olive","USP_SHEMAGH_SF_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ISRL_SHAYETET_2023_GL_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Grenadier (Woodland)"; 
		faction = "BS_O_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_15", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_NECK4_BLK","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_NECK4_BLK","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"arifle_TRG21_GL_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_TRG21_GL_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PANEL_CPC_SMK_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_TRG21_GL_F","","Tier1_MP7_NGAL_M300C_Black_FL","rhsusf_acc_su230a_mrds",{"hlc_30rnd_556x45_SPR",30},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"1Rnd_HE_Grenade_shell",16,1},{"1Rnd_Smoke_Grenade_shell",9,1},{"hlc_30rnd_556x45_SPR",6,30}}},{"USP_ZIPON_PANEL_CPC_SMK_SM_RGR",{{"1Rnd_HE_Grenade_shell",9,1},{"1Rnd_Smoke_Grenade_shell",5,1},{"hlc_30rnd_556x45_SPR",4,30}}},"rhsgref_helmet_pasgt_olive","USP_SHEMAGH_NECK4_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ISRL_SHAYETET_2023_GL_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Grenadier (Woodland)"; 
		faction = "BS_B_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_15", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_NECK4_BLK","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_NECK4_BLK","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"arifle_TRG21_GL_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_TRG21_GL_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PANEL_CPC_SMK_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_TRG21_GL_F","","Tier1_MP7_NGAL_M300C_Black_FL","rhsusf_acc_su230a_mrds",{"hlc_30rnd_556x45_SPR",30},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"1Rnd_HE_Grenade_shell",16,1},{"1Rnd_Smoke_Grenade_shell",9,1},{"hlc_30rnd_556x45_SPR",6,30}}},{"USP_ZIPON_PANEL_CPC_SMK_SM_RGR",{{"1Rnd_HE_Grenade_shell",9,1},{"1Rnd_Smoke_Grenade_shell",5,1},{"hlc_30rnd_556x45_SPR",4,30}}},"rhsgref_helmet_pasgt_olive","USP_SHEMAGH_NECK4_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ISRL_SHAYETET_2023_GL_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Grenadier (Woodland)"; 
		faction = "BS_I_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_15", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_NECK4_BLK","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_NECK4_BLK","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"arifle_TRG21_GL_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_TRG21_GL_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PANEL_CPC_SMK_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_TRG21_GL_F","","Tier1_MP7_NGAL_M300C_Black_FL","rhsusf_acc_su230a_mrds",{"hlc_30rnd_556x45_SPR",30},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"1Rnd_HE_Grenade_shell",16,1},{"1Rnd_Smoke_Grenade_shell",9,1},{"hlc_30rnd_556x45_SPR",6,30}}},{"USP_ZIPON_PANEL_CPC_SMK_SM_RGR",{{"1Rnd_HE_Grenade_shell",9,1},{"1Rnd_Smoke_Grenade_shell",5,1},{"hlc_30rnd_556x45_SPR",4,30}}},"rhsgref_helmet_pasgt_olive","USP_SHEMAGH_NECK4_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ISRL_SHAYETET_2023_SNP_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Sniper (Woodland)"; 
		faction = "BS_O_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"TanoanHead_A3_05", "Male02GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","rhsusf_shemagh2_grn","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","rhsusf_shemagh2_grn","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"hlc_rifle_m14sopmod","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_m14sopmod","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_m14sopmod","","rhsusf_acc_anpeq15side_bk","rhsusf_acc_M8541_mrds",{"hlc_20Rnd_762x51_mk316_M14",20},{},"Tier1_Harris_Bipod_Black"},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"hlc_20Rnd_762x51_mk316_M14",9,20}}},{"USP_REEBOW_3DAP_ACC1_MCT",{{"hlc_20Rnd_762x51_mk316_M14",10,20}}},"rhsgref_helmet_pasgt_olive","rhsusf_shemagh2_grn",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ISRL_SHAYETET_2023_SNP_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Sniper (Woodland)"; 
		faction = "BS_B_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"TanoanHead_A3_05", "Male02GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","rhsusf_shemagh2_grn","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","rhsusf_shemagh2_grn","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"hlc_rifle_m14sopmod","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_m14sopmod","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_m14sopmod","","rhsusf_acc_anpeq15side_bk","rhsusf_acc_M8541_mrds",{"hlc_20Rnd_762x51_mk316_M14",20},{},"Tier1_Harris_Bipod_Black"},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"hlc_20Rnd_762x51_mk316_M14",9,20}}},{"USP_REEBOW_3DAP_ACC1_MCT",{{"hlc_20Rnd_762x51_mk316_M14",10,20}}},"rhsgref_helmet_pasgt_olive","rhsusf_shemagh2_grn",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ISRL_SHAYETET_2023_SNP_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Sniper (Woodland)"; 
		faction = "BS_I_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"TanoanHead_A3_05", "Male02GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","rhsusf_shemagh2_grn","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","rhsusf_shemagh2_grn","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"hlc_rifle_m14sopmod","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_m14sopmod","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_m14sopmod","","rhsusf_acc_anpeq15side_bk","rhsusf_acc_M8541_mrds",{"hlc_20Rnd_762x51_mk316_M14",20},{},"Tier1_Harris_Bipod_Black"},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"hlc_20Rnd_762x51_mk316_M14",9,20}}},{"USP_REEBOW_3DAP_ACC1_MCT",{{"hlc_20Rnd_762x51_mk316_M14",10,20}}},"rhsgref_helmet_pasgt_olive","rhsusf_shemagh2_grn",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ISRL_SHAYETET_2023_Medic_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Doctor (Woodland)"; 
		faction = "BS_O_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_20", "Male01GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"hlc_rifle_M4","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_M4","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_M4","rhsusf_acc_SFMB556","rhsusf_acc_anpeq15side_bk","Tier1_Eotech551_L3_Black_Up",{"hlc_30rnd_556x45_SPR",30},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_accuvac",1}}},{"USP_CRYE_CPC_MEDIC_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"hlc_30rnd_556x45_SPR",13,30}}},{"B_Kitbag_rgr",{{"ACE_surgicalKit",2},{"kat_AED",1},{"kat_stethoscope",1},{"ACE_adenosine",2},{"ACE_elasticBandage",15},{"ACE_packingBandage",15},{"ACE_quikclot",15},{"kat_larynx",6},{"ACE_epinephrine",4},{"ACE_morphine",4},{"kat_naloxone",2},{"kat_IO_FAST",7},{"kat_ncdKit",2},{"kat_aatKit",12},{"kat_chestSeal",6},{"ACE_plasmaIV",3},{"ACE_plasmaIV_500",6},{"kat_Pulseoximeter",3},{"ACE_splint",2},{"ACE_suture",12},{"ACE_tourniquet",4},{"hlc_30rnd_556x45_SPR",2,30}}},"rhsgref_helmet_pasgt_olive","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ISRL_SHAYETET_2023_Medic_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Doctor (Woodland)"; 
		faction = "BS_B_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_20", "Male01GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"hlc_rifle_M4","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_M4","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_M4","rhsusf_acc_SFMB556","rhsusf_acc_anpeq15side_bk","Tier1_Eotech551_L3_Black_Up",{"hlc_30rnd_556x45_SPR",30},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_accuvac",1}}},{"USP_CRYE_CPC_MEDIC_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"hlc_30rnd_556x45_SPR",13,30}}},{"B_Kitbag_rgr",{{"ACE_surgicalKit",2},{"kat_AED",1},{"kat_stethoscope",1},{"ACE_adenosine",2},{"ACE_elasticBandage",15},{"ACE_packingBandage",15},{"ACE_quikclot",15},{"kat_larynx",6},{"ACE_epinephrine",4},{"ACE_morphine",4},{"kat_naloxone",2},{"kat_IO_FAST",7},{"kat_ncdKit",2},{"kat_aatKit",12},{"kat_chestSeal",6},{"ACE_plasmaIV",3},{"ACE_plasmaIV_500",6},{"kat_Pulseoximeter",3},{"ACE_splint",2},{"ACE_suture",12},{"ACE_tourniquet",4},{"hlc_30rnd_556x45_SPR",2,30}}},"rhsgref_helmet_pasgt_olive","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ISRL_SHAYETET_2023_Medic_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Doctor (Woodland)"; 
		faction = "BS_I_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_20", "Male01GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"hlc_rifle_M4","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_M4","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_M4","rhsusf_acc_SFMB556","rhsusf_acc_anpeq15side_bk","Tier1_Eotech551_L3_Black_Up",{"hlc_30rnd_556x45_SPR",30},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_accuvac",1}}},{"USP_CRYE_CPC_MEDIC_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"hlc_30rnd_556x45_SPR",13,30}}},{"B_Kitbag_rgr",{{"ACE_surgicalKit",2},{"kat_AED",1},{"kat_stethoscope",1},{"ACE_adenosine",2},{"ACE_elasticBandage",15},{"ACE_packingBandage",15},{"ACE_quikclot",15},{"kat_larynx",6},{"ACE_epinephrine",4},{"ACE_morphine",4},{"kat_naloxone",2},{"kat_IO_FAST",7},{"kat_ncdKit",2},{"kat_aatKit",12},{"kat_chestSeal",6},{"ACE_plasmaIV",3},{"ACE_plasmaIV_500",6},{"kat_Pulseoximeter",3},{"ACE_splint",2},{"ACE_suture",12},{"ACE_tourniquet",4},{"hlc_30rnd_556x45_SPR",2,30}}},"rhsgref_helmet_pasgt_olive","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ISRL_SHAYETET_2023_DIVER_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Special 1 (Woodland)"; 
		faction = "BS_O_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_12", "Male01GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "TFAR_mr3000_bwmod";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_TRG20_F","","Tier1_MP7_NGAL_M300C_Black_FL","rhsusf_acc_su230a_mrds",{"hlc_30rnd_556x45_SPR",30},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_COMMS_BELT_RGR",{{"ACE_wirecutter",1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"hlc_30rnd_556x45_SPR",11,30}}},{"TFAR_mr3000_bwmod",{{"hlc_30rnd_556x45_SPR",9,30}}},"rhsgref_helmet_pasgt_olive","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ISRL_SHAYETET_2023_DIVER_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Special 1 (Woodland)"; 
		faction = "BS_B_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_12", "Male01GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "TFAR_mr3000_bwmod";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_TRG20_F","","Tier1_MP7_NGAL_M300C_Black_FL","rhsusf_acc_su230a_mrds",{"hlc_30rnd_556x45_SPR",30},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_COMMS_BELT_RGR",{{"ACE_wirecutter",1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"hlc_30rnd_556x45_SPR",11,30}}},{"TFAR_mr3000_bwmod",{{"hlc_30rnd_556x45_SPR",9,30}}},"rhsgref_helmet_pasgt_olive","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ISRL_SHAYETET_2023_DIVER_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Special 1 (Woodland)"; 
		faction = "BS_I_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_12", "Male01GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "TFAR_mr3000_bwmod";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_TRG20_F","","Tier1_MP7_NGAL_M300C_Black_FL","rhsusf_acc_su230a_mrds",{"hlc_30rnd_556x45_SPR",30},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_COMMS_BELT_RGR",{{"ACE_wirecutter",1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"hlc_30rnd_556x45_SPR",11,30}}},{"TFAR_mr3000_bwmod",{{"hlc_30rnd_556x45_SPR",9,30}}},"rhsgref_helmet_pasgt_olive","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ISRL_SHAYETET_2023_RTO_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Special 2 (Woodland)"; 
		faction = "BS_O_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"GreekHead_A3_06", "Male04GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"arifle_TRG20_F","launch_NLAW_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_TRG20_F","launch_NLAW_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PANEL_CPC_SMK_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_TRG20_F","","Tier1_MP7_NGAL_M300C_Black_FL","rhsusf_acc_su230a_mrds",{"hlc_30rnd_556x45_SPR",30},{},""},{"launch_NLAW_F","","","",{},{},""},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"ACE_wirecutter",1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"hlc_30rnd_556x45_SPR",11,30}}},{"USP_ZIPON_PANEL_CPC_SMK_RGR",{{"hlc_30rnd_556x45_SPR",7,30}}},"rhsgref_helmet_pasgt_olive","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ISRL_SHAYETET_2023_RTO_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Special 2 (Woodland)"; 
		faction = "BS_B_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"GreekHead_A3_06", "Male04GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"arifle_TRG20_F","launch_NLAW_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_TRG20_F","launch_NLAW_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PANEL_CPC_SMK_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_TRG20_F","","Tier1_MP7_NGAL_M300C_Black_FL","rhsusf_acc_su230a_mrds",{"hlc_30rnd_556x45_SPR",30},{},""},{"launch_NLAW_F","","","",{},{},""},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"ACE_wirecutter",1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"hlc_30rnd_556x45_SPR",11,30}}},{"USP_ZIPON_PANEL_CPC_SMK_RGR",{{"hlc_30rnd_556x45_SPR",7,30}}},"rhsgref_helmet_pasgt_olive","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ISRL_SHAYETET_2023_RTO_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Special 2 (Woodland)"; 
		faction = "BS_I_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"GreekHead_A3_06", "Male04GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"arifle_TRG20_F","launch_NLAW_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_TRG20_F","launch_NLAW_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PANEL_CPC_SMK_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_TRG20_F","","Tier1_MP7_NGAL_M300C_Black_FL","rhsusf_acc_su230a_mrds",{"hlc_30rnd_556x45_SPR",30},{},""},{"launch_NLAW_F","","","",{},{},""},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"ACE_wirecutter",1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"hlc_30rnd_556x45_SPR",11,30}}},{"USP_ZIPON_PANEL_CPC_SMK_RGR",{{"hlc_30rnd_556x45_SPR",7,30}}},"rhsgref_helmet_pasgt_olive","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ISRL_SHAYETET_2023_VAR_0_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 1"; 
		faction = "BS_O_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"TanoanHead_A3_05", "Male02GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"arifle_Galat_lxWS","launch_MRAWS_green_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_Galat_lxWS","launch_MRAWS_green_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_Galat_lxWS","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_anpeq15side_bk","rhsusf_acc_su230_mrds",{"hlc_30Rnd_762x39_b_ak",30},{},""},{"launch_MRAWS_green_F","","","",{"MRAWS_HEAT_F",1},{},""},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_Kitbag_rgr",{{"rhs_mag_maaws_HEAT",1,1},{"rhs_mag_maaws_HEDP",1,1},{"rhs_mag_maaws_HE",1,1}}},"rhsgref_helmet_pasgt_olive","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ISRL_SHAYETET_2023_VAR_0_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 1"; 
		faction = "BS_B_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"TanoanHead_A3_05", "Male02GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"arifle_Galat_lxWS","launch_MRAWS_green_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_Galat_lxWS","launch_MRAWS_green_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_Galat_lxWS","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_anpeq15side_bk","rhsusf_acc_su230_mrds",{"hlc_30Rnd_762x39_b_ak",30},{},""},{"launch_MRAWS_green_F","","","",{"MRAWS_HEAT_F",1},{},""},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_Kitbag_rgr",{{"rhs_mag_maaws_HEAT",1,1},{"rhs_mag_maaws_HEDP",1,1},{"rhs_mag_maaws_HE",1,1}}},"rhsgref_helmet_pasgt_olive","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ISRL_SHAYETET_2023_VAR_0_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 1"; 
		faction = "BS_I_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"TanoanHead_A3_05", "Male02GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"arifle_Galat_lxWS","launch_MRAWS_green_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_Galat_lxWS","launch_MRAWS_green_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_Galat_lxWS","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_anpeq15side_bk","rhsusf_acc_su230_mrds",{"hlc_30Rnd_762x39_b_ak",30},{},""},{"launch_MRAWS_green_F","","","",{"MRAWS_HEAT_F",1},{},""},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_Kitbag_rgr",{{"rhs_mag_maaws_HEAT",1,1},{"rhs_mag_maaws_HEDP",1,1},{"rhs_mag_maaws_HE",1,1}}},"rhsgref_helmet_pasgt_olive","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ISRL_SHAYETET_2023_VAR_1_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 2"; 
		faction = "BS_O_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"PersianHead_A3_01", "Male04GRE" ,"G_NATO_default"};
		uniformClass = "U_O_T_FullGhillie_tna_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsusf_opscore_rg_cover_pelt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsusf_opscore_rg_cover_pelt"}; 
		weapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "TFAR_mr3000_bwmod";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_TRG20_F","rhsusf_acc_nt4_black","Tier1_MP7_NGAL_M300C_Black_FL","Tier1_MicroT2_G33_Black_Up",{"hlc_30rnd_556x45_SPR",30},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"U_O_T_FullGhillie_tna_F",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_COMMS_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"TFAR_mr3000_bwmod",{}},"rhsusf_opscore_rg_cover_pelt","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ISRL_SHAYETET_2023_VAR_1_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 2"; 
		faction = "BS_B_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"PersianHead_A3_01", "Male04GRE" ,"G_NATO_default"};
		uniformClass = "U_O_T_FullGhillie_tna_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsusf_opscore_rg_cover_pelt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsusf_opscore_rg_cover_pelt"}; 
		weapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "TFAR_mr3000_bwmod";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_TRG20_F","rhsusf_acc_nt4_black","Tier1_MP7_NGAL_M300C_Black_FL","Tier1_MicroT2_G33_Black_Up",{"hlc_30rnd_556x45_SPR",30},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"U_O_T_FullGhillie_tna_F",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_COMMS_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"TFAR_mr3000_bwmod",{}},"rhsusf_opscore_rg_cover_pelt","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ISRL_SHAYETET_2023_VAR_1_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 2"; 
		faction = "BS_I_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"PersianHead_A3_01", "Male04GRE" ,"G_NATO_default"};
		uniformClass = "U_O_T_FullGhillie_tna_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsusf_opscore_rg_cover_pelt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsusf_opscore_rg_cover_pelt"}; 
		weapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "TFAR_mr3000_bwmod";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_TRG20_F","rhsusf_acc_nt4_black","Tier1_MP7_NGAL_M300C_Black_FL","Tier1_MicroT2_G33_Black_Up",{"hlc_30rnd_556x45_SPR",30},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"U_O_T_FullGhillie_tna_F",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_COMMS_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"TFAR_mr3000_bwmod",{}},"rhsusf_opscore_rg_cover_pelt","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ISRL_SHAYETET_2023_VAR_2_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 3"; 
		faction = "BS_O_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_08", "Male02GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","H_PilotHelmetFighter_O"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","H_PilotHelmetFighter_O"}; 
		weapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_Galat_lxWS","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_anpeq15side_bk","rhsusf_acc_su230_mrds",{"hlc_30Rnd_762x39_b_ak",30},{},""},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_Kitbag_rgr",{}},"H_PilotHelmetFighter_O","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ISRL_SHAYETET_2023_VAR_2_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 3"; 
		faction = "BS_B_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_08", "Male02GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","H_PilotHelmetFighter_O"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","H_PilotHelmetFighter_O"}; 
		weapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_Galat_lxWS","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_anpeq15side_bk","rhsusf_acc_su230_mrds",{"hlc_30Rnd_762x39_b_ak",30},{},""},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_Kitbag_rgr",{}},"H_PilotHelmetFighter_O","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ISRL_SHAYETET_2023_VAR_2_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 3"; 
		faction = "BS_I_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_08", "Male02GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","H_PilotHelmetFighter_O"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","H_PilotHelmetFighter_O"}; 
		weapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_Galat_lxWS","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_anpeq15side_bk","rhsusf_acc_su230_mrds",{"hlc_30Rnd_762x39_b_ak",30},{},""},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_Kitbag_rgr",{}},"H_PilotHelmetFighter_O","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ISRL_SHAYETET_2023_VAR_3_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 4"; 
		faction = "BS_O_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"AfricanHead_01", "Male03GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","H_PilotHelmetHeli_I_E"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","H_PilotHelmetHeli_I_E"}; 
		weapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_Galat_lxWS","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_anpeq15side_bk","rhsusf_acc_su230_mrds",{"hlc_30Rnd_762x39_b_ak",30},{},""},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_Kitbag_rgr",{}},"H_PilotHelmetHeli_I_E","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ISRL_SHAYETET_2023_VAR_3_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 4"; 
		faction = "BS_B_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"AfricanHead_01", "Male03GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","H_PilotHelmetHeli_I_E"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","H_PilotHelmetHeli_I_E"}; 
		weapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_Galat_lxWS","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_anpeq15side_bk","rhsusf_acc_su230_mrds",{"hlc_30Rnd_762x39_b_ak",30},{},""},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_Kitbag_rgr",{}},"H_PilotHelmetHeli_I_E","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ISRL_SHAYETET_2023_VAR_3_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 4"; 
		faction = "BS_I_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"AfricanHead_01", "Male03GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","H_PilotHelmetHeli_I_E"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","H_PilotHelmetHeli_I_E"}; 
		weapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_Galat_lxWS","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_anpeq15side_bk","rhsusf_acc_su230_mrds",{"hlc_30Rnd_762x39_b_ak",30},{},""},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_Kitbag_rgr",{}},"H_PilotHelmetHeli_I_E","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ISRL_SHAYETET_2023_VAR_4_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 5"; 
		faction = "BS_O_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"TanoanHead_A3_08", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","dzn_H_IDF_Mitznefet_Desert"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","dzn_H_IDF_Mitznefet_Desert"}; 
		weapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_Galat_lxWS","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_anpeq15side_bk","rhsusf_acc_su230_mrds",{"hlc_30Rnd_762x39_b_ak",30},{},""},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_Kitbag_rgr",{}},"dzn_H_IDF_Mitznefet_Desert","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ISRL_SHAYETET_2023_VAR_4_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 5"; 
		faction = "BS_B_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"TanoanHead_A3_08", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","dzn_H_IDF_Mitznefet_Desert"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","dzn_H_IDF_Mitznefet_Desert"}; 
		weapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_Galat_lxWS","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_anpeq15side_bk","rhsusf_acc_su230_mrds",{"hlc_30Rnd_762x39_b_ak",30},{},""},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_Kitbag_rgr",{}},"dzn_H_IDF_Mitznefet_Desert","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ISRL_SHAYETET_2023_VAR_4_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 5"; 
		faction = "BS_I_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"TanoanHead_A3_08", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","dzn_H_IDF_Mitznefet_Desert"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","dzn_H_IDF_Mitznefet_Desert"}; 
		weapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_Galat_lxWS","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_anpeq15side_bk","rhsusf_acc_su230_mrds",{"hlc_30Rnd_762x39_b_ak",30},{},""},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_Kitbag_rgr",{}},"dzn_H_IDF_Mitznefet_Desert","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ISRL_SHAYETET_2023_VAR_5_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 6"; 
		faction = "BS_O_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_20", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","rhsusf_shemagh2_grn","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","rhsusf_shemagh2_grn","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"hlc_rifle_m14sopmod","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_m14sopmod","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_m14sopmod","","rhsusf_acc_anpeq15side_bk","optic_tws",{"hlc_20Rnd_762x51_mk316_M14",20},{},"Tier1_Harris_Bipod_Black"},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"USP_REEBOW_3DAP_ACC1_MCT",{{"ACE_20Rnd_762x51_Mag_SD",1,20},{"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",1,20},{"ACE_20Rnd_762x51_Mag_Tracer",1,20},{"ACE_20Rnd_762x51_M993_AP_Mag",1,20},{"ACE_20Rnd_762x51_M118LR_Mag",1,20},{"ACE_20Rnd_762x51_Mag_Tracer_Dim",1,20}}},"rhsgref_helmet_pasgt_olive","rhsusf_shemagh2_grn",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ISRL_SHAYETET_2023_VAR_5_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 6"; 
		faction = "BS_B_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_20", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","rhsusf_shemagh2_grn","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","rhsusf_shemagh2_grn","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"hlc_rifle_m14sopmod","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_m14sopmod","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_m14sopmod","","rhsusf_acc_anpeq15side_bk","optic_tws",{"hlc_20Rnd_762x51_mk316_M14",20},{},"Tier1_Harris_Bipod_Black"},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"USP_REEBOW_3DAP_ACC1_MCT",{{"ACE_20Rnd_762x51_Mag_SD",1,20},{"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",1,20},{"ACE_20Rnd_762x51_Mag_Tracer",1,20},{"ACE_20Rnd_762x51_M993_AP_Mag",1,20},{"ACE_20Rnd_762x51_M118LR_Mag",1,20},{"ACE_20Rnd_762x51_Mag_Tracer_Dim",1,20}}},"rhsgref_helmet_pasgt_olive","rhsusf_shemagh2_grn",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ISRL_SHAYETET_2023_VAR_5_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 6"; 
		faction = "BS_I_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_20", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","rhsusf_shemagh2_grn","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","rhsusf_shemagh2_grn","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"hlc_rifle_m14sopmod","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_m14sopmod","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_m14sopmod","","rhsusf_acc_anpeq15side_bk","optic_tws",{"hlc_20Rnd_762x51_mk316_M14",20},{},"Tier1_Harris_Bipod_Black"},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"USP_REEBOW_3DAP_ACC1_MCT",{{"ACE_20Rnd_762x51_Mag_SD",1,20},{"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",1,20},{"ACE_20Rnd_762x51_Mag_Tracer",1,20},{"ACE_20Rnd_762x51_M993_AP_Mag",1,20},{"ACE_20Rnd_762x51_M118LR_Mag",1,20},{"ACE_20Rnd_762x51_Mag_Tracer_Dim",1,20}}},"rhsgref_helmet_pasgt_olive","rhsusf_shemagh2_grn",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ISRL_SHAYETET_2023_VAR_6_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 7"; 
		faction = "BS_O_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"AfricanHead_01", "Male04GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_SF_BLK","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_SF_BLK","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"LMG_Zafir_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"LMG_Zafir_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_MCB";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"LMG_Zafir_F","","Tier1_MP7_NGAL_M300C_Black_FL","optic_tws_mg",{"150Rnd_762x54_Box_Tracer",150},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"USP_REEBOW_3DAP_ACC1_MCB",{}},"rhsgref_helmet_pasgt_olive","USP_SHEMAGH_SF_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ISRL_SHAYETET_2023_VAR_6_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 7"; 
		faction = "BS_B_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"AfricanHead_01", "Male04GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_SF_BLK","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_SF_BLK","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"LMG_Zafir_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"LMG_Zafir_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_MCB";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"LMG_Zafir_F","","Tier1_MP7_NGAL_M300C_Black_FL","optic_tws_mg",{"150Rnd_762x54_Box_Tracer",150},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"USP_REEBOW_3DAP_ACC1_MCB",{}},"rhsgref_helmet_pasgt_olive","USP_SHEMAGH_SF_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ISRL_SHAYETET_2023_VAR_6_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 7"; 
		faction = "BS_I_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"AfricanHead_01", "Male04GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_SF_BLK","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_SF_BLK","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"LMG_Zafir_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"LMG_Zafir_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_MCB";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"LMG_Zafir_F","","Tier1_MP7_NGAL_M300C_Black_FL","optic_tws_mg",{"150Rnd_762x54_Box_Tracer",150},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"USP_REEBOW_3DAP_ACC1_MCB",{}},"rhsgref_helmet_pasgt_olive","USP_SHEMAGH_SF_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ISRL_SHAYETET_2023_Officer_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Officer (Woodland)"; 
		faction = "BS_O_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"AfricanHead_03", "Male04GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_khk"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_khk"}; 
		weapons[] = {"rhsusf_weap_m1911a1","ACE_Vector"}; 
		respawnWeapons[] = {"rhsusf_weap_m1911a1","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"rhsusf_weap_m1911a1","","","",{"rhsusf_mag_7x45acp_MHP",7},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{},"","G_Bandanna_khk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ISRL_SHAYETET_2023_Officer_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Officer (Woodland)"; 
		faction = "BS_B_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"AfricanHead_03", "Male04GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_khk"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_khk"}; 
		weapons[] = {"rhsusf_weap_m1911a1","ACE_Vector"}; 
		respawnWeapons[] = {"rhsusf_weap_m1911a1","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"rhsusf_weap_m1911a1","","","",{"rhsusf_mag_7x45acp_MHP",7},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{},"","G_Bandanna_khk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ISRL_SHAYETET_2023_Officer_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Officer (Woodland)"; 
		faction = "BS_I_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"AfricanHead_03", "Male04GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_khk"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_khk"}; 
		weapons[] = {"rhsusf_weap_m1911a1","ACE_Vector"}; 
		respawnWeapons[] = {"rhsusf_weap_m1911a1","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"rhsusf_weap_m1911a1","","","",{"rhsusf_mag_7x45acp_MHP",7},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{},"","G_Bandanna_khk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ISRL_SHAYETET_2023_Rifleman_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Rifleman (Desert)"; 
		faction = "BS_O_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_22_a", "Male03GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PANEL_CPC_SMK_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_TRG20_F","","Tier1_MP7_NGAL_M300C_Black_FL","rhsusf_acc_su230a_mrds",{"hlc_30rnd_556x45_SPR",30},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"ACE_EarPlugs",2},{"ACE_morphine",2},{"kat_guedel",4},{"kat_chestSeal",2},{"ACE_tourniquet",8},{"ACE_packingBandage",20},{"ACE_quikclot",20},{"ACE_RangeCard",2},{"ACE_microDAGR",2},{"ACE_IR_Strobe_Item",2},{"ACE_epinephrine",2},{"ACE_CableTie",6},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"hlc_30rnd_556x45_SPR",9,30}}},{"USP_ZIPON_PANEL_CPC_SMK_RGR",{{"ACE_EarPlugs",2},{"ACE_morphine",2},{"kat_guedel",4},{"kat_chestSeal",2},{"ACE_tourniquet",8},{"ACE_packingBandage",18},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"hlc_30rnd_556x45_SPR",6,30}}},"rhsgref_helmet_pasgt_olive","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ISRL_SHAYETET_2023_Rifleman_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Rifleman (Desert)"; 
		faction = "BS_B_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_22_a", "Male03GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PANEL_CPC_SMK_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_TRG20_F","","Tier1_MP7_NGAL_M300C_Black_FL","rhsusf_acc_su230a_mrds",{"hlc_30rnd_556x45_SPR",30},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"ACE_EarPlugs",2},{"ACE_morphine",2},{"kat_guedel",4},{"kat_chestSeal",2},{"ACE_tourniquet",8},{"ACE_packingBandage",20},{"ACE_quikclot",20},{"ACE_RangeCard",2},{"ACE_microDAGR",2},{"ACE_IR_Strobe_Item",2},{"ACE_epinephrine",2},{"ACE_CableTie",6},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"hlc_30rnd_556x45_SPR",9,30}}},{"USP_ZIPON_PANEL_CPC_SMK_RGR",{{"ACE_EarPlugs",2},{"ACE_morphine",2},{"kat_guedel",4},{"kat_chestSeal",2},{"ACE_tourniquet",8},{"ACE_packingBandage",18},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"hlc_30rnd_556x45_SPR",6,30}}},"rhsgref_helmet_pasgt_olive","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ISRL_SHAYETET_2023_Rifleman_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Rifleman (Desert)"; 
		faction = "BS_I_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_22_a", "Male03GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PANEL_CPC_SMK_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_TRG20_F","","Tier1_MP7_NGAL_M300C_Black_FL","rhsusf_acc_su230a_mrds",{"hlc_30rnd_556x45_SPR",30},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"ACE_EarPlugs",2},{"ACE_morphine",2},{"kat_guedel",4},{"kat_chestSeal",2},{"ACE_tourniquet",8},{"ACE_packingBandage",20},{"ACE_quikclot",20},{"ACE_RangeCard",2},{"ACE_microDAGR",2},{"ACE_IR_Strobe_Item",2},{"ACE_epinephrine",2},{"ACE_CableTie",6},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"hlc_30rnd_556x45_SPR",9,30}}},{"USP_ZIPON_PANEL_CPC_SMK_RGR",{{"ACE_EarPlugs",2},{"ACE_morphine",2},{"kat_guedel",4},{"kat_chestSeal",2},{"ACE_tourniquet",8},{"ACE_packingBandage",18},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"hlc_30rnd_556x45_SPR",6,30}}},"rhsgref_helmet_pasgt_olive","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ISRL_SHAYETET_2023_AR_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Machine Gunner (Desert)"; 
		faction = "BS_O_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"GreekHead_A3_09", "Male04GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_SF_BLK","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_SF_BLK","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"LMG_Zafir_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"LMG_Zafir_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_MCB";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"LMG_Zafir_F","","Tier1_MP7_NGAL_M300C_Black","rhsusf_acc_su230a_mrds",{"150Rnd_762x54_Box",150},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"150Rnd_762x54_Box",3,150}}},{"USP_REEBOW_3DAP_ACC1_MCB",{{"150Rnd_762x54_Box",4,150}}},"rhsgref_helmet_pasgt_olive","USP_SHEMAGH_SF_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ISRL_SHAYETET_2023_AR_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Machine Gunner (Desert)"; 
		faction = "BS_B_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"GreekHead_A3_09", "Male04GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_SF_BLK","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_SF_BLK","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"LMG_Zafir_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"LMG_Zafir_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_MCB";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"LMG_Zafir_F","","Tier1_MP7_NGAL_M300C_Black","rhsusf_acc_su230a_mrds",{"150Rnd_762x54_Box",150},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"150Rnd_762x54_Box",3,150}}},{"USP_REEBOW_3DAP_ACC1_MCB",{{"150Rnd_762x54_Box",4,150}}},"rhsgref_helmet_pasgt_olive","USP_SHEMAGH_SF_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ISRL_SHAYETET_2023_AR_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Machine Gunner (Desert)"; 
		faction = "BS_I_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"GreekHead_A3_09", "Male04GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_SF_BLK","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_SF_BLK","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"LMG_Zafir_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"LMG_Zafir_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_MCB";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"LMG_Zafir_F","","Tier1_MP7_NGAL_M300C_Black","rhsusf_acc_su230a_mrds",{"150Rnd_762x54_Box",150},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"150Rnd_762x54_Box",3,150}}},{"USP_REEBOW_3DAP_ACC1_MCB",{{"150Rnd_762x54_Box",4,150}}},"rhsgref_helmet_pasgt_olive","USP_SHEMAGH_SF_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ISRL_SHAYETET_2023_GL_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Grenadier (Desert)"; 
		faction = "BS_O_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"GreekHead_A3_07", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_NECK4_BLK","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_NECK4_BLK","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"arifle_TRG21_GL_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_TRG21_GL_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PANEL_CPC_SMK_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_TRG21_GL_F","","Tier1_MP7_NGAL_M300C_Black_FL","rhsusf_acc_su230a_mrds",{"hlc_30rnd_556x45_SPR",30},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"1Rnd_HE_Grenade_shell",16,1},{"1Rnd_Smoke_Grenade_shell",9,1},{"hlc_30rnd_556x45_SPR",6,30}}},{"USP_ZIPON_PANEL_CPC_SMK_SM_RGR",{{"1Rnd_HE_Grenade_shell",9,1},{"1Rnd_Smoke_Grenade_shell",5,1},{"hlc_30rnd_556x45_SPR",4,30}}},"rhsgref_helmet_pasgt_olive","USP_SHEMAGH_NECK4_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ISRL_SHAYETET_2023_GL_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Grenadier (Desert)"; 
		faction = "BS_B_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"GreekHead_A3_07", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_NECK4_BLK","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_NECK4_BLK","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"arifle_TRG21_GL_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_TRG21_GL_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PANEL_CPC_SMK_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_TRG21_GL_F","","Tier1_MP7_NGAL_M300C_Black_FL","rhsusf_acc_su230a_mrds",{"hlc_30rnd_556x45_SPR",30},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"1Rnd_HE_Grenade_shell",16,1},{"1Rnd_Smoke_Grenade_shell",9,1},{"hlc_30rnd_556x45_SPR",6,30}}},{"USP_ZIPON_PANEL_CPC_SMK_SM_RGR",{{"1Rnd_HE_Grenade_shell",9,1},{"1Rnd_Smoke_Grenade_shell",5,1},{"hlc_30rnd_556x45_SPR",4,30}}},"rhsgref_helmet_pasgt_olive","USP_SHEMAGH_NECK4_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ISRL_SHAYETET_2023_GL_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Grenadier (Desert)"; 
		faction = "BS_I_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"GreekHead_A3_07", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_NECK4_BLK","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_NECK4_BLK","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"arifle_TRG21_GL_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_TRG21_GL_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PANEL_CPC_SMK_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_TRG21_GL_F","","Tier1_MP7_NGAL_M300C_Black_FL","rhsusf_acc_su230a_mrds",{"hlc_30rnd_556x45_SPR",30},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"1Rnd_HE_Grenade_shell",16,1},{"1Rnd_Smoke_Grenade_shell",9,1},{"hlc_30rnd_556x45_SPR",6,30}}},{"USP_ZIPON_PANEL_CPC_SMK_SM_RGR",{{"1Rnd_HE_Grenade_shell",9,1},{"1Rnd_Smoke_Grenade_shell",5,1},{"hlc_30rnd_556x45_SPR",4,30}}},"rhsgref_helmet_pasgt_olive","USP_SHEMAGH_NECK4_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ISRL_SHAYETET_2023_SNP_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Sniper (Desert)"; 
		faction = "BS_O_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_19", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","rhsusf_shemagh2_grn","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","rhsusf_shemagh2_grn","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"hlc_rifle_m14sopmod","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_m14sopmod","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_m14sopmod","","rhsusf_acc_anpeq15side_bk","rhsusf_acc_M8541_mrds",{"hlc_20Rnd_762x51_mk316_M14",20},{},"Tier1_Harris_Bipod_Black"},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"hlc_20Rnd_762x51_mk316_M14",9,20}}},{"USP_REEBOW_3DAP_ACC1_MCT",{{"hlc_20Rnd_762x51_mk316_M14",10,20}}},"rhsgref_helmet_pasgt_olive","rhsusf_shemagh2_grn",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ISRL_SHAYETET_2023_SNP_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Sniper (Desert)"; 
		faction = "BS_B_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_19", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","rhsusf_shemagh2_grn","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","rhsusf_shemagh2_grn","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"hlc_rifle_m14sopmod","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_m14sopmod","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_m14sopmod","","rhsusf_acc_anpeq15side_bk","rhsusf_acc_M8541_mrds",{"hlc_20Rnd_762x51_mk316_M14",20},{},"Tier1_Harris_Bipod_Black"},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"hlc_20Rnd_762x51_mk316_M14",9,20}}},{"USP_REEBOW_3DAP_ACC1_MCT",{{"hlc_20Rnd_762x51_mk316_M14",10,20}}},"rhsgref_helmet_pasgt_olive","rhsusf_shemagh2_grn",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ISRL_SHAYETET_2023_SNP_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Sniper (Desert)"; 
		faction = "BS_I_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_19", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","rhsusf_shemagh2_grn","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","rhsusf_shemagh2_grn","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"hlc_rifle_m14sopmod","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_m14sopmod","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_m14sopmod","","rhsusf_acc_anpeq15side_bk","rhsusf_acc_M8541_mrds",{"hlc_20Rnd_762x51_mk316_M14",20},{},"Tier1_Harris_Bipod_Black"},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"hlc_20Rnd_762x51_mk316_M14",9,20}}},{"USP_REEBOW_3DAP_ACC1_MCT",{{"hlc_20Rnd_762x51_mk316_M14",10,20}}},"rhsgref_helmet_pasgt_olive","rhsusf_shemagh2_grn",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ISRL_SHAYETET_2023_Medic_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Doctor (Desert)"; 
		faction = "BS_O_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_14", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"hlc_rifle_M4","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_M4","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_M4","rhsusf_acc_SFMB556","rhsusf_acc_anpeq15side_bk","Tier1_Eotech551_L3_Black_Up",{"hlc_30rnd_556x45_SPR",30},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"kat_accuvac",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_MEDIC_BELT_RGR",{{"kat_stethoscope",1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"hlc_30rnd_556x45_SPR",13,30}}},{"B_Kitbag_rgr",{{"ACE_surgicalKit",2},{"kat_AED",1},{"kat_stethoscope",1},{"ACE_adenosine",2},{"ACE_elasticBandage",15},{"ACE_packingBandage",15},{"ACE_quikclot",15},{"kat_larynx",6},{"ACE_epinephrine",4},{"ACE_morphine",4},{"kat_naloxone",2},{"kat_IO_FAST",7},{"kat_ncdKit",2},{"kat_aatKit",12},{"kat_chestSeal",6},{"ACE_plasmaIV",3},{"ACE_plasmaIV_500",6},{"kat_Pulseoximeter",3},{"ACE_splint",2},{"ACE_suture",12},{"ACE_tourniquet",4},{"hlc_30rnd_556x45_SPR",2,30}}},"rhsgref_helmet_pasgt_olive","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ISRL_SHAYETET_2023_Medic_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Doctor (Desert)"; 
		faction = "BS_B_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_14", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"hlc_rifle_M4","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_M4","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_M4","rhsusf_acc_SFMB556","rhsusf_acc_anpeq15side_bk","Tier1_Eotech551_L3_Black_Up",{"hlc_30rnd_556x45_SPR",30},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"kat_accuvac",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_MEDIC_BELT_RGR",{{"kat_stethoscope",1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"hlc_30rnd_556x45_SPR",13,30}}},{"B_Kitbag_rgr",{{"ACE_surgicalKit",2},{"kat_AED",1},{"kat_stethoscope",1},{"ACE_adenosine",2},{"ACE_elasticBandage",15},{"ACE_packingBandage",15},{"ACE_quikclot",15},{"kat_larynx",6},{"ACE_epinephrine",4},{"ACE_morphine",4},{"kat_naloxone",2},{"kat_IO_FAST",7},{"kat_ncdKit",2},{"kat_aatKit",12},{"kat_chestSeal",6},{"ACE_plasmaIV",3},{"ACE_plasmaIV_500",6},{"kat_Pulseoximeter",3},{"ACE_splint",2},{"ACE_suture",12},{"ACE_tourniquet",4},{"hlc_30rnd_556x45_SPR",2,30}}},"rhsgref_helmet_pasgt_olive","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ISRL_SHAYETET_2023_Medic_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Doctor (Desert)"; 
		faction = "BS_I_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_14", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"hlc_rifle_M4","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_M4","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_M4","rhsusf_acc_SFMB556","rhsusf_acc_anpeq15side_bk","Tier1_Eotech551_L3_Black_Up",{"hlc_30rnd_556x45_SPR",30},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"kat_accuvac",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_MEDIC_BELT_RGR",{{"kat_stethoscope",1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"hlc_30rnd_556x45_SPR",13,30}}},{"B_Kitbag_rgr",{{"ACE_surgicalKit",2},{"kat_AED",1},{"kat_stethoscope",1},{"ACE_adenosine",2},{"ACE_elasticBandage",15},{"ACE_packingBandage",15},{"ACE_quikclot",15},{"kat_larynx",6},{"ACE_epinephrine",4},{"ACE_morphine",4},{"kat_naloxone",2},{"kat_IO_FAST",7},{"kat_ncdKit",2},{"kat_aatKit",12},{"kat_chestSeal",6},{"ACE_plasmaIV",3},{"ACE_plasmaIV_500",6},{"kat_Pulseoximeter",3},{"ACE_splint",2},{"ACE_suture",12},{"ACE_tourniquet",4},{"hlc_30rnd_556x45_SPR",2,30}}},"rhsgref_helmet_pasgt_olive","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ISRL_SHAYETET_2023_DIVER_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Special 1 (Desert)"; 
		faction = "BS_O_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"AfricanHead_02", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "TFAR_mr3000_bwmod";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_TRG20_F","","Tier1_MP7_NGAL_M300C_Black_FL","rhsusf_acc_su230a_mrds",{"hlc_30rnd_556x45_SPR",30},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_COMMS_BELT_RGR",{{"ACE_wirecutter",1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"hlc_30rnd_556x45_SPR",11,30}}},{"TFAR_mr3000_bwmod",{{"hlc_30rnd_556x45_SPR",11,30}}},"rhsgref_helmet_pasgt_olive","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ISRL_SHAYETET_2023_DIVER_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Special 1 (Desert)"; 
		faction = "BS_B_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"AfricanHead_02", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "TFAR_mr3000_bwmod";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_TRG20_F","","Tier1_MP7_NGAL_M300C_Black_FL","rhsusf_acc_su230a_mrds",{"hlc_30rnd_556x45_SPR",30},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_COMMS_BELT_RGR",{{"ACE_wirecutter",1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"hlc_30rnd_556x45_SPR",11,30}}},{"TFAR_mr3000_bwmod",{{"hlc_30rnd_556x45_SPR",11,30}}},"rhsgref_helmet_pasgt_olive","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ISRL_SHAYETET_2023_DIVER_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Special 1 (Desert)"; 
		faction = "BS_I_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"AfricanHead_02", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "TFAR_mr3000_bwmod";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_TRG20_F","","Tier1_MP7_NGAL_M300C_Black_FL","rhsusf_acc_su230a_mrds",{"hlc_30rnd_556x45_SPR",30},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_COMMS_BELT_RGR",{{"ACE_wirecutter",1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"hlc_30rnd_556x45_SPR",11,30}}},{"TFAR_mr3000_bwmod",{{"hlc_30rnd_556x45_SPR",11,30}}},"rhsgref_helmet_pasgt_olive","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ISRL_SHAYETET_2023_RTO_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Special 2 (Desert)"; 
		faction = "BS_O_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"PersianHead_A3_04_sa", "Male03GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"arifle_TRG20_F","launch_NLAW_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_TRG20_F","launch_NLAW_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PANEL_CPC_SMK_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_TRG20_F","","Tier1_MP7_NGAL_M300C_Black_FL","rhsusf_acc_su230a_mrds",{"hlc_30rnd_556x45_SPR",30},{},""},{"launch_NLAW_F","","","",{},{},""},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"ACE_wirecutter",1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"hlc_30rnd_556x45_SPR",11,30}}},{"USP_ZIPON_PANEL_CPC_SMK_RGR",{{"hlc_30rnd_556x45_SPR",7,30}}},"rhsgref_helmet_pasgt_olive","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ISRL_SHAYETET_2023_RTO_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Special 2 (Desert)"; 
		faction = "BS_B_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"PersianHead_A3_04_sa", "Male03GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"arifle_TRG20_F","launch_NLAW_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_TRG20_F","launch_NLAW_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PANEL_CPC_SMK_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_TRG20_F","","Tier1_MP7_NGAL_M300C_Black_FL","rhsusf_acc_su230a_mrds",{"hlc_30rnd_556x45_SPR",30},{},""},{"launch_NLAW_F","","","",{},{},""},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"ACE_wirecutter",1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"hlc_30rnd_556x45_SPR",11,30}}},{"USP_ZIPON_PANEL_CPC_SMK_RGR",{{"hlc_30rnd_556x45_SPR",7,30}}},"rhsgref_helmet_pasgt_olive","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ISRL_SHAYETET_2023_RTO_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Special 2 (Desert)"; 
		faction = "BS_I_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"PersianHead_A3_04_sa", "Male03GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"arifle_TRG20_F","launch_NLAW_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_TRG20_F","launch_NLAW_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PANEL_CPC_SMK_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_TRG20_F","","Tier1_MP7_NGAL_M300C_Black_FL","rhsusf_acc_su230a_mrds",{"hlc_30rnd_556x45_SPR",30},{},""},{"launch_NLAW_F","","","",{},{},""},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"ACE_wirecutter",1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"hlc_30rnd_556x45_SPR",11,30}}},{"USP_ZIPON_PANEL_CPC_SMK_RGR",{{"hlc_30rnd_556x45_SPR",7,30}}},"rhsgref_helmet_pasgt_olive","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ISRL_SHAYETET_2023_VAR_7_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 8"; 
		faction = "BS_O_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"GreekHead_A3_07", "Male03GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"arifle_Galat_lxWS","launch_MRAWS_green_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_Galat_lxWS","launch_MRAWS_green_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_Galat_lxWS","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_anpeq15side_bk","rhsusf_acc_su230_mrds",{"hlc_30Rnd_762x39_b_ak",30},{},""},{"launch_MRAWS_green_F","","","",{"MRAWS_HEAT_F",1},{},""},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_Kitbag_rgr",{{"rhs_mag_maaws_HEAT",1,1},{"rhs_mag_maaws_HEDP",1,1},{"rhs_mag_maaws_HE",1,1}}},"rhsgref_helmet_pasgt_olive","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ISRL_SHAYETET_2023_VAR_7_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 8"; 
		faction = "BS_B_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"GreekHead_A3_07", "Male03GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"arifle_Galat_lxWS","launch_MRAWS_green_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_Galat_lxWS","launch_MRAWS_green_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_Galat_lxWS","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_anpeq15side_bk","rhsusf_acc_su230_mrds",{"hlc_30Rnd_762x39_b_ak",30},{},""},{"launch_MRAWS_green_F","","","",{"MRAWS_HEAT_F",1},{},""},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_Kitbag_rgr",{{"rhs_mag_maaws_HEAT",1,1},{"rhs_mag_maaws_HEDP",1,1},{"rhs_mag_maaws_HE",1,1}}},"rhsgref_helmet_pasgt_olive","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ISRL_SHAYETET_2023_VAR_7_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 8"; 
		faction = "BS_I_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"GreekHead_A3_07", "Male03GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"arifle_Galat_lxWS","launch_MRAWS_green_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_Galat_lxWS","launch_MRAWS_green_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_Galat_lxWS","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_anpeq15side_bk","rhsusf_acc_su230_mrds",{"hlc_30Rnd_762x39_b_ak",30},{},""},{"launch_MRAWS_green_F","","","",{"MRAWS_HEAT_F",1},{},""},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_Kitbag_rgr",{{"rhs_mag_maaws_HEAT",1,1},{"rhs_mag_maaws_HEDP",1,1},{"rhs_mag_maaws_HE",1,1}}},"rhsgref_helmet_pasgt_olive","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ISRL_SHAYETET_2023_VAR_8_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 9"; 
		faction = "BS_O_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_15", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "U_O_T_FullGhillie_tna_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsusf_opscore_rg_cover_pelt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsusf_opscore_rg_cover_pelt"}; 
		weapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "TFAR_mr3000_bwmod";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_TRG20_F","rhsusf_acc_nt4_black","Tier1_MP7_NGAL_M300C_Black_FL","Tier1_MicroT2_G33_Black_Up",{"hlc_30rnd_556x45_SPR",30},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"U_O_T_FullGhillie_tna_F",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_COMMS_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"TFAR_mr3000_bwmod",{}},"rhsusf_opscore_rg_cover_pelt","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ISRL_SHAYETET_2023_VAR_8_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 9"; 
		faction = "BS_B_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_15", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "U_O_T_FullGhillie_tna_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsusf_opscore_rg_cover_pelt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsusf_opscore_rg_cover_pelt"}; 
		weapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "TFAR_mr3000_bwmod";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_TRG20_F","rhsusf_acc_nt4_black","Tier1_MP7_NGAL_M300C_Black_FL","Tier1_MicroT2_G33_Black_Up",{"hlc_30rnd_556x45_SPR",30},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"U_O_T_FullGhillie_tna_F",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_COMMS_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"TFAR_mr3000_bwmod",{}},"rhsusf_opscore_rg_cover_pelt","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ISRL_SHAYETET_2023_VAR_8_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 9"; 
		faction = "BS_I_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_15", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "U_O_T_FullGhillie_tna_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsusf_opscore_rg_cover_pelt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsusf_opscore_rg_cover_pelt"}; 
		weapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "TFAR_mr3000_bwmod";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_TRG20_F","rhsusf_acc_nt4_black","Tier1_MP7_NGAL_M300C_Black_FL","Tier1_MicroT2_G33_Black_Up",{"hlc_30rnd_556x45_SPR",30},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"U_O_T_FullGhillie_tna_F",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_COMMS_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"TFAR_mr3000_bwmod",{}},"rhsusf_opscore_rg_cover_pelt","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ISRL_SHAYETET_2023_VAR_9_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 10"; 
		faction = "BS_O_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"GreekHead_A3_08", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","H_PilotHelmetFighter_O"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","H_PilotHelmetFighter_O"}; 
		weapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_Galat_lxWS","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_anpeq15side_bk","rhsusf_acc_su230_mrds",{"hlc_30Rnd_762x39_b_ak",30},{},""},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_Kitbag_rgr",{}},"H_PilotHelmetFighter_O","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ISRL_SHAYETET_2023_VAR_9_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 10"; 
		faction = "BS_B_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"GreekHead_A3_08", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","H_PilotHelmetFighter_O"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","H_PilotHelmetFighter_O"}; 
		weapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_Galat_lxWS","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_anpeq15side_bk","rhsusf_acc_su230_mrds",{"hlc_30Rnd_762x39_b_ak",30},{},""},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_Kitbag_rgr",{}},"H_PilotHelmetFighter_O","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ISRL_SHAYETET_2023_VAR_9_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 10"; 
		faction = "BS_I_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"GreekHead_A3_08", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","H_PilotHelmetFighter_O"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","H_PilotHelmetFighter_O"}; 
		weapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_Galat_lxWS","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_anpeq15side_bk","rhsusf_acc_su230_mrds",{"hlc_30Rnd_762x39_b_ak",30},{},""},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_Kitbag_rgr",{}},"H_PilotHelmetFighter_O","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ISRL_SHAYETET_2023_VAR_10_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 11"; 
		faction = "BS_O_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_22_l", "Male03GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","H_PilotHelmetHeli_I_E"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","H_PilotHelmetHeli_I_E"}; 
		weapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_Galat_lxWS","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_anpeq15side_bk","rhsusf_acc_su230_mrds",{"hlc_30Rnd_762x39_b_ak",30},{},""},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_Kitbag_rgr",{}},"H_PilotHelmetHeli_I_E","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ISRL_SHAYETET_2023_VAR_10_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 11"; 
		faction = "BS_B_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_22_l", "Male03GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","H_PilotHelmetHeli_I_E"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","H_PilotHelmetHeli_I_E"}; 
		weapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_Galat_lxWS","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_anpeq15side_bk","rhsusf_acc_su230_mrds",{"hlc_30Rnd_762x39_b_ak",30},{},""},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_Kitbag_rgr",{}},"H_PilotHelmetHeli_I_E","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ISRL_SHAYETET_2023_VAR_10_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 11"; 
		faction = "BS_I_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_22_l", "Male03GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","H_PilotHelmetHeli_I_E"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","H_PilotHelmetHeli_I_E"}; 
		weapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_Galat_lxWS","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_anpeq15side_bk","rhsusf_acc_su230_mrds",{"hlc_30Rnd_762x39_b_ak",30},{},""},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_Kitbag_rgr",{}},"H_PilotHelmetHeli_I_E","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ISRL_SHAYETET_2023_VAR_11_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 12"; 
		faction = "BS_O_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"TanoanBossHead", "Male02GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","dzn_H_IDF_Mitznefet_Desert"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","dzn_H_IDF_Mitznefet_Desert"}; 
		weapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_Galat_lxWS","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_anpeq15side_bk","rhsusf_acc_su230_mrds",{"hlc_30Rnd_762x39_b_ak",30},{},""},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_Kitbag_rgr",{}},"dzn_H_IDF_Mitznefet_Desert","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ISRL_SHAYETET_2023_VAR_11_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 12"; 
		faction = "BS_B_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"TanoanBossHead", "Male02GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","dzn_H_IDF_Mitznefet_Desert"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","dzn_H_IDF_Mitznefet_Desert"}; 
		weapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_Galat_lxWS","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_anpeq15side_bk","rhsusf_acc_su230_mrds",{"hlc_30Rnd_762x39_b_ak",30},{},""},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_Kitbag_rgr",{}},"dzn_H_IDF_Mitznefet_Desert","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ISRL_SHAYETET_2023_VAR_11_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 12"; 
		faction = "BS_I_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"TanoanBossHead", "Male02GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","dzn_H_IDF_Mitznefet_Desert"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","dzn_H_IDF_Mitznefet_Desert"}; 
		weapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_Galat_lxWS","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_anpeq15side_bk","rhsusf_acc_su230_mrds",{"hlc_30Rnd_762x39_b_ak",30},{},""},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_Kitbag_rgr",{}},"dzn_H_IDF_Mitznefet_Desert","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ISRL_SHAYETET_2023_VAR_12_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 13"; 
		faction = "BS_O_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"PersianHead_A3_04_sa", "Male02GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","rhsusf_shemagh2_grn","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","rhsusf_shemagh2_grn","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"hlc_rifle_m14sopmod","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_m14sopmod","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_m14sopmod","","rhsusf_acc_anpeq15side_bk","optic_tws",{"hlc_20Rnd_762x51_mk316_M14",20},{},"Tier1_Harris_Bipod_Black"},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"USP_REEBOW_3DAP_ACC1_MCT",{{"ACE_20Rnd_762x51_Mag_SD",1,20},{"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",1,20},{"ACE_20Rnd_762x51_Mag_Tracer",1,20},{"ACE_20Rnd_762x51_M993_AP_Mag",1,20},{"ACE_20Rnd_762x51_M118LR_Mag",1,20},{"ACE_20Rnd_762x51_Mag_Tracer_Dim",1,20}}},"rhsgref_helmet_pasgt_olive","rhsusf_shemagh2_grn",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ISRL_SHAYETET_2023_VAR_12_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 13"; 
		faction = "BS_B_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"PersianHead_A3_04_sa", "Male02GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","rhsusf_shemagh2_grn","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","rhsusf_shemagh2_grn","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"hlc_rifle_m14sopmod","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_m14sopmod","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_m14sopmod","","rhsusf_acc_anpeq15side_bk","optic_tws",{"hlc_20Rnd_762x51_mk316_M14",20},{},"Tier1_Harris_Bipod_Black"},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"USP_REEBOW_3DAP_ACC1_MCT",{{"ACE_20Rnd_762x51_Mag_SD",1,20},{"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",1,20},{"ACE_20Rnd_762x51_Mag_Tracer",1,20},{"ACE_20Rnd_762x51_M993_AP_Mag",1,20},{"ACE_20Rnd_762x51_M118LR_Mag",1,20},{"ACE_20Rnd_762x51_Mag_Tracer_Dim",1,20}}},"rhsgref_helmet_pasgt_olive","rhsusf_shemagh2_grn",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ISRL_SHAYETET_2023_VAR_12_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 13"; 
		faction = "BS_I_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"PersianHead_A3_04_sa", "Male02GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","rhsusf_shemagh2_grn","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","rhsusf_shemagh2_grn","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"hlc_rifle_m14sopmod","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_m14sopmod","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_m14sopmod","","rhsusf_acc_anpeq15side_bk","optic_tws",{"hlc_20Rnd_762x51_mk316_M14",20},{},"Tier1_Harris_Bipod_Black"},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"USP_REEBOW_3DAP_ACC1_MCT",{{"ACE_20Rnd_762x51_Mag_SD",1,20},{"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",1,20},{"ACE_20Rnd_762x51_Mag_Tracer",1,20},{"ACE_20Rnd_762x51_M993_AP_Mag",1,20},{"ACE_20Rnd_762x51_M118LR_Mag",1,20},{"ACE_20Rnd_762x51_Mag_Tracer_Dim",1,20}}},"rhsgref_helmet_pasgt_olive","rhsusf_shemagh2_grn",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ISRL_SHAYETET_2023_VAR_13_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 14"; 
		faction = "BS_O_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"TanoanBossHead", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_SF_BLK","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_SF_BLK","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"LMG_Zafir_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"LMG_Zafir_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_MCB";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"LMG_Zafir_F","","Tier1_MP7_NGAL_M300C_Black_FL","optic_tws_mg",{"150Rnd_762x54_Box_Tracer",150},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"USP_REEBOW_3DAP_ACC1_MCB",{}},"rhsgref_helmet_pasgt_olive","USP_SHEMAGH_SF_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ISRL_SHAYETET_2023_VAR_13_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 14"; 
		faction = "BS_B_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"TanoanBossHead", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_SF_BLK","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_SF_BLK","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"LMG_Zafir_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"LMG_Zafir_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_MCB";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"LMG_Zafir_F","","Tier1_MP7_NGAL_M300C_Black_FL","optic_tws_mg",{"150Rnd_762x54_Box_Tracer",150},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"USP_REEBOW_3DAP_ACC1_MCB",{}},"rhsgref_helmet_pasgt_olive","USP_SHEMAGH_SF_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ISRL_SHAYETET_2023_VAR_13_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 14"; 
		faction = "BS_I_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"TanoanBossHead", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_SF_BLK","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_SF_BLK","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"LMG_Zafir_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"LMG_Zafir_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_MCB";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"LMG_Zafir_F","","Tier1_MP7_NGAL_M300C_Black_FL","optic_tws_mg",{"150Rnd_762x54_Box_Tracer",150},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"USP_REEBOW_3DAP_ACC1_MCB",{}},"rhsgref_helmet_pasgt_olive","USP_SHEMAGH_SF_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ISRL_SHAYETET_2023_Officer_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Officer (Desert)"; 
		faction = "BS_O_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"GreekHead_A3_03", "Male01GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_khk"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_khk"}; 
		weapons[] = {"rhsusf_weap_m1911a1","ACE_Vector"}; 
		respawnWeapons[] = {"rhsusf_weap_m1911a1","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"rhsusf_weap_m1911a1","","","",{"rhsusf_mag_7x45acp_MHP",7},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{},"","G_Bandanna_khk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ISRL_SHAYETET_2023_Officer_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Officer (Desert)"; 
		faction = "BS_B_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"GreekHead_A3_03", "Male01GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_khk"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_khk"}; 
		weapons[] = {"rhsusf_weap_m1911a1","ACE_Vector"}; 
		respawnWeapons[] = {"rhsusf_weap_m1911a1","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"rhsusf_weap_m1911a1","","","",{"rhsusf_mag_7x45acp_MHP",7},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{},"","G_Bandanna_khk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ISRL_SHAYETET_2023_Officer_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "DT"; 
		displayName = "Officer (Desert)"; 
		faction = "BS_I_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"GreekHead_A3_03", "Male01GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_khk"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_khk"}; 
		weapons[] = {"rhsusf_weap_m1911a1","ACE_Vector"}; 
		respawnWeapons[] = {"rhsusf_weap_m1911a1","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"rhsusf_weap_m1911a1","","","",{"rhsusf_mag_7x45acp_MHP",7},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{},"","G_Bandanna_khk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ISRL_SHAYETET_2023_Rifleman_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Rifleman (Winter)"; 
		faction = "BS_O_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"TanoanHead_A3_03", "Male03GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PANEL_CPC_SMK_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_TRG20_F","","Tier1_MP7_NGAL_M300C_Black_FL","rhsusf_acc_su230a_mrds",{"hlc_30rnd_556x45_SPR",30},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"ACE_EarPlugs",3},{"ACE_morphine",3},{"kat_guedel",6},{"kat_chestSeal",3},{"ACE_tourniquet",12},{"ACE_packingBandage",30},{"ACE_quikclot",21},{"ACE_RangeCard",2},{"ACE_microDAGR",2},{"ACE_IR_Strobe_Item",2},{"ACE_epinephrine",2},{"ACE_CableTie",6},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"hlc_30rnd_556x45_SPR",9,30}}},{"USP_ZIPON_PANEL_CPC_SMK_RGR",{{"ACE_EarPlugs",2},{"ACE_morphine",2},{"kat_guedel",4},{"kat_chestSeal",2},{"ACE_tourniquet",8},{"ACE_packingBandage",18},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"hlc_30rnd_556x45_SPR",6,30}}},"rhsgref_helmet_pasgt_olive","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ISRL_SHAYETET_2023_Rifleman_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Rifleman (Winter)"; 
		faction = "BS_B_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"TanoanHead_A3_03", "Male03GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PANEL_CPC_SMK_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_TRG20_F","","Tier1_MP7_NGAL_M300C_Black_FL","rhsusf_acc_su230a_mrds",{"hlc_30rnd_556x45_SPR",30},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"ACE_EarPlugs",3},{"ACE_morphine",3},{"kat_guedel",6},{"kat_chestSeal",3},{"ACE_tourniquet",12},{"ACE_packingBandage",30},{"ACE_quikclot",21},{"ACE_RangeCard",2},{"ACE_microDAGR",2},{"ACE_IR_Strobe_Item",2},{"ACE_epinephrine",2},{"ACE_CableTie",6},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"hlc_30rnd_556x45_SPR",9,30}}},{"USP_ZIPON_PANEL_CPC_SMK_RGR",{{"ACE_EarPlugs",2},{"ACE_morphine",2},{"kat_guedel",4},{"kat_chestSeal",2},{"ACE_tourniquet",8},{"ACE_packingBandage",18},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"hlc_30rnd_556x45_SPR",6,30}}},"rhsgref_helmet_pasgt_olive","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ISRL_SHAYETET_2023_Rifleman_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Rifleman (Winter)"; 
		faction = "BS_I_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"TanoanHead_A3_03", "Male03GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PANEL_CPC_SMK_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_TRG20_F","","Tier1_MP7_NGAL_M300C_Black_FL","rhsusf_acc_su230a_mrds",{"hlc_30rnd_556x45_SPR",30},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"ACE_EarPlugs",3},{"ACE_morphine",3},{"kat_guedel",6},{"kat_chestSeal",3},{"ACE_tourniquet",12},{"ACE_packingBandage",30},{"ACE_quikclot",21},{"ACE_RangeCard",2},{"ACE_microDAGR",2},{"ACE_IR_Strobe_Item",2},{"ACE_epinephrine",2},{"ACE_CableTie",6},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"hlc_30rnd_556x45_SPR",9,30}}},{"USP_ZIPON_PANEL_CPC_SMK_RGR",{{"ACE_EarPlugs",2},{"ACE_morphine",2},{"kat_guedel",4},{"kat_chestSeal",2},{"ACE_tourniquet",8},{"ACE_packingBandage",18},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"hlc_30rnd_556x45_SPR",6,30}}},"rhsgref_helmet_pasgt_olive","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ISRL_SHAYETET_2023_AR_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Machine Gunner (Winter)"; 
		faction = "BS_O_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"GreekHead_A3_06", "Male01GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_SF_BLK","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_SF_BLK","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"LMG_Zafir_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"LMG_Zafir_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_MCB";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"LMG_Zafir_F","","Tier1_MP7_NGAL_M300C_Black","rhsusf_acc_su230a_mrds",{"150Rnd_762x54_Box",150},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"150Rnd_762x54_Box",3,150}}},{"USP_REEBOW_3DAP_ACC1_MCB",{{"150Rnd_762x54_Box",4,150}}},"rhsgref_helmet_pasgt_olive","USP_SHEMAGH_SF_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ISRL_SHAYETET_2023_AR_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Machine Gunner (Winter)"; 
		faction = "BS_B_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"GreekHead_A3_06", "Male01GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_SF_BLK","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_SF_BLK","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"LMG_Zafir_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"LMG_Zafir_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_MCB";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"LMG_Zafir_F","","Tier1_MP7_NGAL_M300C_Black","rhsusf_acc_su230a_mrds",{"150Rnd_762x54_Box",150},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"150Rnd_762x54_Box",3,150}}},{"USP_REEBOW_3DAP_ACC1_MCB",{{"150Rnd_762x54_Box",4,150}}},"rhsgref_helmet_pasgt_olive","USP_SHEMAGH_SF_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ISRL_SHAYETET_2023_AR_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Machine Gunner (Winter)"; 
		faction = "BS_I_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"GreekHead_A3_06", "Male01GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_SF_BLK","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_SF_BLK","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"LMG_Zafir_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"LMG_Zafir_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_MCB";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"LMG_Zafir_F","","Tier1_MP7_NGAL_M300C_Black","rhsusf_acc_su230a_mrds",{"150Rnd_762x54_Box",150},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"150Rnd_762x54_Box",3,150}}},{"USP_REEBOW_3DAP_ACC1_MCB",{{"150Rnd_762x54_Box",4,150}}},"rhsgref_helmet_pasgt_olive","USP_SHEMAGH_SF_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ISRL_SHAYETET_2023_GL_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Grenadier (Winter)"; 
		faction = "BS_O_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"AfricanHead_01", "Male04GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_NECK4_BLK","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_NECK4_BLK","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"arifle_TRG21_GL_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_TRG21_GL_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PANEL_CPC_SMK_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_TRG21_GL_F","","Tier1_MP7_NGAL_M300C_Black_FL","rhsusf_acc_su230a_mrds",{"hlc_30rnd_556x45_SPR",30},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"1Rnd_HE_Grenade_shell",16,1},{"1Rnd_Smoke_Grenade_shell",9,1},{"hlc_30rnd_556x45_SPR",6,30}}},{"USP_ZIPON_PANEL_CPC_SMK_SM_RGR",{{"1Rnd_HE_Grenade_shell",9,1},{"1Rnd_Smoke_Grenade_shell",5,1},{"hlc_30rnd_556x45_SPR",4,30}}},"rhsgref_helmet_pasgt_olive","USP_SHEMAGH_NECK4_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ISRL_SHAYETET_2023_GL_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Grenadier (Winter)"; 
		faction = "BS_B_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"AfricanHead_01", "Male04GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_NECK4_BLK","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_NECK4_BLK","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"arifle_TRG21_GL_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_TRG21_GL_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PANEL_CPC_SMK_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_TRG21_GL_F","","Tier1_MP7_NGAL_M300C_Black_FL","rhsusf_acc_su230a_mrds",{"hlc_30rnd_556x45_SPR",30},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"1Rnd_HE_Grenade_shell",16,1},{"1Rnd_Smoke_Grenade_shell",9,1},{"hlc_30rnd_556x45_SPR",6,30}}},{"USP_ZIPON_PANEL_CPC_SMK_SM_RGR",{{"1Rnd_HE_Grenade_shell",9,1},{"1Rnd_Smoke_Grenade_shell",5,1},{"hlc_30rnd_556x45_SPR",4,30}}},"rhsgref_helmet_pasgt_olive","USP_SHEMAGH_NECK4_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ISRL_SHAYETET_2023_GL_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Grenadier (Winter)"; 
		faction = "BS_I_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"AfricanHead_01", "Male04GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_NECK4_BLK","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_NECK4_BLK","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"arifle_TRG21_GL_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_TRG21_GL_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PANEL_CPC_SMK_SM_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_TRG21_GL_F","","Tier1_MP7_NGAL_M300C_Black_FL","rhsusf_acc_su230a_mrds",{"hlc_30rnd_556x45_SPR",30},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"1Rnd_HE_Grenade_shell",16,1},{"1Rnd_Smoke_Grenade_shell",9,1},{"hlc_30rnd_556x45_SPR",6,30}}},{"USP_ZIPON_PANEL_CPC_SMK_SM_RGR",{{"1Rnd_HE_Grenade_shell",9,1},{"1Rnd_Smoke_Grenade_shell",5,1},{"hlc_30rnd_556x45_SPR",4,30}}},"rhsgref_helmet_pasgt_olive","USP_SHEMAGH_NECK4_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ISRL_SHAYETET_2023_SNP_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Sniper (Winter)"; 
		faction = "BS_O_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_10", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","rhsusf_shemagh2_grn","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","rhsusf_shemagh2_grn","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"hlc_rifle_m14sopmod","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_m14sopmod","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_m14sopmod","","rhsusf_acc_anpeq15side_bk","rhsusf_acc_M8541_mrds",{"hlc_20Rnd_762x51_mk316_M14",20},{},"Tier1_Harris_Bipod_Black"},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"hlc_20Rnd_762x51_mk316_M14",9,20}}},{"USP_REEBOW_3DAP_ACC1_MCT",{{"hlc_20Rnd_762x51_mk316_M14",10,20}}},"rhsgref_helmet_pasgt_olive","rhsusf_shemagh2_grn",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ISRL_SHAYETET_2023_SNP_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Sniper (Winter)"; 
		faction = "BS_B_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_10", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","rhsusf_shemagh2_grn","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","rhsusf_shemagh2_grn","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"hlc_rifle_m14sopmod","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_m14sopmod","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_m14sopmod","","rhsusf_acc_anpeq15side_bk","rhsusf_acc_M8541_mrds",{"hlc_20Rnd_762x51_mk316_M14",20},{},"Tier1_Harris_Bipod_Black"},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"hlc_20Rnd_762x51_mk316_M14",9,20}}},{"USP_REEBOW_3DAP_ACC1_MCT",{{"hlc_20Rnd_762x51_mk316_M14",10,20}}},"rhsgref_helmet_pasgt_olive","rhsusf_shemagh2_grn",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ISRL_SHAYETET_2023_SNP_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Sniper (Winter)"; 
		faction = "BS_I_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_10", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","rhsusf_shemagh2_grn","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","rhsusf_shemagh2_grn","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"hlc_rifle_m14sopmod","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_m14sopmod","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_m14sopmod","","rhsusf_acc_anpeq15side_bk","rhsusf_acc_M8541_mrds",{"hlc_20Rnd_762x51_mk316_M14",20},{},"Tier1_Harris_Bipod_Black"},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"hlc_20Rnd_762x51_mk316_M14",9,20}}},{"USP_REEBOW_3DAP_ACC1_MCT",{{"hlc_20Rnd_762x51_mk316_M14",10,20}}},"rhsgref_helmet_pasgt_olive","rhsusf_shemagh2_grn",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ISRL_SHAYETET_2023_Medic_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Doctor (Winter)"; 
		faction = "BS_O_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_08", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"hlc_rifle_M4","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_M4","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_M4","rhsusf_acc_SFMB556","rhsusf_acc_anpeq15side_bk","Tier1_Eotech551_L3_Black_Up",{"hlc_30rnd_556x45_SPR",30},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"kat_accuvac",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_MEDIC_BELT_RGR",{{"kat_stethoscope",1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"hlc_30rnd_556x45_SPR",13,30}}},{"B_Kitbag_rgr",{{"ACE_surgicalKit",2},{"kat_AED",1},{"kat_stethoscope",1},{"ACE_adenosine",2},{"ACE_elasticBandage",15},{"ACE_packingBandage",15},{"ACE_quikclot",15},{"kat_larynx",6},{"ACE_epinephrine",4},{"ACE_morphine",4},{"kat_naloxone",2},{"kat_IO_FAST",7},{"kat_ncdKit",2},{"kat_aatKit",12},{"kat_chestSeal",6},{"ACE_plasmaIV",3},{"ACE_plasmaIV_500",6},{"kat_Pulseoximeter",3},{"ACE_splint",2},{"ACE_suture",12},{"ACE_tourniquet",4},{"hlc_30rnd_556x45_SPR",2,30}}},"rhsgref_helmet_pasgt_olive","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ISRL_SHAYETET_2023_Medic_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Doctor (Winter)"; 
		faction = "BS_B_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_08", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"hlc_rifle_M4","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_M4","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_M4","rhsusf_acc_SFMB556","rhsusf_acc_anpeq15side_bk","Tier1_Eotech551_L3_Black_Up",{"hlc_30rnd_556x45_SPR",30},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"kat_accuvac",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_MEDIC_BELT_RGR",{{"kat_stethoscope",1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"hlc_30rnd_556x45_SPR",13,30}}},{"B_Kitbag_rgr",{{"ACE_surgicalKit",2},{"kat_AED",1},{"kat_stethoscope",1},{"ACE_adenosine",2},{"ACE_elasticBandage",15},{"ACE_packingBandage",15},{"ACE_quikclot",15},{"kat_larynx",6},{"ACE_epinephrine",4},{"ACE_morphine",4},{"kat_naloxone",2},{"kat_IO_FAST",7},{"kat_ncdKit",2},{"kat_aatKit",12},{"kat_chestSeal",6},{"ACE_plasmaIV",3},{"ACE_plasmaIV_500",6},{"kat_Pulseoximeter",3},{"ACE_splint",2},{"ACE_suture",12},{"ACE_tourniquet",4},{"hlc_30rnd_556x45_SPR",2,30}}},"rhsgref_helmet_pasgt_olive","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ISRL_SHAYETET_2023_Medic_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Doctor (Winter)"; 
		faction = "BS_I_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_08", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"hlc_rifle_M4","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_M4","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_M4","rhsusf_acc_SFMB556","rhsusf_acc_anpeq15side_bk","Tier1_Eotech551_L3_Black_Up",{"hlc_30rnd_556x45_SPR",30},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"kat_accuvac",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_MEDIC_BELT_RGR",{{"kat_stethoscope",1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"hlc_30rnd_556x45_SPR",13,30}}},{"B_Kitbag_rgr",{{"ACE_surgicalKit",2},{"kat_AED",1},{"kat_stethoscope",1},{"ACE_adenosine",2},{"ACE_elasticBandage",15},{"ACE_packingBandage",15},{"ACE_quikclot",15},{"kat_larynx",6},{"ACE_epinephrine",4},{"ACE_morphine",4},{"kat_naloxone",2},{"kat_IO_FAST",7},{"kat_ncdKit",2},{"kat_aatKit",12},{"kat_chestSeal",6},{"ACE_plasmaIV",3},{"ACE_plasmaIV_500",6},{"kat_Pulseoximeter",3},{"ACE_splint",2},{"ACE_suture",12},{"ACE_tourniquet",4},{"hlc_30rnd_556x45_SPR",2,30}}},"rhsgref_helmet_pasgt_olive","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ISRL_SHAYETET_2023_DIVER_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Special 1 (Winter)"; 
		faction = "BS_O_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"GreekHead_A3_10_a", "Male02GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "TFAR_mr3000_bwmod";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_TRG20_F","","Tier1_MP7_NGAL_M300C_Black_FL","rhsusf_acc_su230a_mrds",{"hlc_30rnd_556x45_SPR",30},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_COMMS_BELT_RGR",{{"ACE_wirecutter",1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"hlc_30rnd_556x45_SPR",11,30}}},{"TFAR_mr3000_bwmod",{{"hlc_30rnd_556x45_SPR",11,30}}},"rhsgref_helmet_pasgt_olive","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ISRL_SHAYETET_2023_DIVER_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Special 1 (Winter)"; 
		faction = "BS_B_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"GreekHead_A3_10_a", "Male02GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "TFAR_mr3000_bwmod";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_TRG20_F","","Tier1_MP7_NGAL_M300C_Black_FL","rhsusf_acc_su230a_mrds",{"hlc_30rnd_556x45_SPR",30},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_COMMS_BELT_RGR",{{"ACE_wirecutter",1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"hlc_30rnd_556x45_SPR",11,30}}},{"TFAR_mr3000_bwmod",{{"hlc_30rnd_556x45_SPR",11,30}}},"rhsgref_helmet_pasgt_olive","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ISRL_SHAYETET_2023_DIVER_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Special 1 (Winter)"; 
		faction = "BS_I_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"GreekHead_A3_10_a", "Male02GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "TFAR_mr3000_bwmod";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_TRG20_F","","Tier1_MP7_NGAL_M300C_Black_FL","rhsusf_acc_su230a_mrds",{"hlc_30rnd_556x45_SPR",30},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_COMMS_BELT_RGR",{{"ACE_wirecutter",1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"hlc_30rnd_556x45_SPR",11,30}}},{"TFAR_mr3000_bwmod",{{"hlc_30rnd_556x45_SPR",11,30}}},"rhsgref_helmet_pasgt_olive","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ISRL_SHAYETET_2023_RTO_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Special 2 (Winter)"; 
		faction = "BS_O_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_16", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"arifle_TRG20_F","launch_NLAW_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_TRG20_F","launch_NLAW_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PANEL_CPC_SMK_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_TRG20_F","","Tier1_MP7_NGAL_M300C_Black_FL","rhsusf_acc_su230a_mrds",{"hlc_30rnd_556x45_SPR",30},{},""},{"launch_NLAW_F","","","",{},{},""},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"ACE_wirecutter",1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"hlc_30rnd_556x45_SPR",11,30}}},{"USP_ZIPON_PANEL_CPC_SMK_RGR",{{"hlc_30rnd_556x45_SPR",7,30}}},"rhsgref_helmet_pasgt_olive","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ISRL_SHAYETET_2023_RTO_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Special 2 (Winter)"; 
		faction = "BS_B_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_16", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"arifle_TRG20_F","launch_NLAW_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_TRG20_F","launch_NLAW_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PANEL_CPC_SMK_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_TRG20_F","","Tier1_MP7_NGAL_M300C_Black_FL","rhsusf_acc_su230a_mrds",{"hlc_30rnd_556x45_SPR",30},{},""},{"launch_NLAW_F","","","",{},{},""},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"ACE_wirecutter",1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"hlc_30rnd_556x45_SPR",11,30}}},{"USP_ZIPON_PANEL_CPC_SMK_RGR",{{"hlc_30rnd_556x45_SPR",7,30}}},"rhsgref_helmet_pasgt_olive","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ISRL_SHAYETET_2023_RTO_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Special 2 (Winter)"; 
		faction = "BS_I_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_16", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"arifle_TRG20_F","launch_NLAW_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_TRG20_F","launch_NLAW_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_ZIPON_PANEL_CPC_SMK_RGR";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_TRG20_F","","Tier1_MP7_NGAL_M300C_Black_FL","rhsusf_acc_su230a_mrds",{"hlc_30rnd_556x45_SPR",30},{},""},{"launch_NLAW_F","","","",{},{},""},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"kat_guedel",2},{"kat_chestSeal",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"ACE_wirecutter",1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1},{"hlc_30rnd_556x45_SPR",11,30}}},{"USP_ZIPON_PANEL_CPC_SMK_RGR",{{"hlc_30rnd_556x45_SPR",7,30}}},"rhsgref_helmet_pasgt_olive","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ISRL_SHAYETET_2023_VAR_14_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 15"; 
		faction = "BS_O_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_21", "Male03GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"arifle_Galat_lxWS","launch_MRAWS_green_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_Galat_lxWS","launch_MRAWS_green_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_Galat_lxWS","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_anpeq15side_bk","rhsusf_acc_su230_mrds",{"hlc_30Rnd_762x39_b_ak",30},{},""},{"launch_MRAWS_green_F","","","",{"MRAWS_HEAT_F",1},{},""},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_Kitbag_rgr",{{"rhs_mag_maaws_HEAT",1,1},{"rhs_mag_maaws_HEDP",1,1},{"rhs_mag_maaws_HE",1,1}}},"rhsgref_helmet_pasgt_olive","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ISRL_SHAYETET_2023_VAR_14_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 15"; 
		faction = "BS_B_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_21", "Male03GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"arifle_Galat_lxWS","launch_MRAWS_green_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_Galat_lxWS","launch_MRAWS_green_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_Galat_lxWS","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_anpeq15side_bk","rhsusf_acc_su230_mrds",{"hlc_30Rnd_762x39_b_ak",30},{},""},{"launch_MRAWS_green_F","","","",{"MRAWS_HEAT_F",1},{},""},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_Kitbag_rgr",{{"rhs_mag_maaws_HEAT",1,1},{"rhs_mag_maaws_HEDP",1,1},{"rhs_mag_maaws_HE",1,1}}},"rhsgref_helmet_pasgt_olive","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ISRL_SHAYETET_2023_VAR_14_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 15"; 
		faction = "BS_I_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_21", "Male03GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"arifle_Galat_lxWS","launch_MRAWS_green_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_Galat_lxWS","launch_MRAWS_green_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_Galat_lxWS","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_anpeq15side_bk","rhsusf_acc_su230_mrds",{"hlc_30Rnd_762x39_b_ak",30},{},""},{"launch_MRAWS_green_F","","","",{"MRAWS_HEAT_F",1},{},""},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_Kitbag_rgr",{{"rhs_mag_maaws_HEAT",1,1},{"rhs_mag_maaws_HEDP",1,1},{"rhs_mag_maaws_HE",1,1}}},"rhsgref_helmet_pasgt_olive","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ISRL_SHAYETET_2023_VAR_15_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 16"; 
		faction = "BS_O_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"PersianHead_A3_04_l", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "U_O_T_FullGhillie_tna_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsusf_opscore_rg_cover_pelt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsusf_opscore_rg_cover_pelt"}; 
		weapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "TFAR_mr3000_bwmod";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_TRG20_F","rhsusf_acc_nt4_black","Tier1_MP7_NGAL_M300C_Black_FL","Tier1_MicroT2_G33_Black_Up",{"hlc_30rnd_556x45_SPR",30},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"U_O_T_FullGhillie_tna_F",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_COMMS_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"TFAR_mr3000_bwmod",{}},"rhsusf_opscore_rg_cover_pelt","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ISRL_SHAYETET_2023_VAR_15_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 16"; 
		faction = "BS_B_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"PersianHead_A3_04_l", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "U_O_T_FullGhillie_tna_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsusf_opscore_rg_cover_pelt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsusf_opscore_rg_cover_pelt"}; 
		weapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "TFAR_mr3000_bwmod";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_TRG20_F","rhsusf_acc_nt4_black","Tier1_MP7_NGAL_M300C_Black_FL","Tier1_MicroT2_G33_Black_Up",{"hlc_30rnd_556x45_SPR",30},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"U_O_T_FullGhillie_tna_F",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_COMMS_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"TFAR_mr3000_bwmod",{}},"rhsusf_opscore_rg_cover_pelt","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ISRL_SHAYETET_2023_VAR_15_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 16"; 
		faction = "BS_I_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"PersianHead_A3_04_l", "Male05GRE" ,"G_NATO_default"};
		uniformClass = "U_O_T_FullGhillie_tna_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsusf_opscore_rg_cover_pelt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","G_Bandanna_blk","rhsusf_opscore_rg_cover_pelt"}; 
		weapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_TRG20_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "TFAR_mr3000_bwmod";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_TRG20_F","rhsusf_acc_nt4_black","Tier1_MP7_NGAL_M300C_Black_FL","Tier1_MicroT2_G33_Black_Up",{"hlc_30rnd_556x45_SPR",30},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"U_O_T_FullGhillie_tna_F",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_COMMS_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"TFAR_mr3000_bwmod",{}},"rhsusf_opscore_rg_cover_pelt","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ISRL_SHAYETET_2023_VAR_16_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 17"; 
		faction = "BS_O_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"TanoanHead_A3_03", "Male01GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","H_PilotHelmetFighter_O"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","H_PilotHelmetFighter_O"}; 
		weapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_Galat_lxWS","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_anpeq15side_bk","rhsusf_acc_su230_mrds",{"hlc_30Rnd_762x39_b_ak",30},{},""},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_Kitbag_rgr",{}},"H_PilotHelmetFighter_O","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ISRL_SHAYETET_2023_VAR_16_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 17"; 
		faction = "BS_B_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"TanoanHead_A3_03", "Male01GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","H_PilotHelmetFighter_O"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","H_PilotHelmetFighter_O"}; 
		weapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_Galat_lxWS","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_anpeq15side_bk","rhsusf_acc_su230_mrds",{"hlc_30Rnd_762x39_b_ak",30},{},""},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_Kitbag_rgr",{}},"H_PilotHelmetFighter_O","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ISRL_SHAYETET_2023_VAR_16_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 17"; 
		faction = "BS_I_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"TanoanHead_A3_03", "Male01GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","H_PilotHelmetFighter_O"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","H_PilotHelmetFighter_O"}; 
		weapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_Galat_lxWS","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_anpeq15side_bk","rhsusf_acc_su230_mrds",{"hlc_30Rnd_762x39_b_ak",30},{},""},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_Kitbag_rgr",{}},"H_PilotHelmetFighter_O","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ISRL_SHAYETET_2023_VAR_17_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 18"; 
		faction = "BS_O_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"GreekHead_A3_03", "Male04GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","H_PilotHelmetHeli_I_E"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","H_PilotHelmetHeli_I_E"}; 
		weapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_Galat_lxWS","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_anpeq15side_bk","rhsusf_acc_su230_mrds",{"hlc_30Rnd_762x39_b_ak",30},{},""},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_Kitbag_rgr",{}},"H_PilotHelmetHeli_I_E","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ISRL_SHAYETET_2023_VAR_17_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 18"; 
		faction = "BS_B_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"GreekHead_A3_03", "Male04GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","H_PilotHelmetHeli_I_E"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","H_PilotHelmetHeli_I_E"}; 
		weapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_Galat_lxWS","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_anpeq15side_bk","rhsusf_acc_su230_mrds",{"hlc_30Rnd_762x39_b_ak",30},{},""},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_Kitbag_rgr",{}},"H_PilotHelmetHeli_I_E","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ISRL_SHAYETET_2023_VAR_17_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 18"; 
		faction = "BS_I_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"GreekHead_A3_03", "Male04GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","H_PilotHelmetHeli_I_E"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","H_PilotHelmetHeli_I_E"}; 
		weapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_Galat_lxWS","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_anpeq15side_bk","rhsusf_acc_su230_mrds",{"hlc_30Rnd_762x39_b_ak",30},{},""},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_Kitbag_rgr",{}},"H_PilotHelmetHeli_I_E","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ISRL_SHAYETET_2023_VAR_18_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 19"; 
		faction = "BS_O_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"TanoanHead_A3_04", "Male04GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","dzn_H_IDF_Mitznefet_Desert"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","dzn_H_IDF_Mitznefet_Desert"}; 
		weapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_Galat_lxWS","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_anpeq15side_bk","rhsusf_acc_su230_mrds",{"hlc_30Rnd_762x39_b_ak",30},{},""},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_Kitbag_rgr",{}},"dzn_H_IDF_Mitznefet_Desert","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ISRL_SHAYETET_2023_VAR_18_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 19"; 
		faction = "BS_B_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"TanoanHead_A3_04", "Male04GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","dzn_H_IDF_Mitznefet_Desert"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","dzn_H_IDF_Mitznefet_Desert"}; 
		weapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_Galat_lxWS","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_anpeq15side_bk","rhsusf_acc_su230_mrds",{"hlc_30Rnd_762x39_b_ak",30},{},""},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_Kitbag_rgr",{}},"dzn_H_IDF_Mitznefet_Desert","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ISRL_SHAYETET_2023_VAR_18_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 19"; 
		faction = "BS_I_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"TanoanHead_A3_04", "Male04GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","dzn_H_IDF_Mitznefet_Desert"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_blk","dzn_H_IDF_Mitznefet_Desert"}; 
		weapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"arifle_Galat_lxWS","rhs_weap_fim92","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Kitbag_rgr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_Galat_lxWS","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_anpeq15side_bk","rhsusf_acc_su230_mrds",{"hlc_30Rnd_762x39_b_ak",30},{},""},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_Kitbag_rgr",{}},"dzn_H_IDF_Mitznefet_Desert","G_Bandanna_blk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ISRL_SHAYETET_2023_VAR_19_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 20"; 
		faction = "BS_O_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_10", "Male02GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","rhsusf_shemagh2_grn","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","rhsusf_shemagh2_grn","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"hlc_rifle_m14sopmod","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_m14sopmod","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_m14sopmod","","rhsusf_acc_anpeq15side_bk","optic_tws",{"hlc_20Rnd_762x51_mk316_M14",20},{},"Tier1_Harris_Bipod_Black"},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"USP_REEBOW_3DAP_ACC1_MCT",{{"ACE_20Rnd_762x51_Mag_SD",1,20},{"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",1,20},{"ACE_20Rnd_762x51_Mag_Tracer",1,20},{"ACE_20Rnd_762x51_M993_AP_Mag",1,20},{"ACE_20Rnd_762x51_M118LR_Mag",1,20},{"ACE_20Rnd_762x51_Mag_Tracer_Dim",1,20}}},"rhsgref_helmet_pasgt_olive","rhsusf_shemagh2_grn",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ISRL_SHAYETET_2023_VAR_19_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 20"; 
		faction = "BS_B_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_10", "Male02GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","rhsusf_shemagh2_grn","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","rhsusf_shemagh2_grn","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"hlc_rifle_m14sopmod","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_m14sopmod","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_m14sopmod","","rhsusf_acc_anpeq15side_bk","optic_tws",{"hlc_20Rnd_762x51_mk316_M14",20},{},"Tier1_Harris_Bipod_Black"},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"USP_REEBOW_3DAP_ACC1_MCT",{{"ACE_20Rnd_762x51_Mag_SD",1,20},{"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",1,20},{"ACE_20Rnd_762x51_Mag_Tracer",1,20},{"ACE_20Rnd_762x51_M993_AP_Mag",1,20},{"ACE_20Rnd_762x51_M118LR_Mag",1,20},{"ACE_20Rnd_762x51_Mag_Tracer_Dim",1,20}}},"rhsgref_helmet_pasgt_olive","rhsusf_shemagh2_grn",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ISRL_SHAYETET_2023_VAR_19_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 20"; 
		faction = "BS_I_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_10", "Male02GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","rhsusf_shemagh2_grn","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","rhsusf_shemagh2_grn","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"hlc_rifle_m14sopmod","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"hlc_rifle_m14sopmod","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_MCT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_m14sopmod","","rhsusf_acc_anpeq15side_bk","optic_tws",{"hlc_20Rnd_762x51_mk316_M14",20},{},"Tier1_Harris_Bipod_Black"},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"USP_REEBOW_3DAP_ACC1_MCT",{{"ACE_20Rnd_762x51_Mag_SD",1,20},{"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",1,20},{"ACE_20Rnd_762x51_Mag_Tracer",1,20},{"ACE_20Rnd_762x51_M993_AP_Mag",1,20},{"ACE_20Rnd_762x51_M118LR_Mag",1,20},{"ACE_20Rnd_762x51_Mag_Tracer_Dim",1,20}}},"rhsgref_helmet_pasgt_olive","rhsusf_shemagh2_grn",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ISRL_SHAYETET_2023_VAR_20_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 21"; 
		faction = "BS_O_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"GreekHead_A3_03", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_SF_BLK","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_SF_BLK","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"LMG_Zafir_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"LMG_Zafir_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_MCB";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"LMG_Zafir_F","","Tier1_MP7_NGAL_M300C_Black_FL","optic_tws_mg",{"150Rnd_762x54_Box_Tracer",150},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"USP_REEBOW_3DAP_ACC1_MCB",{}},"rhsgref_helmet_pasgt_olive","USP_SHEMAGH_SF_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ISRL_SHAYETET_2023_VAR_20_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 21"; 
		faction = "BS_B_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"GreekHead_A3_03", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_SF_BLK","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_SF_BLK","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"LMG_Zafir_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"LMG_Zafir_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_MCB";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"LMG_Zafir_F","","Tier1_MP7_NGAL_M300C_Black_FL","optic_tws_mg",{"150Rnd_762x54_Box_Tracer",150},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"USP_REEBOW_3DAP_ACC1_MCB",{}},"rhsgref_helmet_pasgt_olive","USP_SHEMAGH_SF_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ISRL_SHAYETET_2023_VAR_20_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 21"; 
		faction = "BS_I_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"GreekHead_A3_03", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_SF_BLK","rhsgref_helmet_pasgt_olive"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","USP_GPNVG18_WP_BLK","USP_SHEMAGH_SF_BLK","rhsgref_helmet_pasgt_olive"}; 
		weapons[] = {"LMG_Zafir_F","rhsusf_weap_glock17g4","ACE_Vector"}; 
		respawnWeapons[] = {"LMG_Zafir_F","rhsusf_weap_glock17g4","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "USP_REEBOW_3DAP_ACC1_MCB";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"LMG_Zafir_F","","Tier1_MP7_NGAL_M300C_Black_FL","optic_tws_mg",{"150Rnd_762x54_Box_Tracer",150},{},""},{},{"rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","",{"Tier1_20Rnd_9x19_FMJ",20},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_FAST_BELT_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"USP_REEBOW_3DAP_ACC1_MCB",{}},"rhsgref_helmet_pasgt_olive","USP_SHEMAGH_SF_BLK",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_ISRL_SHAYETET_2023_Officer_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Officer (Winter)"; 
		faction = "BS_O_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_10", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_khk"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_khk"}; 
		weapons[] = {"rhsusf_weap_m1911a1","ACE_Vector"}; 
		respawnWeapons[] = {"rhsusf_weap_m1911a1","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"rhsusf_weap_m1911a1","","","",{"rhsusf_mag_7x45acp_MHP",7},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{},"","G_Bandanna_khk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_ISRL_SHAYETET_2023_Officer_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Officer (Winter)"; 
		faction = "BS_B_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_10", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_khk"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_khk"}; 
		weapons[] = {"rhsusf_weap_m1911a1","ACE_Vector"}; 
		respawnWeapons[] = {"rhsusf_weap_m1911a1","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"rhsusf_weap_m1911a1","","","",{"rhsusf_mag_7x45acp_MHP",7},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{},"","G_Bandanna_khk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_ISRL_SHAYETET_2023_Officer_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 0 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 2; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WT"; 
		displayName = "Officer (Winter)"; 
		faction = "BS_I_ISRL_SHAYETET_2023"; 
		identityTypes[] = {"WhiteHead_10", "Male06GRE" ,"G_NATO_default"};
		uniformClass = "rhsgref_uniform_olive"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_khk"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Bandanna_khk"}; 
		weapons[] = {"rhsusf_weap_m1911a1","ACE_Vector"}; 
		respawnWeapons[] = {"rhsusf_weap_m1911a1","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"rhsusf_weap_m1911a1","","","",{"rhsusf_mag_7x45acp_MHP",7},{},""},{"rhsgref_uniform_olive",{{"FirstAidKit",1}}},{"USP_CRYE_CPC_RGR",{{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{},"","G_Bandanna_khk",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	class B_Quadbike_01_F;
	class BS_B_ISRL_SHAYETET_2023_WLhhXc6IHdU:B_Quadbike_01_F {
		scope=2;
		side=1;
		faction="BS_B_ISRL_SHAYETET_2023";
		crew="BS_B_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_B_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 
	class BS_O_ISRL_SHAYETET_2023_WLhhXc6IHdU:B_Quadbike_01_F {
		scope=2;
		side=0;
		faction="BS_O_ISRL_SHAYETET_2023";
		crew="BS_O_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_O_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 
	class BS_I_ISRL_SHAYETET_2023_WLhhXc6IHdU:B_Quadbike_01_F {
		scope=2;
		side=2;
		faction="BS_I_ISRL_SHAYETET_2023";
		crew="BS_I_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_I_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 

	class B_LSV_01_armed_F;
	class BS_B_ISRL_SHAYETET_2023_k3_SDha4C58:B_LSV_01_armed_F {
		scope=2;
		side=1;
		faction="BS_B_ISRL_SHAYETET_2023";
		crew="BS_B_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_B_ISRL_SHAYETET_2023_Officer_WL",
			"BS_B_ISRL_SHAYETET_2023_Officer_WL",
			"BS_B_ISRL_SHAYETET_2023_Officer_WL",
			"BS_B_ISRL_SHAYETET_2023_Officer_WL",
			"BS_B_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 
	class BS_O_ISRL_SHAYETET_2023_k3_SDha4C58:B_LSV_01_armed_F {
		scope=2;
		side=0;
		faction="BS_O_ISRL_SHAYETET_2023";
		crew="BS_O_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_O_ISRL_SHAYETET_2023_Officer_WL",
			"BS_O_ISRL_SHAYETET_2023_Officer_WL",
			"BS_O_ISRL_SHAYETET_2023_Officer_WL",
			"BS_O_ISRL_SHAYETET_2023_Officer_WL",
			"BS_O_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 
	class BS_I_ISRL_SHAYETET_2023_k3_SDha4C58:B_LSV_01_armed_F {
		scope=2;
		side=2;
		faction="BS_I_ISRL_SHAYETET_2023";
		crew="BS_I_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_I_ISRL_SHAYETET_2023_Officer_WL",
			"BS_I_ISRL_SHAYETET_2023_Officer_WL",
			"BS_I_ISRL_SHAYETET_2023_Officer_WL",
			"BS_I_ISRL_SHAYETET_2023_Officer_WL",
			"BS_I_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 

	class B_MRAP_01_hmg_F;
	class BS_B_ISRL_SHAYETET_2023_v_fJaOF6kRQ:B_MRAP_01_hmg_F {
		scope=2;
		side=1;
		faction="BS_B_ISRL_SHAYETET_2023";
		crew="BS_B_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_B_ISRL_SHAYETET_2023_Officer_WL",
			"BS_B_ISRL_SHAYETET_2023_Officer_WL",
			"BS_B_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 
	class BS_O_ISRL_SHAYETET_2023_v_fJaOF6kRQ:B_MRAP_01_hmg_F {
		scope=2;
		side=0;
		faction="BS_O_ISRL_SHAYETET_2023";
		crew="BS_O_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_O_ISRL_SHAYETET_2023_Officer_WL",
			"BS_O_ISRL_SHAYETET_2023_Officer_WL",
			"BS_O_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 
	class BS_I_ISRL_SHAYETET_2023_v_fJaOF6kRQ:B_MRAP_01_hmg_F {
		scope=2;
		side=2;
		faction="BS_I_ISRL_SHAYETET_2023";
		crew="BS_I_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_I_ISRL_SHAYETET_2023_Officer_WL",
			"BS_I_ISRL_SHAYETET_2023_Officer_WL",
			"BS_I_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 

	class B_MRAP_01_gmg_F;
	class BS_B_ISRL_SHAYETET_2023_EkqM7Mrlzyw:B_MRAP_01_gmg_F {
		scope=2;
		side=1;
		faction="BS_B_ISRL_SHAYETET_2023";
		crew="BS_B_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_B_ISRL_SHAYETET_2023_Officer_WL",
			"BS_B_ISRL_SHAYETET_2023_Officer_WL",
			"BS_B_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 
	class BS_O_ISRL_SHAYETET_2023_EkqM7Mrlzyw:B_MRAP_01_gmg_F {
		scope=2;
		side=0;
		faction="BS_O_ISRL_SHAYETET_2023";
		crew="BS_O_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_O_ISRL_SHAYETET_2023_Officer_WL",
			"BS_O_ISRL_SHAYETET_2023_Officer_WL",
			"BS_O_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 
	class BS_I_ISRL_SHAYETET_2023_EkqM7Mrlzyw:B_MRAP_01_gmg_F {
		scope=2;
		side=2;
		faction="BS_I_ISRL_SHAYETET_2023";
		crew="BS_I_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_I_ISRL_SHAYETET_2023_Officer_WL",
			"BS_I_ISRL_SHAYETET_2023_Officer_WL",
			"BS_I_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 

	class B_MRAP_01_F;
	class BS_B_ISRL_SHAYETET_2023_qDXK6KDnqM4:B_MRAP_01_F {
		scope=2;
		side=1;
		faction="BS_B_ISRL_SHAYETET_2023";
		crew="BS_B_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_B_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 
	class BS_O_ISRL_SHAYETET_2023_qDXK6KDnqM4:B_MRAP_01_F {
		scope=2;
		side=0;
		faction="BS_O_ISRL_SHAYETET_2023";
		crew="BS_O_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_O_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 
	class BS_I_ISRL_SHAYETET_2023_qDXK6KDnqM4:B_MRAP_01_F {
		scope=2;
		side=2;
		faction="BS_I_ISRL_SHAYETET_2023";
		crew="BS_I_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_I_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 

	class B_Truck_01_covered_F;
	class BS_B_ISRL_SHAYETET_2023_JDDxop_SxsI:B_Truck_01_covered_F {
		scope=2;
		side=1;
		faction="BS_B_ISRL_SHAYETET_2023";
		crew="BS_B_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_B_ISRL_SHAYETET_2023_Officer_WL",
			"BS_B_ISRL_SHAYETET_2023_Officer_WL",
			"BS_B_ISRL_SHAYETET_2023_Officer_WL",
			"BS_B_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 
	class BS_O_ISRL_SHAYETET_2023_JDDxop_SxsI:B_Truck_01_covered_F {
		scope=2;
		side=0;
		faction="BS_O_ISRL_SHAYETET_2023";
		crew="BS_O_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_O_ISRL_SHAYETET_2023_Officer_WL",
			"BS_O_ISRL_SHAYETET_2023_Officer_WL",
			"BS_O_ISRL_SHAYETET_2023_Officer_WL",
			"BS_O_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 
	class BS_I_ISRL_SHAYETET_2023_JDDxop_SxsI:B_Truck_01_covered_F {
		scope=2;
		side=2;
		faction="BS_I_ISRL_SHAYETET_2023";
		crew="BS_I_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_I_ISRL_SHAYETET_2023_Officer_WL",
			"BS_I_ISRL_SHAYETET_2023_Officer_WL",
			"BS_I_ISRL_SHAYETET_2023_Officer_WL",
			"BS_I_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 

	class B_Truck_01_transport_F;
	class BS_B_ISRL_SHAYETET_2023_U9h1_Aahs5k:B_Truck_01_transport_F {
		scope=2;
		side=1;
		faction="BS_B_ISRL_SHAYETET_2023";
		crew="BS_B_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_B_ISRL_SHAYETET_2023_Officer_WL",
			"BS_B_ISRL_SHAYETET_2023_Officer_WL",
			"BS_B_ISRL_SHAYETET_2023_Officer_WL",
			"BS_B_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 
	class BS_O_ISRL_SHAYETET_2023_U9h1_Aahs5k:B_Truck_01_transport_F {
		scope=2;
		side=0;
		faction="BS_O_ISRL_SHAYETET_2023";
		crew="BS_O_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_O_ISRL_SHAYETET_2023_Officer_WL",
			"BS_O_ISRL_SHAYETET_2023_Officer_WL",
			"BS_O_ISRL_SHAYETET_2023_Officer_WL",
			"BS_O_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 
	class BS_I_ISRL_SHAYETET_2023_U9h1_Aahs5k:B_Truck_01_transport_F {
		scope=2;
		side=2;
		faction="BS_I_ISRL_SHAYETET_2023";
		crew="BS_I_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_I_ISRL_SHAYETET_2023_Officer_WL",
			"BS_I_ISRL_SHAYETET_2023_Officer_WL",
			"BS_I_ISRL_SHAYETET_2023_Officer_WL",
			"BS_I_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 

	class B_Truck_01_Repair_F;
	class BS_B_ISRL_SHAYETET_2023_JbRnWXzX3Nw:B_Truck_01_Repair_F {
		scope=2;
		side=1;
		faction="BS_B_ISRL_SHAYETET_2023";
		crew="BS_B_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_B_ISRL_SHAYETET_2023_Officer_WL",
			"BS_B_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 
	class BS_O_ISRL_SHAYETET_2023_JbRnWXzX3Nw:B_Truck_01_Repair_F {
		scope=2;
		side=0;
		faction="BS_O_ISRL_SHAYETET_2023";
		crew="BS_O_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_O_ISRL_SHAYETET_2023_Officer_WL",
			"BS_O_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 
	class BS_I_ISRL_SHAYETET_2023_JbRnWXzX3Nw:B_Truck_01_Repair_F {
		scope=2;
		side=2;
		faction="BS_I_ISRL_SHAYETET_2023";
		crew="BS_I_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_I_ISRL_SHAYETET_2023_Officer_WL",
			"BS_I_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 

	class B_Truck_01_flatbed_F;
	class BS_B_ISRL_SHAYETET_2023_HE2fdENdKBw:B_Truck_01_flatbed_F {
		scope=2;
		side=1;
		faction="BS_B_ISRL_SHAYETET_2023";
		crew="BS_B_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_B_ISRL_SHAYETET_2023_Officer_WL",
			"BS_B_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 
	class BS_O_ISRL_SHAYETET_2023_HE2fdENdKBw:B_Truck_01_flatbed_F {
		scope=2;
		side=0;
		faction="BS_O_ISRL_SHAYETET_2023";
		crew="BS_O_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_O_ISRL_SHAYETET_2023_Officer_WL",
			"BS_O_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 
	class BS_I_ISRL_SHAYETET_2023_HE2fdENdKBw:B_Truck_01_flatbed_F {
		scope=2;
		side=2;
		faction="BS_I_ISRL_SHAYETET_2023";
		crew="BS_I_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_I_ISRL_SHAYETET_2023_Officer_WL",
			"BS_I_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 

	class B_Truck_01_cargo_F;
	class BS_B_ISRL_SHAYETET_2023_WiGfT1yTw0I:B_Truck_01_cargo_F {
		scope=2;
		side=1;
		faction="BS_B_ISRL_SHAYETET_2023";
		crew="BS_B_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_B_ISRL_SHAYETET_2023_Officer_WL",
			"BS_B_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 
	class BS_O_ISRL_SHAYETET_2023_WiGfT1yTw0I:B_Truck_01_cargo_F {
		scope=2;
		side=0;
		faction="BS_O_ISRL_SHAYETET_2023";
		crew="BS_O_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_O_ISRL_SHAYETET_2023_Officer_WL",
			"BS_O_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 
	class BS_I_ISRL_SHAYETET_2023_WiGfT1yTw0I:B_Truck_01_cargo_F {
		scope=2;
		side=2;
		faction="BS_I_ISRL_SHAYETET_2023";
		crew="BS_I_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_I_ISRL_SHAYETET_2023_Officer_WL",
			"BS_I_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 

	class B_Boat_Transport_01_F;
	class BS_B_ISRL_SHAYETET_2023_rmh18SomIIU:B_Boat_Transport_01_F {
		scope=2;
		side=1;
		faction="BS_B_ISRL_SHAYETET_2023";
		crew="BS_B_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_B_ISRL_SHAYETET_2023_Officer_WL",
			"BS_B_ISRL_SHAYETET_2023_Officer_WL",
			"BS_B_ISRL_SHAYETET_2023_Officer_WL",
			"BS_B_ISRL_SHAYETET_2023_Officer_WL",
			"BS_B_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 
	class BS_O_ISRL_SHAYETET_2023_rmh18SomIIU:B_Boat_Transport_01_F {
		scope=2;
		side=0;
		faction="BS_O_ISRL_SHAYETET_2023";
		crew="BS_O_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_O_ISRL_SHAYETET_2023_Officer_WL",
			"BS_O_ISRL_SHAYETET_2023_Officer_WL",
			"BS_O_ISRL_SHAYETET_2023_Officer_WL",
			"BS_O_ISRL_SHAYETET_2023_Officer_WL",
			"BS_O_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 
	class BS_I_ISRL_SHAYETET_2023_rmh18SomIIU:B_Boat_Transport_01_F {
		scope=2;
		side=2;
		faction="BS_I_ISRL_SHAYETET_2023";
		crew="BS_I_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_I_ISRL_SHAYETET_2023_Officer_WL",
			"BS_I_ISRL_SHAYETET_2023_Officer_WL",
			"BS_I_ISRL_SHAYETET_2023_Officer_WL",
			"BS_I_ISRL_SHAYETET_2023_Officer_WL",
			"BS_I_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 

	class B_Boat_Armed_01_minigun_F;
	class BS_B_ISRL_SHAYETET_2023_mMGV8pEs_8U:B_Boat_Armed_01_minigun_F {
		scope=2;
		side=1;
		faction="BS_B_ISRL_SHAYETET_2023";
		crew="BS_B_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_B_ISRL_SHAYETET_2023_Officer_WL",
			"BS_B_ISRL_SHAYETET_2023_Officer_WL",
			"BS_B_ISRL_SHAYETET_2023_Officer_WL",
			"BS_B_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 
	class BS_O_ISRL_SHAYETET_2023_mMGV8pEs_8U:B_Boat_Armed_01_minigun_F {
		scope=2;
		side=0;
		faction="BS_O_ISRL_SHAYETET_2023";
		crew="BS_O_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_O_ISRL_SHAYETET_2023_Officer_WL",
			"BS_O_ISRL_SHAYETET_2023_Officer_WL",
			"BS_O_ISRL_SHAYETET_2023_Officer_WL",
			"BS_O_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 
	class BS_I_ISRL_SHAYETET_2023_mMGV8pEs_8U:B_Boat_Armed_01_minigun_F {
		scope=2;
		side=2;
		faction="BS_I_ISRL_SHAYETET_2023";
		crew="BS_I_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_I_ISRL_SHAYETET_2023_Officer_WL",
			"BS_I_ISRL_SHAYETET_2023_Officer_WL",
			"BS_I_ISRL_SHAYETET_2023_Officer_WL",
			"BS_I_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 

	class B_SDV_01_F;
	class BS_B_ISRL_SHAYETET_2023_IQ_mV01eqXg:B_SDV_01_F {
		scope=2;
		side=1;
		faction="BS_B_ISRL_SHAYETET_2023";
		crew="BS_B_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_B_ISRL_SHAYETET_2023_Officer_WL",
			"BS_B_ISRL_SHAYETET_2023_Officer_WL",
			"BS_B_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 
	class BS_O_ISRL_SHAYETET_2023_IQ_mV01eqXg:B_SDV_01_F {
		scope=2;
		side=0;
		faction="BS_O_ISRL_SHAYETET_2023";
		crew="BS_O_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_O_ISRL_SHAYETET_2023_Officer_WL",
			"BS_O_ISRL_SHAYETET_2023_Officer_WL",
			"BS_O_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 
	class BS_I_ISRL_SHAYETET_2023_IQ_mV01eqXg:B_SDV_01_F {
		scope=2;
		side=2;
		faction="BS_I_ISRL_SHAYETET_2023";
		crew="BS_I_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_I_ISRL_SHAYETET_2023_Officer_WL",
			"BS_I_ISRL_SHAYETET_2023_Officer_WL",
			"BS_I_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 

	class B_MBT_01_TUSK_F;
	class BS_B_ISRL_SHAYETET_2023_d86bpXN3qso:B_MBT_01_TUSK_F {
		scope=2;
		side=1;
		faction="BS_B_ISRL_SHAYETET_2023";
		crew="BS_B_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_B_ISRL_SHAYETET_2023_Officer_WL",
			"BS_B_ISRL_SHAYETET_2023_Officer_WL",
			"BS_B_ISRL_SHAYETET_2023_Officer_WL",
			"BS_B_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 
	class BS_O_ISRL_SHAYETET_2023_d86bpXN3qso:B_MBT_01_TUSK_F {
		scope=2;
		side=0;
		faction="BS_O_ISRL_SHAYETET_2023";
		crew="BS_O_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_O_ISRL_SHAYETET_2023_Officer_WL",
			"BS_O_ISRL_SHAYETET_2023_Officer_WL",
			"BS_O_ISRL_SHAYETET_2023_Officer_WL",
			"BS_O_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 
	class BS_I_ISRL_SHAYETET_2023_d86bpXN3qso:B_MBT_01_TUSK_F {
		scope=2;
		side=2;
		faction="BS_I_ISRL_SHAYETET_2023";
		crew="BS_I_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_I_ISRL_SHAYETET_2023_Officer_WL",
			"BS_I_ISRL_SHAYETET_2023_Officer_WL",
			"BS_I_ISRL_SHAYETET_2023_Officer_WL",
			"BS_I_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 

	class B_HMG_01_high_F;
	class BS_B_ISRL_SHAYETET_2023_t8G446lxSH4:B_HMG_01_high_F {
		scope=2;
		side=1;
		faction="BS_B_ISRL_SHAYETET_2023";
		crew="BS_B_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_B_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 
	class BS_O_ISRL_SHAYETET_2023_t8G446lxSH4:B_HMG_01_high_F {
		scope=2;
		side=0;
		faction="BS_O_ISRL_SHAYETET_2023";
		crew="BS_O_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_O_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 
	class BS_I_ISRL_SHAYETET_2023_t8G446lxSH4:B_HMG_01_high_F {
		scope=2;
		side=2;
		faction="BS_I_ISRL_SHAYETET_2023";
		crew="BS_I_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_I_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 

	class B_Mortar_01_F;
	class BS_B_ISRL_SHAYETET_2023_gdLSc7FB4Sg:B_Mortar_01_F {
		scope=2;
		side=1;
		faction="BS_B_ISRL_SHAYETET_2023";
		crew="BS_B_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_B_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 
	class BS_O_ISRL_SHAYETET_2023_gdLSc7FB4Sg:B_Mortar_01_F {
		scope=2;
		side=0;
		faction="BS_O_ISRL_SHAYETET_2023";
		crew="BS_O_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_O_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 
	class BS_I_ISRL_SHAYETET_2023_gdLSc7FB4Sg:B_Mortar_01_F {
		scope=2;
		side=2;
		faction="BS_I_ISRL_SHAYETET_2023";
		crew="BS_I_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_I_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 

	class B_static_AA_F;
	class BS_B_ISRL_SHAYETET_2023_8e2pl9sdLns:B_static_AA_F {
		scope=2;
		side=1;
		faction="BS_B_ISRL_SHAYETET_2023";
		crew="BS_B_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_B_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 
	class BS_O_ISRL_SHAYETET_2023_8e2pl9sdLns:B_static_AA_F {
		scope=2;
		side=0;
		faction="BS_O_ISRL_SHAYETET_2023";
		crew="BS_O_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_O_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 
	class BS_I_ISRL_SHAYETET_2023_8e2pl9sdLns:B_static_AA_F {
		scope=2;
		side=2;
		faction="BS_I_ISRL_SHAYETET_2023";
		crew="BS_I_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_I_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 

	class B_HMG_01_F;
	class BS_B_ISRL_SHAYETET_2023_ALuIScXZ8tQ:B_HMG_01_F {
		scope=2;
		side=1;
		faction="BS_B_ISRL_SHAYETET_2023";
		crew="BS_B_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_B_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 
	class BS_O_ISRL_SHAYETET_2023_ALuIScXZ8tQ:B_HMG_01_F {
		scope=2;
		side=0;
		faction="BS_O_ISRL_SHAYETET_2023";
		crew="BS_O_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_O_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 
	class BS_I_ISRL_SHAYETET_2023_ALuIScXZ8tQ:B_HMG_01_F {
		scope=2;
		side=2;
		faction="BS_I_ISRL_SHAYETET_2023";
		crew="BS_I_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_I_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 

	class B_D_APC_Tracked_01_rcws_lxWS;
	class BS_B_ISRL_SHAYETET_2023_vkafj_ta4Z8:B_D_APC_Tracked_01_rcws_lxWS {
		scope=2;
		side=1;
		faction="BS_B_ISRL_SHAYETET_2023";
		crew="BS_B_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_B_ISRL_SHAYETET_2023_Officer_WL",
			"BS_B_ISRL_SHAYETET_2023_Officer_WL",
			"BS_B_ISRL_SHAYETET_2023_Officer_WL",
			"BS_B_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 
	class BS_O_ISRL_SHAYETET_2023_vkafj_ta4Z8:B_D_APC_Tracked_01_rcws_lxWS {
		scope=2;
		side=0;
		faction="BS_O_ISRL_SHAYETET_2023";
		crew="BS_O_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_O_ISRL_SHAYETET_2023_Officer_WL",
			"BS_O_ISRL_SHAYETET_2023_Officer_WL",
			"BS_O_ISRL_SHAYETET_2023_Officer_WL",
			"BS_O_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 
	class BS_I_ISRL_SHAYETET_2023_vkafj_ta4Z8:B_D_APC_Tracked_01_rcws_lxWS {
		scope=2;
		side=2;
		faction="BS_I_ISRL_SHAYETET_2023";
		crew="BS_I_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_I_ISRL_SHAYETET_2023_Officer_WL",
			"BS_I_ISRL_SHAYETET_2023_Officer_WL",
			"BS_I_ISRL_SHAYETET_2023_Officer_WL",
			"BS_I_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 

	class rhsusf_f22;
	class BS_B_ISRL_SHAYETET_2023_LnDPXO6Y_qw:rhsusf_f22 {
		scope=2;
		side=1;
		faction="BS_B_ISRL_SHAYETET_2023";
		crew="BS_B_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_B_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 
	class BS_O_ISRL_SHAYETET_2023_LnDPXO6Y_qw:rhsusf_f22 {
		scope=2;
		side=0;
		faction="BS_O_ISRL_SHAYETET_2023";
		crew="BS_O_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_O_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 
	class BS_I_ISRL_SHAYETET_2023_LnDPXO6Y_qw:rhsusf_f22 {
		scope=2;
		side=2;
		faction="BS_I_ISRL_SHAYETET_2023";
		crew="BS_I_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_I_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 

	class RHS_C130J;
	class BS_B_ISRL_SHAYETET_2023_b9Qx6vL5Omg:RHS_C130J {
		scope=2;
		side=1;
		faction="BS_B_ISRL_SHAYETET_2023";
		crew="BS_B_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_B_ISRL_SHAYETET_2023_Officer_WL",
			"BS_B_ISRL_SHAYETET_2023_Officer_WL",
			"BS_B_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 
	class BS_O_ISRL_SHAYETET_2023_b9Qx6vL5Omg:RHS_C130J {
		scope=2;
		side=0;
		faction="BS_O_ISRL_SHAYETET_2023";
		crew="BS_O_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_O_ISRL_SHAYETET_2023_Officer_WL",
			"BS_O_ISRL_SHAYETET_2023_Officer_WL",
			"BS_O_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 
	class BS_I_ISRL_SHAYETET_2023_b9Qx6vL5Omg:RHS_C130J {
		scope=2;
		side=2;
		faction="BS_I_ISRL_SHAYETET_2023";
		crew="BS_I_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_I_ISRL_SHAYETET_2023_Officer_WL",
			"BS_I_ISRL_SHAYETET_2023_Officer_WL",
			"BS_I_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 

	class RHS_C130J_Cargo;
	class BS_B_ISRL_SHAYETET_2023_PDi9Aikgwhc:RHS_C130J_Cargo {
		scope=2;
		side=1;
		faction="BS_B_ISRL_SHAYETET_2023";
		crew="BS_B_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_B_ISRL_SHAYETET_2023_Officer_WL",
			"BS_B_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 
	class BS_O_ISRL_SHAYETET_2023_PDi9Aikgwhc:RHS_C130J_Cargo {
		scope=2;
		side=0;
		faction="BS_O_ISRL_SHAYETET_2023";
		crew="BS_O_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_O_ISRL_SHAYETET_2023_Officer_WL",
			"BS_O_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 
	class BS_I_ISRL_SHAYETET_2023_PDi9Aikgwhc:RHS_C130J_Cargo {
		scope=2;
		side=2;
		faction="BS_I_ISRL_SHAYETET_2023";
		crew="BS_I_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_I_ISRL_SHAYETET_2023_Officer_WL",
			"BS_I_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 

	class RHS_AH64DGrey;
	class BS_B_ISRL_SHAYETET_2023_onws03kHVIo:RHS_AH64DGrey {
		scope=2;
		side=1;
		faction="BS_B_ISRL_SHAYETET_2023";
		crew="BS_B_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_B_ISRL_SHAYETET_2023_Officer_WL",
			"BS_B_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 
	class BS_O_ISRL_SHAYETET_2023_onws03kHVIo:RHS_AH64DGrey {
		scope=2;
		side=0;
		faction="BS_O_ISRL_SHAYETET_2023";
		crew="BS_O_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_O_ISRL_SHAYETET_2023_Officer_WL",
			"BS_O_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 
	class BS_I_ISRL_SHAYETET_2023_onws03kHVIo:RHS_AH64DGrey {
		scope=2;
		side=2;
		faction="BS_I_ISRL_SHAYETET_2023";
		crew="BS_I_ISRL_SHAYETET_2023_Officer_WL";
		typicalCargo[]= { 
			"BS_I_ISRL_SHAYETET_2023_Officer_WL",
			"BS_I_ISRL_SHAYETET_2023_Officer_WL"
		}; 
	}; 
};
class CfgGroups { 
	class East { 
		class ISRL_SHAYETET_2023 { 
			name="ISRL - SHAYETET 13 (2023)";
			class Infantry {
				name="Infantry";
				class BS_O_ISRL_SHAYETET_2023_Fireteam_WL {
					name="Fireteam (WL)";
					side=0;
					faction="BS_O_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_GL_WL";
					};
				};
				class BS_O_ISRL_SHAYETET_2023_Fireteam_WT {
					name="Fireteam (WT)";
					side=0;
					faction="BS_O_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_AR_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_GL_WT";
					};
				};
				class BS_O_ISRL_SHAYETET_2023_Fireteam_DT {
					name="Fireteam (DT)";
					side=0;
					faction="BS_O_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_AR_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_GL_DT";
					};
				};
				class BS_O_ISRL_SHAYETET_2023_Squad_WL {
					name="Squad (WL)";
					side=0;
					faction="BS_O_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_GL_WL";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_AR_WL";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_GL_WL";
					};
				};
				class BS_O_ISRL_SHAYETET_2023_Squad_WT {
					name="Squad (WT)";
					side=0;
					faction="BS_O_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_AR_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_GL_WT";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_AR_WT";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_GL_WT";
					};
				};
				class BS_O_ISRL_SHAYETET_2023_Squad_DT {
					name="Squad (DT)";
					side=0;
					faction="BS_O_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_AR_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_GL_DT";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_AR_DT";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_GL_DT";
					};
				};
				class BS_O_ISRL_SHAYETET_2023_AT_WL {
					name="Anti-Tank (WL)";
					side=0;
					faction="BS_O_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WL";
					};
				};
				class BS_O_ISRL_SHAYETET_2023_AT_WT {
					name="Anti-Tank (WT)";
					side=0;
					faction="BS_O_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WT";
					};
				};
				class BS_O_ISRL_SHAYETET_2023_AT_DT {
					name="Anti-Tank (DT)";
					side=0;
					faction="BS_O_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_DT";
					};
				};
			};
			class Motorized {
				name="Mechanize Infantry";
				class BS_O_ISRL_SHAYETET_2023_LightVehicle_WL_0 {
					name="Polaris DAGOR (XM312) (WL)";
					side=0;
					faction="BS_O_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_ISRL_SHAYETET_2023_k3_SDha4C58";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_AR_WL";
					};
				};
				class BS_O_ISRL_SHAYETET_2023_LightVehicle_WT_0 {
					name="Polaris DAGOR (XM312) (WT)";
					side=0;
					faction="BS_O_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_ISRL_SHAYETET_2023_k3_SDha4C58";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_AR_WT";
					};
				};
				class BS_O_ISRL_SHAYETET_2023_LightVehicle_DT_0 {
					name="Polaris DAGOR (XM312) (DT)";
					side=0;
					faction="BS_O_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_ISRL_SHAYETET_2023_k3_SDha4C58";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_AR_DT";
					};
				};
				class BS_O_ISRL_SHAYETET_2023_LightVehicle_WL_1 {
					name="M-ATV (HMG) (WL)";
					side=0;
					faction="BS_O_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_ISRL_SHAYETET_2023_v_fJaOF6kRQ";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_AR_WL";
					};
				};
				class BS_O_ISRL_SHAYETET_2023_LightVehicle_WT_1 {
					name="M-ATV (HMG) (WT)";
					side=0;
					faction="BS_O_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_ISRL_SHAYETET_2023_v_fJaOF6kRQ";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_AR_WT";
					};
				};
				class BS_O_ISRL_SHAYETET_2023_LightVehicle_DT_1 {
					name="M-ATV (HMG) (DT)";
					side=0;
					faction="BS_O_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_ISRL_SHAYETET_2023_v_fJaOF6kRQ";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_AR_DT";
					};
				};
				class BS_O_ISRL_SHAYETET_2023_LightVehicle_WL_2 {
					name="M-ATV (GMG) (WL)";
					side=0;
					faction="BS_O_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_ISRL_SHAYETET_2023_EkqM7Mrlzyw";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_AR_WL";
					};
				};
				class BS_O_ISRL_SHAYETET_2023_LightVehicle_WT_2 {
					name="M-ATV (GMG) (WT)";
					side=0;
					faction="BS_O_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_ISRL_SHAYETET_2023_EkqM7Mrlzyw";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_AR_WT";
					};
				};
				class BS_O_ISRL_SHAYETET_2023_LightVehicle_DT_2 {
					name="M-ATV (GMG) (DT)";
					side=0;
					faction="BS_O_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_ISRL_SHAYETET_2023_EkqM7Mrlzyw";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_AR_DT";
					};
				};
				class BS_O_ISRL_SHAYETET_2023_Tank_WL_0 {
					name="Merkava Mk IV LIC (WL) ";
					side=0;
					faction="BS_O_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_ISRL_SHAYETET_2023_d86bpXN3qso";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_AR_WL";
					};
				};
				class BS_O_ISRL_SHAYETET_2023_Tank_WT_0 {
					name="Merkava Mk IV LIC (WT) ";
					side=0;
					faction="BS_O_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_ISRL_SHAYETET_2023_d86bpXN3qso";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_AR_WT";
					};
				};
				class BS_O_ISRL_SHAYETET_2023_Tank_DT_0 {
					name="Merkava Mk IV LIC (DT) ";
					side=0;
					faction="BS_O_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_ISRL_SHAYETET_2023_d86bpXN3qso";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_AR_DT";
					};
				};
				class BS_O_ISRL_SHAYETET_2023_Tank_WL_1 {
					name="Namer (WL) ";
					side=0;
					faction="BS_O_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_ISRL_SHAYETET_2023_vkafj_ta4Z8";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_AR_WL";
					};
				};
				class BS_O_ISRL_SHAYETET_2023_Tank_WT_1 {
					name="Namer (WT) ";
					side=0;
					faction="BS_O_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_ISRL_SHAYETET_2023_vkafj_ta4Z8";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_AR_WT";
					};
				};
				class BS_O_ISRL_SHAYETET_2023_Tank_DT_1 {
					name="Namer (DT) ";
					side=0;
					faction="BS_O_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_ISRL_SHAYETET_2023_vkafj_ta4Z8";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_ISRL_SHAYETET_2023_AR_DT";
					};
				};
			};
		};
	};
	class Indep { 
		class ISRL_SHAYETET_2023 { 
			name="ISRL - SHAYETET 13 (2023)";
			class Infantry {
				name="Infantry";
				class BS_I_ISRL_SHAYETET_2023_Fireteam_WL {
					name="Fireteam (WL)";
					side=1;
					faction="BS_I_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_GL_WL";
					};
				};
				class BS_I_ISRL_SHAYETET_2023_Fireteam_WT {
					name="Fireteam (WT)";
					side=1;
					faction="BS_I_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_AR_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_GL_WT";
					};
				};
				class BS_I_ISRL_SHAYETET_2023_Fireteam_DT {
					name="Fireteam (DT)";
					side=1;
					faction="BS_I_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_AR_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_GL_DT";
					};
				};
				class BS_I_ISRL_SHAYETET_2023_Squad_WL {
					name="Squad (WL)";
					side=1;
					faction="BS_I_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_GL_WL";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_AR_WL";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_GL_WL";
					};
				};
				class BS_I_ISRL_SHAYETET_2023_Squad_WT {
					name="Squad (WT)";
					side=1;
					faction="BS_I_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_AR_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_GL_WT";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_AR_WT";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_GL_WT";
					};
				};
				class BS_I_ISRL_SHAYETET_2023_Squad_DT {
					name="Squad (DT)";
					side=1;
					faction="BS_I_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_AR_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_GL_DT";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_AR_DT";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_GL_DT";
					};
				};
				class BS_I_ISRL_SHAYETET_2023_AT_WL {
					name="Anti-Tank (WL)";
					side=1;
					faction="BS_I_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WL";
					};
				};
				class BS_I_ISRL_SHAYETET_2023_AT_WT {
					name="Anti-Tank (WT)";
					side=1;
					faction="BS_I_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WT";
					};
				};
				class BS_I_ISRL_SHAYETET_2023_AT_DT {
					name="Anti-Tank (DT)";
					side=1;
					faction="BS_I_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_DT";
					};
				};
			};
			class Motorized {
				name="Mechanize Infantry";
				class BS_I_ISRL_SHAYETET_2023_LightVehicle_WL_0 {
					name="Polaris DAGOR (XM312) (WL)";
					side=1;
					faction="BS_I_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ISRL_SHAYETET_2023_k3_SDha4C58";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_AR_WL";
					};
				};
				class BS_I_ISRL_SHAYETET_2023_LightVehicle_WT_0 {
					name="Polaris DAGOR (XM312) (WT)";
					side=1;
					faction="BS_I_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ISRL_SHAYETET_2023_k3_SDha4C58";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_AR_WT";
					};
				};
				class BS_I_ISRL_SHAYETET_2023_LightVehicle_DT_0 {
					name="Polaris DAGOR (XM312) (DT)";
					side=1;
					faction="BS_I_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ISRL_SHAYETET_2023_k3_SDha4C58";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_AR_DT";
					};
				};
				class BS_I_ISRL_SHAYETET_2023_LightVehicle_WL_1 {
					name="M-ATV (HMG) (WL)";
					side=1;
					faction="BS_I_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ISRL_SHAYETET_2023_v_fJaOF6kRQ";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_AR_WL";
					};
				};
				class BS_I_ISRL_SHAYETET_2023_LightVehicle_WT_1 {
					name="M-ATV (HMG) (WT)";
					side=1;
					faction="BS_I_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ISRL_SHAYETET_2023_v_fJaOF6kRQ";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_AR_WT";
					};
				};
				class BS_I_ISRL_SHAYETET_2023_LightVehicle_DT_1 {
					name="M-ATV (HMG) (DT)";
					side=1;
					faction="BS_I_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ISRL_SHAYETET_2023_v_fJaOF6kRQ";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_AR_DT";
					};
				};
				class BS_I_ISRL_SHAYETET_2023_LightVehicle_WL_2 {
					name="M-ATV (GMG) (WL)";
					side=1;
					faction="BS_I_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ISRL_SHAYETET_2023_EkqM7Mrlzyw";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_AR_WL";
					};
				};
				class BS_I_ISRL_SHAYETET_2023_LightVehicle_WT_2 {
					name="M-ATV (GMG) (WT)";
					side=1;
					faction="BS_I_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ISRL_SHAYETET_2023_EkqM7Mrlzyw";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_AR_WT";
					};
				};
				class BS_I_ISRL_SHAYETET_2023_LightVehicle_DT_2 {
					name="M-ATV (GMG) (DT)";
					side=1;
					faction="BS_I_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ISRL_SHAYETET_2023_EkqM7Mrlzyw";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_AR_DT";
					};
				};
				class BS_I_ISRL_SHAYETET_2023_Tank_WL_0 {
					name="Merkava Mk IV LIC (WL) ";
					side=1;
					faction="BS_I_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ISRL_SHAYETET_2023_d86bpXN3qso";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_AR_WL";
					};
				};
				class BS_I_ISRL_SHAYETET_2023_Tank_WT_0 {
					name="Merkava Mk IV LIC (WT) ";
					side=1;
					faction="BS_I_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ISRL_SHAYETET_2023_d86bpXN3qso";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_AR_WT";
					};
				};
				class BS_I_ISRL_SHAYETET_2023_Tank_DT_0 {
					name="Merkava Mk IV LIC (DT) ";
					side=1;
					faction="BS_I_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ISRL_SHAYETET_2023_d86bpXN3qso";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_AR_DT";
					};
				};
				class BS_I_ISRL_SHAYETET_2023_Tank_WL_1 {
					name="Namer (WL) ";
					side=1;
					faction="BS_I_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ISRL_SHAYETET_2023_vkafj_ta4Z8";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_AR_WL";
					};
				};
				class BS_I_ISRL_SHAYETET_2023_Tank_WT_1 {
					name="Namer (WT) ";
					side=1;
					faction="BS_I_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ISRL_SHAYETET_2023_vkafj_ta4Z8";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_AR_WT";
					};
				};
				class BS_I_ISRL_SHAYETET_2023_Tank_DT_1 {
					name="Namer (DT) ";
					side=1;
					faction="BS_I_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_ISRL_SHAYETET_2023_vkafj_ta4Z8";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_I_ISRL_SHAYETET_2023_AR_DT";
					};
				};
			};
		};
	};
	class West { 
		class ISRL_SHAYETET_2023 { 
			name="ISRL - SHAYETET 13 (2023)";
			class Infantry {
				name="Infantry";
				class BS_B_ISRL_SHAYETET_2023_Fireteam_WL {
					name="Fireteam (WL)";
					side=2;
					faction="BS_B_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_GL_WL";
					};
				};
				class BS_B_ISRL_SHAYETET_2023_Fireteam_WT {
					name="Fireteam (WT)";
					side=2;
					faction="BS_B_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_AR_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_GL_WT";
					};
				};
				class BS_B_ISRL_SHAYETET_2023_Fireteam_DT {
					name="Fireteam (DT)";
					side=2;
					faction="BS_B_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_AR_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_GL_DT";
					};
				};
				class BS_B_ISRL_SHAYETET_2023_Squad_WL {
					name="Squad (WL)";
					side=2;
					faction="BS_B_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_GL_WL";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_AR_WL";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_GL_WL";
					};
				};
				class BS_B_ISRL_SHAYETET_2023_Squad_WT {
					name="Squad (WT)";
					side=2;
					faction="BS_B_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_AR_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_GL_WT";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_AR_WT";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_GL_WT";
					};
				};
				class BS_B_ISRL_SHAYETET_2023_Squad_DT {
					name="Squad (DT)";
					side=2;
					faction="BS_B_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_AR_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_GL_DT";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_AR_DT";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_GL_DT";
					};
				};
				class BS_B_ISRL_SHAYETET_2023_AT_WL {
					name="Anti-Tank (WL)";
					side=2;
					faction="BS_B_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WL";
					};
				};
				class BS_B_ISRL_SHAYETET_2023_AT_WT {
					name="Anti-Tank (WT)";
					side=2;
					faction="BS_B_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WT";
					};
				};
				class BS_B_ISRL_SHAYETET_2023_AT_DT {
					name="Anti-Tank (DT)";
					side=2;
					faction="BS_B_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_DT";
					};
				};
			};
			class Motorized {
				name="Mechanize Infantry";
				class BS_B_ISRL_SHAYETET_2023_LightVehicle_WL_0 {
					name="Polaris DAGOR (XM312) (WL)";
					side=2;
					faction="BS_B_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_k3_SDha4C58";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_AR_WL";
					};
				};
				class BS_B_ISRL_SHAYETET_2023_LightVehicle_WT_0 {
					name="Polaris DAGOR (XM312) (WT)";
					side=2;
					faction="BS_B_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_k3_SDha4C58";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_AR_WT";
					};
				};
				class BS_B_ISRL_SHAYETET_2023_LightVehicle_DT_0 {
					name="Polaris DAGOR (XM312) (DT)";
					side=2;
					faction="BS_B_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_k3_SDha4C58";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_AR_DT";
					};
				};
				class BS_B_ISRL_SHAYETET_2023_LightVehicle_WL_1 {
					name="M-ATV (HMG) (WL)";
					side=2;
					faction="BS_B_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_v_fJaOF6kRQ";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_AR_WL";
					};
				};
				class BS_B_ISRL_SHAYETET_2023_LightVehicle_WT_1 {
					name="M-ATV (HMG) (WT)";
					side=2;
					faction="BS_B_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_v_fJaOF6kRQ";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_AR_WT";
					};
				};
				class BS_B_ISRL_SHAYETET_2023_LightVehicle_DT_1 {
					name="M-ATV (HMG) (DT)";
					side=2;
					faction="BS_B_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_v_fJaOF6kRQ";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_AR_DT";
					};
				};
				class BS_B_ISRL_SHAYETET_2023_LightVehicle_WL_2 {
					name="M-ATV (GMG) (WL)";
					side=2;
					faction="BS_B_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_EkqM7Mrlzyw";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_AR_WL";
					};
				};
				class BS_B_ISRL_SHAYETET_2023_LightVehicle_WT_2 {
					name="M-ATV (GMG) (WT)";
					side=2;
					faction="BS_B_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_EkqM7Mrlzyw";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_AR_WT";
					};
				};
				class BS_B_ISRL_SHAYETET_2023_LightVehicle_DT_2 {
					name="M-ATV (GMG) (DT)";
					side=2;
					faction="BS_B_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_EkqM7Mrlzyw";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_AR_DT";
					};
				};
				class BS_B_ISRL_SHAYETET_2023_Tank_WL_0 {
					name="Merkava Mk IV LIC (WL) ";
					side=2;
					faction="BS_B_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_d86bpXN3qso";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_AR_WL";
					};
				};
				class BS_B_ISRL_SHAYETET_2023_Tank_WT_0 {
					name="Merkava Mk IV LIC (WT) ";
					side=2;
					faction="BS_B_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_d86bpXN3qso";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_AR_WT";
					};
				};
				class BS_B_ISRL_SHAYETET_2023_Tank_DT_0 {
					name="Merkava Mk IV LIC (DT) ";
					side=2;
					faction="BS_B_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_d86bpXN3qso";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_AR_DT";
					};
				};
				class BS_B_ISRL_SHAYETET_2023_Tank_WL_1 {
					name="Namer (WL) ";
					side=2;
					faction="BS_B_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_vkafj_ta4Z8";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_AR_WL";
					};
				};
				class BS_B_ISRL_SHAYETET_2023_Tank_WT_1 {
					name="Namer (WT) ";
					side=2;
					faction="BS_B_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_vkafj_ta4Z8";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_WT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_GL_WT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_AR_WT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_AR_WT";
					};
				};
				class BS_B_ISRL_SHAYETET_2023_Tank_DT_1 {
					name="Namer (DT) ";
					side=2;
					faction="BS_B_ISRL_SHAYETET_2023";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_vkafj_ta4Z8";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_Rifleman_DT";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_GL_DT";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_AR_DT";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_ISRL_SHAYETET_2023_AR_DT";
					};
				};
			};
		};
	};
};

class CfgPatches { 
	class bm_specops_faction_ISRL_SHAYETET_2023{
		author = "Broken Skull Mods";
		weapons[]={};
		requiredVersion=0.1;
		skipWhenMissingDependencies = 1;
		requiredAddons[]={
			"A3_Weapons_F_Rifles_TRG20",
			"ace_realisticnames",
			"ace_scopes",
			"ace_ballistics",
			"Tier1_Weapons_cfg",
			"rhsusf_c_weapons",
			"hlcweapons_core",
			"ace_compat_rhs_usf3",
			"rhsgref_c_troops",
			"A3_Weapons_F_Items",
			"ace_medical_engine",
			"ace_medical_treatment",
			"ace_hearing",
			"kat_airway",
			"kat_breathing",
			"ace_rangecard",
			"ace_microdagr",
			"ace_attach",
			"ace_captives",
			"USP_Gear_Vest",
			"ace_logistics_wirecutter",
			"A3_Weapons_F",
			"ace_chemlights",
			"ace_vector",
			"USP_Gear_NVG",
			"A3_Weapons_F_Machineguns_Zafir",
			"A3_Weapons_F_Mark_Machineguns_Zafir",
			"cba_jam",
			"ace_overheating",
			"ace_smallarms",
			"ace_ai",
			"ace_realisticweights",
			"hlcweapons_m14",
			"ace_compat_rhs_usf3_arsenal",
			"hlcweapons_ar15",
			"kat_circulation",
			"kat_pharma",
			"A3_Weapons_F_Launchers_NLAW",
			"DynaSound_DS_w_PCML",
			"ace_disposable",
			"ace_nlaw",
			"ace_overpressure",
			"Weapons_F_lxWS_Rifles",
			"ace_compat_ws_realisticnames",
			"A3_Weapons_F_Tank_Launchers_MRAWS",
			"A3_Weapons_F_Tank",
			"A3_Characters_F_Exp",
			"rhsusf_c_troops",
			"A3_Characters_F",
			"A3_Characters_F_Enoch_Headgear",
			"tfar_external_intercom",
			"dzn_IDF_Mitznefet",
			"A3_Weapons_F_Acc",
			"rhsusf_sounds",
			"bm_specops_faction_US_ARMA_BASE"
};
		units[]={
			"BS_O_ISRL_SHAYETET_2023_Rifleman_WL",
			"BS_B_ISRL_SHAYETET_2023_Rifleman_WL",
			"BS_I_ISRL_SHAYETET_2023_Rifleman_WL",
			"BS_O_ISRL_SHAYETET_2023_AR_WL",
			"BS_B_ISRL_SHAYETET_2023_AR_WL",
			"BS_I_ISRL_SHAYETET_2023_AR_WL",
			"BS_O_ISRL_SHAYETET_2023_GL_WL",
			"BS_B_ISRL_SHAYETET_2023_GL_WL",
			"BS_I_ISRL_SHAYETET_2023_GL_WL",
			"BS_O_ISRL_SHAYETET_2023_SNP_WL",
			"BS_B_ISRL_SHAYETET_2023_SNP_WL",
			"BS_I_ISRL_SHAYETET_2023_SNP_WL",
			"BS_O_ISRL_SHAYETET_2023_Medic_WL",
			"BS_B_ISRL_SHAYETET_2023_Medic_WL",
			"BS_I_ISRL_SHAYETET_2023_Medic_WL",
			"BS_O_ISRL_SHAYETET_2023_DIVER_WL",
			"BS_B_ISRL_SHAYETET_2023_DIVER_WL",
			"BS_I_ISRL_SHAYETET_2023_DIVER_WL",
			"BS_O_ISRL_SHAYETET_2023_RTO_WL",
			"BS_B_ISRL_SHAYETET_2023_RTO_WL",
			"BS_I_ISRL_SHAYETET_2023_RTO_WL",
			"BS_O_ISRL_SHAYETET_2023_Officer_WL",
			"BS_B_ISRL_SHAYETET_2023_Officer_WL",
			"BS_I_ISRL_SHAYETET_2023_Officer_WL",
			"BS_O_ISRL_SHAYETET_2023_Rifleman_DT",
			"BS_B_ISRL_SHAYETET_2023_Rifleman_DT",
			"BS_I_ISRL_SHAYETET_2023_Rifleman_DT",
			"BS_O_ISRL_SHAYETET_2023_AR_DT",
			"BS_B_ISRL_SHAYETET_2023_AR_DT",
			"BS_I_ISRL_SHAYETET_2023_AR_DT",
			"BS_O_ISRL_SHAYETET_2023_GL_DT",
			"BS_B_ISRL_SHAYETET_2023_GL_DT",
			"BS_I_ISRL_SHAYETET_2023_GL_DT",
			"BS_O_ISRL_SHAYETET_2023_SNP_DT",
			"BS_B_ISRL_SHAYETET_2023_SNP_DT",
			"BS_I_ISRL_SHAYETET_2023_SNP_DT",
			"BS_O_ISRL_SHAYETET_2023_Medic_DT",
			"BS_B_ISRL_SHAYETET_2023_Medic_DT",
			"BS_I_ISRL_SHAYETET_2023_Medic_DT",
			"BS_O_ISRL_SHAYETET_2023_DIVER_DT",
			"BS_B_ISRL_SHAYETET_2023_DIVER_DT",
			"BS_I_ISRL_SHAYETET_2023_DIVER_DT",
			"BS_O_ISRL_SHAYETET_2023_RTO_DT",
			"BS_B_ISRL_SHAYETET_2023_RTO_DT",
			"BS_I_ISRL_SHAYETET_2023_RTO_DT",
			"BS_O_ISRL_SHAYETET_2023_Officer_DT",
			"BS_B_ISRL_SHAYETET_2023_Officer_DT",
			"BS_I_ISRL_SHAYETET_2023_Officer_DT",
			"BS_O_ISRL_SHAYETET_2023_Rifleman_WT",
			"BS_B_ISRL_SHAYETET_2023_Rifleman_WT",
			"BS_I_ISRL_SHAYETET_2023_Rifleman_WT",
			"BS_O_ISRL_SHAYETET_2023_AR_WT",
			"BS_B_ISRL_SHAYETET_2023_AR_WT",
			"BS_I_ISRL_SHAYETET_2023_AR_WT",
			"BS_O_ISRL_SHAYETET_2023_GL_WT",
			"BS_B_ISRL_SHAYETET_2023_GL_WT",
			"BS_I_ISRL_SHAYETET_2023_GL_WT",
			"BS_O_ISRL_SHAYETET_2023_SNP_WT",
			"BS_B_ISRL_SHAYETET_2023_SNP_WT",
			"BS_I_ISRL_SHAYETET_2023_SNP_WT",
			"BS_O_ISRL_SHAYETET_2023_Medic_WT",
			"BS_B_ISRL_SHAYETET_2023_Medic_WT",
			"BS_I_ISRL_SHAYETET_2023_Medic_WT",
			"BS_O_ISRL_SHAYETET_2023_DIVER_WT",
			"BS_B_ISRL_SHAYETET_2023_DIVER_WT",
			"BS_I_ISRL_SHAYETET_2023_DIVER_WT",
			"BS_O_ISRL_SHAYETET_2023_RTO_WT",
			"BS_B_ISRL_SHAYETET_2023_RTO_WT",
			"BS_I_ISRL_SHAYETET_2023_RTO_WT",
			"BS_O_ISRL_SHAYETET_2023_Officer_WT",
			"BS_B_ISRL_SHAYETET_2023_Officer_WT",
			"BS_I_ISRL_SHAYETET_2023_Officer_WT",
			"BS_B_ISRL_SHAYETET_2023_WLhhXc6IHdU",
			"BS_O_ISRL_SHAYETET_2023_WLhhXc6IHdU",
			"BS_I_ISRL_SHAYETET_2023_WLhhXc6IHdU",
			"BS_B_ISRL_SHAYETET_2023_k3_SDha4C58",
			"BS_O_ISRL_SHAYETET_2023_k3_SDha4C58",
			"BS_I_ISRL_SHAYETET_2023_k3_SDha4C58",
			"BS_B_ISRL_SHAYETET_2023_v_fJaOF6kRQ",
			"BS_O_ISRL_SHAYETET_2023_v_fJaOF6kRQ",
			"BS_I_ISRL_SHAYETET_2023_v_fJaOF6kRQ",
			"BS_B_ISRL_SHAYETET_2023_EkqM7Mrlzyw",
			"BS_O_ISRL_SHAYETET_2023_EkqM7Mrlzyw",
			"BS_I_ISRL_SHAYETET_2023_EkqM7Mrlzyw",
			"BS_B_ISRL_SHAYETET_2023_qDXK6KDnqM4",
			"BS_O_ISRL_SHAYETET_2023_qDXK6KDnqM4",
			"BS_I_ISRL_SHAYETET_2023_qDXK6KDnqM4",
			"BS_B_ISRL_SHAYETET_2023_JDDxop_SxsI",
			"BS_O_ISRL_SHAYETET_2023_JDDxop_SxsI",
			"BS_I_ISRL_SHAYETET_2023_JDDxop_SxsI",
			"BS_B_ISRL_SHAYETET_2023_U9h1_Aahs5k",
			"BS_O_ISRL_SHAYETET_2023_U9h1_Aahs5k",
			"BS_I_ISRL_SHAYETET_2023_U9h1_Aahs5k",
			"BS_B_ISRL_SHAYETET_2023_JbRnWXzX3Nw",
			"BS_O_ISRL_SHAYETET_2023_JbRnWXzX3Nw",
			"BS_I_ISRL_SHAYETET_2023_JbRnWXzX3Nw",
			"BS_B_ISRL_SHAYETET_2023_HE2fdENdKBw",
			"BS_O_ISRL_SHAYETET_2023_HE2fdENdKBw",
			"BS_I_ISRL_SHAYETET_2023_HE2fdENdKBw",
			"BS_B_ISRL_SHAYETET_2023_WiGfT1yTw0I",
			"BS_O_ISRL_SHAYETET_2023_WiGfT1yTw0I",
			"BS_I_ISRL_SHAYETET_2023_WiGfT1yTw0I",
			"BS_B_ISRL_SHAYETET_2023_rmh18SomIIU",
			"BS_O_ISRL_SHAYETET_2023_rmh18SomIIU",
			"BS_I_ISRL_SHAYETET_2023_rmh18SomIIU",
			"BS_B_ISRL_SHAYETET_2023_mMGV8pEs_8U",
			"BS_O_ISRL_SHAYETET_2023_mMGV8pEs_8U",
			"BS_I_ISRL_SHAYETET_2023_mMGV8pEs_8U",
			"BS_B_ISRL_SHAYETET_2023_IQ_mV01eqXg",
			"BS_O_ISRL_SHAYETET_2023_IQ_mV01eqXg",
			"BS_I_ISRL_SHAYETET_2023_IQ_mV01eqXg",
			"BS_B_ISRL_SHAYETET_2023_d86bpXN3qso",
			"BS_O_ISRL_SHAYETET_2023_d86bpXN3qso",
			"BS_I_ISRL_SHAYETET_2023_d86bpXN3qso",
			"BS_B_ISRL_SHAYETET_2023_t8G446lxSH4",
			"BS_O_ISRL_SHAYETET_2023_t8G446lxSH4",
			"BS_I_ISRL_SHAYETET_2023_t8G446lxSH4",
			"BS_B_ISRL_SHAYETET_2023_gdLSc7FB4Sg",
			"BS_O_ISRL_SHAYETET_2023_gdLSc7FB4Sg",
			"BS_I_ISRL_SHAYETET_2023_gdLSc7FB4Sg",
			"BS_B_ISRL_SHAYETET_2023_8e2pl9sdLns",
			"BS_O_ISRL_SHAYETET_2023_8e2pl9sdLns",
			"BS_I_ISRL_SHAYETET_2023_8e2pl9sdLns",
			"BS_B_ISRL_SHAYETET_2023_ALuIScXZ8tQ",
			"BS_O_ISRL_SHAYETET_2023_ALuIScXZ8tQ",
			"BS_I_ISRL_SHAYETET_2023_ALuIScXZ8tQ",
			"BS_B_ISRL_SHAYETET_2023_vkafj_ta4Z8",
			"BS_O_ISRL_SHAYETET_2023_vkafj_ta4Z8",
			"BS_I_ISRL_SHAYETET_2023_vkafj_ta4Z8",
			"BS_B_ISRL_SHAYETET_2023_LnDPXO6Y_qw",
			"BS_O_ISRL_SHAYETET_2023_LnDPXO6Y_qw",
			"BS_I_ISRL_SHAYETET_2023_LnDPXO6Y_qw",
			"BS_B_ISRL_SHAYETET_2023_b9Qx6vL5Omg",
			"BS_O_ISRL_SHAYETET_2023_b9Qx6vL5Omg",
			"BS_I_ISRL_SHAYETET_2023_b9Qx6vL5Omg",
			"BS_B_ISRL_SHAYETET_2023_PDi9Aikgwhc",
			"BS_O_ISRL_SHAYETET_2023_PDi9Aikgwhc",
			"BS_I_ISRL_SHAYETET_2023_PDi9Aikgwhc",
			"BS_B_ISRL_SHAYETET_2023_onws03kHVIo",
			"BS_O_ISRL_SHAYETET_2023_onws03kHVIo",
			"BS_I_ISRL_SHAYETET_2023_onws03kHVIo"
};
	};
};
class CfgFactionClasses {
	// As Friendly (BluFOR)
	class BS_B_ISRL_SHAYETET_2023_BASE { 
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
		brokenSkullArsenal[]={"arifle_TRG20_F","Tier1_MP7_NGAL_M300C_Black_FL","rhsusf_acc_su230a_mrds","hlc_30rnd_556x45_SPR","rhsusf_weap_glock17g4","Tier1_TiRant9S","hlc_acc_DBALPL","Tier1_20Rnd_9x19_FMJ","rhsgref_uniform_olive","FirstAidKit","ACE_EarPlugs","ACE_morphine","kat_guedel","kat_chestSeal","ACE_tourniquet","ACE_packingBandage","ACE_quikclot","ACE_RangeCard","ACE_microDAGR","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_CableTie","USP_CRYE_CPC_FAST_BELT_RGR","ACE_wirecutter","SmokeShell","SmokeShellGreen","Chemlight_green","HandGrenade","rhsgref_helmet_pasgt_olive","ACE_Vector","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","USP_GPNVG18_WP_BLK","LMG_Zafir_F","Tier1_MP7_NGAL_M300C_Black","150Rnd_762x54_Box","arifle_TRG21_GL_F","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","hlc_rifle_m14sopmod","rhsusf_acc_anpeq15side_bk","rhsusf_acc_M8541_mrds","hlc_20Rnd_762x51_mk316_M14","Tier1_Harris_Bipod_Black","hlc_rifle_M4","rhsusf_acc_SFMB556","Tier1_Eotech551_L3_Black_Up","kat_accuvac","USP_CRYE_CPC_MEDIC_BELT_RGR","ACE_surgicalKit","kat_AED","kat_stethoscope","ACE_adenosine","ACE_elasticBandage","kat_larynx","kat_naloxone","kat_IO_FAST","kat_ncdKit","kat_aatKit","ACE_plasmaIV","ACE_plasmaIV_500","kat_Pulseoximeter","ACE_splint","ACE_suture","USP_CRYE_CPC_COMMS_BELT_RGR","launch_NLAW_F","arifle_Galat_lxWS","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_su230_mrds","hlc_30Rnd_762x39_b_ak","launch_MRAWS_green_F","MRAWS_HEAT_F","rhs_mag_maaws_HEAT","rhs_mag_maaws_HEDP","rhs_mag_maaws_HE","rhsusf_acc_nt4_black","Tier1_MicroT2_G33_Black_Up","U_O_T_FullGhillie_tna_F","rhsusf_opscore_rg_cover_pelt","rhs_weap_fim92","rhs_fim92_mag","H_PilotHelmetFighter_O","H_PilotHelmetHeli_I_E","dzn_H_IDF_Mitznefet_Desert","optic_tws","ACE_20Rnd_762x51_Mag_SD","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_Mag_Tracer","ACE_20Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_M118LR_Mag","ACE_20Rnd_762x51_Mag_Tracer_Dim","optic_tws_mg","150Rnd_762x54_Box_Tracer","rhsusf_weap_m1911a1","rhsusf_mag_7x45acp_MHP","USP_CRYE_CPC_RGR"};

		garage[]={{"BS_B_ISRL_SHAYETET_2023_WLhhXc6IHdU",0,100,-1},{"BS_B_ISRL_SHAYETET_2023_k3_SDha4C58",0,300,2},{"BS_B_ISRL_SHAYETET_2023_v_fJaOF6kRQ",1,600,2},{"BS_B_ISRL_SHAYETET_2023_EkqM7Mrlzyw",1,600,2},{"BS_B_ISRL_SHAYETET_2023_qDXK6KDnqM4",0,500,-1},{"BS_B_ISRL_SHAYETET_2023_JDDxop_SxsI",1,50,3},{"BS_B_ISRL_SHAYETET_2023_U9h1_Aahs5k",1,50,3},{"BS_B_ISRL_SHAYETET_2023_JbRnWXzX3Nw",1,50,3},{"BS_B_ISRL_SHAYETET_2023_HE2fdENdKBw",1,50,-1},{"BS_B_ISRL_SHAYETET_2023_WiGfT1yTw0I",1,50,-1},{"BS_B_ISRL_SHAYETET_2023_rmh18SomIIU",0,50,-1},{"BS_B_ISRL_SHAYETET_2023_mMGV8pEs_8U",1,50,-1},{"BS_B_ISRL_SHAYETET_2023_IQ_mV01eqXg",1,50,-1},{"BS_B_ISRL_SHAYETET_2023_d86bpXN3qso",2,2500,1},{"BS_B_ISRL_SHAYETET_2023_t8G446lxSH4",0,150,-1},{"BS_B_ISRL_SHAYETET_2023_gdLSc7FB4Sg",0,200,-1},{"BS_B_ISRL_SHAYETET_2023_8e2pl9sdLns",0,150,-1},{"BS_B_ISRL_SHAYETET_2023_ALuIScXZ8tQ",0,150,-1},{"BS_B_ISRL_SHAYETET_2023_vkafj_ta4Z8",2,1000,1},{"BS_B_ISRL_SHAYETET_2023_LnDPXO6Y_qw",2,80000,-1},{"BS_B_ISRL_SHAYETET_2023_b9Qx6vL5Omg",2,20,-1},{"BS_B_ISRL_SHAYETET_2023_PDi9Aikgwhc",2,20,-1},{"BS_B_ISRL_SHAYETET_2023_onws03kHVIo",2,10000,-1}};
		SamSystem[]={};
		SearchLight[]={};
		StaticLowMG[]={};
		StaticHighMG[]={};
		StaticMotar[]={};
		StaticAntiAir[]={};
		VehicleTechnicals[]={"BS_B_ISRL_SHAYETET_2023_k3_SDha4C58","BS_B_ISRL_SHAYETET_2023_v_fJaOF6kRQ","BS_B_ISRL_SHAYETET_2023_EkqM7Mrlzyw"};
		VehicleAntiAircraft[]={};
		VehicleTanks[]={"BS_B_ISRL_SHAYETET_2023_d86bpXN3qso","BS_B_ISRL_SHAYETET_2023_vkafj_ta4Z8"};
		VehicleTransport[]={"BS_B_ISRL_SHAYETET_2023_JDDxop_SxsI","BS_B_ISRL_SHAYETET_2023_U9h1_Aahs5k","BS_B_ISRL_SHAYETET_2023_JbRnWXzX3Nw"};
	};
	// As Friendly (BluFOR)
	class BS_B_ISRL_SHAYETET_2023 : BS_B_ISRL_SHAYETET_2023_BASE { 
		useForSpecOps = 1;   
		displayName = "ISRL - SHAYETET 13 (2023)";
		side = 1;       
		flag = "\A3\Data_F\Flags\flag_US_CO.paa";
		icon = "\A3\Data_F\Flags\flag_US_CO.paa";
		priority = 0; 
	};
	// As Opposite Forces (OpFOR)
	class BS_O_ISRL_SHAYETET_2023 : BS_B_ISRL_SHAYETET_2023_BASE { 
		useForSpecOps = 1;
		displayName = "ISRL - SHAYETET 13 (2023)";
		side = 0;       
		flag = "\A3\Data_F\Flags\flag_US_CO.paa";
		icon = "\A3\Data_F\Flags\flag_US_CO.paa";
		priority = 0; 
	};
	// As Independent (Independent)
	class BS_I_ISRL_SHAYETET_2023 : BS_B_ISRL_SHAYETET_2023_BASE { 
		useForSpecOps = 1;
		displayName = "ISRL - SHAYETET 13 (2023)";
		side = 2;       
		flag = "\A3\Data_F\Flags\flag_US_CO.paa";
		icon = "\A3\Data_F\Flags\flag_US_CO.paa";
		priority = 0; 
	};
};
// As Friendly (BluFOR)
class SpecOps_Module_BLUFOR_Factions { 
	class BS_B_ISRL_SHAYETET_2023 { name = "ISRL - SHAYETET 13 (2023)"; value = "BS_B_ISRL_SHAYETET_2023"; };  
};
// As Friendly (BluFOR)
class SpecOps_Module_OPFOR_Factions { 
	class BS_O_ISRL_SHAYETET_2023 { name = "ISRL - SHAYETET 13 (2023)"; value = "BS_O_ISRL_SHAYETET_2023"; };  
};
// As Friendly (BluFOR)
class SpecOps_Module_GRE_Factions { 
	class BS_I_ISRL_SHAYETET_2023 { name = "ISRL - SHAYETET 13 (2023)"; value = "BS_I_ISRL_SHAYETET_2023"; };  
};