/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02096a4c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02096a4c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern void func_020cc368(u32 a, u32 b, u32 c);
extern void func_020cc378(u32 a, u32 b, u32 c, u32 d);
void func_020cc194(u8 *param_1) {
    u16 uVar1;
    u16 uVar2;

    uVar1 = 0;
    do {
        func_020cc368(1, uVar1, 0);
        uVar1 = uVar1 + 1;
    } while (uVar1 < 3);
    uVar1 = 0;
    do {
        uVar2 = 0;
        do {
            func_020cc368(2, uVar1, uVar2);
            uVar2 = uVar2 + 1;
        } while (uVar2 < 20);
        uVar1 = uVar1 + 1;
    } while (uVar1 < 3);
    func_020cc378(0, 0, 0, (u32) param_1);
    func_020cc368(6, 0, 0);
    func_020cc368(3, 0, 0);
    uVar1 = 0;
    do {
        func_020cc368(4, uVar1, 0);
        uVar1 = uVar1 + 1;
    } while (uVar1 < 5);
    uVar1 = 0;
    do {
        uVar2 = 0;
        do {
            func_020cc368(5, uVar1, uVar2);
            uVar2 = uVar2 + 1;
        } while (uVar2 < 20);
        uVar1 = uVar1 + 1;
    } while (uVar1 < 5);
}
