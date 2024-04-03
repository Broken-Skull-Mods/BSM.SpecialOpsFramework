/*
    [] call SpecOps_fnc_loadPowerTransformers;
*/
// Wait until powerlines are loaded.
waitUntil { (missionNamespace getVariable ["isPowerlineReady", false]) };
private _powerTransformers = missionNamespace getVariable ["powerTransformers", []];
{
    _markerName = getObjectID _x;
    _marker = createMarkerLocal [format["power_provider_%1", _markerName], _x];
    _marker setMarkerShapeLocal "ICON";
    _marker setMarkerTypeLocal "TFT_SM_POWER_LIGHTNING_OL";
    _marker setMarkerSizeLocal [0.3, 0.3];
} forEach(_powerTransformers);