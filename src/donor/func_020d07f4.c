/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020e2acc from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020e2acc.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef signed short s16;
typedef signed int s32;
typedef struct {
    u32 w[6];
} Six;
typedef struct {
    u32 w[11];
} Eleven;
typedef struct {
    u32 w[12];
} Twelve;
extern u8 *data_02153720;
extern u32 data_021446e0[];
extern u32 data_02144724[];
extern s32 func_02044644(s32 a);
extern void func_021084a8(u8 *p, s32 *q);
extern void func_0210835c(u8 *p, u32 *q);
extern void func_0210fdc8(u8 *p);
extern s32 func_02069878(s32 a, s32 b);
extern void func_020d0e20(u8 *p);
extern void func_020d0b38(u8 *p);
extern void func_02112344(u8 *p, void *fn, u32 *b);
extern void func_021122b0(u8 *p, s32 a);
extern void func_021121c4(u8 *p);
extern void func_020d0ac4(void);
extern u64 _s32_div_f(u32 a, u32 b);
extern void func_020ed87c(s32 a);
void func_020d07f4(u8 *param_1) {
    s32 sVar1;
    s32 iVar3;
    s32 iVar5;
    s32 iVar7;
    s32 iVar8;
    s32 iVar9;
    u64 uVar10;
    u32 local_80[6];
    s32 local_68[11];
    s32 local_3c[11];

    switch (*(s16 *) (param_1 + 0x90)) {
        case 2:
            iVar5 = func_02044644((s32) * (s16 *) (param_1 + 0x9c));
            iVar7 = *(s32 *) (param_1 + 0x214);
            func_021084a8(param_1, (s32 *) (param_1 + 0xbc));
            *(s32 *) (param_1 + 0xc0) = *(s32 *) (param_1 + 0xc0) + 0xfffffccd;
            func_0210835c(param_1, (u32 *) (param_1 + 200));
            {
                u8 *dstp         = (u8 *) iVar7 + 0x40;
                *(Twelve *) dstp = *(Twelve *) (param_1 + 0xc8);
            }
            if (iVar5 == 0) {
                break;
            }
            func_0210fdc8(param_1);
            iVar9 = *(s32 *) (param_1 + 0x214);
            func_02044644((s32) * (s16 *) (param_1 + 0x9c));
            iVar3 = (s32) * (s16 *) (data_02153720 + 0x86);
            iVar8 = (s32) * (s16 *) (data_02153720 + 0x88);
            if (iVar3 > 0) {
                iVar5 = iVar3;
            } else {
                iVar5 = -iVar3;
            }
            if (iVar5 >= 2) {
                goto call18;
            }
            if (iVar8 > 0) {
                iVar5 = iVar8;
            } else {
                iVar5 = -iVar8;
            }
            if (iVar5 < 2) {
                sVar1 = *(u16 *) (iVar9 + 0x18);
                goto store18;
            }
        call18:
            sVar1 = func_02069878(iVar8, iVar3);
        store18:
            *(s16 *) (iVar7 + 0x18) = sVar1;
            break;
        case 3:
            func_020d0e20(param_1);
            break;
        case 1:
            func_020d0b38(param_1);
            break;
        case 4:
            *(Six *) local_80 = *(Six *) data_021446e0;
            func_02112344(param_1, func_020d0ac4, local_80);
            iVar7                = *(s32 *) (param_1 + 0x214);
            *(Eleven *) local_68 = *(Eleven *) data_02144724;
            uVar10               = _s32_div_f(*(u32 *) (iVar7 + 4), *(u32 *) (iVar7 + 8));
            iVar5                = local_68[(s32) uVar10];
            iVar3                = *(s32 *) (iVar7 + 4) - iVar5;
            *(s32 *) (iVar7 + 4) = iVar3;
            if (*(s32 *) (iVar7 + 4) < 0x78000) {
                *(s16 *) (param_1 + 0xa6) = 1;
            }
            if (*(s32 *) (iVar7 + 4) < 0) {
                *(s32 *) ((u8 *) iVar7 + 4) = 0;
                *(s16 *) (param_1 + 0xa6)   = 2;
            }
            if (*(s32 *) (iVar7 + 4) > 0) {
                func_020ed87c(iVar5);
            } else {
                func_020ed87c(0);
            }
            break;
        case 5:
            func_021122b0(param_1, 0x1000);
            iVar7                = *(s32 *) (param_1 + 0x214);
            *(Eleven *) local_3c = *(Eleven *) data_02144724;
            uVar10               = _s32_div_f(*(u32 *) (iVar7 + 4), *(u32 *) (iVar7 + 8));
            iVar5                = local_3c[(s32) uVar10];
            iVar3                = *(s32 *) (iVar7 + 4) - iVar5;
            *(s32 *) (iVar7 + 4) = iVar3;
            if (*(s32 *) (iVar7 + 4) < 0x78000) {
                *(s16 *) (param_1 + 0xa6) = 1;
            }
            if (*(s32 *) (iVar7 + 4) < 0) {
                *(s32 *) ((u8 *) iVar7 + 4) = 0;
                *(s16 *) (param_1 + 0xa6)   = 2;
            }
            if (*(s32 *) (iVar7 + 4) > 0) {
                func_020ed87c(iVar5);
            } else {
                func_020ed87c(0);
            }
            break;
        case 8:
            func_021121c4(param_1);
            break;
        case 0:
            break;
    }
    iVar8                                    = *(s32 *) (param_1 + 0x214);
    uVar10                                   = _s32_div_f(*(u32 *) (iVar8 + 4), *(u32 *) (iVar8 + 8));
    iVar7                                    = (s32) (uVar10 >> 32);
    iVar5                                    = 0;
    *(s32 *) (*(s32 *) (iVar8 + 0xa4) + 0xc) = iVar7;
    if (*(s16 *) (param_1 + 0x90) != 2 && *(s16 *) (param_1 + 0x90) != 3) {
        iVar5 = iVar7 * 8;
        if (iVar5 >= *(s32 *) (iVar8 + 8)) {
            do {
                iVar5 = iVar5 - *(s32 *) (iVar8 + 8);
            } while (iVar5 >= *(s32 *) (iVar8 + 8));
        }
    }
    *(s32 *) (*(s32 *) (iVar8 + 0xa0) + 0xc) = iVar5;
}
