
class CfgPatches
{
	class bsm_so_common_audio_system
	{
		author = "BloodyMystik™";
		units[]={ };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};

class CfgFunctions {
	class SpecOps {
		class Audio_System {
			file = "bsm_so_core\data\audio_system\functions";
            class serverMissionAudioLoadFromEntity {};
            class voiceInitialize { };
            class voiceSelectFromHashMap { };
            class voiceSelectRandomLine { };
            class voiceGetSettings {};
            class voiceModuleGeneric {};
            class voiceModuleInitialize {};
            class voicePlayerLoop {
                postInit = 1;
            };
		}
	};
};



class SpecOps_Module_OPFOR_Factions { };
class SpecOps_Module_BLUFOR_Factions { };
class SpecOps_Module_GRE_Factions { };

class CfgVehicles {
    class Module_F;
    class SpecOps_Generic_Initialize_Audio : Module_F {
        scope = 2;
        displayName = "Spec-Ops (Generic Initialize Audio)";
		icon = "\tftm\icons\sound_waves.paa";	// Map icon. Delete this entry to use the default icon.
		category = "SpecOps_Modules";

		isTriggerActivated = 0;				// 1 for module waiting until all synced triggers are activated
		isGlobal = 1;						// 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isDisposable = 0;					// 1 if modules is to be disabled once it is activated (i.e. repeated trigger activation will not work)
		curatorCanAttach = 0;				// 1 to allow Zeus to attach the module to an entity
		canSetArea = 0;						// Allows for setting the area values in the Attributes menu in 3DEN
		canSetAreaShape = 0;				// Allows for setting "Rectangle" or "Ellipse" in Attributes menu in 3DEN
		canSetAreaHeight = 0;				// Allows 1for setting height or Z value in Attributes menu in 3DEN
        is3DEN = 0;							// 1 to run init function in Eden Editor as well
		class EventHandlers {
			init = "[(_this select 0)] call SpecOps_fnc_voiceModuleInitialize;";
		};

        class Attributes {
            class SpecOps_Faction {
                unique = 0; 
                displayName = "Faction";
                tooltip = "Camo for the Faction Presets.";
                property = "SpecOps_Faction";
                control = "combo";
                expression = "_this setVariable ['%s', _value];";
                defaultValue = nil;
                validate = "none";
                typeName = "STRING";
                class Values : SpecOps_Module_BLUFOR_Factions { };
            };


        };
    };
    class SpecOps_Generic_Audio : Module_F {
        scope = 2;
        displayName = "Spec-Ops (Generic Audio)";
		icon = "\tftm\icons\sound_waves.paa";	// Map icon. Delete this entry to use the default icon.
		category = "SpecOps_Modules";

		function = "SpecOps_fnc_voiceModuleGeneric";	// Name of function triggered once conditions are met
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
            class SpecOps_Faction {
                unique = 0; 
                displayName = "Faction";
                tooltip = "Camo for the Faction Presets.";
                property = "SpecOps_Faction";
                control = "combo";
                expression = "_this setVariable ['%s', _value];";
                defaultValue = nil;
                validate = "none";
                typeName = "STRING";
                class Values : SpecOps_Module_OPFOR_Factions { };
            };

