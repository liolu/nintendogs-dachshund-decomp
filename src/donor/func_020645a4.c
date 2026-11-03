/* compiler: 1.2/sp2p3  */
/* func_020645a4 from projets/nintendogs-chihuahua-friends/src/auto/func_020645a4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02080820(s32, M2C_UNK);
extern s32 data_0214d520;
s16 func_020645a4(s32 arg0, s32 arg1) {
    func_02080820(data_0214d520, 0x280);
    return (*(s16 *) ((s8 *) (((arg0 * 0x24) + data_0214d520 + (arg1 * 2))) + (0x20)));
}
