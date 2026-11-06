/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f4964 from projets/nintendogs-chihuahua-friends/src/donor/func_020f4964.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_027c05f0;
extern void func_02081288(void);
void func_020f4964(void) {
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
