/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020068bc from projets/code-lyoko/src/auto/func_020068bc.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef volatile u32 vu32;
extern s32 func_0206b9c8(s32 *level);
s32 func_0206b9c8(s32 *level) {
    if ((*(vu32 *) 0x04000600) & 0x4000) {
        return -1;
    }
    *level = ((*(vu32 *) 0x04000600) & 0x1f00) >> 8;
    return 0;
}
