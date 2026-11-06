/* compiler: 1.2/sp2p3  */
/* func_0200af30 from projets/cooking-mama/src/auto/func_0200af30.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02001bc8();
extern s32 func_02001ee4(M2C_UNK *, M2C_UNK);
extern M2C_UNK data_0214a6e0;
extern M2C_UNK func_02001be0;
s32 func_02001ea0(void) {
    s32 temp_r0;

    temp_r0                                      = func_02001ee4(&func_02001be0, 0);
    (*(s32 *) ((s8 *) (&data_0214a6e0) + (0xC))) = temp_r0;
    if (temp_r0 == 0) {
        func_02001bc8();
    }
    return (*(s32 *) ((s8 *) (&data_0214a6e0) + (0xC)));
}
