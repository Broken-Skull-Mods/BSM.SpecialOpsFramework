
class SpecOps_Potraits_Randomized: UserTexture1m_F
{
     scope=2;
     displayName="Portrait (Randomized)";
     hiddenSelectionsTextures[]={ "\specops_content\content\potraits\texture\Putin.paa" };
     class EventHandlers { 
          postInit = "[(_this select 0), 'Potrait1Meter'] call SpecOps_fnc_commonContentRandomTexture;"; 
     };
};

class SpecOps_Potraits_1: UserTexture1m_F
{
     scope=2;
     displayName="Portrait of Putin";
     hiddenSelectionsTextures[]={ "\specops_content\content\potraits\texture\Putin.paa" };
     init="This setobjecttexture [0,""\specops_content\content\potraits\texture\Putin.paa""]";
};

class SpecOps_Potraits_2: UserTexture1m_F
{
     scope=2;
     displayName="Portrait of Trump";
     hiddenSelectionsTextures[]={ "\specops_content\content\potraits\texture\Trump.paa" };
     init="This setobjecttexture [0,""\specops_content\content\potraits\texture\Trump.paa""]";
};

class SpecOps_Vertical_Banner_Random: UserTexture10m_F
{
     scope=2;
     displayName="Vertical Banner 10m (Randomized)";
     hiddenSelectionsTextures[]= { "\specops_content\content\potraits\texture\CSAT_Vertical_Banner.paa" };
     init="[This, 'Vertical10mBanner'] call SpecOps_fnc_commonContentRandomTexture;";
};

class CSAT_Vertical_Banner: UserTexture10m_F
{
     scope=2;
     displayName="CSAT Vertical Banner 10m";
     hiddenSelectionsTextures[]= { "\specops_content\content\potraits\texture\CSAT_Vertical_Banner.paa" };
     init="This setobjecttexture [0,""\specops_content\content\potraits\texture\CSAT_Vertical_Banner.paa""]";
};