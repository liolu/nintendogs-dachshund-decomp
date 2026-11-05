/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0210d154 from projets/nintendogs-shiba-friends/src/donor/func_0210d154.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
extern s16 data_0215608c;
extern s16 data_02156090;
extern s32 data_02148c8c;
extern s32 data_02148c88;
extern s32 data_02148c84;
extern s32 data_021560a0;
extern s32 data_0215609c;
extern s32 data_02148c3c;
extern s32 data_02148c40;
extern s32 data_02148c74;
extern s16 data_02124ae0[];
extern u32 func_0206902c(s32 a);
extern s32 func_02069430(s32 *p);
extern void func_02069668(s32 *a, s32 *b, s32 *c);
extern s32 func_02069098(s32 a, s32 b);
extern void func_020069bc(s32 *a, s32 *b);
extern void func_02069504(s32 *a, s32 *b, s32 *c);
extern void func_02068a88(s32 *a, s32 *b, s32 a2, s32 a3);
extern void func_01ff832c(s32 a, s32 *b, s32 *c, s32 *d);
extern void func_01ff810c(s32 *a, s32 *b, s32 *c);
void func_0210d15c(u8 *param_1) {
    u8 *pp;
    s32 *puVar11;
    s32 l78[3];
    s32 v1[3];
    s32 v2[3];
    s32 v3[3];
    s32 auStack_48[12];
    s64 pq;

    pp                   = param_1;
    puVar11              = *(s32 **) (pp + 0x214);
    *(s32 *) (pp + 0xb4) = *(s32 *) (pp + 0xb4) + puVar11[3];
    if (data_0215608c == 0) {
        s64 w5;
        s32 iVar6;
        s32 uVar5;
        s32 uVar9;
        s32 uVar10;
        s32 k5;
        s32 iVar7;
        s32 iVar8;
        s32 fx10;
        s32 t2;
        s32 t1;
        s32 t0;

        uVar5 = func_0206902c(((s32) ((((s64) (*(s32 *) (pp + 0xb0))) * (s64) (*(s32 *) (pp + 0xb0)) + 0x800) >> 12)) +
                              ((s32) ((((s64) (*(s32 *) (pp + 0xb8))) * (s64) (*(s32 *) (pp + 0xb8)) + 0x800) >> 12)));
        if (uVar5 <= 0) {
            uVar5 = -uVar5;
        }
        uVar9 = ((s32) ((((s64) (data_02148c8c)) * (s64) (uVar5) + 0x800) >> 12));
        if (uVar9 > data_02148c88) {
            uVar9 = data_02148c88;
        }
        uVar10               = *(s32 *) (pp + 0xd8);
        w5                   = uVar5;
        fx10                 = ((s32) ((((s64) (uVar10)) * (s64) (0x1000) + 0x800) >> 12));
        *(s32 *) (pp + 0xb4) = *(s32 *) (pp + 0xb4) + ((s32) ((((s64) (fx10)) * (s64) (uVar9) + 0x800) >> 12));
        iVar6                = func_02069430((s32 *) (pp + 0xb0));
        t2                   = *(s32 *) (pp + 0xdc);
        k5                   = (s32) (((s64) data_02148c84 * w5 + 0x800) >> 12);
        t1                   = *(s32 *) (pp + 0xd8);
        t0                   = *(s32 *) (pp + 0xd4);
        l78[0]               = t0;
        l78[1]               = t1;
        l78[2]               = t2;
        l78[1]               = 0;
        l78[0]               = ((s32) ((((s64) (l78[0])) * (s64) (k5) + 0x800) >> 12));
        l78[1]               = ((s32) ((((s64) (l78[1])) * (s64) (k5) + 0x800) >> 12));
        l78[2]               = ((s32) ((((s64) (t2)) * (s64) (k5) + 0x800) >> 12));
        func_02069668((s32 *) (pp + 0xb0), l78, (s32 *) (pp + 0xb0));
        iVar7 = func_02069430((s32 *) (pp + 0xb0));
        if (iVar7 > iVar6) {
            iVar8 = func_02069430(l78);
            iVar6 = iVar6 - (iVar8 * 20) / 100;
            if (iVar6 < 0) {
                iVar6 = 0;
            }
            iVar7                = func_02069098(iVar6, iVar7);
            *(s32 *) (pp + 0xb0) = ((s32) ((((s64) (*(s32 *) (pp + 0xb0))) * (s64) (iVar7) + 0x800) >> 12));
            *(s32 *) (pp + 0xb4) = ((s32) ((((s64) (*(s32 *) (pp + 0xb4))) * (s64) (iVar7) + 0x800) >> 12));
            *(s32 *) (pp + 0xb8) = ((s32) ((((s64) (*(s32 *) (pp + 0xb8))) * (s64) (iVar7) + 0x800) >> 12));
        }
    }
    if (data_02156090 == 0) {
        puVar11[0] = puVar11[0] + ((s32) ((((s64) (-data_021560a0)) * (s64) (puVar11[0]) + 0x800) >> 12));
        *(s32 *) (pp + 0xb0) =
            *(s32 *) (pp + 0xb0) + ((s32) ((((s64) (-data_0215609c)) * (s64) (*(s32 *) (pp + 0xb0)) + 0x800) >> 12));
        *(s32 *) (pp + 0xb8) =
            *(s32 *) (pp + 0xb8) + ((s32) ((((s64) (-data_0215609c)) * (s64) (*(s32 *) (pp + 0xb8)) + 0x800) >> 12));
        if (*(s32 *) (pp + 0xb4) < 0) {
            *(s32 *) (pp + 0xb4) =
                *(s32 *) (pp + 0xb4) + ((s32) ((((s64) (-data_02148c3c)) * (s64) (*(s32 *) (pp + 0xb4)) + 0x800) >> 12));
        } else {
            *(s32 *) (pp + 0xb4) =
                *(s32 *) (pp + 0xb4) + ((s32) ((((s64) (-data_02148c40)) * (s64) (*(s32 *) (pp + 0xb4)) + 0x800) >> 12));
        }
    }
    func_02069668((s32 *) (pp + 0xbc), (s32 *) (pp + 0xb0), (s32 *) (pp + 0xbc));
    {
        s32 t2 = *(s32 *) (pp + 0xdc);
        s32 t1 = *(s32 *) (pp + 0xd8);
        s32 t0 = *(s32 *) (pp + 0xd4);
        v1[0]  = t0;
        v1[1]  = t1;
        v1[2]  = t2;
    }
    func_01ff832c(-data_02148c74, (s32 *) (pp + 0xb0), v1, v1);
    func_020069bc(v1, v1);
    {
        s32 iVar7;
        s32 iVar6;
        s32 v11;

        iVar7 = func_0206902c(((s32) ((((s64) (v1[0])) * (s64) (v1[0]) + 0x800) >> 12)) +
                              ((s32) ((((s64) (v1[2])) * (s64) (v1[2]) + 0x800) >> 12)));
        v11   = v1[1];
        if (iVar7 > 409) {
            iVar6 = func_02069098(v11, iVar7);
            if (iVar6 < puVar11[1]) {
                v1[1] = ((s32) ((((s64) (iVar7)) * (s64) (puVar11[1]) + 0x800) >> 12));
                func_020069bc(v1, v1);
            }
        }
    }
    {
        s32 a2 = *(s32 *) (pp + 0xd0);
        s32 a1 = *(s32 *) (pp + 0xcc);
        s32 a0 = *(s32 *) (pp + 0xc8);
        v2[0]  = a0;
        v2[1]  = a1;
        v2[2]  = a2;
    }
    {
        s32 b2 = *(s32 *) (pp + 0xe8);
        s32 b1 = *(s32 *) (pp + 0xe4);
        s32 b0 = *(s32 *) (pp + 0xe0);
        v3[0]  = b0;
        v3[1]  = b1;
        v3[2]  = b2;
    }
    func_02069504(v2, v1, v3);
    func_020069bc(v3, v3);
    func_02069504(v1, v3, v2);
    func_020069bc(v2, v2);
    *(s32 *) (pp + 0xc8) = v2[0];
    *(s32 *) (pp + 0xcc) = v2[1];
    *(s32 *) (pp + 0xd0) = v2[2];
    *(s32 *) (pp + 0xd4) = v1[0];
    *(s32 *) (pp + 0xd8) = v1[1];
    *(s32 *) (pp + 0xdc) = v1[2];
    *(s32 *) (pp + 0xe0) = v3[0];
    *(s32 *) (pp + 0xe4) = v3[1];
    *(s32 *) (pp + 0xe8) = v3[2];
    {
        s32 iVar7;

        pq    = (s64) puVar11[0] * 0x28be60db9391LL + ((s64) 0x800 << 32);
        iVar7 = (s32) (((u32) (s32) (u32) (pq >> 32) << 4) >> 16) >> 4;
        func_02068a88(auStack_48, v1, data_02124ae0[iVar7 * 2], data_02124ae0[iVar7 * 2 + 1]);
    }
    func_01ff810c((s32 *) (pp + 0xc8), auStack_48, (s32 *) (pp + 0xc8));
}
