params ["_objectToBlow"];
/*
    [building] remoteExec ["SpecOps_fnc_blowTheShitUp", 2];
*/
_charge = createMine ["IEDUrbanBig_F", getPos _objectToBlow, [], 0];
_charge hideObjectGlobal true;
_charge setDamage 1;
_objectToBlow setDamage 1;
_objectToBlow hideObjectGlobal true;

