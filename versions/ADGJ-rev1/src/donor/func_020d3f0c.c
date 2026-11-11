/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d3f0c from projets/nintendogs-chihuahua-friends/src/donor/func_020d3f0c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
typedef volatile u16 vu16;
extern u16 data_0214affc[];
extern s32 func_02069098(s32 a, s32 b);
extern void func_02069668(s32 *a, s32 *b, s32 *c);
extern void func_01ff832c(s32 a, s32 *b, s32 *c, s32 *d);
extern void func_020d4af0(u8 *p, s32 a);
extern s32 func_0206902c(s32 a);
extern void func_020ebce4(s32 *p, s32 a, s32 b);
extern s32 func_02111cbc(u32 a, s32 b);
extern void func_0210fe58(u8 *p, s32 a, s32 b, s32 c, s32 d, void *e, void *f, s32 g, void *h, void *i);
extern void func_020d4700(void);
extern void func_020d46f4(void);
extern void func_020d4558(void);
extern void func_020d4554(void);
void func_020d3f0c(u8 *param_1) {
    s32 *iVar7;
    s32 loc[3];
    s32 t;
    s32 iVar3;
    s32 iVar4;
    s32 iVar5;
    s32 iVar6;
    s32 acc;
    s32 c1;
    u16 fl;

    iVar7 = *(s32 **) (param_1 + 0x214);
    {
        s32 t2 = *(s32 *) (param_1 + 0xe8);
        s32 t1 = *(s32 *) (param_1 + 0xe4);
        s32 t0 = *(s32 *) (param_1 + 0xe0);
        loc[0] = t0;
        loc[1] = t1;
        loc[2] = t2;
    }
    iVar7[0x38 / 4] = -1;
    acc             = 0;
    c1              = iVar7[1];
    if (c1 > 0) {
        iVar7[1] = c1 - 1;
        func_020d4af0(param_1, iVar7[0x24 / 4]);
        iVar6 = iVar7[2];
        if (iVar6 > 0) {
            iVar7[2] = iVar6 - iVar7[0x14 / 4] * 2;
        } else {
            iVar7[2] = iVar6 + iVar7[0x14 / 4] * 2;
        }
    } else {
        if (((u16) (((vu16 *) data_0214affc)[1] & 1)) != 0 && iVar7[0x34 / 4] == 0) {
            iVar3 = iVar7[2];
            if (iVar3 < 0) {
                iVar7[2] = iVar3 + iVar7[0x14 / 4] * 4;
            } else {
                iVar7[2] = iVar3 + iVar7[0x14 / 4];
            }
            if (iVar7[2] > iVar7[3]) {
                iVar7[2] = iVar7[3];
            }
            iVar7[0x38 / 4] = 4;
        }
        if (((u16) (((vu16 *) data_0214affc)[1] & 2)) != 0 && iVar7[0x34 / 4] == 0) {
            iVar3 = iVar7[2];
            if (iVar3 > 0) {
                iVar7[2] = iVar3 - iVar7[0x18 / 4] * 4;
            } else {
                iVar7[2] = iVar3 - iVar7[0x18 / 4];
            }
            if (iVar7[2] < -iVar7[3]) {
                iVar7[2] = -iVar7[3];
            }
            iVar7[0x38 / 4] = 5;
        }
        if (((u16) (((vu16 *) data_0214affc)[1] & 0x10)) != 0) {
            t = func_02069098(iVar7[2], iVar7[3]);
            if (t > 0) {
                t = func_02069098(iVar7[2], iVar7[3]);
            } else {
                t = func_02069098(iVar7[2], iVar7[3]);
                t = -t;
            }
            iVar4 = iVar7[2];
            if (iVar4 > 0) {
                iVar3 = iVar4;
            } else {
                iVar3 = -iVar4;
            }
            if (iVar3 > 0x52) {
                acc = acc - (iVar7[8] + ((s32) (((s64) (s32) (iVar7[7]) * (0x1000 - t) + 0x800) >> 12)));
            } else {
                acc = acc - ((iVar7[8] + ((s32) (((s64) (s32) (iVar7[7]) * (t >> 2) + 0x800) >> 12))) >> 1);
            }
            if (iVar4 > 0) {
                iVar3 = iVar4;
            } else {
                iVar3 = -iVar4;
            }
            if (iVar3 >= 0x266) {
                fl = ((vu16 *) data_0214affc)[1];
                if (((u16) (fl & 1)) == 0 && ((u16) (fl & 2)) == 0 && iVar7[0x34 / 4] == 0) {
                    *(s32 *) (param_1 + 0xb0) =
                        *(s32 *) (param_1 + 0xb0) + ((s32) (((s64) (s32) (iVar4) * (loc[0]) + 0x800) >> 12));
                    *(s32 *) (param_1 + 0xb8) =
                        *(s32 *) (param_1 + 0xb8) + ((s32) (((s64) (s32) (iVar7[2]) * (loc[2]) + 0x800) >> 12));
                    iVar7[0x34 / 4] = 1;
                }
            }
        }
        if (((u16) (((vu16 *) data_0214affc)[1] & 0x20)) != 0) {
            t = func_02069098(iVar7[2], iVar7[3]);
            if (t > 0) {
                t = func_02069098(iVar7[2], iVar7[3]);
            } else {
                t = func_02069098(iVar7[2], iVar7[3]);
                t = -t;
            }
            iVar5 = iVar7[2];
            if (iVar5 > 0) {
                iVar4 = iVar5;
            } else {
                iVar4 = -iVar5;
            }
            if (iVar4 > 0x52) {
                acc = acc + (iVar7[8] + ((s32) (((s64) (s32) (iVar7[7]) * (0x1000 - t) + 0x800) >> 12)));
            } else {
                acc = acc + ((iVar7[8] + ((s32) (((s64) (s32) (iVar7[7]) * (t >> 2) + 0x800) >> 12))) >> 1);
            }
            if (iVar5 > 0) {
                iVar3 = iVar5;
            } else {
                iVar3 = -iVar5;
            }
            if (iVar3 >= 0x266) {
                fl = ((vu16 *) data_0214affc)[1];
                if (((u16) (fl & 1)) == 0 && ((u16) (fl & 2)) == 0 && iVar7[0x34 / 4] == 0) {
                    *(s32 *) (param_1 + 0xb0) =
                        *(s32 *) (param_1 + 0xb0) + ((s32) (((s64) (s32) (iVar5) * (loc[0]) + 0x800) >> 12));
                    *(s32 *) (param_1 + 0xb8) =
                        *(s32 *) (param_1 + 0xb8) + ((s32) (((s64) (s32) (iVar7[2]) * (loc[2]) + 0x800) >> 12));
                    iVar7[0x34 / 4] = 1;
                }
            }
        }
        fl = ((vu16 *) data_0214affc)[1];
        if (((u16) (fl & 1)) != 0 || ((u16) (fl & 2)) != 0) {
            iVar3 = iVar7[2];
            if (iVar3 <= 0) {
                iVar3 = -iVar3;
            }
            if (iVar3 <= 0x399) {
                iVar7[0x34 / 4] = 0;
            }
        }
        fl = ((vu16 *) data_0214affc)[1];
        if ((((u16) (fl & 1)) == 0 && ((u16) (fl & 2)) == 0) || iVar7[0x34 / 4] != 0) {
            iVar3 = iVar7[2];
            if (iVar3 > 0) {
                iVar7[2] = iVar3 - iVar7[0x14 / 4] * 2;
                if (iVar7[2] < 0) {
                    iVar7[2] = 0;
                }
            } else {
                iVar7[2] = iVar3 + iVar7[0x14 / 4] * 2;
                if (iVar7[2] > 0) {
                    iVar7[2] = 0;
                }
            }
        }
        if (iVar7[0x34 / 4] == 0) {
            func_01ff832c(iVar7[2], loc, (s32 *) (param_1 + 0xbc), (s32 *) (param_1 + 0xbc));
        }
        if (iVar7[2] < 0) {
            acc = -acc;
        } else if (iVar7[2] == 0) {
            acc = 0;
        }
        func_020d4af0(param_1, acc);
    }
    if (iVar7[0x34 / 4] != 0) {
        iVar6 = func_0206902c(((s32) (((s64) (s32) (*(s32 *) (param_1 + 0xb0)) * (*(s32 *) (param_1 + 0xb0)) + 0x800) >> 12)) +
                              ((s32) (((s64) (s32) (*(s32 *) (param_1 + 0xb8)) * (*(s32 *) (param_1 + 0xb8)) + 0x800) >> 12)));
        func_020ebce4((s32 *) (param_1 + 400), 0xb, iVar6);
        iVar7[0x38 / 4] = 0xb;
    }
    *(s32 *) (param_1 + 0xb0) = *(s32 *) (param_1 + 0xb0) - (*(s32 *) (param_1 + 0xb0) >> 4);
    *(s32 *) (param_1 + 0xb8) = *(s32 *) (param_1 + 0xb8) - (*(s32 *) (param_1 + 0xb8) >> 4);
    iVar6                     = *(s32 *) (param_1 + 0xb0);
    if (iVar6 <= 0) {
        iVar6 = -iVar6;
    }
    if (iVar6 < 0x29) {
        *(s32 *) (param_1 + 0xb0) = 0;
    }
    iVar6 = *(s32 *) (param_1 + 0xb8);
    if (iVar6 <= 0) {
        iVar6 = -iVar6;
    }
    if (iVar6 < 0x29) {
        *(s32 *) (param_1 + 0xb8) = 0;
    }
    func_02069668((s32 *) (param_1 + 0xb0), (s32 *) (param_1 + 0xbc), (s32 *) (param_1 + 0xbc));
    if (iVar7[0x38 / 4] - 4U <= 1) {
        iVar6 = iVar7[2];
        if (iVar6 <= 0) {
            iVar6 = -iVar6;
        }
        func_020ebce4((s32 *) (param_1 + 400), iVar7[0x38 / 4], iVar6);
    }
    iVar6 = func_02111cbc(*(u16 *) (param_1 + 0xa0), *(s32 *) (param_1 + 0xf8));
    func_0210fe58(param_1, *(s32 *) (param_1 + 0xf8), 0, 0, iVar6, (void *) func_020d4700, (void *) func_020d46f4, 0,
                  (void *) func_020d4558, (void *) func_020d4554);
}
