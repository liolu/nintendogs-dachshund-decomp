/* compiler: 1.2/sp2p3  */
/* func_020d5c44 from projets/nintendogs-dachshund/src/auto/func_020d5c44.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK _s32_div_f(M2C_UNK, M2C_UNK);
extern void func_020b8dbc(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_020a3788(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r4;
    s32 temp_r6;
    s32 var_r8;
    u16 var_r5;

    var_r8 = arg1;
    var_r5 = (*(u16 *) ((s8 *) (var_r8) + (4)));
    if (var_r5 == 0xFFFF) {
        return;
    }
    temp_r6 = arg3 - arg2;
    do {
        temp_r4 = _s32_div_f((*(s32 *) ((s8 *) (var_r8) + (8))) * temp_r6, arg3);
        func_020b8dbc(arg0, (s32) var_r5, temp_r4, _s32_div_f((*(s32 *) ((s8 *) (var_r8) + (0xC))) * temp_r6, arg3));
        var_r8 += 0x10;
        var_r5 = (*(u16 *) ((s8 *) (var_r8) + (4)));
    } while (var_r5 != 0xFFFF);
}
