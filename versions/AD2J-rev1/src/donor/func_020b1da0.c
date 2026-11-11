/* compiler: 1.2/sp2p3  */
/* func_020e4bc8 from projets/nintendogs-dachshund/src/auto/func_020e4bc8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
void func_020b1da0(void *arg0, s32 *arg1, s32 arg2) {
    s32 *var_r1;
    s32 var_r3;
    u16 temp_r0;

    var_r1  = arg1;
    temp_r0 = (*(u16 *) ((s8 *) (arg0) + (6)));
    var_r3  = 0;
    if ((s32) temp_r0 <= 0) {
        return;
    }
    do {
        var_r3 += 1;
        *var_r1 = arg2;
        var_r1  = (s32 *) ((s8 *) var_r1 + 0x10);
    } while (var_r3 < (s32) temp_r0);
}
