/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020dc8b0 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020dc8b0.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_027c05f0;
extern void func_02081288(void);
void func_020f495c(void) {
    s32 i;
    s32 v;
    s32 d;
    s32 base;
    v    = 0;
    i    = v;
    base = 64;
    for (;;) {
        ((u32 *) &data_027c05f0)[i] = v;
        i                           = i + 1;
        if (i >= 128) {
            break;
        }
        d = base;
        if (v >= 64) {
            do {
                if (d == 0) {
                    func_02081288();
                }
                v = v - d;
                d = d / 2;
            } while (d <= v);
        }
        v = v + d;
    }
}
