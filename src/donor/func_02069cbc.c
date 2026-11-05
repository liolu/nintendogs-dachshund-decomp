/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020b8730 from projets/eyeshield-21/src/auto/func_020b8730.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef int s32;
typedef volatile u16 vu16;
typedef s32 BOOL;
s32 func_02069cbc(BOOL enable) {
    s32 prev = (*(vu16 *) 0x04000004) & 16;
    if (enable) {
        (*(vu16 *) 0x04000004) |= 16;
    } else {
        (*(vu16 *) 0x04000004) &= ~16;
    }
    return prev;
}
