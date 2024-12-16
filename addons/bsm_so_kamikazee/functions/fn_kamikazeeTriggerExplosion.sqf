params ["_unit", "_pos"];
_type = selectRandomWeighted [
	"Claymore_F", TFT_SVEST_PROB_EXPLOSIVE_SMALL, // most common (disorient less likely to be fatal)
	"IEDUrbanSmall_F", TFT_SVEST_PROB_EXPLOSIVE_MEDIUM, // rare decent explosion
	"IEDUrbanBig_F", TFT_SVEST_PROB_EXPLOSIVE_LARGE // super rare, big ass urban
];
_alreadyBlown = _unit getVariable ["svestTriggered", false];
if (_alreadyBlown) exitWith {
	_unit setVariable ["svestTriggered", true];
};
_position = ASLToAGL getPosASL _unit;
_unit setVariable ["svestTriggered", true];
_charge = createMine [_type, _position, [], 0];
_charge hideObjectGlobal true;
_charge setDamage 1;
_unit setDamage 1; // make sure unit dead