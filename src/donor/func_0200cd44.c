/* compiler: 1.2/sp2p3  */
/* func_0200cd44 from projets/nintendogs-chihuahua-friends/src/auto/func_0200cd44.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_01ffda04(s16);
extern M2C_UNK func_02027044(s32, M2C_UNK);
extern M2C_UNK func_0202745c(s32, s32);
extern s32 func_02032690(s32, s16);
void func_0200cd44(s32 arg0) {
    s16 var_r7;
    s32 temp_r0;

    var_r7 = 0;
    do {
        if (func_02032690(arg0, var_r7) != 0) {
            temp_r0 = func_01ffda04(var_r7);
            if (temp_r0 != 0) {
                func_02027044(temp_r0, 5);
                func_0202745c(temp_r0, arg0 + 0x2A0);
            }
        }
        var_r7 += 1;
    } while ((s32) var_r7 < 3);
}
