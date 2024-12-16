class BSM_DT_Tablet_BASE
{
	idd = -1;
	class controls
	{
		class Frame_Base: RscFrame {
			idc = 1800;

			text = ""; //--- ToDo: Localize;
			x = (safeZoneX + (safeZoneW - ((safeZoneW / safeZoneH) min 1.2)) / 2);
			y = (safeZoneY + (safeZoneH - (((safeZoneW / safeZoneH) min 1.2) / 1.2)) / 2);
			w = ((safeZoneW / safeZoneH) min 1.2);
			h = (((safeZoneW / safeZoneH) min 1.2) / 1.2);
			colorText[] = { 0, 0, 0, 0 };
		};

		class Frame_Base_Picture: RscPicture {
			idc = 1200;

			text = "\bsm_chest_phone\data\pictures\picture.paa";
			x = 0.12875 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.737344 * safezoneW;
			h = 0.649 * safezoneH;
		};

		class Button_Home_Base: RscShortcutButton {
			action = "closeDialog 0;";

			idc = 1700;
			text = ""; //--- ToDo: Localize;
			x = 0.749563 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;		
			autoAdjustTexture = true;
			/*
			animTextureFocused = "Pictures\baseHome.paa";
			animTextureNormal = "Pictures\baseHome.paa";
			animTextureOver = "Pictures\baseHome.paa";
			animTexturePressed = "Pictures\baseHome.paa";
			*/
			animTextureFocused = "";
			animTextureNormal = "";
			animTextureOver = "";
			animTexturePressed = "";

			colorBackgroundFocused[] = {1, 1, 1, 1 };
			colorBackground[] = {1, 1, 1, 1 };
			periodFocus = 0;
			periodOver  = 0;
			period = 0;
			tooltip = "Home";  
		};

		class Button_Up_Base : RscShortcutButton {
			action = "closeDialog 0;";
		
			idc = 1701;
			text = ""; //--- ToDo: Localize;
			x = 0.749563 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;		
			autoAdjustTexture = true;
			/*
			animTextureFocused = "Pictures\baseUp.paa";
			animTextureNormal = "Pictures\baseUp.paa";
			animTextureOver = "Pictures\baseUp.paa";
			animTexturePressed = "Pictures\baseUp.paa";
			*/

			animTextureFocused = "";
			animTextureNormal = "";
			animTextureOver = "";
			animTexturePressed = "";

			colorBackgroundFocused[] = {1, 1, 1, 1 };
			colorBackground[] = {1, 1, 1, 1 };
			periodFocus = 0;
			periodOver  = 0;
			period = 0;
			tooltip = "Up";
		};

		class Button_Down_Base: RscShortcutButton {
			action = "closeDialog 0;";
		
			idc = 1702;
			text = ""; //--- ToDo: Localize;
			x = 0.749563 * safezoneW + safezoneX;
			y = 0.687 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;		
			autoAdjustTexture = true;
			
			/*animTextureFocused = "Pictures\baseDown.paa";
			animTextureNormal = "Pictures\baseDown.paa";
			animTextureOver = "Pictures\baseDown.paa";
			animTexturePressed = "Pictures\baseDown.paa";*/

			animTextureFocused = "";
			animTextureNormal = "";
			animTextureOver = "";
			animTexturePressed = "";
			
			colorBackgroundFocused[] = {1, 1, 1, 1 };
			colorBackground[] = {1, 1, 1, 1 };
			periodFocus = 0;
			periodOver  = 0;
			period = 0;
			tooltip = "Down";
		};

		class Button_Exit_Base: RscShortcutButton {
			action = "call SpecOps_fnc_chestPhoneExit;";
			// idc = 1703;
			// text = "EXIT"; //--- ToDo: Localize;
			x = 0.469062 * safezoneW + safezoneX;
			y = 0.874 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;		
			autoAdjustTexture = true;
			animTextureFocused = "\bsm_chest_phone\data\pictures\baseExit.paa";
			animTextureNormal = "\bsm_chest_phone\data\pictures\baseExit.paa";
			animTextureOver = "\bsm_chest_phone\data\pictures\baseExit.paa";
			animTexturePressed = "\bsm_chest_phone\data\pictures\baseExit.paa";
			colorBackgroundFocused[] = {1, 1, 1, 1 };
			colorBackground[] = {1, 1, 1, 1 };
			periodFocus = 0;
			periodOver  = 0;
			period = 0;
			tooltip = "Exit";				
		};
		
	};
};

