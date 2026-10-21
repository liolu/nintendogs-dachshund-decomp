/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205ffd0 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0205/func_0205ffd0.c (license: MIT), reused
 * by tools/donor_match.py */
extern unsigned int func_02080c28(void);
extern void func_02080c3c(unsigned int savedState);
extern void func_0207f670(void *);
extern char data_0214ec20[];
typedef unsigned short u16;
typedef unsigned int u32;
extern int func_02063dd0(void);
extern int func_02063cb0(int count, int a, int b, int c, int d, int e);
extern void func_020801f4(u32 a, u32 b);
extern void func_02063f34(int i, int val);
extern int func_02063de0(int a, int b, int c);
int func_0206520c(void) {
    int *g             = (int *) data_0214ec20;
    unsigned int saved = func_02080c28();
    if (g[13] & 4) {
        do {
            func_0207f670((char *) g + 0xd4);
        } while (g[13] & 4);
    }
    func_02080c3c(saved);
    return *(int *) g[0] == 0;
}
