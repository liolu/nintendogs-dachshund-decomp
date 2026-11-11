/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_ov007_0215c248 from https://github.com/chasmlol/nintendogs-decomp src/overlays/ov007/func_ov007_0215c248.c (license:
 * none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern u8 *data_ov006_0215bb60;
typedef void (*FP3)(u32, u32, u32);
void func_ov006_02157cb0(u8 *p) {
    u8 *iv;
    FP3 fp;
    s32 sel;
    u16 s;
    if (*(u16 *) (p + 2) != 0) {
        return;
    }
    s = *(u16 *) (p + 4);
    if (s == 7) {
        return;
    }
    if (s == 9) {
        goto nine;
    }
    if (s != 0x15) {
        return;
    }
    iv  = data_ov006_0215bb60;
    sel = *(s32 *) (iv + 0x28);
    if (sel == 2) {
        goto c2a;
    }
    if (sel == 3) {
        goto c3a;
    }
    return;
c2a:
    fp = *(FP3 *) (iv + 0x14);
    if (fp == 0) {
        return;
    }
    fp(*(u16 *) (p + 0x12), *(u32 *) (p + 0xc), *(u16 *) (p + 0x10));
    return;
c3a:
    fp = *(FP3 *) (iv + 0x14);
    if (fp == 0) {
        return;
    }
    fp(0, *(u32 *) (p + 0xc), *(u16 *) (p + 0x10));
    return;
nine:
    iv  = data_ov006_0215bb60;
    sel = *(s32 *) (iv + 0x28);
    if (sel == 2) {
        goto c2b;
    }
    if (sel == 3) {
        goto c3b;
    }
    return;
c2b:
    fp = *(FP3 *) (iv + 0x14);
    if (fp == 0) {
        return;
    }
    fp(*(u16 *) (p + 0x12), 0, 0);
    return;
c3b:
    fp = *(FP3 *) (iv + 0x14);
    if (fp == 0) {
        return;
    }
    fp(0, 0, 0);
    return;
}
