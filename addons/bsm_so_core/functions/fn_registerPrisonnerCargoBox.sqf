params ["_classes"];
_actionHandler = {
    params ["_target", "_player", "_params"];
    [_target] spawn {
        params ["_target", "_player", "_params"];
        _pos = getPos _target;
        _allUnits = nearestObjects [_pos, ["Man"], 15];
        _enemyCapture = [];
        _hostageRescued = [];
        {
            _side = (side group _x);
            _isUnitEast = _side == east;
            _isUnitWest = _side == west;
            _isUnitInd = _side == resistance;
            _isUnitCiv = _side == civilian;
            _isUnitCaptive = captive _x;
            if(_isUnitCaptive) then {
                if(_isUnitEast) then { _enemyCapture pushback _x; };
                if(_isUnitWest) then { _hostageRescued pushback _x; };
            };

        } forEach (_allUnits);

        ["Loading Container...", 5, { !(player getVariable ["ACE_isUnconscious", false]) }, {
            params ["_args"];
            _target = _args select 0;
            _enemyCapture = _args select 1;
            _hostageRescued = _args select 2;
            diag_log format["%1", _enemyCapture, _hostageRescued];
            if(count _enemyCapture <= 0 && count _hostageRescued <= 0) exitWith { hint "Nothing to load in."; };
            [player, _enemyCapture, _hostageRescued] remoteExec ["TFTSRV_COMMON_ON_PEOPLE_CONTAINER_LOAD", 2];
        }, {}, [_target, _enemyCapture, _hostageRescued]] call CBA_fnc_progressBar;
    };
};
_actionContainerLoadPeople = ["ContainerLoadPeople", "Load People", "\tftm\icons\contract.paa", _actionHandler, {true}] call ace_interact_menu_fnc_createAction;

{ 
    [_x, 0, ["ACE_MainActions"], _actionContainerLoadPeople] call ace_interact_menu_fnc_addActionToClass; 
} forEach (_classes);