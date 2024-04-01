params ["_voiceNb"];
/*
    [0] call SpecOps_fnc_commonGetRandomVoice;
*/
private _voice = "Male01ENG";
if (_voiceNb == 0) then { // American English
    _voice = selectRandom [
        "Male01ENG",
        "Male02ENG",
        "Male03ENG",
        "Male04ENG",
        "Male05ENG",
        "Male06ENG",
        "Male07ENG",
        "Male08ENG",
        "Male09ENG",
        "Male10ENG",
        "Male11ENG",
        "Male12ENG" 
    ];

};


if (_voiceNb == 1) then { // British English
    _voice = selectRandom [
        "Male01ENGB",
        "Male02ENGB",
        "Male03ENGB",
        "Male04ENGB",
        "Male05ENGB"
    ];
};


if (_voiceNb == 2) then { // Altian English
    _voice = selectRandom [
        "Male01GRE",
        "Male02GRE",
        "Male03GRE",
        "Male04GRE",
        "Male05GRE",
        "Male06GRE"   
    ];
};


if (_voiceNb == 3) then { // Farsi
    _voice = selectRandom [
        "Male01PER",
        "Male02PER",
        "Male03PER"
    ];
};

if (_voiceNb == 4) then { // Chinese
    _voice = selectRandom [
        "Male01CHI",
        "Male02CHI",
        "Male03CHI"
    ];
};

if (_voiceNb == 5) then { // French African Accent
    _voice = selectRandom [
        "Male01FRE",
        "Male02FRE",
        "Male03FRE"
    ];
};

if (_voiceNb == 6) then { // French English
    _voice = selectRandom [
        "Male01ENGFRE",
        "Male02ENGFRE"
    ];
};

if (_voiceNb == 7) then { // Polish
    _voice = selectRandom [
        "Male01POL",
        "Male02POL",
        "Male03POL"
    ];
};

if (_voiceNb == 8) then { // Russian
    _voice = selectRandom [
        "Male01RUS",
        "Male02RUS",
        "Male03RUS"
    ];
};
_voice