/* compiler: 1.2/sp2p3  */
/* func_020abbcc from projets/nintendogs-dachshund/src/auto/func_020abbcc.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef short s16;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern void func_020c2df4(M2C_UNK);
extern void func_020c2e0c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern void func_020c2fc8(M2C_UNK);
extern s16 data_02156088;
void func_0210bf44(s32 arg0) {
    u32 temp_r0;

    func_020c2fc8(arg0);
    temp_r0 = data_02156088 - 0x35;
    switch (temp_r0) {
        default:
            break;
        case 0:
            func_020c2e0c(arg0, 0x2C, 1, 0x218);
            func_020c2e0c(arg0, 0x2F, 1, 0x88);
            break;
        case 1:
            func_020c2e0c(arg0, 0x2D, 1, 0x218);
            func_020c2e0c(arg0, 0x30, 1, 0x88);
            break;
        case 2:
            func_020c2e0c(arg0, 0x2E, 1, 0x218);
            func_020c2e0c(arg0, 0x31, 1, 0x88);
            break;
        case 3:
            func_020c2e0c(arg0, 0x2C, 1, 0x218);
            func_020c2e0c(arg0, 0x32, 1, 0x88);
            break;
        case 4:
            func_020c2e0c(arg0, 0x2C, 1, 0x218);
            func_020c2e0c(arg0, 0x33, 1, 0x88);
            break;
    }
    func_020c2df4(arg0);
}
