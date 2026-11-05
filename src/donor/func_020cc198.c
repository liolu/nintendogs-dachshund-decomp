/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020cc194 from projets/nintendogs-shiba-friends/src/donor/func_020cc194.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern void func_020cc36c(u32 a, u32 b, u32 c);
extern void func_020cc37c(u32 a, u32 b, u32 c, u32 d);
void func_020cc198(u8 *param_1) {
    u16 uVar1;
    u16 uVar2;

    uVar1 = 0;
    do {
        func_020cc36c(1, uVar1, 0);
        uVar1 = uVar1 + 1;
    } while (uVar1 < 3);
    uVar1 = 0;
    do {
        uVar2 = 0;
        do {
            func_020cc36c(2, uVar1, uVar2);
            uVar2 = uVar2 + 1;
        } while (uVar2 < 20);
        uVar1 = uVar1 + 1;
    } while (uVar1 < 3);
    func_020cc37c(0, 0, 0, (u32) param_1);
    func_020cc36c(6, 0, 0);
    func_020cc36c(3, 0, 0);
    uVar1 = 0;
    do {
        func_020cc36c(4, uVar1, 0);
        uVar1 = uVar1 + 1;
    } while (uVar1 < 5);
    uVar1 = 0;
    do {
        uVar2 = 0;
        do {
            func_020cc36c(5, uVar1, uVar2);
            uVar2 = uVar2 + 1;
        } while (uVar2 < 20);
        uVar1 = uVar1 + 1;
    } while (uVar1 < 5);
}
