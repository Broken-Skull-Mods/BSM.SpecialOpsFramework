
if (!hasInterface || is3DEN) exitWith {};

_condition = { 
	params["_target"];
	!isNil "bsm_so_anim_ctrl_e" && {bsm_so_anim_ctrl_e}
};

_exec = {
	params["_target"];
    private _logics = missionNamespace getVariable ["bsm_so_jumpPositions", []];
	[(_logics apply { [getPos _x, _x getVariable ["bsm_so_name", "Jump (No Name)"]] }), "[SpecOps_fnc_haloModulePerformTeamJump] spawn SpecOps_fnc_orkaUIRespawnButtonDeploy; "] spawn SpecOps_fnc_systemRespawnOpenUI;
};

_actionAnim = ["bsm_so_anims", "Roleplay", "\tftm\icons\voodoo_doll.paa", {}, _condition] call ace_interact_menu_fnc_createAction;
["CAManBase", 1, ["ACE_SelfActions"], _actionAnim, true] call ace_interact_menu_fnc_addActionToClass;



_condition = { 
	params["_target"];
	true
};

_exec = {
	params ["_target", "_player", "_params"];
    _target switchMove (_params select 0); 
};

_actionAnimMove = ["bsm_so_animsCancel", "Cancel", "\tftm\icons\cancel.paa", _exec, _condition, {}, [""]] call ace_interact_menu_fnc_createAction;
["CAManBase", 1, ["ACE_SelfActions", "bsm_so_anims"], _actionAnimMove, true] call ace_interact_menu_fnc_addActionToClass;


_bsm_so_anims_actions= ["bsm_so_anims_actions", "Actions", "", {}, {true}, {}, [""]] call ace_interact_menu_fnc_createAction;
["CAManBase", 1,["ACE_SelfActions", "bsm_so_anims"], _bsm_so_anims_actions, true] call ace_interact_menu_fnc_addActionToClass;

_bsm_so_anims_convos = ["bsm_so_anims_convos", "Conversation", "", {}, {true}, {}, [""]] call ace_interact_menu_fnc_createAction;
["CAManBase", 1,["ACE_SelfActions", "bsm_so_anims"], _bsm_so_anims_convos, true] call ace_interact_menu_fnc_addActionToClass;

_bsm_so_anims_relaxed = ["bsm_so_anims_relaxed", "Relaxed", "", {}, {true}, {}, [""]] call ace_interact_menu_fnc_createAction;
["CAManBase", 1,["ACE_SelfActions", "bsm_so_anims"], _bsm_so_anims_relaxed, true] call ace_interact_menu_fnc_addActionToClass;

_bsm_so_anims_hostage = ["bsm_so_anims_hostage", "Hostage", "", {}, {true}, {}, [""]] call ace_interact_menu_fnc_createAction;
["CAManBase", 1,["ACE_SelfActions", "bsm_so_anims"], _bsm_so_anims_hostage, true] call ace_interact_menu_fnc_addActionToClass;

_bsm_so_anims_injuries = ["bsm_so_anims_injuries", "Injuries", "", {}, {true}, {}, [""]] call ace_interact_menu_fnc_createAction;
["CAManBase", 1,["ACE_SelfActions", "bsm_so_anims"], _bsm_so_anims_injuries, true] call ace_interact_menu_fnc_addActionToClass;

_bsm_so_anims_movements = ["bsm_so_anims_movements", "Movements", "", {}, {true}, {}, [""]] call ace_interact_menu_fnc_createAction;
["CAManBase", 1,["ACE_SelfActions", "bsm_so_anims"], _bsm_so_anims_movements, true] call ace_interact_menu_fnc_addActionToClass;

_bsm_so_anims_party = ["bsm_so_anims_party", "Party", "", {}, {true}, {}, [""]] call ace_interact_menu_fnc_createAction;
["CAManBase", 1,["ACE_SelfActions", "bsm_so_anims"], _bsm_so_anims_party, true] call ace_interact_menu_fnc_addActionToClass;

_bsm_so_anims_misc = ["bsm_so_anims_misc", "Misc", "", {}, {true}, {}, [""]] call ace_interact_menu_fnc_createAction;
["CAManBase", 1,["ACE_SelfActions", "bsm_so_anims"], _bsm_so_anims_misc, true] call ace_interact_menu_fnc_addActionToClass;



private _supportedAnimations = [

	// [["Acts_Executioner_Backhand", "Acts_Executioner_Forehand"], "Gun Slap", "bsm_so_anims_hostage", true],
	// [["Acts_ExecutionVictim_Backhand", "Acts_ExecutionVictim_Forehand"], "Gun Slapped", "bsm_so_anims_hostage", true],
	// [["Acts_ExecutionVictim_Backhand", "Acts_ExecutionVictim_Forehand"], "Gun Slapped", "bsm_so_anims_hostage", true],
	// [["Acts_Executioner_Squat"], "Squat", "bsm_so_anims_hostage", true],
	// [["Acts_Onchair_Dead"], "On Chair Dead", "bsm_so_anims_misc", false],
	// [["Acts_carFixingWheel"], "Wheel (Mechanic)", "bsm_so_anims_working", true],
	// Acts_Undead_Coffin - Revive

];


