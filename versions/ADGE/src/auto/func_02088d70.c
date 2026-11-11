/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* FS_ClearOverlayImage from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/fs/overlay.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
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
extern void func_02080268(void *addr, u32 count);
extern void func_020801f4(void *addr, u32 count);
extern void func_0206cd2c(void *dest, u8 value, u32 count);
void func_02088d70(UnkOverlayInfo *info) {
    u8 *addr      = info->addr;
    u32 ramSize   = info->ramSize;
    u32 totalSize = ramSize + info->bssSize;

    func_02080268(addr, totalSize);
    func_020801f4(addr, totalSize);
    func_0206cd2c(addr + ramSize, 0, totalSize - ramSize);
}
