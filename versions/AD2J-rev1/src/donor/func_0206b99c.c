/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02057d28 from projets/children-of-mana/src/auto/func_02057d28.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef volatile u32 vu32;
extern s32 func_0206b99c(s32 *level);
s32 func_0206b99c(s32 *level) {
    if ((*(vu32 *) 0x04000600) & 0x4000) {
        return -1;
    }
    *level = ((*(vu32 *) 0x04000600) & 0x2000) >> 13;
    return 0;
}
