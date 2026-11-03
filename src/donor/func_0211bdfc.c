/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d2978 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020d2978.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef signed short s16;
extern void func_0211c004(void *p);
extern void func_0211be64(void *p);
void func_0211bdfc(u8 *p) {
    switch (*(s16 *) (p + 20)) {
        case 0:
            func_0211c004(p);
            return;
        case 1:
            func_0211be64(p);
            return;
        case 2:
            func_0211c004(p);
            func_0211be64(p);
            return;
        case 3:
            func_0211be64(p);
            func_0211c004(p);
            return;
    }
    return;
}
