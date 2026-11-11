/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02050fdc from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02050fdc.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
extern s32 *data_0214b484;
extern s32 func_0202d9e0(u8 *p);
extern void func_02027630(u8 *p, s32 *v);
extern void func_0203e2b8(u8 *p, s32 id);
s32 func_02050910(u8 *p, u8 *p2) {
    s32 v0[3];
    s32 v1[3];
    s32 v2[3];
    s32 sum;
    s32 dx;
    s32 dy;
    s32 n;
    s16 ng;
    u16 sel;

    n = func_0202d9e0(p);
    switch (n) {
        case 0:
            goto L150;
        case 1:
        case 2:
        case 3:
            goto L5c;
        case 4:
        case 5:
        case 6:
            goto Lfc;
        case 7:
        case 9:
        case 11:
        case 13:
            goto L118;
        case 8:
        case 10:
        case 12:
        case 14:
            goto L134;
        default:
            goto L2cc;
    }

L5c:
    func_02027630(p2, v0);
    dx  = v0[0] - *(s32 *) (p + 0x2a0);
    dy  = v0[2] - *(s32 *) (p + 0x2a8);
    sum = ((s32) (((s64) (dx) * (*(s32 *) (p + 0x18c)) + 0x800) >> 12)) +
          ((s32) (((s64) (dy) * (*(s32 *) (p + 0x194)) + 0x800) >> 12));
    ng = (sum <= 0);
    if (ng == 0) {
        func_0203e2b8(p, 688);
    } else {
        func_0203e2b8(p, 687);
    }
    return 1;

Lfc:
    func_0203e2b8(p, 697);
    return 1;

L118:
    func_0203e2b8(p, 707);
    return 1;

L134:
    func_0203e2b8(p, 712);
    return 1;

L150:
    n              = *data_0214b484 * 0x10dcd + 1;
    *data_0214b484 = n;
    sel            = (u16) (((u32) n << 16) >> 31);
    if (sel == 0) {
        goto L18c;
    }
    if (sel != 1) {
        goto L2cc;
    }
    goto L22c;

L18c:
    func_02027630(p2, v1);
    dx  = v1[0] - *(s32 *) (p + 0x2a0);
    dy  = v1[2] - *(s32 *) (p + 0x2a8);
    sum = ((s32) (((s64) (dx) * (*(s32 *) (p + 0x18c)) + 0x800) >> 12)) +
          ((s32) (((s64) (dy) * (*(s32 *) (p + 0x194)) + 0x800) >> 12));
    ng = (sum <= 0);
    if (ng == 0) {
        func_0203e2b8(p, 680);
    } else {
        func_0203e2b8(p, 679);
    }
    return 1;

L22c:
    func_02027630(p2, v2);
    dx  = v2[0] - *(s32 *) (p + 0x2a0);
    dy  = v2[2] - *(s32 *) (p + 0x2a8);
    sum = ((s32) (((s64) (dx) * (*(s32 *) (p + 0x18c)) + 0x800) >> 12)) +
          ((s32) (((s64) (dy) * (*(s32 *) (p + 0x194)) + 0x800) >> 12));
    ng = (sum <= 0);
    if (ng == 0) {
        func_0203e2b8(p, 678);
    } else {
        func_0203e2b8(p, 677);
    }
    return 1;

L2cc:
    return 0;
}
