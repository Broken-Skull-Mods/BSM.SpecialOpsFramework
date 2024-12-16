// [] call SpecOps_fnc_updateZeusCurator;
private _blacklisted = [
    "Logic", "TFTE_Town", "TFTE_Village", "TFTE_Camp", "TFTE_Comms", "TFTE_Resource", "TFTE_AA", "TFTE_AMBUSH",
    "TFT_Static_Ace_Point_Base", "TFT_Ace_Points"
];
{
    _x addCuratorEditableObjects
    [
        entities [[],_blacklisted, true,true],
        true
    ];
} count allCurators;