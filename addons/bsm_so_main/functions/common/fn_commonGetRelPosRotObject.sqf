/*******************************************************************************

	Author: BloodyMystk

    Return the related Position and Rotation of the child from the parent.

	Example of quick preview code:
	[parentObj, childObject] call SpecOps_fnc_commonGetRelPosRotObject;

*******************************************************************************/

params ["_parent", "_child"];
_pos = getPosWorld _child;
_pos = ASLToATL _pos;
_relPos = _parent worldToModel _pos;
_relPos = _relPos vectorAdd (boundingCenter _parent);
_dirUp = [_child, _parent] call BIS_fnc_vectorDirAndUpRelative;

[_relPos, _dirUp];