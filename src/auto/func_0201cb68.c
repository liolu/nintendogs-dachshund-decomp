/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0201cb44 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0201cb44.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
extern s32 func_020280ec(u8 *p);
extern s32 func_02024ce8(u8 *p, u32 a, u32 b, s32 c);
extern void func_0201d214(u8 *p);
extern void func_020357c0(u8 *p, u32 a);
extern s32 func_020351a0(u8 *p);
extern void func_0202f8a4(u8 *p);
void func_0201cb68(u8 *p) {
    s32 r;

    r = func_02024ce8(p, 11, 36, ((s32) (((s64) (func_020280ec(p)) * (163) + 0x800) >> 12)));
    if (r == 0) {
        func_02024ce8(p, 46, 80, ((s32) (((s64) (func_020280ec(p)) * (94) + 0x800) >> 12)));
    }
    func_0201d214(p);
    func_020357c0(p, 1);
    r = func_020351a0(p);
    if (r != 0) {
        func_0202f8a4(p);
    }
}
