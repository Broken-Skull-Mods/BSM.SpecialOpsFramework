	// Land_Atm_01_F 
	// Land_Atm_02_F -0.284912,0.179688,-0.201081
	class TFT_Ace_Points: Thing
	{
	
		scope=1;
		scopeCurator=1;
		curatorCanAttach = 0;
		displayName="Medical Area Offset Position";
		model="a3\structures_f\mil\helipads\helipadempty_f.p3d";
		editorCategory="TFTE_Category";
		editorSubcategory="TFTE_SpecialOpsOthers";
	};
    
	class TFT_Medical_Box_Door: TFT_Ace_Points { };
	class TFT_Medical_Box: Thing
	{
	
		scope=2;
		scopeCurator=2;
		curatorCanAttach = 1;
		displayName="Medical Area";
		model="a3\supplies_f_heli\slingload\slingload_01_medevac_f.p3d";
		editorCategory="TFTE_Category";
		editorSubcategory="TFTE_SpecialOpsOthers";
		// class EventHandlers { 
        //     init = "[_this select 0] call SpecOps_fnc_registerAttachAceOffset;"; 
        // };
		
        class Ace_Points {
			class Door {
				classname = "TFT_Medical_Box_Door";
				offsetPos[]={ 0.291138,2.97791,-0.0757866 };
			};
		};
	};

	class TFT_Shipping_Container_Door: TFT_Ace_Points { };
	class TFT_Shipping_Container: Thing
	{
	
		scope=2;
		scopeCurator=2;
		curatorCanAttach = 1;
		displayName="Shipping Container";
		model="a3\supplies_f_heli\slingload\slingload_01_cargo_f.p3d";
		editorCategory="TFTE_Category";
		editorSubcategory="TFTE_SpecialOpsOthers";
		// class EventHandlers { 
        //     init = "[_this select 0] call SpecOps_fnc_registerAttachAceOffset;"; 
        // };		
        class Ace_Points {
			class Door {
				classname = "TFT_Shipping_Container_Door";
				offsetPos[]={ -0.0216064,3.04077,-0.0340347 };
			};
		};
	};

	class TFT_Command_Center_Monitor_1: TFT_Ace_Points { };
	class TFT_Command_Center_Monitor_2: TFT_Ace_Points { };
	class TFT_Command_Center_Monitor_3: TFT_Ace_Points { };
	class TFT_Command_Center: Thing
	{
        proxyOf = "";
		scope=2;
		scopeCurator=2;
		curatorCanAttach = 1;
		displayName="Command Console";
		model="a3\props_f_decade\objectives\ruggedterminal_01_communications_hub_f.p3d";
		editorCategory="TFTE_Category";
		editorSubcategory="TFTE_SpecialOpsOthers";
		// class EventHandlers { 
        //     init = "[_this select 0] call SpecOps_fnc_registerAttachAceOffset;"; 
        // };		
        class Ace_Points {
			class Monitor_1 {
				classname = "TFT_Command_Center_Monitor_1";
				offsetPos[]={ -0.163147,-0.221069,-2.96736 };
			};
			class Monitor_2 {
				classname = "TFT_Command_Center_Monitor_2";
				offsetPos[]={ -0.363403,-0.571167,-2.97373 };
			};
			class Monitor_3 {
				classname = "TFT_Command_Center_Monitor_3";
				offsetPos[]={ 0.0388184,-0.580811,-2.97183 };
			};
		};
	};

	class Land_MobileRadar_01_radar_F_ACE_P0: TFT_Ace_Points { };
	class Land_MobileRadar_01_radar_F_ACE_P1: TFT_Ace_Points { };
	class Land_MobileRadar_01_radar_F_ACE_P2: TFT_Ace_Points { };
	class Land_MobileRadar_01_radar_F_ACE_P3: TFT_Ace_Points { };
	class Land_MobileRadar_01_radar_F_ACE_P4: TFT_Ace_Points { };
	class Land_MobileRadar_01_radar_F_ACE_P5: TFT_Ace_Points { };
	class Land_MobileRadar_01_radar_F;
	class TFT_Land_MobileRadar_01_radar_F: Land_MobileRadar_01_radar_F
	{
		editorCategory="TFTE_Category";
		editorSubcategory="TFTE_SpecialOpsOthers";
		// class EventHandlers { 
        //     init = "[_this select 0] call SpecOps_fnc_registerAttachAceOffset;"; 
        // };		
        class Ace_Points {
			class P0 {
				classname = "Land_MobileRadar_01_radar_F_ACE_P0";
				offsetPos[]={ -2.6825, -2.13965, 0.891001 };
			};
			class P1 {
				classname = "Land_MobileRadar_01_radar_F_ACE_P1";
				offsetPos[]={ 2.7981, -2.14746, 0.891001 };
			};
			class P2 {
				classname = "Land_MobileRadar_01_radar_F_ACE_P2";
				offsetPos[]={ -2.69452, -7.62988, 0.96726 };
			};
			class P3 {
				classname = "Land_MobileRadar_01_radar_F_ACE_P3";
				offsetPos[]={ 2.71759, -7.62012, 1.04352 };
			};
			class P4 {
				classname = "Land_MobileRadar_01_radar_F_ACE_P4";
				offsetPos[]={ -6.51703, -4.86621, 0.814741 };
			};
			class P5 {
				classname = "Land_MobileRadar_01_radar_F_ACE_P5";
				offsetPos[]={ 6.6264, -4.85254, 0.814741 };
			};
		};
	};