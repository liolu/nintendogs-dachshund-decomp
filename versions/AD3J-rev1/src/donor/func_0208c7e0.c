/* compiler: 1.2/sp2p3  */
/* func_0210dd5c from projets/nintendogs-dachshund/src/auto/func_0210dd5c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern void func_02006fdc(void);
extern void func_02067920(void);
extern M2C_UNK func_02067960(void);
extern void func_0207f1c8(M2C_UNK, M2C_UNK);
extern M2C_UNK func_0211f070(void);
extern M2C_UNK func_0211f08c(void);
extern void func_020c112c(void);
extern void func_020c1178(void);
void func_0208c7e0(void) {
    s32 var_r5;

    if (func_02067960() != 0) {
        var_r5 = 0;
    loop_2:
        if ((var_r5 == 0) && (func_0211f08c() != 0)) {
            var_r5 = 1;
        }
        if ((var_r5 != 0) && (func_0211f070() != 0)) {
            func_02067920();
        }
        func_0207f1c8(1, 1);
        goto loop_2;
    }
    func_02006fdc();
    func_020c112c();
    func_020c1178();
}