["Idle (Guard)", "bsm_so_anims_relaxed", false, ["Acts_AidlPercMstpSloWWpstDnon_warmup_1_loop", "Acts_AidlPercMstpSloWWpstDnon_warmup_2_loop", "Acts_AidlPercMstpSloWWpstDnon_warmup_3_loop", "Acts_AidlPercMstpSloWWpstDnon_warmup_4_loop", "Acts_AidlPercMstpSloWWpstDnon_warmup_4_loop", "Acts_AidlPercMstpSloWWpstDnon_warmup_5_loop", "Acts_AidlPercMstpSloWWpstDnon_warmup_6_loop"]] call SpecOps_fnc_AnimCtrlRegisterAnimation;
["Idle 2 (Guard)", "bsm_so_anims_relaxed", false, ["Acts_AidlPercMstpSlowWrflDnon_warmup04", "Acts_AidlPercMstpSlowWrflDnon_warmup03", "Acts_AidlPercMstpSlowWrflDnon_warmup02", "Acts_AidlPercMstpSlowWrflDnon_warmup01", "Acts_AidlPercMstpSloWWrflDnon_warmup_8_loop", "Acts_AidlPercMstpSloWWrflDnon_warmup_7_loop", "Acts_AidlPercMstpSloWWrflDnon_warmup_6_loop", "Acts_AidlPercMstpSloWWrflDnon_warmup_5_loop", "Acts_AidlPercMstpSloWWrflDnon_warmup_4_loop", "Acts_AidlPercMstpSloWWrflDnon_warmup_3_loop", "Acts_AidlPercMstpSloWWrflDnon_warmup_1_loop", "Acts_AidlPercMstpSloWWrflDnon_warmup_2_loop"]] call SpecOps_fnc_AnimCtrlRegisterAnimation;
["Idle 3 (Listening)", "bsm_so_anims_relaxed", false, ["Acts_Briefing_SA_Loop", "Acts_Briefing_SB_Loop"]] call SpecOps_fnc_AnimCtrlRegisterAnimation;
["Idle 4 (Listening)", "bsm_so_anims_relaxed", false, ["Acts_CivilListening_2", "Acts_CivilListening_1"]] call SpecOps_fnc_AnimCtrlRegisterAnimation;
["Strecthing", "bsm_so_anims_relaxed", true, ["Acts_Ambient_Stretching", "Acts_Ambient_Relax_2", "Acts_Ambient_Relax_3", "Acts_Ambient_Relax_4", "Acts_CivilIdle_2", "Acts_CivilIdle_1"]] call SpecOps_fnc_AnimCtrlRegisterAnimation;


["Arguing", "bsm_so_anims_convos", true, ["Acts_Ambient_Dismissing", "Acts_Ambient_Aggressive"]] call SpecOps_fnc_AnimCtrlRegisterAnimation;
["Agreeing", "bsm_so_anims_convos", true, ["Acts_Ambient_Agreeing"]] call SpecOps_fnc_AnimCtrlRegisterAnimation;
["Defensive", "bsm_so_anims_convos", true, ["Acts_Ambient_Defensive"]] call SpecOps_fnc_AnimCtrlRegisterAnimation;
["Huh?", "bsm_so_anims_convos", true, ["Acts_Ambient_Huh"]] call SpecOps_fnc_AnimCtrlRegisterAnimation;

