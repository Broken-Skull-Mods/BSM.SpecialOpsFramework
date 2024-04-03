params ["_unit", "_distance"];
/*
   [player, 2.5] call SpecOps_fnc_getCursorTarget;
*/
_unit = player;
_distance = 10;
_unitPos = (_unit getRelPos [(_distance / 2), 0]);
_cursorTargets = allUnits inAreaArray [_unitPos, 0.5, _distance, 0, true, 3]; 
_cursorTargets = _cursorTargets - [_unit]; 
_cursorTargets = [_cursorTargets, [], { _unit distance _x }, "ASCEND"] call BIS_fnc_sortBy; 
_cursorTarget = objNull; 
if(count _cursorTargets > 0) then {  
   _cursorTarget = _cursorTargets select 0;  
}; 

removeHeadgear _cursorTarget;
_cursorTarget addHeadgear selectRandom [
   "rhs_beret_vdv2", "H_Beret_CSAT_01_F", "H_Watchcap_red", "H_Watchcap_sgg", 
   "rhs_beanie_green", "H_PASGT_basic_UNO_F", "H_Bandanna_surfer_grn", "Aegis_lxWS_H_bmask_AAF"
];

_cursorTarget; 
