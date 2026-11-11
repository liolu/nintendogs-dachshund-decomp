/* compiler: 1.2/sp2p3  */
/* func_0204f3d8 from projets/nintendogs-chihuahua-friends/src/auto/func_0204f3d8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_0202785c(M2C_UNK, s32);
extern s32 func_0202d9e0(M2C_UNK);
extern s32 func_0202ded8(M2C_UNK);
extern s32 func_020360a0();
extern M2C_UNK func_0203e2b8(M2C_UNK, s32);
s32 func_0204f3d8(M2C_UNK arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = func_020360a0();
    if (temp_r0 == 0) {
        return 0;
    }
    if (func_0202d9e0(arg0) >= 0xD) {
        return 0;
    }
    if (func_0202ded8(arg0) != 0) {
        if (func_0202d9e0(arg0) == 0) {
            func_0203e2b8(arg0, 0x2FE);
        }
        return 1;
    }
    temp_r0_2 = func_0202785c(arg0, temp_r0);
    switch (temp_r0_2) {
        case 2:
            if (func_0202d9e0(arg0) == 0) {
                func_0203e2b8(arg0, 0x2FF);
            }
            return 1;
        case 1:
            if (func_0202d9e0(arg0) == 0) {
                func_0203e2b8(arg0, 0x2FE);
            }
            return 1;
        case 0:
            func_0203e2b8(arg0, 0x300);
            return 1;
        default:
            return 0;
    }
}
