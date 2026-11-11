/* compiler: 1.2/sp2p3  */
/* func_020df8b4 from projets/nintendogs-dachshund/src/auto/func_020df8b4.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_020b8ce8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_020ad0a8(s32 arg0) {
    s32 temp_r1;

    temp_r1 = (*(s32 *) ((s8 *) (arg0) + (0x10)));
    switch (temp_r1) {
        case 0:
            (*(s32 *) ((s8 *) (arg0) + (0))) = (s32) ((*(s32 *) ((s8 *) (arg0) + (0))) + 1);
            if ((*(s32 *) ((s8 *) (arg0) + (0))) == 0x4B) {
                (*(s32 *) ((s8 *) (arg0) + (0xC)))  = -0x1000;
                (*(s32 *) ((s8 *) (arg0) + (0)))    = 0;
                (*(s32 *) ((s8 *) (arg0) + (0x10))) = 1;
            }
            break;
        case 1:
            (*(s32 *) ((s8 *) (arg0) + (0xC))) = (s32) ((*(s32 *) ((s8 *) (arg0) + (0xC))) + 0x80);
            (*(s32 *) ((s8 *) (arg0) + (8)))   = (s32) ((*(s32 *) ((s8 *) (arg0) + (8))) + (*(s32 *) ((s8 *) (arg0) + (0xC))));
            if ((s32) (*(s32 *) ((s8 *) (arg0) + (0xC))) > 0) {
                (*(s32 *) ((s8 *) (arg0) + (0x10))) = 2;
                (*(s32 *) ((s8 *) (arg0) + (0xC)))  = 0;
            }
            break;
        case 2:
            (*(s32 *) ((s8 *) (arg0) + (0xC))) = (s32) ((*(s32 *) ((s8 *) (arg0) + (0xC))) + 0x800);
            (*(s32 *) ((s8 *) (arg0) + (8)))   = (s32) ((*(s32 *) ((s8 *) (arg0) + (8))) + (*(s32 *) ((s8 *) (arg0) + (0xC))));
            if ((s32) (*(s32 *) ((s8 *) (arg0) + (8))) > 0) {
                if ((*(s32 *) ((s8 *) (arg0) + (4))) != 0) {
                    (*(s32 *) ((s8 *) (arg0) + (0xC)))  = 0;
                    (*(s32 *) ((s8 *) (arg0) + (8)))    = 0;
                    (*(s32 *) ((s8 *) (arg0) + (4)))    = 0;
                    (*(s32 *) ((s8 *) (arg0) + (0x10))) = 0;
                } else {
                    (*(s32 *) ((s8 *) (arg0) + (0xC))) = -0x3000;
                    (*(s32 *) ((s8 *) (arg0) + (8)))   = 0;
                    (*(s32 *) ((s8 *) (arg0) + (4)))   = (s32) ((*(s32 *) ((s8 *) (arg0) + (4))) + 1);
                }
            }
            break;
    }
    func_020b8ce8(0, 0, 0, (s32) ((*(s32 *) ((s8 *) (arg0) + (8))) * 0x10) >> 0x10);
}
