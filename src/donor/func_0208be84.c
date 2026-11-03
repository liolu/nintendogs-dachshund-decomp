/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0200f698 from projets/code-lyoko/src/donor/func_0200f698.c (same code in another game of this workspace), reused by
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
extern BOOL func_0208c2d4(UnkOverlayInfo *info, u32 target, u32 id);
extern BOOL func_0208bf34(UnkOverlayInfo *info);
BOOL func_0208be84(u32 target, u32 id) {
    UnkOverlayInfo info;

    if (!func_0208c2d4(&info, target, id) || !func_0208bf34(&info)) {
        return 0;
    }
    return 1;
}
