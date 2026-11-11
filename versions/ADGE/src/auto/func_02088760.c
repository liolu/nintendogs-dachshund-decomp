/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* FS_LoadOverlay from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/fs/overlay.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
typedef void (*UnkOverlayCtor)(void);
typedef struct UnkOverlayInfo {
    u32 id;
    u8 *addr;
    u32 ramSize;
    u32 bssSize;
    UnkOverlayCtor *ctorStart;
    UnkOverlayCtor *ctorEnd;
    u32 fileId;
    u32 compressedSize : 24;
    u32 flags : 8;
    u32 target;
    u32 filePos;
    u32 fileLen;
} UnkOverlayInfo;
BOOL func_02088b24(UnkOverlayInfo *info, u32 target, u32 id);
BOOL func_02088a84(UnkOverlayInfo *info);
void func_020888e0(UnkOverlayInfo *info);
BOOL func_02088760(u32 target, u32 id) {
    UnkOverlayInfo info;

    if (!func_02088b24(&info, target, id) || !func_02088a84(&info)) {
        return 0;
    }
    func_020888e0(&info);
    return 1;
}
