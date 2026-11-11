/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020835f8 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020835f8.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef volatile u32 vu32;
extern s16 data_02124ae0[];
extern void func_02068420(u32 *a, u8 *b, u32 *c);
extern void func_0206b8a4(u32 *m);
extern void func_0208755c(u8 a, u8 b);
typedef struct {
    u16 a : 5;
    u16 b : 5;
    u16 c : 6;
} Attr;
typedef struct {
    u32 f0 : 2;
    u32 f1 : 2;
    u32 rest : 28;
} Bits2;
void func_02086de0(u8 *param_1, u8 *param_2) {
    s16 sVar1;
    s64 lVar2, lVar3, lVar4, lVar5;
    u32 uVar8, uVar7, uSel;
    s32 iTop, iVar9, iVar11;
    u8 *piVar6;
    u32 st[15];

    sVar1 =
        *(s16 *) ((*(u8 **) ((u8 *) ((*(u8 **) ((u8 *) ((*(u8 **) ((u8 *) (param_1) + (0x34)))) + (0x18)))) + (0))) + 0x30);
    iTop                 = (s32) (((Attr *) (param_2 + 0x40))->a * (((Attr *) (param_2 + 0x40))->b + 1)) >> 5;
    piVar6               = (*(u8 **) ((u8 *) (param_1) + (0x38)));
    *(vu32 *) 0x040004a4 = ((Attr *) (param_2 + 0x40))->c << 24 | (*(u32 *) (param_1 + 0x30) | 0xc0) | iTop << 16;
    (void) *(vu32 *) 0x040004a4;
    if (iTop == 0) {
        return;
    }
    uVar7 = *(u32 *) (param_2 + 0x30);
    lVar2 = (s64) (s32) uVar7 * (s64) sVar1 + 0x800;
    uVar8 = (u32) (lVar2 >> 12);
    uSel =
        ((*(u32 *) ((*(u8 **) ((u8 *) ((*(u8 **) ((u8 *) ((*(u8 **) ((u8 *) (param_1) + (0x34)))) + (0x18)))) + (0))) + 0x44))
         << 1) >>
        29;
    if (uSel == 0) {
        goto c0;
    }
    if (uSel == 1) {
        goto c1;
    }
    if (uSel != 2) {
        goto end;
    }
    goto c2;
c0:
    iVar9 = (s32) * (s16 *) (param_2 + 0x34);
    lVar2 = (s64) (s32) uVar8 * (s64) iVar9 + 0x800;
    uVar8 = (u32) (lVar2 >> 12);
    lVar2 = (s64) (s32) uVar7 * (s64) iVar9 + 0x800;
    uVar7 = (u32) (lVar2 >> 12);
    goto end;
c1:
    lVar2 = (s64) (s32) uVar8 * (s64) * (s16 *) (param_2 + 0x34) + 0x800;
    uVar8 = (u32) (lVar2 >> 12);
    goto end;
c2:
    lVar2 = (s64) (s32) uVar7 * (s64) * (s16 *) (param_2 + 0x34) + 0x800;
    uVar7 = (u32) (lVar2 >> 12);
end:
    st[0] = *(u32 *) (param_2 + 0x14) + *(u32 *) (param_2 + 8);
    st[1] = *(u32 *) (param_2 + 0x18) + *(u32 *) (param_2 + 0xc);
    st[2] = *(u32 *) (param_2 + 0x1c) + *(u32 *) (param_2 + 0x10);
    func_02068420(st, piVar6, st);
    iTop                 = (s32) * (u16 *) (param_2 + 0x36) >> 4;
    iVar9                = data_02124ae0[iTop * 2];
    iVar11               = data_02124ae0[iTop * 2 + 1];
    lVar3                = (s64) iVar11 * (s64) (s32) uVar8 + 0x800;
    st[12]               = st[0];
    lVar2                = (s64) -iVar9 * (s64) (s32) uVar7 + 0x800;
    st[13]               = st[1];
    lVar5                = (s64) iVar9 * (s64) (s32) uVar8 + 0x800;
    lVar4                = (s64) iVar11 * (s64) (s32) uVar7 + 0x800;
    st[3]                = (u32) (lVar3 >> 12);
    st[6]                = (u32) (lVar2 >> 12);
    st[9]                = 0;
    st[4]                = (u32) (lVar5 >> 12);
    st[7]                = (u32) (lVar4 >> 12);
    st[10]               = 0;
    st[5]                = 0;
    st[8]                = 0;
    st[11]               = 0x1000;
    st[14]               = st[2];
    *(vu32 *) 0x04000454 = 0;
    func_0206b8a4(st + 3);
    *(vu32 *) 0x04000480 = (u16) (((s32) ((*(u16 *) (param_2 + 0x3a) & 0x1f) *
                                          ((uVar7 = *(u16 *) ((*(u8 **) ((u8 *) (param_1) + (0x34))) + 0x5a)) & 0x1f)) >>
                                   5) |
                                  (((s32) ((*(u16 *) (param_2 + 0x3a) & 0x3e0) * (uVar7 & 0x3e0)) >> 15) << 5) |
                                  (((s32) ((*(u16 *) (param_2 + 0x3a) & 0x7c00) * (uVar7 & 0x7c00)) >> 25) << 10));
    func_0208755c(
        (u8) ((Bits2 *) ((*(u8 **) ((u8 *) ((*(u8 **) ((u8 *) ((*(u8 **) ((u8 *) (param_1) + (0x34)))) + (0x18)))) + (0x14))) +
                         0x10))
            ->f0,
        (u8) ((Bits2 *) ((*(u8 **) ((u8 *) ((*(u8 **) ((u8 *) ((*(u8 **) ((u8 *) (param_1) + (0x34)))) + (0x18)))) + (0x14))) +
                         0x10))
            ->f1);
}
