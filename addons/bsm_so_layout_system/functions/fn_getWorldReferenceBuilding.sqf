private _referencePoints = nearestTerrainObjects [ [worldSize / 2, worldSize / 2], ["BUILDING"], worldSize * sqrt 2 / 2, true, false];
if (count _referencePoints <= 0) then { objNull; }; // No reference? do not include this tile riscky but better than the alternative.
_referencePoints select 0;