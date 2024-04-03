// PREFIX: bsm_so_content
class cfgPatches
{
     class tft_specops_content
     {
		author = "Broken Skull Mods™";
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
			file = "\bsm_so_content\functions";
               class commonContentRandomTexture { };
		}
	};
};

class SpecOpsContent {
     class Textures {
          LaptopScreens[] += {
               "\bsm_so_content\content\laptops\texture\CIA.paa", "\bsm_so_content\content\laptops\texture\FBI.paa", "\bsm_so_content\content\laptops\texture\DHS.paa",
               "\bsm_so_content\content\laptops\texture\Patna.paa", "\bsm_so_content\content\laptops\texture\FSB.paa", "\bsm_so_content\content\laptops\texture\NSA.paa"
          };
          Keypad[] += {
               "\bsm_so_content\content\access\Texture\Keyboard1.paa", "\bsm_so_content\content\access\Texture\Keyboard2.paa", 
               "\bsm_so_content\content\access\Texture\Keyboard3.paa", "\bsm_so_content\content\access\Texture\Keyboard4.paa",
               "\bsm_so_content\content\access\Texture\Keyboard5.paa"
          };
          Potrait1Meter[] += {
               "\bsm_so_content\content\potraits\texture\Putin.paa", "\bsm_so_content\content\potraits\texture\Trump.paa"
          };
          Vertical10MeterBanner[] += {"\bsm_so_content\content\potraits\texture\CSAT_Vertical_Banner.paa"};
          TelevisonScreens[] += {
               "\bsm_so_content\content\screens\texture\screen1.paa", "\bsm_so_content\content\screens\texture\screen2.paa", 
               "\bsm_so_content\content\screens\texture\screen3.paa", "\bsm_so_content\content\screens\texture\screen4.paa",
               "\bsm_so_content\content\screens\texture\screen5.paa", "\bsm_so_content\content\screens\texture\screen6.paa",
               "\bsm_so_content\content\screens\texture\screen7.paa", "\bsm_so_content\content\screens\texture\screen8.paa",
               "\bsm_so_content\content\screens\texture\screen9.paa", "\bsm_so_content\content\screens\texture\screen10.paa",
               "\bsm_so_content\content\screens\texture\screen11.paa", "\bsm_so_content\content\screens\texture\screen12.paa",
               "\bsm_so_content\content\screens\texture\screen13.paa", "\bsm_so_content\content\screens\texture\screen14.paa",
               "\bsm_so_content\content\screens\texture\screen15.paa", "\bsm_so_content\content\screens\texture\screen16.paa",
               "\bsm_so_content\content\screens\texture\screen17.paa", "\bsm_so_content\content\screens\texture\screen18.paa",
               "\bsm_so_content\content\screens\texture\screen19.paa", "\bsm_so_content\content\screens\texture\screen20.paa",
               "\bsm_so_content\content\screens\texture\screen21.paa", "\bsm_so_content\content\screens\texture\screen22.paa",
               "\bsm_so_content\content\screens\texture\screen23.paa", "\bsm_so_content\content\screens\texture\screen24.paa",
               "\bsm_so_content\content\screens\texture\screen25.paa", "\bsm_so_content\content\screens\texture\screen26.paa",
               "\bsm_so_content\content\screens\texture\screen27.paa", "\bsm_so_content\content\screens\texture\screen28.paa",
               "\bsm_so_content\content\screens\texture\screen29.paa", "\bsm_so_content\content\screens\texture\screen29.paa",
               "\bsm_so_content\content\screens\texture\screen30.paa", "\bsm_so_content\content\screens\texture\screen31.paa",
               "\bsm_so_content\content\screens\texture\screen32.paa", "\bsm_so_content\content\screens\texture\screen33.paa",
               "\bsm_so_content\content\screens\texture\screen34.paa", "\bsm_so_content\content\screens\texture\screen35.paa",
               "\bsm_so_content\content\screens\texture\screen36.paa", "\bsm_so_content\content\screens\texture\screen37.paa",
               "\bsm_so_content\content\screens\texture\screen38.paa", "\bsm_so_content\content\screens\texture\screen39.paa",
               "\bsm_so_content\content\screens\texture\screen40.paa"
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

     #include "\bsm_so_content\content\access\config.hpp"
     #include "\bsm_so_content\content\laptops\config.hpp"
     #include "\bsm_so_content\content\potraits\config.hpp"
     #include "\bsm_so_content\content\screens\config.hpp"
     #include "\bsm_so_content\content\signs\config.hpp"

};
