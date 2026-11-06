/* compiler: 1.2/sp2p3  */
/* func_020df5c0 from projets/nintendogs-dachshund/src/auto/func_020df5c0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020ee670(u16);
extern M2C_UNK func_020f0538(u16);
extern M2C_UNK func_020acee4(void *);
extern M2C_UNK func_020ae158();
extern s32 func_020afcbc();
extern M2C_UNK func_020afce8(M2C_UNK);
extern M2C_UNK func_020b03b4(s32);
extern M2C_UNK func_020b0444();
void func_020acdb4(void *arg0, void *arg1) {
    u16 temp_r1;
    u16 temp_r1_2;

    temp_r1 = (*(u16 *) ((s8 *) (arg1) + (2)));
    switch (temp_r1) {
        default:
            break;
        case 2:
        case 3:
            func_020b0444();
            break;
        case 4:
            temp_r1_2 = (*(u16 *) ((s8 *) (arg1) + (0x12)));
            switch (temp_r1_2) {
                case 1:
                    (*(s32 *) ((s8 *) (arg0) + (0x1C))) = 1;
                    break;
                case 3:
                    (*(s32 *) ((s8 *) (arg0) + (0x1C))) = 2;
                    break;
                case 4:
                    (*(s32 *) ((s8 *) (arg0) + (0x1C))) = 1;
                    break;
                default:
                    (*(s32 *) ((s8 *) (arg0) + (0x1C))) = 0;
                    break;
            }
            func_020b03b4((*(s32 *) ((s8 *) (arg0) + (0x1C))));
            break;
        case 6:
            (*(s32 *) ((s8 *) (arg0) + (0x10))) = 1;
            break;
        case 8:
            (*(s32 *) ((s8 *) (arg0) + (0x14))) = 1;
            break;
        case 9:
            func_020f0538((*(u16 *) ((s8 *) (arg1) + (0x1C))));
            break;
        case 10:
            func_020ee670((*(u16 *) ((s8 *) (arg1) + (0x1C))));
            break;
        case 11:
            (*(s32 *) ((s8 *) (arg0) + (0x18))) = 1;
            break;
        case 1:
            func_020ae158();
            break;
        case 12:
            func_020acee4(arg1);
            break;
    }
    if ((*(s16 *) ((s8 *) (arg1) + (0))) != 3) {
        return;
    }
    if (func_020afcbc() == 0) {
        return;
    }
    (*(s16 *) ((s8 *) (arg1) + (0x44))) = 1;
    func_020afce8(0);
}
