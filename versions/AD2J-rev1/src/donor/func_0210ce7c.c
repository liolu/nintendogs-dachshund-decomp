/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0210ce74 from projets/nintendogs-shiba-friends/src/donor/func_0210ce74.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
extern s32 data_02148cac;
extern s16 data_02156090;
extern s32 data_021560a0;
extern s32 data_0215609c;
extern s32 data_02148c74;
extern s16 data_02124ae0[];
extern void func_02069668(s32 *a, s32 *b, s32 *c);
extern void func_01ff832c(s32 a, s32 *b, s32 *c, s32 *d);
extern void func_020069bc(s32 *a, s32 *b);
extern s32 func_0206902c(s32 a);
extern s32 func_02069098(s32 a, s32 b);
extern void func_02069504(s32 *a, s32 *b, s32 *c);
extern void func_02068a88(s32 *a, s32 *b, s32 c, s32 d);
extern void func_01ff810c(s32 *a, s32 *b, s32 *c);
void func_0210ce7c(u8 *param_1) {
    s32 *puVar8;
    s32 t0[3];
    s32 t1[3];
    s32 t2[3];
    s32 t3[13];
    s32 iv6;
    s32 iv7;
    s32 idx;
    s32 a6;
    s32 a7;
    s32 a8;
    s32 x3;
    s32 x2;
    s32 x1;
    s32 y7;
    s32 y6;
    s32 y3;
    s32 t01;

    puVar8                    = *(s32 **) (param_1 + 0x214);
    *(s32 *) (param_1 + 0xb4) = *(s32 *) (param_1 + 0xb4) + data_02148cac;
    if (data_02156090 == 0) {
        puVar8[0] = puVar8[0] + ((s32) (((s64) (-data_021560a0) * (puVar8[0]) + 0x800) >> 12));
        *(s32 *) (param_1 + 0xb0) =
            *(s32 *) (param_1 + 0xb0) + ((s32) (((s64) (-data_0215609c) * (*(s32 *) (param_1 + 0xb0)) + 0x800) >> 12));
        *(s32 *) (param_1 + 0xb8) =
            *(s32 *) (param_1 + 0xb8) + ((s32) (((s64) (-data_0215609c) * (*(s32 *) (param_1 + 0xb8)) + 0x800) >> 12));
    }
    func_02069668((s32 *) (param_1 + 0xbc), (s32 *) (param_1 + 0xb0), (s32 *) (param_1 + 0xbc));
    a8    = *(s32 *) (param_1 + 0xdc);
    a7    = *(s32 *) (param_1 + 0xd8);
    a6    = *(s32 *) (param_1 + 0xd4);
    t0[0] = a6;
    t0[1] = a7;
    t0[2] = a8;
    func_01ff832c(-data_02148c74, (s32 *) (param_1 + 0xb0), t0, t0);
    func_020069bc(t0, t0);
    iv6 = func_0206902c(((s32) (((s64) (t0[0]) * (t0[0]) + 0x800) >> 12)) + ((s32) (((s64) (t0[2]) * (t0[2]) + 0x800) >> 12)));
    t01 = t0[1];
    if (iv6 > 409) {
        iv7 = func_02069098(t01, iv6);
        if (iv7 < puVar8[1]) {
            t0[1] = ((s32) (((s64) (iv6) * (puVar8[1]) + 0x800) >> 12));
            func_020069bc(t0, t0);
        }
    }
    x3    = *(s32 *) (param_1 + 0xd0);
    x2    = *(s32 *) (param_1 + 0xcc);
    x1    = *(s32 *) (param_1 + 0xc8);
    t1[0] = x1;
    t1[1] = x2;
    t1[2] = x3;
    y7    = *(s32 *) (param_1 + 0xe8);
    y6    = *(s32 *) (param_1 + 0xe4);
    y3    = *(s32 *) (param_1 + 0xe0);
    t2[0] = y3;
    t2[1] = y6;
    t2[2] = y7;
    func_02069504(t1, t0, t2);
    func_020069bc(t2, t2);
    func_02069504(t0, t2, t1);
    func_020069bc(t1, t1);
    *(s32 *) (param_1 + 0xc8) = t1[0];
    *(s32 *) (param_1 + 0xcc) = t1[1];
    *(s32 *) (param_1 + 0xd0) = t1[2];
    *(s32 *) (param_1 + 0xd4) = t0[0];
    *(s32 *) (param_1 + 0xd8) = t0[1];
    *(s32 *) (param_1 + 0xdc) = t0[2];
    *(s32 *) (param_1 + 0xe0) = t2[0];
    *(s32 *) (param_1 + 0xe4) = t2[1];
    *(s32 *) (param_1 + 0xe8) = t2[2];
    idx = (s32) (((u32) ((s32) (((s64) puVar8[0] * 0x28be60db9391LL + ((s64) 0x800 << 32)) >> 32)) << 4) >> 16);
    idx = idx >> 4;
    func_02068a88(t3, t0, data_02124ae0[idx * 2], data_02124ae0[idx * 2 + 1]);
    func_01ff810c((s32 *) (param_1 + 200), t3, (s32 *) (param_1 + 200));
}
