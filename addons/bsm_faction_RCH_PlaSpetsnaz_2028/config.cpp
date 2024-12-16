

class CfgVehicles {
	class B_Survivor_F;
	class I_G_Survivor_F;
	class O_G_Survivor_F; 
	// This unit is for OpFOR
	class BS_O_RCH_PlaSpetsnaz_2028_GL_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Grenadier (Woodland)"; 
		faction = "BS_O_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_07", "Male01CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_PRS","rhs_weap_M320","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_PRS","rhs_weap_M320","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_PRS","","YL_ACC_SIDE_IR","yl_qmk201_2d",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{},{"rhs_weap_M320","","","",{"1Rnd_HE_Grenade_shell",1},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",1,30}}},{"v19_F",{{"1Rnd_HE_Grenade_shell",9,1},{"1Rnd_Smoke_Grenade_shell",5,1},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",3,30}}},{"bag19_MAJOR_F",{{"1Rnd_HE_Grenade_shell",16,1},{"1Rnd_Smoke_Grenade_shell",9,1},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",7,30}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_RCH_PlaSpetsnaz_2028_GL_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Grenadier (Woodland)"; 
		faction = "BS_B_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_07", "Male01CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_PRS","rhs_weap_M320","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_PRS","rhs_weap_M320","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_PRS","","YL_ACC_SIDE_IR","yl_qmk201_2d",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{},{"rhs_weap_M320","","","",{"1Rnd_HE_Grenade_shell",1},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",1,30}}},{"v19_F",{{"1Rnd_HE_Grenade_shell",9,1},{"1Rnd_Smoke_Grenade_shell",5,1},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",3,30}}},{"bag19_MAJOR_F",{{"1Rnd_HE_Grenade_shell",16,1},{"1Rnd_Smoke_Grenade_shell",9,1},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",7,30}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_RCH_PlaSpetsnaz_2028_GL_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Grenadier (Woodland)"; 
		faction = "BS_I_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_07", "Male01CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_PRS","rhs_weap_M320","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_PRS","rhs_weap_M320","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_PRS","","YL_ACC_SIDE_IR","yl_qmk201_2d",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{},{"rhs_weap_M320","","","",{"1Rnd_HE_Grenade_shell",1},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",1,30}}},{"v19_F",{{"1Rnd_HE_Grenade_shell",9,1},{"1Rnd_Smoke_Grenade_shell",5,1},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",3,30}}},{"bag19_MAJOR_F",{{"1Rnd_HE_Grenade_shell",16,1},{"1Rnd_Smoke_Grenade_shell",9,1},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",7,30}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_RCH_PlaSpetsnaz_2028_AR_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 8; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Machine Gunner (Woodland)"; 
		faction = "BS_O_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male02RUS" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QJY201","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QJY201","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QJY201","","","YL_lpvo_8x_02",{"Tier1_250Rnd_762x51_Belt_M61_AP",250},{},""},{},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"v19_F",{{"Tier1_250Rnd_762x51_Belt_M61_AP",1,250}}},{"bag19_MAJOR_F",{{"Tier1_250Rnd_762x51_Belt_M61_AP",2,250}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_RCH_PlaSpetsnaz_2028_AR_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 8; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Machine Gunner (Woodland)"; 
		faction = "BS_B_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male02RUS" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QJY201","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QJY201","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QJY201","","","YL_lpvo_8x_02",{"Tier1_250Rnd_762x51_Belt_M61_AP",250},{},""},{},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"v19_F",{{"Tier1_250Rnd_762x51_Belt_M61_AP",1,250}}},{"bag19_MAJOR_F",{{"Tier1_250Rnd_762x51_Belt_M61_AP",2,250}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_RCH_PlaSpetsnaz_2028_AR_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 8; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Machine Gunner (Woodland)"; 
		faction = "BS_I_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"AsianHead_A3_01", "Male02RUS" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QJY201","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QJY201","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QJY201","","","YL_lpvo_8x_02",{"Tier1_250Rnd_762x51_Belt_M61_AP",250},{},""},{},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"v19_F",{{"Tier1_250Rnd_762x51_Belt_M61_AP",1,250}}},{"bag19_MAJOR_F",{{"Tier1_250Rnd_762x51_Belt_M61_AP",2,250}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_RCH_PlaSpetsnaz_2028_Medic_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Doctor (Woodland)"; 
		faction = "BS_O_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_10", "Male01CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_PRS","","YL_ACC_SIDE_IR","HOLOSUN_510C_B_3XUP_2D",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"kat_accuvac",1},{"kat_stethoscope",1}}},{"v19_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",10,30}}},{"bag19_MAJOR_F",{{"ACE_adenosine",1},{"ACE_elasticBandage",12},{"ACE_packingBandage",12},{"ACE_quikclot",12},{"ACE_morphine",3},{"ACE_epinephrine",3},{"ACE_plasmaIV",2},{"ACE_plasmaIV_500",4},{"ACE_splint",1},{"ACE_suture",9},{"ACE_tourniquet",3},{"kat_larynx",4},{"kat_naloxone",1},{"kat_IO_FAST",5},{"kat_ncdKit",1},{"kat_aatKit",9},{"kat_chestSeal",4},{"kat_Pulseoximeter",2},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",3,30}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_RCH_PlaSpetsnaz_2028_Medic_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Doctor (Woodland)"; 
		faction = "BS_B_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_10", "Male01CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_PRS","","YL_ACC_SIDE_IR","HOLOSUN_510C_B_3XUP_2D",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"kat_accuvac",1},{"kat_stethoscope",1}}},{"v19_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",10,30}}},{"bag19_MAJOR_F",{{"ACE_adenosine",1},{"ACE_elasticBandage",12},{"ACE_packingBandage",12},{"ACE_quikclot",12},{"ACE_morphine",3},{"ACE_epinephrine",3},{"ACE_plasmaIV",2},{"ACE_plasmaIV_500",4},{"ACE_splint",1},{"ACE_suture",9},{"ACE_tourniquet",3},{"kat_larynx",4},{"kat_naloxone",1},{"kat_IO_FAST",5},{"kat_ncdKit",1},{"kat_aatKit",9},{"kat_chestSeal",4},{"kat_Pulseoximeter",2},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",3,30}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_RCH_PlaSpetsnaz_2028_Medic_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Doctor (Woodland)"; 
		faction = "BS_I_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_10", "Male01CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_PRS","","YL_ACC_SIDE_IR","HOLOSUN_510C_B_3XUP_2D",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"kat_accuvac",1},{"kat_stethoscope",1}}},{"v19_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",10,30}}},{"bag19_MAJOR_F",{{"ACE_adenosine",1},{"ACE_elasticBandage",12},{"ACE_packingBandage",12},{"ACE_quikclot",12},{"ACE_morphine",3},{"ACE_epinephrine",3},{"ACE_plasmaIV",2},{"ACE_plasmaIV_500",4},{"ACE_splint",1},{"ACE_suture",9},{"ACE_tourniquet",3},{"kat_larynx",4},{"kat_naloxone",1},{"kat_IO_FAST",5},{"kat_ncdKit",1},{"kat_aatKit",9},{"kat_chestSeal",4},{"kat_Pulseoximeter",2},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",3,30}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_RCH_PlaSpetsnaz_2028_SNP_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 8; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Sniper (Woodland)"; 
		faction = "BS_O_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_19", "Male03RUS" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_BOLT","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_BOLT","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_BOLT","","","VME_QBU88_Scope",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",1,30}}},{"v19_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",10,30}}},{"bag19_MAJOR_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",9,30}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_RCH_PlaSpetsnaz_2028_SNP_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 8; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Sniper (Woodland)"; 
		faction = "BS_B_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_19", "Male03RUS" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_BOLT","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_BOLT","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_BOLT","","","VME_QBU88_Scope",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",1,30}}},{"v19_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",10,30}}},{"bag19_MAJOR_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",9,30}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_RCH_PlaSpetsnaz_2028_SNP_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 8; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Sniper (Woodland)"; 
		faction = "BS_I_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_19", "Male03RUS" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_BOLT","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_BOLT","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_BOLT","","","VME_QBU88_Scope",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",1,30}}},{"v19_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",10,30}}},{"bag19_MAJOR_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",9,30}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_RCH_PlaSpetsnaz_2028_Rifleman_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Rifleman (Woodland)"; 
		faction = "BS_O_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_12", "Male03CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_PRS","","YL_ACC_SIDE_IR","yl_qmk201_2d",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",1,30}}},{"v19_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",10,30}}},{"bag19_MAJOR_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",19,30}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_RCH_PlaSpetsnaz_2028_Rifleman_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Rifleman (Woodland)"; 
		faction = "BS_B_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_12", "Male03CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_PRS","","YL_ACC_SIDE_IR","yl_qmk201_2d",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",1,30}}},{"v19_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",10,30}}},{"bag19_MAJOR_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",19,30}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_RCH_PlaSpetsnaz_2028_Rifleman_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Rifleman (Woodland)"; 
		faction = "BS_I_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_12", "Male03CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_PRS","","YL_ACC_SIDE_IR","yl_qmk201_2d",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",1,30}}},{"v19_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",10,30}}},{"bag19_MAJOR_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",19,30}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_RCH_PlaSpetsnaz_2028_RTO_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Anti-Tank (Woodland)"; 
		faction = "BS_O_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_12", "Male03CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_PRS","rhs_weap_rpg7","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_PRS","rhs_weap_rpg7","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_PRS","","YL_ACC_SIDE_IR","YL_qmk191",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{"rhs_weap_rpg7","","","rhs_acc_1pn93_1",{"rhs_rpg7_PG7VL_mag",1},{},""},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",1,30}}},{"v19_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",10,30}}},{"bag19_MAJOR_F",{{"rhs_rpg7_PG7VL_mag",3,1},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",6,30}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_RCH_PlaSpetsnaz_2028_RTO_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Anti-Tank (Woodland)"; 
		faction = "BS_B_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_12", "Male03CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_PRS","rhs_weap_rpg7","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_PRS","rhs_weap_rpg7","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_PRS","","YL_ACC_SIDE_IR","YL_qmk191",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{"rhs_weap_rpg7","","","rhs_acc_1pn93_1",{"rhs_rpg7_PG7VL_mag",1},{},""},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",1,30}}},{"v19_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",10,30}}},{"bag19_MAJOR_F",{{"rhs_rpg7_PG7VL_mag",3,1},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",6,30}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_RCH_PlaSpetsnaz_2028_RTO_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Anti-Tank (Woodland)"; 
		faction = "BS_I_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_12", "Male03CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_PRS","rhs_weap_rpg7","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_PRS","rhs_weap_rpg7","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_PRS","","YL_ACC_SIDE_IR","YL_qmk191",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{"rhs_weap_rpg7","","","rhs_acc_1pn93_1",{"rhs_rpg7_PG7VL_mag",1},{},""},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",1,30}}},{"v19_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",10,30}}},{"bag19_MAJOR_F",{{"rhs_rpg7_PG7VL_mag",3,1},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",6,30}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_RCH_PlaSpetsnaz_2028_VAR_0_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 1"; 
		faction = "BS_O_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_20", "Male02CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191","launch_RPG7_F","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191","launch_RPG7_F","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191","yl_muzzle_snds_191","YL_ACC_SIDE_IR","HOLOSUN_510C_B_3XUP",{"YL_30rnd_58x42_DBP10A_Mag_MY",30},{},"yl_191_bipod"},{"launch_RPG7_F","","","rhs_acc_1pn93_1",{"rhs_rpg7_OG7V_mag",1},{},""},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{}},{"v19_F",{}},{"bag19_MAJOR_F",{{"rhs_rpg7_OG7V_mag",1,1},{"rhs_rpg7_PG7V_mag",1,1},{"rhs_rpg7_PG7VM_mag",1,1},{"RPG7_F",1,1}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_RCH_PlaSpetsnaz_2028_VAR_0_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 1"; 
		faction = "BS_B_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_20", "Male02CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191","launch_RPG7_F","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191","launch_RPG7_F","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191","yl_muzzle_snds_191","YL_ACC_SIDE_IR","HOLOSUN_510C_B_3XUP",{"YL_30rnd_58x42_DBP10A_Mag_MY",30},{},"yl_191_bipod"},{"launch_RPG7_F","","","rhs_acc_1pn93_1",{"rhs_rpg7_OG7V_mag",1},{},""},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{}},{"v19_F",{}},{"bag19_MAJOR_F",{{"rhs_rpg7_OG7V_mag",1,1},{"rhs_rpg7_PG7V_mag",1,1},{"rhs_rpg7_PG7VM_mag",1,1},{"RPG7_F",1,1}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_RCH_PlaSpetsnaz_2028_VAR_0_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 1"; 
		faction = "BS_I_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_20", "Male02CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191","launch_RPG7_F","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191","launch_RPG7_F","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191","yl_muzzle_snds_191","YL_ACC_SIDE_IR","HOLOSUN_510C_B_3XUP",{"YL_30rnd_58x42_DBP10A_Mag_MY",30},{},"yl_191_bipod"},{"launch_RPG7_F","","","rhs_acc_1pn93_1",{"rhs_rpg7_OG7V_mag",1},{},""},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{}},{"v19_F",{}},{"bag19_MAJOR_F",{{"rhs_rpg7_OG7V_mag",1,1},{"rhs_rpg7_PG7V_mag",1,1},{"rhs_rpg7_PG7VM_mag",1,1},{"RPG7_F",1,1}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_RCH_PlaSpetsnaz_2028_VAR_1_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 2"; 
		faction = "BS_O_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_14", "Male02CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191","launch_RPG7_F","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191","launch_RPG7_F","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191","Byonet_95_F","YL_ACC_IR","YL_lpvo_8x",{"YL_30rnd_58x42_DBP10A_N_Mag_MY",30},{},"yl_191_bipod"},{"launch_RPG7_F","","","rhs_acc_1pn93_1",{"rhs_rpg7_TBG7V_mag",1},{},""},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{}},{"v19_F",{}},{"bag19_MAJOR_F",{{"rhs_rpg7_type69_airburst_mag",1,1},{"rhs_rpg7_PG7VS_mag",1,1},{"rhs_rpg7_PG7VR_mag",1,1}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_RCH_PlaSpetsnaz_2028_VAR_1_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 2"; 
		faction = "BS_B_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_14", "Male02CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191","launch_RPG7_F","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191","launch_RPG7_F","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191","Byonet_95_F","YL_ACC_IR","YL_lpvo_8x",{"YL_30rnd_58x42_DBP10A_N_Mag_MY",30},{},"yl_191_bipod"},{"launch_RPG7_F","","","rhs_acc_1pn93_1",{"rhs_rpg7_TBG7V_mag",1},{},""},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{}},{"v19_F",{}},{"bag19_MAJOR_F",{{"rhs_rpg7_type69_airburst_mag",1,1},{"rhs_rpg7_PG7VS_mag",1,1},{"rhs_rpg7_PG7VR_mag",1,1}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_RCH_PlaSpetsnaz_2028_VAR_1_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 2"; 
		faction = "BS_I_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_14", "Male02CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191","launch_RPG7_F","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191","launch_RPG7_F","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191","Byonet_95_F","YL_ACC_IR","YL_lpvo_8x",{"YL_30rnd_58x42_DBP10A_N_Mag_MY",30},{},"yl_191_bipod"},{"launch_RPG7_F","","","rhs_acc_1pn93_1",{"rhs_rpg7_TBG7V_mag",1},{},""},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{}},{"v19_F",{}},{"bag19_MAJOR_F",{{"rhs_rpg7_type69_airburst_mag",1,1},{"rhs_rpg7_PG7VS_mag",1,1},{"rhs_rpg7_PG7VR_mag",1,1}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_RCH_PlaSpetsnaz_2028_VAR_2_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 3"; 
		faction = "BS_O_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_13", "Male02CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "VestBag_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_PRS","","YL_ACC_SIDE_IR","optic_QLU11",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{}},{"v19_rHvy_F",{}},{"VestBag_F",{}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_RCH_PlaSpetsnaz_2028_VAR_2_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 3"; 
		faction = "BS_B_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_13", "Male02CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "VestBag_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_PRS","","YL_ACC_SIDE_IR","optic_QLU11",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{}},{"v19_rHvy_F",{}},{"VestBag_F",{}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_RCH_PlaSpetsnaz_2028_VAR_2_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WL"; 
		displayName = "Variant 3"; 
		faction = "BS_I_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_13", "Male02CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "VestBag_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_PRS","","YL_ACC_SIDE_IR","optic_QLU11",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{}},{"v19_rHvy_F",{}},{"VestBag_F",{}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_RCH_PlaSpetsnaz_2028_Officer_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Officer (Woodland)"; 
		faction = "BS_O_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_19", "Male02CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","rhs_beret_milp"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","rhs_beret_milp"}; 
		weapons[] = {"yl_92a_SW_PA_bctriwpn","ACE_Vector"}; 
		respawnWeapons[] = {"yl_92a_SW_PA_bctriwpn","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"yl_92a_SW_PA_bctriwpn","YL_92a_Silencer_SW","YL_qsz92_lssd_laser_IR","HOLOSUN_510C_B",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{}},{"v19_F",{}},{},"rhs_beret_milp","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_RCH_PlaSpetsnaz_2028_Officer_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Officer (Woodland)"; 
		faction = "BS_B_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_19", "Male02CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","rhs_beret_milp"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","rhs_beret_milp"}; 
		weapons[] = {"yl_92a_SW_PA_bctriwpn","ACE_Vector"}; 
		respawnWeapons[] = {"yl_92a_SW_PA_bctriwpn","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"yl_92a_SW_PA_bctriwpn","YL_92a_Silencer_SW","YL_qsz92_lssd_laser_IR","HOLOSUN_510C_B",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{}},{"v19_F",{}},{},"rhs_beret_milp","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_RCH_PlaSpetsnaz_2028_Officer_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Officer (Woodland)"; 
		faction = "BS_I_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_19", "Male02CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","rhs_beret_milp"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","rhs_beret_milp"}; 
		weapons[] = {"yl_92a_SW_PA_bctriwpn","ACE_Vector"}; 
		respawnWeapons[] = {"yl_92a_SW_PA_bctriwpn","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"yl_92a_SW_PA_bctriwpn","YL_92a_Silencer_SW","YL_qsz92_lssd_laser_IR","HOLOSUN_510C_B",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{}},{"v19_F",{}},{},"rhs_beret_milp","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Special (Woodland)"; 
		faction = "BS_O_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_02", "Male01CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","rhs_zsh7a_mike_green_alt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","rhs_zsh7a_mike_green_alt"}; 
		weapons[] = {"yl_92a_SW_PA_bctriwpn","ACE_Vector"}; 
		respawnWeapons[] = {"yl_92a_SW_PA_bctriwpn","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"yl_92a_SW_PA_bctriwpn","YL_92a_Silencer_SW","YL_qsz92_lssd_laser_IR","HOLOSUN_510C_B",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"v19_F",{}},{},"rhs_zsh7a_mike_green_alt","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Special (Woodland)"; 
		faction = "BS_B_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_02", "Male01CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","rhs_zsh7a_mike_green_alt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","rhs_zsh7a_mike_green_alt"}; 
		weapons[] = {"yl_92a_SW_PA_bctriwpn","ACE_Vector"}; 
		respawnWeapons[] = {"yl_92a_SW_PA_bctriwpn","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"yl_92a_SW_PA_bctriwpn","YL_92a_Silencer_SW","YL_qsz92_lssd_laser_IR","HOLOSUN_510C_B",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"v19_F",{}},{},"rhs_zsh7a_mike_green_alt","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Woodland";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 2; 
		scopeCurator = 2; 
		bsCamo = "WL"; 
		displayName = "Special (Woodland)"; 
		faction = "BS_I_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_02", "Male01CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","rhs_zsh7a_mike_green_alt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","rhs_zsh7a_mike_green_alt"}; 
		weapons[] = {"yl_92a_SW_PA_bctriwpn","ACE_Vector"}; 
		respawnWeapons[] = {"yl_92a_SW_PA_bctriwpn","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"yl_92a_SW_PA_bctriwpn","YL_92a_Silencer_SW","YL_qsz92_lssd_laser_IR","HOLOSUN_510C_B",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"v19_F",{}},{},"rhs_zsh7a_mike_green_alt","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_RCH_PlaSpetsnaz_2028_GL_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Grenadier (Desert)"; 
		faction = "BS_O_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_21", "Male02CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_PRS","rhs_weap_M320","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_PRS","rhs_weap_M320","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_PRS","","YL_ACC_SIDE_IR","yl_qmk201_2d",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{},{"rhs_weap_M320","","","",{"1Rnd_HE_Grenade_shell",1},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",1,30}}},{"v19_F",{{"1Rnd_HE_Grenade_shell",9,1},{"1Rnd_Smoke_Grenade_shell",5,1},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",3,30}}},{"bag19_MAJOR_F",{{"1Rnd_HE_Grenade_shell",16,1},{"1Rnd_Smoke_Grenade_shell",9,1},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",7,30}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_RCH_PlaSpetsnaz_2028_GL_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Grenadier (Desert)"; 
		faction = "BS_B_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_21", "Male02CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_PRS","rhs_weap_M320","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_PRS","rhs_weap_M320","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_PRS","","YL_ACC_SIDE_IR","yl_qmk201_2d",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{},{"rhs_weap_M320","","","",{"1Rnd_HE_Grenade_shell",1},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",1,30}}},{"v19_F",{{"1Rnd_HE_Grenade_shell",9,1},{"1Rnd_Smoke_Grenade_shell",5,1},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",3,30}}},{"bag19_MAJOR_F",{{"1Rnd_HE_Grenade_shell",16,1},{"1Rnd_Smoke_Grenade_shell",9,1},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",7,30}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_RCH_PlaSpetsnaz_2028_GL_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Grenadier (Desert)"; 
		faction = "BS_I_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_21", "Male02CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_PRS","rhs_weap_M320","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_PRS","rhs_weap_M320","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_PRS","","YL_ACC_SIDE_IR","yl_qmk201_2d",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{},{"rhs_weap_M320","","","",{"1Rnd_HE_Grenade_shell",1},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",1,30}}},{"v19_F",{{"1Rnd_HE_Grenade_shell",9,1},{"1Rnd_Smoke_Grenade_shell",5,1},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",3,30}}},{"bag19_MAJOR_F",{{"1Rnd_HE_Grenade_shell",16,1},{"1Rnd_Smoke_Grenade_shell",9,1},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",7,30}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_RCH_PlaSpetsnaz_2028_AR_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 8; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Machine Gunner (Desert)"; 
		faction = "BS_O_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_16", "Male02RUS" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QJY201","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QJY201","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QJY201","","","YL_lpvo_8x_02",{"Tier1_250Rnd_762x51_Belt_M61_AP",250},{},""},{},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"v19_F",{{"Tier1_250Rnd_762x51_Belt_M61_AP",1,250}}},{"bag19_MAJOR_F",{{"Tier1_250Rnd_762x51_Belt_M61_AP",2,250}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_RCH_PlaSpetsnaz_2028_AR_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 8; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Machine Gunner (Desert)"; 
		faction = "BS_B_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_16", "Male02RUS" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QJY201","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QJY201","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QJY201","","","YL_lpvo_8x_02",{"Tier1_250Rnd_762x51_Belt_M61_AP",250},{},""},{},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"v19_F",{{"Tier1_250Rnd_762x51_Belt_M61_AP",1,250}}},{"bag19_MAJOR_F",{{"Tier1_250Rnd_762x51_Belt_M61_AP",2,250}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_RCH_PlaSpetsnaz_2028_AR_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 8; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Machine Gunner (Desert)"; 
		faction = "BS_I_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_16", "Male02RUS" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QJY201","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QJY201","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QJY201","","","YL_lpvo_8x_02",{"Tier1_250Rnd_762x51_Belt_M61_AP",250},{},""},{},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"v19_F",{{"Tier1_250Rnd_762x51_Belt_M61_AP",1,250}}},{"bag19_MAJOR_F",{{"Tier1_250Rnd_762x51_Belt_M61_AP",2,250}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_RCH_PlaSpetsnaz_2028_Medic_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Doctor (Desert)"; 
		faction = "BS_O_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male03CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_PRS","","YL_ACC_SIDE_IR","HOLOSUN_510C_B_3XUP_2D",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"kat_accuvac",1},{"kat_stethoscope",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"v19_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",10,30}}},{"bag19_MAJOR_F",{{"ACE_adenosine",1},{"ACE_elasticBandage",12},{"ACE_packingBandage",12},{"ACE_quikclot",12},{"ACE_morphine",3},{"ACE_epinephrine",3},{"ACE_plasmaIV",2},{"ACE_plasmaIV_500",4},{"ACE_splint",1},{"ACE_suture",9},{"ACE_tourniquet",3},{"kat_larynx",4},{"kat_naloxone",1},{"kat_IO_FAST",5},{"kat_ncdKit",1},{"kat_aatKit",9},{"kat_chestSeal",4},{"kat_Pulseoximeter",2},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",3,30}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_RCH_PlaSpetsnaz_2028_Medic_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Doctor (Desert)"; 
		faction = "BS_B_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male03CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_PRS","","YL_ACC_SIDE_IR","HOLOSUN_510C_B_3XUP_2D",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"kat_accuvac",1},{"kat_stethoscope",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"v19_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",10,30}}},{"bag19_MAJOR_F",{{"ACE_adenosine",1},{"ACE_elasticBandage",12},{"ACE_packingBandage",12},{"ACE_quikclot",12},{"ACE_morphine",3},{"ACE_epinephrine",3},{"ACE_plasmaIV",2},{"ACE_plasmaIV_500",4},{"ACE_splint",1},{"ACE_suture",9},{"ACE_tourniquet",3},{"kat_larynx",4},{"kat_naloxone",1},{"kat_IO_FAST",5},{"kat_ncdKit",1},{"kat_aatKit",9},{"kat_chestSeal",4},{"kat_Pulseoximeter",2},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",3,30}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_RCH_PlaSpetsnaz_2028_Medic_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Doctor (Desert)"; 
		faction = "BS_I_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male03CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_PRS","","YL_ACC_SIDE_IR","HOLOSUN_510C_B_3XUP_2D",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"kat_accuvac",1},{"kat_stethoscope",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"v19_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",10,30}}},{"bag19_MAJOR_F",{{"ACE_adenosine",1},{"ACE_elasticBandage",12},{"ACE_packingBandage",12},{"ACE_quikclot",12},{"ACE_morphine",3},{"ACE_epinephrine",3},{"ACE_plasmaIV",2},{"ACE_plasmaIV_500",4},{"ACE_splint",1},{"ACE_suture",9},{"ACE_tourniquet",3},{"kat_larynx",4},{"kat_naloxone",1},{"kat_IO_FAST",5},{"kat_ncdKit",1},{"kat_aatKit",9},{"kat_chestSeal",4},{"kat_Pulseoximeter",2},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",3,30}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_RCH_PlaSpetsnaz_2028_SNP_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 8; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Sniper (Desert)"; 
		faction = "BS_O_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_07", "Male03RUS" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_BOLT","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_BOLT","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_BOLT","","","VME_QBU88_Scope",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",1,30}}},{"v19_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",10,30}}},{"bag19_MAJOR_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",20,30}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_RCH_PlaSpetsnaz_2028_SNP_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 8; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Sniper (Desert)"; 
		faction = "BS_B_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_07", "Male03RUS" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_BOLT","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_BOLT","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_BOLT","","","VME_QBU88_Scope",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",1,30}}},{"v19_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",10,30}}},{"bag19_MAJOR_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",20,30}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_RCH_PlaSpetsnaz_2028_SNP_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 8; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Sniper (Desert)"; 
		faction = "BS_I_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_07", "Male03RUS" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_BOLT","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_BOLT","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_BOLT","","","VME_QBU88_Scope",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",1,30}}},{"v19_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",10,30}}},{"bag19_MAJOR_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",20,30}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_RCH_PlaSpetsnaz_2028_Rifleman_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Rifleman (Desert)"; 
		faction = "BS_O_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"AsianHead_A3_03", "Male02CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_PRS","","YL_ACC_SIDE_IR","yl_qmk201_2d",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",1,30}}},{"v19_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",10,30}}},{"bag19_MAJOR_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",20,30}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_RCH_PlaSpetsnaz_2028_Rifleman_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Rifleman (Desert)"; 
		faction = "BS_B_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"AsianHead_A3_03", "Male02CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_PRS","","YL_ACC_SIDE_IR","yl_qmk201_2d",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",1,30}}},{"v19_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",10,30}}},{"bag19_MAJOR_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",20,30}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_RCH_PlaSpetsnaz_2028_Rifleman_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Rifleman (Desert)"; 
		faction = "BS_I_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"AsianHead_A3_03", "Male02CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_PRS","","YL_ACC_SIDE_IR","yl_qmk201_2d",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",1,30}}},{"v19_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",10,30}}},{"bag19_MAJOR_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",20,30}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_RCH_PlaSpetsnaz_2028_RTO_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Anti-Tank (Desert)"; 
		faction = "BS_O_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_07", "Male01CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_PRS","rhs_weap_rpg7","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_PRS","rhs_weap_rpg7","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_PRS","","YL_ACC_SIDE_IR","YL_qmk191",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{"rhs_weap_rpg7","","","rhs_acc_1pn93_1",{"rhs_rpg7_PG7VL_mag",1},{},""},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",1,30}}},{"v19_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",10,30}}},{"bag19_MAJOR_F",{{"rhs_rpg7_PG7VL_mag",3,1},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",6,30}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_RCH_PlaSpetsnaz_2028_RTO_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Anti-Tank (Desert)"; 
		faction = "BS_B_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_07", "Male01CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_PRS","rhs_weap_rpg7","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_PRS","rhs_weap_rpg7","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_PRS","","YL_ACC_SIDE_IR","YL_qmk191",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{"rhs_weap_rpg7","","","rhs_acc_1pn93_1",{"rhs_rpg7_PG7VL_mag",1},{},""},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",1,30}}},{"v19_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",10,30}}},{"bag19_MAJOR_F",{{"rhs_rpg7_PG7VL_mag",3,1},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",6,30}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_RCH_PlaSpetsnaz_2028_RTO_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Anti-Tank (Desert)"; 
		faction = "BS_I_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_07", "Male01CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_PRS","rhs_weap_rpg7","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_PRS","rhs_weap_rpg7","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_PRS","","YL_ACC_SIDE_IR","YL_qmk191",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{"rhs_weap_rpg7","","","rhs_acc_1pn93_1",{"rhs_rpg7_PG7VL_mag",1},{},""},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",1,30}}},{"v19_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",10,30}}},{"bag19_MAJOR_F",{{"rhs_rpg7_PG7VL_mag",3,1},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",6,30}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_RCH_PlaSpetsnaz_2028_VAR_3_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 4"; 
		faction = "BS_O_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_06", "Male01CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191","launch_RPG7_F","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191","launch_RPG7_F","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191","yl_muzzle_snds_191","YL_ACC_SIDE_IR","HOLOSUN_510C_B_3XUP",{"YL_30rnd_58x42_DBP10A_Mag_MY",30},{},"yl_191_bipod"},{"launch_RPG7_F","","","rhs_acc_1pn93_1",{"rhs_rpg7_OG7V_mag",1},{},""},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{}},{"v19_F",{}},{"bag19_MAJOR_F",{{"rhs_rpg7_OG7V_mag",1,1},{"rhs_rpg7_PG7V_mag",1,1},{"rhs_rpg7_PG7VM_mag",1,1},{"RPG7_F",1,1}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_RCH_PlaSpetsnaz_2028_VAR_3_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 4"; 
		faction = "BS_B_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_06", "Male01CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191","launch_RPG7_F","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191","launch_RPG7_F","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191","yl_muzzle_snds_191","YL_ACC_SIDE_IR","HOLOSUN_510C_B_3XUP",{"YL_30rnd_58x42_DBP10A_Mag_MY",30},{},"yl_191_bipod"},{"launch_RPG7_F","","","rhs_acc_1pn93_1",{"rhs_rpg7_OG7V_mag",1},{},""},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{}},{"v19_F",{}},{"bag19_MAJOR_F",{{"rhs_rpg7_OG7V_mag",1,1},{"rhs_rpg7_PG7V_mag",1,1},{"rhs_rpg7_PG7VM_mag",1,1},{"RPG7_F",1,1}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_RCH_PlaSpetsnaz_2028_VAR_3_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 4"; 
		faction = "BS_I_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_06", "Male01CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191","launch_RPG7_F","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191","launch_RPG7_F","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191","yl_muzzle_snds_191","YL_ACC_SIDE_IR","HOLOSUN_510C_B_3XUP",{"YL_30rnd_58x42_DBP10A_Mag_MY",30},{},"yl_191_bipod"},{"launch_RPG7_F","","","rhs_acc_1pn93_1",{"rhs_rpg7_OG7V_mag",1},{},""},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{}},{"v19_F",{}},{"bag19_MAJOR_F",{{"rhs_rpg7_OG7V_mag",1,1},{"rhs_rpg7_PG7V_mag",1,1},{"rhs_rpg7_PG7VM_mag",1,1},{"RPG7_F",1,1}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_RCH_PlaSpetsnaz_2028_VAR_4_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 5"; 
		faction = "BS_O_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_12", "Male02CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191","launch_RPG7_F","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191","launch_RPG7_F","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191","Byonet_95_F","YL_ACC_IR","YL_lpvo_8x",{"YL_30rnd_58x42_DBP10A_N_Mag_MY",30},{},"yl_191_bipod"},{"launch_RPG7_F","","","rhs_acc_1pn93_1",{"rhs_rpg7_TBG7V_mag",1},{},""},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{}},{"v19_F",{}},{"bag19_MAJOR_F",{{"rhs_rpg7_type69_airburst_mag",1,1},{"rhs_rpg7_PG7VS_mag",1,1},{"rhs_rpg7_PG7VR_mag",1,1}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_RCH_PlaSpetsnaz_2028_VAR_4_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 5"; 
		faction = "BS_B_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_12", "Male02CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191","launch_RPG7_F","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191","launch_RPG7_F","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191","Byonet_95_F","YL_ACC_IR","YL_lpvo_8x",{"YL_30rnd_58x42_DBP10A_N_Mag_MY",30},{},"yl_191_bipod"},{"launch_RPG7_F","","","rhs_acc_1pn93_1",{"rhs_rpg7_TBG7V_mag",1},{},""},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{}},{"v19_F",{}},{"bag19_MAJOR_F",{{"rhs_rpg7_type69_airburst_mag",1,1},{"rhs_rpg7_PG7VS_mag",1,1},{"rhs_rpg7_PG7VR_mag",1,1}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_RCH_PlaSpetsnaz_2028_VAR_4_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 5"; 
		faction = "BS_I_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_12", "Male02CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191","launch_RPG7_F","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191","launch_RPG7_F","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191","Byonet_95_F","YL_ACC_IR","YL_lpvo_8x",{"YL_30rnd_58x42_DBP10A_N_Mag_MY",30},{},"yl_191_bipod"},{"launch_RPG7_F","","","rhs_acc_1pn93_1",{"rhs_rpg7_TBG7V_mag",1},{},""},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{}},{"v19_F",{}},{"bag19_MAJOR_F",{{"rhs_rpg7_type69_airburst_mag",1,1},{"rhs_rpg7_PG7VS_mag",1,1},{"rhs_rpg7_PG7VR_mag",1,1}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_RCH_PlaSpetsnaz_2028_VAR_5_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 6"; 
		faction = "BS_O_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male03CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "VestBag_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_PRS","","YL_ACC_SIDE_IR","optic_QLU11",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{}},{"v19_rHvy_F",{}},{"VestBag_F",{}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_RCH_PlaSpetsnaz_2028_VAR_5_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 6"; 
		faction = "BS_B_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male03CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "VestBag_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_PRS","","YL_ACC_SIDE_IR","optic_QLU11",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{}},{"v19_rHvy_F",{}},{"VestBag_F",{}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_RCH_PlaSpetsnaz_2028_VAR_5_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Variant 6"; 
		faction = "BS_I_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"AsianHead_A3_02", "Male03CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "VestBag_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_PRS","","YL_ACC_SIDE_IR","optic_QLU11",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{}},{"v19_rHvy_F",{}},{"VestBag_F",{}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_RCH_PlaSpetsnaz_2028_Officer_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Officer (Desert)"; 
		faction = "BS_O_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_16", "Male01CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","rhs_beret_milp"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","rhs_beret_milp"}; 
		weapons[] = {"yl_92a_SW_PA_bctriwpn","ACE_Vector"}; 
		respawnWeapons[] = {"yl_92a_SW_PA_bctriwpn","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"yl_92a_SW_PA_bctriwpn","YL_92a_Silencer_SW","YL_qsz92_lssd_laser_IR","HOLOSUN_510C_B",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{}},{"v19_F",{}},{},"rhs_beret_milp","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_RCH_PlaSpetsnaz_2028_Officer_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Officer (Desert)"; 
		faction = "BS_B_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_16", "Male01CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","rhs_beret_milp"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","rhs_beret_milp"}; 
		weapons[] = {"yl_92a_SW_PA_bctriwpn","ACE_Vector"}; 
		respawnWeapons[] = {"yl_92a_SW_PA_bctriwpn","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"yl_92a_SW_PA_bctriwpn","YL_92a_Silencer_SW","YL_qsz92_lssd_laser_IR","HOLOSUN_510C_B",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{}},{"v19_F",{}},{},"rhs_beret_milp","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_RCH_PlaSpetsnaz_2028_Officer_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Officer (Desert)"; 
		faction = "BS_I_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_16", "Male01CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","rhs_beret_milp"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","rhs_beret_milp"}; 
		weapons[] = {"yl_92a_SW_PA_bctriwpn","ACE_Vector"}; 
		respawnWeapons[] = {"yl_92a_SW_PA_bctriwpn","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"yl_92a_SW_PA_bctriwpn","YL_92a_Silencer_SW","YL_qsz92_lssd_laser_IR","HOLOSUN_510C_B",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{}},{"v19_F",{}},{},"rhs_beret_milp","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_RCH_PlaSpetsnaz_2028_DIVER_DT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Special (Desert)"; 
		faction = "BS_O_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_01", "Male01CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","rhs_zsh7a_mike_green_alt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","rhs_zsh7a_mike_green_alt"}; 
		weapons[] = {"yl_92a_SW_PA_bctriwpn","ACE_Vector"}; 
		respawnWeapons[] = {"yl_92a_SW_PA_bctriwpn","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"yl_92a_SW_PA_bctriwpn","YL_92a_Silencer_SW","YL_qsz92_lssd_laser_IR","HOLOSUN_510C_B",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"v19_F",{}},{},"rhs_zsh7a_mike_green_alt","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_RCH_PlaSpetsnaz_2028_DIVER_DT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Special (Desert)"; 
		faction = "BS_B_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_01", "Male01CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","rhs_zsh7a_mike_green_alt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","rhs_zsh7a_mike_green_alt"}; 
		weapons[] = {"yl_92a_SW_PA_bctriwpn","ACE_Vector"}; 
		respawnWeapons[] = {"yl_92a_SW_PA_bctriwpn","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"yl_92a_SW_PA_bctriwpn","YL_92a_Silencer_SW","YL_qsz92_lssd_laser_IR","HOLOSUN_510C_B",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"v19_F",{}},{},"rhs_zsh7a_mike_green_alt","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_RCH_PlaSpetsnaz_2028_DIVER_DT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Desert";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "DT"; 
		displayName = "Special (Desert)"; 
		faction = "BS_I_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_01", "Male01CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","rhs_zsh7a_mike_green_alt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","rhs_zsh7a_mike_green_alt"}; 
		weapons[] = {"yl_92a_SW_PA_bctriwpn","ACE_Vector"}; 
		respawnWeapons[] = {"yl_92a_SW_PA_bctriwpn","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"yl_92a_SW_PA_bctriwpn","YL_92a_Silencer_SW","YL_qsz92_lssd_laser_IR","HOLOSUN_510C_B",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"v19_F",{}},{},"rhs_zsh7a_mike_green_alt","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_RCH_PlaSpetsnaz_2028_GL_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Grenadier (Winter)"; 
		faction = "BS_O_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_22_a", "Male01CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_PRS","rhs_weap_M320","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_PRS","rhs_weap_M320","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_PRS","","YL_ACC_SIDE_IR","yl_qmk201_2d",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{},{"rhs_weap_M320","","","",{"1Rnd_HE_Grenade_shell",1},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",1,30}}},{"v19_F",{{"1Rnd_HE_Grenade_shell",9,1},{"1Rnd_Smoke_Grenade_shell",5,1},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",3,30}}},{"bag19_MAJOR_F",{{"1Rnd_HE_Grenade_shell",16,1},{"1Rnd_Smoke_Grenade_shell",9,1},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",7,30}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_RCH_PlaSpetsnaz_2028_GL_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Grenadier (Winter)"; 
		faction = "BS_B_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_22_a", "Male01CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_PRS","rhs_weap_M320","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_PRS","rhs_weap_M320","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_PRS","","YL_ACC_SIDE_IR","yl_qmk201_2d",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{},{"rhs_weap_M320","","","",{"1Rnd_HE_Grenade_shell",1},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",1,30}}},{"v19_F",{{"1Rnd_HE_Grenade_shell",9,1},{"1Rnd_Smoke_Grenade_shell",5,1},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",3,30}}},{"bag19_MAJOR_F",{{"1Rnd_HE_Grenade_shell",16,1},{"1Rnd_Smoke_Grenade_shell",9,1},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",7,30}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_RCH_PlaSpetsnaz_2028_GL_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Grenadier (Winter)"; 
		faction = "BS_I_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_22_a", "Male01CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_PRS","rhs_weap_M320","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_PRS","rhs_weap_M320","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_PRS","","YL_ACC_SIDE_IR","yl_qmk201_2d",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{},{"rhs_weap_M320","","","",{"1Rnd_HE_Grenade_shell",1},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",1,30}}},{"v19_F",{{"1Rnd_HE_Grenade_shell",9,1},{"1Rnd_Smoke_Grenade_shell",5,1},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",3,30}}},{"bag19_MAJOR_F",{{"1Rnd_HE_Grenade_shell",16,1},{"1Rnd_Smoke_Grenade_shell",9,1},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",7,30}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_RCH_PlaSpetsnaz_2028_AR_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 8; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Machine Gunner (Winter)"; 
		faction = "BS_O_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_20", "Male01RUS" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QJY201","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QJY201","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QJY201","","","YL_lpvo_8x_02",{"Tier1_250Rnd_762x51_Belt_M61_AP",250},{},""},{},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"v19_F",{{"Tier1_250Rnd_762x51_Belt_M61_AP",1,250}}},{"bag19_MAJOR_F",{{"Tier1_250Rnd_762x51_Belt_M61_AP",2,250}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_RCH_PlaSpetsnaz_2028_AR_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 8; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Machine Gunner (Winter)"; 
		faction = "BS_B_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_20", "Male01RUS" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QJY201","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QJY201","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QJY201","","","YL_lpvo_8x_02",{"Tier1_250Rnd_762x51_Belt_M61_AP",250},{},""},{},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"v19_F",{{"Tier1_250Rnd_762x51_Belt_M61_AP",1,250}}},{"bag19_MAJOR_F",{{"Tier1_250Rnd_762x51_Belt_M61_AP",2,250}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_RCH_PlaSpetsnaz_2028_AR_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 8; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Machine Gunner (Winter)"; 
		faction = "BS_I_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_20", "Male01RUS" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QJY201","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QJY201","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QJY201","","","YL_lpvo_8x_02",{"Tier1_250Rnd_762x51_Belt_M61_AP",250},{},""},{},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"v19_F",{{"Tier1_250Rnd_762x51_Belt_M61_AP",1,250}}},{"bag19_MAJOR_F",{{"Tier1_250Rnd_762x51_Belt_M61_AP",2,250}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_RCH_PlaSpetsnaz_2028_Medic_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Doctor (Winter)"; 
		faction = "BS_O_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_15", "Male01CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_PRS","","YL_ACC_SIDE_IR","HOLOSUN_510C_B_3XUP_2D",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"kat_accuvac",1},{"kat_stethoscope",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"v19_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",10,30}}},{"bag19_MAJOR_F",{{"ACE_adenosine",1},{"ACE_elasticBandage",12},{"ACE_packingBandage",12},{"ACE_quikclot",12},{"ACE_morphine",3},{"ACE_epinephrine",3},{"ACE_plasmaIV",2},{"ACE_plasmaIV_500",4},{"ACE_splint",1},{"ACE_suture",9},{"ACE_tourniquet",3},{"kat_larynx",4},{"kat_naloxone",1},{"kat_IO_FAST",5},{"kat_ncdKit",1},{"kat_aatKit",9},{"kat_chestSeal",4},{"kat_Pulseoximeter",2},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",3,30}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_RCH_PlaSpetsnaz_2028_Medic_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Doctor (Winter)"; 
		faction = "BS_B_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_15", "Male01CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_PRS","","YL_ACC_SIDE_IR","HOLOSUN_510C_B_3XUP_2D",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"kat_accuvac",1},{"kat_stethoscope",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"v19_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",10,30}}},{"bag19_MAJOR_F",{{"ACE_adenosine",1},{"ACE_elasticBandage",12},{"ACE_packingBandage",12},{"ACE_quikclot",12},{"ACE_morphine",3},{"ACE_epinephrine",3},{"ACE_plasmaIV",2},{"ACE_plasmaIV_500",4},{"ACE_splint",1},{"ACE_suture",9},{"ACE_tourniquet",3},{"kat_larynx",4},{"kat_naloxone",1},{"kat_IO_FAST",5},{"kat_ncdKit",1},{"kat_aatKit",9},{"kat_chestSeal",4},{"kat_Pulseoximeter",2},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",3,30}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_RCH_PlaSpetsnaz_2028_Medic_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Doctor (Winter)"; 
		faction = "BS_I_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_15", "Male01CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_PRS","","YL_ACC_SIDE_IR","HOLOSUN_510C_B_3XUP_2D",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"kat_accuvac",1},{"kat_stethoscope",1},{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"v19_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",10,30}}},{"bag19_MAJOR_F",{{"ACE_adenosine",1},{"ACE_elasticBandage",12},{"ACE_packingBandage",12},{"ACE_quikclot",12},{"ACE_morphine",3},{"ACE_epinephrine",3},{"ACE_plasmaIV",2},{"ACE_plasmaIV_500",4},{"ACE_splint",1},{"ACE_suture",9},{"ACE_tourniquet",3},{"kat_larynx",4},{"kat_naloxone",1},{"kat_IO_FAST",5},{"kat_ncdKit",1},{"kat_aatKit",9},{"kat_chestSeal",4},{"kat_Pulseoximeter",2},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",3,30}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_RCH_PlaSpetsnaz_2028_SNP_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 8; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Sniper (Winter)"; 
		faction = "BS_O_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_01", "Male01RUS" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_BOLT","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_BOLT","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_BOLT","","","VME_QBU88_Scope",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",1,30}}},{"v19_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",10,30}}},{"bag19_MAJOR_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",20,30}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_RCH_PlaSpetsnaz_2028_SNP_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 8; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Sniper (Winter)"; 
		faction = "BS_B_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_01", "Male01RUS" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_BOLT","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_BOLT","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_BOLT","","","VME_QBU88_Scope",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",1,30}}},{"v19_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",10,30}}},{"bag19_MAJOR_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",20,30}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_RCH_PlaSpetsnaz_2028_SNP_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 8; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Sniper (Winter)"; 
		faction = "BS_I_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_01", "Male01RUS" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_BOLT","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_BOLT","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_BOLT","","","VME_QBU88_Scope",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",1,30}}},{"v19_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",10,30}}},{"bag19_MAJOR_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",20,30}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_RCH_PlaSpetsnaz_2028_Rifleman_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Rifleman (Winter)"; 
		faction = "BS_O_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_09", "Male03CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_PRS","","YL_ACC_SIDE_IR","yl_qmk201_2d",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",1,30}}},{"v19_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",10,30}}},{"bag19_MAJOR_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",20,30}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_RCH_PlaSpetsnaz_2028_Rifleman_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Rifleman (Winter)"; 
		faction = "BS_B_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_09", "Male03CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_PRS","","YL_ACC_SIDE_IR","yl_qmk201_2d",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",1,30}}},{"v19_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",10,30}}},{"bag19_MAJOR_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",20,30}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_RCH_PlaSpetsnaz_2028_Rifleman_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Rifleman (Winter)"; 
		faction = "BS_I_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_09", "Male03CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_PRS","","YL_ACC_SIDE_IR","yl_qmk201_2d",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",1,30}}},{"v19_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",10,30}}},{"bag19_MAJOR_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",20,30}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_RCH_PlaSpetsnaz_2028_RTO_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Anti-Tank (Winter)"; 
		faction = "BS_O_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"AsianHead_A3_03", "Male02CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_PRS","rhs_weap_rpg7","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_PRS","rhs_weap_rpg7","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_PRS","","YL_ACC_SIDE_IR","YL_qmk191",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{"rhs_weap_rpg7","","","rhs_acc_1pn93_1",{"rhs_rpg7_PG7VL_mag",1},{},""},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",1,30}}},{"v19_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",10,30}}},{"bag19_MAJOR_F",{{"rhs_rpg7_PG7VL_mag",3,1},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",6,30}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_RCH_PlaSpetsnaz_2028_RTO_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Anti-Tank (Winter)"; 
		faction = "BS_B_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"AsianHead_A3_03", "Male02CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_PRS","rhs_weap_rpg7","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_PRS","rhs_weap_rpg7","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_PRS","","YL_ACC_SIDE_IR","YL_qmk191",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{"rhs_weap_rpg7","","","rhs_acc_1pn93_1",{"rhs_rpg7_PG7VL_mag",1},{},""},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",1,30}}},{"v19_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",10,30}}},{"bag19_MAJOR_F",{{"rhs_rpg7_PG7VL_mag",3,1},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",6,30}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_RCH_PlaSpetsnaz_2028_RTO_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Anti-Tank (Winter)"; 
		faction = "BS_I_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"AsianHead_A3_03", "Male02CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_PRS","rhs_weap_rpg7","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_PRS","rhs_weap_rpg7","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_PRS","","YL_ACC_SIDE_IR","YL_qmk191",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{"rhs_weap_rpg7","","","rhs_acc_1pn93_1",{"rhs_rpg7_PG7VL_mag",1},{},""},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",1,30}}},{"v19_F",{{"YL_30rnd_58x42_DBP10A_T_Mag_MY",10,30}}},{"bag19_MAJOR_F",{{"rhs_rpg7_PG7VL_mag",3,1},{"YL_30rnd_58x42_DBP10A_T_Mag_MY",6,30}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_RCH_PlaSpetsnaz_2028_VAR_6_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 7"; 
		faction = "BS_O_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_21", "Male03CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191","launch_RPG7_F","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191","launch_RPG7_F","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191","yl_muzzle_snds_191","YL_ACC_SIDE_IR","HOLOSUN_510C_B_3XUP",{"YL_30rnd_58x42_DBP10A_Mag_MY",30},{},"yl_191_bipod"},{"launch_RPG7_F","","","rhs_acc_1pn93_1",{"rhs_rpg7_OG7V_mag",1},{},""},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{}},{"v19_F",{}},{"bag19_MAJOR_F",{{"rhs_rpg7_OG7V_mag",1,1},{"rhs_rpg7_PG7V_mag",1,1},{"rhs_rpg7_PG7VM_mag",1,1},{"RPG7_F",1,1}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_RCH_PlaSpetsnaz_2028_VAR_6_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 7"; 
		faction = "BS_B_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_21", "Male03CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191","launch_RPG7_F","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191","launch_RPG7_F","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191","yl_muzzle_snds_191","YL_ACC_SIDE_IR","HOLOSUN_510C_B_3XUP",{"YL_30rnd_58x42_DBP10A_Mag_MY",30},{},"yl_191_bipod"},{"launch_RPG7_F","","","rhs_acc_1pn93_1",{"rhs_rpg7_OG7V_mag",1},{},""},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{}},{"v19_F",{}},{"bag19_MAJOR_F",{{"rhs_rpg7_OG7V_mag",1,1},{"rhs_rpg7_PG7V_mag",1,1},{"rhs_rpg7_PG7VM_mag",1,1},{"RPG7_F",1,1}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_RCH_PlaSpetsnaz_2028_VAR_6_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 7"; 
		faction = "BS_I_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_21", "Male03CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191","launch_RPG7_F","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191","launch_RPG7_F","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191","yl_muzzle_snds_191","YL_ACC_SIDE_IR","HOLOSUN_510C_B_3XUP",{"YL_30rnd_58x42_DBP10A_Mag_MY",30},{},"yl_191_bipod"},{"launch_RPG7_F","","","rhs_acc_1pn93_1",{"rhs_rpg7_OG7V_mag",1},{},""},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{}},{"v19_F",{}},{"bag19_MAJOR_F",{{"rhs_rpg7_OG7V_mag",1,1},{"rhs_rpg7_PG7V_mag",1,1},{"rhs_rpg7_PG7VM_mag",1,1},{"RPG7_F",1,1}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_RCH_PlaSpetsnaz_2028_VAR_7_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 8"; 
		faction = "BS_O_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_20", "Male03CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191","launch_RPG7_F","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191","launch_RPG7_F","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191","Byonet_95_F","YL_ACC_IR","YL_lpvo_8x",{"YL_30rnd_58x42_DBP10A_N_Mag_MY",30},{},"yl_191_bipod"},{"launch_RPG7_F","","","rhs_acc_1pn93_1",{"rhs_rpg7_TBG7V_mag",1},{},""},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{}},{"v19_F",{}},{"bag19_MAJOR_F",{{"rhs_rpg7_type69_airburst_mag",1,1},{"rhs_rpg7_PG7VS_mag",1,1},{"rhs_rpg7_PG7VR_mag",1,1}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_RCH_PlaSpetsnaz_2028_VAR_7_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 8"; 
		faction = "BS_B_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_20", "Male03CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191","launch_RPG7_F","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191","launch_RPG7_F","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191","Byonet_95_F","YL_ACC_IR","YL_lpvo_8x",{"YL_30rnd_58x42_DBP10A_N_Mag_MY",30},{},"yl_191_bipod"},{"launch_RPG7_F","","","rhs_acc_1pn93_1",{"rhs_rpg7_TBG7V_mag",1},{},""},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{}},{"v19_F",{}},{"bag19_MAJOR_F",{{"rhs_rpg7_type69_airburst_mag",1,1},{"rhs_rpg7_PG7VS_mag",1,1},{"rhs_rpg7_PG7VR_mag",1,1}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_RCH_PlaSpetsnaz_2028_VAR_7_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 8"; 
		faction = "BS_I_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_20", "Male03CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191","launch_RPG7_F","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191","launch_RPG7_F","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "bag19_MAJOR_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191","Byonet_95_F","YL_ACC_IR","YL_lpvo_8x",{"YL_30rnd_58x42_DBP10A_N_Mag_MY",30},{},"yl_191_bipod"},{"launch_RPG7_F","","","rhs_acc_1pn93_1",{"rhs_rpg7_TBG7V_mag",1},{},""},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{}},{"v19_F",{}},{"bag19_MAJOR_F",{{"rhs_rpg7_type69_airburst_mag",1,1},{"rhs_rpg7_PG7VS_mag",1,1},{"rhs_rpg7_PG7VR_mag",1,1}}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_RCH_PlaSpetsnaz_2028_VAR_8_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 9"; 
		faction = "BS_O_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_13", "Male01CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "VestBag_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_PRS","","YL_ACC_SIDE_IR","optic_QLU11",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{}},{"v19_rHvy_F",{}},{"VestBag_F",{}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_RCH_PlaSpetsnaz_2028_VAR_8_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 9"; 
		faction = "BS_B_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_13", "Male01CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "VestBag_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_PRS","","YL_ACC_SIDE_IR","optic_QLU11",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{}},{"v19_rHvy_F",{}},{"VestBag_F",{}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_RCH_PlaSpetsnaz_2028_VAR_8_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Variant 9"; 
		faction = "BS_I_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_13", "Male01CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","aNVG","GFH_h19_FAST_Tag_CORPORAL_F"}; 
		weapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"}; 
		respawnWeapons[] = {"YL_QBU191_PRS","yl_92B_LAB","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "VestBag_F";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{"YL_QBU191_PRS","","YL_ACC_SIDE_IR","optic_QLU11",{"YL_30rnd_58x42_DBP10A_T_Mag_MY",30},{},"rhs_acc_harris_swivel"},{},{"yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{}},{"v19_rHvy_F",{}},{"VestBag_F",{}},"GFH_h19_FAST_Tag_CORPORAL_F","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG"}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_RCH_PlaSpetsnaz_2028_Officer_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Officer (Winter)"; 
		faction = "BS_O_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_07", "Male01CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","rhs_beret_milp"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","rhs_beret_milp"}; 
		weapons[] = {"yl_92a_SW_PA_bctriwpn","ACE_Vector"}; 
		respawnWeapons[] = {"yl_92a_SW_PA_bctriwpn","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"yl_92a_SW_PA_bctriwpn","YL_92a_Silencer_SW","YL_qsz92_lssd_laser_IR","HOLOSUN_510C_B",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{}},{"v19_F",{}},{},"rhs_beret_milp","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_RCH_PlaSpetsnaz_2028_Officer_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Officer (Winter)"; 
		faction = "BS_B_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_07", "Male01CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","rhs_beret_milp"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","rhs_beret_milp"}; 
		weapons[] = {"yl_92a_SW_PA_bctriwpn","ACE_Vector"}; 
		respawnWeapons[] = {"yl_92a_SW_PA_bctriwpn","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"yl_92a_SW_PA_bctriwpn","YL_92a_Silencer_SW","YL_qsz92_lssd_laser_IR","HOLOSUN_510C_B",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{}},{"v19_F",{}},{},"rhs_beret_milp","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_RCH_PlaSpetsnaz_2028_Officer_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Officer (Winter)"; 
		faction = "BS_I_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_07", "Male01CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","rhs_beret_milp"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","rhs_beret_milp"}; 
		weapons[] = {"yl_92a_SW_PA_bctriwpn","ACE_Vector"}; 
		respawnWeapons[] = {"yl_92a_SW_PA_bctriwpn","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"yl_92a_SW_PA_bctriwpn","YL_92a_Silencer_SW","YL_qsz92_lssd_laser_IR","HOLOSUN_510C_B",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{}},{"v19_F",{}},{},"rhs_beret_milp","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	// This unit is for OpFOR
	class BS_O_RCH_PlaSpetsnaz_2028_DIVER_WT : O_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Special (Winter)"; 
		faction = "BS_O_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_17", "Male01CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","rhs_zsh7a_mike_green_alt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","rhs_zsh7a_mike_green_alt"}; 
		weapons[] = {"yl_92a_SW_PA_bctriwpn","ACE_Vector"}; 
		respawnWeapons[] = {"yl_92a_SW_PA_bctriwpn","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"yl_92a_SW_PA_bctriwpn","YL_92a_Silencer_SW","YL_qsz92_lssd_laser_IR","HOLOSUN_510C_B",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"v19_F",{}},{},"rhs_zsh7a_mike_green_alt","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 0; 
	}; 

	// This unit is for BluFOR
	class BS_B_RCH_PlaSpetsnaz_2028_DIVER_WT : B_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Special (Winter)"; 
		faction = "BS_B_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_17", "Male01CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","rhs_zsh7a_mike_green_alt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","rhs_zsh7a_mike_green_alt"}; 
		weapons[] = {"yl_92a_SW_PA_bctriwpn","ACE_Vector"}; 
		respawnWeapons[] = {"yl_92a_SW_PA_bctriwpn","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"yl_92a_SW_PA_bctriwpn","YL_92a_Silencer_SW","YL_qsz92_lssd_laser_IR","HOLOSUN_510C_B",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"v19_F",{}},{},"rhs_zsh7a_mike_green_alt","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 1; 
	}; 

	// This unit is for GRE
	class BS_I_RCH_PlaSpetsnaz_2028_DIVER_WT : I_G_Survivor_F {
		author = "Special Ops Framework Team"; 
		editorSubcategory = "BSM_EdSubcat_Unit_Winter";
		identityFacesSpecOps[] = { 0, 1, 0, 0, 1 }; // Set Identity for SpecOps System.
		identityVoiceSpecOps = 4; // Choosen Voice Pool for this Unit.
		scope = 0; 
		scopeCurator = 0; 
		bsCamo = "WT"; 
		displayName = "Special (Winter)"; 
		faction = "BS_I_RCH_PlaSpetsnaz_2028"; 
		identityTypes[] = {"WhiteHead_17", "Male01CHI" ,"G_NATO_default"};
		uniformClass = "uniform_FS_Gloves_Holster_F"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","rhs_zsh7a_mike_green_alt"}; 
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","TFAR_anprc154","ItemGPS","rhs_zsh7a_mike_green_alt"}; 
		weapons[] = {"yl_92a_SW_PA_bctriwpn","ACE_Vector"}; 
		respawnWeapons[] = {"yl_92a_SW_PA_bctriwpn","ACE_Vector"};
		magazines[] = {};
		respawnMagazines[] = {};
		backpack = "";
		class EventHandlers
		{
			init = "[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;";
		};
		ALiVE_orbatCreator_loadout[] = {{},{},{"yl_92a_SW_PA_bctriwpn","YL_92a_Silencer_SW","YL_qsz92_lssd_laser_IR","HOLOSUN_510C_B",{"YL_92B_15Rnd_issued",15},{},""},{"uniform_FS_Gloves_Holster_F",{{"ACE_EarPlugs",1},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_RangeCard",1},{"ACE_microDAGR",1},{"ACE_IR_Strobe_Item",1},{"ACE_epinephrine",1},{"ACE_CableTie",3},{"kat_chestSeal",1},{"kat_guedel",2}}},{"v19_F",{}},{},"rhs_zsh7a_mike_green_alt","",{"ACE_Vector","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch",""}};
		ALiVE_orbatCreator_owned = 1;
		side = 2; 
	}; 

	class rhs_2s3_at_tv;
	class BS_B_RCH_PlaSpetsnaz_2028_ryNPTiFIFyk:rhs_2s3_at_tv {
		scope=2;
		side=1;
		faction="BS_B_RCH_PlaSpetsnaz_2028";
		crew="BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_RCH_PlaSpetsnaz_2028_ryNPTiFIFyk:rhs_2s3_at_tv {
		scope=2;
		side=0;
		faction="BS_O_RCH_PlaSpetsnaz_2028";
		crew="BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_RCH_PlaSpetsnaz_2028_ryNPTiFIFyk:rhs_2s3_at_tv {
		scope=2;
		side=2;
		faction="BS_I_RCH_PlaSpetsnaz_2028";
		crew="BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 

	class rhs_2s1_at_tv;
	class BS_B_RCH_PlaSpetsnaz_2028_gS7Kpd1loH8:rhs_2s1_at_tv {
		scope=2;
		side=1;
		faction="BS_B_RCH_PlaSpetsnaz_2028";
		crew="BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_RCH_PlaSpetsnaz_2028_gS7Kpd1loH8:rhs_2s1_at_tv {
		scope=2;
		side=0;
		faction="BS_O_RCH_PlaSpetsnaz_2028";
		crew="BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_RCH_PlaSpetsnaz_2028_gS7Kpd1loH8:rhs_2s1_at_tv {
		scope=2;
		side=2;
		faction="BS_I_RCH_PlaSpetsnaz_2028";
		crew="BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 

	class rhs_9k79_B;
	class BS_B_RCH_PlaSpetsnaz_2028_tZJgezKnCVU:rhs_9k79_B {
		scope=2;
		side=1;
		faction="BS_B_RCH_PlaSpetsnaz_2028";
		crew="BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_RCH_PlaSpetsnaz_2028_tZJgezKnCVU:rhs_9k79_B {
		scope=2;
		side=0;
		faction="BS_O_RCH_PlaSpetsnaz_2028";
		crew="BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_RCH_PlaSpetsnaz_2028_tZJgezKnCVU:rhs_9k79_B {
		scope=2;
		side=2;
		faction="BS_I_RCH_PlaSpetsnaz_2028";
		crew="BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 

	class rhs_t90am_tv;
	class BS_B_RCH_PlaSpetsnaz_2028_jhzbAY6FK8U:rhs_t90am_tv {
		scope=2;
		side=1;
		faction="BS_B_RCH_PlaSpetsnaz_2028";
		crew="BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_RCH_PlaSpetsnaz_2028_jhzbAY6FK8U:rhs_t90am_tv {
		scope=2;
		side=0;
		faction="BS_O_RCH_PlaSpetsnaz_2028";
		crew="BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_RCH_PlaSpetsnaz_2028_jhzbAY6FK8U:rhs_t90am_tv {
		scope=2;
		side=2;
		faction="BS_I_RCH_PlaSpetsnaz_2028";
		crew="BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 

	class rhs_t80u;
	class BS_B_RCH_PlaSpetsnaz_2028_786zP_1AADc:rhs_t80u {
		scope=2;
		side=1;
		faction="BS_B_RCH_PlaSpetsnaz_2028";
		crew="BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_RCH_PlaSpetsnaz_2028_786zP_1AADc:rhs_t80u {
		scope=2;
		side=0;
		faction="BS_O_RCH_PlaSpetsnaz_2028";
		crew="BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_RCH_PlaSpetsnaz_2028_786zP_1AADc:rhs_t80u {
		scope=2;
		side=2;
		faction="BS_I_RCH_PlaSpetsnaz_2028";
		crew="BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 

	class rhs_t72ba_tv;
	class BS_B_RCH_PlaSpetsnaz_2028_awPvhHLUVNo:rhs_t72ba_tv {
		scope=2;
		side=1;
		faction="BS_B_RCH_PlaSpetsnaz_2028";
		crew="BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_RCH_PlaSpetsnaz_2028_awPvhHLUVNo:rhs_t72ba_tv {
		scope=2;
		side=0;
		faction="BS_O_RCH_PlaSpetsnaz_2028";
		crew="BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_RCH_PlaSpetsnaz_2028_awPvhHLUVNo:rhs_t72ba_tv {
		scope=2;
		side=2;
		faction="BS_I_RCH_PlaSpetsnaz_2028";
		crew="BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 

	class rhs_mig29s_vvsc;
	class BS_B_RCH_PlaSpetsnaz_2028_qs1XX9Q_5Ig:rhs_mig29s_vvsc {
		scope=2;
		side=1;
		faction="BS_B_RCH_PlaSpetsnaz_2028";
		crew="BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_RCH_PlaSpetsnaz_2028_qs1XX9Q_5Ig:rhs_mig29s_vvsc {
		scope=2;
		side=0;
		faction="BS_O_RCH_PlaSpetsnaz_2028";
		crew="BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_RCH_PlaSpetsnaz_2028_qs1XX9Q_5Ig:rhs_mig29s_vvsc {
		scope=2;
		side=2;
		faction="BS_I_RCH_PlaSpetsnaz_2028";
		crew="BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 

	class RHS_Mi8MTV3_heavy_vvs;
	class BS_B_RCH_PlaSpetsnaz_2028_5lZt1Vl7_d4:RHS_Mi8MTV3_heavy_vvs {
		scope=2;
		side=1;
		faction="BS_B_RCH_PlaSpetsnaz_2028";
		crew="BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_RCH_PlaSpetsnaz_2028_5lZt1Vl7_d4:RHS_Mi8MTV3_heavy_vvs {
		scope=2;
		side=0;
		faction="BS_O_RCH_PlaSpetsnaz_2028";
		crew="BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_RCH_PlaSpetsnaz_2028_5lZt1Vl7_d4:RHS_Mi8MTV3_heavy_vvs {
		scope=2;
		side=2;
		faction="BS_I_RCH_PlaSpetsnaz_2028";
		crew="BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 

	class rhs_mi28n_vvs;
	class BS_B_RCH_PlaSpetsnaz_2028_qAmRB4g1vXc:rhs_mi28n_vvs {
		scope=2;
		side=1;
		faction="BS_B_RCH_PlaSpetsnaz_2028";
		crew="BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_RCH_PlaSpetsnaz_2028_qAmRB4g1vXc:rhs_mi28n_vvs {
		scope=2;
		side=0;
		faction="BS_O_RCH_PlaSpetsnaz_2028";
		crew="BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_RCH_PlaSpetsnaz_2028_qAmRB4g1vXc:rhs_mi28n_vvs {
		scope=2;
		side=2;
		faction="BS_I_RCH_PlaSpetsnaz_2028";
		crew="BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 

	class RHS_Ka52_vvs;
	class BS_B_RCH_PlaSpetsnaz_2028_sQRKyoCCruI:RHS_Ka52_vvs {
		scope=2;
		side=1;
		faction="BS_B_RCH_PlaSpetsnaz_2028";
		crew="BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_RCH_PlaSpetsnaz_2028_sQRKyoCCruI:RHS_Ka52_vvs {
		scope=2;
		side=0;
		faction="BS_O_RCH_PlaSpetsnaz_2028";
		crew="BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_RCH_PlaSpetsnaz_2028_sQRKyoCCruI:RHS_Ka52_vvs {
		scope=2;
		side=2;
		faction="BS_I_RCH_PlaSpetsnaz_2028";
		crew="BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 

	class rhs_ka60_grey;
	class BS_B_RCH_PlaSpetsnaz_2028_OAY7hCzJBuM:rhs_ka60_grey {
		scope=2;
		side=1;
		faction="BS_B_RCH_PlaSpetsnaz_2028";
		crew="BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_RCH_PlaSpetsnaz_2028_OAY7hCzJBuM:rhs_ka60_grey {
		scope=2;
		side=0;
		faction="BS_O_RCH_PlaSpetsnaz_2028";
		crew="BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_RCH_PlaSpetsnaz_2028_OAY7hCzJBuM:rhs_ka60_grey {
		scope=2;
		side=2;
		faction="BS_I_RCH_PlaSpetsnaz_2028";
		crew="BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 

	class RHS_Su25SM_vvs;
	class BS_B_RCH_PlaSpetsnaz_2028_f_eKxZ0in14:RHS_Su25SM_vvs {
		scope=2;
		side=1;
		faction="BS_B_RCH_PlaSpetsnaz_2028";
		crew="BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_RCH_PlaSpetsnaz_2028_f_eKxZ0in14:RHS_Su25SM_vvs {
		scope=2;
		side=0;
		faction="BS_O_RCH_PlaSpetsnaz_2028";
		crew="BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_RCH_PlaSpetsnaz_2028_f_eKxZ0in14:RHS_Su25SM_vvs {
		scope=2;
		side=2;
		faction="BS_I_RCH_PlaSpetsnaz_2028";
		crew="BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 

	class RHS_T50_vvs_054;
	class BS_B_RCH_PlaSpetsnaz_2028_ha_WKdGB_qo:RHS_T50_vvs_054 {
		scope=2;
		side=1;
		faction="BS_B_RCH_PlaSpetsnaz_2028";
		crew="BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_RCH_PlaSpetsnaz_2028_ha_WKdGB_qo:RHS_T50_vvs_054 {
		scope=2;
		side=0;
		faction="BS_O_RCH_PlaSpetsnaz_2028";
		crew="BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_RCH_PlaSpetsnaz_2028_ha_WKdGB_qo:RHS_T50_vvs_054 {
		scope=2;
		side=2;
		faction="BS_I_RCH_PlaSpetsnaz_2028";
		crew="BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 

	class rhs_btr80a_msv;
	class BS_B_RCH_PlaSpetsnaz_2028_ijeFmPRemFw:rhs_btr80a_msv {
		scope=2;
		side=1;
		faction="BS_B_RCH_PlaSpetsnaz_2028";
		crew="BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_RCH_PlaSpetsnaz_2028_ijeFmPRemFw:rhs_btr80a_msv {
		scope=2;
		side=0;
		faction="BS_O_RCH_PlaSpetsnaz_2028";
		crew="BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_RCH_PlaSpetsnaz_2028_ijeFmPRemFw:rhs_btr80a_msv {
		scope=2;
		side=2;
		faction="BS_I_RCH_PlaSpetsnaz_2028";
		crew="BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 

	class rhs_brm1k_msv;
	class BS_B_RCH_PlaSpetsnaz_2028_ekoijSIWvgc:rhs_brm1k_msv {
		scope=2;
		side=1;
		faction="BS_B_RCH_PlaSpetsnaz_2028";
		crew="BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_RCH_PlaSpetsnaz_2028_ekoijSIWvgc:rhs_brm1k_msv {
		scope=2;
		side=0;
		faction="BS_O_RCH_PlaSpetsnaz_2028";
		crew="BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_RCH_PlaSpetsnaz_2028_ekoijSIWvgc:rhs_brm1k_msv {
		scope=2;
		side=2;
		faction="BS_I_RCH_PlaSpetsnaz_2028";
		crew="BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 

	class rhs_Ob_681_2;
	class BS_B_RCH_PlaSpetsnaz_2028_FjA1Uklwo_c:rhs_Ob_681_2 {
		scope=2;
		side=1;
		faction="BS_B_RCH_PlaSpetsnaz_2028";
		crew="BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_RCH_PlaSpetsnaz_2028_FjA1Uklwo_c:rhs_Ob_681_2 {
		scope=2;
		side=0;
		faction="BS_O_RCH_PlaSpetsnaz_2028";
		crew="BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_RCH_PlaSpetsnaz_2028_FjA1Uklwo_c:rhs_Ob_681_2 {
		scope=2;
		side=2;
		faction="BS_I_RCH_PlaSpetsnaz_2028";
		crew="BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 

	class rhs_bmp2e_tv;
	class BS_B_RCH_PlaSpetsnaz_2028_0eBTYOqEtvA:rhs_bmp2e_tv {
		scope=2;
		side=1;
		faction="BS_B_RCH_PlaSpetsnaz_2028";
		crew="BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_RCH_PlaSpetsnaz_2028_0eBTYOqEtvA:rhs_bmp2e_tv {
		scope=2;
		side=0;
		faction="BS_O_RCH_PlaSpetsnaz_2028";
		crew="BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_RCH_PlaSpetsnaz_2028_0eBTYOqEtvA:rhs_bmp2e_tv {
		scope=2;
		side=2;
		faction="BS_I_RCH_PlaSpetsnaz_2028";
		crew="BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 

	class rhs_pts_vmf;
	class BS_B_RCH_PlaSpetsnaz_2028_v1nWU8SImJY:rhs_pts_vmf {
		scope=2;
		side=1;
		faction="BS_B_RCH_PlaSpetsnaz_2028";
		crew="BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_RCH_PlaSpetsnaz_2028_v1nWU8SImJY:rhs_pts_vmf {
		scope=2;
		side=0;
		faction="BS_O_RCH_PlaSpetsnaz_2028";
		crew="BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_RCH_PlaSpetsnaz_2028_v1nWU8SImJY:rhs_pts_vmf {
		scope=2;
		side=2;
		faction="BS_I_RCH_PlaSpetsnaz_2028";
		crew="BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 

	class rhs_bmk_t;
	class BS_B_RCH_PlaSpetsnaz_2028_QdGXWDgKcXo:rhs_bmk_t {
		scope=2;
		side=1;
		faction="BS_B_RCH_PlaSpetsnaz_2028";
		crew="BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_RCH_PlaSpetsnaz_2028_QdGXWDgKcXo:rhs_bmk_t {
		scope=2;
		side=0;
		faction="BS_O_RCH_PlaSpetsnaz_2028";
		crew="BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_RCH_PlaSpetsnaz_2028_QdGXWDgKcXo:rhs_bmk_t {
		scope=2;
		side=2;
		faction="BS_I_RCH_PlaSpetsnaz_2028";
		crew="BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 

	class rhs_zsu234_aa;
	class BS_B_RCH_PlaSpetsnaz_2028_7rarPtw7Yho:rhs_zsu234_aa {
		scope=2;
		side=1;
		faction="BS_B_RCH_PlaSpetsnaz_2028";
		crew="BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_RCH_PlaSpetsnaz_2028_7rarPtw7Yho:rhs_zsu234_aa {
		scope=2;
		side=0;
		faction="BS_O_RCH_PlaSpetsnaz_2028";
		crew="BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_RCH_PlaSpetsnaz_2028_7rarPtw7Yho:rhs_zsu234_aa {
		scope=2;
		side=2;
		faction="BS_I_RCH_PlaSpetsnaz_2028";
		crew="BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 

	class rhs_tigr_sts_msv;
	class BS_B_RCH_PlaSpetsnaz_2028_lO7LQFKpZ2c:rhs_tigr_sts_msv {
		scope=2;
		side=1;
		faction="BS_B_RCH_PlaSpetsnaz_2028";
		crew="BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_RCH_PlaSpetsnaz_2028_lO7LQFKpZ2c:rhs_tigr_sts_msv {
		scope=2;
		side=0;
		faction="BS_O_RCH_PlaSpetsnaz_2028";
		crew="BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_RCH_PlaSpetsnaz_2028_lO7LQFKpZ2c:rhs_tigr_sts_msv {
		scope=2;
		side=2;
		faction="BS_I_RCH_PlaSpetsnaz_2028";
		crew="BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 

	class rhs_tigr_msv;
	class BS_B_RCH_PlaSpetsnaz_2028_203DPPUkODo:rhs_tigr_msv {
		scope=2;
		side=1;
		faction="BS_B_RCH_PlaSpetsnaz_2028";
		crew="BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_RCH_PlaSpetsnaz_2028_203DPPUkODo:rhs_tigr_msv {
		scope=2;
		side=0;
		faction="BS_O_RCH_PlaSpetsnaz_2028";
		crew="BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_RCH_PlaSpetsnaz_2028_203DPPUkODo:rhs_tigr_msv {
		scope=2;
		side=2;
		faction="BS_I_RCH_PlaSpetsnaz_2028";
		crew="BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 

	class rhs_tigr_m_msv;
	class BS_B_RCH_PlaSpetsnaz_2028_b9EVCMbB6Uk:rhs_tigr_m_msv {
		scope=2;
		side=1;
		faction="BS_B_RCH_PlaSpetsnaz_2028";
		crew="BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_RCH_PlaSpetsnaz_2028_b9EVCMbB6Uk:rhs_tigr_m_msv {
		scope=2;
		side=0;
		faction="BS_O_RCH_PlaSpetsnaz_2028";
		crew="BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_RCH_PlaSpetsnaz_2028_b9EVCMbB6Uk:rhs_tigr_m_msv {
		scope=2;
		side=2;
		faction="BS_I_RCH_PlaSpetsnaz_2028";
		crew="BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 

	class RHS_Ural_Repair_VDV_01;
	class BS_B_RCH_PlaSpetsnaz_2028_jS_IDkJ1rC4:RHS_Ural_Repair_VDV_01 {
		scope=2;
		side=1;
		faction="BS_B_RCH_PlaSpetsnaz_2028";
		crew="BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_RCH_PlaSpetsnaz_2028_jS_IDkJ1rC4:RHS_Ural_Repair_VDV_01 {
		scope=2;
		side=0;
		faction="BS_O_RCH_PlaSpetsnaz_2028";
		crew="BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_RCH_PlaSpetsnaz_2028_jS_IDkJ1rC4:RHS_Ural_Repair_VDV_01 {
		scope=2;
		side=2;
		faction="BS_I_RCH_PlaSpetsnaz_2028";
		crew="BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 

	class RHS_Ural_Fuel_VDV_01;
	class BS_B_RCH_PlaSpetsnaz_2028_rq5vG7zk2sk:RHS_Ural_Fuel_VDV_01 {
		scope=2;
		side=1;
		faction="BS_B_RCH_PlaSpetsnaz_2028";
		crew="BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_RCH_PlaSpetsnaz_2028_rq5vG7zk2sk:RHS_Ural_Fuel_VDV_01 {
		scope=2;
		side=0;
		faction="BS_O_RCH_PlaSpetsnaz_2028";
		crew="BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_RCH_PlaSpetsnaz_2028_rq5vG7zk2sk:RHS_Ural_Fuel_VDV_01 {
		scope=2;
		side=2;
		faction="BS_I_RCH_PlaSpetsnaz_2028";
		crew="BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 

	class RHS_Ural_Ammo_VDV_01;
	class BS_B_RCH_PlaSpetsnaz_2028_VFErVsIEtXA:RHS_Ural_Ammo_VDV_01 {
		scope=2;
		side=1;
		faction="BS_B_RCH_PlaSpetsnaz_2028";
		crew="BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_RCH_PlaSpetsnaz_2028_VFErVsIEtXA:RHS_Ural_Ammo_VDV_01 {
		scope=2;
		side=0;
		faction="BS_O_RCH_PlaSpetsnaz_2028";
		crew="BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_RCH_PlaSpetsnaz_2028_VFErVsIEtXA:RHS_Ural_Ammo_VDV_01 {
		scope=2;
		side=2;
		faction="BS_I_RCH_PlaSpetsnaz_2028";
		crew="BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 

	class RHS_Ural_Zu23_MSV_01;
	class BS_B_RCH_PlaSpetsnaz_2028_Nr8irHil7_0:RHS_Ural_Zu23_MSV_01 {
		scope=2;
		side=1;
		faction="BS_B_RCH_PlaSpetsnaz_2028";
		crew="BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_RCH_PlaSpetsnaz_2028_Nr8irHil7_0:RHS_Ural_Zu23_MSV_01 {
		scope=2;
		side=0;
		faction="BS_O_RCH_PlaSpetsnaz_2028";
		crew="BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_RCH_PlaSpetsnaz_2028_Nr8irHil7_0:RHS_Ural_Zu23_MSV_01 {
		scope=2;
		side=2;
		faction="BS_I_RCH_PlaSpetsnaz_2028";
		crew="BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 

	class RHS_Ural_VDV_01;
	class BS_B_RCH_PlaSpetsnaz_2028_ic2SMN09NX0:RHS_Ural_VDV_01 {
		scope=2;
		side=1;
		faction="BS_B_RCH_PlaSpetsnaz_2028";
		crew="BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_RCH_PlaSpetsnaz_2028_ic2SMN09NX0:RHS_Ural_VDV_01 {
		scope=2;
		side=0;
		faction="BS_O_RCH_PlaSpetsnaz_2028";
		crew="BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_RCH_PlaSpetsnaz_2028_ic2SMN09NX0:RHS_Ural_VDV_01 {
		scope=2;
		side=2;
		faction="BS_I_RCH_PlaSpetsnaz_2028";
		crew="BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 

	class RHS_Ural_Open_VMF_01;
	class BS_B_RCH_PlaSpetsnaz_2028_VbSTeyL03BM:RHS_Ural_Open_VMF_01 {
		scope=2;
		side=1;
		faction="BS_B_RCH_PlaSpetsnaz_2028";
		crew="BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_O_RCH_PlaSpetsnaz_2028_VbSTeyL03BM:RHS_Ural_Open_VMF_01 {
		scope=2;
		side=0;
		faction="BS_O_RCH_PlaSpetsnaz_2028";
		crew="BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
	class BS_I_RCH_PlaSpetsnaz_2028_VbSTeyL03BM:RHS_Ural_Open_VMF_01 {
		scope=2;
		side=2;
		faction="BS_I_RCH_PlaSpetsnaz_2028";
		crew="BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL";
		typicalCargo[]= { 
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL"
		}; 
	}; 
};
class CfgGroups { 
	class East { 
		class RCH_PlaSpetsnaz_2028 { 
			name="Rusochina - PlaSpetsnaz (2028)";
			class Infantry {
				name="Infantry";
				class BS_O_RCH_PlaSpetsnaz_2028_Fireteam_WL {
					name="Fireteam (Woodland)";
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					side=0;
					faction="BS_O_RCH_PlaSpetsnaz_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_GL_WL";
					};
				};
				class BS_O_RCH_PlaSpetsnaz_2028_Squad_WL {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Squad (Woodland)";
					side=0;
					faction="BS_O_RCH_PlaSpetsnaz_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_GL_WL";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_AR_WL";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_GL_WL";
					};
				};
				class BS_O_RCH_PlaSpetsnaz_2028_AT_WL {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Anti-Tank (Woodland)";
					side=0;
					faction="BS_O_RCH_PlaSpetsnaz_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
				};
			};
			class Motorized {
				name="Mechanize Infantry";
				class BS_O_RCH_PlaSpetsnaz_2028_LightVehicle_WL_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="GAZ-233014 (Woodland)";
					side=0;
					faction="BS_O_RCH_PlaSpetsnaz_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_lO7LQFKpZ2c";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_AR_WL";
					};
				};
				class BS_O_RCH_PlaSpetsnaz_2028_Tank_WL_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="T-90AM (obyekt 188AM) (Woodland) ";
					side=0;
					faction="BS_O_RCH_PlaSpetsnaz_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_jhzbAY6FK8U";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_AR_WL";
					};
				};
				class BS_O_RCH_PlaSpetsnaz_2028_Tank_WL_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="T-80U (Woodland) ";
					side=0;
					faction="BS_O_RCH_PlaSpetsnaz_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_786zP_1AADc";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_AR_WL";
					};
				};
				class BS_O_RCH_PlaSpetsnaz_2028_Tank_WL_2 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="T-72B (obr. 1984g.) (Woodland) ";
					side=0;
					faction="BS_O_RCH_PlaSpetsnaz_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_awPvhHLUVNo";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_AR_WL";
					};
				};
				class BS_O_RCH_PlaSpetsnaz_2028_Tank_WL_3 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="BTR-80A (Woodland) ";
					side=0;
					faction="BS_O_RCH_PlaSpetsnaz_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_ijeFmPRemFw";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_AR_WL";
					};
				};
				class BS_O_RCH_PlaSpetsnaz_2028_Tank_WL_4 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="BRM-1K (Woodland) ";
					side=0;
					faction="BS_O_RCH_PlaSpetsnaz_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_ekoijSIWvgc";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_AR_WL";
					};
				};
				class BS_O_RCH_PlaSpetsnaz_2028_Tank_WL_5 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Obyekt-681-2 (Woodland) ";
					side=0;
					faction="BS_O_RCH_PlaSpetsnaz_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_FjA1Uklwo_c";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_AR_WL";
					};
				};
				class BS_O_RCH_PlaSpetsnaz_2028_Tank_WL_6 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="BMP-2 (obr. 1980g.) (Woodland) ";
					side=0;
					faction="BS_O_RCH_PlaSpetsnaz_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_0eBTYOqEtvA";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle="BS_O_RCH_PlaSpetsnaz_2028_AR_WL";
					};
				};
			};
		};
	};
	class Indep { 
		class RCH_PlaSpetsnaz_2028 { 
			name="Rusochina - PlaSpetsnaz (2028)";
			class Infantry {
				name="Infantry";
				class BS_I_RCH_PlaSpetsnaz_2028_Fireteam_WL {
					name="Fireteam (Woodland)";
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					side=2;
					faction="BS_I_RCH_PlaSpetsnaz_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_GL_WL";
					};
				};
				class BS_I_RCH_PlaSpetsnaz_2028_Squad_WL {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Squad (Woodland)";
					side=2;
					faction="BS_I_RCH_PlaSpetsnaz_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_GL_WL";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_AR_WL";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_GL_WL";
					};
				};
				class BS_I_RCH_PlaSpetsnaz_2028_AT_WL {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Anti-Tank (Woodland)";
					side=2;
					faction="BS_I_RCH_PlaSpetsnaz_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
				};
			};
			class Motorized {
				name="Mechanize Infantry";
				class BS_I_RCH_PlaSpetsnaz_2028_LightVehicle_WL_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="GAZ-233014 (Woodland)";
					side=2;
					faction="BS_I_RCH_PlaSpetsnaz_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_lO7LQFKpZ2c";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_AR_WL";
					};
				};
				class BS_I_RCH_PlaSpetsnaz_2028_Tank_WL_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="T-90AM (obyekt 188AM) (Woodland) ";
					side=2;
					faction="BS_I_RCH_PlaSpetsnaz_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_jhzbAY6FK8U";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_AR_WL";
					};
				};
				class BS_I_RCH_PlaSpetsnaz_2028_Tank_WL_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="T-80U (Woodland) ";
					side=2;
					faction="BS_I_RCH_PlaSpetsnaz_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_786zP_1AADc";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_AR_WL";
					};
				};
				class BS_I_RCH_PlaSpetsnaz_2028_Tank_WL_2 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="T-72B (obr. 1984g.) (Woodland) ";
					side=2;
					faction="BS_I_RCH_PlaSpetsnaz_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_awPvhHLUVNo";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_AR_WL";
					};
				};
				class BS_I_RCH_PlaSpetsnaz_2028_Tank_WL_3 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="BTR-80A (Woodland) ";
					side=2;
					faction="BS_I_RCH_PlaSpetsnaz_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_ijeFmPRemFw";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_AR_WL";
					};
				};
				class BS_I_RCH_PlaSpetsnaz_2028_Tank_WL_4 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="BRM-1K (Woodland) ";
					side=2;
					faction="BS_I_RCH_PlaSpetsnaz_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_ekoijSIWvgc";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_AR_WL";
					};
				};
				class BS_I_RCH_PlaSpetsnaz_2028_Tank_WL_5 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Obyekt-681-2 (Woodland) ";
					side=2;
					faction="BS_I_RCH_PlaSpetsnaz_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_FjA1Uklwo_c";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_AR_WL";
					};
				};
				class BS_I_RCH_PlaSpetsnaz_2028_Tank_WL_6 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="BMP-2 (obr. 1980g.) (Woodland) ";
					side=2;
					faction="BS_I_RCH_PlaSpetsnaz_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_0eBTYOqEtvA";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=2;
						vehicle="BS_I_RCH_PlaSpetsnaz_2028_AR_WL";
					};
				};
			};
		};
	};
	class West { 
		class RCH_PlaSpetsnaz_2028 { 
			name="Rusochina - PlaSpetsnaz (2028)";
			class Infantry {
				name="Infantry";
				class BS_B_RCH_PlaSpetsnaz_2028_Fireteam_WL {
					name="Fireteam (Woodland)";
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					side=1;
					faction="BS_B_RCH_PlaSpetsnaz_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_GL_WL";
					};
				};
				class BS_B_RCH_PlaSpetsnaz_2028_Squad_WL {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Squad (Woodland)";
					side=1;
					faction="BS_B_RCH_PlaSpetsnaz_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_AR_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_GL_WL";
					};
					class Unit_4 {
						position[]={20,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_5 {
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_6 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_AR_WL";
					};
					class Unit_7 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_GL_WL";
					};
				};
				class BS_B_RCH_PlaSpetsnaz_2028_AT_WL {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Anti-Tank (Woodland)";
					side=1;
					faction="BS_B_RCH_PlaSpetsnaz_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
				};
			};
			class Motorized {
				name="Mechanize Infantry";
				class BS_B_RCH_PlaSpetsnaz_2028_LightVehicle_WL_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="GAZ-233014 (Woodland)";
					side=1;
					faction="BS_B_RCH_PlaSpetsnaz_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_lO7LQFKpZ2c";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_AR_WL";
					};
				};
				class BS_B_RCH_PlaSpetsnaz_2028_Tank_WL_0 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="T-90AM (obyekt 188AM) (Woodland) ";
					side=1;
					faction="BS_B_RCH_PlaSpetsnaz_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_jhzbAY6FK8U";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_AR_WL";
					};
				};
				class BS_B_RCH_PlaSpetsnaz_2028_Tank_WL_1 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="T-80U (Woodland) ";
					side=1;
					faction="BS_B_RCH_PlaSpetsnaz_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_786zP_1AADc";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_AR_WL";
					};
				};
				class BS_B_RCH_PlaSpetsnaz_2028_Tank_WL_2 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="T-72B (obr. 1984g.) (Woodland) ";
					side=1;
					faction="BS_B_RCH_PlaSpetsnaz_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_awPvhHLUVNo";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_AR_WL";
					};
				};
				class BS_B_RCH_PlaSpetsnaz_2028_Tank_WL_3 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="BTR-80A (Woodland) ";
					side=1;
					faction="BS_B_RCH_PlaSpetsnaz_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_ijeFmPRemFw";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_AR_WL";
					};
				};
				class BS_B_RCH_PlaSpetsnaz_2028_Tank_WL_4 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="BRM-1K (Woodland) ";
					side=1;
					faction="BS_B_RCH_PlaSpetsnaz_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_ekoijSIWvgc";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_AR_WL";
					};
				};
				class BS_B_RCH_PlaSpetsnaz_2028_Tank_WL_5 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="Obyekt-681-2 (Woodland) ";
					side=1;
					faction="BS_B_RCH_PlaSpetsnaz_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_FjA1Uklwo_c";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_AR_WL";
					};
				};
				class BS_B_RCH_PlaSpetsnaz_2028_Tank_WL_6 {
					editorSubcategory="BSM_EdSubcat_Mec_Woodland";
					name="BMP-2 (obr. 1980g.) (Woodland) ";
					side=1;
					faction="BS_B_RCH_PlaSpetsnaz_2028";
					rarityGroup=0.5;
					class Unit_0 {
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_0eBTYOqEtvA";
					};
					class Unit_1 {
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_2 {
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_3 {
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_Rifleman_WL";
					};
					class Unit_4 {
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_GL_WL";
					};
					class Unit_5 {
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_AR_WL";
					};
					class Unit_6 {
						position[]={-10,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="BS_B_RCH_PlaSpetsnaz_2028_AR_WL";
					};
				};
			};
		};
	};
};

