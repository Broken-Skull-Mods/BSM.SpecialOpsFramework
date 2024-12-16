// PREFIX: bsm_so_content
class cfgPatches
{
     class tft_specops_content
     {
		author = "Broken Skull Mods™";
          name = "BSM - Content";
          units[] = {};
          weapons[] = {};
          requiredVersion = 1.82;
          requiredAddons[] = { "ace_main", "cba_main" };
     };
};

class CfgFunctions {
	class SpecOps {
		class Content {
			file = "\bsm_so_content\functions";
               class commonContentRandomTexture { };
               class setBriefingTextures {};
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
               "\bsm_so_content\content\potraits\texture\Putin.paa", "\bsm_so_content\content\potraits\texture\Trump.paa", 
               "\bsm_so_content\content\potraits\texture\broken_skull_lunatics.paa"
          };

          PosterAdsExplicit[] += {
               "\bsm_so_content\content\potraits\texture\ads_explicit\1.paa", "\bsm_so_content\content\potraits\texture\ads_explicit\2.paa",
               "\bsm_so_content\content\potraits\texture\ads_explicit\3.paa", "\bsm_so_content\content\potraits\texture\ads_explicit\4.paa", 
               "\bsm_so_content\content\potraits\texture\ads_explicit\5.paa", "\bsm_so_content\content\potraits\texture\ads_explicit\6.paa",
               "\bsm_so_content\content\potraits\texture\ads_explicit\7.paa", "\bsm_so_content\content\potraits\texture\ads_explicit\8.paa",
               "\bsm_so_content\content\potraits\texture\ads_explicit\9.paa", "\bsm_so_content\content\potraits\texture\ads_explicit\10.paa"
          };
          Vertical10MeterBanner[] += {"\bsm_so_content\content\potraits\texture\CSAT_Vertical_Banner.paa", "\bsm_so_content\content\potraits\texture\broken_skull_lunatics_banner.paa"};
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
          TelevisonShows[] += {
               "\bsm_so_content\content\screens\texture\shows\1.paa", "\bsm_so_content\content\screens\texture\shows\2.paa", 
               "\bsm_so_content\content\screens\texture\shows\3.paa", "\bsm_so_content\content\screens\texture\shows\4.paa",
               "\bsm_so_content\content\screens\texture\shows\5.paa", "\bsm_so_content\content\screens\texture\shows\6.paa",
               "\bsm_so_content\content\screens\texture\shows\7.paa", "\bsm_so_content\content\screens\texture\shows\8.paa",
               "\bsm_so_content\content\screens\texture\shows\9.paa", "\bsm_so_content\content\screens\texture\shows\10.paa",
               "\bsm_so_content\content\screens\texture\shows\11.paa", "\bsm_so_content\content\screens\texture\shows\12.paa",
               "\bsm_so_content\content\screens\texture\shows\13.paa", "\bsm_so_content\content\screens\texture\shows\14.paa",
               "\bsm_so_content\content\screens\texture\shows\15.paa", "\bsm_so_content\content\screens\texture\shows\16.paa",
               "\bsm_so_content\content\screens\texture\shows\17.paa", "\bsm_so_content\content\screens\texture\shows\18.paa",
               "\bsm_so_content\content\screens\texture\shows\19.paa", "\bsm_so_content\content\screens\texture\shows\20.paa",
               "\bsm_so_content\content\screens\texture\shows\21.paa", "\bsm_so_content\content\screens\texture\shows\22.paa",
               "\bsm_so_content\content\screens\texture\shows\23.paa", "\bsm_so_content\content\screens\texture\shows\24.paa",
               "\bsm_so_content\content\screens\texture\shows\25.paa", "\bsm_so_content\content\screens\texture\shows\26.paa",
               "\bsm_so_content\content\screens\texture\shows\27.paa", "\bsm_so_content\content\screens\texture\shows\28.paa",
               "\bsm_so_content\content\screens\texture\shows\29.paa", "\bsm_so_content\content\screens\texture\shows\30.paa",
               "\bsm_so_content\content\screens\texture\shows\31.paa", "\bsm_so_content\content\screens\texture\shows\32.paa",
               "\bsm_so_content\content\screens\texture\shows\33.paa", "\bsm_so_content\content\screens\texture\shows\34.paa",
               "\bsm_so_content\content\screens\texture\shows\35.paa", "\bsm_so_content\content\screens\texture\shows\36.paa",
               "\bsm_so_content\content\screens\texture\shows\37.paa", "\bsm_so_content\content\screens\texture\shows\38.paa",
               "\bsm_so_content\content\screens\texture\shows\39.paa", "\bsm_so_content\content\screens\texture\shows\40.paa"
          };

          TelevisonExplicit[] += {
               "\bsm_so_content\content\screens\texture\explicit\1.paa", "\bsm_so_content\content\screens\texture\explicit\2.paa", 
               "\bsm_so_content\content\screens\texture\explicit\3.paa", "\bsm_so_content\content\screens\texture\explicit\4.paa",
               "\bsm_so_content\content\screens\texture\explicit\5.paa", "\bsm_so_content\content\screens\texture\explicit\6.paa",
               "\bsm_so_content\content\screens\texture\explicit\7.paa", "\bsm_so_content\content\screens\texture\explicit\8.paa",
               "\bsm_so_content\content\screens\texture\explicit\9.paa"
          };

          PosterShows[] += {
               "\bsm_so_content\content\potraits\texture\shows\seal_team_1.paa", "\bsm_so_content\content\potraits\texture\shows\seal_team_2.paa",
               "\bsm_so_content\content\potraits\texture\shows\last_ship_1.paa"
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
     class Land_MapBoard_F;
     class Land_MapBoard_01_Wall_F;
     class Flag_CSAT_F;
     #include "\bsm_so_content\content\access\config.hpp"
     #include "\bsm_so_content\content\laptops\config.hpp"
     #include "\bsm_so_content\content\potraits\config.hpp"
     #include "\bsm_so_content\content\screens\config.hpp"
     #include "\bsm_so_content\content\screens\shows.hpp"
     #include "\bsm_so_content\content\signs\config.hpp"
     #include "\bsm_so_content\content\map_board\config.hpp"
     #include "\bsm_so_content\content\flags\config.hpp"

};
