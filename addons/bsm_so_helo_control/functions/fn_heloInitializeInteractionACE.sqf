if (!hasInterface || is3DEN) exitWith { };
// Command Parent Menu
_supportHeloCommandAction = ["HeliTransport_Command", "Command", "", {}, { !isPlayer driver _target && !visibleMap }] call ace_interact_menu_fnc_createAction;
_supportAirTransportLandingAction = ["HeliTransport_Land", "Landing", "", SpecOps_fnc_heloLanding, { 
    params ["_target"];
    ((getposATL _target) select 2) > 1.1 
}] call ace_interact_menu_fnc_createAction;
_supportAirTransportMoveAction = ["HeliTransport_Travel", "Travel", "", SpecOps_fnc_heloMoveTo, { (!isPlayer driver _target) }] call ace_interact_menu_fnc_createAction;
//!isPlayer driver _target && !visibleMap && (isNil "TFT_HELI_TRANSPORTER_MODEL" || TFT_HELI_TRANSPORTER_MODEL != vehicle _target)
// TFT_SUPP_AIR_TSP_ACE_ABANDON
_supportHeloAbandonAction = ["HeliTransport_Command_Abandon", "Abandon", "", {
    params ["_target"];
    (player setVariable ["bsm_so_helicopter", nil]);
}, { 
	(!isPlayer driver _target && !visibleMap) && { !isNull (player getVariable ["bsm_so_helicopter", objNull]); }
}] call ace_interact_menu_fnc_createAction;

_supportHeloClaimAction = ["HeliTransport_Command_Claim", "Claim", "", {
    params ["_target"];
    (player setVariable ["bsm_so_helicopter", _target]);

}, { 
	(!isPlayer driver _target && !visibleMap) && { isNull (player getVariable ["bsm_so_helicopter", objNull]); }
}] call ace_interact_menu_fnc_createAction;

// _supportAirTransportRepairAction = ["HeliTransport_Repair", "Repair", "", TFTSRV_SUPP_TSP_HELI_REPAIR, { 
// 	!visibleMap && damage vehicle _target > 0.01
// }] call ace_interact_menu_fnc_createAction;

// [_x, 0, ["ACE_MainActions"], _supportAirTransportRepairAction] call ace_interact_menu_fnc_addActionToClass;
["Air", 1, ["ACE_SelfActions"], _supportHeloCommandAction, true] call ace_interact_menu_fnc_addActionToClass;
["Air", 1, ["ACE_SelfActions", "HeliTransport_Command"], _supportHeloClaimAction, true] call ace_interact_menu_fnc_addActionToClass;
["Air", 1, ["ACE_SelfActions", "HeliTransport_Command"], _supportHeloAbandonAction, true] call ace_interact_menu_fnc_addActionToClass;
["Air", 1, ["ACE_SelfActions", "HeliTransport_Command"], _supportAirTransportLandingAction, true] call ace_interact_menu_fnc_addActionToClass;
["Air", 1, ["ACE_SelfActions", "HeliTransport_Command"], _supportAirTransportMoveAction, true] call ace_interact_menu_fnc_addActionToClass;

_heliAction = ["SupportHeliTransport_Remote", "Transport Control", "\tftm\icons\helicopter.paa", {}, { 
    private _helo = player getVariable ["bsm_so_helicopter", objnull];
	!visibleMap && { !isNull _helo && {  _helo != (vehicle player) }}  
}] call ace_interact_menu_fnc_createAction;
	
// _supportHeliTransportCtrl = ["SupportHeliTransportCtrlRTB", "Clear Out (RTB)", "", { call TFT_SUPP_AIR_TSP_ACE_RTB; }, {true}] call ace_interact_menu_fnc_createAction;
_supportHeliTransportCtrlExtract = ["SupportHeliTransportCtrlExtract", "Extract Now", "", SpecOps_fnc_heloPickUp,  { vehicle player == player }] call ace_interact_menu_fnc_createAction;

_supportHeliTransportCtrlEngine = ["SupportHeliTransportCtrlEngine", "Engine Hot", "", {  [] spawn SpecOps_fnc_heloKeepEngineHot; }, {
		private _helo = player getVariable ["bsm_so_helicopter", objnull];
		!isEngineOn _helo && ((getposATL _helo) select 2) < 1.1 }] call ace_interact_menu_fnc_createAction;

_supportHeliTransportCtrlStandBy = ["SupportHeliTransportCtrlStandBy", "Stand By", "", {
    [] spawn SpecOps_fnc_heloKeepEngineCold;
}, {

	private _helo = player getVariable ["bsm_so_helicopter", objnull];
	isEngineOn _helo && ((getposATL _helo) select 2) < 1.1 
}] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions"], _heliAction] call ace_interact_menu_fnc_addActionToObject;
// Remote Control
// [player, 1, ["ACE_SelfActions", "SupportHeliTransport_Remote"], _supportHeliTransportCtrl] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "SupportHeliTransport_Remote"], _supportHeliTransportCtrlExtract] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "SupportHeliTransport_Remote"], _supportHeliTransportCtrlEngine] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "SupportHeliTransport_Remote"], _supportHeliTransportCtrlStandBy] call ace_interact_menu_fnc_addActionToObject;
