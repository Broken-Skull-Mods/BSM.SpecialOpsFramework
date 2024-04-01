params ["_faceOptions"];
/*
    [[0,1,0,0,0]] call SpecOps_fnc_commonGetRandomFace;
*/

private _isPersian = (_faceOptions select 0) == 1;
private _isWhite = (_faceOptions select 1) == 1;
private _isAfrican = (_faceOptions select 2) == 1;
private _isGreek = (_faceOptions select 3) == 1;
private _isAsian = (_faceOptions select 4) == 1;

private _faces = [];
if (_isPersian) then { // Persian
    _faces append [
        "PersianHead_A3_01", 
        "PersianHead_A3_02", 
        "PersianHead_A3_03", 
        "PersianHead_A3_04_a", 
        "PersianHead_A3_04_l", 
        "PersianHead_A3_04_sa",
        "CamoHead_Persian_01_F", 
        "CamoHead_Persian_02_F", 
        "CamoHead_Persian_03_F"
    ];
};

if (_isWhite) then { // White

    _faces append [
        "WhiteHead_01",	
        "WhiteHead_02",	
        "WhiteHead_03",	
        "WhiteHead_04",	
        "WhiteHead_05",	
        "WhiteHead_06",	
        "WhiteHead_07",	
        "WhiteHead_08",	
        "WhiteHead_09",	
        "WhiteHead_10",	
        "WhiteHead_11",	
        "WhiteHead_12",	
        "WhiteHead_13",	
        "WhiteHead_14",	
        "WhiteHead_15",	
        "WhiteHead_16",	
        "WhiteHead_17",	
        "WhiteHead_18",	
        "WhiteHead_19",	
        "WhiteHead_20",	
        "WhiteHead_21",	
        "WhiteHead_22_a",	
        "WhiteHead_22_l",	
        "WhiteHead_22_sa",
        "CamoHead_White_01_F",
        "CamoHead_White_02_F",
        "CamoHead_White_03_F",
        "CamoHead_White_04_F",
        "CamoHead_White_05_F",
        "CamoHead_White_06_F",
        "CamoHead_White_07_F",
        "CamoHead_White_08_F",
        "CamoHead_White_09_F",
        "CamoHead_White_10_F",
        "CamoHead_White_11_F",
        "CamoHead_White_12_F",
        "CamoHead_White_13_F",
        "CamoHead_White_14_F",
        "CamoHead_White_15_F",
        "CamoHead_White_16_F",
        "CamoHead_White_17_F",
        "CamoHead_White_18_F",
        "CamoHead_White_19_F",
        "CamoHead_White_20_F",
        "CamoHead_White_21_F"
    ];
};

if (_isAfrican) then { // African

    _faces append [
        "AfricanHead_01",	
        "AfricanHead_02",	
        "AfricanHead_03",
        "TanoanHead_A3_01",	
        "TanoanHead_A3_02",
        "TanoanHead_A3_03",	
        "TanoanHead_A3_04",	
        "TanoanHead_A3_05",	
        "TanoanHead_A3_06",	
        "TanoanHead_A3_07",	
        "TanoanHead_A3_08",	
        "TanoanBossHead"
    ];
};

if (_isGreek) then { // Greek
    _faces append [
        "GreekHead_A3_01",	
        "GreekHead_A3_02",	
        "GreekHead_A3_03",	
        "GreekHead_A3_04",	
        "GreekHead_A3_05",	
        "GreekHead_A3_06",	
        "GreekHead_A3_07",	
        "GreekHead_A3_08",	
        "GreekHead_A3_09",
        "GreekHead_A3_10_a",
        "GreekHead_A3_10_l",
        "GreekHead_A3_10_sa",
        "CamoHead_Greek_01_F",
        "CamoHead_Greek_02_F",
        "CamoHead_Greek_03_F",
        "CamoHead_Greek_04_F",
        "CamoHead_Greek_05_F",
        "CamoHead_Greek_06_F",
        "CamoHead_Greek_07_F",
        "CamoHead_Greek_08_F",
        "CamoHead_Greek_09_F"
    ];
};

if (_isAsian) then { // Asian
    _faces append [
        "AsianHead_A3_01",	
        "AsianHead_A3_02",	
        "AsianHead_A3_03",
        "CamoHead_Asian_01_F",
        "CamoHead_Asian_02_F",
        "CamoHead_Asian_03_F"
    ];
};
diag_log format ["SPEC-OPS (commonGetRandomFace): _faces = %1", _faces];
selectRandom _faces;