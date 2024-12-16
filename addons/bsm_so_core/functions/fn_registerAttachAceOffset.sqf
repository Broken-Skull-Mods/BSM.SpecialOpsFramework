params ["_origin"];
if (isDedicated) exitWith { };
_classname = typeOf _origin;
_allPoints = "true" configClasses (configFile >> "CfgVehicles" >> _classname >> "Ace_Points");
_positionOrigin = getPos _origin;

_origin addEventHandler ["Deleted", {
	params ["_entity"];
    { deleteVehicle _x; } forEach attachedObjects _entity;
}];

{
    _subclass =  configName _x;
    _class = getText (configFile >> "CfgVehicles" >> _classname >> "Ace_Points" >> _subclass >> "classname");
    _offPos = getArray (configFile >> "CfgVehicles" >> _classname >> "Ace_Points" >> _subclass >> "offsetPos");
    _vec = createVehicleLocal [_class, _positionOrigin, [], 0, "NONE"];
    _vec enableSimulation false;
    // _vec allowDamage false;
    _vec attachTo [_origin, _offPos, "", true];
    [_origin, _vec, _offPos, _positionOrigin] spawn {
        params ["_origin", "_vec", "_offPos", "_positionOrigin"];
        _originPos = _positionOrigin;
        _originDir = getDir _origin;
        sleep 1;
        detach _vec;
        _vec attachTo [_origin, _offPos];
    };

} forEach (_allPoints);

// SpecOps_fnc_registerAttachAceOffset