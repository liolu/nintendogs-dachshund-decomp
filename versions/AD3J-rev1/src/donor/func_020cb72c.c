/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02096088 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02096088.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef signed short s16;
extern int data_02154c44;
extern void func_020cb908(int a, int b, int c);
void func_020cb72c(int *param_1) {
    u16 uVar3;

    func_020cb908(data_02154c44, 0, 0);
    func_020cb908(data_02154c44, 6, 0);
    uVar3 = 0;
    do {
        func_020cb908(data_02154c44, 1, (u16) (s16) uVar3);
        uVar3 = (u16) (uVar3 + 1);
    } while (uVar3 < 3);
    uVar3 = 0;
    do {
        func_020cb908(data_02154c44, 2, (u16) (s16) uVar3);
        uVar3 = (u16) (uVar3 + 1);
    } while (uVar3 < 3);
    func_020cb908((int) param_1, 3, 0);
    uVar3 = 0;
    do {
        func_020cb908((int) param_1, 4, uVar3);
        uVar3 = (u16) (uVar3 + 1);
    } while (uVar3 < 5);
    uVar3 = 0;
    do {
        func_020cb908((int) param_1, 5, uVar3);
        uVar3 = (u16) (uVar3 + 1);
    } while (uVar3 < 5);
}
