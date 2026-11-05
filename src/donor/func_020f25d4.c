/* compiler: 1.2/sp2p3  */
/* func_02091e0c from projets/nintendogs-dachshund/src/auto/func_02091e0c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_01ffda04(M2C_UNK);
extern void func_02027ea8(M2C_UNK, M2C_UNK, M2C_UNK);
extern void func_02027f08(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020f25d4(s32 arg0) {
    s32 temp_r0;
    s32 var_r6;

    var_r6 = 0;
    do {
        temp_r0 = func_01ffda04(var_r6);
        if (temp_r0 != 0) {
            if (arg0 == 2) {
                func_02027ea8(temp_r0, arg0, 0x12C);
            } else if (arg0 == 5) {
                func_02027f08(temp_r0, arg0, 0x2710);
            }
        }
        var_r6 = (s32) (s16) (var_r6 + 1);
    } while (var_r6 < 3);
}
