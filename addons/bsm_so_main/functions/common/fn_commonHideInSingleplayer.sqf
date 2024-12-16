params ["_units"];
/*
	[] call SpecOps_fnc_commonHideInSingleplayer;
*/
if (!isMultiplayer) then {
	{
		deleteVehicle _x;
	} forEach (_units);
};
