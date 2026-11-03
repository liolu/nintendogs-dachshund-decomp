/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0200d7e0 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0200d7e0.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
extern u32 *data_0214b484;
extern s32 func_020280ec(u8 *p);
extern s32 func_02025034(u8 *p, u32 a, u32 b, s32 c);
extern void func_0200d9c0(u8 *p, u32 a, u32 b);
void func_0200d740(u8 *p) {
    s32 bVar1;
    s32 nb;
    s32 iv3;
    s32 iv4;
    s32 r;
    u32 v;

    bVar1 = 0;
    r     = func_02025034(p, 77, 96, ((s32) (((s64) (func_020280ec(p)) * (129) + 0x800) >> 12)));
    if (r == 0) {
        r = func_02025034(p, 116, 135, ((s32) (((s64) (func_020280ec(p)) * (129) + 0x800) >> 12)));
        if (r == 0) {
            goto test;
        }
    }
    bVar1 = 1;
test:
    iv3 = 0;
    nb  = (bVar1 == 0);
    if (nb != 0) {
        v              = *data_0214b484 * 0x10dcd + 1;
        *data_0214b484 = v;
        if ((u16) ((((u32) (u16) v) * 200) >> 16) == 0) {
            iv3 = 1;
        }
    }
    iv4 = 0;
    if (nb != 0) {
        v              = *data_0214b484 * 0x10dcd + 1;
        *data_0214b484 = v;
        if ((u16) ((((u32) (u16) v) * 200) >> 16) == 0) {
            iv4 = 1;
        }
    }
    func_0200d9c0(p, iv4, iv3);
}
