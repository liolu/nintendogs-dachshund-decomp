/* compiler: 1.2/sp2p3  */
/* func_020f094c from projets/nintendogs-dachshund/src/auto/func_020f094c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_020b8b0c(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020bd9f0(s32 arg0, s32 arg1) {
    M2C_UNK (*temp_r1)(arg0);
    M2C_UNK (*temp_r1_3)(arg0);
    u16 temp_r1_2;
    u16 temp_r1_4;

    if (arg1 != 0) {
        if ((*(s32 *) ((s8 *) (arg0) + (0x1C))) == 5) {
            (*(s32 *) ((s8 *) (arg0) + (0x1C))) = 0;
            temp_r1                             = (*(M2C_UNK(**)())((s8 *) (arg0) + (0x38)));
            if (temp_r1 != ((void *) 0)) {
                temp_r1(arg0);
            }
        }
        temp_r1_2 = (*(u16 *) ((s8 *) (arg0) + (4)));
        if (temp_r1_2 == 0xFFFF) {
            return;
        }
        func_020b8b0c((*(s32 *) ((s8 *) (arg0) + (0))), (s32) temp_r1_2, 1);
        return;
    }
    if ((*(s32 *) ((s8 *) (arg0) + (0x1C))) != 5) {
        (*(s32 *) ((s8 *) (arg0) + (0x1C))) = 5;
        temp_r1_3                           = (*(M2C_UNK(**)())((s8 *) (arg0) + (0x34)));
        if (temp_r1_3 != ((void *) 0)) {
            temp_r1_3(arg0);
        }
    }
    temp_r1_4 = (*(u16 *) ((s8 *) (arg0) + (4)));
    if (temp_r1_4 == 0xFFFF) {
        return;
    }
    func_020b8b0c((*(s32 *) ((s8 *) (arg0) + (0))), (s32) temp_r1_4, 0);
}
