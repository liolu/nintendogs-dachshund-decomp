/* compiler: 1.2/sp2p3  */
/* func_020bd200 from projets/nintendogs-dachshund/src/auto/func_020bd200.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_02112ce8(M2C_UNK, M2C_UNK);
extern void func_02119be8(M2C_UNK, M2C_UNK);
extern void func_0211caf4(M2C_UNK, M2C_UNK);
extern void func_0211cc38(M2C_UNK, M2C_UNK);
void func_0211ca7c(s32 arg0, s32 arg1) {
    u8 sp0[40];
    s32 temp_r2;

    temp_r2 = (*(s32 *) ((s8 *) (arg0) + (0)));
    switch (temp_r2) {
        case 0:
            (*(u16 *) ((s8 *) (arg0) + (4))) = (u16) ((*(u16 *) ((s8 *) (arg0) + (4))) + 0x20);
            func_02112ce8((s32) sp0, (s32) (*(u16 *) ((s8 *) (arg0) + (4))));
            break;
        case 1:
            func_0211cc38(arg0, (s32) sp0);
            break;
        case 2:
            func_0211caf4(arg0, (s32) sp0);
            break;
    }
    func_02119be8((s32) sp0, arg1);
}
