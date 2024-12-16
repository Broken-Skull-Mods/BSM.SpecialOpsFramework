


class SpecOps_Flat_Screen_RandomizedShows: Land_FlatTV_01_F
{
     scope=2;
     displayName="Flat Screen A (Randomized Shows)";
     hiddenSelectionsTextures[]={""};
     class EventHandlers { 
          postInit = "[(_this select 0), 'TelevisonShows'] call SpecOps_fnc_commonContentRandomTexture;"; 
     };
};

class SpecOps_PC_Screen_RandomizedShows: Land_PCSet_01_screen_F
{
     scope=2;
     displayName="PC Screen A (Randomized Shows)";
     hiddenSelectionsTextures[]={"\bsm_so_content\content\screens\texture\screen1.paa"};
     class EventHandlers { 
          postInit = "[(_this select 0), 'TelevisonShows'] call SpecOps_fnc_commonContentRandomTexture;"; 
     };
};

class SpecOps_Tablet_Screen_RandomizedShows: Land_Tablet_01_F
{
     scope=2;
     displayName="Tablet Screen A (Randomized Shows)";
     hiddenSelectionsTextures[]={"\bsm_so_content\content\screens\texture\screen1.paa"};
     class EventHandlers { 
          postInit = "[(_this select 0), 'TelevisonShows'] call SpecOps_fnc_commonContentRandomTexture;"; 
     };
};

#include "\bsm_so_content\content\screens\tv_shows_items.hpp"
#include "\bsm_so_content\content\screens\tablet_shows_items.hpp"
#include "\bsm_so_content\content\screens\pc_shows_items.hpp"




