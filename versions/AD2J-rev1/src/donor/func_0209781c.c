/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209781c from projets/nintendogs-shiba-friends/src/donor/func_0209781c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed short s16;
typedef signed int s32;
extern u8 data_0214b024[];
extern u8 data_0214affc[];
extern s32 func_02105d70(u8 *p);
extern void func_02105d8c(void);
extern void func_020efa80(s32 a, s32 b);
extern void func_020f07bc(s32 a);
extern void func_02097a58(u8 *p);
extern void func_020af6ec(void);
extern void func_02105da8(void);
extern void func_02091fe4(s32 a);
void func_0209781c(u8 *p) {
    s32 st;

    st = *(u16 *) (p + 4);
    if (st > 256) {
        goto big;
    }
    if (st >= 256) {
        goto s256;
    }
    if (st > 1) {
        return;
    }
    if (st < 0) {
        return;
    }
    if (st == 0) {
        goto s0;
    }
    if (st == 1) {
        return;
    }
    return;
big:
    switch (st) {
        case 0x101:
            goto c0;
        case 0x102:
            goto c1;
        case 0x103:
            goto c2;
        case 0x104:
            goto c3;
        case 0x105:
            goto c4;
        case 0x106:
            goto c5;
        default:
            goto fin;
    }
s0:
    *(s16 *) (p + 6) = *(s16 *) (p + 6) + 1;
    if (*(s16 *) (p + 6) >= 2) {
        *(s16 *) (p + 4) = 256;
        *(s16 *) (p + 6) = 0;
    }
    return;
s256:
    if (func_02105d70(p) != 0) {
        *(s16 *) (p + 4) = 0x101;
        *(s16 *) (p + 6) = 0;
        return;
    }
    if ((*(u16 *) (data_0214b024 + 2) & 2) == 0 && (u16) (*(u16 *) data_0214affc & 0xc03) == 0) {
        return;
    }
    func_02105d8c();
    func_020efa80(4, 30);
    func_020f07bc(82);
    return;
c0:
    *(s16 *) (p + 6) = *(s16 *) (p + 6) + 1;
    if (*(s16 *) (p + 6) < 4) {
        return;
    }
    *(s16 *) (p + 4) = 0x102;
    *(s16 *) (p + 6) = 0;
    func_02091fe4(1);
    return;
c1:
    *(s16 *) (p + 6) = *(s16 *) (p + 6) + 1;
    if (*(s16 *) (p + 6) < 2) {
        return;
    }
    *(s16 *) (p + 4) = 0x103;
    *(s16 *) (p + 6) = 0;
    func_020af6ec();
    return;
c2:
    func_02097a58(p);
    return;
c3:
    *(s16 *) (p + 6) = *(s16 *) (p + 6) + 1;
    if (*(s16 *) (p + 6) < 90) {
        return;
    }
    *(s16 *) (p + 4) = 0x105;
    *(s16 *) (p + 6) = 0;
    func_02105da8();
    return;
c4:
    *(s16 *) (p + 6) = *(s16 *) (p + 6) + 1;
    *(s16 *) (p + 4) = 0x106;
    *(s16 *) (p + 6) = 0;
    return;
c5:
    *(s16 *) (p + 6) = *(s16 *) (p + 6) + 1;
    if (*(s16 *) (p + 6) >= 30) {
        *(s16 *) (p + 4)    = 1;
        *(s32 *) (p + 0xc)  = 1;
        *(s32 *) (p + 0x18) = 19;
    }
    return;
fin:
    return;
}
