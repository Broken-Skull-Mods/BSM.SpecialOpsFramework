
params ["_faction"];
_voiceSections = "true" configClasses (configfile >> "SpecOpsFactions" >> _faction >> "Audio");
_voiceSettings = [];
{
    _section = _x; // type of operator (Radio, Command, Helo...) [RadioOperator]
    _sectionName = configName _section;
    _sectionSubClasses = "true" configClasses (_section); // [Voice Actors]
    _selectedVoiceActorForSection = selectRandom _sectionSubClasses; // eg; Ricky
    _voiceSettings pushback [_sectionName, configName _selectedVoiceActorForSection];
} forEach (_voiceSections);

// Returns format eg: [["RadioOperator", "Ricky"], ["PlayerOperator", "Kurt"]...]

_voiceSettings;