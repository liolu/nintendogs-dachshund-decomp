/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209583c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0209583c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
extern void func_020caff0(u32 a, u32 b, u32 c);
extern void func_020cb020(u32 a, u32 b, u32 c);
void func_020caebc(void) {
    u32 i;
    u32 j;

    func_020caff0(0, 0, 0);
    func_020cb020(6, 0, 0);
    i = 0;
    do {
        func_020cb020(1, i, 0);
        i = (u16) (i + 1);
    } while (i < 3);
    i = 0;
    do {
        j = 0;
        do {
            func_020cb020(2, i, j);
            j = (u16) (j + 1);
        } while (j < 20);
        i = (u16) (i + 1);
    } while (i < 3);
    func_020cb020(3, 0, 0);
    i = 0;
    do {
        func_020cb020(4, i, 0);
        i = (u16) (i + 1);
    } while (i < 5);
    i = 0;
    do {
        j = 0;
        do {
            func_020cb020(5, i, j);
            j = (u16) (j + 1);
        } while (j < 20);
        i = (u16) (i + 1);
    } while (i < 5);
}