            class SpecOps_VoiceSpeech {
                unique = 0; 
                displayName = "Speech";
                tooltip = "Select the type of speech it should play.";
                property = "SpecOps_VoiceSpeech";
                control = "combo";
                expression = "_this setVariable ['%s', _value];";
                defaultValue = nil;
                validate = "none";
                typeName = "STRING";
                class Values {
                    class ObjectiveDestroyRadar { name = "Objective: Destroy Radar"; value = "OperationalCommander:ObjectiveDestroyRadar"; };
                    class ObjectiveDeadBodyRetrieval { name = "Objective: Body Retrieval"; value = "OperationalCommander:ObjectiveDeadBodyRetrieval"; };
                    class ObjectiveClearAirstrip { name = "Objective: Clear Ariport"; value = "OperationalCommander:ObjectiveClearAirstrip"; };
                    class ObjectiveClearBigtown { name = "Objective: Clear City"; value = "OperationalCommander:ObjectiveClearBigtown"; };
                    class ObjectiveClearTown { name = "Objective: Clear Town"; value = "OperationalCommander:ObjectiveClearTown"; };
                    class ObjectiveClearVillage { name = "Objective: Clear Village"; value = "OperationalCommander:ObjectiveClearVillage"; };
                    class ObjectiveClearCamp { name = "Objective: Clear Camp"; value = "OperationalCommander:ObjectiveClearCamp"; };
                    class ObjectiveAssasination { name = "Objective: Assasination"; value = "OperationalCommander:ObjectiveAssasination"; };
                    class ObjectiveSabotageResources { name = "Objective: Sabotage Resources"; value = "OperationalCommander:ObjectiveSabotageResources"; };
                    class ObjectiveDestroyTransformer { name = "Objective: Sabotage Comms"; value = "OperationalCommander:ObjectiveDestroyTransformer"; };
                    class ObjectiveAmbush { name = "Objective: Ambush"; value = "OperationalCommander:ObjectiveAmbush"; };
                    class ObjectiveGatherIntelligence { name = "Objective: Gather Intelligence"; value = "OperationalCommander:ObjectiveGatherIntelligence"; };
                    class ObjectiveHVTCaptureCompleted { name = "Objective: HVTs Captured"; value = "OperationalCommander:ObjectiveHVTCaptureCompleted"; };
                    class ObjectiveHostageRescued { name = "Objective: Hostages Rescued"; value = "OperationalCommander:ObjectiveHostageRescued"; };
                    class DemoSyncing { name = "Player: Demolition Syncing"; value = "PlayerOperator:DemoSyncing"; };
                    class JoiningTeamRequired { name = "Player: Joining Team Required"; value = "PlayerOperator:JoiningTeamRequired"; };
                    class ControlRTB { name = "Helicopter:  Control RTB"; value = "HeloPilot:ControlRTB"; };
                    class ControlCrashing { name = "Helicopter:  Control Crashing"; value = "HeloPilot:ControlCrashing"; };
                    class SupportAirTransportCrash { name = "JTAC: Crash Sending Help"; value = "RadioOperator:SupportAirTransportCrash"; };
                    class DemoDialExplosion { name = "Sound Effect: Demolition - Dial Explosion"; value = "SoundEffect:DemoDialExplosion"; };
                };
            };

            class SpecOps_OnlyRadioOperators {
                unique = 0; 
				displayName = "Radio Operators Only?";
				tooltip = "false to notify everyone, otherwise only RTO will receive notice and will have to relay that.";
				property = "SpecOps_OnlyRadioOperators";
                control = "Checkbox";
                expression = "_this setVariable ['%s', _value];";
                defaultValue = true;
                typeName = "BOOL"; 
            };

        };
    };

    // class SpecOps_Generic_Audio : Module_F {
    //     scope = 2;
    //     displayName = "Spec-Ops (Generic Audio)";
	// 	icon = "\tftm\icons\sound_waves.paa";	// Map icon. Delete this entry to use the default icon.
	// 	category = "SpecOps_Modules";

	// 	function = "SpecOps_fnc_voiceGenericModule";	// Name of function triggered once conditions are met
	// 	functionPriority = 1;				// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
	// 	isTriggerActivated = 1;				// 1 for module waiting until all synced triggers are activated
	// 	isGlobal = 1;						// 0 for server only execution, 1 for global execution, 2 for persistent global execution
	// 	isDisposable = 0;					// 1 if modules is to be disabled once it is activated (i.e. repeated trigger activation will not work)
	// 	curatorCanAttach = 0;				// 1 to allow Zeus to attach the module to an entity
	// 	canSetArea = 0;						// Allows for setting the area values in the Attributes menu in 3DEN
	// 	canSetAreaShape = 0;				// Allows for setting "Rectangle" or "Ellipse" in Attributes menu in 3DEN
	// 	canSetAreaHeight = 0;				// Allows 1for setting height or Z value in Attributes menu in 3DEN
    //     is3DEN = 0;							// 1 to run init function in Eden Editor as well

    //     class Attributes {
    //         class SpecOps_Faction {
    //             unique = 0; 
    //             displayName = "Faction";
    //             tooltip = "Camo for the Faction Presets.";
    //             property = "SpecOps_Faction";
    //             control = "combo";
    //             expression = "_this setVariable ['%s', _value];";
    //             defaultValue = nil;
    //             validate = "none";
    //             typeName = "STRING";
    //             class Values : SpecOps_Module_OPFOR_Factions { };
    //         };

