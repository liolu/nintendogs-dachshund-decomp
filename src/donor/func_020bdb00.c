/* compiler: 1.2/sp2p3  */
/* func_020f0a5c from projets/nintendogs-dachshund/src/auto/func_020f0a5c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_020b8c1c(M2C_UNK, M2C_UNK, M2C_UNK);
extern void func_020b8ce8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_020bdb00(s32 arg0) {
    M2C_UNK (*temp_r1_2)(s32);
    s32 temp_r0;
    u16 temp_r1;

    temp_r0 = (*(s32 *) ((s8 *) (arg0) + (0x1C)));
    switch (temp_r0) {
        case 4:
            (*(s32 *) ((s8 *) (arg0) + (0x1C))) = 0;
            return;
        case 1:
            temp_r1 = (*(u16 *) ((s8 *) (arg0) + (4)));
            if (temp_r1 != 0xFFFF) {
                if ((*(s32 *) ((s8 *) (arg0) + (8))) != 0) {
                    func_020b8c1c((*(s32 *) ((s8 *) (arg0) + (0))), (s32) temp_r1, (s32) (*(u16 *) ((s8 *) (arg0) + (0xC))));
                }
                if ((*(s32 *) ((s8 *) (arg0) + (0x10))) != 0) {
                    func_020b8ce8((*(s32 *) ((s8 *) (arg0) + (0))), (s32) (*(u16 *) ((s8 *) (arg0) + (4))), 0, 0);
                }
            }
            temp_r1_2 = (*(M2C_UNK(**)(s32))((s8 *) (arg0) + (0x2C)));
            if (temp_r1_2 != ((void *) 0)) {
                temp_r1_2(arg0);
            }
            (*(s32 *) ((s8 *) (arg0) + (0x1C))) = 0;
            return;
    }
}
