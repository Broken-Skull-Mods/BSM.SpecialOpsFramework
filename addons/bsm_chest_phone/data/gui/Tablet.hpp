

class BSM_DT_Tablet_Home : BSM_DT_Tablet_BASE {
	
	idd = 9999;
	onLoad="[(_this # 0)] spawn SpecOps_fnc_chestPhoneHomeScreenOnLoad";
	class controls : controls {
		class Frame_Base : Frame_Base { };
		class Frame_Base_Picture : Frame_Base_Picture { };
		class Button_Home_Base : Button_Home_Base {
			tooltip = "Exit";
		};
		class Button_Up_Base : Button_Up_Base { 
			action = "[(_this # 0)] call SpecOps_fnc_chestPhoneHomeScreenUp;";
			tooltip = "Previous";
		};
		class Button_Down_Base : Button_Down_Base {
			action = "[(_this # 0)] call SpecOps_fnc_chestPhoneHomeScreenDown;";
			tooltip = "Next";
		};
		class Button_Exit_Base : Button_Exit_Base { };

		// App Slots
		class App_0: RscPicture
		{
			idc = 1703;
			show = 0;
			text = "\bsm_chest_phone\data\pictures\appBloody.paa";
			colorBackgroundFocused[] = {1,1,1,1};
			periodFocus = 0;
			periodOver = 0;
			period = 0;
			// onMouseButtonClick="[(_this # 0)] call SpecOps_fnc_chestPhoneHomeScreenClickApp";

			x = 0.27828 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
// \bsm_chest_phone\data\icons\app_icon_settings.paa
		class App_0_Button: RscShortcutButton
		{
			idc = 2703;
			text = "";
			colorBackgroundFocused[] = {1,1,1,0};
			periodFocus = 0;
			periodOver = 0;
			period = 0;
			x = 0.278281 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			animTextureOver = "\bsm_chest_phone\data\icons\App_Icon_Overlay.paa";
			autoAdjustTexture = true;
			colorBackground[] = {1,1,1,0};
		};

		class App_1: App_0
		{
			idc = 1704;

			x = 0.350469 * safezoneW + safezoneX;
			y = 0.345 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};

		class App_1_Button: App_0_Button {
			idc = 2704;
			x = 0.350469 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH; 
		};

		class App_2: App_0
		{
			idc = 1705;

			x = 0.422656 * safezoneW + safezoneX;
			y = 0.344 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class App_2_Button: App_0_Button { 
			idc = 2705;
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
		};
		
		class App_3: App_0
		{
			idc = 1706;

			x = 0.494844 * safezoneW + safezoneX;
			y = 0.344 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};

		class App_3_Button: App_0_Button {
			idc = 2706;
			x = 0.494844 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
		};
		
		class App_4: App_0
		{
			idc = 1707;

			x = 0.567031 * safezoneW + safezoneX;
			y = 0.343 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class App_4_Button: App_0_Button { 
			idc = 2707;
			x = 0.567031 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
		};
		
		class App_5: App_0
		{
			idc = 1708;

			x = 0.639219 * safezoneW + safezoneX;
			y = 0.342 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class App_5_Button: App_0_Button { 
			idc = 2708;
			x = 0.639219 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
		};

		class App_6: App_0
		{
			idc = 1709;

			x = 0.278 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class App_6_Button: App_0_Button { 
			idc = 2709;
			x = 0.278281 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
		};

		class App_7: App_0
		{
			idc = 1710;

			x = 0.350469 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class App_7_Button: App_0_Button { 
			idc = 2710;
			x = 0.350469 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
		};


		class App_8: App_0
		{
			idc = 1711;

			x = 0.422656 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class App_8_Button: App_0_Button { 
			idc = 2711;
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
		};

		class App_9: App_0
		{
			idc = 1712;

			x = 0.494844 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class App_9_Button: App_0_Button { 
			idc = 2712;
			x = 0.494844 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
		};

		class App_10: App_0
		{
			idc = 1713;

			x = 0.567031 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class App_10_Button: App_0_Button { 
			idc = 2713;
			x = 0.567031 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
		};

		class App_11: App_0
		{
			idc = 1714;

			x = 0.639219 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class App_11_Button: App_0_Button { 
			idc = 2714;
			x = 0.639219 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
		};

		class App_12: App_0
		{
			idc = 1715;

			x = 0.278281 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class App_12_Button: App_0_Button { 
			idc = 2715;
			x = 0.278281 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
		};

		class App_13: App_0
		{
			idc = 1716;

			x = 0.350469 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class App_13_Button: App_0_Button { 
			idc = 2716;
			x = 0.350469 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
		};

		class App_14: App_0
		{
			idc = 1717;

			x = 0.422656 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class App_14_Button: App_0_Button { 
			idc = 2717;
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
		};

		class App_15: App_0
		{
			idc = 1718;

			x = 0.494844 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class App_15_Button: App_0_Button { 
			idc = 2718;
			x = 0.494844 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
		};

		class App_16: App_0
		{
			idc = 1719;

			x = 0.567031 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class App_16_Button: App_0_Button { 
			idc = 2719;
			x = 0.567031 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
		};

		class App_17: App_0
		{
			idc = 1720;

			x = 0.639219 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class App_17_Button: App_0_Button { 
			idc = 2720;
			x = 0.639219 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
		};

		class App_18: App_0
		{
			idc = 1721;

			x = 0.278281 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class App_18_Button: App_0_Button { 
			idc = 2721;
			x = 0.278281 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
		};

		class App_19: App_0
		{
			idc = 1722;

			x = 0.350469 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class App_19_Button: App_0_Button { 
			idc = 2722;
			x = 0.350469 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
		};

		class App_20: App_0
		{
			idc = 1723;

			x = 0.422656 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class App_20_Button: App_0_Button { 
			idc = 2723;
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
		};

		class App_21: App_0
		{
			idc = 1724;

			x = 0.494844 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class App_21_Button: App_0_Button { 
			idc = 2724;
			x = 0.494844 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
		};

		class App_22: App_0
		{
			idc = 1725;

			x = 0.567031 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class App_22_Button: App_0_Button { 
			idc = 2725;
			x = 0.567031 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
		};

		class App_23: App_0
		{
			idc = 1726;

			x = 0.639219 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class App_23_Button: App_0_Button { 
			idc = 2726;
			x = 0.639219 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
		};

		class App_24: App_0
		{
			idc = 1727;

			x = 0.639219 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class App_24_Button: App_0_Button { 
			idc = 2727;
			x = 0.639219 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
		};

		class App_25: App_0
		{
			idc = 1728;

			x = 0.639219 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class App_25_Button: App_0_Button { 
			idc = 2728;
			x = 0.639219 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
		};


		class App_26: App_0
		{
			idc = 1729;

			x = 0.639219 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class App_26_Button: App_0_Button { 
			idc = 2729;
			x = 0.639219 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
		};


		class App_27: App_0
		{
			idc = 1730;

			x = 0.639219 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class App_27_Button: App_0_Button { 
			idc = 2730;
			x = 0.639219 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
		};


	};
};


