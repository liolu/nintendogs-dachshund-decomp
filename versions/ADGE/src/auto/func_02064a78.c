/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0207d268 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/wm/wm_ap.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
extern void func_02080210(void *ptr, u32 size);
typedef void (*UnkWmCallbackFunc)(void *arg);
extern void func_02063f34(u32 id, UnkWmCallbackFunc callback);
extern u32 func_02063de0(u16 id, u16 paramNum, ...);
extern u32 func_02063cb0(s32 paramNum, ...);
extern BOOL func_02064a28(void *param);
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
u32 func_02064a78(UnkWmCallbackFunc callback, UnkWmParentParam *param) {
    u32 result = func_02063cb0(1, 2);

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

    func_02064a28(param);
    func_02063f34(7, callback);
    func_02080210(param, sizeof(UnkWmParentParam));
    if (param->userGameInfoLength != 0) {
        func_02080210(param->userGameInfo, param->userGameInfoLength);
    }
    result = func_02063de0(7, 1, param);
    if (result != 0) {
        return result;
    }
    return 2;
}
BOOL func_02064a28(void *param_);
