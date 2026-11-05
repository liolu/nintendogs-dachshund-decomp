/* compiler: 2.0/sp1p5  */
/* func_020ced04 from projets/nintendogs-dachshund/src/auto/func_020ced04.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
extern void *data_02154c48;
s32 func_020c9554(void) {
    s32 var_r0;

    var_r0 = 0;
    if ((*(u16 *) ((s8 *) ((*(void **) ((s8 *) (data_02154c48) + (0x141C)))) + (0x80))) != 0xFFFF) {
        var_r0 = 1;
    }
    return var_r0;
}
