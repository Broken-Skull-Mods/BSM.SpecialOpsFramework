// PREFIX: bsm_so_audio
class CfgPatches
{
	class bsm_so_audio
	{
		author = "Broken Skull Mods™";
		name = "BSL - Audio";
		units[]={ };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={ "bsm_so_main", "TFT_MARKERS_N_ICONS", "ace_main", "cba_main"  };
	};
};

class CfgFunctions {
	class SpecOps {
		class Audio_System {
			file = "bsm_so_audio\functions";
            class voiceInitialize { };
            class voiceSelectFromHashMap { };
            class voiceSelectRandomLine { };
            class voiceGetSettings {};
            class voiceModuleInitialize {};
            class voiceModuleAny {};
            class videoModuleAny {};
            class voiceModuleSystem {};
            class voicePlayerLoop {
                postInit = 1;
            };
		}
	};
};



class SpecOps_Module_OPFOR_Factions { };
class SpecOps_Module_BLUFOR_Factions { };
class SpecOps_Module_GRE_Factions { };

class SpecOps_Module_System_Audio { };

class CfgVehicles {
    class Module_F;

    class SpecOps_Any_Video : Module_F {
        scope = 2;
        displayName = "Play Video (Full Screen)";
		icon = "\tftm\icons\video_camera.paa";	// Map icon. Delete this entry to use the default icon.
		category = "SpecOps_Modules";
		function = "SpecOps_fnc_videoModuleAny";	// Name of function triggered once conditions are met
		functionPriority = 1;				// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		isTriggerActivated = 1;				// 1 for module waiting until all synced triggers are activated
		isGlobal = 1;						// 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isDisposable = 0;					// 1 if modules is to be disabled once it is activated (i.e. repeated trigger activation will not work)
		curatorCanAttach = 0;				// 1 to allow Zeus to attach the module to an entity
		canSetArea = 0;						// Allows for setting the area values in the Attributes menu in 3DEN
		canSetAreaShape = 0;				// Allows for setting "Rectangle" or "Ellipse" in Attributes menu in 3DEN
		canSetAreaHeight = 0;				// Allows 1for setting height or Z value in Attributes menu in 3DEN
        is3DEN = 0;							// 1 to run init function in Eden Editor as well
        class Attributes {
			class SpecOps_Video {
				unique = 0; 
				displayName = "Video Path";
				tooltip = "";
				property = "SpecOps_Video";
				control = "Edit";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = nil;
				validate = "none";
				typeName = "STRING"; 
			};

            class SpecOps_OnlyPlayOnce {
                unique = 0; 
				displayName = "Play Once?";
				tooltip = "false to notify everyone, otherwise only RTO will receive notice and will have to relay that.";
				property = "SpecOps_OnlyPlayOnce";
                control = "Checkbox";
                expression = "_this setVariable ['%s', _value, true];";
                defaultValue = true;
                typeName = "BOOL"; 
            };

            class SpecOps_PlayForEveryone {
                unique = 0; 
				displayName = "Play for All Players?";
				tooltip = "Notify all the players on the map.";
				property = "SpecOps_PlayForEveryone";
                control = "Checkbox";
                expression = "_this setVariable ['%s', _value, true];";
                defaultValue = false;
                typeName = "BOOL"; 
            };

			class SpecOps_NotifyInRange {
				unique = 0; 
				displayName = "Range of Notification";
				tooltip = "Will send sound to all players in the range";
				property = "SpecOps_NotifyInRange";
				control = "Edit";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = 100;
				validate = "none";
				typeName = "NUMBER"; 
			};
        };
    };

    class SpecOps_Any_Audio : Module_F {
        scope = 2;
        displayName = "Play Audio";
		icon = "\tftm\icons\sound_on.paa";	// Map icon. Delete this entry to use the default icon.
		category = "SpecOps_Modules";

		function = "SpecOps_fnc_voiceModuleAny";	// Name of function triggered once conditions are met
		functionPriority = 1;				// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		isTriggerActivated = 1;				// 1 for module waiting until all synced triggers are activated
		isGlobal = 1;						// 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isDisposable = 0;					// 1 if modules is to be disabled once it is activated (i.e. repeated trigger activation will not work)
		curatorCanAttach = 0;				// 1 to allow Zeus to attach the module to an entity
		canSetArea = 0;						// Allows for setting the area values in the Attributes menu in 3DEN
		canSetAreaShape = 0;				// Allows for setting "Rectangle" or "Ellipse" in Attributes menu in 3DEN
		canSetAreaHeight = 0;				// Allows 1for setting height or Z value in Attributes menu in 3DEN
        is3DEN = 0;							// 1 to run init function in Eden Editor as well

        class Attributes {
			class SpecOps_AudioClassName {
				unique = 0; 
				displayName = "Audio Class";
				tooltip = "Audio File.";
				property = "SpecOps_AudioClassName";
				control = "Sound";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = nil;
				validate = "variable";
				typeName = "STRING"; 
			};

            class SpecOps_OnlyPlayOnce {
                unique = 0; 
				displayName = "Play Once?";
				tooltip = "false to notify everyone, otherwise only RTO will receive notice and will have to relay that.";
				property = "SpecOps_OnlyPlayOnce";
                control = "Checkbox";
                expression = "_this setVariable ['%s', _value, true];";
                defaultValue = true;
                typeName = "BOOL"; 
            };

            class SpecOps_PlayForEveryone {
                unique = 0; 
				displayName = "Play for All Players?";
				tooltip = "Notify all the players on the map.";
				property = "SpecOps_PlayForEveryone";
                control = "Checkbox";
                expression = "_this setVariable ['%s', _value, true];";
                defaultValue = false;
                typeName = "BOOL"; 
            };

			class SpecOps_NotifyInRange {
				unique = 0; 
				displayName = "Range of Notification";
				tooltip = "Will send sound to all players in the range";
				property = "SpecOps_NotifyInRange";
				control = "Edit";
				expression = "_this setVariable ['%s', _value, true];";
				defaultValue = 25;
				validate = "none";
				typeName = "NUMBER"; 
			};
        };
    };
    
};

