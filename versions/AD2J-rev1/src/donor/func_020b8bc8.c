/* compiler: 1.2/sp2p3  */
/* func_020b8bc8 from projets/nintendogs-shiba-friends/src/auto/func_020b8bc8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020894b4(M2C_UNK, M2C_UNK);
extern s32 data_02153740;
s32 func_020b8bc8(s32 arg0, s32 arg1) {
    s32 temp_r3;

    temp_r3 = (arg0 * 0x294) + (data_02153740 + 0xA5C);
    return (s32) ((u32) ((*(s32 *) ((s8 *) ((void *) func_020894b4(
                                        (*(s32 *) ((s8 *) (temp_r3) + (0xC))),
                                        (*(s32 *) ((s8 *) (((*(s32 *) ((s8 *) (temp_r3) + (8))) + (arg1 * 8))) + (0xC))))) +
                                    (4)))

                         << 0x10) >>
                  0x1C);
}
