// specops_content
class cfgPatches
{
     class tft_specops_content
     {
          name = "Special Ops Framework - Content";
          units[] = {};
          weapons[] = {};
          requiredVersion = 1.82;
          requiredAddons[] = {};
     };
};

class CfgFunctions {
	class SpecOps {
		class Content {
			file = "specops_content\functions";
               class commonContentRandomTexture { };
		}
	};
};

class SpecOpsContent {
     class Textures {
          LaptopScreens[] += {
               "\specops_content\content\laptops\texture\CIA.paa", "\specops_content\content\laptops\texture\FBI.paa", "\specops_content\content\laptops\texture\DHS.paa",
               "\specops_content\content\laptops\texture\Patna.paa", "\specops_content\content\laptops\texture\FSB.paa", "\specops_content\content\laptops\texture\NSA.paa"
          };
          Keypad[] += {
               "\specops_content\content\access\Texture\Keyboard1.paa", "\specops_content\content\access\Texture\Keyboard2.paa", 
               "\specops_content\content\access\Texture\Keyboard3.paa", "\specops_content\content\access\Texture\Keyboard4.paa",
               "\specops_content\content\access\Texture\Keyboard5.paa"
          };
          Potrait1Meter[] += {
               "\specops_content\content\potraits\texture\Putin.paa", "\specops_content\content\potraits\texture\Trump.paa"
          };
          Vertical10MeterBanner[] += {"\specops_content\content\potraits\texture\CSAT_Vertical_Banner.paa"};
          TelevisonScreens[] += {
               "\specops_content\content\screens\texture\screen1.paa", "\specops_content\content\screens\texture\screen2.paa", 
               "\specops_content\content\screens\texture\screen3.paa", "\specops_content\content\screens\texture\screen4.paa",
               "\specops_content\content\screens\texture\screen5.paa", "\specops_content\content\screens\texture\screen6.paa",
               "\specops_content\content\screens\texture\screen7.paa", "\specops_content\content\screens\texture\screen8.paa",
               "\specops_content\content\screens\texture\screen9.paa", "\specops_content\content\screens\texture\screen10.paa",
               "\specops_content\content\screens\texture\screen11.paa", "\specops_content\content\screens\texture\screen12.paa",
               "\specops_content\content\screens\texture\screen13.paa", "\specops_content\content\screens\texture\screen14.paa",
               "\specops_content\content\screens\texture\screen15.paa", "\specops_content\content\screens\texture\screen16.paa",
               "\specops_content\content\screens\texture\screen17.paa", "\specops_content\content\screens\texture\screen18.paa",
               "\specops_content\content\screens\texture\screen19.paa", "\specops_content\content\screens\texture\screen20.paa",
               "\specops_content\content\screens\texture\screen21.paa", "\specops_content\content\screens\texture\screen22.paa",
               "\specops_content\content\screens\texture\screen23.paa", "\specops_content\content\screens\texture\screen24.paa",
               "\specops_content\content\screens\texture\screen25.paa", "\specops_content\content\screens\texture\screen26.paa",
               "\specops_content\content\screens\texture\screen27.paa", "\specops_content\content\screens\texture\screen28.paa",
               "\specops_content\content\screens\texture\screen29.paa", "\specops_content\content\screens\texture\screen29.paa",
               "\specops_content\content\screens\texture\screen30.paa", "\specops_content\content\screens\texture\screen31.paa",
               "\specops_content\content\screens\texture\screen32.paa", "\specops_content\content\screens\texture\screen33.paa",
               "\specops_content\content\screens\texture\screen34.paa", "\specops_content\content\screens\texture\screen35.paa",
               "\specops_content\content\screens\texture\screen36.paa", "\specops_content\content\screens\texture\screen37.paa",
               "\specops_content\content\screens\texture\screen38.paa", "\specops_content\content\screens\texture\screen39.paa",
               "\specops_content\content\screens\texture\screen40.paa"
          };
     };
};
class CfgVehicles
{
     class Building;
     class FloatingStructure_F;
     class Thing;
     class ThingX;
     class Wall_F;
     class House;   
     class Land_InfoStand_V2_F;
     class Land_Billboard_F;
     class Land_Laptop_device_F;
     class UserTexture1m_F;
     class UserTexture10m_F;
     class Land_FlatTV_01_F;
     class Land_Tablet_01_F;
     class Land_PCSet_01_screen_F;
     class SignAd_Sponsor_F;

     #include "\specops_content\content\access\config.hpp"
     #include "\specops_content\content\laptops\config.hpp"
     #include "\specops_content\content\potraits\config.hpp"
     #include "\specops_content\content\screens\config.hpp"
     #include "\specops_content\content\signs\config.hpp"

};
