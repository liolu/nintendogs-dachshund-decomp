/* compiler: 1.2/sp2p3  */
/* func_020abb18 from projets/eyeshield-21/src/auto/func_020abb18.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK data_021503b0;
void func_02075c8c(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    *((M2C_UNK *) ((s8 *) &data_021503b0 + (arg0 * 4))) =
        (0x3FF & (arg1 >> 3)) | ((0x3FF & (arg2 >> 3)) << 0xA) | ((0x3FF & (arg3 >> 3)) << 0x14) | (arg0 << 0x1E);
}
