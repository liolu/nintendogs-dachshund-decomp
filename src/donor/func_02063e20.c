/* compiler: 1.2/sp2p3  */
/* func_02063e20 from projets/nintendogs-chihuahua-friends/src/auto/func_02063e20.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02063c1c();
extern s32 func_02063cec();
extern s32 func_02063d4c();
extern M2C_UNK func_02063f40(M2C_UNK);
extern s32 func_020641c4(M2C_UNK);
void func_02063e20(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_02063d4c();
    if (temp_r0 >= arg0) {
        return;
    }
    if ((s32) (temp_r0 + func_02063cec()) >= arg0) {
        do {

        } while (func_020641c4(0) != 0);
        if (func_02063d4c() >= arg0) {
            return;
        }
        goto block_8;
    }
    func_02063f40(1);
block_8:
    func_02063c1c();
    do {
        func_020641c4(1);
    } while (func_02063d4c() < arg0);
}
