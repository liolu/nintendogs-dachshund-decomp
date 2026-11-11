/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0200fcf8 from projets/code-lyoko/src/donor/func_0200fcf8.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
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
extern void func_02080880(void *addr, u32 count);
extern void func_02080820(void *addr, u32 count);
extern void func_0206e124(void *dest, u8 value, u32 count);
void func_0208c520(UnkOverlayInfo *info) {
    u8 *addr      = info->addr;
    u32 ramSize   = info->ramSize;
    u32 totalSize = ramSize + info->bssSize;

    func_02080880(addr, totalSize);
    func_02080820(addr, totalSize);
    func_0206e124(addr + ramSize, 0, totalSize - ramSize);
}
