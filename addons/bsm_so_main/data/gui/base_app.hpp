class SO_TeamAssistant_Frame_Base: RscFrame
{
	//idc = 1800;
	
	onLoad = "[(_this # 0)] spawn SpecOps_fnc_orkaUIRespawnOnLoadBase;";

	text = ""; 

	x = (safeZoneX + (safeZoneW - ((safeZoneW / safeZoneH) min 1.2)) / 2);
	y = (safeZoneY + (safeZoneH - (((safeZoneW / safeZoneH) min 1.2) / 1.2)) / 2);
	w = ((safeZoneW / safeZoneH) min 1.2);
	h = (((safeZoneW / safeZoneH) min 1.2) / 1.2);

	colorText[] = { 0, 0, 0, 0 };   //border color
};

class SO_TeamAssistant_Background_Picture: RscPicture
{
	//idc = 1200;

	text = "\bsm_so_main\data\gui\Pictures\Background.paa";

	x = 0.0307812 * safezoneW + safezoneX;
	y = 0.049 * safezoneH + safezoneY;
	w = 0.938438 * safezoneW;
	h = 0.902 * safezoneH;

};

class Header_Background_23984213: RscPicture
{
	// idc = 1201;
	text = "#(argb,8,8,3)color(0,0,0,1)";
	w = 0.938438 * safezoneW;
	x = 0.0307812 * safezoneW + safezoneX;
	y = 0.049 * safezoneH + safezoneY;
	h = 0.0642594 * safezoneH;
};

class BlueLine_1631: RscButton
{

	//idc = 1631;

	text = ""; 

	x = 0.0307812 * safezoneW + safezoneX;
	y = 0.114019 * safezoneH + safezoneY;
	w = 0.938438 * safezoneW;
	h = 0.006 * safezoneH;

	colorBackground[] = {0.06,0.24,0.89};
	colorBackgroundActive[] = {0.06,0.24,0.89};    // hover over
	colorBackgroundFocused[] = {0.06,0.24,0.89};	// selected like with the Tab kay
	periodFocus = 0;
	periodOver  = 0;
	period = 0;					

};


class Logo_Picture: RscPicture
{
	style = 48 + 0x800; 
	idc = 1201;
	text = "\bsm_so_main\data\gui\Pictures\header_logo.paa";
	x = 0.0307812 * safezoneW + safezoneX;
	y = 0.049 * safezoneH + safezoneY;
	w = 0.105 * safezoneW;
	h = 0.0642594 * safezoneH;
};


class RscButtonLazyBloody : RscButton {
	y = 0.081019 * safezoneH + safezoneY;

}

class SO_Corner_Picture: RscPicture
{
	//idc = 1201;
	onLoad = "[(_this # 0)] spawn SpecOps_fnc_orkaUIRespawnOnLoadCornerIcon;";

	style = 48 + 0x800; // ST_PICTURE + ST_KEEP_ASPECT_RATIO
	
	x = 0.057 * safezoneW + safezoneX;
	y = 0.82 * safezoneH + safezoneY;
	w = 0.08 * safezoneW;
	h = 0.08 * safezoneH;
	
	tooltip = "If your team mates do not have the same icon... they are probably spies... or you're the spy.";
};

class SO_Version_Number: RscText
{
	//idc = 1600;

	text = "RD-270124 v1.0";
	x = 0.033 * safezoneW + safezoneX;
	y = 0.893 * safezoneH + safezoneY;
	w = 0.08 * safezoneW;
	h = 0.08 * safezoneH;

};