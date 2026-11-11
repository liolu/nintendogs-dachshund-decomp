/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02061a70 from projets/children-of-mana/src/auto/func_02061a70.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
extern void func_0208083c(void *ptr, u32 size);
typedef void (*UnkWmCallbackFunc)(void *arg);
extern void func_020654a0(u32 id, UnkWmCallbackFunc callback);
extern u32 func_0206534c(u16 id, u16 paramNum, ...);
extern u32 func_0206521c(s32 paramNum, ...);
extern BOOL func_02065ec4(void *param);
typedef struct UnkWmParentParam {
    u16 *userGameInfo;
    u16 userGameInfoLength;
    u8 unk_06[0xe];
    u16 KS_Flag;
    u8 unk_16[2];
    u16 beaconPeriod;
    u8 unk_1a[0x18];
    u16 channel;
    u16 parentMaxSize;
    u16 childMaxSize;
    u8 unk_38[8];
} UnkWmParentParam;
u32 func_02065f14(UnkWmCallbackFunc callback, UnkWmParentParam *param) {
    u32 result = func_0206521c(1, 2);

    if (result != 0) {
        return result;
    }
    if (param == 0) {
        return 6;
    }
    if (param->userGameInfoLength != 0 && param->userGameInfo == 0) {
        return 6;
    }
    if (param->parentMaxSize + (param->KS_Flag ? 42 : 0) > 512 || param->childMaxSize + (param->KS_Flag ? 6 : 0) > 512) {
        return 6;
    }

    func_02065ec4(param);
    func_020654a0(7, callback);
    func_0208083c(param, sizeof(UnkWmParentParam));
    if (param->userGameInfoLength != 0) {
        func_0208083c(param->userGameInfo, param->userGameInfoLength);
    }
    result = func_0206534c(7, 1, param);
    if (result != 0) {
        return result;
    }
    return 2;
}
extern BOOL func_02065ec4(void *param_);
