/* compiler: 1.2/sp2p3  */
/* func_02114218 from projets/nintendogs-dachshund/src/auto/func_02114218.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK func_021063f8(M2C_UNK, M2C_UNK, M2C_UNK);
extern M2C_UNK func_02106558(void);
extern M2C_UNK func_021070d8(M2C_UNK);
extern M2C_UNK func_021070f0(M2C_UNK);
void func_02092aa8(s32 arg0) {
    s16 temp_r8;
    s32 var_r7;
    u32 temp_r0;

    temp_r8 = (*(s16 *) ((s8 *) (arg0) + (0x7C)));
    if ((*(u16 *) ((s8 *) (arg0) + (0x78))) == 0) {
        return;
    }
    if (func_02106558() == 0) {
        return;
    }
    temp_r0 = (u32) func_021070f0((s32) (*(s16 *) ((s8 *) (arg0) + (0x7C))));
    switch (temp_r0) {
        default:
            break;
        case 0:
            (*(s16 *) ((s8 *) (arg0) + (0x7A))) = (s16) func_021063f8(0, (s32) temp_r8, 2);
            break;
        case 1:
            (*(s16 *) ((s8 *) (arg0) + (0x7A))) = (s16) func_021063f8(0, (s32) temp_r8, 1);
            break;
        case 2:
            var_r7                              = 0;
            (*(s16 *) ((s8 *) (arg0) + (0x7A))) = 0;
            if (func_021070d8((s32) temp_r8) > 0) {
                do {
                    func_021063f8(0, (s32) temp_r8, 2);
                    var_r7 += 1;
                } while (var_r7 < func_021070d8((s32) temp_r8));
            }
            break;
        case 3:
            (*(s16 *) ((s8 *) (arg0) + (0x7A))) = (s16) func_021063f8(0, (s32) temp_r8, 1);
            break;
    }
    (*(u16 *) ((s8 *) (arg0) + (0x78))) = 0U;
}
