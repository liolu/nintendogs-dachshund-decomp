/* compiler: 1.2/sp2p3  */
/* func_02052d48 from projets/nintendogs-chihuahua-friends/src/auto/func_02052d48.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_0202f960(M2C_UNK);
extern s32 func_020360a0();
extern M2C_UNK func_0203e2b8(M2C_UNK, s32);
extern s32 func_02044358();
s32 func_02052d48(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_020360a0();
    if (!(func_02044358() & 4)) {
        return func_0202f960(arg0);
    }
    if (temp_r4 == 0) {
        return 0;
    }
    func_0203e2b8(arg0, 0x289);
    return 1;
}
