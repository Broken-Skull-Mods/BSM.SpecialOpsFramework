
class SpecOps_Access_Stand_Randomized: Land_InfoStand_V2_F {
     scope=2;
     displayName="Access Keypad (Randomized)";
     hiddenSelections[] = {"camo"};
     hiddenSelectionsTextures[]= { "\bsm_so_content\content\access\Texture\Keyboard1.paa" };
     class EventHandlers { 
          postInit = "[(_this select 0), 'Keypad'] call SpecOps_fnc_commonContentRandomTexture;"; 
     };
};

class SpecOps_Access_Stand_1: Land_InfoStand_V2_F {
     scope=2;
     displayName="Access Keyboard 1";
     hiddenSelections[] = {"camo"};
     hiddenSelectionsTextures[]= { "\bsm_so_content\content\access\Texture\Keyboard1.paa" };
     init="This setobjecttexture [0,""\bsm_so_content\content\access\Texture\Keyboard1.paa""]";
};
class SpecOps_Access_Stand_2: Land_InfoStand_V2_F {
     scope=2;
     displayName="Access Keyboard 2";
     hiddenSelections[] = {"camo"};
     hiddenSelectionsTextures[]= { "\bsm_so_content\content\access\Texture\Keyboard2.paa" };
     init="This setobjecttexture [0,""\bsm_so_content\content\access\Texture\Keyboard2.paa""]";
};
class SpecOps_Access_Stand_3: Land_InfoStand_V2_F {
     scope=2;
     displayName="Access Keyboard 3";
     hiddenSelections[] = {"camo"};
     hiddenSelectionsTextures[]= { "\bsm_so_content\content\access\Texture\Keyboard3.paa" };
     init="This setobjecttexture [0,""\bsm_so_content\content\access\Texture\Keyboard3.paa""]";
};
class SpecOps_Access_Stand_4: Land_InfoStand_V2_F {
     scope=2;
     displayName="Access Keyboard 4";
     hiddenSelections[] = {"camo"};
     hiddenSelectionsTextures[]= { "\bsm_so_content\content\access\Texture\Keyboard4.paa" };
     init="This setobjecttexture [0,""\bsm_so_content\content\access\Texture\Keyboard4.paa""]";
};
class SpecOps_Access_Stand_5: Land_InfoStand_V2_F {
     scope=2;
     displayName="Access Keyboard 5";
     hiddenSelections[] = {"camo"};
     hiddenSelectionsTextures[] = { "\bsm_so_content\content\access\Texture\Keyboard5.paa" };
     init="This setobjecttexture [0,""\bsm_so_content\content\access\Texture\Keyboard5.paa""]";
};