/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02060484 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0206/func_02060484.c (license: MIT), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
extern char data_0214ec20[];
extern int data_02153e78[];
extern void func_0207f670(void *p);
extern void func_02065508(void *fn);
extern int func_02065ab4(void *g);
extern unsigned int func_02080c28(void);
extern void func_02080c3c(unsigned int flags);
int func_02065914(int a, int b, int c, int d, int e, int f) {
    char *g          = (char *) ((void *) (int) ((char *) (data_0214ec20) + (0)));
    unsigned int irq = func_02080c28();
    if (*(u32 *) (g + 0x34) & 4) {
        do {
            func_0207f670(g + 0xd4);
        } while (*(u32 *) (g + 0x34) & 4);
    }
    *(u32 *) ((void *) (int) ((char *) (g) + (0x34))) |= 4;
    func_02080c3c(irq);
    *(int *) (g + 0x18) = b;
    *(int *) (g + 0x1c) = a;
    *(int *) (g + 0x20) = c;
    *(int *) (g + 0x28) = d;
    *(int *) (g + 0x2c) = e;
    if (f != 0) {
        func_02065508((void *) func_02065ab4);
        return 1;
    }
    *(int *) (data_0214ec20 + 0xd0) = data_02153e78[2];
    func_02065ab4(g);
    return (*(int **) g)[0] == 0;
}
