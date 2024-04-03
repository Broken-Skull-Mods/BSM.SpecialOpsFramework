params ["_player", "_role"];
/*
    Player can have 1 Major role or 2 Minor Roles...
    Roles are as follow:
        Major: Engineer, Medic, Pilot, Radio Specialist.
        Minor: Tank Driver, Demolition Specialist, Drone Specialist, Hacker, Submersible Driver.
    [bob, "Engineer"] call SpecOps_fnc_applyRoleToPlayer;
*/
private _majorRolesAllowed = [
    "Engineer", "Medic", "Pilot", "RadioExpert", "TechSavvy", "VehicleOperator"
];
// Disable All Traits
player setUnitTrait ["UAVHacker", false];
player setUnitTrait ["engineer", false];
player setUnitTrait ["explosiveSpecialist", false];
player setUnitTrait ["medic", false];
player setVariable ["ace_medical_medicclass", 2];

if (_role == "slacker") exitWith { 
    _player setVariable ["majorRole", nil, true];
};
_player setVariable ["majorRole", _role, true];

if (_role == "Engineer") then {
    player setUnitTrait ["engineer", true];
    player setUnitTrait ["explosiveSpecialist", true];
};

if (_role == "Medic") then {
    player setUnitTrait ["medic", true];
    player setVariable ["ace_medical_medicclass", 2];
};

if (_role == "TechSavvy") then {
    player setUnitTrait ["UAVHacker", true];
};
