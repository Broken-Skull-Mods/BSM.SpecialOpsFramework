class CfgPatches
{
	class bsm_so_helo_control
	{
		author = "Broken Skull Mods";
		name = "BSM - Helicopter Control";
		units[]={ };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={
			"ace_main", "cba_main" 
		};
	};
};

class CfgFunctions {
	class SpecOps {
		class Helicopter_Controls {
			file = "\bsm_so_helo_control\functions";
            class heloInitializeInteractionACE { postInit=1; };
            class heloKeepEngineCold { };
            class heloKeepEngineHot { };
            class heloLanding {};
            class heloLandingServer {};
            class heloMoveTo { };
            class heloMoveToServer { };
            class heloPickUp {};
		}
	};
};


// class Cfg3DEN
// {
//     class Object
//     {
//         class AttributeCategories
//         {
// 			class bsm_so_supportSystem_attributes {
// 				displayName = "Spec-Ops (Support)";
//                 class Attributes {
					
// 					class bsm_so_heloctrl_enabled
// 					{
// 						property = "bsm_so_heloctrl_enabled";
// 						displayName = "Helicopter Transport?";
// 						tooltip = "Check if this asset is made available to the player as an helicopter transport.";
// 						unique = 0; 
// 						control = "Checkbox";
// 						expression = "_this setVariable ['%s', _value, true];";
// 						defaultValue = false;
// 						typeName = "BOOL"; 
// 					};
//                 };
//             };
// 		};
// 	};
// };