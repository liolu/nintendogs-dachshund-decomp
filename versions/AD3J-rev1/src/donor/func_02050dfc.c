/* compiler: 1.2/sp2p3  */
/* func_02050dfc from projets/nintendogs-chihuahua-friends/src/auto/func_02050dfc.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_0202785c(void *, s32);
extern s32 func_0202f960(void *);
extern s32 func_020360a0();
extern M2C_UNK func_0203e2b8(void *, s32);
extern s32 func_02044358();
s32 func_02050dfc(void *arg0) {
    s32 temp_r4;

    temp_r4 = func_020360a0();
    if (!(func_02044358() & 0x10)) {
        return func_0202f960(arg0);
    }
    if (temp_r4 == 0) {
        return 0;
    }
    (*(s32 *) ((s8 *) (arg0) + (0x4A8))) = func_0202785c(arg0, temp_r4);
    func_0203e2b8(arg0, 0x295);
    return 1;
}
