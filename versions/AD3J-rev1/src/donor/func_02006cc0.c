/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02006d34 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02006d34.c (license: none), reused by
 * tools/donor_match.py */
typedef signed int s32;
typedef signed long long s64;
s32 func_02006cc0(s32 x) {
    s32 t;
    s32 s1;
    s32 s2;
    s32 s3;
    if (x <= 0) {
        return 0;
    }
    if (x >= 0x1000) {
        return 0x1000;
    }
    t  = x - 0x800;
    s1 = ((s32) (((s64) (t) * (0x2000) + 0x800) >> 12));
    s2 = ((s32) (((s64) (s1) * (s1) + 0x800) >> 12));
    s3 = ((s32) (((s64) (s2) * (s1) + 0x800) >> 12));
    return ((s32) (((s64) (s3) * (0x800) + 0x800) >> 12)) + 0x800;
}
