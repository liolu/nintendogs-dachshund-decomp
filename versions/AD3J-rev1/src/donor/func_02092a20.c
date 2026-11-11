/* compiler: 1.2/sp2p3  */
/* func_02114190 from projets/nintendogs-dachshund/src/auto/func_02114190.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern s32 func_02106538();
extern M2C_UNK func_02106578(M2C_UNK, s16);
extern u32 func_021070f0(s16);
extern M2C_UNK func_02092aa8();
void func_02092a20(void *arg0) {
    s16 temp_r1;
    u32 temp_r0;

    temp_r1 = (*(s16 *) ((s8 *) (arg0) + (0x76)));
    switch (temp_r1) {
        case 1:
            if (func_02106538() == 0) {
                return;
            }
            func_02106578(0, (*(s16 *) ((s8 *) (arg0) + (0x7C))));
            temp_r0 = func_021070f0((*(s16 *) ((s8 *) (arg0) + (0x7C))));
            switch (temp_r0) {
                default:
                    break;
                case 0:
                case 1:
                case 2:
                case 3:
                    (*(s16 *) ((s8 *) (arg0) + (0x78))) = 1;
                    break;
            }
            (*(s16 *) ((s8 *) (arg0) + (0x76))) = 2;
            return;
        case 2:
            func_02092aa8(arg0);
            return;
    }
}
