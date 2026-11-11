/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02050ca4 from projets/children-of-mana/src/auto/func_02050ca4.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
extern unsigned int func_0208120c(void);
extern void func_02081220(unsigned int);
extern void func_02081288(void);
extern void func_0207fcb8(void *p);
typedef struct {
    int *f0;
    char pad4[4];
    int f8;
    int fc;
    int f10;
    int f14;
} G;
extern G data_0214e180;
void func_020668a8(int a0, int a1) {
    int gi         = (int) &data_0214e180;
    unsigned int s = func_0208120c();
    G *g           = (G *) gi;
    if (g->f8 == a0) {
        if (g->f14 != a1) {
            func_02081288();
        }
    } else {
        while (*(volatile int *) &g->f8 != -3) {
            func_0207fcb8(&g->f10);
        }
        g->f8  = a0;
        g->f14 = a1;
    }
    {
        int *pc = (int *) ((gi + 0xc));
        *pc     = *pc + 1;
    }
    *g->f0 = 0;
    func_02081220(s);
}
