/* compiler: 1.2/sp2p3  */
/* func_02065a48 from projets/nintendogs-chihuahua-friends/src/auto/func_02065a48.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02065320();
extern void *func_0206533c();
extern M2C_UNK func_0206e080(s32, s32, s32);
extern M2C_UNK func_02080820(s32, s32);
s32 func_02065a48(s32 arg0) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = func_0206533c();
    temp_r0 = func_02065320();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if (arg0 == 0) {
        return 6;
    }
    func_02080820((*(s32 *) ((s8 *) (temp_r4) + (4))), 0x9B8);
    func_0206e080((*(s32 *) ((s8 *) (temp_r4) + (4))), arg0, 0x9B8);
    return 0;
}
