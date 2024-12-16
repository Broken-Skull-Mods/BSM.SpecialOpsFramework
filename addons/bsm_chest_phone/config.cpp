
// PREFIX = bsm_chest_phone
#include "\bsm_chest_phone\data\gui\defines.hpp"
#include "\bsm_chest_phone\data\gui\Tablet_Base.hpp"
#include "\bsm_chest_phone\data\gui\Tablet.hpp"

class CfgPatches
{
	class Broken_Skull_ChestPhone
	{
		author = "Broken Skull Mods™";
		name = "BSM - DT Technologies";
		units[]={ };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={ };
	};
};
class CfgFunctions {
	class SpecOps {
		class System_SMS {
			file = "\bsm_chest_phone\functions\sms";
            class systemNewSMSMessage { };
			class systemSMSMessageSent { };
		}
		class ChestPhone {
			file = "\bsm_chest_phone\functions\chestphone";
			class chestPhoneHomeScreenOpen {};
			class chestPhoneExit {};
			class chestPhoneHomeScreenDown {};
			class chestPhoneHomeScreenUp {};
			class chestPhoneHomeScreenClickApp {};
			class chestPhoneHomeScreenOnLoad {};
			class chestPhoneRecompilePages {};
			class chestPhoneRegisterApp {}; 
			class chestPhonePreInit {preInit = 1; };
			class chestPhoneInit { postInit = 1; };
		}
	};
};

class bsm_chest_phone_dt {

};
class Extended_PreInit_EventHandlers {
    class bsm_chest_phone {
        init = "[] call compile preprocessFileLineNumbers '\bsm_chest_phone\addon_settings.sqf';";
    };
};		

class CfgSounds {
    class DT_Unclip_Phone_From_Vest
    {
        name = "DT_Unclip_Phone_From_Vest";
        sound[] = { "\bsm_chest_phone\data\sounds\DT_Unclip_Phone_From_Vest.ogg", 5, 1, 10 };
        titles[] = { };
    };
    class DT_Clip_Phone_From_Vest
    {
        name = "DT_Clip_Phone_From_Vest";
        sound[] = { "\bsm_chest_phone\data\sounds\DT_Clip_Phone_From_Vest.ogg", 5, 1, 10 };
        titles[] = { };
    };
};

