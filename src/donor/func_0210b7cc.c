/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c184c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020c184c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef struct {
    u32 w[12];
} T12;
typedef struct {
    s32 a;
    s32 b;
    s32 c;
} L3;
extern u8 data_027c0460[];
extern s32 func_01ffda04(s32 a);
extern s32 func_02034978(s32 a);
extern s32 func_02111ed0(s32 a, u8 *b, s32 c, s32 *d);
extern u32 func_0210b9dc(u32 a, u32 b);
extern void func_0210bb10(u8 *a, s32 *b);
extern s32 func_0210b9f8(u8 *a, s32 *b);
extern void func_0210bafc(u8 *a, s32 *b);
extern u32 func_02069098(u32 a, u32 b);
extern void func_020c5148(s32 a, u32 b);
void func_0210b7cc(u8 *param_1) {
    s32 iVar11 = *(s32 *) (param_1 + 0x214);
    s32 iVar10;
    s32 bVar1 = 0;
    s32 local_3c[6];
    s32 iVar3;
    s32 bVar2;
    u32 uVar4;
    s32 *piVar6;
    u32 iVar12;
    u32 v_c4;
    u32 v_bc;
    s32 iVar13;

    {
        L3 *q = (L3 *) local_3c;
        q->a  = 0;
        q->b  = bVar1;
        q->c  = bVar1;
    }
    iVar10 = 0;
    do {
        iVar3 = func_01ffda04(iVar10);
        if (iVar3 != 0 && (bVar2 = func_02034978(iVar3), bVar2 == 0)) {
            iVar3 = func_02111ed0(iVar3, param_1 + 0xbc, *(s32 *) (iVar11 + iVar10 * 4u + 0x14), local_3c);
            if (iVar3 != 0) {
                *(u32 *) (param_1 + 0x16c) = *(u32 *) (param_1 + 0x16c) | (1 << (iVar10 + 3));
                bVar1                      = 1;
            }
            uVar4 = func_0210b9dc(*(u32 *) (iVar11 + 0x10), 0x1000);
            {
                s32 *pa = (s32 *) iVar11 + iVar10;
                pa[5]   = pa[5] + 0x52;
                if (pa[5] > (s32) uVar4) {
                    pa[5] = uVar4;
                }
            }
        }
        iVar10 = (s16) (iVar10 + 1);
    } while (iVar10 < 3);
    if (bVar1 != 0) {
        local_3c[1] = 0;
        func_0210bb10(param_1, local_3c);
    }
    {
        s32 *p2 = &local_3c[3];
        p2[0]   = 0;
        p2[1]   = 0;
        p2[2]   = 0;
        iVar3   = func_0210b9f8(param_1 + 0xbc, p2);
    }
    if (iVar3 != 0) {
        func_0210bafc(param_1, &local_3c[3]);
    }
    piVar6 = *(s32 **) (param_1 + 0x214);
    iVar12 = piVar6[0];
    uVar4  = func_02069098(piVar6[2], piVar6[1]);
    iVar13 = (s32) ((((s64) (s32) uVar4 * 0xb33) + 0x800) >> 12) + 0x4cd;
    if (iVar13 <= 0x4cd) {
        *(u16 *) (iVar12 + 0x20) = *(u16 *) (iVar12 + 0x20) | 1;
    } else {
        *(u16 *) (iVar12 + 0x20) = *(u16 *) (iVar12 + 0x20) & ~1;
    }
    v_c4                     = *(u32 *) (param_1 + 0xc4);
    v_bc                     = *(u32 *) (param_1 + 0xbc);
    *(u32 *) (iVar12 + 0x30) = v_bc;
    *(u32 *) (iVar12 + 0x34) = 0xfffffe66;
    *(u32 *) (iVar12 + 0x38) = v_c4;
    *(s32 *) (iVar12 + 0x28) = iVar13;
    *(T12 *) (iVar12 + 0x3c) = *(T12 *) (param_1 + 0xc8);
    if (iVar12 == 0) {
        return;
    }
    func_020c5148(iVar12, (u16) (data_027c0460[0] | (data_027c0460[1] << 5) | (data_027c0460[2] << 10)));
}
