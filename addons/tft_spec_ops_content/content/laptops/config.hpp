
class SpecOps_Laptop_Random: Land_Laptop_device_F
{
     scope=2;
     displayName="Laptop Screen (Randomized)";
     hiddenSelections[] = {"camo"};
     hiddenSelectionsTextures[]={ "\specops_content\content\laptops\texture\CIA.paa" };
     class EventHandlers { 
          postInit = "[(_this select 0), 'LaptopScreens'] call SpecOps_fnc_commonContentRandomTexture;"; 
     };
};

class SpecOps_Laptop_1: Land_Laptop_device_F
{
     scope=2;
     displayName="Laptop CIA Terminal";
     hiddenSelections[] = {"camo"};
     hiddenSelectionsTextures[]= { "\specops_content\content\laptops\texture\CIA.paa" };
     init="This setobjecttexture [0,""\specops_content\content\laptops\texture\CIA.paa""]";
};
class SpecOps_Laptop_2: Land_Laptop_device_F
{
     scope=2;
     displayName="Laptop FBI Terminal";
     hiddenSelections[] = {"camo"};
     hiddenSelectionsTextures[]= { "\specops_content\content\laptops\texture\FBI.paa" };
     init="This setobjecttexture [0,""\specops_content\content\laptops\texture\FBI.paa""]";
};
class SpecOps_Laptop_3: Land_Laptop_device_F
{
     scope=2;
     displayName="Laptop Homeland Security Terminal";
     hiddenSelections[] = {"camo"};
     hiddenSelectionsTextures[]={ "\specops_content\content\laptops\texture\DHS.paa" };
     init="This setobjecttexture [0,""\specops_content\content\laptops\texture\DHS.paa""]";
};  
class SpecOps_Laptop_4: Land_Laptop_device_F
{
     scope=2;
     displayName="Laptop Patna Terminal";
     hiddenSelections[] = {"camo"};
     hiddenSelectionsTextures[]= { "\specops_content\content\laptops\texture\Patna.paa" };
     init="This setobjecttexture [0,""\specops_content\content\laptops\texture\Patna.paa""]";
};  
class SpecOps_Laptop_5: Land_Laptop_device_F
{
     scope=2;
     displayName="Laptop FSB Terminal";
     hiddenSelections[] = {"camo"};
     hiddenSelectionsTextures[]= { "\specops_content\content\laptops\texture\FSB.paa" };
     init="This setobjecttexture [0,""\specops_content\content\laptops\texture\FSB.paa""]";
};
class SpecOps_Laptop_6: Land_Laptop_device_F
{
     scope=2;
     displayName="Laptop NSA Terminal";
     hiddenSelections[] = {"camo"};
     hiddenSelectionsTextures[]= { "\specops_content\content\laptops\texture\NSA.paa" };
     init="This setobjecttexture [0,""\specops_content\content\laptops\texture\NSA.paa""]";
};   