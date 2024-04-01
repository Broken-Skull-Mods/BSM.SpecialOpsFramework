params ["_select"];
if (isDedicated) exitWith { };

_classname = typeof _select;
_originPos = getPosASL _select;
_allPoints = "getNumber(_x >> 'staticAce') == 1 && getText(_x >> 'parentClass') == _classname" configClasses (configFile >> "CfgVehicles");
{
    _name = configName (_x);
    _className = getText(_x >> "parentClass");
    _position = getArray(_x >> "position");
    _veh = createVehicleLocal [_name, _originPos, [], 0, "NONE"];
    _veh enableSimulation false; 
    _veh enableSimulationGlobal false; 
    [_select, _veh, [_position], 98] call BIS_fnc_relPosObject;
    _veh setVariable ["originClass", _select, true];
    _staticPoints = _select getVariable ["aceStaticPoints", []];
    _staticPoints pushback _veh;
    _select setVariable ["aceStaticPoints", _staticPoints, true];
} forEach(_allPoints);

// [] spawn {
//     _towerTest = (nearestObjects [player, ["Land_TTowerBig_1_F"], 300]) select 0;


// _veh = createVehicle ["Land_TTowerBig_1_F_ACE_P0", getPos _towerTest, [], 0, "NONE"];
// [_towerTest, _veh, [6.69172,6.69727,1 ], 98] call BIS_fnc_relPosObject;
// // _veh setPos _newPos;
// };


// _action = ["VulcanPinch","Vulcan Pinch","",{hint "Good";},{true},{},[], [0,0,0], 100] call ace_interact_menu_fnc_createAction;
// [cursorTarget, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;

// _structure = radio_1;
// _point = rule_0;
// _XY = _structure worldToModelVisual getPosATL _point;
// _Z = (_structure vectorWorldToModelVisual ASLToAGL  getPosASL _point) select 2;
// [_XY select 0, _XY select 1, _Z];
