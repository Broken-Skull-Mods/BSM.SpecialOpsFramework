params ["_entity"];
/*
    [this] call registerEverPresentCamp;
*/
if(!IsServer) exitWith { };
[_entity] spawn {
    params ["_entity"];
    waitUntil { !isNil "TFTSRV_SAVEDVAR_PLAYER_FACTION" };
    _codenames = missionNamespace getVariable ["registerCamp", []];
    if (count _codenames <= 0) then {
        _codenames = [TFTSRV_SAVEDVAR_PLAYER_FACTION] call SpecOps_fnc_getCampCodenames;
        missionNamespace setVariable ["registerCamp", _codenames];
    };
    _codename = selectRandom _codenames;
    _codenames = _codenames - [_codename];
    missionNamespace setVariable ["registerCamp", _codenames];

    _isEverPresent = _entity getVariable["TFT_EverPresentEnableOrDisable", ""];
    if ((_isEverPresent == "")) then {
        _markerstr = createMarkerLocal [format["%1", (getObjectID _entity)], getPos _entity];
        _markerstr setMarkerShapeLocal "ICON";
        _markerstr setMarkerTypeLocal "TFT_SM_CAMPING_TENT_OL";
        _markerstr setMarkerSizeLocal [0.8, 0.8];
        _markerstr setMarkerColorLocal "ColorBlue";
        _markerstr setMarkerText _codename;
        _allCamps = missionNamespace getVariable ["everPresentCamps", []];
        _allCamps pushback _entity;
        missionNamespace setVariable ["everPresentCamps", _allCamps];
    };
    _connections = synchronizedObjects _entity;
    _cPos = getPos _entity;
    _campElements = [];

    { 

        if (!(_x isKindOf "TFT_Module")) then {
            _params = [];
            private _terminalCar = _x;
            {
                _name = _x;
                _value = _terminalCar getVariable _name;
                diag_log format ["%1 - %2", _name, _value];
                _params pushback [_name, _value];
            } forEach (allVariables _terminalCar);
            _campElements pushback [(typeOf _x), getPosATL _x, getDir _x, _params];
            deleteVehicle _x;
        };
    } forEach (_connections);

    _entity setVariable ["TFT_CampElements", _campElements];

    _trigger = createTrigger ["EmptyDetector", (getPos _entity), true];
    _trigger setVariable ["transit", _entity];
    _trigger setTriggerActivation ["ANYPLAYER", "PRESENT", true];
    _trigger setTriggerArea [250, 250, 0, false, 300];
    _trigger setTriggerStatements ["this",
        "[(thisTrigger getVariable['transit', objNull])] call SpecOps_fnc_craftedTransitActivate;",
        "[(thisTrigger getVariable['transit', objNull])] call SpecOps_fnc_craftedTransitDeactivate;"
    ]; 
};
