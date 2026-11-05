/* compiler: 1.2/sp2p3  */
/* func_020f96c8 from projets/nintendogs-dachshund/src/auto/func_020f96c8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_02068380(M2C_UNK);
extern void func_021077e0(M2C_UNK);
extern void func_021077f0(M2C_UNK);
void func_020d56d8(s32 arg0) {
    s16 temp_r1;

    temp_r1 = (*(s16 *) ((s8 *) (arg0) + (0x90)));
    switch (temp_r1) {
        case 1:
            return;
        case 0:
            func_021077e0(arg0);
            return;
        case 2:
            (*(s32 *) ((s8 *) (arg0) + (0xBC))) = 0;
            (*(s32 *) ((s8 *) (arg0) + (0xC0))) = 0;
            (*(s32 *) ((s8 *) (arg0) + (0xC4))) = 0;
            func_02068380(arg0 + 0xC8);
            func_021077f0(arg0);
            return;
    }
}