class CfgPatches { 
	class bm_specops_faction_RCH_PlaSpetsnaz_2028{
		author = "Broken Skull Mods";
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={
			"YL_QBZ191",
			"YL_191_ACC",
			"YL_QMK201",
			"YL_QBZ95",
			"rhs_c_weapons",
			"rhsusf_c_weapons",
			"A3_Weapons_F",
			"PLAG",
			"ace_hearing",
			"ace_medical_treatment",
			"ace_rangecard",
			"ace_microdagr",
			"ace_attach",
			"ace_captives",
			"kat_breathing",
			"kat_airway",
			"ace_vector",
			"tfar_handhelds",
			"YL_QJY201",
			"YL_LPVO",
			"Tier1_Weapons_cfg",
			"YL_92pack_mod",
			"A3_Weapons_F_Acc",
			"ace_realisticnames",
			"ace_scopes",
			"HOLOSUN_510C",
			"kat_pharma",
			"VME_PLA_Weapons_C",
			"YL_ACC2",
			"ace_compat_rhs_afrf3",
			"YL_191_Bipod",
			"A3_Weapons_F_Exp_Launchers_RPG7",
			"cba_jam",
			"ace_overpressure",
			"ace_reloadlaunchers",
			"A3_Weapons_F_Exp",
			"Byonet_95",
			"rhs_c_troops",
			"bm_specops_faction_US_ARMA_BASE"
};
		units[]={
			"BS_O_RCH_PlaSpetsnaz_2028_GL_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_GL_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_GL_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_AR_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_AR_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_AR_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_Medic_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_Medic_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_Medic_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_SNP_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_SNP_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_SNP_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_Rifleman_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_Rifleman_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_Rifleman_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_RTO_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_RTO_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_RTO_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_Officer_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_Officer_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_Officer_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WL",
			"BS_O_RCH_PlaSpetsnaz_2028_GL_DT",
			"BS_B_RCH_PlaSpetsnaz_2028_GL_DT",
			"BS_I_RCH_PlaSpetsnaz_2028_GL_DT",
			"BS_O_RCH_PlaSpetsnaz_2028_AR_DT",
			"BS_B_RCH_PlaSpetsnaz_2028_AR_DT",
			"BS_I_RCH_PlaSpetsnaz_2028_AR_DT",
			"BS_O_RCH_PlaSpetsnaz_2028_Medic_DT",
			"BS_B_RCH_PlaSpetsnaz_2028_Medic_DT",
			"BS_I_RCH_PlaSpetsnaz_2028_Medic_DT",
			"BS_O_RCH_PlaSpetsnaz_2028_SNP_DT",
			"BS_B_RCH_PlaSpetsnaz_2028_SNP_DT",
			"BS_I_RCH_PlaSpetsnaz_2028_SNP_DT",
			"BS_O_RCH_PlaSpetsnaz_2028_Rifleman_DT",
			"BS_B_RCH_PlaSpetsnaz_2028_Rifleman_DT",
			"BS_I_RCH_PlaSpetsnaz_2028_Rifleman_DT",
			"BS_O_RCH_PlaSpetsnaz_2028_RTO_DT",
			"BS_B_RCH_PlaSpetsnaz_2028_RTO_DT",
			"BS_I_RCH_PlaSpetsnaz_2028_RTO_DT",
			"BS_O_RCH_PlaSpetsnaz_2028_Officer_DT",
			"BS_B_RCH_PlaSpetsnaz_2028_Officer_DT",
			"BS_I_RCH_PlaSpetsnaz_2028_Officer_DT",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_DT",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_DT",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_DT",
			"BS_O_RCH_PlaSpetsnaz_2028_GL_WT",
			"BS_B_RCH_PlaSpetsnaz_2028_GL_WT",
			"BS_I_RCH_PlaSpetsnaz_2028_GL_WT",
			"BS_O_RCH_PlaSpetsnaz_2028_AR_WT",
			"BS_B_RCH_PlaSpetsnaz_2028_AR_WT",
			"BS_I_RCH_PlaSpetsnaz_2028_AR_WT",
			"BS_O_RCH_PlaSpetsnaz_2028_Medic_WT",
			"BS_B_RCH_PlaSpetsnaz_2028_Medic_WT",
			"BS_I_RCH_PlaSpetsnaz_2028_Medic_WT",
			"BS_O_RCH_PlaSpetsnaz_2028_SNP_WT",
			"BS_B_RCH_PlaSpetsnaz_2028_SNP_WT",
			"BS_I_RCH_PlaSpetsnaz_2028_SNP_WT",
			"BS_O_RCH_PlaSpetsnaz_2028_Rifleman_WT",
			"BS_B_RCH_PlaSpetsnaz_2028_Rifleman_WT",
			"BS_I_RCH_PlaSpetsnaz_2028_Rifleman_WT",
			"BS_O_RCH_PlaSpetsnaz_2028_RTO_WT",
			"BS_B_RCH_PlaSpetsnaz_2028_RTO_WT",
			"BS_I_RCH_PlaSpetsnaz_2028_RTO_WT",
			"BS_O_RCH_PlaSpetsnaz_2028_Officer_WT",
			"BS_B_RCH_PlaSpetsnaz_2028_Officer_WT",
			"BS_I_RCH_PlaSpetsnaz_2028_Officer_WT",
			"BS_O_RCH_PlaSpetsnaz_2028_DIVER_WT",
			"BS_B_RCH_PlaSpetsnaz_2028_DIVER_WT",
			"BS_I_RCH_PlaSpetsnaz_2028_DIVER_WT",
			"BS_B_RCH_PlaSpetsnaz_2028_ryNPTiFIFyk",
			"BS_O_RCH_PlaSpetsnaz_2028_ryNPTiFIFyk",
			"BS_I_RCH_PlaSpetsnaz_2028_ryNPTiFIFyk",
			"BS_B_RCH_PlaSpetsnaz_2028_gS7Kpd1loH8",
			"BS_O_RCH_PlaSpetsnaz_2028_gS7Kpd1loH8",
			"BS_I_RCH_PlaSpetsnaz_2028_gS7Kpd1loH8",
			"BS_B_RCH_PlaSpetsnaz_2028_tZJgezKnCVU",
			"BS_O_RCH_PlaSpetsnaz_2028_tZJgezKnCVU",
			"BS_I_RCH_PlaSpetsnaz_2028_tZJgezKnCVU",
			"BS_B_RCH_PlaSpetsnaz_2028_jhzbAY6FK8U",
			"BS_O_RCH_PlaSpetsnaz_2028_jhzbAY6FK8U",
			"BS_I_RCH_PlaSpetsnaz_2028_jhzbAY6FK8U",
			"BS_B_RCH_PlaSpetsnaz_2028_786zP_1AADc",
			"BS_O_RCH_PlaSpetsnaz_2028_786zP_1AADc",
			"BS_I_RCH_PlaSpetsnaz_2028_786zP_1AADc",
			"BS_B_RCH_PlaSpetsnaz_2028_awPvhHLUVNo",
			"BS_O_RCH_PlaSpetsnaz_2028_awPvhHLUVNo",
			"BS_I_RCH_PlaSpetsnaz_2028_awPvhHLUVNo",
			"BS_B_RCH_PlaSpetsnaz_2028_qs1XX9Q_5Ig",
			"BS_O_RCH_PlaSpetsnaz_2028_qs1XX9Q_5Ig",
			"BS_I_RCH_PlaSpetsnaz_2028_qs1XX9Q_5Ig",
			"BS_B_RCH_PlaSpetsnaz_2028_5lZt1Vl7_d4",
			"BS_O_RCH_PlaSpetsnaz_2028_5lZt1Vl7_d4",
			"BS_I_RCH_PlaSpetsnaz_2028_5lZt1Vl7_d4",
			"BS_B_RCH_PlaSpetsnaz_2028_qAmRB4g1vXc",
			"BS_O_RCH_PlaSpetsnaz_2028_qAmRB4g1vXc",
			"BS_I_RCH_PlaSpetsnaz_2028_qAmRB4g1vXc",
			"BS_B_RCH_PlaSpetsnaz_2028_sQRKyoCCruI",
			"BS_O_RCH_PlaSpetsnaz_2028_sQRKyoCCruI",
			"BS_I_RCH_PlaSpetsnaz_2028_sQRKyoCCruI",
			"BS_B_RCH_PlaSpetsnaz_2028_OAY7hCzJBuM",
			"BS_O_RCH_PlaSpetsnaz_2028_OAY7hCzJBuM",
			"BS_I_RCH_PlaSpetsnaz_2028_OAY7hCzJBuM",
			"BS_B_RCH_PlaSpetsnaz_2028_f_eKxZ0in14",
			"BS_O_RCH_PlaSpetsnaz_2028_f_eKxZ0in14",
			"BS_I_RCH_PlaSpetsnaz_2028_f_eKxZ0in14",
			"BS_B_RCH_PlaSpetsnaz_2028_ha_WKdGB_qo",
			"BS_O_RCH_PlaSpetsnaz_2028_ha_WKdGB_qo",
			"BS_I_RCH_PlaSpetsnaz_2028_ha_WKdGB_qo",
			"BS_B_RCH_PlaSpetsnaz_2028_ijeFmPRemFw",
			"BS_O_RCH_PlaSpetsnaz_2028_ijeFmPRemFw",
			"BS_I_RCH_PlaSpetsnaz_2028_ijeFmPRemFw",
			"BS_B_RCH_PlaSpetsnaz_2028_ekoijSIWvgc",
			"BS_O_RCH_PlaSpetsnaz_2028_ekoijSIWvgc",
			"BS_I_RCH_PlaSpetsnaz_2028_ekoijSIWvgc",
			"BS_B_RCH_PlaSpetsnaz_2028_FjA1Uklwo_c",
			"BS_O_RCH_PlaSpetsnaz_2028_FjA1Uklwo_c",
			"BS_I_RCH_PlaSpetsnaz_2028_FjA1Uklwo_c",
			"BS_B_RCH_PlaSpetsnaz_2028_0eBTYOqEtvA",
			"BS_O_RCH_PlaSpetsnaz_2028_0eBTYOqEtvA",
			"BS_I_RCH_PlaSpetsnaz_2028_0eBTYOqEtvA",
			"BS_B_RCH_PlaSpetsnaz_2028_v1nWU8SImJY",
			"BS_O_RCH_PlaSpetsnaz_2028_v1nWU8SImJY",
			"BS_I_RCH_PlaSpetsnaz_2028_v1nWU8SImJY",
			"BS_B_RCH_PlaSpetsnaz_2028_QdGXWDgKcXo",
			"BS_O_RCH_PlaSpetsnaz_2028_QdGXWDgKcXo",
			"BS_I_RCH_PlaSpetsnaz_2028_QdGXWDgKcXo",
			"BS_B_RCH_PlaSpetsnaz_2028_7rarPtw7Yho",
			"BS_O_RCH_PlaSpetsnaz_2028_7rarPtw7Yho",
			"BS_I_RCH_PlaSpetsnaz_2028_7rarPtw7Yho",
			"BS_B_RCH_PlaSpetsnaz_2028_lO7LQFKpZ2c",
			"BS_O_RCH_PlaSpetsnaz_2028_lO7LQFKpZ2c",
			"BS_I_RCH_PlaSpetsnaz_2028_lO7LQFKpZ2c",
			"BS_B_RCH_PlaSpetsnaz_2028_203DPPUkODo",
			"BS_O_RCH_PlaSpetsnaz_2028_203DPPUkODo",
			"BS_I_RCH_PlaSpetsnaz_2028_203DPPUkODo",
			"BS_B_RCH_PlaSpetsnaz_2028_b9EVCMbB6Uk",
			"BS_O_RCH_PlaSpetsnaz_2028_b9EVCMbB6Uk",
			"BS_I_RCH_PlaSpetsnaz_2028_b9EVCMbB6Uk",
			"BS_B_RCH_PlaSpetsnaz_2028_jS_IDkJ1rC4",
			"BS_O_RCH_PlaSpetsnaz_2028_jS_IDkJ1rC4",
			"BS_I_RCH_PlaSpetsnaz_2028_jS_IDkJ1rC4",
			"BS_B_RCH_PlaSpetsnaz_2028_rq5vG7zk2sk",
			"BS_O_RCH_PlaSpetsnaz_2028_rq5vG7zk2sk",
			"BS_I_RCH_PlaSpetsnaz_2028_rq5vG7zk2sk",
			"BS_B_RCH_PlaSpetsnaz_2028_VFErVsIEtXA",
			"BS_O_RCH_PlaSpetsnaz_2028_VFErVsIEtXA",
			"BS_I_RCH_PlaSpetsnaz_2028_VFErVsIEtXA",
			"BS_B_RCH_PlaSpetsnaz_2028_Nr8irHil7_0",
			"BS_O_RCH_PlaSpetsnaz_2028_Nr8irHil7_0",
			"BS_I_RCH_PlaSpetsnaz_2028_Nr8irHil7_0",
			"BS_B_RCH_PlaSpetsnaz_2028_ic2SMN09NX0",
			"BS_O_RCH_PlaSpetsnaz_2028_ic2SMN09NX0",
			"BS_I_RCH_PlaSpetsnaz_2028_ic2SMN09NX0",
			"BS_B_RCH_PlaSpetsnaz_2028_VbSTeyL03BM",
			"BS_O_RCH_PlaSpetsnaz_2028_VbSTeyL03BM",
			"BS_I_RCH_PlaSpetsnaz_2028_VbSTeyL03BM"
};
	};
};
class CfgFactionClasses {
	// As Friendly (BluFOR)
	class BS_B_RCH_PlaSpetsnaz_2028_BASE { 
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
		brokenSkullArsenal[]={"YL_QBU191_PRS","YL_ACC_SIDE_IR","yl_qmk201_2d","YL_30rnd_58x42_DBP10A_T_Mag_MY","rhs_acc_harris_swivel","rhs_weap_M320","1Rnd_HE_Grenade_shell","uniform_FS_Gloves_Holster_F","ACE_EarPlugs","ACE_morphine","ACE_tourniquet","ACE_packingBandage","ACE_quikclot","ACE_RangeCard","ACE_microDAGR","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_CableTie","kat_chestSeal","kat_guedel","v19_F","1Rnd_Smoke_Grenade_shell","GFH_h19_FAST_Tag_CORPORAL_F","ACE_Vector","ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","aNVG","YL_QJY201","YL_lpvo_8x_02","Tier1_250Rnd_762x51_Belt_M61_AP","yl_92B_LAB","YL_QSZ92A_compestor2","YL_qsz92_lssd_laser_IR","optic_Yorris","YL_92B_15Rnd_issued","HOLOSUN_510C_B_3XUP_2D","kat_accuvac","kat_stethoscope","ACE_adenosine","ACE_elasticBandage","ACE_plasmaIV","ACE_plasmaIV_500","ACE_splint","ACE_suture","kat_larynx","kat_naloxone","kat_IO_FAST","kat_ncdKit","kat_aatKit","kat_Pulseoximeter","YL_QBU191_BOLT","VME_QBU88_Scope","YL_qmk191","rhs_weap_rpg7","rhs_acc_1pn93_1","rhs_rpg7_PG7VL_mag","YL_QBU191","yl_muzzle_snds_191","HOLOSUN_510C_B_3XUP","YL_30rnd_58x42_DBP10A_Mag_MY","yl_191_bipod","launch_RPG7_F","rhs_rpg7_OG7V_mag","rhs_rpg7_PG7V_mag","rhs_rpg7_PG7VM_mag","RPG7_F","Byonet_95_F","YL_ACC_IR","YL_lpvo_8x","YL_30rnd_58x42_DBP10A_N_Mag_MY","rhs_rpg7_TBG7V_mag","rhs_rpg7_type69_airburst_mag","rhs_rpg7_PG7VS_mag","rhs_rpg7_PG7VR_mag","optic_QLU11","v19_rHvy_F","yl_92a_SW_PA_bctriwpn","YL_92a_Silencer_SW","HOLOSUN_510C_B","rhs_beret_milp","rhs_zsh7a_mike_green_alt"};

