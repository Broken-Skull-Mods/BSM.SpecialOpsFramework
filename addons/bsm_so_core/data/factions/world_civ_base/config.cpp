

class CfgVehicles {
	class C_man_1; 
	// This unit is a Civilian
	class BS_C_WORLD_CIV_BASE_COMMON_0_WL : C_man_1 {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 1; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Fixed 1"; 
		faction = "BS_C_WORLD_CIV_BASE"; 
		identityTypes[] = {"TanoanHead_A3_02", "Male03ENGB" ,"G_NATO_default"};
		uniformClass = "U_lxWS_Tak_03_C"; 
		linkedItems[] = {"ItemWatch","lxWS_H_turban_04_black"}; 
		respawnlinkedItems[] = {"ItemWatch","lxWS_H_turban_04_black"}; 
		weapons[] = {}; 
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_CivilianBackpack_01_Everyday_Black_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_lxWS_Tak_03_C",{}},{},{"B_CivilianBackpack_01_Everyday_Black_F",{}},"lxWS_H_turban_04_black","",{},{"","","","","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 3; 
	}; 

	// This unit is a Civilian
	class BS_C_WORLD_CIV_BASE_COMMON_1_WL : C_man_1 {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 1; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Fixed 2"; 
		faction = "BS_C_WORLD_CIV_BASE"; 
		identityTypes[] = {"GreekHead_A3_10_a", "Male03ENGB" ,"G_NATO_default"};
		uniformClass = "U_lxWS_C_Djella_02"; 
		linkedItems[] = {"ItemWatch","lxWS_H_cloth_5_B"}; 
		respawnlinkedItems[] = {"ItemWatch","lxWS_H_cloth_5_B"}; 
		weapons[] = {}; 
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_CivilianBackpack_01_Sport_Blue_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_lxWS_C_Djella_02",{}},{},{"B_CivilianBackpack_01_Sport_Blue_F",{}},"lxWS_H_cloth_5_B","",{},{"","","","","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 3; 
	}; 

	// This unit is a Civilian
	class BS_C_WORLD_CIV_BASE_COMMON_2_WL : C_man_1 {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 1; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Fixed 3"; 
		faction = "BS_C_WORLD_CIV_BASE"; 
		identityTypes[] = {"TanoanHead_A3_03", "Male05ENGB" ,"G_NATO_default"};
		uniformClass = "U_lxWS_C_Djella_03"; 
		linkedItems[] = {"G_Bandanna_blk","lxWS_H_cloth_5_C"}; 
		respawnlinkedItems[] = {"G_Bandanna_blk","lxWS_H_cloth_5_C"}; 
		weapons[] = {}; 
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_CivilianBackpack_01_Everyday_Astra_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_lxWS_C_Djella_03",{}},{},{"B_CivilianBackpack_01_Everyday_Astra_F",{}},"lxWS_H_cloth_5_C","G_Bandanna_blk",{},{"","","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 3; 
	}; 

	// This unit is a Civilian
	class BS_C_WORLD_CIV_BASE_COMMON_3_WL : C_man_1 {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 1; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Fixed 4"; 
		faction = "BS_C_WORLD_CIV_BASE"; 
		identityTypes[] = {"CamoHead_White_02_F", "Male02ENGB" ,"G_NATO_default"};
		uniformClass = "U_lxWS_C_Djella_05"; 
		linkedItems[] = {"G_Shades_Blue","lxWS_H_turban_03_gray"}; 
		respawnlinkedItems[] = {"G_Shades_Blue","lxWS_H_turban_03_gray"}; 
		weapons[] = {}; 
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_CivilianBackpack_01_Everyday_IDAP_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_lxWS_C_Djella_05",{}},{},{"B_CivilianBackpack_01_Everyday_IDAP_F",{}},"lxWS_H_turban_03_gray","G_Shades_Blue",{},{"","","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 3; 
	}; 

	// This unit is a Civilian
	class BS_C_WORLD_CIV_BASE_COMMON_4_WL : C_man_1 {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 1; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Fixed 5"; 
		faction = "BS_C_WORLD_CIV_BASE"; 
		identityTypes[] = {"PersianHead_A3_04_a", "Male03ENGB" ,"G_NATO_default"};
		uniformClass = "U_lxWS_Tak_01_A"; 
		linkedItems[] = {"ItemWatch","lxWS_H_cloth_5_B"}; 
		respawnlinkedItems[] = {"ItemWatch","lxWS_H_cloth_5_B"}; 
		weapons[] = {}; 
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_lxWS_Tak_01_A",{}},{},{},"lxWS_H_cloth_5_B","",{},{"","","","","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 3; 
	}; 

