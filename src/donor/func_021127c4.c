/* compiler: 1.2/sp2p3  */
/* func_020b2874 from projets/nintendogs-dachshund/src/auto/func_020b2874.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_01ffda04(M2C_UNK);
extern s32 data_02153708;
s32 func_021127c4(void) {
    s32 var_r4;
    s32 var_r6;

    var_r6 = 0;
    var_r4 = 0;
loop_1:
    if ((func_01ffda04(var_r6) != 0) && ((*(u16 *) ((s8 *) ((data_02153708 + var_r4)) + (0x20))) & 4)) {
        return 1;
    }
    var_r6 = (s32) (s16) (var_r6 + 1);
    var_r4 += 0x14;
    if (var_r6 >= 3) {
        return 0;
    }
    goto loop_1;
}
