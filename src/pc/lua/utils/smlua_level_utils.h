#ifndef SMLUA_LEVEL_UTILS_H
#define SMLUA_LEVEL_UTILS_H

struct CustomLevelInfo {
    LevelScript* script;
    char* scriptEntryName;
    s16 courseNum;
    s16 levelNum;
    char* fullName;
    char* shortName;
    u32 acousticReach;
    u32 echoLevel1;
    u32 echoLevel2;
    u32 echoLevel3;
    struct CustomLevelInfo* next;
};

#define CUSTOM_LEVEL_NUM_START 50

void smlua_level_util_reset(void);
struct CustomLevelInfo* smlua_level_util_get_info(s16 levelNum);
struct CustomLevelInfo* smlua_level_util_get_info_from_short_name(char* shortName);
s16 level_register(const char* scriptEntryName, s16 courseNum, const char* fullName, const char* shortName, u32 acousticReach, u32 echoLevel1, u32 echoLevel2, u32 echoLevel3);
bool warp_to_level(s32 aLevel, s32 aArea, s32 aAct);
bool warp_restart_level(void);
bool warp_exit_level(s32 aDelay);
bool warp_to_castle(s32 aLevel);

#endif