		garage[]={{"BS_B_RCH_PlaSpetsnaz_2028_ryNPTiFIFyk",0,1500,-1},{"BS_B_RCH_PlaSpetsnaz_2028_gS7Kpd1loH8",0,1500,-1},{"BS_B_RCH_PlaSpetsnaz_2028_tZJgezKnCVU",0,50,-1},{"BS_B_RCH_PlaSpetsnaz_2028_jhzbAY6FK8U",0,1500,1},{"BS_B_RCH_PlaSpetsnaz_2028_786zP_1AADc",0,1500,1},{"BS_B_RCH_PlaSpetsnaz_2028_awPvhHLUVNo",0,1500,1},{"BS_B_RCH_PlaSpetsnaz_2028_qs1XX9Q_5Ig",0,20000,-1},{"BS_B_RCH_PlaSpetsnaz_2028_5lZt1Vl7_d4",0,2000,-1},{"BS_B_RCH_PlaSpetsnaz_2028_qAmRB4g1vXc",0,3000,-1},{"BS_B_RCH_PlaSpetsnaz_2028_sQRKyoCCruI",0,3000,-1},{"BS_B_RCH_PlaSpetsnaz_2028_OAY7hCzJBuM",0,700,-1},{"BS_B_RCH_PlaSpetsnaz_2028_f_eKxZ0in14",0,2000,-1},{"BS_B_RCH_PlaSpetsnaz_2028_ha_WKdGB_qo",0,2000,-1},{"BS_B_RCH_PlaSpetsnaz_2028_ijeFmPRemFw",0,40,1},{"BS_B_RCH_PlaSpetsnaz_2028_ekoijSIWvgc",0,10,1},{"BS_B_RCH_PlaSpetsnaz_2028_FjA1Uklwo_c",0,10,1},{"BS_B_RCH_PlaSpetsnaz_2028_0eBTYOqEtvA",0,10,1},{"BS_B_RCH_PlaSpetsnaz_2028_v1nWU8SImJY",0,1500,-1},{"BS_B_RCH_PlaSpetsnaz_2028_QdGXWDgKcXo",0,50,-1},{"BS_B_RCH_PlaSpetsnaz_2028_7rarPtw7Yho",0,1500,0},{"BS_B_RCH_PlaSpetsnaz_2028_lO7LQFKpZ2c",0,500,2},{"BS_B_RCH_PlaSpetsnaz_2028_203DPPUkODo",0,500,-1},{"BS_B_RCH_PlaSpetsnaz_2028_b9EVCMbB6Uk",0,500,-1},{"BS_B_RCH_PlaSpetsnaz_2028_jS_IDkJ1rC4",0,50,-1},{"BS_B_RCH_PlaSpetsnaz_2028_rq5vG7zk2sk",0,50,-1},{"BS_B_RCH_PlaSpetsnaz_2028_VFErVsIEtXA",0,50,-1},{"BS_B_RCH_PlaSpetsnaz_2028_Nr8irHil7_0",0,50,0},{"BS_B_RCH_PlaSpetsnaz_2028_ic2SMN09NX0",0,50,-1},{"BS_B_RCH_PlaSpetsnaz_2028_VbSTeyL03BM",0,50,3}};
		SamSystem[]={};
		SearchLight[]={};
		StaticLowMG[]={};
		StaticHighMG[]={};
		StaticMotar[]={};
		StaticAntiAir[]={};
		VehicleTechnicals[]={"BS_B_RCH_PlaSpetsnaz_2028_lO7LQFKpZ2c"};
		VehicleAntiAircraft[]={"BS_B_RCH_PlaSpetsnaz_2028_7rarPtw7Yho","BS_B_RCH_PlaSpetsnaz_2028_Nr8irHil7_0"};
		VehicleTanks[]={"BS_B_RCH_PlaSpetsnaz_2028_jhzbAY6FK8U","BS_B_RCH_PlaSpetsnaz_2028_786zP_1AADc","BS_B_RCH_PlaSpetsnaz_2028_awPvhHLUVNo","BS_B_RCH_PlaSpetsnaz_2028_ijeFmPRemFw","BS_B_RCH_PlaSpetsnaz_2028_ekoijSIWvgc","BS_B_RCH_PlaSpetsnaz_2028_FjA1Uklwo_c","BS_B_RCH_PlaSpetsnaz_2028_0eBTYOqEtvA"};
		VehicleTransport[]={"BS_B_RCH_PlaSpetsnaz_2028_VbSTeyL03BM"};
	};
	// As Friendly (BluFOR)
	class BS_B_RCH_PlaSpetsnaz_2028 : BS_B_RCH_PlaSpetsnaz_2028_BASE { 
		useForSpecOps = 1;   
		displayName = "Rusochina - PlaSpetsnaz (2028)";
		side = 1;       
		flag = "\A3\Data_F\Flags\flag_US_CO.paa";
		icon = "\A3\Data_F\Flags\flag_US_CO.paa";
		priority = 0; 
	};
	// As Opposite Forces (OpFOR)
	class BS_O_RCH_PlaSpetsnaz_2028 : BS_B_RCH_PlaSpetsnaz_2028_BASE { 
		useForSpecOps = 1;
		displayName = "Rusochina - PlaSpetsnaz (2028)";
		side = 0;       
		flag = "\A3\Data_F\Flags\flag_US_CO.paa";
		icon = "\A3\Data_F\Flags\flag_US_CO.paa";
		priority = 0; 
	};
	// As Independent (Independent)
	class BS_I_RCH_PlaSpetsnaz_2028 : BS_B_RCH_PlaSpetsnaz_2028_BASE { 
		useForSpecOps = 1;
		displayName = "Rusochina - PlaSpetsnaz (2028)";
		side = 2;       
		flag = "\A3\Data_F\Flags\flag_US_CO.paa";
		icon = "\A3\Data_F\Flags\flag_US_CO.paa";
		priority = 0; 
	};
};
// As Friendly (BluFOR)
class SpecOps_Module_BLUFOR_Factions { 
	class BS_B_RCH_PlaSpetsnaz_2028 { name = "Rusochina - PlaSpetsnaz (2028)"; value = "BS_B_RCH_PlaSpetsnaz_2028"; };  
};
// As Friendly (BluFOR)
class SpecOps_Module_OPFOR_Factions { 
	class BS_O_RCH_PlaSpetsnaz_2028 { name = "Rusochina - PlaSpetsnaz (2028)"; value = "BS_O_RCH_PlaSpetsnaz_2028"; };  
};
// As Friendly (BluFOR)
class SpecOps_Module_GRE_Factions { 
	class BS_I_RCH_PlaSpetsnaz_2028 { name = "Rusochina - PlaSpetsnaz (2028)"; value = "BS_I_RCH_PlaSpetsnaz_2028"; };  
};