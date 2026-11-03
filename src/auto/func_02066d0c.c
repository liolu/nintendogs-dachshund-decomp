/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02060484 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0206/func_02060484.c (license: MIT), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
extern char data_0214e180[];
extern int data_02153348[];
extern void func_0207fcb8(void *p);
extern void func_02066944(void *fn);
extern int func_02066eac(void *g);
extern unsigned int func_0208120c(void);
extern void func_02081220(unsigned int flags);
int func_02066d0c(int a, int b, int c, int d, int e, int f) {
    char *g          = (char *) ((void *) (int) ((char *) (data_0214e180) + (0)));
    unsigned int irq = func_0208120c();
    if (*(u32 *) (g + 0x34) & 4) {
        do {
            func_0207fcb8(g + 0xd4);
        } while (*(u32 *) (g + 0x34) & 4);
    }
    *(u32 *) ((void *) (int) ((char *) (g) + (0x34))) |= 4;
    func_02081220(irq);
    *(int *) (g + 0x18) = b;
    *(int *) (g + 0x1c) = a;
    *(int *) (g + 0x20) = c;
    *(int *) (g + 0x28) = d;
    *(int *) (g + 0x2c) = e;
    if (f != 0) {
        func_02066944((void *) func_02066eac);
        return 1;
    }
    *(int *) (data_0214e180 + 0xd0) = data_02153348[2];
    func_02066eac(g);
    return (*(int **) g)[0] == 0;
}
