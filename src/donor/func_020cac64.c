/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020955e4 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020955e4.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
extern u8 *data_02154c48;
extern void func_0206dfd4(u32 a, u32 b, u32 c);
void func_020cac64(u32 p1, s16 idx) {
    u8 *base = data_02154c48;
    u32 *e   = (u32 *) (base + idx * 24 + 0x1000);
    u32 v    = e[0x44c / 4];
    func_0206dfd4(v + 4, p1, 0x85c);
}
