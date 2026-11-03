/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020050a4 from projets/code-lyoko/src/auto/func_020050a4.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef int s32;
typedef volatile u16 vu16;
typedef s32 BOOL;
s32 func_02069c8c(BOOL enable) {
    s32 prev = (*(vu16 *) 0x04000004) & 8;
    if (enable) {
        (*(vu16 *) 0x04000004) |= 8;
    } else {
        (*(vu16 *) 0x04000004) &= ~8;
    }
    return prev;
}
