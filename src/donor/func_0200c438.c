/* compiler: 2.0/sp1p5  */
/* func_0200c438 from projets/nintendogs-chihuahua-friends/src/auto/func_0200c438.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef unsigned long u32;
extern s32 data_0214b47c;
void func_0200c438(s32 arg0) {
    u32 temp_r0;
    u32 temp_r0_2;
    u32 temp_r0_3;
    u32 temp_r1;

    data_0214b47c = arg0;
    if (arg0 == 0) {
        return;
    }
    temp_r1 = (*(u32 *) ((s8 *) (arg0) + (0x14)));
    if ((temp_r1 != 0) && (temp_r1 < 0x80000000U)) {
        (*(u32 *) ((s8 *) (arg0) + (0x14))) = (u32) (temp_r1 + arg0);
    }
    temp_r0 = (*(u32 *) ((s8 *) (data_0214b47c) + (0x18)));
    if ((temp_r0 != 0) && (temp_r0 < 0x80000000U)) {
        (*(u32 *) ((s8 *) (data_0214b47c) + (0x18))) = (u32) (temp_r0 + data_0214b47c);
    }
    temp_r0_2 = (*(u32 *) ((s8 *) (data_0214b47c) + (0x1C)));
    if ((temp_r0_2 != 0) && (temp_r0_2 < 0x80000000U)) {
        (*(u32 *) ((s8 *) (data_0214b47c) + (0x1C))) = (u32) (temp_r0_2 + data_0214b47c);
    }
    temp_r0_3 = (*(u32 *) ((s8 *) (data_0214b47c) + (0x20)));
    if (temp_r0_3 == 0) {
        return;
    }
    if (temp_r0_3 < 0x80000000U) {
        (*(u32 *) ((s8 *) (data_0214b47c) + (0x20))) = (u32) (temp_r0_3 + data_0214b47c);
    }
}