["Investigate (Squat)", "bsm_so_anims_actions", true, ["Acts_Executioner_Squat"]] call SpecOps_fnc_AnimCtrlRegisterAnimation;
["Pick Up", "bsm_so_anims_actions", true, ["Acts_Ambient_Picking_Up"]] call SpecOps_fnc_AnimCtrlRegisterAnimation;
["Tie Shoelaces", "bsm_so_anims_actions", true, ["Acts_Ambient_Shoelaces"]] call SpecOps_fnc_AnimCtrlRegisterAnimation;
["Listening to Radio", "bsm_so_anims_actions", true, ["Acts_listeningToRadio_Loop"]] call SpecOps_fnc_AnimCtrlRegisterAnimation;
["Grieving", "bsm_so_anims_actions", false, ["Acts_Grieving"]] call SpecOps_fnc_AnimCtrlRegisterAnimation;
["Shield from Sun", "bsm_so_anims_actions", true, ["Acts_ShieldFromSun_loop"]] call SpecOps_fnc_AnimCtrlRegisterAnimation;
["Clean Nose", "bsm_so_anims_actions", true, ["Acts_Ambient_Cleaning_Nose", "Acts_Ambient_Gestures_Sneeze"]] call SpecOps_fnc_AnimCtrlRegisterAnimation;
["Facepalm", "bsm_so_anims_actions", true, ["Acts_Ambient_Facepalm_1", "Acts_Ambient_Facepalm_2"]] call SpecOps_fnc_AnimCtrlRegisterAnimation;
["Tired", "bsm_so_anims_actions", true, ["Acts_Ambient_Gestures_Tired", "Acts_Ambient_Gestures_Yawn"]] call SpecOps_fnc_AnimCtrlRegisterAnimation;
["Take a Piss", "bsm_so_anims_actions", true, ["Acts_AidlPercMstpSlowWrflDnon_pissing"]] call SpecOps_fnc_AnimCtrlRegisterAnimation;
["Stop", "bsm_so_anims_actions", true, ["Acts_PercMstpSlowWrflDnon_handup1", "Acts_PercMstpSlowWrflDnon_handup1b", "Acts_PercMstpSlowWrflDnon_handup1c", "Acts_PercMstpSlowWrflDnon_handup2", "Acts_PercMstpSlowWrflDnon_handup2b", "Acts_PercMstpSlowWrflDnon_handup2c"]] call SpecOps_fnc_AnimCtrlRegisterAnimation;

["Typing Keyboard", "bsm_so_anims_misc", false, ["Acts_Accessing_Computer_Loop"]] call SpecOps_fnc_AnimCtrlRegisterAnimation;
["Shooting", "bsm_so_anims_misc", true, ["Acts_AidlPercMstpSlowWrflDnon_warmup05"]] call SpecOps_fnc_AnimCtrlRegisterAnimation;
["Panic Event", "bsm_so_anims_misc", false, ["Acts_Shocked_1_Loop", "Acts_Shocked_4_Loop", "Acts_ShockedUnarmed_2_Loop"]] call SpecOps_fnc_AnimCtrlRegisterAnimation;



["Sit (Tied)", "bsm_so_anims_hostage", false, ["acts_aidlpsitmstpssurwnondnon_loop", "Acts_AidlPsitMstpSsurWnonDnon04", "Acts_AidlPsitMstpSsurWnonDnon03", "Acts_AidlPsitMstpSsurWnonDnon02", "Acts_AidlPsitMstpSsurWnonDnon01", "Acts_AidlPsitMstpSsurWnonDnon_loop"]] call SpecOps_fnc_AnimCtrlRegisterAnimation;
["Kneed (Tied)", "bsm_so_anims_hostage", false, ["Acts_ExecutionVictim_Loop"]] call SpecOps_fnc_AnimCtrlRegisterAnimation;
["Guard", "bsm_so_anims_hostage", false, ["Acts_Executioner_StandingLoop"]] call SpecOps_fnc_AnimCtrlRegisterAnimation;


["Injured 1 (Prone)", "bsm_so_anims_medical", false, ["Acts_CivilInjuredArms_1", "Acts_CivilInjuredLegs_1", "Acts_CivilInjuredHead_1", "Acts_InjuredLookingRifle01", "Acts_InjuredLookingRifle02", "Acts_InjuredLookingRifle03"]] call SpecOps_fnc_AnimCtrlRegisterAnimation;
["Injured 2 (Prone)", "bsm_so_anims_medical", false, ["Acts_CivilInjuredGeneral_1", "Acts_CivilInjuredChest_1", "Acts_InjuredAngryRifle01", "Acts_InjuredCoughRifle02", "Acts_InjuredLookingRifle04", "Acts_InjuredLookingRifle05"]] call SpecOps_fnc_AnimCtrlRegisterAnimation;
["Injured 3 (Sit)", "bsm_so_anims_medical", false, ["Acts_Injured_Driver_Loop"]] call SpecOps_fnc_AnimCtrlRegisterAnimation;

["Dance", "bsm_so_anims_party", false, ["Acts_Dance_01", "Acts_Dance_02"]] call SpecOps_fnc_AnimCtrlRegisterAnimation;


["Panic (Crouch)", "bsm_so_anims_movements", true, ["ApanPknlMstpSnonWnonDnon_G01", "ApanPknlMstpSnonWnonDnon_G02", "ApanPknlMstpSnonWnonDnon_G03"]] call SpecOps_fnc_AnimCtrlRegisterAnimation;
["Panic (Prone)", "bsm_so_anims_movements", true, ["ApanPpneMstpSnonWnonDnon_G01", "ApanPpneMstpSnonWnonDnon_G02", "ApanPpneMstpSnonWnonDnon_G03"]] call SpecOps_fnc_AnimCtrlRegisterAnimation;

