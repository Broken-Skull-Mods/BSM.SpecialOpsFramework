
params [["_prefix", "NoPrefix"], ["_buildingOnly", false]];
/*
    ["BS", "Village", "Tanoa"] call SpecOps_fnc_compileBuildingGarrisonLayoutsFromTriggers;
    ["BS", "Village", "Tanoa"] call SpecOps_fnc_compileBuildingGarrisonLayoutsFromTriggers;
    ["bmtic", true] call SpecOps_fnc_compileBuildingGarrisonLayoutsFromTriggers;
    [] call SpecOps_fnc_compileBuildingGarrisonLayoutsFromTriggers;
*/
private _requiredAddons = [];
    
private _objects = allMissionObjects "EmptyDetector";
private _br = toString [13,10];
private _comment = (toString [47, 47]);
private _tab = (toString [9]);
_copying = [];
private _copyClip = "";

if (!_buildingOnly) then {
    _copyClip = _copyClip +  "class SpecOps_DressUp {" + _br;
    _copyClip = _copyClip + _tab + "class Buildings {" + _br;
};


{
    private _missionObjs = (allMissionObjects "All") inAreaArray _x;
    {
        private _addons = [];
        private _isVehicle = isClass (configFile >> "CfgVehicles" >> (typeof _x));
        if (_isVehicle) then { _addons = configSourceAddonList (configFile >> "CfgVehicles" >> (typeof _x)); };
        { _requiredAddons pushbackUnique _x; } forEach (_addons);
    } forEach (_missionObjs);
    diag_log format["SPEC-OPS (Layout Generator): Building is %1", _x];
    _string = [_x, _prefix] call SpecOps_fnc_createBuildingGarrisonLayoutFromTrigger;
    if (isNil "_string" || _string == "") then { continue; };
    _copying pushback _string;
} forEach(_objects);

_requiredAddons pushBackUnique "bsm_so_layout_system";

private _requiredAddonsStr = (str _requiredAddons);
_requiredAddonsStr = [_requiredAddonsStr, '[', '{'] call CBA_fnc_replace;
_requiredAddonsStr = [_requiredAddonsStr, ']', '}'] call CBA_fnc_replace;


_copyClip =  _copyClip + (_copying joinString _br);
if (!_buildingOnly) then {
    _copyClip = _copyClip + _tab +  "};" + _br;
    _copyClip = _copyClip + "};" + _br;
};



if ((_men select 0) != _x) then {
    _toCopy = _toCopy + format [',', _br]; 
};

if (!_buildingOnly) then {
    _copyClip = _copyClip +  "class CfgPatches {" + _br;
    _copyClip = _copyClip + _tab + "class " + _prefix + "_" + missionName +" {" + _br;
    _copyClip = _copyClip + _tab + _tab + 'author = "Broken Skull Mods";' + _br;
    _copyClip = _copyClip + _tab + _tab + 'units[]={ };' + _br;
    _copyClip = _copyClip + _tab + _tab + 'weapons[]={};' + _br;
    _copyClip = _copyClip + _tab + _tab + 'requiredVersion=0.1;' + _br;
    _copyClip = _copyClip + _tab + _tab + 'requiredAddons[]=' + _requiredAddonsStr + ';' + _br;
    _copyClip = _copyClip + _tab + _tab + 'skipWhenMissingDependencies = 1;' + _br;
    _copyClip = _copyClip + _tab + "};" + _br;
    _copyClip = _copyClip + "};" + _br;
};


 
copyToClipboard _copyClip;
format ["OK! (%1)", ([0, 999999] call BIS_fnc_randomInt)];




