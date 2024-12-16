class CfgPatches
{
    class bsm_so_audio_sounds_training
    {
        author = "Broken Skull Mods™";
        name = "Special Ops Framework - Training Audio";
        units[]={ };
        weapons[]= {};
        requiredVersion=0.1;
        requiredAddons[]= { };
    };
};

class SpecOpsAudio {
    class Training {
        WelcomeMessage[] = {
            bsm_a_s_c_training_welcome_0, 1, bsm_a_s_c_training_welcome_1, 1, bsm_a_s_c_training_welcome_2, 1,
            bsm_a_s_c_training_welcome_3, 1, bsm_a_s_c_training_welcome_4, 1, bsm_a_s_c_training_welcome_5, 1,
            bsm_a_s_c_training_welcome_6, 1, bsm_a_s_c_training_welcome_7, 1, bsm_a_s_c_training_welcome_8, 1, 
            bsm_a_s_c_training_welcome_9, 1, bsm_a_s_c_training_welcome_10, 1
        };
    };
};

class SpecOps_Module_System_Audio {
    class Training_WelcomeMessage { name = "Training: Welcome Message"; value = "Training:WelcomeMessage"; };
};

class CfgSounds {
    class bsm_a_s_c_training_welcome_0 {
        name = "bsm_a_s_c_training_welcome_0";
        sound[] = {"\bsm_so_audio\data\sounds\training\Training_Welcome_0.ogg", 3, 1, 10};
        titles[] = {};
    };

    class bsm_a_s_c_training_welcome_1 {
        name = "bsm_a_s_c_training_welcome_1";
        sound[] = {"\bsm_so_audio\data\sounds\training\Training_Welcome_1.ogg", 3, 1, 10};
        titles[] = {};
    };

    class bsm_a_s_c_training_welcome_2 {
        name = "bsm_a_s_c_training_welcome_2";
        sound[] = {"\bsm_so_audio\data\sounds\training\Training_Welcome_2.ogg", 3, 1, 10};
        titles[] = {};
    };
    
    class bsm_a_s_c_training_welcome_3
    {
        name = "bsm_a_s_c_training_welcome_3";
        sound[] = {"\bsm_so_audio\data\sounds\training\Training_Welcome_3.ogg", 3, 1, 10};
        titles[] = {};
    };
    
    class bsm_a_s_c_training_welcome_4
    {
        name = "bsm_a_s_c_training_welcome_4";
        sound[] = {"\bsm_so_audio\data\sounds\training\Training_Welcome_4.ogg", 3, 1, 10};
        titles[] = {};
    };
    
    class bsm_a_s_c_training_welcome_5
    {
        name = "bsm_a_s_c_training_welcome_5";
        sound[] = {"\bsm_so_audio\data\sounds\training\Training_Welcome_5.ogg", 3, 1, 10};
        titles[] = {};
    };
    
    class bsm_a_s_c_training_welcome_6
    {
        name = "bsm_a_s_c_training_welcome_6";
        sound[] = {"\bsm_so_audio\data\sounds\training\Training_Welcome_6.ogg", 3, 1, 10};
        titles[] = {};
    };
    
    class bsm_a_s_c_training_welcome_7
    {
        name = "bsm_a_s_c_training_welcome_7";
        sound[] = {"\bsm_so_audio\data\sounds\training\Training_Welcome_7.ogg", 3, 1, 10};
        titles[] = {};
    };

    class bsm_a_s_c_training_welcome_8
    {
        name = "bsm_a_s_c_training_welcome_8";
        sound[] = {"\bsm_so_audio\data\sounds\training\Training_Welcome_8.ogg", 3, 1, 10};
        titles[] = {};
    };

    class bsm_a_s_c_training_welcome_9
    {
        name = "bsm_a_s_c_training_welcome_9";
        sound[] = {"\bsm_so_audio\data\sounds\training\Training_Welcome_9.ogg", 3, 1, 10};
        titles[] = {};
    };

    class bsm_a_s_c_training_welcome_10
    {
        name = "bsm_a_s_c_training_welcome_10";
        sound[] = {"\bsm_so_audio\data\sounds\training\Training_Welcome_10.ogg", 3, 1, 10};
        titles[] = {};
    };
};



