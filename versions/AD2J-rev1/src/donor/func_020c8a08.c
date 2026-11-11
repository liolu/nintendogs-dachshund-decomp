/* compiler: 2.0/sp1p5  */
/* func_020ce1a0 from projets/nintendogs-dachshund/src/auto/func_020ce1a0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef long s32;
void func_020c8a08(s32 arg0, s32 arg1, s32 arg2, u8 *arg3) {
    s16 var_ip;
    u8 *var_r3;

    var_r3 = arg3;
    var_ip = 0;
loop_1:
    if (*var_r3 != (*(u8 *) ((s8 *) ((arg0 + var_ip)) + (8)))) {
        return;
    }
    var_ip += 1;
    var_r3 += 1;
    if ((s32) var_ip >= 6) {
        return;
    }
    goto loop_1;
}
