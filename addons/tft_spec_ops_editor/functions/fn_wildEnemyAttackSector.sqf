params ["_unitHashes", "_sectorActivity"];
/*
    [TFTSRV_WILD_SECTORS_UNITS, TFTSRV_MISSION_VAR_CURRENT_AREA] call SpecOps_fnc_wildEnemyAttackSector;
*/

{
    private _sector = _x;
    private _units = _unitHashes get _sector;
    {
        private _unit = _x;
        if(_unit distance _sector <= 500) then {
            private _grp = group _unit;
            { deleteWaypoint _x } forEachReversed waypoints _grp;
            [_grp, getPos _sectorActivity] call BIS_fnc_taskAttack;
            _grp setBehaviour "AWARE";
            _grp setCombatBehaviour "AWARE";
            _grp setCombatMode "RED";
        };
    } forEach(_units);
} forEach(_unitHashes);