    //         class SpecOps_VoiceSpeech {
    //             unique = 0; 
    //             displayName = "Speech";
    //             tooltip = "Select the type of speech it should play.";
    //             property = "SpecOps_VoiceSpeech";
    //             control = "combo";
    //             expression = "_this setVariable ['%s', _value];";
    //             defaultValue = nil;
    //             validate = "none";
    //             typeName = "ARRAY";
    //             class Values {
    //                 class ObjectiveDestroyRadar { name = "Objective: Destroy Radar"; value = {"OperationalCommander", "ObjectiveDestroyRadar"}; };
    //                 class ObjectiveDeadBodyRetrieval { name = "Objective: Body Retrieval"; value = {"OperationalCommander", "ObjectiveDeadBodyRetrieval"}; };
    //                 class ObjectiveClearAirstrip { name = "Objective: Clear Ariport"; value = {"OperationalCommander", "ObjectiveClearAirstrip"}; };
    //                 class ObjectiveClearBigtown { name = "Objective: Clear City"; value = {"OperationalCommander", "ObjectiveClearBigtown"}; };
    //                 class ObjectiveClearTown { name = "Objective: Clear Town"; value = {"OperationalCommander", "ObjectiveClearTown"}; };
    //                 class ObjectiveClearVillage { name = "Objective: Clear Village"; value = {"OperationalCommander", "ObjectiveClearVillage"}; };
    //                 class ObjectiveClearCamp { name = "Objective: Clear Camp"; value = {"OperationalCommander", "ObjectiveClearCamp"}; };
    //                 class ObjectiveAssasination { name = "Objective: Assasination"; value = {"OperationalCommander", "ObjectiveAssasination"}; };
    //                 class ObjectiveSabotageResources { name = "Objective: Sabotage Resources"; value = {"OperationalCommander", "ObjectiveSabotageResources"}; };
    //                 class ObjectiveDestroyTransformer { name = "Objective: Sabotage Comms"; value = {"OperationalCommander", "ObjectiveDestroyTransformer"}; };
    //                 class ObjectiveAmbush { name = "Objective: Ambush"; value = {"OperationalCommander", "ObjectiveAmbush"}; };
    //                 class ObjectiveGatherIntelligence { name = "Objective: Gather Intelligence"; value = {"OperationalCommander", "ObjectiveGatherIntelligence"}; };
    //                 class ObjectiveHVTCaptureCompleted { name = "Objective: HVTs Captured"; value = {"OperationalCommander", "ObjectiveHVTCaptureCompleted"}; };
    //                 class ObjectiveHostageRescued { name = "Objective: Hostages Rescued"; value = {"OperationalCommander", "ObjectiveHostageRescued"}; };
    //                 class DemoSyncing { name = "Player: Demolition Syncing"; value = {"PlayerOperator", "DemoSyncing"}; };
    //                 class JoiningTeamRequired { name = "Player: Joining Team Required"; value = {"PlayerOperator", "JoiningTeamRequired"}; };
    //                 class ControlRTB { name = "Helicopter:  Control RTB"; value = {"HeloPilot", "ControlRTB"}; };
    //                 class ControlCrashing { name = "Helicopter:  Control Crashing"; value = {"HeloPilot", "ControlCrashing"}; };
    //                 class SupportAirTransportCrash { name = "JTAC: Crash Sending Help"; value = {"RadioOperator", "SupportAirTransportCrash"}; };
    //                 class DemoDialExplosion { name = "Sound Effect: Demolition - Dial Explosion"; value = {"SoundEffect", "DemoDialExplosion"}; };
    //             };
    //         };

    //         class SpecOps_Intel {
    //             unique = 0; 
	// 			displayName = "Has Intel?";
	// 			tooltip = "Cannot Guarantee if intel will be on site... only if layout contains intel slots, most building should tho.";
	// 			property = "SpecOps_Intel";
    //             control = "Checkbox";
    //             expression = "_this setVariable ['%s', _value];";
    //             defaultValue = false;
    //             typeName = "BOOL"; 
    //         };

    //     };
    // };
};

