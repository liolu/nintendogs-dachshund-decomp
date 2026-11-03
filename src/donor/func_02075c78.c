/* compiler: 2.0/sp1p5  */
/* NNS_G3dGlbLightColor from projets/blue-dragon-awakened-shadow/src/auto/NNS_G3dGlbLightColor.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK data_021503d8;
void func_02075c78(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_021503d8 + (arg0 * 4))) = arg1 | (arg0 << 0x1E);
}
