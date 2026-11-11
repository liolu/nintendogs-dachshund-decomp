/* compiler: 1.2/sp2p3  */
/* func_0206b68c from projets/children-of-mana/src/auto/func_0206b68c.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_02075878(M2C_UNK, M2C_UNK);
extern void func_020758f0(M2C_UNK, M2C_UNK);
void func_020757dc(s32 arg0, s32 arg1) {
    u8 temp_r0;

    temp_r0 = *(*(u8 **) ((s8 *) (arg1) + (8)));
    switch (temp_r0) {
        case 0x4D:
            func_02075878(arg0 + 0x3C, arg1);
            func_020758f0(arg0 + 8, arg1);
            return;
        case 0x4A:
            func_02075878(arg0 + 0x44, arg1);
            func_020758f0(arg0 + 0x10, arg1);
            return;
        case 0x56:
            func_02075878(arg0 + 0x4C, arg1);
            func_020758f0(arg0 + 0x18, arg1);
            return;
    }
}
