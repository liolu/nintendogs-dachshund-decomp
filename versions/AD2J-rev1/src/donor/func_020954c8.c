/* compiler: 1.2/sp2p3  */
/* func_020954c8 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020954c8.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
extern s32 func_020bb40c();
extern void *data_02153740;
s32 func_020954c8(void) {
    s32 var_r4;

    var_r4 = -1;
    if (((s32) (*(u16 *) 0x04000304 & 0x8000) >> 0xF) == 1) {
        if (func_020bb40c() == 1) {
            var_r4 = 1;
        }
    } else if ((*(s32 *) ((s8 *) (data_02153740) + (0x3528))) == 5) {
        var_r4 = 0;
    }
    return var_r4;
}
