/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020caec0 from projets/nintendogs-chihuahua-friends/src/donor/func_020caec0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
extern void func_020caff4(u32 a, u32 b, u32 c);
extern void func_020cb024(u32 a, u32 b, u32 c);
void func_020caec0(void) {
    u32 i;
    u32 j;

    func_020caff4(0, 0, 0);
    func_020cb024(6, 0, 0);
    i = 0;
    do {
        func_020cb024(1, i, 0);
        i = (u16) (i + 1);
    } while (i < 3);
    i = 0;
    do {
        j = 0;
        do {
            func_020cb024(2, i, j);
            j = (u16) (j + 1);
        } while (j < 20);
        i = (u16) (i + 1);
    } while (i < 3);
    func_020cb024(3, 0, 0);
    i = 0;
    do {
        func_020cb024(4, i, 0);
        i = (u16) (i + 1);
    } while (i < 5);
    i = 0;
    do {
        j = 0;
        do {
            func_020cb024(5, i, j);
            j = (u16) (j + 1);
        } while (j < 20);
        i = (u16) (i + 1);
    } while (i < 5);
}
