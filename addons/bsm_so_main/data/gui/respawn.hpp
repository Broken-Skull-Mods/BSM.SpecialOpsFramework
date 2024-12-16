class BSM_Respawn_Screen
{
	idd = 1238;

	onLoad = "[(_this # 0)] spawn SpecOps_fnc_orkaUIRespawnOnLoadPage;";
	onUnLoad = "[(_this # 0)] spawn SpecOps_fnc_orkaUIRespawnOnUnLoadPage;";

	class controls
	{

		class Main_SO_TeamAssistant_Frame: SO_TeamAssistant_Frame_Base{};
		class Main_SO_TeamAssistant_Picture: SO_TeamAssistant_Background_Picture{}; 
		class Main_SO_Header_Bg: Header_Background_23984213{};
		class Main_SO_Logo_Picture: Logo_Picture{};
		// class Main_SO_DASHBOARD: RscButton_1600 { };
		// class Main_SO_OPERATIONS: RscButton_1601{colorBackground[] = {0.06,0.24,0.89};};
		// class Main_SO_RULES: RscButton_1602 { };
		// class Main_SO_EXIT: RscButton_1603 { };
		// class Main_SO_TeamAssistant_Base_Exit: SO_TeamAssistant_Base_Exit { };  
		class Main_SO_Corner_right: SO_Corner_Picture{};
		class Main_SO_Version_Number: SO_Version_Number{};
		class Main_SO_BlueLine_1631: BlueLine_1631{};

//1111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111
		class RscText_1001: RscText
		{
			//idc = 1001;
			text = "Deployement Locations"; 
			x = 0.095 * safezoneW + safezoneX;
			y = 0.231 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.044 * safezoneH;
			font = "TahomaB";
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			linespacing = 1;
		};	

		class WhiteLine_1631: RscButton
		{
			//idc = 1631;
			
			text = ""; 
			
			x = 0.049 * safezoneW + safezoneX;
			y = 0.281 * safezoneH + safezoneY;
			w = 0.15 * safezoneW;
			h = 0.002 * safezoneH;

			colorBackground[] = {1,1,1,1};
			colorBackgroundActive[] = {1,1,1,1};    // hover over
			colorBackgroundFocused[] = {0,0,1,1};	// selected like with the Tab kay
			periodFocus = 0;
			periodOver  = 0;
			period = 0;					

		};	
	

		class Orka_List: RscListBox
		{
			idc = 1500;
			onLoad = "[(_this # 0)] spawn SpecOps_fnc_orkaUIRespawnOnLoadList;";
		
			x = 0.049 * safezoneW + safezoneX;
			y = 0.301 * safezoneH + safezoneY;
			w = 0.15 * safezoneW;
			h = 0.341 * safezoneH;

			//onLBSelChanged = "systemChat str ['onLBSelChanged',_this]; false";
			//onLBSelChanged = "systemChat format ['%1 | %2 | %3', _this select 0, _this select 1, _this select 2]; false";
			//onLBSelChanged = "systemChat format ['%1 | %2 | %3', _this select 0, (_this select 0) lbData (_this select 1) , _this select 2]; false";
		};

//2222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222	



		class RscText_1003: RscText
		{
			idc = 1003;

			text = "Facts & Quotes"; 

			x = 0.27 * safezoneW + safezoneX;
			y = 0.231 * safezoneH + safezoneY;
			w = 0.15 * safezoneW;
			h = 0.044 * safezoneH;

			font = "TahomaB";
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			linespacing = 1;
		};

		class WhiteLine_1642: RscButton
		{			
			//idc = 1642;
		
			text = ""; 
		
			x = 0.2725 * safezoneW + safezoneX;
			y = 0.281 * safezoneH + safezoneY;
			w = 0.35 * safezoneW;
			h = 0.002 * safezoneH;

			colorBackground[] = {1,1,1,1};
			colorBackgroundActive[] = {1,1,1,1};    // hover over
			colorBackgroundFocused[] = {0,0,1,1};	// selected like with the Tab kay
			periodFocus = 0;
			periodOver  = 0;
			period = 0;					

		};

		class RscStructuredText_1100: RscStructuredText
		{
			idc = 1100;

			text = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed pulvinar iaculis nibh. Ut id aliquet urna, vitae  volutpat justo. Vestibulum at velit in tortor viverra aliquam. Quisque efficitur a enim vitae suscipit.  Morbi dolor massa, vehicula ut magna sed, euismod tempus nulla. porta semper neque,  eget volutpat nunc convallis in. Nam justo urna, pellentesque id scelerisque vitae, feugiat eu turpis.  Maecenas orci lectus,  commodo, mollis facilisis quam. Donec eu arcu ullamcorper, et, ultrices elit.  Donec sed mauris sed  felis ullamcorper. Duis ullamcorper ipsum ac arcu euismod, id posuere turpis facilisis. "; 

			x = 0.27 * safezoneW + safezoneX;
			y = 0.3 * safezoneH + safezoneY;
			w = 0.34 * safezoneW;
			h = 0.341 * safezoneH;

		};

//33333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333


		class RscText_1004: RscText
		{
			//idc = 1004;

			text = "Deployement Screen"; 

			x = 0.7 * safezoneW + safezoneX;
			y = 0.231 * safezoneH + safezoneY;
			w = 0.15 * safezoneW;
			h = 0.044 * safezoneH;

			font = "TahomaB";
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			linespacing = 1;
		};

		class WhiteLine_1632: RscButton
		{			
			//idc = 1635;
		
			text = ""; 
		
			x = 0.7 * safezoneW + safezoneX;
			y = 0.281 * safezoneH + safezoneY;
			w = 0.25 * safezoneW;
			h = 0.002 * safezoneH;

			colorBackground[] = {1,1,1,1};
			colorBackgroundActive[] = {1,1,1,1};    // hover over
			colorBackgroundFocused[] = {0,0,1,1};	// selected like with the Tab kay
			periodFocus = 0;
			periodOver  = 0;
			period = 0;					

		};

		class AreaPicture1: RscPicture
		{
			idc = 1200;

			text = "\bsm_so_main\data\gui\Pictures\AreaPicture1.paa";
			// bsm_so_medical
			x = 0.7 * safezoneW + safezoneX;
			y = 0.3 * safezoneH + safezoneY;
			w = 0.25 * safezoneW;
			h = 0.4 * safezoneH;
		};

		class RscButton_1602: RscButton
		{
			// action = "[] spawn SpecOps_fnc_orkaUIRespawnButtonDeploy;";

			idc = 1602;

			text = "Deploy"; 

			x = 0.755 * safezoneW + safezoneX;
			y = 0.75 * safezoneH + safezoneY;
			w = 0.14 * safezoneW;
			h = 0.1 * safezoneH;

			font = "TahomaB";
			colorBackground[] = {0,0,1,0.3};
			colorBackgroundActive[] = {0,0,1,1};    // hover over
			colorBackgroundFocused[] = {0,0,1,1};	// selected like with the Tab kay
			periodFocus = 0;
			periodOver  = 0;
			period = 0;					

		};

//44444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444

// effing map zone

#define CT_MAP_MAIN 101 
#define ST_PICTURE 48 
// #define MAP_IDC 10023
#define MAP_IDC 51 



class MC_ASM_RscMapControl

{

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



class Legend

{

colorBackground[] = {1,1,1,0.5};

color[] = {0,0,0,1};

x = "SafeZoneX + ( ((safezoneW / safezoneH) min 1.2) / 40)";

y = "SafeZoneY + safezoneH - 4.5 * ( ( ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";

w = "10 * ( ((safezoneW / safezoneH) min 1.2) / 40)";

h = "3.5 * ( ( ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";

font = "PuristaMedium";

sizeEx = "( ( ( ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";

};

class ActiveMarker

{

color[] = {0.3,0.1,0.9,1};

size = 50;

};

class Command

{

color[] = {1,1,1,1};

icon = "\A3\ui_f\data\map\mapcontrol\waypoint_ca.paa" ;

size = 18;

importance = 1;

coefMin = 1;

coefMax = 1;

};

class Task

{

colorCreated[] = {1,1,1,1};

colorCanceled[] = {0.7,0.7,0.7,1};

colorDone[] = {0.7,1,0.3,1};

colorFailed[] = {1,0.3,0.2,1};

color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};

icon = "\A3\ui_f\data\map\mapcontrol\taskIcon_CA.paa" ;

iconCreated = "\A3\ui_f\data\map\mapcontrol\taskIconCreated_CA.paa";

iconCanceled = "\A3\ui_f\data\map\mapcontrol\taskIconCanceled_CA.paa";

iconDone = "\A3\ui_f\data\map\mapcontrol\taskIconDone_CA.paa" ;

iconFailed = "\A3\ui_f\data\map\mapcontrol\taskIconFailed_CA.paa";

size = 27;

importance = 1;

coefMin = 1;

coefMax = 1;

};

class CustomMark

{

color[] = {0,0,0,1};

icon = "\A3\ui_f\data\map\mapcontrol\custommark_ca.paa";

size = 24;

importance = 1;

coefMin = 1;

coefMax = 1;

};

class Tree

{

color[] = {0.45,0.64,0.33,0.4};

icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";

size = 12;

importance = "0.9 * 16 * 0.05";

coefMin = 0.25;

coefMax = 4;

};

class SmallTree

{

color[] = {0.45,0.64,0.33,0.4};

icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";

size = 12;

importance = "0.6 * 12 * 0.05";

coefMin = 0.25;

coefMax = 4;

};

class Bush

{

color[] = {0.45,0.64,0.33,0.4};

icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";

size = "14/2";

importance = "0.2 * 14 * 0.05 * 0.05";

coefMin = 0.25;

coefMax = 4;

};

class Church

{

color[] = {1,1,1,1};

icon = "\A3\ui_f\data\map\mapcontrol\church_CA.paa";

size = 24;

importance = 1;

coefMin = 0.85;

coefMax = 1;

};


class Chapel

{

color[] = {0,0,0,1};

icon = "\A3\ui_f\data\map\mapcontrol\Chapel_CA.paa";

size = 24;

importance = 1;

coefMin = 0.85;

coefMax = 1;

};

class Cross

{

color[] = {0,0,0,1};

icon = "\A3\ui_f\data\map\mapcontrol\Cross_CA.paa";

size = 24;

importance = 1;

coefMin = 0.85;

coefMax = 1;

};

class Rock

{

color[] = {0.1,0.1,0.1,0.8};

icon = "\A3\ui_f\data\map\mapcontrol\rock_ca.paa";

size = 12;

importance = "0.5 * 12 * 0.05";

coefMin = 0.25;

coefMax = 4;

};

class Bunker

{

color[] = {0,0,0,1};

icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";

size = 14;

importance = "1.5 * 14 * 0.05";

coefMin = 0.25;

coefMax = 4;

};

class Fortress

{

color[] = {0,0,0,1};

icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";

size = 16;

importance = "2 * 16 * 0.05";

coefMin = 0.25;

coefMax = 4;

};

class Fountain

{

color[] = {0,0,0,1};

icon = "\A3\ui_f\data\map\mapcontrol\fountain_ca.paa" ;

size = 11;

importance = "1 * 12 * 0.05";

coefMin = 0.25;

coefMax = 4;

};

class ViewTower

{

color[] = {0,0,0,1};

icon = "\A3\ui_f\data\map\mapcontrol\viewtower_ca.paa";

size = 16;

importance = "2.5 * 16 * 0.05";

coefMin = 0.5;

coefMax = 4;

};

class Lighthouse

{

color[] = {1,1,1,1};

icon = "\A3\ui_f\data\map\mapcontrol\lighthouse_CA.paa";

size = 24;

importance = 1;

coefMin = 0.85;

coefMax = 1;

};

// controls if you wana see drawings on the map
class LineMarker  
{
textureComboBoxColor = "#(argb,8,8,3)color(1,1,1,1)";
lineWidthThin = 0.008;
lineWidthThick = 0.014;
lineDistanceMin = 3e-005;
lineLengthMin = 5;
};

class Quay

{

color[] = {1,1,1,1};

icon = "\A3\ui_f\data\map\mapcontrol\quay_CA.paa";

size = 24;

importance = 1;

coefMin = 0.85;

coefMax = 1;

};

class Fuelstation

{

color[] = {1,1,1,1};

icon = "\A3\ui_f\data\map\mapcontrol\fuelstation_CA.paa";

size = 24;

importance = 1;

coefMin = 0.85;

coefMax = 1;

};

class Hospital

{

color[] = {1,1,1,1};

icon = "\A3\ui_f\data\map\mapcontrol\hospital_CA.paa" ;

size = 24;

importance = 1;

coefMin = 0.85;

coefMax = 1;

};

class BusStop

{

color[] = {1,1,1,1};

icon = "\A3\ui_f\data\map\mapcontrol\busstop_CA.paa";

size = 24;

importance = 1;

coefMin = 0.85;

coefMax = 1;

};

class Transmitter

{

color[] = {1,1,1,1};

icon = "\A3\ui_f\data\map\mapcontrol\transmitter_CA.paa";

size = 24;

importance = 1;

coefMin = 0.85;

coefMax = 1;

};

class Stack

{

color[] = {0,0,0,1};

icon = "\A3\ui_f\data\map\mapcontrol\stack_ca.paa";

size = 20;

importance = "2 * 16 * 0.05";

coefMin = 0.9;

coefMax = 4;

};

class Ruin

{

color[] = {0,0,0,1};

icon = "\A3\ui_f\data\map\mapcontrol\ruin_ca.paa";

size = 16;

importance = "1.2 * 16 * 0.05";

coefMin = 1;

coefMax = 4;

};

class Tourism

{

color[] = {0,0,0,1};

icon = "\A3\ui_f\data\map\mapcontrol\tourism_ca.paa";

size = 16;

importance = "1 * 16 * 0.05";

coefMin = 0.7;

coefMax = 4;

};

class Watertower

{

color[] = {1,1,1,1};

icon = "\A3\ui_f\data\map\mapcontrol\watertower_CA.paa";

size = 24;

importance = 1;

coefMin = 0.85;

coefMax = 1;

};

class Waypoint

{

color[] = {0,0,0,1};

size = 24;

importance = 1;

coefMin = 1;

coefMax = 1;

icon = "\A3\ui_f\data\map\mapcontrol\waypoint_ca.paa" ;

};

class WaypointCompleted

{

color[] = {0,0,0,1};

size = 24;

importance = 1;

coefMin = 1;

coefMax = 1;

icon = "\A3\ui_f\data\map\mapcontrol\waypointCompleted_ca.paa";

};

moveOnEdges = 0;//1;


				x = 0.7 * safezoneW + safezoneX;
				y = 0.3 * safezoneH + safezoneY;
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

text = "#(argb,8,8,3)color(1,1,1,1)"; // BACKGROUND FOR THE MAP

// text = "\a3\ui_f\data\map_background2_co.paa";

// compassPos[] = {8,-8};

// compassSize[] = {0.08,0.08};

_gridPos = mapGridPosition player;






class power

{

icon = "\A3\ui_f\data\map\mapcontrol\power_CA.paa";

size = 24;

importance = 1;

coefMin = 0.85;

coefMax = 1;

color[] = {1,1,1,1};

};

class powersolar

{

icon = "\A3\ui_f\data\map\mapcontrol\powersolar_CA.paa";

size = 24;

importance = 1;

coefMin = 0.85;

coefMax = 1;

color[] = {1,1,1,1};

};

class powerwave

{

icon = "\A3\ui_f\data\map\mapcontrol\powerwave_CA.paa";

size = 24;

importance = 1;

coefMin = 0.85;

coefMax = 1;

color[] = {1,1,1,1};

};

class powerwind

{

icon = "\A3\ui_f\data\map\mapcontrol\powerwind_CA.paa";

size = 24;

importance = 1;

coefMin = 0.85;

coefMax = 1;

color[] = {1,1,1,1};

};

class shipwreck

{

icon = "\A3\ui_f\data\map\mapcontrol\shipwreck_CA.paa";

size = 24;

importance = 1;

coefMin = 0.85;

coefMax = 1;

color[] = {1,1,1,1};

};

};

class CheckBoxType {

type = CT_STATIC;

style = ST_PICTURE;

colorText[] = { };

colorBackground[] = { };

font = FontM;

sizeEx = 0.023;

text = "";

};

class ASM_RscButton_Invisible

{

access = 0;

type = 1;

text = "";

colorText[] =

{

1,

1,

1,

1

};

colorDisabled[] =

{

0.63,0.63,0.63,0

};

colorBackground[] =

{

0.63,0.63,0.63,0

};

colorBackgroundDisabled[] =

{

0.63,0.63,0.63,1

};

colorBackgroundActive[] =

{

0.63,0.63,0.63,0

};

colorFocused[] =

{

0.63,0.63,0.63,0

};

colorShadow[] =

{

0,

0,

0,

0

};

colorBorder[] =

{

0,

0,

0,

0

};

soundEnter[] =

{

"\A3\ui_f\data\sound\onover",

0.09,

1

};

soundPush[] =

{

"\A3\ui_f\data\sound\new1",

0,

0

};

soundClick[] =

{

"\A3\ui_f\data\sound\onclick",

0.07,

1

};

soundEscape[] =

{

"\A3\ui_f\data\sound\onescape",

0.09,

1

};

style = 2;

x = 0;

y = 0;

w = 0.095589;

h = 0.039216;

shadow = 2;

font = "PuristaMedium";

sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";

offsetX = 0.003;

offsetY = 0.003;

offsetPressedX = 0.002;

offsetPressedY = 0.002;

borderSize = 0;

action = "";

};




//====================================================================================================



};
};


// onMouseEnter = "(_this select 0) ctrlSetTextColor [0, 0, 0, 1]";
// onMouseExit = "(_this select 0) ctrlSetTextColor [1, 1, 1, 1]";






