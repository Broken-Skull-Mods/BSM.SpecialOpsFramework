



class bsm_so_app_fast_travel : BSM_DT_Tablet_BASE {
	idd = -1; // idd should be unique, usually should not use it... all behavior should be done through events
	onLoad="[(_this # 0)] execVM 'loadApp.sqf'";
	class controls : controls {
		// Import Base Control Layout;
		class Frame_Base : Frame_Base { };
		class Frame_Base_Picture : Frame_Base_Picture { };
		class Button_Home_Base : Button_Home_Base { };
		class Button_Up_Base : Button_Up_Base { 
			// action = "[(_this # 0)] call SpecOps_fnc_chestPhoneHomeScreenUp;";
		};
		class Button_Down_Base : Button_Down_Base {
			// action = "[(_this # 0)] call SpecOps_fnc_chestPhoneHomeScreenDown;";
		};
		class Button_Exit_Base : Button_Exit_Base { };

		class DT_Tablet_Picture_Background_EFFYOUTO: RscPicture
		{
			idc = 1289;

			text = "Pictures\BackgroundBlack.paa";
			x = 0.223625 * safezoneW + safezoneX;
			y = 0.3064 * safezoneH + safezoneY;
			w = 0.484688 * safezoneW;
			h = 0.539 * safezoneH;
		};

		class Location_List: RscListBox
		{
			onLoad="[(_this # 0)] execVM 'loadAppLocations.sqf'";
			idc = 1500;
			x = 0.262812 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.190781 * safezoneW;
			h = 0.396 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};

		class button_left: RscButton
		{
			text = "Set as Respawn";
			idc = 1600;
			x = 0.45875 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.044 * safezoneHe;
		};

		class button_right: RscButton
		{
			idc = 1601;
			text = "Travel";
			x = 0.567031 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.044 * safezoneH;
		};
	
		class TravelMap: RscMapControl {

			access = 0;

			type = 101;

			idc = 51;

			style = 48;

			//idc = 10023; 
			//type = CT_MAP_MAIN; 
			//style = ST_PICTURE; 

			// drawObjects = 1;  // controle if you wana see your team on the map

			colorBackground[] = {0.969,0.957,0.949,1};
			// colorBackground[] = {0.80, 0.80, 0.60, 1.00}; 

			colorOutside[] = {0,0,0,1};

			colorText[] = {0,0,0,1};

			font = "TahomaB";

			sizeEx = 0.04;

			colorSea[] = {0.467,0.631,0.851,0.5};

			colorForest[] = {0.624,0.78,0.388,0.5};

			colorRocks[] = {0,0,0,0.3};

			colorCountlines[] = {0.572,0.354,0.188,0.25};

			colorMainCountlines[] = {0.572,0.354,0.188,0.5};

			colorCountlinesWater[] = {0.491,0.577,0.702,0.3};

			colorMainCountlinesWater[] = {0.491,0.577,0.702,0.6};

			colorForestBorder[] = {0,0,0,0};

			colorRocksBorder[] = {0,0,0,0};

			colorPowerLines[] = {0.1,0.1,0.1,1};

			colorRailWay[] = {0.8,0.2,0,1};

			colorNames[] = {0.1,0.1,0.1,0.9};

			colorInactive[] = {1,1,1,0.5};

			colorLevels[] = {0.286,0.177,0.094,0.5};

			colorTracks[] = {0.84,0.76,0.65,0.15};

			colorRoads[] = {0.7,0.7,0.7,1};

			colorMainRoads[] = {0.9,0.5,0.3,1};

			colorTracksFill[] = {0.84,0.76,0.65,1};

			colorRoadsFill[] = {1,1,1,1};

			colorMainRoadsFill[] = {1,0.6,0.4,1};

			colorGrid[] = {0.1,0.1,0.1,0.6};

			colorGridMap[] = {0.1,0.1,0.1,0.6};

			stickX[] = {0.2,{"Gamma",1,1.5}};

			stickY[] = {0.2,{"Gamma",1,1.5}};

			widthRailWay = 4;



			moveOnEdges = 0;//1;


			x = 0.45875 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.25 * safezoneW;
			h = 0.4 * safezoneH;

			shadow = 0;

			ptsPerSquareSea = 5;

			ptsPerSquareTxt = 3;

			ptsPerSquareCLn = 10;

			ptsPerSquareExp = 10;

			ptsPerSquareCost = 10;

			ptsPerSquareFor = 9;

			ptsPerSquareForEdge = 9;

			ptsPerSquareRoad = 6;

			ptsPerSquareObj = 9;

			showCountourInterval = 0;

			scaleMin = 0.001;

			scaleMax = 1;  // contols max zoom of map

			scaleDefault = 0.16;

			maxSatelliteAlpha = 0.55;  // contols the satelite transparency of the map

			alphaFadeStartScale = 0.35;

			alphaFadeEndScale = 0.4;

			fontLabel = "PuristaMedium";

			sizeExLabel = "( ( ( ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";

			fontGrid = "TahomaB";

			sizeExGrid = 0.02;

			fontUnits = "TahomaB";

			sizeExUnits = "( ( ( ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";

			fontNames = "PuristaMedium";

			sizeExNames = "( ( ( ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8) * 2";

			fontInfo = "PuristaMedium";

			sizeExInfo = "( ( ( ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";

			fontLevel = "TahomaB";

			sizeExLevel = 0.02;

			text = "#(argb,8,8,3)color(1,1,1,1)"; 
			_gridPos = mapGridPosition player;
		};
		
	};
};










	



