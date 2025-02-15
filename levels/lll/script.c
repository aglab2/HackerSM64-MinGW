#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/lll/header.h"


static const LevelScript script_lll_area_1_macro_objects[] = {
    // Macro objects
    OBJECT(/*model*/ MODEL_RED_COIN,        /*pos*/ -5800,   220,   250, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRedCoin),
    OBJECT(/*model*/ MODEL_RED_COIN,        /*pos*/ -5100,   220,   250, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRedCoin),
    OBJECT(/*model*/ MODEL_RED_COIN,        /*pos*/ -5100,   220,  1000, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRedCoin),
    OBJECT(/*model*/ MODEL_RED_COIN,        /*pos*/ -4400,   220,  1000, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRedCoin),
    OBJECT(/*model*/ MODEL_RED_COIN,        /*pos*/ -4400,   220,  1750, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRedCoin),
    OBJECT(/*model*/ MODEL_RED_COIN,        /*pos*/ -5100,   220,  1750, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRedCoin),
    OBJECT(/*model*/ MODEL_RED_COIN,        /*pos*/ -5800,   220,  1750, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRedCoin),
    OBJECT(/*model*/ MODEL_RED_COIN,        /*pos*/ -5800,   220,  1000, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRedCoin),
    OBJECT(/*model*/ MODEL_WOODEN_SIGNPOST, /*pos*/ -3728,   154,  6057, /*angle*/ 0,   0, 0, /*behParam*/ (DIALOG_068 << 16), /*beh*/ bhvMessagePanel),
    OBJECT(/*model*/ MODEL_WOODEN_SIGNPOST, /*pos*/  1350,   154,  5942, /*angle*/ 0, 315, 0, /*behParam*/ (DIALOG_016 << 16), /*beh*/ bhvMessagePanel),
    OBJECT(/*model*/ MODEL_NONE,            /*pos*/ -5760,   100,  3040, /*angle*/ 0,   0, 0, /*behParam*/ ((COIN_FORMATION_FLAG_FLYING) << 16), /*beh*/ bhvCoinFormation),
    OBJECT(/*model*/ MODEL_1UP,             /*pos*/ -5100,   540, -4070, /*angle*/ 0,   0, 0, /*behParam*/  (4 << 16), /*beh*/ bhvHidden1up),
    OBJECT(/*model*/ MODEL_NONE,            /*pos*/ -5400,   320, -4070, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvHidden1upTrigger),
    OBJECT(/*model*/ MODEL_NONE,            /*pos*/ -4800,   320, -4070, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvHidden1upTrigger),
    OBJECT(/*model*/ MODEL_NONE,            /*pos*/ -5100,   320, -3770, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvHidden1upTrigger),
    OBJECT(/*model*/ MODEL_NONE,            /*pos*/ -5100,   320, -4370, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvHidden1upTrigger),
    OBJECT(/*model*/ MODEL_NONE,            /*pos*/ -1920,    50, -4120, /*angle*/ 0,  90, 0, /*behParam*/ ((COIN_FORMATION_FLAG_FLYING) << 16), /*beh*/ bhvCoinFormation),
    OBJECT(/*model*/ MODEL_YELLOW_COIN,     /*pos*/  3300,    50, -2692, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvYellowCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN,     /*pos*/  3330,    50, -3700, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvYellowCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN,     /*pos*/  4340,    50, -3700, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvYellowCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN,     /*pos*/  4340,    50, -2692, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvYellowCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN,     /*pos*/     0,   200,  1200, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvYellowCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN,     /*pos*/  1200,   200,     0, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvYellowCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN,     /*pos*/ -1200,   200,     0, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvYellowCoin),
    OBJECT(/*model*/ MODEL_1UP,             /*pos*/     0,   307, -2085, /*angle*/ 0,   0, 0, /*behParam*/ (MUSHROOM_BP_REQUIRES_NONE << 16), /*beh*/ bhv1Up),
    OBJECT(/*model*/ MODEL_NONE,            /*pos*/  3000,    50,   520, /*angle*/ 0,  90, 0, /*behParam*/ ((COIN_FORMATION_FLAG_FLYING) << 16), /*beh*/ bhvCoinFormation),
    OBJECT(/*model*/ MODEL_NONE,            /*pos*/  7160,   320,  1400, /*angle*/ 0,   0, 0, /*behParam*/ ((COIN_FORMATION_FLAG_RING  ) << 16), /*beh*/ bhvCoinFormation),
    OBJECT(/*model*/ MODEL_NONE,            /*pos*/  3800,   320, -5600, /*angle*/ 0,   0, 0, /*behParam*/ ((COIN_FORMATION_FLAG_RING  ) << 16), /*beh*/ bhvCoinFormation),
    OBJECT(/*model*/ MODEL_NONE,            /*pos*/  6673,   154, -3060, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMrI),
    OBJECT(/*model*/ MODEL_NONE,            /*pos*/  6673,   154, -3060, /*angle*/ 0,   0, 0, /*behParam*/ ((COIN_FORMATION_FLAG_RING  ) << 16), /*beh*/ bhvCoinFormation),
    OBJECT(/*model*/ MODEL_NONE,            /*pos*/  6300,   755, -6580, /*angle*/ 0,  45, 0, /*behParam*/ ((COIN_FORMATION_FLAG_NONE  ) << 16), /*beh*/ bhvCoinFormation),
    OBJECT(/*model*/ MODEL_1UP,             /*pos*/  6326,   686, -6580, /*angle*/ 0,   0, 0, /*behParam*/ (MUSHROOM_BP_REQUIRES_NONE << 16), /*beh*/ bhv1Up),
    OBJECT(/*model*/ MODEL_1UP,             /*pos*/     0,    46, -7400, /*angle*/ 0,   0, 0, /*behParam*/ (MUSHROOM_BP_REQUIRES_NONE << 16), /*beh*/ bhv1Up),
    OBJECT(/*model*/ MODEL_1UP,             /*pos*/ -3133,   230, -2126, /*angle*/ 0,   0, 0, /*behParam*/ (MUSHROOM_BP_REQUIRES_NONE << 16), /*beh*/ bhv1Up),
    OBJECT(/*model*/ MODEL_YELLOW_COIN,     /*pos*/ -3320,   161, -1860, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN,     /*pos*/ -3346,    70, -1486, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN,     /*pos*/ -2760,   113, -2260, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN,     /*pos*/ -2440,    67, -2286, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_1UP,             /*pos*/ -2333,   653,   886, /*angle*/ 0,   0, 0, /*behParam*/ (MUSHROOM_BP_REQUIRES_NONE << 16), /*beh*/ bhv1Up),
    OBJECT(/*model*/ MODEL_NONE,            /*pos*/ -1960,    38,  3693, /*angle*/ 0,   0, 0, /*behParam*/ ((COIN_FORMATION_FLAG_FLYING) << 16), /*beh*/ bhvCoinFormation),
    OBJECT(/*model*/ MODEL_YELLOW_COIN,     /*pos*/ -6966,    41,  3906, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN,     /*pos*/ -6806,   188,  4653, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN,     /*pos*/ -6033,    70,  4973, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_1UP,             /*pos*/ -6780,   275, -6766, /*angle*/ 0,   0, 0, /*behParam*/ (MUSHROOM_BP_REQUIRES_NONE << 16), /*beh*/ bhv1Up),
    OBJECT(/*model*/ MODEL_WOODEN_SIGNPOST, /*pos*/ -3980,   154,  6057, /*angle*/ 0,   0, 0, /*behParam*/ (DIALOG_086 << 16), /*beh*/ bhvMessagePanel),
    OBJECT(/*model*/ MODEL_BREAKABLE_BOX,   /*pos*/  4170,   154, -1940, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvJumpingBox),
    OBJECT(/*model*/ MODEL_NONE,            /*pos*/  1400,   -20,  3720, /*angle*/ 0,   0, 0, /*behParam*/ (FLAMETHROWER_BP_UPWARDS << 16), /*beh*/ bhvFlamethrower),
    OBJECT(/*model*/ MODEL_NONE,            /*pos*/  7100,   -20,  3420, /*angle*/ 0,   0, 0, /*behParam*/ (FLAMETHROWER_BP_UPWARDS << 16), /*beh*/ bhvFlamethrower),
    OBJECT(/*model*/ MODEL_NONE,            /*pos*/  7300,   -20,  5160, /*angle*/ 0,   0, 0, /*behParam*/ (FLAMETHROWER_BP_UPWARDS << 16), /*beh*/ bhvFlamethrower),
    OBJECT(/*model*/ MODEL_NONE,            /*pos*/  7100,   -20,  5700, /*angle*/ 0,   0, 0, /*behParam*/ (FLAMETHROWER_BP_UPWARDS << 16), /*beh*/ bhvFlamethrower),
    OBJECT(/*model*/ MODEL_EXCLAMATION_BOX, /*pos*/ -5900,   460,  6400, /*angle*/ 0,   0, 0, /*behParam*/ (EXCLAMATION_BOX_BP_WING_CAP << 16), /*beh*/ bhvExclamationBox),
    RETURN(),
};