class CfgSounds {
    class SpecOps_Generic_Dial_Explosion_0
    {
        name = "Generic_Dial_Explosion_0";
        sound[] = {"\bsm_so_core\data\audio\sounds\Generic_Dial_Explosion_0.ogg", 3, 1, 10};
        titles[] = {};
    };

    class SpecOps_Generic_Syncing_Trigger
    {
        name = "Generic_Syncing_Trigger";
        sound[] = {"\bsm_so_core\data\audio\sounds\Generic_Syncing_Trigger.ogg", 3, 1, 10};
        titles[] = {};
    };

    class SpecOps_Generic_ZipTie_0
    {
        name = "Generic_ZipTie_0";
        sound[] = {"\bsm_so_core\data\audio\sounds\Generic_ZipTie_0.ogg", 3, 1, 10};
        titles[] = {};
    };

    class SpecOps_Generic_ZipTie_1
    {
        name = "Generic_ZipTie_1";
        sound[] = {"\bsm_so_core\data\audio\sounds\Generic_ZipTie_1.ogg", 3, 1, 10};
        titles[] = {};
    };
    class SpecOps_Generic_Sell
    {
        name = "Generic_Sell";
        sound[] = {"\bsm_so_core\data\audio\sounds\Generic_Sell.ogg", 3, 1, 10};
        titles[] = {};
    };

  class SpecOps_Generic_Alive_Bleeding_0
    {
        name = "Generic_Alive_Bleeding_0";
        sound[] = {"\bsm_so_core\data\audio\sounds\Generic_Alive_Bleeding_0.ogg", 3, 1, 10};
        titles[] = {};
    };


    class SpecOps_Generic_Alive_Bleeding_1
    {
        name = "Generic_Alive_Bleeding_1";
        sound[] = {"\bsm_so_core\data\audio\sounds\Generic_Alive_Bleeding_1.ogg", 3, 1, 10};
        titles[] = {};
    };


    class SpecOps_Generic_Alive_Stable_0
    {
        name = "Generic_Alive_Stable_0";
        sound[] = {"\bsm_so_core\data\audio\sounds\Generic_Alive_Stable_0.ogg", 3, 1, 10};
        titles[] = {};
    };

    class SpecOps_Generic_Alive_Unstable_0
    {
        name = "Generic_Alive_Unstable_0";
        sound[] = {"\bsm_so_core\data\audio\sounds\Generic_Alive_Unstable_0.ogg", 3, 1, 10};
        titles[] = {};
    };

    class SpecOps_Generic_Alive_Unstable_1
    {
        name = "Generic_Alive_Unstable_1";
        sound[] = {"\bsm_so_core\data\audio\sounds\Generic_Alive_Unstable_1.ogg", 3, 1, 10};
        titles[] = {};
    };

    class Generic_Long_Radio_In_0
    {
        name = "Generic_Long_Radio_In_0";
        sound[] = {"\bsm_so_core\data\audio\sounds\Generic_Long_Radio_In_0.ogg", 2, 1, 10};
        titles[] = {};
    };

    class Generic_Long_Radio_In_1
    {
        name = "Generic_Long_Radio_In_1";
        sound[] = {"\bsm_so_core\data\audio\sounds\Generic_Long_Radio_In_1.ogg", 2, 1, 10};
        titles[] = {};
    };

    class Generic_Long_Radio_In_2
    {
        name = "Generic_Long_Radio_In_2";
        sound[] = {"\bsm_so_core\data\audio\sounds\Generic_Long_Radio_In_2.ogg", 2, 1, 10};
        titles[] = {};
    };


    class Generic_Long_Radio_Out_0
    {
        name = "Generic_Long_Radio_Out_0";
        sound[] = {"\bsm_so_core\data\audio\sounds\Generic_Long_Radio_Out_0.ogg", 2, 1, 10};
        titles[] = {};
    };

    class Generic_Long_Radio_Out_1
    {
        name = "Generic_Long_Radio_Out_1";
        sound[] = {"\bsm_so_core\data\audio\sounds\Generic_Long_Radio_Out_1.ogg", 2, 1, 10};
        titles[] = {};
    };

    class Generic_Long_Radio_Static_0
    {
        name = "Generic_Long_Radio_Static_0";
        sound[] = {"\bsm_so_core\data\audio\sounds\Generic_Long_Radio_Static_0.ogg", 2, 1, 10};
        titles[] = {};
    };

};