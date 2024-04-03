/*******************************************************************************

	Author: Jiri Wainar & BloodyMystk

	Example of quick preview code:
	[BIS_briefingTable,BIS_map,[0,-0.58,0.857]] call SpecOps_fnc_commonRelPosObject;
	[BIS_briefingTable,BIS_map,[0,-0.58,0.857], [[], []]] call SpecOps_fnc_commonRelPosObject;
	[BIS_briefingTable,BIS_map,[0,-0.58,0.857], [[], []], true, true] call SpecOps_fnc_commonRelPosObject;

*******************************************************************************/

params ["_parent", "_child", "_offset", ["_dirAndUp", []], ["_syncSimulation", false], ["_useGlobal", false]];
_parentSim = simulationEnabled _parent;


if (count _dirAndUp > 0) then {
    _absDir = _parent vectorModelToWorld (_dirAndUp select 0);
    _absUp = _parent vectorModelToWorld (_dirAndUp select 1);
    _child setVectorDirAndUp [_absDir, _absUp];
};

_relPos = _offset vectorDiff (boundingCenter _parent);
_absPos = _parent modelToWorldWorld _relPos;
_child setPosWorld _abspos;

if (_syncSimulation) then {
    if (_useGlobal) then {
        _parent enableSimulationGlobal _parentSim;
        _child enableSimulationGlobal _parentSim;
    }else {    
        _parent enableSimulation _parentSim;
        _child enableSimulation _parentSim;
    };

};
