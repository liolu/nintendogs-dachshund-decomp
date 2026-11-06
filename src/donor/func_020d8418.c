/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ea704 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020ea704.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
extern void func_0211177c(void *a, void *b, u32 c);
void func_020d8418(u8 *p, void *param_2) {
    s32 a, b, u, lim;
    func_0211177c(p, param_2, 0);
    b = *(s32 *) (p + 0xb8);
    a = *(s32 *) (p + 0xb0);
    if (b <= 0) {
        b = -b;
    }
    if (a <= 0) {
        a = -a;
    }
    lim                 = 0x666;
    u                   = lim + (a + b) * 8;
    *(s32 *) (p + 0xb4) = *(s32 *) (p + 0xb4) + ((s32) (((s64) (u) * (205) + 0x800) >> 12));
    if (lim < *(s32 *) (p + 0xb4)) {
        *(s32 *) (p + 0xb4) = lim;
    }
}
