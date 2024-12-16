
// PREFIX = bsm_faction_base
#include "\bsm_faction_base\subcat.hpp"


class CfgVehicles {
	class B_Survivor_F;
	class I_G_Survivor_F;
	class O_G_Survivor_F; 
	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_Rifleman_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Rifleman (Woodland)"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"TanoanHead_A3_07", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Black","H_HelmetB"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Black","H_HelmetB"}; 
		weapons[] = {"arifle_MX_ACO_pointer_F","launch_NLAW_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MX_ACO_pointer_F","launch_NLAW_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_ocamo";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_ACO_pointer_F","","acc_pointer_IR","optic_Aco",{"30Rnd_65x39_caseless_mag",30},{},""},{"launch_NLAW_F","","","",{},{},""},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrier1_rgr",{{"30Rnd_65x39_caseless_mag",7,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_AssaultPack_ocamo",{}},"H_HelmetB","G_Tactical_Black",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_Rifleman_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Rifleman (Woodland)"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"TanoanHead_A3_07", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Black","H_HelmetB"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Black","H_HelmetB"}; 
		weapons[] = {"arifle_MX_ACO_pointer_F","launch_NLAW_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MX_ACO_pointer_F","launch_NLAW_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_ocamo";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_ACO_pointer_F","","acc_pointer_IR","optic_Aco",{"30Rnd_65x39_caseless_mag",30},{},""},{"launch_NLAW_F","","","",{},{},""},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrier1_rgr",{{"30Rnd_65x39_caseless_mag",7,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_AssaultPack_ocamo",{}},"H_HelmetB","G_Tactical_Black",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_Rifleman_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Rifleman (Woodland)"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"TanoanHead_A3_07", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Black","H_HelmetB"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Black","H_HelmetB"}; 
		weapons[] = {"arifle_MX_ACO_pointer_F","launch_NLAW_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MX_ACO_pointer_F","launch_NLAW_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_ocamo";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_ACO_pointer_F","","acc_pointer_IR","optic_Aco",{"30Rnd_65x39_caseless_mag",30},{},""},{"launch_NLAW_F","","","",{},{},""},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrier1_rgr",{{"30Rnd_65x39_caseless_mag",7,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_AssaultPack_ocamo",{}},"H_HelmetB","G_Tactical_Black",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_AR_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Machine Gunner (Woodland)"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"AsianHead_A3_02", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam_tshirt"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetB_grass"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetB_grass"}; 
		weapons[] = {"LMG_Zafir_F","hgun_P07_F"}; 
		respawnWeapons[] = {"LMG_Zafir_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Carryall_oli";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"LMG_Zafir_F","","acc_pointer_IR","optic_Hamr",{"150Rnd_762x54_Box",150},{},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam_tshirt",{{"FirstAidKit",1},{"SmokeShell",1,1},{"HandGrenade",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",1,1}}},{"V_PlateCarrier2_rgr",{{"16Rnd_9x21_Mag",2,17},{"Chemlight_green",1,1}}},{"B_Carryall_oli",{}},"H_HelmetB_grass","G_Combat",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_AR_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Machine Gunner (Woodland)"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"AsianHead_A3_02", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam_tshirt"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetB_grass"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetB_grass"}; 
		weapons[] = {"LMG_Zafir_F","hgun_P07_F"}; 
		respawnWeapons[] = {"LMG_Zafir_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Carryall_oli";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"LMG_Zafir_F","","acc_pointer_IR","optic_Hamr",{"150Rnd_762x54_Box",150},{},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam_tshirt",{{"FirstAidKit",1},{"SmokeShell",1,1},{"HandGrenade",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",1,1}}},{"V_PlateCarrier2_rgr",{{"16Rnd_9x21_Mag",2,17},{"Chemlight_green",1,1}}},{"B_Carryall_oli",{}},"H_HelmetB_grass","G_Combat",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_AR_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Machine Gunner (Woodland)"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"AsianHead_A3_02", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam_tshirt"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetB_grass"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetB_grass"}; 
		weapons[] = {"LMG_Zafir_F","hgun_P07_F"}; 
		respawnWeapons[] = {"LMG_Zafir_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Carryall_oli";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"LMG_Zafir_F","","acc_pointer_IR","optic_Hamr",{"150Rnd_762x54_Box",150},{},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam_tshirt",{{"FirstAidKit",1},{"SmokeShell",1,1},{"HandGrenade",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",1,1}}},{"V_PlateCarrier2_rgr",{{"16Rnd_9x21_Mag",2,17},{"Chemlight_green",1,1}}},{"B_Carryall_oli",{}},"H_HelmetB_grass","G_Combat",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_GL_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Grenadier (Woodland)"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"PersianHead_A3_04_a", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetSpecB_blk"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetSpecB_blk"}; 
		weapons[] = {"arifle_MX_GL_ACO_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MX_GL_ACO_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Carryall_cbr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_GL_ACO_F","","","optic_Aco",{"30Rnd_65x39_caseless_mag",30},{"1Rnd_HE_Grenade_shell",1},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrierGL_rgr",{{"30Rnd_65x39_caseless_mag",3,30},{"16Rnd_9x21_Mag",2,17},{"1Rnd_HE_Grenade_shell",5,1},{"HandGrenade",2,1},{"MiniGrenade",2,1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"1Rnd_Smoke_Grenade_shell",2,1},{"1Rnd_SmokeBlue_Grenade_shell",1,1},{"1Rnd_SmokeGreen_Grenade_shell",1,1},{"1Rnd_SmokeOrange_Grenade_shell",1,1}}},{"B_Carryall_cbr",{}},"H_HelmetSpecB_blk","G_Combat",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_GL_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Grenadier (Woodland)"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"PersianHead_A3_04_a", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetSpecB_blk"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetSpecB_blk"}; 
		weapons[] = {"arifle_MX_GL_ACO_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MX_GL_ACO_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Carryall_cbr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_GL_ACO_F","","","optic_Aco",{"30Rnd_65x39_caseless_mag",30},{"1Rnd_HE_Grenade_shell",1},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrierGL_rgr",{{"30Rnd_65x39_caseless_mag",3,30},{"16Rnd_9x21_Mag",2,17},{"1Rnd_HE_Grenade_shell",5,1},{"HandGrenade",2,1},{"MiniGrenade",2,1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"1Rnd_Smoke_Grenade_shell",2,1},{"1Rnd_SmokeBlue_Grenade_shell",1,1},{"1Rnd_SmokeGreen_Grenade_shell",1,1},{"1Rnd_SmokeOrange_Grenade_shell",1,1}}},{"B_Carryall_cbr",{}},"H_HelmetSpecB_blk","G_Combat",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_GL_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Grenadier (Woodland)"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"PersianHead_A3_04_a", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetSpecB_blk"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetSpecB_blk"}; 
		weapons[] = {"arifle_MX_GL_ACO_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MX_GL_ACO_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Carryall_cbr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_GL_ACO_F","","","optic_Aco",{"30Rnd_65x39_caseless_mag",30},{"1Rnd_HE_Grenade_shell",1},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrierGL_rgr",{{"30Rnd_65x39_caseless_mag",3,30},{"16Rnd_9x21_Mag",2,17},{"1Rnd_HE_Grenade_shell",5,1},{"HandGrenade",2,1},{"MiniGrenade",2,1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"1Rnd_Smoke_Grenade_shell",2,1},{"1Rnd_SmokeBlue_Grenade_shell",1,1},{"1Rnd_SmokeGreen_Grenade_shell",1,1},{"1Rnd_SmokeOrange_Grenade_shell",1,1}}},{"B_Carryall_cbr",{}},"H_HelmetSpecB_blk","G_Combat",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_Officer_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Officer (Woodland)"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_18", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Aviator","H_MilCap_mcamo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Aviator","H_MilCap_mcamo"}; 
		weapons[] = {"arifle_MXC_ACO_F","hgun_Pistol_heavy_01_MRD_F"}; 
		respawnWeapons[] = {"arifle_MXC_ACO_F","hgun_Pistol_heavy_01_MRD_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MXC_ACO_F","","","optic_Aco",{"30Rnd_65x39_caseless_mag",30},{},""},{},{"hgun_Pistol_heavy_01_MRD_F","","","optic_MRD",{"11Rnd_45ACP_Mag",15},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30},{"SmokeShell",1,1},{"Chemlight_green",1,1}}},{"V_BandollierB_rgr",{{"30Rnd_65x39_caseless_mag",1,30},{"11Rnd_45ACP_Mag",2,15},{"SmokeShellGreen",1,1},{"Chemlight_green",1,1}}},{},"H_MilCap_mcamo","G_Aviator",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_Officer_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Officer (Woodland)"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_18", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Aviator","H_MilCap_mcamo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Aviator","H_MilCap_mcamo"}; 
		weapons[] = {"arifle_MXC_ACO_F","hgun_Pistol_heavy_01_MRD_F"}; 
		respawnWeapons[] = {"arifle_MXC_ACO_F","hgun_Pistol_heavy_01_MRD_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MXC_ACO_F","","","optic_Aco",{"30Rnd_65x39_caseless_mag",30},{},""},{},{"hgun_Pistol_heavy_01_MRD_F","","","optic_MRD",{"11Rnd_45ACP_Mag",15},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30},{"SmokeShell",1,1},{"Chemlight_green",1,1}}},{"V_BandollierB_rgr",{{"30Rnd_65x39_caseless_mag",1,30},{"11Rnd_45ACP_Mag",2,15},{"SmokeShellGreen",1,1},{"Chemlight_green",1,1}}},{},"H_MilCap_mcamo","G_Aviator",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_Officer_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Officer (Woodland)"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_18", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Aviator","H_MilCap_mcamo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Aviator","H_MilCap_mcamo"}; 
		weapons[] = {"arifle_MXC_ACO_F","hgun_Pistol_heavy_01_MRD_F"}; 
		respawnWeapons[] = {"arifle_MXC_ACO_F","hgun_Pistol_heavy_01_MRD_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MXC_ACO_F","","","optic_Aco",{"30Rnd_65x39_caseless_mag",30},{},""},{},{"hgun_Pistol_heavy_01_MRD_F","","","optic_MRD",{"11Rnd_45ACP_Mag",15},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30},{"SmokeShell",1,1},{"Chemlight_green",1,1}}},{"V_BandollierB_rgr",{{"30Rnd_65x39_caseless_mag",1,30},{"11Rnd_45ACP_Mag",2,15},{"SmokeShellGreen",1,1},{"Chemlight_green",1,1}}},{},"H_MilCap_mcamo","G_Aviator",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_Medic_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Doctor (Woodland)"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_14", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam_tshirt"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Black","H_HelmetB_light_desert"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Black","H_HelmetB_light_desert"}; 
		weapons[] = {"arifle_MX_pointer_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MX_pointer_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_rgr_Medic";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_pointer_F","","acc_pointer_IR","",{"30Rnd_65x39_caseless_mag",30},{},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam_tshirt",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrierSpec_rgr",{{"30Rnd_65x39_caseless_mag",3,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"SmokeShellOrange",1,1},{"Chemlight_green",2,1}}},{"B_AssaultPack_rgr_Medic",{{"Medikit",1},{"FirstAidKit",10}}},"H_HelmetB_light_desert","G_Tactical_Black",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_Medic_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Doctor (Woodland)"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_14", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam_tshirt"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Black","H_HelmetB_light_desert"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Black","H_HelmetB_light_desert"}; 
		weapons[] = {"arifle_MX_pointer_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MX_pointer_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_rgr_Medic";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_pointer_F","","acc_pointer_IR","",{"30Rnd_65x39_caseless_mag",30},{},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam_tshirt",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrierSpec_rgr",{{"30Rnd_65x39_caseless_mag",3,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"SmokeShellOrange",1,1},{"Chemlight_green",2,1}}},{"B_AssaultPack_rgr_Medic",{{"Medikit",1},{"FirstAidKit",10}}},"H_HelmetB_light_desert","G_Tactical_Black",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_Medic_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Doctor (Woodland)"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_14", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam_tshirt"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Black","H_HelmetB_light_desert"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Black","H_HelmetB_light_desert"}; 
		weapons[] = {"arifle_MX_pointer_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MX_pointer_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_rgr_Medic";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_pointer_F","","acc_pointer_IR","",{"30Rnd_65x39_caseless_mag",30},{},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam_tshirt",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrierSpec_rgr",{{"30Rnd_65x39_caseless_mag",3,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"SmokeShellOrange",1,1},{"Chemlight_green",2,1}}},{"B_AssaultPack_rgr_Medic",{{"Medikit",1},{"FirstAidKit",10}}},"H_HelmetB_light_desert","G_Tactical_Black",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_RTO_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Anti-Tank (Woodland)"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"TanoanHead_A3_02", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_HelmetB_light_desert"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_HelmetB_light_desert"}; 
		weapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_short_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_short_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_mcamo_AT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MXC_Holo_pointer_F","","acc_pointer_IR","optic_Holosight",{"30Rnd_65x39_caseless_mag",30},{},""},{"launch_B_Titan_short_F","","","",{"Titan_AT",1},{},""},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrier1_rgr",{{"30Rnd_65x39_caseless_mag",3,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1}}},{"B_AssaultPack_mcamo_AT",{{"Titan_AT",1,1},{"Titan_AP",1,1}}},"H_HelmetB_light_desert","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_RTO_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Anti-Tank (Woodland)"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"TanoanHead_A3_02", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_HelmetB_light_desert"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_HelmetB_light_desert"}; 
		weapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_short_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_short_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_mcamo_AT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MXC_Holo_pointer_F","","acc_pointer_IR","optic_Holosight",{"30Rnd_65x39_caseless_mag",30},{},""},{"launch_B_Titan_short_F","","","",{"Titan_AT",1},{},""},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrier1_rgr",{{"30Rnd_65x39_caseless_mag",3,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1}}},{"B_AssaultPack_mcamo_AT",{{"Titan_AT",1,1},{"Titan_AP",1,1}}},"H_HelmetB_light_desert","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_RTO_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Anti-Tank (Woodland)"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"TanoanHead_A3_02", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_HelmetB_light_desert"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_HelmetB_light_desert"}; 
		weapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_short_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_short_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_mcamo_AT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MXC_Holo_pointer_F","","acc_pointer_IR","optic_Holosight",{"30Rnd_65x39_caseless_mag",30},{},""},{"launch_B_Titan_short_F","","","",{"Titan_AT",1},{},""},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrier1_rgr",{{"30Rnd_65x39_caseless_mag",3,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1}}},{"B_AssaultPack_mcamo_AT",{{"Titan_AT",1,1},{"Titan_AP",1,1}}},"H_HelmetB_light_desert","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_DIVER_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Special (Woodland)"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"AfricanHead_02", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "U_B_PilotCoveralls"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_PilotHelmetFighter_B"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_PilotHelmetFighter_B"}; 
		weapons[] = {"SMG_01_Holo_F"}; 
		respawnWeapons[] = {"SMG_01_Holo_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "ACE_NonSteerableParachute";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"SMG_01_Holo_F","","","optic_Holosight_smg",{"30Rnd_45ACP_Mag_SMG_01",25},{},""},{},{},{"U_B_PilotCoveralls",{{"FirstAidKit",1},{"30Rnd_45ACP_Mag_SMG_01",3,25},{"SmokeShell",1,1},{"SmokeShellBlue",1,1},{"Chemlight_green",1,1}}},{},{"ACE_NonSteerableParachute",{}},"H_PilotHelmetFighter_B","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_DIVER_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Special (Woodland)"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"AfricanHead_02", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "U_B_PilotCoveralls"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_PilotHelmetFighter_B"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_PilotHelmetFighter_B"}; 
		weapons[] = {"SMG_01_Holo_F"}; 
		respawnWeapons[] = {"SMG_01_Holo_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "ACE_NonSteerableParachute";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"SMG_01_Holo_F","","","optic_Holosight_smg",{"30Rnd_45ACP_Mag_SMG_01",25},{},""},{},{},{"U_B_PilotCoveralls",{{"FirstAidKit",1},{"30Rnd_45ACP_Mag_SMG_01",3,25},{"SmokeShell",1,1},{"SmokeShellBlue",1,1},{"Chemlight_green",1,1}}},{},{"ACE_NonSteerableParachute",{}},"H_PilotHelmetFighter_B","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_DIVER_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Special (Woodland)"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"AfricanHead_02", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "U_B_PilotCoveralls"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_PilotHelmetFighter_B"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_PilotHelmetFighter_B"}; 
		weapons[] = {"SMG_01_Holo_F"}; 
		respawnWeapons[] = {"SMG_01_Holo_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "ACE_NonSteerableParachute";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"SMG_01_Holo_F","","","optic_Holosight_smg",{"30Rnd_45ACP_Mag_SMG_01",25},{},""},{},{},{"U_B_PilotCoveralls",{{"FirstAidKit",1},{"30Rnd_45ACP_Mag_SMG_01",3,25},{"SmokeShell",1,1},{"SmokeShellBlue",1,1},{"Chemlight_green",1,1}}},{},{"ACE_NonSteerableParachute",{}},"H_PilotHelmetFighter_B","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_SNP_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Sniper (Woodland)"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_18", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Clear","H_HelmetB_grass"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Clear","H_HelmetB_grass"}; 
		weapons[] = {"arifle_MXM_Hamr_LP_BI_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MXM_Hamr_LP_BI_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Carryall_mcamo";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MXM_Hamr_LP_BI_F","","acc_pointer_IR","optic_Hamr",{"30Rnd_65x39_caseless_mag",30},{},"bipod_01_F_snd"},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrier1_rgr",{{"30Rnd_65x39_caseless_mag",5,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1}}},{"B_Carryall_mcamo",{}},"H_HelmetB_grass","G_Tactical_Clear",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_SNP_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Sniper (Woodland)"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_18", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Clear","H_HelmetB_grass"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Clear","H_HelmetB_grass"}; 
		weapons[] = {"arifle_MXM_Hamr_LP_BI_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MXM_Hamr_LP_BI_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Carryall_mcamo";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MXM_Hamr_LP_BI_F","","acc_pointer_IR","optic_Hamr",{"30Rnd_65x39_caseless_mag",30},{},"bipod_01_F_snd"},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrier1_rgr",{{"30Rnd_65x39_caseless_mag",5,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1}}},{"B_Carryall_mcamo",{}},"H_HelmetB_grass","G_Tactical_Clear",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_SNP_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Sniper (Woodland)"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_18", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Clear","H_HelmetB_grass"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Clear","H_HelmetB_grass"}; 
		weapons[] = {"arifle_MXM_Hamr_LP_BI_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MXM_Hamr_LP_BI_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Carryall_mcamo";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MXM_Hamr_LP_BI_F","","acc_pointer_IR","optic_Hamr",{"30Rnd_65x39_caseless_mag",30},{},"bipod_01_F_snd"},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrier1_rgr",{{"30Rnd_65x39_caseless_mag",5,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1}}},{"B_Carryall_mcamo",{}},"H_HelmetB_grass","G_Tactical_Clear",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_VAR_0_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 1"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"AfricanHead_01", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Aviator","H_HelmetB"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Aviator","H_HelmetB"}; 
		weapons[] = {"srifle_DMR_03_tan_AMS_LP_F","launch_RPG32_F","hgun_P07_F","Binocular"}; 
		respawnWeapons[] = {"srifle_DMR_03_tan_AMS_LP_F","launch_RPG32_F","hgun_P07_F","Binocular"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_khk";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"srifle_DMR_03_tan_AMS_LP_F","","acc_pointer_IR","optic_AMS_snd",{"20Rnd_762x51_Mag",20},{},"bipod_01_F_snd"},{"launch_RPG32_F","","","",{"RPG32_F",1},{},""},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"20Rnd_762x51_Mag",2,20}}},{"V_PlateCarrier1_rgr",{{"20Rnd_762x51_Mag",5,20},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_AssaultPack_khk",{{"RPG32_HE_F",2,1},{"RPG32_F",1,1}}},"H_HelmetB","G_Aviator",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_VAR_0_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 1"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"AfricanHead_01", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Aviator","H_HelmetB"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Aviator","H_HelmetB"}; 
		weapons[] = {"srifle_DMR_03_tan_AMS_LP_F","launch_RPG32_F","hgun_P07_F","Binocular"}; 
		respawnWeapons[] = {"srifle_DMR_03_tan_AMS_LP_F","launch_RPG32_F","hgun_P07_F","Binocular"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_khk";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"srifle_DMR_03_tan_AMS_LP_F","","acc_pointer_IR","optic_AMS_snd",{"20Rnd_762x51_Mag",20},{},"bipod_01_F_snd"},{"launch_RPG32_F","","","",{"RPG32_F",1},{},""},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"20Rnd_762x51_Mag",2,20}}},{"V_PlateCarrier1_rgr",{{"20Rnd_762x51_Mag",5,20},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_AssaultPack_khk",{{"RPG32_HE_F",2,1},{"RPG32_F",1,1}}},"H_HelmetB","G_Aviator",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_VAR_0_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 1"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"AfricanHead_01", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Aviator","H_HelmetB"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Aviator","H_HelmetB"}; 
		weapons[] = {"srifle_DMR_03_tan_AMS_LP_F","launch_RPG32_F","hgun_P07_F","Binocular"}; 
		respawnWeapons[] = {"srifle_DMR_03_tan_AMS_LP_F","launch_RPG32_F","hgun_P07_F","Binocular"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_khk";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"srifle_DMR_03_tan_AMS_LP_F","","acc_pointer_IR","optic_AMS_snd",{"20Rnd_762x51_Mag",20},{},"bipod_01_F_snd"},{"launch_RPG32_F","","","",{"RPG32_F",1},{},""},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"20Rnd_762x51_Mag",2,20}}},{"V_PlateCarrier1_rgr",{{"20Rnd_762x51_Mag",5,20},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_AssaultPack_khk",{{"RPG32_HE_F",2,1},{"RPG32_F",1,1}}},"H_HelmetB","G_Aviator",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_VAR_1_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 2"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_08", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetB_light_sand"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetB_light_sand"}; 
		weapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_mcamo_AA";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MXC_Holo_pointer_F","","acc_pointer_IR","optic_Holosight",{"30Rnd_65x39_caseless_mag",30},{},""},{"launch_B_Titan_F","","","",{"Titan_AA",1},{},""},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrier1_rgr",{{"30Rnd_65x39_caseless_mag",3,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1}}},{"B_AssaultPack_mcamo_AA",{{"Titan_AA",2,1}}},"H_HelmetB_light_sand","G_Combat",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_VAR_1_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 2"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_08", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetB_light_sand"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetB_light_sand"}; 
		weapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_mcamo_AA";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MXC_Holo_pointer_F","","acc_pointer_IR","optic_Holosight",{"30Rnd_65x39_caseless_mag",30},{},""},{"launch_B_Titan_F","","","",{"Titan_AA",1},{},""},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrier1_rgr",{{"30Rnd_65x39_caseless_mag",3,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1}}},{"B_AssaultPack_mcamo_AA",{{"Titan_AA",2,1}}},"H_HelmetB_light_sand","G_Combat",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_VAR_1_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 2"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_08", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetB_light_sand"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetB_light_sand"}; 
		weapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_mcamo_AA";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MXC_Holo_pointer_F","","acc_pointer_IR","optic_Holosight",{"30Rnd_65x39_caseless_mag",30},{},""},{"launch_B_Titan_F","","","",{"Titan_AA",1},{},""},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrier1_rgr",{{"30Rnd_65x39_caseless_mag",3,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1}}},{"B_AssaultPack_mcamo_AA",{{"Titan_AA",2,1}}},"H_HelmetB_light_sand","G_Combat",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_VAR_2_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 3"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_07", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles","G_Tactical_Clear","H_HelmetB"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles","G_Tactical_Clear","H_HelmetB"}; 
		weapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_UAV_01_backpack_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_ACO_pointer_F","","acc_pointer_IR","optic_Aco",{"30Rnd_65x39_caseless_mag",30},{},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30},{"HandGrenade",1,1}}},{"V_PlateCarrierSpec_rgr",{{"30Rnd_65x39_caseless_mag",7,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1}}},{"B_UAV_01_backpack_F",{}},"H_HelmetB","G_Tactical_Clear",{},{"ItemMap","B_UavTerminal","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_VAR_2_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 3"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_07", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles","G_Tactical_Clear","H_HelmetB"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles","G_Tactical_Clear","H_HelmetB"}; 
		weapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_UAV_01_backpack_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_ACO_pointer_F","","acc_pointer_IR","optic_Aco",{"30Rnd_65x39_caseless_mag",30},{},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30},{"HandGrenade",1,1}}},{"V_PlateCarrierSpec_rgr",{{"30Rnd_65x39_caseless_mag",7,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1}}},{"B_UAV_01_backpack_F",{}},"H_HelmetB","G_Tactical_Clear",{},{"ItemMap","B_UavTerminal","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_VAR_2_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 3"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_07", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles","G_Tactical_Clear","H_HelmetB"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles","G_Tactical_Clear","H_HelmetB"}; 
		weapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_UAV_01_backpack_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_ACO_pointer_F","","acc_pointer_IR","optic_Aco",{"30Rnd_65x39_caseless_mag",30},{},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30},{"HandGrenade",1,1}}},{"V_PlateCarrierSpec_rgr",{{"30Rnd_65x39_caseless_mag",7,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1}}},{"B_UAV_01_backpack_F",{}},"H_HelmetB","G_Tactical_Clear",{},{"ItemMap","B_UavTerminal","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_VAR_3_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 4"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_05", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "U_Rangemaster"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Tactical_Clear","H_Cap_headphones"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Tactical_Clear","H_Cap_headphones"}; 
		weapons[] = {}; 
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_Rangemaster",{{"FirstAidKit",1}}},{"V_Rangemaster_belt",{}},{},"H_Cap_headphones","G_Tactical_Clear",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_VAR_3_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 4"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_05", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "U_Rangemaster"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Tactical_Clear","H_Cap_headphones"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Tactical_Clear","H_Cap_headphones"}; 
		weapons[] = {}; 
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_Rangemaster",{{"FirstAidKit",1}}},{"V_Rangemaster_belt",{}},{},"H_Cap_headphones","G_Tactical_Clear",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_VAR_3_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 4"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_05", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "U_Rangemaster"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Tactical_Clear","H_Cap_headphones"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Tactical_Clear","H_Cap_headphones"}; 
		weapons[] = {}; 
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_Rangemaster",{{"FirstAidKit",1}}},{"V_Rangemaster_belt",{}},{},"H_Cap_headphones","G_Tactical_Clear",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_VAR_4_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 5"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_18", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "U_B_HeliPilotCoveralls"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_CrewHelmetHeli_B"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_CrewHelmetHeli_B"}; 
		weapons[] = {"arifle_MXC_Holo_F"}; 
		respawnWeapons[] = {"arifle_MXC_Holo_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MXC_Holo_F","","","optic_Holosight",{"30Rnd_65x39_caseless_mag",30},{},""},{},{},{"U_B_HeliPilotCoveralls",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30},{"SmokeShellGreen",1,1},{"Chemlight_green",1,1}}},{"V_TacVest_blk",{{"30Rnd_65x39_caseless_mag",1,30},{"SmokeShellBlue",1,1},{"SmokeShellOrange",1,1},{"Chemlight_green",1,1}}},{},"H_CrewHelmetHeli_B","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_VAR_4_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 5"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_18", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "U_B_HeliPilotCoveralls"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_CrewHelmetHeli_B"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_CrewHelmetHeli_B"}; 
		weapons[] = {"arifle_MXC_Holo_F"}; 
		respawnWeapons[] = {"arifle_MXC_Holo_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MXC_Holo_F","","","optic_Holosight",{"30Rnd_65x39_caseless_mag",30},{},""},{},{},{"U_B_HeliPilotCoveralls",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30},{"SmokeShellGreen",1,1},{"Chemlight_green",1,1}}},{"V_TacVest_blk",{{"30Rnd_65x39_caseless_mag",1,30},{"SmokeShellBlue",1,1},{"SmokeShellOrange",1,1},{"Chemlight_green",1,1}}},{},"H_CrewHelmetHeli_B","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_VAR_4_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 5"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_18", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "U_B_HeliPilotCoveralls"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_CrewHelmetHeli_B"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_CrewHelmetHeli_B"}; 
		weapons[] = {"arifle_MXC_Holo_F"}; 
		respawnWeapons[] = {"arifle_MXC_Holo_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MXC_Holo_F","","","optic_Holosight",{"30Rnd_65x39_caseless_mag",30},{},""},{},{},{"U_B_HeliPilotCoveralls",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30},{"SmokeShellGreen",1,1},{"Chemlight_green",1,1}}},{"V_TacVest_blk",{{"30Rnd_65x39_caseless_mag",1,30},{"SmokeShellBlue",1,1},{"SmokeShellOrange",1,1},{"Chemlight_green",1,1}}},{},"H_CrewHelmetHeli_B","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_VAR_5_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 6"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"GreekHead_A3_06", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "U_B_HeliPilotCoveralls"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_PilotHelmetHeli_B"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_PilotHelmetHeli_B"}; 
		weapons[] = {"SMG_01_Holo_F"}; 
		respawnWeapons[] = {"SMG_01_Holo_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"SMG_01_Holo_F","","","optic_Holosight_smg",{"30Rnd_45ACP_Mag_SMG_01",25},{},""},{},{},{"U_B_HeliPilotCoveralls",{{"FirstAidKit",1},{"30Rnd_45ACP_Mag_SMG_01",2,25},{"SmokeShellGreen",1,1},{"Chemlight_green",1,1}}},{"V_TacVest_blk",{{"30Rnd_45ACP_Mag_SMG_01",1,25},{"SmokeShellBlue",1,1},{"SmokeShellOrange",1,1},{"Chemlight_green",1,1}}},{},"H_PilotHelmetHeli_B","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_VAR_5_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 6"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"GreekHead_A3_06", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "U_B_HeliPilotCoveralls"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_PilotHelmetHeli_B"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_PilotHelmetHeli_B"}; 
		weapons[] = {"SMG_01_Holo_F"}; 
		respawnWeapons[] = {"SMG_01_Holo_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"SMG_01_Holo_F","","","optic_Holosight_smg",{"30Rnd_45ACP_Mag_SMG_01",25},{},""},{},{},{"U_B_HeliPilotCoveralls",{{"FirstAidKit",1},{"30Rnd_45ACP_Mag_SMG_01",2,25},{"SmokeShellGreen",1,1},{"Chemlight_green",1,1}}},{"V_TacVest_blk",{{"30Rnd_45ACP_Mag_SMG_01",1,25},{"SmokeShellBlue",1,1},{"SmokeShellOrange",1,1},{"Chemlight_green",1,1}}},{},"H_PilotHelmetHeli_B","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_VAR_5_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 6"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"GreekHead_A3_06", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "U_B_HeliPilotCoveralls"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_PilotHelmetHeli_B"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_PilotHelmetHeli_B"}; 
		weapons[] = {"SMG_01_Holo_F"}; 
		respawnWeapons[] = {"SMG_01_Holo_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"SMG_01_Holo_F","","","optic_Holosight_smg",{"30Rnd_45ACP_Mag_SMG_01",25},{},""},{},{},{"U_B_HeliPilotCoveralls",{{"FirstAidKit",1},{"30Rnd_45ACP_Mag_SMG_01",2,25},{"SmokeShellGreen",1,1},{"Chemlight_green",1,1}}},{"V_TacVest_blk",{{"30Rnd_45ACP_Mag_SMG_01",1,25},{"SmokeShellBlue",1,1},{"SmokeShellOrange",1,1},{"Chemlight_green",1,1}}},{},"H_PilotHelmetHeli_B","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_VAR_6_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 7"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_03", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "U_B_PilotCoveralls"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Combat","H_PilotHelmetFighter_B"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Combat","H_PilotHelmetFighter_B"}; 
		weapons[] = {"hgun_P07_F"}; 
		respawnWeapons[] = {"hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_PilotCoveralls",{{"FirstAidKit",1},{"16Rnd_9x21_Mag",3,17},{"SmokeShellOrange",1,1},{"Chemlight_green",2,1}}},{},{},"H_PilotHelmetFighter_B","G_Combat",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_VAR_6_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 7"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_03", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "U_B_PilotCoveralls"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Combat","H_PilotHelmetFighter_B"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Combat","H_PilotHelmetFighter_B"}; 
		weapons[] = {"hgun_P07_F"}; 
		respawnWeapons[] = {"hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_PilotCoveralls",{{"FirstAidKit",1},{"16Rnd_9x21_Mag",3,17},{"SmokeShellOrange",1,1},{"Chemlight_green",2,1}}},{},{},"H_PilotHelmetFighter_B","G_Combat",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_VAR_6_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 7"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_03", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "U_B_PilotCoveralls"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Combat","H_PilotHelmetFighter_B"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Combat","H_PilotHelmetFighter_B"}; 
		weapons[] = {"hgun_P07_F"}; 
		respawnWeapons[] = {"hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_PilotCoveralls",{{"FirstAidKit",1},{"16Rnd_9x21_Mag",3,17},{"SmokeShellOrange",1,1},{"Chemlight_green",2,1}}},{},{},"H_PilotHelmetFighter_B","G_Combat",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_VAR_7_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 8"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"PersianHead_A3_04_sa", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "U_B_HeliPilotCoveralls"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","H_HelmetCrew_B"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","H_HelmetCrew_B"}; 
		weapons[] = {}; 
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_B_HeliPilotCoveralls",{{"FirstAidKit",1}}},{"V_DeckCrew_yellow_F",{}},{},"H_HelmetCrew_B","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_VAR_7_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 8"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"PersianHead_A3_04_sa", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "U_B_HeliPilotCoveralls"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","H_HelmetCrew_B"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","H_HelmetCrew_B"}; 
		weapons[] = {}; 
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_B_HeliPilotCoveralls",{{"FirstAidKit",1}}},{"V_DeckCrew_yellow_F",{}},{},"H_HelmetCrew_B","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_VAR_7_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 8"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"PersianHead_A3_04_sa", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "U_B_HeliPilotCoveralls"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","H_HelmetCrew_B"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","H_HelmetCrew_B"}; 
		weapons[] = {}; 
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_B_HeliPilotCoveralls",{{"FirstAidKit",1}}},{"V_DeckCrew_yellow_F",{}},{},"H_HelmetCrew_B","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_Rifleman_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Rifleman (Desert)"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_12", "Male02ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Black","H_HelmetB"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Black","H_HelmetB"}; 
		weapons[] = {"arifle_MX_ACO_pointer_F","launch_NLAW_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MX_ACO_pointer_F","launch_NLAW_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_ocamo";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_ACO_pointer_F","","acc_pointer_IR","optic_Aco",{"30Rnd_65x39_caseless_mag",30},{},""},{"launch_NLAW_F","","","",{},{},""},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrier1_rgr",{{"30Rnd_65x39_caseless_mag",7,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_AssaultPack_ocamo",{}},"H_HelmetB","G_Tactical_Black",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_Rifleman_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Rifleman (Desert)"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_12", "Male02ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Black","H_HelmetB"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Black","H_HelmetB"}; 
		weapons[] = {"arifle_MX_ACO_pointer_F","launch_NLAW_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MX_ACO_pointer_F","launch_NLAW_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_ocamo";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_ACO_pointer_F","","acc_pointer_IR","optic_Aco",{"30Rnd_65x39_caseless_mag",30},{},""},{"launch_NLAW_F","","","",{},{},""},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrier1_rgr",{{"30Rnd_65x39_caseless_mag",7,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_AssaultPack_ocamo",{}},"H_HelmetB","G_Tactical_Black",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_Rifleman_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Rifleman (Desert)"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_12", "Male02ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Black","H_HelmetB"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Black","H_HelmetB"}; 
		weapons[] = {"arifle_MX_ACO_pointer_F","launch_NLAW_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MX_ACO_pointer_F","launch_NLAW_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_ocamo";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_ACO_pointer_F","","acc_pointer_IR","optic_Aco",{"30Rnd_65x39_caseless_mag",30},{},""},{"launch_NLAW_F","","","",{},{},""},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrier1_rgr",{{"30Rnd_65x39_caseless_mag",7,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_AssaultPack_ocamo",{}},"H_HelmetB","G_Tactical_Black",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_AR_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Machine Gunner (Desert)"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"TanoanHead_A3_08", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam_tshirt"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetB_grass"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetB_grass"}; 
		weapons[] = {"LMG_Zafir_F","hgun_P07_F"}; 
		respawnWeapons[] = {"LMG_Zafir_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Carryall_oli";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"LMG_Zafir_F","","acc_pointer_IR","optic_Hamr",{"150Rnd_762x54_Box",150},{},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam_tshirt",{{"FirstAidKit",1},{"SmokeShell",1,1},{"HandGrenade",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",1,1}}},{"V_PlateCarrier2_rgr",{{"16Rnd_9x21_Mag",2,17},{"Chemlight_green",1,1}}},{"B_Carryall_oli",{}},"H_HelmetB_grass","G_Combat",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_AR_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Machine Gunner (Desert)"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"TanoanHead_A3_08", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam_tshirt"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetB_grass"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetB_grass"}; 
		weapons[] = {"LMG_Zafir_F","hgun_P07_F"}; 
		respawnWeapons[] = {"LMG_Zafir_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Carryall_oli";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"LMG_Zafir_F","","acc_pointer_IR","optic_Hamr",{"150Rnd_762x54_Box",150},{},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam_tshirt",{{"FirstAidKit",1},{"SmokeShell",1,1},{"HandGrenade",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",1,1}}},{"V_PlateCarrier2_rgr",{{"16Rnd_9x21_Mag",2,17},{"Chemlight_green",1,1}}},{"B_Carryall_oli",{}},"H_HelmetB_grass","G_Combat",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_AR_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Machine Gunner (Desert)"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"TanoanHead_A3_08", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam_tshirt"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetB_grass"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetB_grass"}; 
		weapons[] = {"LMG_Zafir_F","hgun_P07_F"}; 
		respawnWeapons[] = {"LMG_Zafir_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Carryall_oli";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"LMG_Zafir_F","","acc_pointer_IR","optic_Hamr",{"150Rnd_762x54_Box",150},{},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam_tshirt",{{"FirstAidKit",1},{"SmokeShell",1,1},{"HandGrenade",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",1,1}}},{"V_PlateCarrier2_rgr",{{"16Rnd_9x21_Mag",2,17},{"Chemlight_green",1,1}}},{"B_Carryall_oli",{}},"H_HelmetB_grass","G_Combat",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_GL_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Grenadier (Desert)"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"TanoanHead_A3_01", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetSpecB_blk"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetSpecB_blk"}; 
		weapons[] = {"arifle_MX_GL_ACO_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MX_GL_ACO_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Carryall_cbr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_GL_ACO_F","","","optic_Aco",{"30Rnd_65x39_caseless_mag",30},{"1Rnd_HE_Grenade_shell",1},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrierGL_rgr",{{"30Rnd_65x39_caseless_mag",3,30},{"16Rnd_9x21_Mag",2,17},{"1Rnd_HE_Grenade_shell",5,1},{"HandGrenade",2,1},{"MiniGrenade",2,1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"1Rnd_Smoke_Grenade_shell",2,1},{"1Rnd_SmokeBlue_Grenade_shell",1,1},{"1Rnd_SmokeGreen_Grenade_shell",1,1},{"1Rnd_SmokeOrange_Grenade_shell",1,1}}},{"B_Carryall_cbr",{}},"H_HelmetSpecB_blk","G_Combat",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_GL_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Grenadier (Desert)"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"TanoanHead_A3_01", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetSpecB_blk"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetSpecB_blk"}; 
		weapons[] = {"arifle_MX_GL_ACO_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MX_GL_ACO_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Carryall_cbr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_GL_ACO_F","","","optic_Aco",{"30Rnd_65x39_caseless_mag",30},{"1Rnd_HE_Grenade_shell",1},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrierGL_rgr",{{"30Rnd_65x39_caseless_mag",3,30},{"16Rnd_9x21_Mag",2,17},{"1Rnd_HE_Grenade_shell",5,1},{"HandGrenade",2,1},{"MiniGrenade",2,1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"1Rnd_Smoke_Grenade_shell",2,1},{"1Rnd_SmokeBlue_Grenade_shell",1,1},{"1Rnd_SmokeGreen_Grenade_shell",1,1},{"1Rnd_SmokeOrange_Grenade_shell",1,1}}},{"B_Carryall_cbr",{}},"H_HelmetSpecB_blk","G_Combat",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_GL_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Grenadier (Desert)"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"TanoanHead_A3_01", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetSpecB_blk"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetSpecB_blk"}; 
		weapons[] = {"arifle_MX_GL_ACO_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MX_GL_ACO_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Carryall_cbr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_GL_ACO_F","","","optic_Aco",{"30Rnd_65x39_caseless_mag",30},{"1Rnd_HE_Grenade_shell",1},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrierGL_rgr",{{"30Rnd_65x39_caseless_mag",3,30},{"16Rnd_9x21_Mag",2,17},{"1Rnd_HE_Grenade_shell",5,1},{"HandGrenade",2,1},{"MiniGrenade",2,1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"1Rnd_Smoke_Grenade_shell",2,1},{"1Rnd_SmokeBlue_Grenade_shell",1,1},{"1Rnd_SmokeGreen_Grenade_shell",1,1},{"1Rnd_SmokeOrange_Grenade_shell",1,1}}},{"B_Carryall_cbr",{}},"H_HelmetSpecB_blk","G_Combat",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_Officer_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Officer (Desert)"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_01", "Male04ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Aviator","H_MilCap_mcamo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Aviator","H_MilCap_mcamo"}; 
		weapons[] = {"arifle_MXC_ACO_F","hgun_Pistol_heavy_01_MRD_F"}; 
		respawnWeapons[] = {"arifle_MXC_ACO_F","hgun_Pistol_heavy_01_MRD_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MXC_ACO_F","","","optic_Aco",{"30Rnd_65x39_caseless_mag",30},{},""},{},{"hgun_Pistol_heavy_01_MRD_F","","","optic_MRD",{"11Rnd_45ACP_Mag",15},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30},{"SmokeShell",1,1},{"Chemlight_green",1,1}}},{"V_BandollierB_rgr",{{"30Rnd_65x39_caseless_mag",1,30},{"11Rnd_45ACP_Mag",2,15},{"SmokeShellGreen",1,1},{"Chemlight_green",1,1}}},{},"H_MilCap_mcamo","G_Aviator",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_Officer_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Officer (Desert)"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_01", "Male04ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Aviator","H_MilCap_mcamo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Aviator","H_MilCap_mcamo"}; 
		weapons[] = {"arifle_MXC_ACO_F","hgun_Pistol_heavy_01_MRD_F"}; 
		respawnWeapons[] = {"arifle_MXC_ACO_F","hgun_Pistol_heavy_01_MRD_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MXC_ACO_F","","","optic_Aco",{"30Rnd_65x39_caseless_mag",30},{},""},{},{"hgun_Pistol_heavy_01_MRD_F","","","optic_MRD",{"11Rnd_45ACP_Mag",15},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30},{"SmokeShell",1,1},{"Chemlight_green",1,1}}},{"V_BandollierB_rgr",{{"30Rnd_65x39_caseless_mag",1,30},{"11Rnd_45ACP_Mag",2,15},{"SmokeShellGreen",1,1},{"Chemlight_green",1,1}}},{},"H_MilCap_mcamo","G_Aviator",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_Officer_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Officer (Desert)"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_01", "Male04ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Aviator","H_MilCap_mcamo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Aviator","H_MilCap_mcamo"}; 
		weapons[] = {"arifle_MXC_ACO_F","hgun_Pistol_heavy_01_MRD_F"}; 
		respawnWeapons[] = {"arifle_MXC_ACO_F","hgun_Pistol_heavy_01_MRD_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MXC_ACO_F","","","optic_Aco",{"30Rnd_65x39_caseless_mag",30},{},""},{},{"hgun_Pistol_heavy_01_MRD_F","","","optic_MRD",{"11Rnd_45ACP_Mag",15},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30},{"SmokeShell",1,1},{"Chemlight_green",1,1}}},{"V_BandollierB_rgr",{{"30Rnd_65x39_caseless_mag",1,30},{"11Rnd_45ACP_Mag",2,15},{"SmokeShellGreen",1,1},{"Chemlight_green",1,1}}},{},"H_MilCap_mcamo","G_Aviator",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_Medic_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Doctor (Desert)"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_12", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam_tshirt"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Black","H_HelmetB_light_desert"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Black","H_HelmetB_light_desert"}; 
		weapons[] = {"arifle_MX_pointer_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MX_pointer_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_rgr_Medic";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_pointer_F","","acc_pointer_IR","",{"30Rnd_65x39_caseless_mag",30},{},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam_tshirt",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrierSpec_rgr",{{"30Rnd_65x39_caseless_mag",3,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"SmokeShellOrange",1,1},{"Chemlight_green",2,1}}},{"B_AssaultPack_rgr_Medic",{{"Medikit",1},{"FirstAidKit",10}}},"H_HelmetB_light_desert","G_Tactical_Black",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_Medic_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Doctor (Desert)"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_12", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam_tshirt"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Black","H_HelmetB_light_desert"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Black","H_HelmetB_light_desert"}; 
		weapons[] = {"arifle_MX_pointer_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MX_pointer_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_rgr_Medic";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_pointer_F","","acc_pointer_IR","",{"30Rnd_65x39_caseless_mag",30},{},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam_tshirt",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrierSpec_rgr",{{"30Rnd_65x39_caseless_mag",3,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"SmokeShellOrange",1,1},{"Chemlight_green",2,1}}},{"B_AssaultPack_rgr_Medic",{{"Medikit",1},{"FirstAidKit",10}}},"H_HelmetB_light_desert","G_Tactical_Black",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_Medic_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Doctor (Desert)"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_12", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam_tshirt"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Black","H_HelmetB_light_desert"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Black","H_HelmetB_light_desert"}; 
		weapons[] = {"arifle_MX_pointer_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MX_pointer_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_rgr_Medic";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_pointer_F","","acc_pointer_IR","",{"30Rnd_65x39_caseless_mag",30},{},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam_tshirt",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrierSpec_rgr",{{"30Rnd_65x39_caseless_mag",3,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"SmokeShellOrange",1,1},{"Chemlight_green",2,1}}},{"B_AssaultPack_rgr_Medic",{{"Medikit",1},{"FirstAidKit",10}}},"H_HelmetB_light_desert","G_Tactical_Black",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_RTO_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Anti-Tank (Desert)"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_06", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_HelmetB_light_desert"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_HelmetB_light_desert"}; 
		weapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_short_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_short_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_mcamo_AT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MXC_Holo_pointer_F","","acc_pointer_IR","optic_Holosight",{"30Rnd_65x39_caseless_mag",30},{},""},{"launch_B_Titan_short_F","","","",{"Titan_AT",1},{},""},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrier1_rgr",{{"30Rnd_65x39_caseless_mag",3,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1}}},{"B_AssaultPack_mcamo_AT",{{"Titan_AT",1,1},{"Titan_AP",1,1}}},"H_HelmetB_light_desert","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_RTO_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Anti-Tank (Desert)"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_06", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_HelmetB_light_desert"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_HelmetB_light_desert"}; 
		weapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_short_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_short_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_mcamo_AT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MXC_Holo_pointer_F","","acc_pointer_IR","optic_Holosight",{"30Rnd_65x39_caseless_mag",30},{},""},{"launch_B_Titan_short_F","","","",{"Titan_AT",1},{},""},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrier1_rgr",{{"30Rnd_65x39_caseless_mag",3,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1}}},{"B_AssaultPack_mcamo_AT",{{"Titan_AT",1,1},{"Titan_AP",1,1}}},"H_HelmetB_light_desert","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_RTO_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Anti-Tank (Desert)"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_06", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_HelmetB_light_desert"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_HelmetB_light_desert"}; 
		weapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_short_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_short_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_mcamo_AT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MXC_Holo_pointer_F","","acc_pointer_IR","optic_Holosight",{"30Rnd_65x39_caseless_mag",30},{},""},{"launch_B_Titan_short_F","","","",{"Titan_AT",1},{},""},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrier1_rgr",{{"30Rnd_65x39_caseless_mag",3,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1}}},{"B_AssaultPack_mcamo_AT",{{"Titan_AT",1,1},{"Titan_AP",1,1}}},"H_HelmetB_light_desert","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_DIVER_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Special (Desert)"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_15", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "U_B_PilotCoveralls"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_PilotHelmetFighter_B"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_PilotHelmetFighter_B"}; 
		weapons[] = {"SMG_01_Holo_F"}; 
		respawnWeapons[] = {"SMG_01_Holo_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "ACE_NonSteerableParachute";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"SMG_01_Holo_F","","","optic_Holosight_smg",{"30Rnd_45ACP_Mag_SMG_01",25},{},""},{},{},{"U_B_PilotCoveralls",{{"FirstAidKit",1},{"30Rnd_45ACP_Mag_SMG_01",3,25},{"SmokeShell",1,1},{"SmokeShellBlue",1,1},{"Chemlight_green",1,1}}},{},{"ACE_NonSteerableParachute",{}},"H_PilotHelmetFighter_B","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_DIVER_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Special (Desert)"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_15", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "U_B_PilotCoveralls"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_PilotHelmetFighter_B"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_PilotHelmetFighter_B"}; 
		weapons[] = {"SMG_01_Holo_F"}; 
		respawnWeapons[] = {"SMG_01_Holo_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "ACE_NonSteerableParachute";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"SMG_01_Holo_F","","","optic_Holosight_smg",{"30Rnd_45ACP_Mag_SMG_01",25},{},""},{},{},{"U_B_PilotCoveralls",{{"FirstAidKit",1},{"30Rnd_45ACP_Mag_SMG_01",3,25},{"SmokeShell",1,1},{"SmokeShellBlue",1,1},{"Chemlight_green",1,1}}},{},{"ACE_NonSteerableParachute",{}},"H_PilotHelmetFighter_B","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_DIVER_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Special (Desert)"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_15", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "U_B_PilotCoveralls"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_PilotHelmetFighter_B"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_PilotHelmetFighter_B"}; 
		weapons[] = {"SMG_01_Holo_F"}; 
		respawnWeapons[] = {"SMG_01_Holo_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "ACE_NonSteerableParachute";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"SMG_01_Holo_F","","","optic_Holosight_smg",{"30Rnd_45ACP_Mag_SMG_01",25},{},""},{},{},{"U_B_PilotCoveralls",{{"FirstAidKit",1},{"30Rnd_45ACP_Mag_SMG_01",3,25},{"SmokeShell",1,1},{"SmokeShellBlue",1,1},{"Chemlight_green",1,1}}},{},{"ACE_NonSteerableParachute",{}},"H_PilotHelmetFighter_B","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_SNP_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Sniper (Desert)"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"AfricanHead_03", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Clear","H_HelmetB_grass"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Clear","H_HelmetB_grass"}; 
		weapons[] = {"arifle_MXM_Hamr_LP_BI_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MXM_Hamr_LP_BI_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Carryall_mcamo";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MXM_Hamr_LP_BI_F","","acc_pointer_IR","optic_Hamr",{"30Rnd_65x39_caseless_mag",30},{},"bipod_01_F_snd"},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrier1_rgr",{{"30Rnd_65x39_caseless_mag",5,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1}}},{"B_Carryall_mcamo",{}},"H_HelmetB_grass","G_Tactical_Clear",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_SNP_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Sniper (Desert)"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"AfricanHead_03", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Clear","H_HelmetB_grass"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Clear","H_HelmetB_grass"}; 
		weapons[] = {"arifle_MXM_Hamr_LP_BI_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MXM_Hamr_LP_BI_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Carryall_mcamo";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MXM_Hamr_LP_BI_F","","acc_pointer_IR","optic_Hamr",{"30Rnd_65x39_caseless_mag",30},{},"bipod_01_F_snd"},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrier1_rgr",{{"30Rnd_65x39_caseless_mag",5,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1}}},{"B_Carryall_mcamo",{}},"H_HelmetB_grass","G_Tactical_Clear",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_SNP_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Sniper (Desert)"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"AfricanHead_03", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Clear","H_HelmetB_grass"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Clear","H_HelmetB_grass"}; 
		weapons[] = {"arifle_MXM_Hamr_LP_BI_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MXM_Hamr_LP_BI_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Carryall_mcamo";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MXM_Hamr_LP_BI_F","","acc_pointer_IR","optic_Hamr",{"30Rnd_65x39_caseless_mag",30},{},"bipod_01_F_snd"},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrier1_rgr",{{"30Rnd_65x39_caseless_mag",5,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1}}},{"B_Carryall_mcamo",{}},"H_HelmetB_grass","G_Tactical_Clear",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_VAR_8_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 9"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_22_l", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Aviator","H_HelmetB"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Aviator","H_HelmetB"}; 
		weapons[] = {"srifle_DMR_03_tan_AMS_LP_F","launch_RPG32_F","hgun_P07_F","Binocular"}; 
		respawnWeapons[] = {"srifle_DMR_03_tan_AMS_LP_F","launch_RPG32_F","hgun_P07_F","Binocular"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_khk";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"srifle_DMR_03_tan_AMS_LP_F","","acc_pointer_IR","optic_AMS_snd",{"20Rnd_762x51_Mag",20},{},"bipod_01_F_snd"},{"launch_RPG32_F","","","",{"RPG32_F",1},{},""},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"20Rnd_762x51_Mag",2,20}}},{"V_PlateCarrier1_rgr",{{"20Rnd_762x51_Mag",5,20},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_AssaultPack_khk",{{"RPG32_HE_F",2,1},{"RPG32_F",1,1}}},"H_HelmetB","G_Aviator",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_VAR_8_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 9"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_22_l", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Aviator","H_HelmetB"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Aviator","H_HelmetB"}; 
		weapons[] = {"srifle_DMR_03_tan_AMS_LP_F","launch_RPG32_F","hgun_P07_F","Binocular"}; 
		respawnWeapons[] = {"srifle_DMR_03_tan_AMS_LP_F","launch_RPG32_F","hgun_P07_F","Binocular"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_khk";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"srifle_DMR_03_tan_AMS_LP_F","","acc_pointer_IR","optic_AMS_snd",{"20Rnd_762x51_Mag",20},{},"bipod_01_F_snd"},{"launch_RPG32_F","","","",{"RPG32_F",1},{},""},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"20Rnd_762x51_Mag",2,20}}},{"V_PlateCarrier1_rgr",{{"20Rnd_762x51_Mag",5,20},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_AssaultPack_khk",{{"RPG32_HE_F",2,1},{"RPG32_F",1,1}}},"H_HelmetB","G_Aviator",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_VAR_8_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 9"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_22_l", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Aviator","H_HelmetB"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Aviator","H_HelmetB"}; 
		weapons[] = {"srifle_DMR_03_tan_AMS_LP_F","launch_RPG32_F","hgun_P07_F","Binocular"}; 
		respawnWeapons[] = {"srifle_DMR_03_tan_AMS_LP_F","launch_RPG32_F","hgun_P07_F","Binocular"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_khk";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"srifle_DMR_03_tan_AMS_LP_F","","acc_pointer_IR","optic_AMS_snd",{"20Rnd_762x51_Mag",20},{},"bipod_01_F_snd"},{"launch_RPG32_F","","","",{"RPG32_F",1},{},""},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"20Rnd_762x51_Mag",2,20}}},{"V_PlateCarrier1_rgr",{{"20Rnd_762x51_Mag",5,20},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_AssaultPack_khk",{{"RPG32_HE_F",2,1},{"RPG32_F",1,1}}},"H_HelmetB","G_Aviator",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_VAR_9_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 10"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"GreekHead_A3_04", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetB_light_sand"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetB_light_sand"}; 
		weapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_mcamo_AA";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MXC_Holo_pointer_F","","acc_pointer_IR","optic_Holosight",{"30Rnd_65x39_caseless_mag",30},{},""},{"launch_B_Titan_F","","","",{"Titan_AA",1},{},""},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrier1_rgr",{{"30Rnd_65x39_caseless_mag",3,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1}}},{"B_AssaultPack_mcamo_AA",{{"Titan_AA",2,1}}},"H_HelmetB_light_sand","G_Combat",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_VAR_9_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 10"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"GreekHead_A3_04", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetB_light_sand"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetB_light_sand"}; 
		weapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_mcamo_AA";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MXC_Holo_pointer_F","","acc_pointer_IR","optic_Holosight",{"30Rnd_65x39_caseless_mag",30},{},""},{"launch_B_Titan_F","","","",{"Titan_AA",1},{},""},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrier1_rgr",{{"30Rnd_65x39_caseless_mag",3,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1}}},{"B_AssaultPack_mcamo_AA",{{"Titan_AA",2,1}}},"H_HelmetB_light_sand","G_Combat",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_VAR_9_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 10"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"GreekHead_A3_04", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetB_light_sand"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetB_light_sand"}; 
		weapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_mcamo_AA";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MXC_Holo_pointer_F","","acc_pointer_IR","optic_Holosight",{"30Rnd_65x39_caseless_mag",30},{},""},{"launch_B_Titan_F","","","",{"Titan_AA",1},{},""},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrier1_rgr",{{"30Rnd_65x39_caseless_mag",3,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1}}},{"B_AssaultPack_mcamo_AA",{{"Titan_AA",2,1}}},"H_HelmetB_light_sand","G_Combat",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_VAR_10_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 11"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"TanoanHead_A3_06", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles","G_Tactical_Clear","H_HelmetB"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles","G_Tactical_Clear","H_HelmetB"}; 
		weapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_UAV_01_backpack_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_ACO_pointer_F","","acc_pointer_IR","optic_Aco",{"30Rnd_65x39_caseless_mag",30},{},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30},{"HandGrenade",1,1}}},{"V_PlateCarrierSpec_rgr",{{"30Rnd_65x39_caseless_mag",7,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1}}},{"B_UAV_01_backpack_F",{}},"H_HelmetB","G_Tactical_Clear",{},{"ItemMap","B_UavTerminal","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_VAR_10_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 11"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"TanoanHead_A3_06", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles","G_Tactical_Clear","H_HelmetB"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles","G_Tactical_Clear","H_HelmetB"}; 
		weapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_UAV_01_backpack_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_ACO_pointer_F","","acc_pointer_IR","optic_Aco",{"30Rnd_65x39_caseless_mag",30},{},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30},{"HandGrenade",1,1}}},{"V_PlateCarrierSpec_rgr",{{"30Rnd_65x39_caseless_mag",7,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1}}},{"B_UAV_01_backpack_F",{}},"H_HelmetB","G_Tactical_Clear",{},{"ItemMap","B_UavTerminal","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_VAR_10_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 11"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"TanoanHead_A3_06", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles","G_Tactical_Clear","H_HelmetB"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles","G_Tactical_Clear","H_HelmetB"}; 
		weapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_UAV_01_backpack_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_ACO_pointer_F","","acc_pointer_IR","optic_Aco",{"30Rnd_65x39_caseless_mag",30},{},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30},{"HandGrenade",1,1}}},{"V_PlateCarrierSpec_rgr",{{"30Rnd_65x39_caseless_mag",7,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1}}},{"B_UAV_01_backpack_F",{}},"H_HelmetB","G_Tactical_Clear",{},{"ItemMap","B_UavTerminal","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_VAR_11_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 12"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_22_a", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "U_Rangemaster"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Tactical_Clear","H_Cap_headphones"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Tactical_Clear","H_Cap_headphones"}; 
		weapons[] = {}; 
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_Rangemaster",{{"FirstAidKit",1}}},{"V_Rangemaster_belt",{}},{},"H_Cap_headphones","G_Tactical_Clear",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_VAR_11_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 12"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_22_a", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "U_Rangemaster"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Tactical_Clear","H_Cap_headphones"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Tactical_Clear","H_Cap_headphones"}; 
		weapons[] = {}; 
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_Rangemaster",{{"FirstAidKit",1}}},{"V_Rangemaster_belt",{}},{},"H_Cap_headphones","G_Tactical_Clear",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_VAR_11_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 12"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_22_a", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "U_Rangemaster"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Tactical_Clear","H_Cap_headphones"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Tactical_Clear","H_Cap_headphones"}; 
		weapons[] = {}; 
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_Rangemaster",{{"FirstAidKit",1}}},{"V_Rangemaster_belt",{}},{},"H_Cap_headphones","G_Tactical_Clear",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_VAR_12_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 13"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_14", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "U_B_HeliPilotCoveralls"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_CrewHelmetHeli_B"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_CrewHelmetHeli_B"}; 
		weapons[] = {"arifle_MXC_Holo_F"}; 
		respawnWeapons[] = {"arifle_MXC_Holo_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MXC_Holo_F","","","optic_Holosight",{"30Rnd_65x39_caseless_mag",30},{},""},{},{},{"U_B_HeliPilotCoveralls",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30},{"SmokeShellGreen",1,1},{"Chemlight_green",1,1}}},{"V_TacVest_blk",{{"30Rnd_65x39_caseless_mag",1,30},{"SmokeShellBlue",1,1},{"SmokeShellOrange",1,1},{"Chemlight_green",1,1}}},{},"H_CrewHelmetHeli_B","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_VAR_12_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 13"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_14", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "U_B_HeliPilotCoveralls"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_CrewHelmetHeli_B"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_CrewHelmetHeli_B"}; 
		weapons[] = {"arifle_MXC_Holo_F"}; 
		respawnWeapons[] = {"arifle_MXC_Holo_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MXC_Holo_F","","","optic_Holosight",{"30Rnd_65x39_caseless_mag",30},{},""},{},{},{"U_B_HeliPilotCoveralls",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30},{"SmokeShellGreen",1,1},{"Chemlight_green",1,1}}},{"V_TacVest_blk",{{"30Rnd_65x39_caseless_mag",1,30},{"SmokeShellBlue",1,1},{"SmokeShellOrange",1,1},{"Chemlight_green",1,1}}},{},"H_CrewHelmetHeli_B","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_VAR_12_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 13"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_14", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "U_B_HeliPilotCoveralls"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_CrewHelmetHeli_B"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_CrewHelmetHeli_B"}; 
		weapons[] = {"arifle_MXC_Holo_F"}; 
		respawnWeapons[] = {"arifle_MXC_Holo_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MXC_Holo_F","","","optic_Holosight",{"30Rnd_65x39_caseless_mag",30},{},""},{},{},{"U_B_HeliPilotCoveralls",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30},{"SmokeShellGreen",1,1},{"Chemlight_green",1,1}}},{"V_TacVest_blk",{{"30Rnd_65x39_caseless_mag",1,30},{"SmokeShellBlue",1,1},{"SmokeShellOrange",1,1},{"Chemlight_green",1,1}}},{},"H_CrewHelmetHeli_B","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_VAR_13_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 14"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_22_sa", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "U_B_HeliPilotCoveralls"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_PilotHelmetHeli_B"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_PilotHelmetHeli_B"}; 
		weapons[] = {"SMG_01_Holo_F"}; 
		respawnWeapons[] = {"SMG_01_Holo_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"SMG_01_Holo_F","","","optic_Holosight_smg",{"30Rnd_45ACP_Mag_SMG_01",25},{},""},{},{},{"U_B_HeliPilotCoveralls",{{"FirstAidKit",1},{"30Rnd_45ACP_Mag_SMG_01",2,25},{"SmokeShellGreen",1,1},{"Chemlight_green",1,1}}},{"V_TacVest_blk",{{"30Rnd_45ACP_Mag_SMG_01",1,25},{"SmokeShellBlue",1,1},{"SmokeShellOrange",1,1},{"Chemlight_green",1,1}}},{},"H_PilotHelmetHeli_B","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_VAR_13_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 14"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_22_sa", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "U_B_HeliPilotCoveralls"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_PilotHelmetHeli_B"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_PilotHelmetHeli_B"}; 
		weapons[] = {"SMG_01_Holo_F"}; 
		respawnWeapons[] = {"SMG_01_Holo_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"SMG_01_Holo_F","","","optic_Holosight_smg",{"30Rnd_45ACP_Mag_SMG_01",25},{},""},{},{},{"U_B_HeliPilotCoveralls",{{"FirstAidKit",1},{"30Rnd_45ACP_Mag_SMG_01",2,25},{"SmokeShellGreen",1,1},{"Chemlight_green",1,1}}},{"V_TacVest_blk",{{"30Rnd_45ACP_Mag_SMG_01",1,25},{"SmokeShellBlue",1,1},{"SmokeShellOrange",1,1},{"Chemlight_green",1,1}}},{},"H_PilotHelmetHeli_B","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_VAR_13_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 14"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_22_sa", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "U_B_HeliPilotCoveralls"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_PilotHelmetHeli_B"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_PilotHelmetHeli_B"}; 
		weapons[] = {"SMG_01_Holo_F"}; 
		respawnWeapons[] = {"SMG_01_Holo_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"SMG_01_Holo_F","","","optic_Holosight_smg",{"30Rnd_45ACP_Mag_SMG_01",25},{},""},{},{},{"U_B_HeliPilotCoveralls",{{"FirstAidKit",1},{"30Rnd_45ACP_Mag_SMG_01",2,25},{"SmokeShellGreen",1,1},{"Chemlight_green",1,1}}},{"V_TacVest_blk",{{"30Rnd_45ACP_Mag_SMG_01",1,25},{"SmokeShellBlue",1,1},{"SmokeShellOrange",1,1},{"Chemlight_green",1,1}}},{},"H_PilotHelmetHeli_B","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_VAR_14_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 15"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_13", "Male02ENG" ,"G_NATO_default"};
		uniformClass = "U_B_PilotCoveralls"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Combat","H_PilotHelmetFighter_B"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Combat","H_PilotHelmetFighter_B"}; 
		weapons[] = {"hgun_P07_F"}; 
		respawnWeapons[] = {"hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_PilotCoveralls",{{"FirstAidKit",1},{"16Rnd_9x21_Mag",3,17},{"SmokeShellOrange",1,1},{"Chemlight_green",2,1}}},{},{},"H_PilotHelmetFighter_B","G_Combat",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_VAR_14_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 15"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_13", "Male02ENG" ,"G_NATO_default"};
		uniformClass = "U_B_PilotCoveralls"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Combat","H_PilotHelmetFighter_B"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Combat","H_PilotHelmetFighter_B"}; 
		weapons[] = {"hgun_P07_F"}; 
		respawnWeapons[] = {"hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_PilotCoveralls",{{"FirstAidKit",1},{"16Rnd_9x21_Mag",3,17},{"SmokeShellOrange",1,1},{"Chemlight_green",2,1}}},{},{},"H_PilotHelmetFighter_B","G_Combat",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_VAR_14_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 15"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_13", "Male02ENG" ,"G_NATO_default"};
		uniformClass = "U_B_PilotCoveralls"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Combat","H_PilotHelmetFighter_B"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Combat","H_PilotHelmetFighter_B"}; 
		weapons[] = {"hgun_P07_F"}; 
		respawnWeapons[] = {"hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_PilotCoveralls",{{"FirstAidKit",1},{"16Rnd_9x21_Mag",3,17},{"SmokeShellOrange",1,1},{"Chemlight_green",2,1}}},{},{},"H_PilotHelmetFighter_B","G_Combat",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_VAR_15_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 16"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_05", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "U_B_HeliPilotCoveralls"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","H_HelmetCrew_B"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","H_HelmetCrew_B"}; 
		weapons[] = {}; 
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_B_HeliPilotCoveralls",{{"FirstAidKit",1}}},{"V_DeckCrew_yellow_F",{}},{},"H_HelmetCrew_B","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_VAR_15_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 16"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_05", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "U_B_HeliPilotCoveralls"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","H_HelmetCrew_B"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","H_HelmetCrew_B"}; 
		weapons[] = {}; 
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_B_HeliPilotCoveralls",{{"FirstAidKit",1}}},{"V_DeckCrew_yellow_F",{}},{},"H_HelmetCrew_B","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_VAR_15_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 16"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_05", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "U_B_HeliPilotCoveralls"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","H_HelmetCrew_B"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","H_HelmetCrew_B"}; 
		weapons[] = {}; 
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_B_HeliPilotCoveralls",{{"FirstAidKit",1}}},{"V_DeckCrew_yellow_F",{}},{},"H_HelmetCrew_B","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_Rifleman_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Rifleman (Winter)"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"TanoanHead_A3_02", "Male04ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Black","H_HelmetB"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Black","H_HelmetB"}; 
		weapons[] = {"arifle_MX_ACO_pointer_F","launch_NLAW_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MX_ACO_pointer_F","launch_NLAW_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_ocamo";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_ACO_pointer_F","","acc_pointer_IR","optic_Aco",{"30Rnd_65x39_caseless_mag",30},{},""},{"launch_NLAW_F","","","",{},{},""},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrier1_rgr",{{"30Rnd_65x39_caseless_mag",7,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_AssaultPack_ocamo",{}},"H_HelmetB","G_Tactical_Black",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_Rifleman_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Rifleman (Winter)"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"TanoanHead_A3_02", "Male04ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Black","H_HelmetB"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Black","H_HelmetB"}; 
		weapons[] = {"arifle_MX_ACO_pointer_F","launch_NLAW_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MX_ACO_pointer_F","launch_NLAW_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_ocamo";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_ACO_pointer_F","","acc_pointer_IR","optic_Aco",{"30Rnd_65x39_caseless_mag",30},{},""},{"launch_NLAW_F","","","",{},{},""},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrier1_rgr",{{"30Rnd_65x39_caseless_mag",7,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_AssaultPack_ocamo",{}},"H_HelmetB","G_Tactical_Black",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_Rifleman_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Rifleman (Winter)"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"TanoanHead_A3_02", "Male04ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Black","H_HelmetB"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Black","H_HelmetB"}; 
		weapons[] = {"arifle_MX_ACO_pointer_F","launch_NLAW_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MX_ACO_pointer_F","launch_NLAW_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_ocamo";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_ACO_pointer_F","","acc_pointer_IR","optic_Aco",{"30Rnd_65x39_caseless_mag",30},{},""},{"launch_NLAW_F","","","",{},{},""},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrier1_rgr",{{"30Rnd_65x39_caseless_mag",7,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_AssaultPack_ocamo",{}},"H_HelmetB","G_Tactical_Black",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_AR_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Machine Gunner (Winter)"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"GreekHead_A3_03", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam_tshirt"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetB_grass"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetB_grass"}; 
		weapons[] = {"LMG_Zafir_F","hgun_P07_F"}; 
		respawnWeapons[] = {"LMG_Zafir_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Carryall_oli";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"LMG_Zafir_F","","acc_pointer_IR","optic_Hamr",{"150Rnd_762x54_Box",150},{},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam_tshirt",{{"FirstAidKit",1},{"SmokeShell",1,1},{"HandGrenade",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",1,1}}},{"V_PlateCarrier2_rgr",{{"16Rnd_9x21_Mag",2,17},{"Chemlight_green",1,1}}},{"B_Carryall_oli",{}},"H_HelmetB_grass","G_Combat",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_AR_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Machine Gunner (Winter)"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"GreekHead_A3_03", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam_tshirt"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetB_grass"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetB_grass"}; 
		weapons[] = {"LMG_Zafir_F","hgun_P07_F"}; 
		respawnWeapons[] = {"LMG_Zafir_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Carryall_oli";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"LMG_Zafir_F","","acc_pointer_IR","optic_Hamr",{"150Rnd_762x54_Box",150},{},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam_tshirt",{{"FirstAidKit",1},{"SmokeShell",1,1},{"HandGrenade",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",1,1}}},{"V_PlateCarrier2_rgr",{{"16Rnd_9x21_Mag",2,17},{"Chemlight_green",1,1}}},{"B_Carryall_oli",{}},"H_HelmetB_grass","G_Combat",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_AR_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Machine Gunner (Winter)"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"GreekHead_A3_03", "Male11ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam_tshirt"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetB_grass"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetB_grass"}; 
		weapons[] = {"LMG_Zafir_F","hgun_P07_F"}; 
		respawnWeapons[] = {"LMG_Zafir_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Carryall_oli";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"LMG_Zafir_F","","acc_pointer_IR","optic_Hamr",{"150Rnd_762x54_Box",150},{},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam_tshirt",{{"FirstAidKit",1},{"SmokeShell",1,1},{"HandGrenade",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",1,1}}},{"V_PlateCarrier2_rgr",{{"16Rnd_9x21_Mag",2,17},{"Chemlight_green",1,1}}},{"B_Carryall_oli",{}},"H_HelmetB_grass","G_Combat",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_GL_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Grenadier (Winter)"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_05", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetSpecB_blk"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetSpecB_blk"}; 
		weapons[] = {"arifle_MX_GL_ACO_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MX_GL_ACO_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Carryall_cbr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_GL_ACO_F","","","optic_Aco",{"30Rnd_65x39_caseless_mag",30},{"1Rnd_HE_Grenade_shell",1},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrierGL_rgr",{{"30Rnd_65x39_caseless_mag",3,30},{"16Rnd_9x21_Mag",2,17},{"1Rnd_HE_Grenade_shell",5,1},{"HandGrenade",2,1},{"MiniGrenade",2,1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"1Rnd_Smoke_Grenade_shell",2,1},{"1Rnd_SmokeBlue_Grenade_shell",1,1},{"1Rnd_SmokeGreen_Grenade_shell",1,1},{"1Rnd_SmokeOrange_Grenade_shell",1,1}}},{"B_Carryall_cbr",{}},"H_HelmetSpecB_blk","G_Combat",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_GL_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Grenadier (Winter)"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_05", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetSpecB_blk"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetSpecB_blk"}; 
		weapons[] = {"arifle_MX_GL_ACO_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MX_GL_ACO_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Carryall_cbr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_GL_ACO_F","","","optic_Aco",{"30Rnd_65x39_caseless_mag",30},{"1Rnd_HE_Grenade_shell",1},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrierGL_rgr",{{"30Rnd_65x39_caseless_mag",3,30},{"16Rnd_9x21_Mag",2,17},{"1Rnd_HE_Grenade_shell",5,1},{"HandGrenade",2,1},{"MiniGrenade",2,1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"1Rnd_Smoke_Grenade_shell",2,1},{"1Rnd_SmokeBlue_Grenade_shell",1,1},{"1Rnd_SmokeGreen_Grenade_shell",1,1},{"1Rnd_SmokeOrange_Grenade_shell",1,1}}},{"B_Carryall_cbr",{}},"H_HelmetSpecB_blk","G_Combat",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_GL_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Grenadier (Winter)"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_05", "Male10ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetSpecB_blk"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetSpecB_blk"}; 
		weapons[] = {"arifle_MX_GL_ACO_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MX_GL_ACO_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Carryall_cbr";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_GL_ACO_F","","","optic_Aco",{"30Rnd_65x39_caseless_mag",30},{"1Rnd_HE_Grenade_shell",1},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrierGL_rgr",{{"30Rnd_65x39_caseless_mag",3,30},{"16Rnd_9x21_Mag",2,17},{"1Rnd_HE_Grenade_shell",5,1},{"HandGrenade",2,1},{"MiniGrenade",2,1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"1Rnd_Smoke_Grenade_shell",2,1},{"1Rnd_SmokeBlue_Grenade_shell",1,1},{"1Rnd_SmokeGreen_Grenade_shell",1,1},{"1Rnd_SmokeOrange_Grenade_shell",1,1}}},{"B_Carryall_cbr",{}},"H_HelmetSpecB_blk","G_Combat",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_Officer_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Officer (Winter)"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_12", "Male02ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Aviator","H_MilCap_mcamo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Aviator","H_MilCap_mcamo"}; 
		weapons[] = {"arifle_MXC_ACO_F","hgun_Pistol_heavy_01_MRD_F"}; 
		respawnWeapons[] = {"arifle_MXC_ACO_F","hgun_Pistol_heavy_01_MRD_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MXC_ACO_F","","","optic_Aco",{"30Rnd_65x39_caseless_mag",30},{},""},{},{"hgun_Pistol_heavy_01_MRD_F","","","optic_MRD",{"11Rnd_45ACP_Mag",15},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30},{"SmokeShell",1,1},{"Chemlight_green",1,1}}},{"V_BandollierB_rgr",{{"30Rnd_65x39_caseless_mag",1,30},{"11Rnd_45ACP_Mag",2,15},{"SmokeShellGreen",1,1},{"Chemlight_green",1,1}}},{},"H_MilCap_mcamo","G_Aviator",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_Officer_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Officer (Winter)"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_12", "Male02ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Aviator","H_MilCap_mcamo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Aviator","H_MilCap_mcamo"}; 
		weapons[] = {"arifle_MXC_ACO_F","hgun_Pistol_heavy_01_MRD_F"}; 
		respawnWeapons[] = {"arifle_MXC_ACO_F","hgun_Pistol_heavy_01_MRD_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MXC_ACO_F","","","optic_Aco",{"30Rnd_65x39_caseless_mag",30},{},""},{},{"hgun_Pistol_heavy_01_MRD_F","","","optic_MRD",{"11Rnd_45ACP_Mag",15},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30},{"SmokeShell",1,1},{"Chemlight_green",1,1}}},{"V_BandollierB_rgr",{{"30Rnd_65x39_caseless_mag",1,30},{"11Rnd_45ACP_Mag",2,15},{"SmokeShellGreen",1,1},{"Chemlight_green",1,1}}},{},"H_MilCap_mcamo","G_Aviator",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_Officer_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Officer (Winter)"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_12", "Male02ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Aviator","H_MilCap_mcamo"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","G_Aviator","H_MilCap_mcamo"}; 
		weapons[] = {"arifle_MXC_ACO_F","hgun_Pistol_heavy_01_MRD_F"}; 
		respawnWeapons[] = {"arifle_MXC_ACO_F","hgun_Pistol_heavy_01_MRD_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MXC_ACO_F","","","optic_Aco",{"30Rnd_65x39_caseless_mag",30},{},""},{},{"hgun_Pistol_heavy_01_MRD_F","","","optic_MRD",{"11Rnd_45ACP_Mag",15},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30},{"SmokeShell",1,1},{"Chemlight_green",1,1}}},{"V_BandollierB_rgr",{{"30Rnd_65x39_caseless_mag",1,30},{"11Rnd_45ACP_Mag",2,15},{"SmokeShellGreen",1,1},{"Chemlight_green",1,1}}},{},"H_MilCap_mcamo","G_Aviator",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_Medic_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Doctor (Winter)"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"AfricanHead_02", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam_tshirt"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Black","H_HelmetB_light_desert"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Black","H_HelmetB_light_desert"}; 
		weapons[] = {"arifle_MX_pointer_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MX_pointer_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_rgr_Medic";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_pointer_F","","acc_pointer_IR","",{"30Rnd_65x39_caseless_mag",30},{},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam_tshirt",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrierSpec_rgr",{{"30Rnd_65x39_caseless_mag",3,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"SmokeShellOrange",1,1},{"Chemlight_green",2,1}}},{"B_AssaultPack_rgr_Medic",{{"Medikit",1},{"FirstAidKit",10}}},"H_HelmetB_light_desert","G_Tactical_Black",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_Medic_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Doctor (Winter)"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"AfricanHead_02", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam_tshirt"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Black","H_HelmetB_light_desert"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Black","H_HelmetB_light_desert"}; 
		weapons[] = {"arifle_MX_pointer_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MX_pointer_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_rgr_Medic";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_pointer_F","","acc_pointer_IR","",{"30Rnd_65x39_caseless_mag",30},{},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam_tshirt",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrierSpec_rgr",{{"30Rnd_65x39_caseless_mag",3,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"SmokeShellOrange",1,1},{"Chemlight_green",2,1}}},{"B_AssaultPack_rgr_Medic",{{"Medikit",1},{"FirstAidKit",10}}},"H_HelmetB_light_desert","G_Tactical_Black",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_Medic_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Doctor (Winter)"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"AfricanHead_02", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam_tshirt"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Black","H_HelmetB_light_desert"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Black","H_HelmetB_light_desert"}; 
		weapons[] = {"arifle_MX_pointer_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MX_pointer_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_rgr_Medic";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_pointer_F","","acc_pointer_IR","",{"30Rnd_65x39_caseless_mag",30},{},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam_tshirt",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrierSpec_rgr",{{"30Rnd_65x39_caseless_mag",3,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"SmokeShellOrange",1,1},{"Chemlight_green",2,1}}},{"B_AssaultPack_rgr_Medic",{{"Medikit",1},{"FirstAidKit",10}}},"H_HelmetB_light_desert","G_Tactical_Black",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_RTO_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Anti-Tank (Winter)"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"TanoanHead_A3_03", "Male02ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_HelmetB_light_desert"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_HelmetB_light_desert"}; 
		weapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_short_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_short_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_mcamo_AT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MXC_Holo_pointer_F","","acc_pointer_IR","optic_Holosight",{"30Rnd_65x39_caseless_mag",30},{},""},{"launch_B_Titan_short_F","","","",{"Titan_AT",1},{},""},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrier1_rgr",{{"30Rnd_65x39_caseless_mag",3,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1}}},{"B_AssaultPack_mcamo_AT",{{"Titan_AT",1,1},{"Titan_AP",1,1}}},"H_HelmetB_light_desert","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_RTO_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Anti-Tank (Winter)"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"TanoanHead_A3_03", "Male02ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_HelmetB_light_desert"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_HelmetB_light_desert"}; 
		weapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_short_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_short_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_mcamo_AT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MXC_Holo_pointer_F","","acc_pointer_IR","optic_Holosight",{"30Rnd_65x39_caseless_mag",30},{},""},{"launch_B_Titan_short_F","","","",{"Titan_AT",1},{},""},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrier1_rgr",{{"30Rnd_65x39_caseless_mag",3,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1}}},{"B_AssaultPack_mcamo_AT",{{"Titan_AT",1,1},{"Titan_AP",1,1}}},"H_HelmetB_light_desert","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_RTO_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Anti-Tank (Winter)"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"TanoanHead_A3_03", "Male02ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_HelmetB_light_desert"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_HelmetB_light_desert"}; 
		weapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_short_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_short_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_mcamo_AT";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MXC_Holo_pointer_F","","acc_pointer_IR","optic_Holosight",{"30Rnd_65x39_caseless_mag",30},{},""},{"launch_B_Titan_short_F","","","",{"Titan_AT",1},{},""},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrier1_rgr",{{"30Rnd_65x39_caseless_mag",3,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1}}},{"B_AssaultPack_mcamo_AT",{{"Titan_AT",1,1},{"Titan_AP",1,1}}},"H_HelmetB_light_desert","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_DIVER_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Special (Winter)"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"PersianHead_A3_04_sa", "Male02ENG" ,"G_NATO_default"};
		uniformClass = "U_B_PilotCoveralls"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_PilotHelmetFighter_B"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_PilotHelmetFighter_B"}; 
		weapons[] = {"SMG_01_Holo_F"}; 
		respawnWeapons[] = {"SMG_01_Holo_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "ACE_NonSteerableParachute";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"SMG_01_Holo_F","","","optic_Holosight_smg",{"30Rnd_45ACP_Mag_SMG_01",25},{},""},{},{},{"U_B_PilotCoveralls",{{"FirstAidKit",1},{"30Rnd_45ACP_Mag_SMG_01",3,25},{"SmokeShell",1,1},{"SmokeShellBlue",1,1},{"Chemlight_green",1,1}}},{},{"ACE_NonSteerableParachute",{}},"H_PilotHelmetFighter_B","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_DIVER_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Special (Winter)"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"PersianHead_A3_04_sa", "Male02ENG" ,"G_NATO_default"};
		uniformClass = "U_B_PilotCoveralls"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_PilotHelmetFighter_B"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_PilotHelmetFighter_B"}; 
		weapons[] = {"SMG_01_Holo_F"}; 
		respawnWeapons[] = {"SMG_01_Holo_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "ACE_NonSteerableParachute";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"SMG_01_Holo_F","","","optic_Holosight_smg",{"30Rnd_45ACP_Mag_SMG_01",25},{},""},{},{},{"U_B_PilotCoveralls",{{"FirstAidKit",1},{"30Rnd_45ACP_Mag_SMG_01",3,25},{"SmokeShell",1,1},{"SmokeShellBlue",1,1},{"Chemlight_green",1,1}}},{},{"ACE_NonSteerableParachute",{}},"H_PilotHelmetFighter_B","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_DIVER_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Special (Winter)"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"PersianHead_A3_04_sa", "Male02ENG" ,"G_NATO_default"};
		uniformClass = "U_B_PilotCoveralls"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_PilotHelmetFighter_B"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_PilotHelmetFighter_B"}; 
		weapons[] = {"SMG_01_Holo_F"}; 
		respawnWeapons[] = {"SMG_01_Holo_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "ACE_NonSteerableParachute";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"SMG_01_Holo_F","","","optic_Holosight_smg",{"30Rnd_45ACP_Mag_SMG_01",25},{},""},{},{},{"U_B_PilotCoveralls",{{"FirstAidKit",1},{"30Rnd_45ACP_Mag_SMG_01",3,25},{"SmokeShell",1,1},{"SmokeShellBlue",1,1},{"Chemlight_green",1,1}}},{},{"ACE_NonSteerableParachute",{}},"H_PilotHelmetFighter_B","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_SNP_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Sniper (Winter)"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_05", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Clear","H_HelmetB_grass"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Clear","H_HelmetB_grass"}; 
		weapons[] = {"arifle_MXM_Hamr_LP_BI_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MXM_Hamr_LP_BI_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Carryall_mcamo";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MXM_Hamr_LP_BI_F","","acc_pointer_IR","optic_Hamr",{"30Rnd_65x39_caseless_mag",30},{},"bipod_01_F_snd"},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrier1_rgr",{{"30Rnd_65x39_caseless_mag",5,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1}}},{"B_Carryall_mcamo",{}},"H_HelmetB_grass","G_Tactical_Clear",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_SNP_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Sniper (Winter)"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_05", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Clear","H_HelmetB_grass"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Clear","H_HelmetB_grass"}; 
		weapons[] = {"arifle_MXM_Hamr_LP_BI_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MXM_Hamr_LP_BI_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Carryall_mcamo";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MXM_Hamr_LP_BI_F","","acc_pointer_IR","optic_Hamr",{"30Rnd_65x39_caseless_mag",30},{},"bipod_01_F_snd"},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrier1_rgr",{{"30Rnd_65x39_caseless_mag",5,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1}}},{"B_Carryall_mcamo",{}},"H_HelmetB_grass","G_Tactical_Clear",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_SNP_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Sniper (Winter)"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_05", "Male07ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Clear","H_HelmetB_grass"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Tactical_Clear","H_HelmetB_grass"}; 
		weapons[] = {"arifle_MXM_Hamr_LP_BI_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MXM_Hamr_LP_BI_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_Carryall_mcamo";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MXM_Hamr_LP_BI_F","","acc_pointer_IR","optic_Hamr",{"30Rnd_65x39_caseless_mag",30},{},"bipod_01_F_snd"},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrier1_rgr",{{"30Rnd_65x39_caseless_mag",5,30},{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1}}},{"B_Carryall_mcamo",{}},"H_HelmetB_grass","G_Tactical_Clear",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_VAR_16_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 17"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"AfricanHead_03", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Aviator","H_HelmetB"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Aviator","H_HelmetB"}; 
		weapons[] = {"srifle_DMR_03_tan_AMS_LP_F","launch_RPG32_F","hgun_P07_F","Binocular"}; 
		respawnWeapons[] = {"srifle_DMR_03_tan_AMS_LP_F","launch_RPG32_F","hgun_P07_F","Binocular"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_khk";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"srifle_DMR_03_tan_AMS_LP_F","","acc_pointer_IR","optic_AMS_snd",{"20Rnd_762x51_Mag",20},{},"bipod_01_F_snd"},{"launch_RPG32_F","","","",{"RPG32_F",1},{},""},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"20Rnd_762x51_Mag",2,20}}},{"V_PlateCarrier1_rgr",{{"20Rnd_762x51_Mag",5,20},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_AssaultPack_khk",{{"RPG32_HE_F",2,1},{"RPG32_F",1,1}}},"H_HelmetB","G_Aviator",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_VAR_16_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 17"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"AfricanHead_03", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Aviator","H_HelmetB"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Aviator","H_HelmetB"}; 
		weapons[] = {"srifle_DMR_03_tan_AMS_LP_F","launch_RPG32_F","hgun_P07_F","Binocular"}; 
		respawnWeapons[] = {"srifle_DMR_03_tan_AMS_LP_F","launch_RPG32_F","hgun_P07_F","Binocular"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_khk";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"srifle_DMR_03_tan_AMS_LP_F","","acc_pointer_IR","optic_AMS_snd",{"20Rnd_762x51_Mag",20},{},"bipod_01_F_snd"},{"launch_RPG32_F","","","",{"RPG32_F",1},{},""},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"20Rnd_762x51_Mag",2,20}}},{"V_PlateCarrier1_rgr",{{"20Rnd_762x51_Mag",5,20},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_AssaultPack_khk",{{"RPG32_HE_F",2,1},{"RPG32_F",1,1}}},"H_HelmetB","G_Aviator",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_VAR_16_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 17"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"AfricanHead_03", "Male08ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Aviator","H_HelmetB"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Aviator","H_HelmetB"}; 
		weapons[] = {"srifle_DMR_03_tan_AMS_LP_F","launch_RPG32_F","hgun_P07_F","Binocular"}; 
		respawnWeapons[] = {"srifle_DMR_03_tan_AMS_LP_F","launch_RPG32_F","hgun_P07_F","Binocular"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_khk";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"srifle_DMR_03_tan_AMS_LP_F","","acc_pointer_IR","optic_AMS_snd",{"20Rnd_762x51_Mag",20},{},"bipod_01_F_snd"},{"launch_RPG32_F","","","",{"RPG32_F",1},{},""},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"20Rnd_762x51_Mag",2,20}}},{"V_PlateCarrier1_rgr",{{"20Rnd_762x51_Mag",5,20},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{"B_AssaultPack_khk",{{"RPG32_HE_F",2,1},{"RPG32_F",1,1}}},"H_HelmetB","G_Aviator",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_VAR_17_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 18"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_08", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetB_light_sand"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetB_light_sand"}; 
		weapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_mcamo_AA";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MXC_Holo_pointer_F","","acc_pointer_IR","optic_Holosight",{"30Rnd_65x39_caseless_mag",30},{},""},{"launch_B_Titan_F","","","",{"Titan_AA",1},{},""},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrier1_rgr",{{"30Rnd_65x39_caseless_mag",3,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1}}},{"B_AssaultPack_mcamo_AA",{{"Titan_AA",2,1}}},"H_HelmetB_light_sand","G_Combat",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_VAR_17_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 18"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_08", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetB_light_sand"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetB_light_sand"}; 
		weapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_mcamo_AA";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MXC_Holo_pointer_F","","acc_pointer_IR","optic_Holosight",{"30Rnd_65x39_caseless_mag",30},{},""},{"launch_B_Titan_F","","","",{"Titan_AA",1},{},""},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrier1_rgr",{{"30Rnd_65x39_caseless_mag",3,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1}}},{"B_AssaultPack_mcamo_AA",{{"Titan_AA",2,1}}},"H_HelmetB_light_sand","G_Combat",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_VAR_17_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 18"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_08", "Male05ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetB_light_sand"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","G_Combat","H_HelmetB_light_sand"}; 
		weapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_AssaultPack_mcamo_AA";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MXC_Holo_pointer_F","","acc_pointer_IR","optic_Holosight",{"30Rnd_65x39_caseless_mag",30},{},""},{"launch_B_Titan_F","","","",{"Titan_AA",1},{},""},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrier1_rgr",{{"30Rnd_65x39_caseless_mag",3,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1}}},{"B_AssaultPack_mcamo_AA",{{"Titan_AA",2,1}}},"H_HelmetB_light_sand","G_Combat",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_VAR_18_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 19"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_09", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles","G_Tactical_Clear","H_HelmetB"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles","G_Tactical_Clear","H_HelmetB"}; 
		weapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_UAV_01_backpack_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_ACO_pointer_F","","acc_pointer_IR","optic_Aco",{"30Rnd_65x39_caseless_mag",30},{},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30},{"HandGrenade",1,1}}},{"V_PlateCarrierSpec_rgr",{{"30Rnd_65x39_caseless_mag",7,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1}}},{"B_UAV_01_backpack_F",{}},"H_HelmetB","G_Tactical_Clear",{},{"ItemMap","B_UavTerminal","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_VAR_18_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 19"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_09", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles","G_Tactical_Clear","H_HelmetB"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles","G_Tactical_Clear","H_HelmetB"}; 
		weapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_UAV_01_backpack_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_ACO_pointer_F","","acc_pointer_IR","optic_Aco",{"30Rnd_65x39_caseless_mag",30},{},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30},{"HandGrenade",1,1}}},{"V_PlateCarrierSpec_rgr",{{"30Rnd_65x39_caseless_mag",7,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1}}},{"B_UAV_01_backpack_F",{}},"H_HelmetB","G_Tactical_Clear",{},{"ItemMap","B_UavTerminal","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_VAR_18_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 19"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_09", "Male03ENG" ,"G_NATO_default"};
		uniformClass = "U_B_CombatUniform_mcam"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles","G_Tactical_Clear","H_HelmetB"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles","G_Tactical_Clear","H_HelmetB"}; 
		weapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F"}; 
		respawnWeapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_UAV_01_backpack_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MX_ACO_pointer_F","","acc_pointer_IR","optic_Aco",{"30Rnd_65x39_caseless_mag",30},{},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30},{"HandGrenade",1,1}}},{"V_PlateCarrierSpec_rgr",{{"30Rnd_65x39_caseless_mag",7,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1}}},{"B_UAV_01_backpack_F",{}},"H_HelmetB","G_Tactical_Clear",{},{"ItemMap","B_UavTerminal","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_VAR_19_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 20"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"TanoanHead_A3_06", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "U_Rangemaster"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Tactical_Clear","H_Cap_headphones"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Tactical_Clear","H_Cap_headphones"}; 
		weapons[] = {}; 
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_Rangemaster",{{"FirstAidKit",1}}},{"V_Rangemaster_belt",{}},{},"H_Cap_headphones","G_Tactical_Clear",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_VAR_19_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 20"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"TanoanHead_A3_06", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "U_Rangemaster"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Tactical_Clear","H_Cap_headphones"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Tactical_Clear","H_Cap_headphones"}; 
		weapons[] = {}; 
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_Rangemaster",{{"FirstAidKit",1}}},{"V_Rangemaster_belt",{}},{},"H_Cap_headphones","G_Tactical_Clear",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_VAR_19_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 20"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"TanoanHead_A3_06", "Male09ENG" ,"G_NATO_default"};
		uniformClass = "U_Rangemaster"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Tactical_Clear","H_Cap_headphones"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Tactical_Clear","H_Cap_headphones"}; 
		weapons[] = {}; 
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_Rangemaster",{{"FirstAidKit",1}}},{"V_Rangemaster_belt",{}},{},"H_Cap_headphones","G_Tactical_Clear",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_VAR_20_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 21"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"PersianHead_A3_04_sa", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "U_B_HeliPilotCoveralls"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_CrewHelmetHeli_B"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_CrewHelmetHeli_B"}; 
		weapons[] = {"arifle_MXC_Holo_F"}; 
		respawnWeapons[] = {"arifle_MXC_Holo_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MXC_Holo_F","","","optic_Holosight",{"30Rnd_65x39_caseless_mag",30},{},""},{},{},{"U_B_HeliPilotCoveralls",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30},{"SmokeShellGreen",1,1},{"Chemlight_green",1,1}}},{"V_TacVest_blk",{{"30Rnd_65x39_caseless_mag",1,30},{"SmokeShellBlue",1,1},{"SmokeShellOrange",1,1},{"Chemlight_green",1,1}}},{},"H_CrewHelmetHeli_B","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_VAR_20_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 21"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"PersianHead_A3_04_sa", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "U_B_HeliPilotCoveralls"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_CrewHelmetHeli_B"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_CrewHelmetHeli_B"}; 
		weapons[] = {"arifle_MXC_Holo_F"}; 
		respawnWeapons[] = {"arifle_MXC_Holo_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MXC_Holo_F","","","optic_Holosight",{"30Rnd_65x39_caseless_mag",30},{},""},{},{},{"U_B_HeliPilotCoveralls",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30},{"SmokeShellGreen",1,1},{"Chemlight_green",1,1}}},{"V_TacVest_blk",{{"30Rnd_65x39_caseless_mag",1,30},{"SmokeShellBlue",1,1},{"SmokeShellOrange",1,1},{"Chemlight_green",1,1}}},{},"H_CrewHelmetHeli_B","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_VAR_20_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 21"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"PersianHead_A3_04_sa", "Male12ENG" ,"G_NATO_default"};
		uniformClass = "U_B_HeliPilotCoveralls"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_CrewHelmetHeli_B"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_CrewHelmetHeli_B"}; 
		weapons[] = {"arifle_MXC_Holo_F"}; 
		respawnWeapons[] = {"arifle_MXC_Holo_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"arifle_MXC_Holo_F","","","optic_Holosight",{"30Rnd_65x39_caseless_mag",30},{},""},{},{},{"U_B_HeliPilotCoveralls",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30},{"SmokeShellGreen",1,1},{"Chemlight_green",1,1}}},{"V_TacVest_blk",{{"30Rnd_65x39_caseless_mag",1,30},{"SmokeShellBlue",1,1},{"SmokeShellOrange",1,1},{"Chemlight_green",1,1}}},{},"H_CrewHelmetHeli_B","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_VAR_21_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 22"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"GreekHead_A3_09", "Male04ENG" ,"G_NATO_default"};
		uniformClass = "U_B_HeliPilotCoveralls"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_PilotHelmetHeli_B"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_PilotHelmetHeli_B"}; 
		weapons[] = {"SMG_01_Holo_F"}; 
		respawnWeapons[] = {"SMG_01_Holo_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"SMG_01_Holo_F","","","optic_Holosight_smg",{"30Rnd_45ACP_Mag_SMG_01",25},{},""},{},{},{"U_B_HeliPilotCoveralls",{{"FirstAidKit",1},{"30Rnd_45ACP_Mag_SMG_01",2,25},{"SmokeShellGreen",1,1},{"Chemlight_green",1,1}}},{"V_TacVest_blk",{{"30Rnd_45ACP_Mag_SMG_01",1,25},{"SmokeShellBlue",1,1},{"SmokeShellOrange",1,1},{"Chemlight_green",1,1}}},{},"H_PilotHelmetHeli_B","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_VAR_21_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 22"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"GreekHead_A3_09", "Male04ENG" ,"G_NATO_default"};
		uniformClass = "U_B_HeliPilotCoveralls"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_PilotHelmetHeli_B"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_PilotHelmetHeli_B"}; 
		weapons[] = {"SMG_01_Holo_F"}; 
		respawnWeapons[] = {"SMG_01_Holo_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"SMG_01_Holo_F","","","optic_Holosight_smg",{"30Rnd_45ACP_Mag_SMG_01",25},{},""},{},{},{"U_B_HeliPilotCoveralls",{{"FirstAidKit",1},{"30Rnd_45ACP_Mag_SMG_01",2,25},{"SmokeShellGreen",1,1},{"Chemlight_green",1,1}}},{"V_TacVest_blk",{{"30Rnd_45ACP_Mag_SMG_01",1,25},{"SmokeShellBlue",1,1},{"SmokeShellOrange",1,1},{"Chemlight_green",1,1}}},{},"H_PilotHelmetHeli_B","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_VAR_21_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 22"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"GreekHead_A3_09", "Male04ENG" ,"G_NATO_default"};
		uniformClass = "U_B_HeliPilotCoveralls"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_PilotHelmetHeli_B"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","H_PilotHelmetHeli_B"}; 
		weapons[] = {"SMG_01_Holo_F"}; 
		respawnWeapons[] = {"SMG_01_Holo_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"SMG_01_Holo_F","","","optic_Holosight_smg",{"30Rnd_45ACP_Mag_SMG_01",25},{},""},{},{},{"U_B_HeliPilotCoveralls",{{"FirstAidKit",1},{"30Rnd_45ACP_Mag_SMG_01",2,25},{"SmokeShellGreen",1,1},{"Chemlight_green",1,1}}},{"V_TacVest_blk",{{"30Rnd_45ACP_Mag_SMG_01",1,25},{"SmokeShellBlue",1,1},{"SmokeShellOrange",1,1},{"Chemlight_green",1,1}}},{},"H_PilotHelmetHeli_B","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_VAR_22_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 23"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"GreekHead_A3_06", "Male02ENG" ,"G_NATO_default"};
		uniformClass = "U_B_PilotCoveralls"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Combat","H_PilotHelmetFighter_B"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Combat","H_PilotHelmetFighter_B"}; 
		weapons[] = {"hgun_P07_F"}; 
		respawnWeapons[] = {"hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_PilotCoveralls",{{"FirstAidKit",1},{"16Rnd_9x21_Mag",3,17},{"SmokeShellOrange",1,1},{"Chemlight_green",2,1}}},{},{},"H_PilotHelmetFighter_B","G_Combat",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_VAR_22_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 23"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"GreekHead_A3_06", "Male02ENG" ,"G_NATO_default"};
		uniformClass = "U_B_PilotCoveralls"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Combat","H_PilotHelmetFighter_B"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Combat","H_PilotHelmetFighter_B"}; 
		weapons[] = {"hgun_P07_F"}; 
		respawnWeapons[] = {"hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_PilotCoveralls",{{"FirstAidKit",1},{"16Rnd_9x21_Mag",3,17},{"SmokeShellOrange",1,1},{"Chemlight_green",2,1}}},{},{},"H_PilotHelmetFighter_B","G_Combat",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_VAR_22_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 23"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"GreekHead_A3_06", "Male02ENG" ,"G_NATO_default"};
		uniformClass = "U_B_PilotCoveralls"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Combat","H_PilotHelmetFighter_B"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Combat","H_PilotHelmetFighter_B"}; 
		weapons[] = {"hgun_P07_F"}; 
		respawnWeapons[] = {"hgun_P07_F"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_PilotCoveralls",{{"FirstAidKit",1},{"16Rnd_9x21_Mag",3,17},{"SmokeShellOrange",1,1},{"Chemlight_green",2,1}}},{},{},"H_PilotHelmetFighter_B","G_Combat",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_US_ARMA_BASE_VAR_23_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 24"; 
		faction = "BS_O_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_04", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "U_B_HeliPilotCoveralls"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","H_HelmetCrew_B"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","H_HelmetCrew_B"}; 
		weapons[] = {}; 
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_B_HeliPilotCoveralls",{{"FirstAidKit",1}}},{"V_DeckCrew_yellow_F",{}},{},"H_HelmetCrew_B","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_US_ARMA_BASE_VAR_23_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 24"; 
		faction = "BS_B_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_04", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "U_B_HeliPilotCoveralls"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","H_HelmetCrew_B"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","H_HelmetCrew_B"}; 
		weapons[] = {}; 
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_B_HeliPilotCoveralls",{{"FirstAidKit",1}}},{"V_DeckCrew_yellow_F",{}},{},"H_HelmetCrew_B","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_US_ARMA_BASE_VAR_23_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 0; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 24"; 
		faction = "BS_I_US_ARMA_BASE"; 
		identityTypes[] = {"WhiteHead_04", "Male01ENG" ,"G_NATO_default"};
		uniformClass = "U_B_HeliPilotCoveralls"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","H_HelmetCrew_B"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","H_HelmetCrew_B"}; 
		weapons[] = {}; 
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_B_HeliPilotCoveralls",{{"FirstAidKit",1}}},{"V_DeckCrew_yellow_F",{}},{},"H_HelmetCrew_B","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	class B_Quadbike_01_F;
	class BS_B_US_ARMA_BASE_WLhhXc6IHdU:B_Quadbike_01_F {
		scope=2;
		side=1;
		faction="BS_B_US_ARMA_BASE";
		crew="BS_B_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 
	class BS_O_US_ARMA_BASE_WLhhXc6IHdU:B_Quadbike_01_F {
		scope=2;
		side=0;
		faction="BS_O_US_ARMA_BASE";
		crew="BS_O_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 
	class BS_I_US_ARMA_BASE_WLhhXc6IHdU:B_Quadbike_01_F {
		scope=2;
		side=2;
		faction="BS_I_US_ARMA_BASE";
		crew="BS_I_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 

	class B_LSV_01_armed_F;
	class BS_B_US_ARMA_BASE_k3_SDha4C58:B_LSV_01_armed_F {
		scope=2;
		side=1;
		faction="BS_B_US_ARMA_BASE";
		crew="BS_B_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_US_ARMA_BASE_Rifleman_WL",
			"BS_B_US_ARMA_BASE_Rifleman_WL",
			"BS_B_US_ARMA_BASE_Rifleman_WL",
			"BS_B_US_ARMA_BASE_Rifleman_WL",
			"BS_B_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 
	class BS_O_US_ARMA_BASE_k3_SDha4C58:B_LSV_01_armed_F {
		scope=2;
		side=0;
		faction="BS_O_US_ARMA_BASE";
		crew="BS_O_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_US_ARMA_BASE_Rifleman_WL",
			"BS_O_US_ARMA_BASE_Rifleman_WL",
			"BS_O_US_ARMA_BASE_Rifleman_WL",
			"BS_O_US_ARMA_BASE_Rifleman_WL",
			"BS_O_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 
	class BS_I_US_ARMA_BASE_k3_SDha4C58:B_LSV_01_armed_F {
		scope=2;
		side=2;
		faction="BS_I_US_ARMA_BASE";
		crew="BS_I_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_US_ARMA_BASE_Rifleman_WL",
			"BS_I_US_ARMA_BASE_Rifleman_WL",
			"BS_I_US_ARMA_BASE_Rifleman_WL",
			"BS_I_US_ARMA_BASE_Rifleman_WL",
			"BS_I_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 

	class B_MRAP_01_hmg_F;
	class BS_B_US_ARMA_BASE_v_fJaOF6kRQ:B_MRAP_01_hmg_F {
		scope=2;
		side=1;
		faction="BS_B_US_ARMA_BASE";
		crew="BS_B_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_US_ARMA_BASE_Rifleman_WL",
			"BS_B_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 
	class BS_O_US_ARMA_BASE_v_fJaOF6kRQ:B_MRAP_01_hmg_F {
		scope=2;
		side=0;
		faction="BS_O_US_ARMA_BASE";
		crew="BS_O_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_US_ARMA_BASE_Rifleman_WL",
			"BS_O_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 
	class BS_I_US_ARMA_BASE_v_fJaOF6kRQ:B_MRAP_01_hmg_F {
		scope=2;
		side=2;
		faction="BS_I_US_ARMA_BASE";
		crew="BS_I_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_US_ARMA_BASE_Rifleman_WL",
			"BS_I_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 

	class B_MRAP_01_gmg_F;
	class BS_B_US_ARMA_BASE_EkqM7Mrlzyw:B_MRAP_01_gmg_F {
		scope=2;
		side=1;
		faction="BS_B_US_ARMA_BASE";
		crew="BS_B_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_US_ARMA_BASE_Rifleman_WL",
			"BS_B_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 
	class BS_O_US_ARMA_BASE_EkqM7Mrlzyw:B_MRAP_01_gmg_F {
		scope=2;
		side=0;
		faction="BS_O_US_ARMA_BASE";
		crew="BS_O_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_US_ARMA_BASE_Rifleman_WL",
			"BS_O_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 
	class BS_I_US_ARMA_BASE_EkqM7Mrlzyw:B_MRAP_01_gmg_F {
		scope=2;
		side=2;
		faction="BS_I_US_ARMA_BASE";
		crew="BS_I_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_US_ARMA_BASE_Rifleman_WL",
			"BS_I_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 

	class B_MRAP_01_F;
	class BS_B_US_ARMA_BASE_qDXK6KDnqM4:B_MRAP_01_F {
		scope=2;
		side=1;
		faction="BS_B_US_ARMA_BASE";
		crew="BS_B_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 
	class BS_O_US_ARMA_BASE_qDXK6KDnqM4:B_MRAP_01_F {
		scope=2;
		side=0;
		faction="BS_O_US_ARMA_BASE";
		crew="BS_O_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 
	class BS_I_US_ARMA_BASE_qDXK6KDnqM4:B_MRAP_01_F {
		scope=2;
		side=2;
		faction="BS_I_US_ARMA_BASE";
		crew="BS_I_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 

	class B_Truck_01_covered_F;
	class BS_B_US_ARMA_BASE_JDDxop_SxsI:B_Truck_01_covered_F {
		scope=2;
		side=1;
		faction="BS_B_US_ARMA_BASE";
		crew="BS_B_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_US_ARMA_BASE_Rifleman_WL",
			"BS_B_US_ARMA_BASE_Rifleman_WL",
			"BS_B_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 
	class BS_O_US_ARMA_BASE_JDDxop_SxsI:B_Truck_01_covered_F {
		scope=2;
		side=0;
		faction="BS_O_US_ARMA_BASE";
		crew="BS_O_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_US_ARMA_BASE_Rifleman_WL",
			"BS_O_US_ARMA_BASE_Rifleman_WL",
			"BS_O_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 
	class BS_I_US_ARMA_BASE_JDDxop_SxsI:B_Truck_01_covered_F {
		scope=2;
		side=2;
		faction="BS_I_US_ARMA_BASE";
		crew="BS_I_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_US_ARMA_BASE_Rifleman_WL",
			"BS_I_US_ARMA_BASE_Rifleman_WL",
			"BS_I_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 

	class B_Truck_01_transport_F;
	class BS_B_US_ARMA_BASE_U9h1_Aahs5k:B_Truck_01_transport_F {
		scope=2;
		side=1;
		faction="BS_B_US_ARMA_BASE";
		crew="BS_B_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_US_ARMA_BASE_Rifleman_WL",
			"BS_B_US_ARMA_BASE_Rifleman_WL",
			"BS_B_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 
	class BS_O_US_ARMA_BASE_U9h1_Aahs5k:B_Truck_01_transport_F {
		scope=2;
		side=0;
		faction="BS_O_US_ARMA_BASE";
		crew="BS_O_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_US_ARMA_BASE_Rifleman_WL",
			"BS_O_US_ARMA_BASE_Rifleman_WL",
			"BS_O_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 
	class BS_I_US_ARMA_BASE_U9h1_Aahs5k:B_Truck_01_transport_F {
		scope=2;
		side=2;
		faction="BS_I_US_ARMA_BASE";
		crew="BS_I_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_US_ARMA_BASE_Rifleman_WL",
			"BS_I_US_ARMA_BASE_Rifleman_WL",
			"BS_I_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 

	class B_Truck_01_Repair_F;
	class BS_B_US_ARMA_BASE_JbRnWXzX3Nw:B_Truck_01_Repair_F {
		scope=2;
		side=1;
		faction="BS_B_US_ARMA_BASE";
		crew="BS_B_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 
	class BS_O_US_ARMA_BASE_JbRnWXzX3Nw:B_Truck_01_Repair_F {
		scope=2;
		side=0;
		faction="BS_O_US_ARMA_BASE";
		crew="BS_O_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 
	class BS_I_US_ARMA_BASE_JbRnWXzX3Nw:B_Truck_01_Repair_F {
		scope=2;
		side=2;
		faction="BS_I_US_ARMA_BASE";
		crew="BS_I_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 

	class B_Truck_01_flatbed_F;
	class BS_B_US_ARMA_BASE_HE2fdENdKBw:B_Truck_01_flatbed_F {
		scope=2;
		side=1;
		faction="BS_B_US_ARMA_BASE";
		crew="BS_B_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 
	class BS_O_US_ARMA_BASE_HE2fdENdKBw:B_Truck_01_flatbed_F {
		scope=2;
		side=0;
		faction="BS_O_US_ARMA_BASE";
		crew="BS_O_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 
	class BS_I_US_ARMA_BASE_HE2fdENdKBw:B_Truck_01_flatbed_F {
		scope=2;
		side=2;
		faction="BS_I_US_ARMA_BASE";
		crew="BS_I_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 

	class B_Truck_01_cargo_F;
	class BS_B_US_ARMA_BASE_WiGfT1yTw0I:B_Truck_01_cargo_F {
		scope=2;
		side=1;
		faction="BS_B_US_ARMA_BASE";
		crew="BS_B_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 
	class BS_O_US_ARMA_BASE_WiGfT1yTw0I:B_Truck_01_cargo_F {
		scope=2;
		side=0;
		faction="BS_O_US_ARMA_BASE";
		crew="BS_O_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 
	class BS_I_US_ARMA_BASE_WiGfT1yTw0I:B_Truck_01_cargo_F {
		scope=2;
		side=2;
		faction="BS_I_US_ARMA_BASE";
		crew="BS_I_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 

	class B_Boat_Transport_01_F;
	class BS_B_US_ARMA_BASE_rmh18SomIIU:B_Boat_Transport_01_F {
		scope=2;
		side=1;
		faction="BS_B_US_ARMA_BASE";
		crew="BS_B_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_US_ARMA_BASE_Rifleman_WL",
			"BS_B_US_ARMA_BASE_Rifleman_WL",
			"BS_B_US_ARMA_BASE_Rifleman_WL",
			"BS_B_US_ARMA_BASE_Rifleman_WL",
			"BS_B_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 
	class BS_O_US_ARMA_BASE_rmh18SomIIU:B_Boat_Transport_01_F {
		scope=2;
		side=0;
		faction="BS_O_US_ARMA_BASE";
		crew="BS_O_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_US_ARMA_BASE_Rifleman_WL",
			"BS_O_US_ARMA_BASE_Rifleman_WL",
			"BS_O_US_ARMA_BASE_Rifleman_WL",
			"BS_O_US_ARMA_BASE_Rifleman_WL",
			"BS_O_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 
	class BS_I_US_ARMA_BASE_rmh18SomIIU:B_Boat_Transport_01_F {
		scope=2;
		side=2;
		faction="BS_I_US_ARMA_BASE";
		crew="BS_I_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_US_ARMA_BASE_Rifleman_WL",
			"BS_I_US_ARMA_BASE_Rifleman_WL",
			"BS_I_US_ARMA_BASE_Rifleman_WL",
			"BS_I_US_ARMA_BASE_Rifleman_WL",
			"BS_I_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 

	class B_Boat_Armed_01_minigun_F;
	class BS_B_US_ARMA_BASE_mMGV8pEs_8U:B_Boat_Armed_01_minigun_F {
		scope=2;
		side=1;
		faction="BS_B_US_ARMA_BASE";
		crew="BS_B_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_US_ARMA_BASE_Rifleman_WL",
			"BS_B_US_ARMA_BASE_Rifleman_WL",
			"BS_B_US_ARMA_BASE_Rifleman_WL",
			"BS_B_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 
	class BS_O_US_ARMA_BASE_mMGV8pEs_8U:B_Boat_Armed_01_minigun_F {
		scope=2;
		side=0;
		faction="BS_O_US_ARMA_BASE";
		crew="BS_O_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_US_ARMA_BASE_Rifleman_WL",
			"BS_O_US_ARMA_BASE_Rifleman_WL",
			"BS_O_US_ARMA_BASE_Rifleman_WL",
			"BS_O_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 
	class BS_I_US_ARMA_BASE_mMGV8pEs_8U:B_Boat_Armed_01_minigun_F {
		scope=2;
		side=2;
		faction="BS_I_US_ARMA_BASE";
		crew="BS_I_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_US_ARMA_BASE_Rifleman_WL",
			"BS_I_US_ARMA_BASE_Rifleman_WL",
			"BS_I_US_ARMA_BASE_Rifleman_WL",
			"BS_I_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 

	class B_Plane_CAS_01_dynamicLoadout_F;
	class BS_B_US_ARMA_BASE_XI4tDhq8hpw:B_Plane_CAS_01_dynamicLoadout_F {
		scope=2;
		side=1;
		faction="BS_B_US_ARMA_BASE";
		crew="BS_B_US_ARMA_BASE_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_US_ARMA_BASE_DIVER_WL"
		}; 
	}; 
	class BS_O_US_ARMA_BASE_XI4tDhq8hpw:B_Plane_CAS_01_dynamicLoadout_F {
		scope=2;
		side=0;
		faction="BS_O_US_ARMA_BASE";
		crew="BS_O_US_ARMA_BASE_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_US_ARMA_BASE_DIVER_WL"
		}; 
	}; 
	class BS_I_US_ARMA_BASE_XI4tDhq8hpw:B_Plane_CAS_01_dynamicLoadout_F {
		scope=2;
		side=2;
		faction="BS_I_US_ARMA_BASE";
		crew="BS_I_US_ARMA_BASE_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_US_ARMA_BASE_DIVER_WL"
		}; 
	}; 

	class B_SDV_01_F;
	class BS_B_US_ARMA_BASE_IQ_mV01eqXg:B_SDV_01_F {
		scope=2;
		side=1;
		faction="BS_B_US_ARMA_BASE";
		crew="BS_B_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_US_ARMA_BASE_Rifleman_WL",
			"BS_B_US_ARMA_BASE_Rifleman_WL",
			"BS_B_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 
	class BS_O_US_ARMA_BASE_IQ_mV01eqXg:B_SDV_01_F {
		scope=2;
		side=0;
		faction="BS_O_US_ARMA_BASE";
		crew="BS_O_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_US_ARMA_BASE_Rifleman_WL",
			"BS_O_US_ARMA_BASE_Rifleman_WL",
			"BS_O_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 
	class BS_I_US_ARMA_BASE_IQ_mV01eqXg:B_SDV_01_F {
		scope=2;
		side=2;
		faction="BS_I_US_ARMA_BASE";
		crew="BS_I_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_US_ARMA_BASE_Rifleman_WL",
			"BS_I_US_ARMA_BASE_Rifleman_WL",
			"BS_I_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 

	class B_AFV_Wheeled_01_cannon_F;
	class BS_B_US_ARMA_BASE_nPsEONHNkLo:B_AFV_Wheeled_01_cannon_F {
		scope=2;
		side=1;
		faction="BS_B_US_ARMA_BASE";
		crew="BS_B_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_US_ARMA_BASE_Rifleman_WL",
			"BS_B_US_ARMA_BASE_Rifleman_WL",
			"BS_B_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 
	class BS_O_US_ARMA_BASE_nPsEONHNkLo:B_AFV_Wheeled_01_cannon_F {
		scope=2;
		side=0;
		faction="BS_O_US_ARMA_BASE";
		crew="BS_O_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_US_ARMA_BASE_Rifleman_WL",
			"BS_O_US_ARMA_BASE_Rifleman_WL",
			"BS_O_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 
	class BS_I_US_ARMA_BASE_nPsEONHNkLo:B_AFV_Wheeled_01_cannon_F {
		scope=2;
		side=2;
		faction="BS_I_US_ARMA_BASE";
		crew="BS_I_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_US_ARMA_BASE_Rifleman_WL",
			"BS_I_US_ARMA_BASE_Rifleman_WL",
			"BS_I_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 

	class B_AFV_Wheeled_01_up_cannon_F;
	class BS_B_US_ARMA_BASE_trX9yh_yDqs:B_AFV_Wheeled_01_up_cannon_F {
		scope=2;
		side=1;
		faction="BS_B_US_ARMA_BASE";
		crew="BS_B_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_US_ARMA_BASE_Rifleman_WL",
			"BS_B_US_ARMA_BASE_Rifleman_WL",
			"BS_B_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 
	class BS_O_US_ARMA_BASE_trX9yh_yDqs:B_AFV_Wheeled_01_up_cannon_F {
		scope=2;
		side=0;
		faction="BS_O_US_ARMA_BASE";
		crew="BS_O_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_US_ARMA_BASE_Rifleman_WL",
			"BS_O_US_ARMA_BASE_Rifleman_WL",
			"BS_O_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 
	class BS_I_US_ARMA_BASE_trX9yh_yDqs:B_AFV_Wheeled_01_up_cannon_F {
		scope=2;
		side=2;
		faction="BS_I_US_ARMA_BASE";
		crew="BS_I_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_US_ARMA_BASE_Rifleman_WL",
			"BS_I_US_ARMA_BASE_Rifleman_WL",
			"BS_I_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 

	class B_MBT_01_TUSK_F;
	class BS_B_US_ARMA_BASE_d86bpXN3qso:B_MBT_01_TUSK_F {
		scope=2;
		side=1;
		faction="BS_B_US_ARMA_BASE";
		crew="BS_B_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_US_ARMA_BASE_Rifleman_WL",
			"BS_B_US_ARMA_BASE_Rifleman_WL",
			"BS_B_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 
	class BS_O_US_ARMA_BASE_d86bpXN3qso:B_MBT_01_TUSK_F {
		scope=2;
		side=0;
		faction="BS_O_US_ARMA_BASE";
		crew="BS_O_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_US_ARMA_BASE_Rifleman_WL",
			"BS_O_US_ARMA_BASE_Rifleman_WL",
			"BS_O_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 
	class BS_I_US_ARMA_BASE_d86bpXN3qso:B_MBT_01_TUSK_F {
		scope=2;
		side=2;
		faction="BS_I_US_ARMA_BASE";
		crew="BS_I_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_US_ARMA_BASE_Rifleman_WL",
			"BS_I_US_ARMA_BASE_Rifleman_WL",
			"BS_I_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 

	class B_HMG_01_high_F;
	class BS_B_US_ARMA_BASE_t8G446lxSH4:B_HMG_01_high_F {
		scope=2;
		side=1;
		faction="BS_B_US_ARMA_BASE";
		crew="BS_B_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 
	class BS_O_US_ARMA_BASE_t8G446lxSH4:B_HMG_01_high_F {
		scope=2;
		side=0;
		faction="BS_O_US_ARMA_BASE";
		crew="BS_O_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 
	class BS_I_US_ARMA_BASE_t8G446lxSH4:B_HMG_01_high_F {
		scope=2;
		side=2;
		faction="BS_I_US_ARMA_BASE";
		crew="BS_I_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 

	class B_Mortar_01_F;
	class BS_B_US_ARMA_BASE_gdLSc7FB4Sg:B_Mortar_01_F {
		scope=2;
		side=1;
		faction="BS_B_US_ARMA_BASE";
		crew="BS_B_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 
	class BS_O_US_ARMA_BASE_gdLSc7FB4Sg:B_Mortar_01_F {
		scope=2;
		side=0;
		faction="BS_O_US_ARMA_BASE";
		crew="BS_O_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 
	class BS_I_US_ARMA_BASE_gdLSc7FB4Sg:B_Mortar_01_F {
		scope=2;
		side=2;
		faction="BS_I_US_ARMA_BASE";
		crew="BS_I_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 

	class B_SAM_System_02_F;
	class BS_B_US_ARMA_BASE_jE6O41KqVxE:B_SAM_System_02_F {
		scope=2;
		side=1;
		faction="BS_B_US_ARMA_BASE";
		crew="BS_B_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 
	class BS_O_US_ARMA_BASE_jE6O41KqVxE:B_SAM_System_02_F {
		scope=2;
		side=0;
		faction="BS_O_US_ARMA_BASE";
		crew="BS_O_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 
	class BS_I_US_ARMA_BASE_jE6O41KqVxE:B_SAM_System_02_F {
		scope=2;
		side=2;
		faction="BS_I_US_ARMA_BASE";
		crew="BS_I_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 

	class B_static_AA_F;
	class BS_B_US_ARMA_BASE_8e2pl9sdLns:B_static_AA_F {
		scope=2;
		side=1;
		faction="BS_B_US_ARMA_BASE";
		crew="BS_B_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 
	class BS_O_US_ARMA_BASE_8e2pl9sdLns:B_static_AA_F {
		scope=2;
		side=0;
		faction="BS_O_US_ARMA_BASE";
		crew="BS_O_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 
	class BS_I_US_ARMA_BASE_8e2pl9sdLns:B_static_AA_F {
		scope=2;
		side=2;
		faction="BS_I_US_ARMA_BASE";
		crew="BS_I_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 

	class B_APC_Tracked_01_AA_F;
	class BS_B_US_ARMA_BASE_rrF2geyMSnQ:B_APC_Tracked_01_AA_F {
		scope=2;
		side=1;
		faction="BS_B_US_ARMA_BASE";
		crew="BS_B_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_US_ARMA_BASE_Rifleman_WL",
			"BS_B_US_ARMA_BASE_Rifleman_WL",
			"BS_B_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 
	class BS_O_US_ARMA_BASE_rrF2geyMSnQ:B_APC_Tracked_01_AA_F {
		scope=2;
		side=0;
		faction="BS_O_US_ARMA_BASE";
		crew="BS_O_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_US_ARMA_BASE_Rifleman_WL",
			"BS_O_US_ARMA_BASE_Rifleman_WL",
			"BS_O_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 
	class BS_I_US_ARMA_BASE_rrF2geyMSnQ:B_APC_Tracked_01_AA_F {
		scope=2;
		side=2;
		faction="BS_I_US_ARMA_BASE";
		crew="BS_I_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_US_ARMA_BASE_Rifleman_WL",
			"BS_I_US_ARMA_BASE_Rifleman_WL",
			"BS_I_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 

	class B_GMG_01_F;
	class BS_B_US_ARMA_BASE_V2CrDxnuYrw:B_GMG_01_F {
		scope=2;
		side=1;
		faction="BS_B_US_ARMA_BASE";
		crew="BS_B_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_B_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 
	class BS_O_US_ARMA_BASE_V2CrDxnuYrw:B_GMG_01_F {
		scope=2;
		side=0;
		faction="BS_O_US_ARMA_BASE";
		crew="BS_O_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_O_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 
	class BS_I_US_ARMA_BASE_V2CrDxnuYrw:B_GMG_01_F {
		scope=2;
		side=2;
		faction="BS_I_US_ARMA_BASE";
		crew="BS_I_US_ARMA_BASE_Rifleman_WL";
		typicalCargo[]= { 
			"BS_I_US_ARMA_BASE_Rifleman_WL"
		}; 
	}; 
};
class CfgGroups { 
	class East { 
		class US_ARMA_BASE { 
			name="US - ARMA (BASE)";
			class Infantry {
				name="Infantry";
				class BS_O_US_ARMA_BASE_Fireteam_WL {
					name="Fireteam (Woodland)";
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					side=0;
					faction="BS_O_US_ARMA_BASE";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_GL_WL";
					};
				};
				class BS_O_US_ARMA_BASE_Squad_WL {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Squad (Woodland)";
					side=0;
					faction="BS_O_US_ARMA_BASE";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_GL_WL";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_AR_WL";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_GL_WL";
					};
				};
				class BS_O_US_ARMA_BASE_AT_WL {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Anti-Tank (Woodland)";
					side=0;
					faction="BS_O_US_ARMA_BASE";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_Rifleman_WL";
					};
				};
			};
			class Motorized {
				name="Mechanize Infantry";
				class BS_O_US_ARMA_BASE_LightVehicle_WL_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Polaris DAGOR (XM312) (Woodland)";
					side=0;
					faction="BS_O_US_ARMA_BASE";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_US_ARMA_BASE_k3_SDha4C58";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_AR_WL";
					};
				};
				class BS_O_US_ARMA_BASE_LightVehicle_WL_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="M-ATV (HMG) (Woodland)";
					side=0;
					faction="BS_O_US_ARMA_BASE";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_US_ARMA_BASE_v_fJaOF6kRQ";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_AR_WL";
					};
				};
				class BS_O_US_ARMA_BASE_LightVehicle_WL_2 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="M-ATV (GMG) (Woodland)";
					side=0;
					faction="BS_O_US_ARMA_BASE";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_US_ARMA_BASE_EkqM7Mrlzyw";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_AR_WL";
					};
				};
				class BS_O_US_ARMA_BASE_Tank_WL_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Rooikat 120 (Woodland) ";
					side=0;
					faction="BS_O_US_ARMA_BASE";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_US_ARMA_BASE_nPsEONHNkLo";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_AR_WL";
					};
				};
				class BS_O_US_ARMA_BASE_Tank_WL_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Rooikat 120 UP (Woodland) ";
					side=0;
					faction="BS_O_US_ARMA_BASE";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_US_ARMA_BASE_trX9yh_yDqs";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_AR_WL";
					};
				};
				class BS_O_US_ARMA_BASE_Tank_WL_2 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Merkava Mk IV LIC (Woodland) ";
					side=0;
					faction="BS_O_US_ARMA_BASE";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_US_ARMA_BASE_d86bpXN3qso";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_US_ARMA_BASE_AR_WL";
					};
				};
			};
		};
	};
	class Indep { 
		class US_ARMA_BASE { 
			name="US - ARMA (BASE)";
			class Infantry {
				name="Infantry";
				class BS_I_US_ARMA_BASE_Fireteam_WL {
					name="Fireteam (Woodland)";
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					side=2;
					faction="BS_I_US_ARMA_BASE";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_GL_WL";
					};
				};
				class BS_I_US_ARMA_BASE_Squad_WL {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Squad (Woodland)";
					side=2;
					faction="BS_I_US_ARMA_BASE";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_GL_WL";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_AR_WL";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_GL_WL";
					};
				};
				class BS_I_US_ARMA_BASE_AT_WL {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Anti-Tank (Woodland)";
					side=2;
					faction="BS_I_US_ARMA_BASE";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_Rifleman_WL";
					};
				};
			};
			class Motorized {
				name="Mechanize Infantry";
				class BS_I_US_ARMA_BASE_LightVehicle_WL_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Polaris DAGOR (XM312) (Woodland)";
					side=2;
					faction="BS_I_US_ARMA_BASE";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_ARMA_BASE_k3_SDha4C58";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_AR_WL";
					};
				};
				class BS_I_US_ARMA_BASE_LightVehicle_WL_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="M-ATV (HMG) (Woodland)";
					side=2;
					faction="BS_I_US_ARMA_BASE";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_ARMA_BASE_v_fJaOF6kRQ";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_AR_WL";
					};
				};
				class BS_I_US_ARMA_BASE_LightVehicle_WL_2 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="M-ATV (GMG) (Woodland)";
					side=2;
					faction="BS_I_US_ARMA_BASE";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_ARMA_BASE_EkqM7Mrlzyw";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_AR_WL";
					};
				};
				class BS_I_US_ARMA_BASE_Tank_WL_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Rooikat 120 (Woodland) ";
					side=2;
					faction="BS_I_US_ARMA_BASE";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_ARMA_BASE_nPsEONHNkLo";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_AR_WL";
					};
				};
				class BS_I_US_ARMA_BASE_Tank_WL_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Rooikat 120 UP (Woodland) ";
					side=2;
					faction="BS_I_US_ARMA_BASE";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_ARMA_BASE_trX9yh_yDqs";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_AR_WL";
					};
				};
				class BS_I_US_ARMA_BASE_Tank_WL_2 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Merkava Mk IV LIC (Woodland) ";
					side=2;
					faction="BS_I_US_ARMA_BASE";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_US_ARMA_BASE_d86bpXN3qso";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_US_ARMA_BASE_AR_WL";
					};
				};
			};
		};
	};
	class West { 
		class US_ARMA_BASE { 
			name="US - ARMA (BASE)";
			class Infantry {
				name="Infantry";
				class BS_B_US_ARMA_BASE_Fireteam_WL {
					name="Fireteam (Woodland)";
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					side=1;
					faction="BS_B_US_ARMA_BASE";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_GL_WL";
					};
				};
				class BS_B_US_ARMA_BASE_Squad_WL {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Squad (Woodland)";
					side=1;
					faction="BS_B_US_ARMA_BASE";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_GL_WL";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_AR_WL";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_GL_WL";
					};
				};
				class BS_B_US_ARMA_BASE_AT_WL {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Anti-Tank (Woodland)";
					side=1;
					faction="BS_B_US_ARMA_BASE";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_Rifleman_WL";
					};
				};
			};
			class Motorized {
				name="Mechanize Infantry";
				class BS_B_US_ARMA_BASE_LightVehicle_WL_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Polaris DAGOR (XM312) (Woodland)";
					side=1;
					faction="BS_B_US_ARMA_BASE";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_k3_SDha4C58";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_AR_WL";
					};
				};
				class BS_B_US_ARMA_BASE_LightVehicle_WL_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="M-ATV (HMG) (Woodland)";
					side=1;
					faction="BS_B_US_ARMA_BASE";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_v_fJaOF6kRQ";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_AR_WL";
					};
				};
				class BS_B_US_ARMA_BASE_LightVehicle_WL_2 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="M-ATV (GMG) (Woodland)";
					side=1;
					faction="BS_B_US_ARMA_BASE";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_EkqM7Mrlzyw";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_AR_WL";
					};
				};
				class BS_B_US_ARMA_BASE_Tank_WL_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Rooikat 120 (Woodland) ";
					side=1;
					faction="BS_B_US_ARMA_BASE";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_nPsEONHNkLo";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_AR_WL";
					};
				};
				class BS_B_US_ARMA_BASE_Tank_WL_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Rooikat 120 UP (Woodland) ";
					side=1;
					faction="BS_B_US_ARMA_BASE";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_trX9yh_yDqs";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_AR_WL";
					};
				};
				class BS_B_US_ARMA_BASE_Tank_WL_2 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Merkava Mk IV LIC (Woodland) ";
					side=1;
					faction="BS_B_US_ARMA_BASE";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_d86bpXN3qso";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_US_ARMA_BASE_AR_WL";
					};
				};
			};
		};
	};
};

class CfgPatches { 
	class bm_specops_faction_US_ARMA_BASE{
		author = "Broken Skull Mods";
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={
			"A3_Weapons_F_Rifles_MX",
			"A3_Weapons_F_Acc",
			"ace_laserpointer",
			"ace_realisticnames",
			"ace_scopes",
			"A3_Weapons_F",
			"ace_smallarms",
			"ace_ballistics",
			"A3_Weapons_F_Launchers_NLAW",
			"ace_disposable",
			"ace_nlaw",
			"ace_overpressure",
			"ace_realisticweights",
			"A3_Weapons_F_Pistols_P07",
			"A3_Characters_F",
			"A3_Weapons_F_Items",
			"ace_medical_engine",
			"ace_medical_treatment",
			"ace_attach",
			"ace_chemlights",
			"ace_nightvision",
			"A3_Weapons_F_Machineguns_Zafir",
			"A3_Weapons_F_Mark_Machineguns_Zafir",
			"cba_jam",
			"ace_overheating",
			"ace_ai",
			"A3_Characters_F_Mark",
			"A3_Weapons_F_Pistols_Pistol_Heavy_01",
			"A3_Weapons_F_Launchers_Titan",
			"ace_javelin",
			"A3_Weapons_F_SMGs_SMG_01",
			"ace_gforces",
			"ace_goggles",
			"ace_medical_vitals",
			"ace_hearing",
			"A3_Weapons_F_Mark_Rifles_MX",
			"A3_Weapons_F_Mark_Acc",
			"A3_Weapons_F_Mark_LongRangeRifles_DMR_03",
			"A3_Weapons_F_Launchers_RPG32",
			"ace_reloadlaunchers",
			"ace_optics",
			"A3_Drones_F_Weapons_F_Gamma_Items",
			"A3_Characters_F_Jets_Vests"
		};
		units[]={
			"BS_O_US_ARMA_BASE_Rifleman_WL",
			"BS_B_US_ARMA_BASE_Rifleman_WL",
			"BS_I_US_ARMA_BASE_Rifleman_WL",
			"BS_O_US_ARMA_BASE_AR_WL",
			"BS_B_US_ARMA_BASE_AR_WL",
			"BS_I_US_ARMA_BASE_AR_WL",
			"BS_O_US_ARMA_BASE_GL_WL",
			"BS_B_US_ARMA_BASE_GL_WL",
			"BS_I_US_ARMA_BASE_GL_WL",
			"BS_O_US_ARMA_BASE_Officer_WL",
			"BS_B_US_ARMA_BASE_Officer_WL",
			"BS_I_US_ARMA_BASE_Officer_WL",
			"BS_O_US_ARMA_BASE_Medic_WL",
			"BS_B_US_ARMA_BASE_Medic_WL",
			"BS_I_US_ARMA_BASE_Medic_WL",
			"BS_O_US_ARMA_BASE_RTO_WL",
			"BS_B_US_ARMA_BASE_RTO_WL",
			"BS_I_US_ARMA_BASE_RTO_WL",
			"BS_O_US_ARMA_BASE_DIVER_WL",
			"BS_B_US_ARMA_BASE_DIVER_WL",
			"BS_I_US_ARMA_BASE_DIVER_WL",
			"BS_O_US_ARMA_BASE_SNP_WL",
			"BS_B_US_ARMA_BASE_SNP_WL",
			"BS_I_US_ARMA_BASE_SNP_WL",
			"BS_O_US_ARMA_BASE_Rifleman_DT",
			"BS_B_US_ARMA_BASE_Rifleman_DT",
			"BS_I_US_ARMA_BASE_Rifleman_DT",
			"BS_O_US_ARMA_BASE_AR_DT",
			"BS_B_US_ARMA_BASE_AR_DT",
			"BS_I_US_ARMA_BASE_AR_DT",
			"BS_O_US_ARMA_BASE_GL_DT",
			"BS_B_US_ARMA_BASE_GL_DT",
			"BS_I_US_ARMA_BASE_GL_DT",
			"BS_O_US_ARMA_BASE_Officer_DT",
			"BS_B_US_ARMA_BASE_Officer_DT",
			"BS_I_US_ARMA_BASE_Officer_DT",
			"BS_O_US_ARMA_BASE_Medic_DT",
			"BS_B_US_ARMA_BASE_Medic_DT",
			"BS_I_US_ARMA_BASE_Medic_DT",
			"BS_O_US_ARMA_BASE_RTO_DT",
			"BS_B_US_ARMA_BASE_RTO_DT",
			"BS_I_US_ARMA_BASE_RTO_DT",
			"BS_O_US_ARMA_BASE_DIVER_DT",
			"BS_B_US_ARMA_BASE_DIVER_DT",
			"BS_I_US_ARMA_BASE_DIVER_DT",
			"BS_O_US_ARMA_BASE_SNP_DT",
			"BS_B_US_ARMA_BASE_SNP_DT",
			"BS_I_US_ARMA_BASE_SNP_DT",
			"BS_O_US_ARMA_BASE_Rifleman_WT",
			"BS_B_US_ARMA_BASE_Rifleman_WT",
			"BS_I_US_ARMA_BASE_Rifleman_WT",
			"BS_O_US_ARMA_BASE_AR_WT",
			"BS_B_US_ARMA_BASE_AR_WT",
			"BS_I_US_ARMA_BASE_AR_WT",
			"BS_O_US_ARMA_BASE_GL_WT",
			"BS_B_US_ARMA_BASE_GL_WT",
			"BS_I_US_ARMA_BASE_GL_WT",
			"BS_O_US_ARMA_BASE_Officer_WT",
			"BS_B_US_ARMA_BASE_Officer_WT",
			"BS_I_US_ARMA_BASE_Officer_WT",
			"BS_O_US_ARMA_BASE_Medic_WT",
			"BS_B_US_ARMA_BASE_Medic_WT",
			"BS_I_US_ARMA_BASE_Medic_WT",
			"BS_O_US_ARMA_BASE_RTO_WT",
			"BS_B_US_ARMA_BASE_RTO_WT",
			"BS_I_US_ARMA_BASE_RTO_WT",
			"BS_O_US_ARMA_BASE_DIVER_WT",
			"BS_B_US_ARMA_BASE_DIVER_WT",
			"BS_I_US_ARMA_BASE_DIVER_WT",
			"BS_O_US_ARMA_BASE_SNP_WT",
			"BS_B_US_ARMA_BASE_SNP_WT",
			"BS_I_US_ARMA_BASE_SNP_WT",
			"BS_B_US_ARMA_BASE_WLhhXc6IHdU",
			"BS_O_US_ARMA_BASE_WLhhXc6IHdU",
			"BS_I_US_ARMA_BASE_WLhhXc6IHdU",
			"BS_B_US_ARMA_BASE_k3_SDha4C58",
			"BS_O_US_ARMA_BASE_k3_SDha4C58",
			"BS_I_US_ARMA_BASE_k3_SDha4C58",
			"BS_B_US_ARMA_BASE_v_fJaOF6kRQ",
			"BS_O_US_ARMA_BASE_v_fJaOF6kRQ",
			"BS_I_US_ARMA_BASE_v_fJaOF6kRQ",
			"BS_B_US_ARMA_BASE_EkqM7Mrlzyw",
			"BS_O_US_ARMA_BASE_EkqM7Mrlzyw",
			"BS_I_US_ARMA_BASE_EkqM7Mrlzyw",
			"BS_B_US_ARMA_BASE_qDXK6KDnqM4",
			"BS_O_US_ARMA_BASE_qDXK6KDnqM4",
			"BS_I_US_ARMA_BASE_qDXK6KDnqM4",
			"BS_B_US_ARMA_BASE_JDDxop_SxsI",
			"BS_O_US_ARMA_BASE_JDDxop_SxsI",
			"BS_I_US_ARMA_BASE_JDDxop_SxsI",
			"BS_B_US_ARMA_BASE_U9h1_Aahs5k",
			"BS_O_US_ARMA_BASE_U9h1_Aahs5k",
			"BS_I_US_ARMA_BASE_U9h1_Aahs5k",
			"BS_B_US_ARMA_BASE_JbRnWXzX3Nw",
			"BS_O_US_ARMA_BASE_JbRnWXzX3Nw",
			"BS_I_US_ARMA_BASE_JbRnWXzX3Nw",
			"BS_B_US_ARMA_BASE_HE2fdENdKBw",
			"BS_O_US_ARMA_BASE_HE2fdENdKBw",
			"BS_I_US_ARMA_BASE_HE2fdENdKBw",
			"BS_B_US_ARMA_BASE_WiGfT1yTw0I",
			"BS_O_US_ARMA_BASE_WiGfT1yTw0I",
			"BS_I_US_ARMA_BASE_WiGfT1yTw0I",
			"BS_B_US_ARMA_BASE_rmh18SomIIU",
			"BS_O_US_ARMA_BASE_rmh18SomIIU",
			"BS_I_US_ARMA_BASE_rmh18SomIIU",
			"BS_B_US_ARMA_BASE_mMGV8pEs_8U",
			"BS_O_US_ARMA_BASE_mMGV8pEs_8U",
			"BS_I_US_ARMA_BASE_mMGV8pEs_8U",
			"BS_B_US_ARMA_BASE_XI4tDhq8hpw",
			"BS_O_US_ARMA_BASE_XI4tDhq8hpw",
			"BS_I_US_ARMA_BASE_XI4tDhq8hpw",
			"BS_B_US_ARMA_BASE_IQ_mV01eqXg",
			"BS_O_US_ARMA_BASE_IQ_mV01eqXg",
			"BS_I_US_ARMA_BASE_IQ_mV01eqXg",
			"BS_B_US_ARMA_BASE_nPsEONHNkLo",
			"BS_O_US_ARMA_BASE_nPsEONHNkLo",
			"BS_I_US_ARMA_BASE_nPsEONHNkLo",
			"BS_B_US_ARMA_BASE_trX9yh_yDqs",
			"BS_O_US_ARMA_BASE_trX9yh_yDqs",
			"BS_I_US_ARMA_BASE_trX9yh_yDqs",
			"BS_B_US_ARMA_BASE_d86bpXN3qso",
			"BS_O_US_ARMA_BASE_d86bpXN3qso",
			"BS_I_US_ARMA_BASE_d86bpXN3qso",
			"BS_B_US_ARMA_BASE_t8G446lxSH4",
			"BS_O_US_ARMA_BASE_t8G446lxSH4",
			"BS_I_US_ARMA_BASE_t8G446lxSH4",
			"BS_B_US_ARMA_BASE_gdLSc7FB4Sg",
			"BS_O_US_ARMA_BASE_gdLSc7FB4Sg",
			"BS_I_US_ARMA_BASE_gdLSc7FB4Sg",
			"BS_B_US_ARMA_BASE_jE6O41KqVxE",
			"BS_O_US_ARMA_BASE_jE6O41KqVxE",
			"BS_I_US_ARMA_BASE_jE6O41KqVxE",
			"BS_B_US_ARMA_BASE_8e2pl9sdLns",
			"BS_O_US_ARMA_BASE_8e2pl9sdLns",
			"BS_I_US_ARMA_BASE_8e2pl9sdLns",
			"BS_B_US_ARMA_BASE_rrF2geyMSnQ",
			"BS_O_US_ARMA_BASE_rrF2geyMSnQ",
			"BS_I_US_ARMA_BASE_rrF2geyMSnQ",
			"BS_B_US_ARMA_BASE_V2CrDxnuYrw",
			"BS_O_US_ARMA_BASE_V2CrDxnuYrw",
			"BS_I_US_ARMA_BASE_V2CrDxnuYrw"
		};
	};
};
class CfgFactionClasses {
	// As Friendly (BluFOR)
	class BS_B_US_ARMA_BASE_BASE { 
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
		brokenSkullArsenal[]={"arifle_MX_ACO_pointer_F","acc_pointer_IR","optic_Aco","30Rnd_65x39_caseless_mag","launch_NLAW_F","hgun_P07_F","16Rnd_9x21_Mag","U_B_CombatUniform_mcam","FirstAidKit","V_PlateCarrier1_rgr","SmokeShell","SmokeShellGreen","Chemlight_green","HandGrenade","H_HelmetB","ItemMap","ItemRadio","ItemCompass","ItemWatch","NVGoggles","LMG_Zafir_F","optic_Hamr","150Rnd_762x54_Box","U_B_CombatUniform_mcam_tshirt","V_PlateCarrier2_rgr","H_HelmetB_grass","arifle_MX_GL_ACO_F","1Rnd_HE_Grenade_shell","V_PlateCarrierGL_rgr","MiniGrenade","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","H_HelmetSpecB_blk","arifle_MXC_ACO_F","hgun_Pistol_heavy_01_MRD_F","optic_MRD","11Rnd_45ACP_Mag","V_BandollierB_rgr","H_MilCap_mcamo","ItemGPS","arifle_MX_pointer_F","V_PlateCarrierSpec_rgr","SmokeShellBlue","SmokeShellOrange","Medikit","H_HelmetB_light_desert","arifle_MXC_Holo_pointer_F","optic_Holosight","launch_B_Titan_short_F","Titan_AT","Titan_AP","SMG_01_Holo_F","optic_Holosight_smg","30Rnd_45ACP_Mag_SMG_01","U_B_PilotCoveralls","H_PilotHelmetFighter_B","arifle_MXM_Hamr_LP_BI_F","bipod_01_F_snd","srifle_DMR_03_tan_AMS_LP_F","optic_AMS_snd","20Rnd_762x51_Mag","launch_RPG32_F","RPG32_F","RPG32_HE_F","Binocular","launch_B_Titan_F","Titan_AA","H_HelmetB_light_sand","B_UavTerminal","U_Rangemaster","V_Rangemaster_belt","H_Cap_headphones","arifle_MXC_Holo_F","U_B_HeliPilotCoveralls","V_TacVest_blk","H_CrewHelmetHeli_B","H_PilotHelmetHeli_B","V_DeckCrew_yellow_F","H_HelmetCrew_B"};

		garage[]={{"BS_B_US_ARMA_BASE_WLhhXc6IHdU",0,100,-1},{"BS_B_US_ARMA_BASE_k3_SDha4C58",0,300,2},{"BS_B_US_ARMA_BASE_v_fJaOF6kRQ",1,600,2},{"BS_B_US_ARMA_BASE_EkqM7Mrlzyw",1,600,2},{"BS_B_US_ARMA_BASE_qDXK6KDnqM4",1,500,-1},{"BS_B_US_ARMA_BASE_JDDxop_SxsI",1,50,3},{"BS_B_US_ARMA_BASE_U9h1_Aahs5k",1,50,3},{"BS_B_US_ARMA_BASE_JbRnWXzX3Nw",1,50,-1},{"BS_B_US_ARMA_BASE_HE2fdENdKBw",1,50,-1},{"BS_B_US_ARMA_BASE_WiGfT1yTw0I",1,50,-1},{"BS_B_US_ARMA_BASE_rmh18SomIIU",0,50,-1},{"BS_B_US_ARMA_BASE_mMGV8pEs_8U",1,50,-1},{"BS_B_US_ARMA_BASE_XI4tDhq8hpw",2,2000,-1},{"BS_B_US_ARMA_BASE_IQ_mV01eqXg",1,50,-1},{"BS_B_US_ARMA_BASE_nPsEONHNkLo",2,40,1},{"BS_B_US_ARMA_BASE_trX9yh_yDqs",2,40,1},{"BS_B_US_ARMA_BASE_d86bpXN3qso",2,2500,1},{"BS_B_US_ARMA_BASE_t8G446lxSH4",0,150,-1},{"BS_B_US_ARMA_BASE_gdLSc7FB4Sg",0,200,-1},{"BS_B_US_ARMA_BASE_jE6O41KqVxE",0,150,-1},{"BS_B_US_ARMA_BASE_8e2pl9sdLns",0,150,-1},{"BS_B_US_ARMA_BASE_rrF2geyMSnQ",2,1000,0},{"BS_B_US_ARMA_BASE_V2CrDxnuYrw",0,200,-1}};
		SamSystem[]={};
		SearchLight[]={};
		StaticLowMG[]={{"BS_B_US_ARMA_BASE_V2CrDxnuYrw","XM307"}};
		StaticHighMG[]={};
		StaticMotar[]={};
		StaticAntiAir[]={};
		VehicleTechnicals[]={"BS_B_US_ARMA_BASE_k3_SDha4C58","BS_B_US_ARMA_BASE_v_fJaOF6kRQ","BS_B_US_ARMA_BASE_EkqM7Mrlzyw"};
		VehicleAntiAircraft[]={"BS_B_US_ARMA_BASE_rrF2geyMSnQ"};
		VehicleTanks[]={"BS_B_US_ARMA_BASE_nPsEONHNkLo","BS_B_US_ARMA_BASE_trX9yh_yDqs","BS_B_US_ARMA_BASE_d86bpXN3qso"};
		VehicleTransport[]={"BS_B_US_ARMA_BASE_JDDxop_SxsI","BS_B_US_ARMA_BASE_U9h1_Aahs5k"};
	};
	// As Friendly (BluFOR)
	class BS_B_US_ARMA_BASE : BS_B_US_ARMA_BASE_BASE { 
		useForSpecOps = 1;   
		displayName = "US - ARMA (BASE)";
		side = 1;       
		flag = "\A3\Data_F\Flags\flag_US_CO.paa";
		icon = "\A3\Data_F\Flags\flag_US_CO.paa";
		priority = 0; 
	};
	// As Opposite Forces (OpFOR)
	class BS_O_US_ARMA_BASE : BS_B_US_ARMA_BASE_BASE { 
		useForSpecOps = 1;
		displayName = "US - ARMA (BASE)";
		side = 0;       
		flag = "\A3\Data_F\Flags\flag_US_CO.paa";
		icon = "\A3\Data_F\Flags\flag_US_CO.paa";
		priority = 0; 
	};
	// As Independent (Independent)
	class BS_I_US_ARMA_BASE : BS_B_US_ARMA_BASE_BASE { 
		useForSpecOps = 1;
		displayName = "US - ARMA (BASE)";
		side = 2;       
		flag = "\A3\Data_F\Flags\flag_US_CO.paa";
		icon = "\A3\Data_F\Flags\flag_US_CO.paa";
		priority = 0; 
	};
};
// As Friendly (BluFOR)
class SpecOps_Module_BLUFOR_Factions { 
	class BS_B_US_ARMA_BASE { name = "US - ARMA (BASE)"; value = "BS_B_US_ARMA_BASE"; };  
};
// As Friendly (BluFOR)
class SpecOps_Module_OPFOR_Factions { 
	class BS_O_US_ARMA_BASE { name = "US - ARMA (BASE)"; value = "BS_O_US_ARMA_BASE"; };  
};
// As Friendly (BluFOR)
class SpecOps_Module_GRE_Factions { 
	class BS_I_US_ARMA_BASE { name = "US - ARMA (BASE)"; value = "BS_I_US_ARMA_BASE"; };  
};