static const LevelScript script_lll_area_2_macro_objects[] = {
    // Macro objects
    OBJECT(/*model*/ MODEL_YELLOW_COIN, /*pos*/   -20,    82, -1400, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000,  /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN, /*pos*/   600,    82, -1480, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000,  /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN, /*pos*/  1080,    82, -1680, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000,  /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN, /*pos*/  2180,   173, -1860, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000,  /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN, /*pos*/  2520,   174, -1220, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000,  /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN, /*pos*/  2840,   249,  -460, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000,  /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN, /*pos*/  2800,   449,   460, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000,  /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_BULLY,       /*pos*/  1300,  1029,  2300, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000,  /*beh*/ bhvSmallBully),
    OBJECT(/*model*/ MODEL_BULLY,       /*pos*/  -960,  2442, -2610, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000,  /*beh*/ bhvSmallBully),
    OBJECT(/*model*/ MODEL_YELLOW_COIN, /*pos*/  2180,   775,  1720, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000,  /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN, /*pos*/  1700,  1029,  2100, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000,  /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN, /*pos*/   940,  1029,  2540, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000,  /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN, /*pos*/ -1380,   102,  1640, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000,  /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN, /*pos*/ -2043,  1678,  1500, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000,  /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN, /*pos*/ -2283,  1863,   800, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000,  /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN, /*pos*/ -2420,  1981,   280, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000,  /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN, /*pos*/ -2620,  2089,  -280, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000,  /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN, /*pos*/ -2540,  2268,  -940, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000,  /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN, /*pos*/  1330,  3201,  1313, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000,  /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN, /*pos*/  1069,  3130,  1243, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000,  /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN, /*pos*/   704,  3028,  1156, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000,  /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_NONE,        /*pos*/  1078,  4170, -2270, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000,  /*beh*/ bhvHidden1upInPoleSpawner),
    OBJECT(/*model*/ MODEL_HEART,       /*pos*/ -1627,  1750,   750, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000,  /*beh*/ bhvRecoveryHeart),
    OBJECT(/*model*/ MODEL_NONE,        /*pos*/   182,  2623, -2529, /*angle*/ 0,  90, 0, /*behParam*/ ((COIN_FORMATION_FLAG_NONE) << 16), /*beh*/ bhvCoinFormation),
    OBJECT(/*model*/ MODEL_NONE,        /*pos*/   740,     0, -1840, /*angle*/ 0,  25, 0, /*behParam*/ 0x00000000,  /*beh*/ bhvBouncingFireball),
    OBJECT(/*model*/ MODEL_NONE,        /*pos*/  1420,     0, -1720, /*angle*/ 0, 225, 0, /*behParam*/ 0x00000000,  /*beh*/ bhvBouncingFireball),
    RETURN(),
};

