/* compiler: 1.2/sp2p3  */
/* func_020594f4 from projets/children-of-mana/src/auto/func_020594f4.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_0206a3f4();
extern M2C_UNK data_02128ce0;
extern s32 data_0214e9f0;
extern s32 data_0214e9f4;
void func_0206d3d4(void) {
    s32 temp_r0;

    temp_r0       = func_0206a3f4();
    data_0214e9f4 = temp_r0;
    data_0214e9f0 = *((u16 *) ((s8 *) &data_02128ce0 + ((temp_r0 >> 4) * 2))) << 0xC;
}
