
#include "\bsm_so_content\content\potraits\poster_shows_items.hpp"
#include "\bsm_so_content\content\potraits\poster_ads_explicit_items.hpp"


class SpecOps_Potraits_Randomized: UserTexture1m_F
{
     scope=2;
     displayName="Portrait (Randomized)";
     class EventHandlers { 
          postInit = "[(_this select 0), 'Potrait1Meter'] call SpecOps_fnc_commonContentRandomTexture;"; 
     };
};

class SpecOps_Potraits_Randomized_Shows: UserTexture1m_F
{
     scope=2;
     displayName="Poster (Randomized Shows)";
     class EventHandlers { 
          postInit = "[(_this select 0), 'PosterShows'] call SpecOps_fnc_commonContentRandomTexture;"; 
     };
};

class SpecOps_Potraits_Randomized_Ads_Explicit: UserTexture1m_F
{
     scope=2;
     displayName="Poster (Randomized Ads Explicit)";
     class EventHandlers { 
          postInit = "[(_this select 0), 'PosterAdsExplicit'] call SpecOps_fnc_commonContentRandomTexture;"; 
     };
};

class SpecOps_Potraits_1: UserTexture1m_F
{
     scope=2;
     displayName="Portrait of Putin";
     init="This setobjecttexture [0,""\bsm_so_content\content\potraits\texture\Putin.paa""]";
};

class SpecOps_Potraits_3: UserTexture1m_F
{
     scope=2;
     displayName="Portrait of Lunatic";
     init="This setobjecttexture [0,""\bsm_so_content\content\potraits\texture\broken_skull_lunatics.paa""]";
};

class SpecOps_Potraits_2: UserTexture1m_F
{
     scope=2;
     displayName="Portrait of Trump";
     init="This setobjecttexture [0,""\bsm_so_content\content\potraits\texture\Trump.paa""]";
};

class SpecOps_Vertical_Banner_Random: UserTexture10m_F
{
     scope=2;
     displayName="Vertical Banner 10m (Randomized)";
     hiddenSelectionsTextures[]= { "\bsm_so_content\content\potraits\texture\CSAT_Vertical_Banner.paa" };
     init="[This, 'Vertical10mBanner'] call SpecOps_fnc_commonContentRandomTexture;";
};

class CSAT_Vertical_Banner: UserTexture10m_F
{
     scope=2;
     displayName="CSAT Vertical Banner 10m";
     hiddenSelectionsTextures[]= { "\bsm_so_content\content\potraits\texture\CSAT_Vertical_Banner.paa" };
     init="This setobjecttexture [0,""\bsm_so_content\content\potraits\texture\CSAT_Vertical_Banner.paa""]";
};

class SpecOps_Vertical_Banner_Lunatic_0: UserTexture10m_F
{
     scope=2;
     displayName="Lunatic Vertical Banner 10m";
     hiddenSelectionsTextures[]= { "\bsm_so_content\content\potraits\texture\broken_skull_lunatics_banner.paa" };
     init="This setobjecttexture [0,""\bsm_so_content\content\potraits\texture\broken_skull_lunatics_banner.paa""]";
};