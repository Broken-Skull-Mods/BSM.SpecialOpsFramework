 
if (!isServer) exitWith {};
private _covermaps = allMissionObjects "BSM_CoverMapModule_F"; 
if (count _covermaps <= 0) exitWith {}; 
private _elements = nearestTerrainObjects [ [worldSize / 2, worldSize / 2], [], worldSize * sqrt 2 / 2, false ]; 
{  
    private _object = _x; 
    private _hidden = true; 
    { 
        private _objectArea = _x getvariable ["objectArea", [0,0,0,false,0]]; 
        private _pos = getPos _x; 
        private _isActive = _object inArea [_pos, (_objectArea select 0), (_objectArea select 1), (_objectArea select 2), (_objectArea select 3), (_objectArea select 4)]; 
        if (_isActive) exitWith { _hidden = false; }; 
    } forEach (_covermaps);     
    _x hideObjectGlobal _hidden;  
} forEach (_elements); 



