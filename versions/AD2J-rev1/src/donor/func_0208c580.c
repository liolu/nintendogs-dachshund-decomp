/* compiler: 1.2/sp2p3  */
/* func_0210dafc from projets/nintendogs-dachshund/src/auto/func_0210dafc.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02002dfc();
extern M2C_UNK func_02002f5c();
extern M2C_UNK func_0208c610();
extern M2C_UNK func_020907ac;
extern M2C_UNK func_02090f34;
extern M2C_UNK func_02090f3c;
extern M2C_UNK func_020a15e8;
void func_0208c580(void) {
    u8 sp4[32];
    M2C_UNK *sp0;

    func_0208c610();
    func_02002f5c(sp4, &func_02090f3c);
    if (func_02002dfc(sp4, &sp0) == 1) {
        func_02002f5c(sp4, &func_020a15e8);
        func_02002dfc(sp4, (M2C_UNK *) 1);
    }
loop_2:
    func_02002f5c(sp4, &func_020907ac);
    if (func_02002dfc(sp4, sp0) != 3) {
        goto loop_2;
    }
    func_02002f5c(sp4, &func_02090f34);
    func_02002dfc(sp4, ((void *) 0));
    goto loop_2;
}
