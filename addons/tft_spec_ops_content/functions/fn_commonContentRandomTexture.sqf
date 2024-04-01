params ["_obj", "_type", ["_index", 0], ["_global", true]];
/*
    [This, 'LaptopTextures'] call SpecOps_fnc_commonContentRandomTexture;
*/
diag_log format ["%1", _obj];
private _availableTextures = getArray (configFile >> "SpecOpsContent" >> "Textures" >> _type);
diag_log format ["%1", _availableTextures];

if (count _availableTextures <= 0) exitWith { };

if (_global) then {
    if (!isServer) exitWith {}; // Only change global from the server.
    _obj setObjectTextureGlobal [_index, (selectRandom _availableTextures)];
} else {
    _obj setObjectTexture [_index, (selectRandom _availableTextures)];
};