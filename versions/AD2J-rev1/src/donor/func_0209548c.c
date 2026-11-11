/* compiler: 1.2/sp2p3  */
/* func_02116c1c from projets/nintendogs-dachshund/src/auto/func_02116c1c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
extern void *data_02153720;
s32 func_0209548c(void) {
    s32 var_r0;

    var_r0 = -1;
    if (((s32) (*(u16 *) 0x04000304 & 0x8000) >> 0xF) == 1) {
        return -1;
    }
    if ((*(u16 *) ((s8 *) (data_02153720) + (0x84))) & 2) {
        var_r0 = 0;
    }
    return var_r0;
}