static const LevelScript script_lll_area_1_objects_1[] = {
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_03, /*pos*/  3840,   0, -5631, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_04, /*pos*/  4992,   0,  -639, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_05, /*pos*/  7168,   0,  1408, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_06, /*pos*/     0,   0,  3712, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_07, /*pos*/ -3199,   0,  3456, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_08, /*pos*/ -5119,   0, -2047, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_0A, /*pos*/     0,   0,     0, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_0B, /*pos*/     0,   0,  6272, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_0C, /*pos*/  5632,   0,  1408, /*angle*/ 0, 270, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_0C, /*pos*/  2048,   0,  3456, /*angle*/ 0, 180, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_0C, /*pos*/ -4607,   0,  3456, /*angle*/ 0, 270, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_0C, /*pos*/ -5119,   0,  -511, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_0D, /*pos*/     0,   0, -2047, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_0E, /*pos*/ -5115, 300, -3200, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    RETURN(),
};

static const LevelScript script_lll_area_1_objects_2[] = {
    OBJECT(/*model*/ MODEL_LLL_DRAWBRIDGE_PART,                /*pos*/ -1919,  307,  3648, /*angle*/ 0,  0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvLllDrawbridgeSpawner),
    OBJECT(/*model*/ MODEL_LLL_ROTATING_BLOCK_FIRE_BARS,       /*pos*/ -5119,  307, -4095, /*angle*/ 0,  0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvLllRotatingBlockWithFireBars),
    OBJECT(/*model*/ MODEL_LLL_ROTATING_HEXAGONAL_RING,        /*pos*/     0,    0,     0, /*angle*/ 0,  0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvLllRotatingHexagonalRing),
    OBJECT(/*model*/ MODEL_LLL_SINKING_RECTANGULAR_PLATFORM,   /*pos*/  3968,    0,  1408, /*angle*/ 0, 90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvLllSinkingRectangularPlatform),
    OBJECT(/*model*/ MODEL_LLL_SINKING_RECTANGULAR_PLATFORM,   /*pos*/ -5759,    0,  3072, /*angle*/ 0,  0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvLllSinkingRectangularPlatform),
    OBJECT(/*model*/ MODEL_LLL_SINKING_RECTANGULAR_PLATFORM,   /*pos*/  2816,    0,   512, /*angle*/ 0, 90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvLllSinkingRectangularPlatform),
    OBJECT(/*model*/ MODEL_LLL_SINKING_RECTANGULAR_PLATFORM,   /*pos*/ -1791,    0, -4095, /*angle*/ 0, 90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvLllSinkingRectangularPlatform),
    OBJECT(/*model*/ MODEL_LLL_SINKING_SQUARE_PLATFORMS,       /*pos*/  3840,    0, -3199, /*angle*/ 0,  0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvLllSinkingSquarePlatforms),
    OBJECT(/*model*/ MODEL_LLL_TILTING_SQUARE_PLATFORM,        /*pos*/   922, -153,  2150, /*angle*/ 0,  0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvLllTiltingInvertedPyramid),
    OBJECT(/*model*/ MODEL_LLL_TILTING_SQUARE_PLATFORM,        /*pos*/  1741, -153,  1741, /*angle*/ 0,  0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvLllTiltingInvertedPyramid),
    OBJECT(/*model*/ MODEL_LLL_TILTING_SQUARE_PLATFORM,        /*pos*/  1741, -153,  2560, /*angle*/ 0,  0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvLllTiltingInvertedPyramid),
    OBJECT(/*model*/ MODEL_LLL_TILTING_SQUARE_PLATFORM,        /*pos*/  2099, -153,  -306, /*angle*/ 0,  0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvLllTiltingInvertedPyramid),
    OBJECT(/*model*/ MODEL_NONE,                               /*pos*/ -5119,  102,  1024, /*angle*/ 0,  0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvLllBowserPuzzle),
    RETURN(),
};

