params ["_vehicle", "_targetPos", ["_amount", 1]];
_vehicle setVehicleAmmo 1;
_vehicle doArtilleryFire [_targetPos, currentMagazine _vehicle, _amount];