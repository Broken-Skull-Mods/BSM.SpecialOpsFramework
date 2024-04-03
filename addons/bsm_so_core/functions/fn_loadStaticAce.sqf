
/*
    [] call SpecOps_fnc_loadStaticAce;
*/
private _centerposition = [worldSize / 2, worldsize / 2, 0];
private _allPoints = "getNumber(_x >> 'staticAce') == 1 && configName(_x) != 'TFT_Static_Ace_Point_Base'" configClasses (configFile >> "CfgVehicles");
{
    private _name = configName (_x);
    private _className = getText(_x >> "parentClass");
    private _offset = getArray(_x >> "position");
    diag_log format["SPEC-OPS (Static Ace): %1 | %2 | %3", _name, _className, _offset];
    {
        
        private _veh = createVehicleLocal [_name, (getPos _x), [], 0, "NONE"];
        if(isNull _veh) exitWith {
             diag_log format["SPEC-OPS (Static Ace): Failed to create vehicle"];

        };
        diag_log format["SPEC-OPS (Static Ace): Vehicle: %1", _veh];
        _veh enableSimulation false; 
        [_x, _veh, _offset, 98] call BIS_fnc_relPosObject;
        _veh setVariable ["originClass", _x];
        _staticPoints = _x getVariable ["aceStaticPoints", []];
        _staticPoints pushback _veh;
        _x setVariable ["aceStaticPoints", _staticPoints];
    } forEach (nearestObjects [_centerposition, [_className], 30000]);
} forEach (_allPoints);
// _p = ("getNumber(_x >> 'staticAce') == 1 && getText(_x >> 'parentClass') == 'Land_TTowerBig_1_F'" configClasses (configFile >> "CfgVehicles")) select 0;
// _name = configName (_p);
// _className = getText(_p >> "parentClass");
// _offset = getArray(_p >> "position");
// _className allObjects 0;