static const LevelScript script_lll_area_1_objects_3[] = {
    OBJECT(/*model*/ MODEL_LLL_MOVING_OCTAGONAL_MESH_PLATFORM, /*pos*/  1124,    0, -4607, /*angle*/ 0,  0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvLllMovingOctagonalMeshPlatform),
    OBJECT(/*model*/ MODEL_LLL_MOVING_OCTAGONAL_MESH_PLATFORM, /*pos*/  7168,    0,  2432, /*angle*/ 0,  0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvLllMovingOctagonalMeshPlatform),
    OBJECT(/*model*/ MODEL_LLL_SINKING_ROCK_BLOCK,             /*pos*/  7168,    0,  7296, /*angle*/ 0,  0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvLllSinkingRockBlock),
    OBJECT(/*model*/ MODEL_LLL_ROLLING_LOG,                    /*pos*/  6144,  307,  6016, /*angle*/ 0, 90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvLllRollingLog),
    OBJECT(/*model*/ MODEL_LLL_ROTATING_HEXAGONAL_PLATFORM,    /*pos*/ -5119,    0, -4095, /*angle*/ 0,  0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvLllRotatingHexagonalPlatform),
    OBJECT(/*model*/ MODEL_NONE,                               /*pos*/ -3583,    0, -4095, /*angle*/ 0,  0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvLllFloatingWoodBridge),
    RETURN(),
};

