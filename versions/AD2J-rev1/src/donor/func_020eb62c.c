/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209c83c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0209c83c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
extern u32 data_021471a0[];
extern u32 data_02154d9c[];
extern u8 data_02154cb8[];
extern u8 data_02130734[];
extern u8 data_02130735[];
extern u8 data_02154dd8[];
extern u8 data_02154d88[];
extern u8 data_021470ec[];
typedef struct {
    u32 w[3];
} T3;
extern void func_020eca58(u32 *p);
extern void func_02072320(u32 *p, u32 v);
extern u32 func_020ec2a0(u32 *p, s32 a);
extern u32 func_020ea564(u32 *p);
extern void func_0207472c(u32 *p, s32 a, s32 b);
extern void func_02071f4c(u32 *p, s32 a, s32 b);
extern void func_020ea640(u32 *p, s32 a, s32 b);
extern s32 func_020ecb58(u32 a, s32 b, s32 c);
extern void func_020ed818(s32 a, s32 b);
extern void func_020ed790(s32 a);
extern u32 func_020ea52c(u32 *p);
extern void func_0207226c(u32 *p, u32 v);
extern void func_02072114(u32 *p, u32 a, u32 b);
extern void func_02072144(u32 *p, u32 a, u32 b);
extern u32 _s32_div_f(s32 a, s32 b);
extern void func_020f1644(void);
extern void func_020ed900(u32 *p);
extern void func_020f1ed8(void);
extern void func_020f9e54(void);
void func_020eb62c(u32 *param_1, u32 *param_2) {
    u32 uVar15;
    u32 unaff_r7;
    u32 uVar1;
    s16 uVar14;
    u32 *piVar13;
    u32 uVar4;
    u32 uVar6;
    u32 uVar7;
    u32 uVar9;
    u32 uVar10;
    u32 bVar3;
    u32 *entry;
    s32 iVar12;
    s32 iVar12b;
    s32 iVar8;
    u32 uVar5;

    entry = (u32 *) data_021471a0[(*(u16 *) ((u8 *) (param_1) + 36))];
    if (param_2 != 0) {
        *(T3 *) data_02154d9c = *(T3 *) param_2;
    }
    if (entry != 0 && *(u8 *) ((u8 *) entry + 1) != 0xff) {
        iVar12 = (u32) * (u16 *) (data_02154cb8 + 0x18) * 6;
        uVar9  = data_02130734[iVar12];
        uVar10 = data_02130735[iVar12];
        bVar3  = 0;
        func_020eca58(param_1);
        uVar14 = 0;
        if (*(s32 *) param_1 > 0) {
            piVar13 = param_1 + 6;
            uVar5   = uVar10 - uVar9;
            do {
                uVar6  = (u32) (((s16 *) ((u8 *) (param_1) + 12))[uVar14]);
                uVar15 = (u32) (((s16 *) ((u8 *) (param_1) + 18))[uVar14]);
                uVar7  = 1u << uVar14;
                uVar1  = (u16) uVar7;
                if ((*(u16 *) ((u8 *) (param_1) + 4)) != 0 && ((*(u16 *) ((u8 *) (param_1) + 4)) & uVar1) != 0 &&
                    ((*(u16 *) ((u8 *) (param_1) + 6)) & uVar1) == 0) {
                    func_02072320(piVar13, 0);
                    (*(u16 *) ((u8 *) (param_1) + 4))  = (*(u16 *) ((u8 *) (param_1) + 4)) & ~uVar1;
                    (*(u16 *) ((u8 *) (param_1) + 38)) = (*(u16 *) ((u8 *) (param_1) + 38)) & ~uVar1;
                    if ((*(u16 *) ((u8 *) (param_1) + 36)) >= 0x40 && (*(u16 *) ((u8 *) (param_1) + 36)) <= 0x42) {
                        if (uVar15 == 4) {
                            iVar12 = (*(u32 *) ((u8 *) (param_1) + uVar14 * 4 + 40));
                            uVar7  = func_020ec2a0(param_1, 6);
                            if (uVar7 != 0xffffffff) {
                                (*(u32 *) ((u8 *) (param_1) + uVar7 * 4 + 40)) = iVar12;
                                (*(u16 *) ((u8 *) (param_1) + 38)) = (*(u16 *) ((u8 *) (param_1) + 38)) | (1u << uVar7);
                            } else {
                                uVar1 = (u16) (1u << uVar14);
                            }
                        } else if (uVar15 == 5) {
                            iVar12b = (*(u32 *) ((u8 *) (param_1) + uVar14 * 4 + 40));
                            uVar7   = func_020ec2a0(param_1, 7);
                            if (uVar7 != 0xffffffff) {
                                (*(u32 *) ((u8 *) (param_1) + uVar7 * 4 + 40)) = iVar12b;
                                (*(u16 *) ((u8 *) (param_1) + 38)) = (*(u16 *) ((u8 *) (param_1) + 38)) | (1u << uVar7);
                            }
                        }
                        if (*(s16 *) (data_02154dd8 + 0x22) != 0xf0) {
                            func_020ed818(0x50, 0x3c);
                            func_020ed790(0xf0);
                        }
                    }
                }
                if (((*(u16 *) ((u8 *) (param_1) + 8)) & uVar1) != 0) {
                    if (!bVar3) {
                        if (param_2 != 0) {
                            unaff_r7 = func_020ea564(param_2);
                        } else {
                            unaff_r7 = 0;
                        }
                        bVar3 = 1;
                    }
                    if (unaff_r7 < uVar10) {
                        if (uVar6 == 0x1f) {
                            func_0207472c(piVar13, (s32) * (s16 *) (data_02154d88 + 2) + 0x1f, 0);
                            func_02071f4c(piVar13, 4, uVar15);
                        } else {
                            if (uVar15 == 0 || uVar15 == 3) {
                                func_020ea640(param_1, (*(s16 *) ((u8 *) (param_1) + 12)), 4);
                            }
                            func_0207472c(piVar13, uVar6, uVar15);
                        }
                        if (((*(u16 *) ((u8 *) (param_1) + 38)) & uVar1) != 0) {
                            iVar12 =
                                func_020ecb58((*(u16 *) ((u8 *) (param_1) + 36)), (((s16 *) ((u8 *) (param_1) + 18))[uVar14]),
                                              *(s32 *) ((int) param_1 + uVar14 * 4 + 40));
                            (*(u32 *) ((u8 *) (param_1) + uVar14 * 4 + 64)) = iVar12;
                            iVar12 = (s32) data_021471a0[(*(u16 *) ((u8 *) (param_1) + 36))] + 8 +
                                     (((s16 *) ((u8 *) (param_1) + 18))[uVar14]) * 8;
                            iVar8 = *(s16 *) (iVar12 + 4) +
                                    ((s32) (*(u32 *) ((u8 *) (param_1) + uVar14 * 4 + 40)) >> *(s8 *) (iVar12 + 1));
                            if (iVar8 > 0x7fff) {
                                iVar8 = 0x7fff;
                            } else if (iVar8 < -0x8000) {
                                iVar8 = -0x8000;
                            }
                            *(u32 *) ((u8 *) (param_1 + uVar14) + 52) = iVar8;
                        }
                    }
                    (*(u16 *) ((u8 *) (param_1) + 8)) ^= uVar1;
                }
                if (*piVar13 != 0) {
                    if (!bVar3) {
                        if (param_2 != 0) {
                            unaff_r7 = func_020ea564(param_2);
                        } else {
                            unaff_r7 = 0;
                        }
                        bVar3 = 1;
                    }
                    if (unaff_r7 <= uVar9) {
                        if (((*(u16 *) ((u8 *) (param_1) + 38)) & uVar1) != 0) {
                            if ((*(u16 *) ((u8 *) (param_1) + 4)) != 0 && ((*(u16 *) ((u8 *) (param_1) + 4)) & uVar1) != 0 &&
                                ((*(u16 *) ((u8 *) (param_1) + 6)) & uVar1) != 0) {
                                uVar4 = func_020ecb58((*(u16 *) ((u8 *) (param_1) + 36)),
                                                      (((s16 *) ((u8 *) (param_1) + 18))[uVar14]),
                                                      (*(u32 *) ((u8 *) (param_1) + uVar14 * 4 + 40)));
                            } else {
                                uVar4 = (*(u32 *) ((u8 *) (param_1) + uVar14 * 4 + 64));
                            }
                        } else {
                            uVar4 = 0x7f;
                        }
                    } else if (unaff_r7 < uVar10) {
                        if (((*(u16 *) ((u8 *) (param_1) + 38)) & uVar1) != 0) {
                            if ((*(u16 *) ((u8 *) (param_1) + 4)) != 0 && ((*(u16 *) ((u8 *) (param_1) + 4)) & uVar1) != 0 &&
                                ((*(u16 *) ((u8 *) (param_1) + 6)) & uVar1) != 0) {
                                iVar12 = func_020ecb58((*(u16 *) ((u8 *) (param_1) + 36)),
                                                       (((s16 *) ((u8 *) (param_1) + 18))[uVar14]),
                                                       (*(u32 *) ((u8 *) (param_1) + uVar14 * 4 + 40)));
                            } else {
                                iVar12 = (*(u32 *) ((u8 *) (param_1) + uVar14 * 4 + 64));
                            }
                            uVar4 = _s32_div_f(iVar12 * (s32) (uVar10 - unaff_r7), uVar5);
                        } else {
                            uVar4 = _s32_div_f((s32) ((uVar10 - unaff_r7) * 0x7f), uVar5);
                        }
                    } else {
                        uVar4 = 0;
                        func_02072320(piVar13, uVar4);
                        if (((*(u16 *) ((u8 *) (param_1) + 4)) & uVar1) != 0) {
                            (*(u16 *) ((u8 *) (param_1) + 4)) ^= uVar1;
                        }
                    }
                    func_0207226c(piVar13, uVar4);
                    if (param_2 != 0) {
                        iVar12 = func_020ea52c(param_2);
                        func_02072114(piVar13, *(u16 *) data_021470ec, iVar12);
                    }
                    if (((*(u16 *) ((u8 *) (param_1) + 38)) & uVar1) != 0) {
                        if ((*(u16 *) ((u8 *) (param_1) + 4)) != 0 && ((*(u16 *) ((u8 *) (param_1) + 4)) & uVar1) != 0 &&
                            ((*(u16 *) ((u8 *) (param_1) + 6)) & uVar1) != 0) {
                            iVar12 = (s32) data_021471a0[(*(u16 *) ((u8 *) (param_1) + 36))] + 8 +
                                     (((s16 *) ((u8 *) (param_1) + 18))[uVar14]) * 8;
                            iVar8 = *(s16 *) (iVar12 + 4) +
                                    ((s32) (*(u32 *) ((u8 *) (param_1) + uVar14 * 4 + 40)) >> *(s8 *) (iVar12 + 1));
                            if (iVar8 > 0x7fff) {
                                iVar8 = 0x7fff;
                            } else if (iVar8 < -0x8000) {
                                iVar8 = -0x8000;
                            }
                        } else {
                            iVar8 = (*(u32 *) ((u8 *) (param_1) + uVar14 * 4 + 52));
                        }
                        func_02072144(piVar13, *(u16 *) data_021470ec, iVar8);
                    }
                }
                if (((*(u16 *) ((u8 *) (param_1) + 10)) & uVar1) != 0 && *piVar13 == 0) {
                    (*(u16 *) ((u8 *) (param_1) + 10)) ^= uVar1;
                }
                piVar13 = piVar13 + 1;
                uVar14  = (s16) (uVar14 + 1);
            } while (uVar14 < *(s32 *) param_1);
        }
        (*(u16 *) ((u8 *) (param_1) + 6)) = 0;
    }
    if ((*(u16 *) ((u8 *) (param_1) + 36)) == 0x4f) {
        func_020f1644();
    }
    func_020ed900(param_2);
    func_020f1ed8();
    if (*(s32 *) (data_02154d88 + 0x10) == 0) {
        return;
    }
    func_020f9e54();
}
