/* compiler: 1.2/sp2p3  */
/* func_02091ce4 from projets/nintendogs-dachshund/src/auto/func_02091ce4.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_01ffda04(M2C_UNK);
extern void func_02026f90(M2C_UNK);
void func_02097448(void) {
    s32 temp_r0;
    s32 var_r4;

    var_r4 = 0;
    do {
        temp_r0 = func_01ffda04(var_r4);
        if (temp_r0 != 0) {
            func_02026f90(temp_r0);
        }
        var_r4 = (s32) (s16) (var_r4 + 1);
    } while (var_r4 < 3);
}