static const LevelScript script_lll_area_1_objects_4[] = {
    OBJECT(/*model*/ MODEL_NONE,            /*pos*/ -3199,  307,  3456, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMrI),
    OBJECT(/*model*/ MODEL_BULLY_BOSS,      /*pos*/     0,  307, -4385, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBigBully),
    OBJECT(/*model*/ MODEL_BULLY_BOSS,      /*pos*/  4046, 2234, -5521, /*angle*/ 0,   0, 0, /*behParam*/ 0x01000000, /*beh*/ bhvBigBullyWithMinions),
    OBJECT(/*model*/ MODEL_BULLY,           /*pos*/ -5119,  307, -2482, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSmallBully),
    OBJECT(/*model*/ MODEL_BULLY,           /*pos*/     0,  307,  3712, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSmallBully),
    OBJECT(/*model*/ MODEL_BULLY,           /*pos*/  6813,  307,  1613, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSmallBully),
    OBJECT(/*model*/ MODEL_BULLY,           /*pos*/  7168,  307,   998, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSmallBully),
    OBJECT(/*model*/ MODEL_BULLY,           /*pos*/ -5130,  285, -1663, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSmallBully),
    OBJECT(/*model*/ MODEL_NONE,            /*pos*/     0,  200, -2048, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlamethrower),
    OBJECT(/*model*/ MODEL_NONE,            /*pos*/   500,    2,  5000, /*angle*/ 0, 270, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBouncingFireball),
    OBJECT(/*model*/ MODEL_NONE,            /*pos*/  -700,    2,  4500, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBouncingFireball),
    OBJECT(/*model*/ MODEL_NONE,            /*pos*/ -6300,    2,  2625, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBouncingFireball),
    OBJECT(/*model*/ MODEL_NONE,            /*pos*/ -3280,    2, -4854, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBouncingFireball),
    OBJECT(/*model*/ MODEL_NONE,            /*pos*/  5996,    2,  -390, /*angle*/ 0, 315, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBouncingFireball),
    OBJECT(/*model*/ MODEL_NONE,            /*pos*/  5423,    2, -1991, /*angle*/ 0, 315, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBouncingFireball),
    OBJECT(/*model*/ MODEL_NONE,            /*pos*/  4921,    2, -1504, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBouncingFireball),
    OBJECT_WITH_ACTS(/*model*/ MODEL_EXCLAMATION_BOX, /*pos*/  1050,  550,  6200, /*angle*/ 0,   0, 0, /*behParam*/ 0x00030000, /*beh*/ bhvExclamationBox, /*acts*/ ACT_5 | ACT_6),
    RETURN(),
};

static const LevelScript script_lll_area_1_objects_5[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE, /*pos*/ -4400, 350,  250, /*angle*/ 0, 0, 0, /*behParam*/ 0x02000000, /*beh*/ bhvHiddenRedCoinStar, /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/  3100, 400, 7900, /*angle*/ 0, 0, 0, /*behParam*/ 0x03000000, /*beh*/ bhvStar,                 /*acts*/ ALL_ACTS),
    RETURN(),
};

static const LevelScript script_lll_area_2_objects_1[] = {
    OBJECT(/*model*/ MODEL_NONE,                         /*pos*/   728, 2606, -2754, /*angle*/ 0,   0, 0, /*behParam*/ 0x00380000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE,                         /*pos*/  1043, 2972, -2679, /*angle*/ 0,   0, 0, /*behParam*/ 0x004E0000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE,                         /*pos*/  1078, 3078, -2269, /*angle*/ 0,   0, 0, /*behParam*/ 0x00660000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE,                         /*pos*/  1413, 3222, -2190, /*angle*/ 0,   0, 0, /*behParam*/ 0x00520000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE,                         /*pos*/   783, 1126,   -47, /*angle*/ 0,   0, 0, /*behParam*/ 0x00660000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE,                         /*pos*/   662, 2150,   708, /*angle*/ 0,   0, 0, /*behParam*/ 0x00660000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE,                         /*pos*/  2943,  476,    10, /*angle*/ 0, 270, 0, /*behParam*/ 0x00020000, /*beh*/ bhvFlamethrower),
    OBJECT(/*model*/ MODEL_NONE,                         /*pos*/ -2759, 2350, -1108, /*angle*/ 0,  60, 0, /*behParam*/ 0x00020000, /*beh*/ bhvFlamethrower),
    OBJECT(/*model*/ MODEL_NONE,                         /*pos*/ -2472, 2350, -1605, /*angle*/ 0,  60, 0, /*behParam*/ 0x00020000, /*beh*/ bhvFlamethrower),
    OBJECT(/*model*/ MODEL_LLL_VOLCANO_FALLING_TRAP,     /*pos*/  -485, 1203,  2933, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvLllVolcanoFallingTrap),
    OBJECT(/*model*/ MODEL_LLL_ROTATING_BLOCK_FIRE_BARS, /*pos*/   417, 2150,   583, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvLllRotatingBlockWithFireBars),
    OBJECT(/*model*/ MODEL_CHECKERBOARD_PLATFORM,        /*pos*/  -764,    0,  1664, /*angle*/ 0, 180, 0, /*behParam*/ 0x08A50000, /*beh*/ bhvPlatformOnTrack),
    OBJECT(/*model*/ MODEL_CHECKERBOARD_PLATFORM,        /*pos*/   184,  980, -1366, /*angle*/ 0, 180, 0, /*behParam*/ 0x08A60000, /*beh*/ bhvPlatformOnTrack),
    OBJECT(/*model*/ MODEL_NONE,                         /*pos*/   -26,  103, -2649, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvVolcanoSoundLoop),
    RETURN(),
};

