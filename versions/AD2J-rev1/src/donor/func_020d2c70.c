/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d2c68 from projets/nintendogs-shiba-friends/src/donor/func_020d2c68.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef struct {
    u32 w[3];
} T3;
extern u8 data_02154c9c[];
extern u8 data_02154c90[];
extern u8 data_02154c8c[];
extern u8 data_02156080[];
extern u8 data_0214a798[];
extern void func_020848ec(s32 a, s32 *b);
extern void func_02084980(s32 a, s32 b, u8 *c);
extern s32 func_0210634c(void);
extern void func_020c45ec(s32 a, s32 *b, u32 *c);
extern void func_020ec1e0(u8 *a, s32 b, s32 *c);
extern s32 func_0210fdf8(u8 *p);
extern void func_02044644(s16 a);
extern s32 func_01ffda04(s32 a);
extern s32 func_02111ed8(s32 a, s32 *b, u32 c, s32 *d);
extern void func_020d3928(u8 *p);
extern void func_02027044(s32 a, s32 b);
extern s32 func_02111cbc(u16 a, u32 b);
extern s32 func_020d3288(s32 *a, u32 b, s32 c, s32 *d);
extern void func_02069668(s32 *a, s32 *b, s32 *c);
extern void func_020d3a80(void);
extern void func_020d39e8(void);
typedef struct {
    s32 x, y, z;
} VecFx32;
static inline void VEC_Set(VecFx32 *a, s32 x, s32 y, s32 z) {
    a->x = x;
    a->y = y;
    a->z = z;
}
void func_020d2c70(u8 *param_1) {
    s32 *piVar10;
    u8 *iVar13p;
    s32 iVar13;
    s32 iLoop;
    u32 uVar14;
    s32 iVar7;
    s32 iVar8;
    s32 iVar12;
    u32 uVar1;
    u32 uVar9;
    s16 sVar2;
    s32 bVar6;
    u32 *puVar5;
    u32 auStack_48[3];
    s32 local_3c[7];

    iVar13  = *(s32 *) (param_1 + 0x214);
    iVar13p = (u8 *) iVar13;
    {
        s32 t14 = *(s32 *) (iVar13p + 0x14);
        if (t14 != 0) {
            *(s32 *) (iVar13p + 0x14) = t14 - 1;
            goto REST;
        }
        if (*(s32 **) data_02154c9c != 0) {
            iVar7 = **(s32 **) data_02154c9c;
        } else {
            iVar7 = 0;
        }
        func_020848ec(iVar7, *(s32 **) (iVar13p + 0x1c));
        iVar7                     = 0;
        *(s32 *) (iVar13p + 0x1c) = 0;
        *(T3 *) data_02154c90     = *(T3 *) (param_1 + 0xbc);
        *(s16 *) data_02154c8c    = (s16) (*(s32 *) (iVar13p + 0xc) >> 5);
        piVar10                   = *(s32 **) data_02154c9c;
        if (piVar10 != 0) {
            iVar7 = *piVar10;
        }
        func_02084980(iVar7, 0x14, (u8 *) func_020d3a80);
        *(s32 *) (iVar13p + 4) = 0;
        iVar13                 = func_0210634c();
        func_020c45ec(iVar13, (s32 *) (param_1 + 0xbc), auStack_48);
        func_020ec1e0(param_1 + 400, 7, (s32 *) auStack_48);
        bVar6 = func_0210fdf8(param_1);
        return;
    }
REST:
    if (*(s32 *) (iVar13p + 8) != 0) {
        if (*(s32 *) (iVar13p + 0x1c) != 0) {
            iVar13  = *(s32 *) (param_1 + 0x214);
            iVar13p = (u8 *) iVar13;
            if (*(s32 **) data_02154c9c != 0) {
                iVar7 = **(s32 **) data_02154c9c;
            } else {
                iVar7 = 0;
            }
            func_020848ec(iVar7, *(s32 **) (iVar13p + 0x1c));
            iVar7                     = 0;
            *(s32 *) (iVar13p + 0x1c) = 0;
            *(T3 *) data_02154c90     = *(T3 *) (param_1 + 0xbc);
            *(s16 *) data_02154c8c    = (s16) (*(s32 *) (iVar13p + 0xc) >> 5);
            piVar10                   = *(s32 **) data_02154c9c;
            if (piVar10 != 0) {
                iVar7 = *piVar10;
            }
            func_02084980(iVar7, 0x11, (u8 *) func_020d39e8);
            *(s32 *) (iVar13p + 4) = 0;
            func_0210fdf8(param_1);
        }
        bVar6 = func_0210fdf8(param_1);
        return;
    }
    func_02044644(*(s16 *) (param_1 + 0x9c));
    if ((*(u32 *) (iVar13p + 0x14) & 0xff) == 0) {
        uVar9                    = 0xfff;
        iVar12                   = *(s32 *) *(u32 **) data_02156080 * 0x10dcd + 1;
        **(s32 **) data_02156080 = iVar12;
        iVar7                    = *(s32 *) *(u32 **) data_02156080 * 0x10dcd + 1;
        uVar14                   = (u32) (s16) (u16) (iVar12 & uVar9);
        uVar1                    = (u32) (s16) (u16) (iVar7 & uVar9);
        **(s32 **) data_02156080 = iVar7;
        *(s32 *) (param_1 + 0xb0) =
            *(s32 *) (param_1 + 0xb0) + (((s32) (((((s64) (s32) (uVar14)) << 7) + 0x800) >> 12)) - 0x40);
        *(s32 *) (param_1 + 0xb8) =
            *(s32 *) (param_1 + 0xb8) + (((s32) (((((s64) (s32) (uVar1)) << 7) + 0x800) >> 12)) - 0x40);
        *(u32 *) (iVar13p + 0x18) = (u32) (*(s32 *) (iVar13p + 0x18) == 0);
    }
    if (*(s32 *) (iVar13p + 0x18) != 0) {
        sVar2                    = 0xfff;
        iVar7                    = *(s32 *) *(u32 **) data_02156080 * 0x10dcd + 1;
        **(s32 **) data_02156080 = iVar7;
        if ((((s32) (s16) (u16) (iVar7 & sVar2)) & 1) == 0) {
            *(s32 *) (param_1 + 0xb4) = *(s32 *) (param_1 + 0xb4) + 1;
        }
    }
    if (*(s32 *) (iVar13p + 0x18) == 0) {
        sVar2                    = 0xfff;
        iVar7                    = *(s32 *) *(u32 **) data_02156080 * 0x10dcd + 1;
        **(s32 **) data_02156080 = iVar7;
        if ((((s32) (s16) (u16) (iVar7 & sVar2)) & 1) == 0) {
            *(s32 *) (param_1 + 0xb4) = *(s32 *) (param_1 + 0xb4) - 1;
        }
    }
    sVar2                    = 0xfff;
    iVar7                    = *(s32 *) *(u32 **) data_02156080 * 0x10dcd + 1;
    **(s32 **) data_02156080 = iVar7;
    if ((((s32) (s16) (u16) (iVar7 & sVar2)) & 0x11) == 0) {
        *(s32 *) (param_1 + 0xb4) = *(s32 *) (param_1 + 0xb4) - 1;
    }
    iVar12 = *(s32 *) (param_1 + 0xb0);
    if (iVar12 > 0) {
        iVar7 = iVar12;
    } else {
        iVar7 = -iVar12;
    }
    if (iVar7 > 41) {
        *(s32 *) (param_1 + 0xb0) = *(s32 *) (param_1 + 0xb0) - (iVar12 >> 5);
    }
    iVar12 = *(s32 *) (param_1 + 0xb4);
    if (iVar12 > 0) {
        iVar7 = iVar12;
    } else {
        iVar7 = -iVar12;
    }
    if (iVar7 > 41) {
        *(s32 *) (param_1 + 0xb4) = *(s32 *) (param_1 + 0xb4) - (iVar12 >> 5);
    }
    iVar12 = *(s32 *) (param_1 + 0xb8);
    if (iVar12 > 0) {
        iVar7 = iVar12;
    } else {
        iVar7 = -iVar12;
    }
    if (iVar7 > 41) {
        *(s32 *) (param_1 + 0xb8) = *(s32 *) (param_1 + 0xb8) - (iVar12 >> 5);
    }
    func_02069668((s32 *) (param_1 + 0xbc), (s32 *) (param_1 + 0xb0), (s32 *) (param_1 + 0xbc));
    if (((*(s16 *) (param_1 + 0x88) & 1) == ((*(s32 **) data_0214a798)[10] & 1)) &&
        0x1eu < 0x12c0u - *(u32 *) (iVar13p + 0x14)) {
        volatile s32 *pz;
        uVar14 = ((u32) (((((s64) (s32) (*(s32 *) (iVar13p + 0xc))) * (u32) (0x4cd)) + 0x800) >> 12));
        iLoop  = 0;
        if (*(s16 *) (param_1 + 0x90) != 0 && *(s16 *) (param_1 + 0x90) != 2) {
            pz    = (volatile s32 *) local_3c;
            pz[0] = 0;
            pz[1] = 0;
            pz[2] = 0;
            do {
                iVar12 = func_01ffda04(iLoop);
                if (iVar12 != 0 && (iVar8 = func_02111ed8(iVar12, (s32 *) (param_1 + 0xbc), uVar14, (s32 *) pz), iVar8 != 0)) {
                    func_020d3928(param_1);
                    func_02027044(iVar12, 3);
                    goto LAB_020e5480;
                }
                iLoop = (iLoop + 1) * 0x10000 >> 16;
            } while (iLoop < 3);
        }
        sVar2 = *(s16 *) (param_1 + 0x90);
        if (sVar2 != 0 && sVar2 != 2 && sVar2 != 3) {
            iVar7 = *(s32 *) (param_1 + 0xc0) - uVar14;
            if (iVar7 < 0) {
                func_020d3928(param_1);
                goto LAB_020e5480;
            }
            if (iVar7 > (s32) 0xef80) {
                *(u32 *) (param_1 + 0xc0) = 0xef80 - uVar14;
            }
        }
        sVar2 = *(s16 *) (param_1 + 0x90);
        if (sVar2 != 0 && sVar2 != 2 && sVar2 != 3) {
            s32 *pz2;
            pz2    = local_3c + 3;
            pz2[0] = 0;
            pz2[1] = 0;
            pz2[2] = 0;
            iVar7  = func_02111cbc(*(u16 *) (param_1 + 0xa0), 0x1000);
            iVar7  = func_020d3288((s32 *) (param_1 + 0xbc), uVar14, iVar7, local_3c + 3);
            if (iVar7 != 0) {
                *(s32 *) (param_1 + 0xb0) = -*(s32 *) (param_1 + 0xb0);
                *(s32 *) (param_1 + 0xb8) = -*(s32 *) (param_1 + 0xb8);
            }
        }
    }
LAB_020e5480:
    iVar7 = *(s32 *) (iVar13p + 0x1c);
    if (iVar7 != 0) {
        *(s32 *) (iVar7 + 0x20) = *(s32 *) (param_1 + 0xbc) + *(s32 *) (**(s32 **) (iVar7 + 0x18) + 4);
        *(s32 *) (iVar7 + 0x24) = *(s32 *) (param_1 + 0xc0) + *(s32 *) (**(s32 **) (iVar7 + 0x18) + 8);
        *(s32 *) (iVar7 + 0x28) = *(s32 *) (param_1 + 0xc4) + *(s32 *) (**(s32 **) (iVar7 + 0x18) + 0xc);
    } else {
        return;
    }
    *(u32 *) (param_1 + 0xac) = ((u32) (((((s64) (s32) (*(s32 *) (iVar13p + 0xc))) * (u32) (0x333)) + 0x800) >> 12));
    VEC_Set((VecFx32 *) (*(u32 *) (param_1 + 0x18c) + 0x24), *(s32 *) (param_1 + 0xac), *(s32 *) (param_1 + 0xac),
            *(s32 *) (param_1 + 0xac));
}