	// This unit is a Civilian
	class BS_C_WORLD_CIV_BASE_COMMON_5_WL : C_man_1 {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 1; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Fixed 6"; 
		faction = "BS_C_WORLD_CIV_BASE"; 
		identityTypes[] = {"CamoHead_Asian_03_F", "Male03ENGB" ,"G_NATO_default"};
		uniformClass = "U_lxWS_C_Djella_02a"; 
		linkedItems[] = {"G_Aviator","lxWS_H_turban_03_blue_una"}; 
		respawnlinkedItems[] = {"G_Aviator","lxWS_H_turban_03_blue_una"}; 
		weapons[] = {}; 
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_lxWS_C_Djella_02a",{}},{},{},"lxWS_H_turban_03_blue_una","G_Aviator",{},{"","","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 3; 
	}; 

	// This unit is a Civilian
	class BS_C_WORLD_CIV_BASE_COMMON_6_WL : C_man_1 {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 1; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Fixed 7"; 
		faction = "BS_C_WORLD_CIV_BASE"; 
		identityTypes[] = {"WhiteHead_11", "Male01ENGB" ,"G_NATO_default"};
		uniformClass = "U_lxWS_C_Djella_06"; 
		linkedItems[] = {"G_Shades_Blue","lxWS_H_turban_03_sand"}; 
		respawnlinkedItems[] = {"G_Shades_Blue","lxWS_H_turban_03_sand"}; 
		weapons[] = {}; 
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_lxWS_C_Djella_06",{}},{},{},"lxWS_H_turban_03_sand","G_Shades_Blue",{},{"","","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 3; 
	}; 

	// This unit is a Civilian
	class BS_C_WORLD_CIV_BASE_COMMON_7_WL : C_man_1 {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 1; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Fixed 8"; 
		faction = "BS_C_WORLD_CIV_BASE"; 
		identityTypes[] = {"CamoHead_Greek_07_F", "Male02ENGB" ,"G_NATO_default"};
		uniformClass = "U_lxWS_Tak_01_C"; 
		linkedItems[] = {"ItemWatch","lxWS_H_turban_04_blue"}; 
		respawnlinkedItems[] = {"ItemWatch","lxWS_H_turban_04_blue"}; 
		weapons[] = {}; 
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_CivilianBackpack_01_Everyday_Black_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_lxWS_Tak_01_C",{}},{},{"B_CivilianBackpack_01_Everyday_Black_F",{}},"lxWS_H_turban_04_blue","",{},{"","","","","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 3; 
	}; 

	// This unit is a Civilian
	class BS_C_WORLD_CIV_BASE_COMMON_8_WL : C_man_1 {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 1; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Fixed 9"; 
		faction = "BS_C_WORLD_CIV_BASE"; 
		identityTypes[] = {"CamoHead_White_04_F", "Male04ENGB" ,"G_NATO_default"};
		uniformClass = "U_lxWS_Tak_01_B"; 
		linkedItems[] = {"ItemWatch","lxWS_H_turban_01_black"}; 
		respawnlinkedItems[] = {"ItemWatch","lxWS_H_turban_01_black"}; 
		weapons[] = {}; 
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_lxWS_Tak_01_B",{}},{},{},"lxWS_H_turban_01_black","",{},{"","","","","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 3; 
	}; 

	// This unit is a Civilian
	class BS_C_WORLD_CIV_BASE_COMMON_9_WL : C_man_1 {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 1; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Fixed 10"; 
		faction = "BS_C_WORLD_CIV_BASE"; 
		identityTypes[] = {"PersianHead_A3_04_a", "Male02ENGB" ,"G_NATO_default"};
		uniformClass = "U_lxWS_C_Djella_02"; 
		linkedItems[] = {"G_Aviator","lxWS_H_turban_01_blue_una"}; 
		respawnlinkedItems[] = {"G_Aviator","lxWS_H_turban_01_blue_una"}; 
		weapons[] = {}; 
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_lxWS_C_Djella_02",{}},{},{},"lxWS_H_turban_01_blue_una","G_Aviator",{},{"","","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 3; 
	}; 

