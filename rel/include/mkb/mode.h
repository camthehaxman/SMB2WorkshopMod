#pragma once

namespace mkb {

enum MainMode
{ /* I made MD_INVALID, it's `-1` -Crafted */
    MD_ADV = 0,
    MD_SEL = 1,
    MD_GAME = 2,
    MD_TEST = 3,
    MD_MINI = 4,
    MD_OPTION = 5,
    MD_AUTHOR = 6,
    MD_EXOPT = 7,
    MD_INVALID = 0xffffffff
};

// TODO sort?
enum SubMode
{
    SMD_ADV_TOP = 0,
    SMD_ADV_MOVIE_INIT = 1,
    SMD_ADV_MOVIE_RETURN = 2,
    SMD_ADV_LOGO_INIT = 3,
    SMD_ADV_LOGO_MAIN = 4,
    SMD_ADV_WARNING_INIT = 5,
    SMD_ADV_WARNING_MAIN = 6,
    SMD_ADV_DEMO_INIT = 7,
    SMD_ADV_DEMO_MAIN = 8,
    SMD_ADV_START_INIT = 9,
    SMD_ADV_START_MAIN = 10,
    SMD_ADV_RANKING_INIT = 11,
    SMD_ADV_RANKING_MAIN = 12,
    SMD_ADV_INFO_INIT = 13,
    SMD_ADV_INFO_MAIN = 14,
    SMD_ADV_GAME_READY_INIT = 15,
    SMD_ADV_GAME_READY_MAIN = 16,
    SMD_ADV_GAME_PLAY_INIT = 17,
    SMD_ADV_GAME_PLAY_MAIN = 18,
    SMD_ADV_TITLE_INIT = 19,
    SMD_ADV_TITLE_MAIN = 20,
    SMD_ADV_TITLE_REINIT = 21,
    SMD_ADV_PROG_INIT = 22,
    SMD_ADV_PROG_MAIN = 23,
    SMD_ADV_FIRST_LOGO_INIT = 24,
    SMD_ADV_FIRST_LOGO_MAIN = 25,
    SMD_ADV_DMY8 = 26,
    SMD_ADV_BOTTOM = 27,
    SMD_SEL_TOP = 28,
    SMD_SEL_STAGE_INIT = 29,
    SMD_SEL_STAGE_MAIN = 30,
    SMD_SEL_NGC_INIT = 31,
    SMD_SEL_NGC_MAIN = 32,
    SMD_SEL_NGC_REINIT = 33,
    SMD_SEL_NGC_DEST = 34,
    SMD_SEL_DMY1 = 35,
    SMD_SEL_DMY2 = 36,
    SMD_SEL_DMY3 = 37,
    SMD_SEL_DMY4 = 38,
    SMD_SEL_DMY5 = 39,
    SMD_SEL_DMY6 = 40,
    SMD_SEL_DMY7 = 41,
    SMD_SEL_DMY8 = 42,
    SMD_SEL_DMY9 = 43,
    SMD_SEL_DMYa = 44,
    SMD_SEL_DMYb = 45,
    SMD_SEL_BOTTOM = 46,
    SMD_GAME_TOP = 47,
    SMD_GAME_READY_INIT = 48,
    SMD_GAME_READY_MAIN = 49,
    SMD_GAME_PLAY_INIT = 50,
    SMD_GAME_PLAY_MAIN = 51,
    SMD_GAME_GOAL_INIT = 52,
    SMD_GAME_GOAL_MAIN = 53,
    SMD_GAME_GOAL_REPLAY_INIT = 54,
    SMD_GAME_GOAL_REPLAY_MAIN = 55,
    SMD_GAME_TIMEOVER_INIT = 56,
    SMD_GAME_TIMEOVER_MAIN = 57,
    SMD_GAME_RINGOUT_INIT = 58,
    SMD_GAME_RINGOUT_MAIN = 59,
    SMD_GAME_FIRST_INIT = 60,
    SMD_GAME_OVER_INIT = 61,
    SMD_GAME_OVER_MAIN = 62,
    SMD_GAME_NAMEENTRY_INIT = 63,
    SMD_GAME_NAMEENTRY_MAIN = 64,
    SMD_GAME_CONTINUE_INIT = 65,
    SMD_GAME_CONTINUE_MAIN = 66,
    SMD_GAME_RESTART_INIT = 67,
    SMD_GAME_NAMEENTRY_READY_INIT = 68,
    SMD_GAME_NAMEENTRY_READY_MAIN = 69,
    SMD_GAME_BONUS_CLEAR_INIT = 70,
    SMD_GAME_BONUS_CLEAR_MAIN = 71,
    SMD_GAME_ENDING_INIT = 72,
    SMD_GAME_ENDING_MAIN = 73,
    SMD_GAME_EXTRA_INIT = 74,
    SMD_GAME_EXTRA_WAIT = 75,
    SMD_GAME_RESULT_INIT = 76,
    SMD_GAME_RESULT_MAIN = 77,
    SMD_GAME_RESULT_MENU = 78,
    SMD_GAME_INTR_SEL_INIT = 79,
    SMD_GAME_INTR_SEL_MAIN = 80,
    SMD_GAME_OVER_SAVE = 81,
    SMD_GAME_OVER_DEST = 82,
    SMD_GAME_ROLL_INIT = 83,
    SMD_GAME_ROLL_MAIN = 84,
    SMD_GAME_OVER_POINT_INIT = 85,
    SMD_GAME_OVER_POINT_MAIN = 86,
    SMD_GAME_SCENARIO_INIT = 87,
    SMD_GAME_SCENARIO_MAIN = 88,
    SMD_GAME_SCENARIO_RETURN = 89,
    SMD_GAME_RETRY_INIT = 90,
    SMD_GAME_RETRY_MAIN = 91,
    SMD_GAME_FORCE_EXIT_INIT = 92,
    SMD_GAME_FORCE_EXIT_MAIN = 93,
    SMD_GAME_SCENSCNPLAY_RETURN = 94,
    SMD_GAME_FORCE_OVER_INIT = 95,
    SMD_GAME_FORCE_OVER_MAIN = 96,
    SMD_GAME_SUGG_SAVE_INIT = 97,
    SMD_GAME_SUGG_SAVE_MAIN = 98,
    SMD_GAME_DMY3 = 99,
    SMD_GAME_DMY4 = 100,
    SMD_GAME_DMY5 = 101,
    SMD_GAME_DMY6 = 102,
    SMD_GAME_DMY7 = 103,
    SMD_GAME_DMY8 = 104,
    SMD_GAME_DMY9 = 105,
    SMD_GAME_DMYA = 106,
    SMD_GAME_DMYB = 107,
    SMD_GAME_DMYC = 108,
    SMD_GAME_DMYD = 109,
    SMD_GAME_DMYE = 110,
    SMD_GAME_DMYF = 111,
    SMD_GAME_BOTTOM = 112,
    SMD_TEST_TOP = 113,
    SMD_TEST_SELECT_INIT = 114,
    SMD_TEST_SELECT_MAIN = 115,
    SMD_TEST_INPUT_INIT = 116,
    SMD_TEST_INPUT_MAIN = 117,
    SMD_TEST_DIP_INIT = 118,
    SMD_TEST_DIP_MAIN = 119,
    SMD_TEST_SOUND_INIT = 120,
    SMD_TEST_SOUND_MAIN = 121,
    SMD_TEST_BLUR_INIT = 122,
    SMD_TEST_BLUR_MAIN = 123,
    SMD_TEST_SHADOW_INIT = 124,
    SMD_TEST_SHADOW_MAIN = 125,
    SMD_TEST_FOCUS_INIT = 126,
    SMD_TEST_FOCUS_MAIN = 127,
    SMD_TEST_INDIRECT_INIT = 128,
    SMD_TEST_INDIRECT_MAIN = 129,
    SMD_TEST_NLOBJPUT_INIT = 130,
    SMD_TEST_NLOBJPUT_MAIN = 131,
    SMD_TEST_BITMAP_INIT = 132,
    SMD_TEST_BITMAP_MAIN = 133,
    SMD_TEST_FONT_INIT = 134,
    SMD_TEST_FONT_MAIN = 135,
    SMD_TEST_REPLAY_INIT = 136,
    SMD_TEST_REPLAY_MAIN = 137,
    SMD_TEST_MOTION_INIT = 138,
    SMD_TEST_MOTION_MAIN = 139,
    SMD_TEST_ADVREPLAY_INIT = 140,
    SMD_TEST_MODEL_INIT = 141,
    SMD_TEST_MODEL_MAIN = 142,
    SMD_TEST_NEWMODEL_INIT = 143,
    SMD_TEST_NEWMODEL_MAIN = 144,
    SMD_TEST_PATTERN_INIT = 145,
    SMD_TEST_PATTERN_MAIN = 146,
    SMD_TEST_ROMFONT_INIT = 147,
    SMD_TEST_ROMFONT_MAIN = 148,
    SMD_TEST_PREREND_INIT = 149,
    SMD_TEST_PREREND_MAIN = 150,
    SMD_TEST_PREVIEW_INIT = 151,
    SMD_TEST_PREVIEW_MAIN = 152,
    SMD_TEST_ADX_INIT = 153,
    SMD_TEST_ADX_MAIN = 154,
    SMD_TEST_NEWMOTION_INIT = 155,
    SMD_TEST_NEWMOTION_MAIN = 156,
    SMD_TEST_ARAM_FONT_INIT = 157,
    SMD_TEST_ARAM_FONT_MAIN = 158,
    SMD_TEST_SCENE_PLAY_INIT = 159,
    SMD_TEST_SCENE_PLAY_MAIN = 160,
    SMD_TEST_DIALOG_INIT = 161,
    SMD_TEST_DIALOG_MAIN = 162,
    SMD_TEST_DIFFICULTY_INIT = 163,
    SMD_TEST_DIFFICULTY_MAIN = 164,
    SMD_TEST_CHK_REPSIZE_INIT = 165,
    SMD_TEST_CHK_REPSIZE_MAIN = 166,
    SMD_TEST_BOTTOM = 167,
    SMD_MINI_TOP = 168,
    SMD_MINI_SELECT_INIT = 169,
    SMD_MINI_SELECT_MAIN = 170,
    SMD_MINI_BOWLING_INIT = 171,
    SMD_MINI_BOWLING_MAIN = 172,
    SMD_MINI_BILLIARDS_INIT = 173,
    SMD_MINI_BILLIARDS_MAIN = 174,
    SMD_MINI_SHOOTING_INIT = 175,
    SMD_MINI_SHOOTING_MAIN = 176,
    SMD_MINI_REL_SAMPLE_INIT = 177,
    SMD_MINI_REL_SAMPLE_MAIN = 178,
    SMD_MINI_COMMEND_INIT = 179,
    SMD_MINI_COMMEND_MAIN = 180,
    SMD_MINI_RANKING_INIT = 181,
    SMD_MINI_RANKING_MAIN = 182,
    SMD_MINI_ENDING_INIT = 183,
    SMD_MINI_ENDING_MAIN = 184,
    SMD_MINI_RACE2_INIT = 185,
    SMD_MINI_RACE2_MAIN = 186,
    SMD_MINI_GOLF2_INIT = 187,
    SMD_MINI_GOLF2_MAIN = 188,
    SMD_MINI_FIGHT2_INIT = 189,
    SMD_MINI_FIGHT2_MAIN = 190,
    SMD_MINI_PILOT2_INIT = 191,
    SMD_MINI_PILOT2_MAIN = 192,
    SMD_MINI_BOAT_INIT = 193,
    SMD_MINI_BOAT_MAIN = 194,
    SMD_MINI_S_ROLL_INIT = 195,
    SMD_MINI_S_ROLL_MAIN = 196,
    SMD_MINI_FUTSAL_INIT = 197,
    SMD_MINI_FUTSAL_MAIN = 198,
    SMD_MINI_DOGFIGHT_INIT = 199,
    SMD_MINI_DOGFIGHT_MAIN = 200,
    SMD_MINI_BASEBALL_INIT = 201,
    SMD_MINI_BASEBALL_MAIN = 202,
    SMD_MINI_TENNIS_INIT = 203,
    SMD_MINI_TENNIS_MAIN = 204,
    SMD_MINI_DMY9 = 205,
    SMD_MINI_DMY10 = 206,
    SMD_MINI_DMY11 = 207,
    SMD_MINI_DMY12 = 208,
    SMD_MINI_BOTTOM = 209,
    SMD_OPTION_TOP = 210,
    SMD_OPTION_SELECT_INIT = 211,
    SMD_OPTION_SELECT_MAIN = 212,
    SMD_OPTION_SOUND_INIT = 213,
    SMD_OPTION_SOUND_MAIN = 214,
    SMD_OPTION_PAD_INIT = 215,
    SMD_OPTION_PAD_MAIN = 216,
    SMD_OPTION_MEMCARD_INIT = 217,
    SMD_OPTION_MEMCARD_MAIN = 218,
    SMD_OPTION_POINT_INIT = 219,
    SMD_OPTION_POINT_MAIN = 220,
    SMD_OPTION_RANKING_INIT = 221,
    SMD_OPTION_RANKING_MAIN = 222,
    SMD_OPTION_AUTOSAVE_INIT = 223,
    SMD_OPTION_AUTOSAVE_MAIN = 224,
    SMD_OPTION_REPLAY_INIT = 225,
    SMD_OPTION_REPLAY_MAIN = 226,
    SMD_OPTION_SEPARATE_INIT = 227,
    SMD_OPTION_SEPARATE_MAIN = 228,
    SMD_OPTION_REPLAY_PLAY_INIT = 229,
    SMD_OPTION_REPLAY_PLAY_MAIN = 230,
    SMD_OPTION_PAD_MENU_INIT = 231,
    SMD_OPTION_PAD_MENU_MAIN = 232,
    SMD_OPTION_PAD_VIB_INIT = 233,
    SMD_OPTION_PAD_VIB_MAIN = 234,
    SMD_OPTION_DMY0 = 235,
    SMD_OPTION_DMY1 = 236,
    SMD_OPTION_DMY2 = 237,
    SMD_OPTION_DMY3 = 238,
    SMD_OPTION_DMY4 = 239,
    SMD_OPTION_DMY5 = 240,
    SMD_OPTION_DMY6 = 241,
    SMD_OPTION_DMY7 = 242,
    SMD_OPTION_BOTTOM = 243,
    SMD_AUTHOR_TOP = 244,
    SMD_AUTHOR_SELECT_INIT = 245,
    SMD_AUTHOR_SELECT_MAIN = 246,
    SMD_AUTHOR_PLAY_INIT = 247,
    SMD_AUTHOR_PLAY_MAIN = 248,
    SMD_AUTHOR_PLAY_STORY_INIT = 249,
    SMD_AUTHOR_PLAY_FROM_SEL = 250,
    SMD_AUTHOR_PLAY_RET_SEL = 251,
    SMD_AUTHOR_PLAY_ENDING_INIT = 252,
    SMD_AUTHOR_DMY6 = 253,
    SMD_AUTHOR_DMY7 = 254,
    SMD_AUTHOR_BOTTOM = 255,
    SMD_EXOPT_TOP = 256,
    SMD_EXOPT_REPLAY_LOAD_INIT = 257,
    SMD_EXOPT_REPLAY_LOAD_MAIN = 258,
    SMD_EXOPT_REPLAY_INIT = 259,
    SMD_EXOPT_REPLAY_MAIN = 260,
    SMD_EXOPT_DMY5 = 261,
    SMD_EXOPT_DMY6 = 262,
    SMD_EXOPT_DMY7 = 263,
    SMD_EXOPT_BOTTOM = 264,
    SMD_INVALID = 0xffffffff,
};

enum MainGameMode
{
    MGM_CHALLENGE = 0,
    MGM_COMPETITION = 1,
    MGM_PRACTICE = 2,
    MGM_G_RETRY_W_NO_SHADOW = 3,
    MGM_G_NO_RETRY_VIEWSTAGE_INFLIFE = 4,
    MGM_G_NO_RETRY_VIEWSTAGE_INFLIFE_NOCOUNTER = 5,
    MGM_G_NO_PAUSING_NOCOUNTER = 6,
    MGM_G_NO_FALLOUT_SCREAM = 7,
    MGM_G_NO_FALLOUT_SCREAM_CRYING = 8,
    MGM_G_NO_FALLOUT_SCREEN_CHEERING = 9,
    MGM_G_NO_SHADOWS_CRASH_ON_FALLOUT = 10,
    MGM_G_SPAWN_OPPOSITE_OF_STARTPOS = 11,
    MGM_G_SPAWN_ORIGIN = 12,
    MGM_G_DANCE_CONTINUE_SCREEN = 13,
    MGM_STORY = 14,
    MGM_G_H_POSE_CONTINUE_SCREEN = 15
};

extern "C"
{
extern int mainMode;
extern int subMode;
extern int mainModeRequest;
extern int subModeRequest;
extern int mainGameMode;
extern int subModeFrameCounter;
}

}
