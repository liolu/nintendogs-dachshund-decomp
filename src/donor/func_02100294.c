/* compiler: 1.2/sp2p3  */
/* func_0209fea8 from projets/nintendogs-dachshund/src/auto/func_0209fea8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern void func_020f07bc(M2C_UNK);
extern void func_02100764(M2C_UNK);
extern void func_021009b4(M2C_UNK);
extern void func_02100fd8(M2C_UNK);
extern void func_021011f4(M2C_UNK);
void func_02100294(s32 arg0) {
    s32 temp_r4;
    u32 temp_r1;

    temp_r1 = (*(u32 *) ((s8 *) (arg0) + (0x38)));
    temp_r4 = (*(s32 *) ((s8 *) (arg0) + (0x48)));
    switch (temp_r1) {
        default:
            break;
        case 0:
            func_021011f4(arg0);
            break;
        case 1:
            func_02100fd8(arg0);
            break;
        case 2:
            func_021009b4(arg0);
            break;
        case 3:
            func_02100764(arg0);
            break;
    }
    if (temp_r4 == (*(s32 *) ((s8 *) (arg0) + (0x48)))) {
        return;
    }
    func_020f07bc(0xF);
}