static const LevelScript script_lll_area_2_objects_2[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/ 2523, 3850, -901, /*angle*/ 0, 0, 0, /*behParam*/ 0x04000000, /*beh*/ bhvStar, /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/ 1800, 3400, 1450, /*angle*/ 0, 0, 0, /*behParam*/ 0x05000000, /*beh*/ bhvStar, /*acts*/ ALL_ACTS),
    RETURN(),
};

const LevelScript level_lll_entry[] = {
    INIT_LEVEL(),
#include "levels/lll/areas/script_vanilla_load.inc.c"
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
#include "levels/lll/areas/script_vanilla.inc.c"

    AREA(/*index*/ 1, lll_geo_000E00),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/ -3839, 1154, 6272, /*angle*/ 0,   90, 0, /*behParam*/ 0x000A0000, /*beh*/ bhvSpinAirborneWarp),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/     0,  105,    0, /*angle*/ 0,    0, 0, /*behParam*/ 0x190B0000, /*beh*/ bhvWarp),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/ -3200,   11, 3456, /*angle*/ 0, -100, 0, /*behParam*/ 0x000C0000, /*beh*/ bhvFadingWarp),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/ -5888,  154, 6656, /*angle*/ 0,  100, 0, /*behParam*/ 0x000D0000, /*beh*/ bhvFadingWarp),
        WARP_NODE(/*id*/ 0x0A, /*destLevel*/ LEVEL_LLL, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0x0B, /*destLevel*/ LEVEL_LLL, /*destArea*/ 0x02, /*destNode*/ 0x0A, /*flags*/ WARP_CHECKPOINT),
        WARP_NODE(/*id*/ 0x0C, /*destLevel*/ LEVEL_LLL, /*destArea*/ 0x01, /*destNode*/ 0x0D, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0x0D, /*destLevel*/ LEVEL_LLL, /*destArea*/ 0x01, /*destNode*/ 0x0C, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF0, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x03, /*destNode*/ 0x32, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF1, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x03, /*destNode*/ 0x64, /*flags*/ WARP_NO_CHECKPOINT),
        JUMP_LINK(script_lll_area_1_objects_1),
        JUMP_LINK(script_lll_area_1_objects_2),
        JUMP_LINK(script_lll_area_1_objects_3),
        JUMP_LINK(script_lll_area_1_objects_4),
        JUMP_LINK(script_lll_area_1_objects_5),
        TERRAIN(/*terrainData*/ lll_seg7_area_1_collision),
        JUMP_LINK(script_lll_area_1_macro_objects),
        SHOW_DIALOG(/*index*/ 0x00, DIALOG_097),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ SEQ_LEVEL_HOT),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    AREA(/*index*/ 2, lll_geo_000EC0),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/ -955, 1103, -1029, /*angle*/ 0, 118, 0, /*behParam*/ 0x000A0000, /*beh*/ bhvAirborneWarp),
        WARP_NODE(/*id*/ 0x0A, /*destLevel*/ LEVEL_LLL, /*destArea*/ 0x02, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF0, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x03, /*destNode*/ 0x32, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF1, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x03, /*destNode*/ 0x64, /*flags*/ WARP_NO_CHECKPOINT),
        JUMP_LINK(script_lll_area_2_objects_1),
        JUMP_LINK(script_lll_area_2_objects_2),
        TERRAIN(/*terrainData*/ lll_seg7_area_2_collision),
        JUMP_LINK(script_lll_area_2_macro_objects),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0004, /*seq*/ SEQ_LEVEL_HOT),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 90, /*pos*/ -3839, 154, 6272),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
