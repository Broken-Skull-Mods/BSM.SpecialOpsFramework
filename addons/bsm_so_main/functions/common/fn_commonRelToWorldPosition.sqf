params ["_object", "_offset"];
_relPos = _object vectorDiff (boundingCenter _offset); 
_absPos = _object modelToWorldWorld _relPos; 
_abspos;