	// This unit is a Civilian
	class BS_C_WORLD_CIV_BASE_COMMON_10_WL : C_man_1 {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 1; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Fixed 11"; 
		faction = "BS_C_WORLD_CIV_BASE"; 
		identityTypes[] = {"PersianHead_A3_03", "Male03ENGB" ,"G_NATO_default"};
		uniformClass = "U_lxWS_C_Djella_06"; 
		linkedItems[] = {"G_Shades_Blue","lxWS_H_turban_02_blue"}; 
		respawnlinkedItems[] = {"G_Shades_Blue","lxWS_H_turban_02_blue"}; 
		weapons[] = {}; 
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_lxWS_C_Djella_06",{}},{},{},"lxWS_H_turban_02_blue","G_Shades_Blue",{},{"","","","","",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 3; 
	}; 

	// This unit is a Civilian
	class BS_C_WORLD_CIV_BASE_COMMON_11_WL : C_man_1 {
		author = "Special Ops Framework Team"; 
		identityFacesSpecOps[] = { 1, 1, 1, 1, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 1; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Fixed 12"; 
		faction = "BS_C_WORLD_CIV_BASE"; 
		identityTypes[] = {"WhiteHead_10", "Male02ENGB" ,"G_NATO_default"};
		uniformClass = "U_lxWS_ION_Casual2"; 
		linkedItems[] = {"ItemWatch","lxWS_H_turban_01_gray"}; 
		respawnlinkedItems[] = {"ItemWatch","lxWS_H_turban_01_gray"}; 
		weapons[] = {}; 
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "B_CivilianBackpack_01_Everyday_Black_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_lxWS_ION_Casual2",{}},{},{"B_CivilianBackpack_01_Everyday_Black_F",{}},"lxWS_H_turban_01_gray","",{},{"","","","","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 3; 
	}; 
};
class CfgPatches
{
	class bm_specops_faction_WORLD_CIV_BASE
	{
		author = "Broken Skull Mods";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"Characters_f_lxWS","Characters_f_lxWS_headgear","A3_Weapons_F"};
	};
};
class CfgFactionClasses {
	// As Friendly (BluFOR)
	class BS_C_WORLD_CIV_BASE_BASE { 
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
		brokenSkullArsenal[]={"U_lxWS_Tak_03_C","lxWS_H_turban_04_black","ItemWatch","U_lxWS_C_Djella_02","lxWS_H_cloth_5_B","U_lxWS_C_Djella_03","lxWS_H_cloth_5_C","U_lxWS_C_Djella_05","lxWS_H_turban_03_gray","U_lxWS_Tak_01_A","U_lxWS_C_Djella_02a","lxWS_H_turban_03_blue_una","U_lxWS_C_Djella_06","lxWS_H_turban_03_sand","U_lxWS_Tak_01_C","lxWS_H_turban_04_blue","U_lxWS_Tak_01_B","lxWS_H_turban_01_black","lxWS_H_turban_01_blue_una","lxWS_H_turban_02_blue","U_lxWS_ION_Casual2","lxWS_H_turban_01_gray"};

		garage[]={{"C_Van_01_fuel_F",0,50,-1},{"C_Offroad_02_unarmed_F",0,50,-1},{"C_Truck_02_fuel_F",0,50,-1},{"C_Truck_02_box_F",0,50,-1},{"C_Truck_02_transport_F",0,50,-1},{"C_Truck_02_covered_F",0,50,-1},{"C_Van_02_medevac_F",0,50,-1},{"C_Van_02_vehicle_F",0,50,-1},{"C_Van_02_service_F",0,50,-1},{"C_Heli_Light_01_civil_F",0,10000,-1}};
	};
	class BS_C_WORLD_CIV_BASE : BS_C_WORLD_CIV_BASE_BASE { 
		useForSpecOps = 1;   
		displayName = "WORLD CIV - ARMA (BASE)";
		side = 3;       
		flag = "\A3\Data_F\Flags\flag_US_CO.paa";
		icon = "\A3\Data_F\Flags\flag_US_CO.paa";
		priority = 0; 
	};
};
	// As CIV
	class SpecOps_Module_CIV_Factions { 
		class BS_C_WORLD_CIV_BASE { name = "WORLD CIV - ARMA (BASE)"; value = "BS_C_WORLD_CIV_BASE"; };  
	};