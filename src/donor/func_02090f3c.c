/* compiler: 1.2/sp2p3  */
/* func_021125bc from projets/nintendogs-dachshund/src/auto/func_021125bc.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02003a3c(M2C_UNK (*)(), M2C_UNK *);
extern M2C_UNK func_02003c2c(M2C_UNK);
extern M2C_UNK func_02003d84(M2C_UNK);
extern M2C_UNK func_02003e88();
extern M2C_UNK func_02003f40();
extern M2C_UNK func_020040c8();
extern M2C_UNK func_0200420c();
extern M2C_UNK func_02006830();
extern M2C_UNK func_02007540();
extern M2C_UNK func_0207d160();
extern M2C_UNK func_020c21d4();
extern M2C_UNK func_020c66a8();
extern M2C_UNK func_020cb46c();
extern M2C_UNK func_020cd37c();
extern M2C_UNK func_02090ff4();
extern M2C_UNK func_02091740();
extern void *data_02153710;
extern M2C_UNK func_02090fe8;
s32 func_02090f3c(s32 *arg0) {
    s32 var_r4;

    *arg0 = 0;
    func_02091740();
    func_02003d84(0x1E);
    do {
        func_020040c8();
        func_02090ff4();
        func_02003f40();
        func_0207d160();
        func_02003e88();
    } while ((*(s32 *) ((s8 *) (data_02153710) + (8))) == 0);
    func_02003c2c(0x3C);
    func_02003a3c(func_02090ff4, &func_02090fe8);
    var_r4 = 0;
    if ((*(s32 *) ((s8 *) (data_02153710) + (0x28))) == 0) {
        var_r4 = 1;
    }
    func_020cb46c();
    func_020cd37c();
    func_02007540();
    func_020c66a8();
    func_020c21d4();
    func_0200420c();
    func_02006830();
    data_02153710 = ((void *) 0);
    return var_r4;
}
