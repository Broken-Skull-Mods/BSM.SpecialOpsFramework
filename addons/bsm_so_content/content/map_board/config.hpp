class SpecOps_MapBoard_1: Land_MapBoard_F
{
    scope=2;
    displayName="Whiteboard (Radio Comms)";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = { "\bsm_so_content\content\map_board\texture\comms.paa" };
};

class SpecOps_MapBoard_JustinLove_1: Land_MapBoard_F
{
    scope=2;
    displayName="Whiteboard (Justin's Love)";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = { "\bsm_so_content\content\map_board\texture\justin_love.paa" };
};

class SpecOps_MapBoard_Whiteboard: Land_MapBoard_F
{
    scope=2;
    displayName="Whiteboard (CQC)";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = { "\bsm_so_content\content\map_board\texture\cqc_doctrine.paa" };
};

class SpecOps_MapBoard_1_Wall: Land_MapBoard_01_Wall_F
{
    scope=2;
    displayName="Whiteboard (Radio Comms, Wall)";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = { "\bsm_so_content\content\map_board\texture\comms.paa" };
};

class SpecOps_MapBoard_Whiteboard_Wall: Land_MapBoard_01_Wall_F
{
    scope=2;
    displayName="Whiteboard (CQC, Wall)";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = { "\bsm_so_content\content\map_board\texture\cqc_doctrine.paa" };
};

class SpecOps_MapBoard_JustinLove_1_Wall: Land_MapBoard_01_Wall_F
{
    scope=2;
    displayName="Whiteboard (Justin's Love, Wall)";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = { "\bsm_so_content\content\map_board\texture\justin_love.paa" };
};

class bsm_so_v_mapboard_brief_0: Land_MapBoard_F
{
    scope=2;
    displayName="Whiteboard (Briefing)";
    hiddenSelections[] = {"camo"};
    class EventHandlers {
        postInit = "[(_this select 0)] call SpecOps_fnc_setBriefingTextures;";
    };

    class Attributes {            
        class bsm_so_texture_code {
            unique = 0; 
            displayName = "Texture Code";
            tooltip = "Texture Path .paa";
            property = "bsm_so_texture_code";
            control = "EditArray";
            expression = "_this setVariable ['%s', _value, true];";
            validate = "none";
            typeName = "ARRAY";
        };
    };
};


class bsm_so_v_mapboard_brief_wall_0: Land_MapBoard_01_Wall_F
{
    scope=2;
    displayName="Whiteboard (Briefing, Wall)";
    hiddenSelections[] = {"camo"};
    class EventHandlers {
        init = "[(_this select 0)] call SpecOps_fnc_setBriefingTextures;";
    };
    class Attributes { 
        class bsm_so_texture_code {
            unique = 0; 
            displayName = "Texture Code";
            tooltip = "Texture Path .paa";
            property = "bsm_so_texture_code";
            control = "EditCodeMulti5";
            expression = "_this setVariable ['%s', _value, true];";
            validate = "none";
            typeName = "ARRAY";
        };
    };
};


class bsm_so_tutorial_tfar_ulr_0: Land_MapBoard_F
{
    scope=2;
    displayName="Whiteboard (Tutorial, TFAR SR)";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = { "\bsm_so_content\content\map_board\texture\tfar_setup_long_range.paa" };
};

class bsm_so_tutorial_tfar_slr_wall_0: Land_MapBoard_01_Wall_F
{
    scope=2;
    displayName="Whiteboard (Tutorial, TFAR SR, Wall)";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = { "\bsm_so_content\content\map_board\texture\tfar_setup_short_range.paa" };
};


class bsm_so_tutorial_tfar_ssr_0: Land_MapBoard_F
{
    scope=2;
    displayName="Whiteboard (Tutorial, TFAR SR)";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = { "\bsm_so_content\content\map_board\texture\tfar_setup_short_range.paa" };
};

class bsm_so_tutorial_tfar_ssr_wall_0: Land_MapBoard_01_Wall_F
{
    scope=2;
    displayName="Whiteboard (Tutorial, TFAR SR, Wall)";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = { "\bsm_so_content\content\map_board\texture\tfar_setup_short_range.paa" };
};


class bsm_so_tutorial_tfar_or_0: Land_MapBoard_F
{
    scope=2;
    displayName="Whiteboard (Tutorial, TFAR Open Radio)";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = { "\bsm_so_content\content\map_board\texture\tfar_open_radio.paa" };
};

class bsm_so_tutorial_tfar_or_wall_0: Land_MapBoard_01_Wall_F
{
    scope=2;
    displayName="Whiteboard (Tutorial, TFAR Open Radio, Wall)";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = { "\bsm_so_content\content\map_board\texture\tfar_open_radio.paa" };
};

// a3\structures_f\civ\infoboards\data\mapboard_stratis_co.paa