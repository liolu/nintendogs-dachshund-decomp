/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0208ea24 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0208ea24.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
extern s16 data_02124ae0[];
extern u8 *func_02003844(u8 *p, s32 n);
extern void func_020c4818(u8 *p);
extern void func_020c4eac(u8 *p, u32 f);
extern void func_020c44d0(void);
extern void func_02069634(u8 *a, u8 *b, u8 *c);
extern void func_020069bc(u8 *a, u8 *b);
extern void func_02069504(u8 *a, u8 *b, u8 *c);
u8 *func_020c438c(u8 *param_1) {
    u8 *puVar3;
    s32 t1;
    s32 t2;
    s32 t3;
    s32 t4;
    s32 uVar4;
    s32 k;
    s32 m;
    s32 v7c;

    puVar3 = func_02003844(param_1, 0x84);
    func_020c4818(puVar3);
    func_020c4eac(puVar3, (u32) func_020c44d0);
    *(s32 *) (puVar3 + 0x7c) = 0x5000;
    *(u16 *) (puVar3 + 0x80) = 0x600;
    *(u16 *) (puVar3 + 0x82) = 0;
    k                        = (*(u16 *) (puVar3 + 0x80) >> 4) * 2;
    m                        = (*(u16 *) (puVar3 + 0x82) >> 4) * 2;
    t1                       = data_02124ae0[k + 1];
    t2                       = data_02124ae0[m];
    v7c                      = *(s32 *) (puVar3 + 0x7c);
    uVar4                    = ((s32) (((s64) (v7c) * (s64) (t1) + 0x800) >> 12));
    *(s32 *) (puVar3 + 0x30) = *(s32 *) (puVar3 + 0x3c) + ((s32) (((s64) (uVar4) * (s64) (t2) + 0x800) >> 12));
    t3                       = data_02124ae0[k];
    *(s32 *) (puVar3 + 0x34) = *(s32 *) (puVar3 + 0x40) + ((s32) (((s64) (v7c) * (s64) (t3) + 0x800) >> 12));
    t4                       = data_02124ae0[m + 1];
    *(s32 *) (puVar3 + 0x38) = *(s32 *) (puVar3 + 0x44) + ((s32) (((s64) (uVar4) * (s64) (t4) + 0x800) >> 12));
    func_02069634(puVar3 + 0x3c, puVar3 + 0x30, puVar3 + 0x48);
    func_020069bc(puVar3 + 0x48, puVar3 + 0x48);
    func_02069504(puVar3 + 0x54, puVar3 + 0x48, puVar3 + 0x60);
    func_020069bc(puVar3 + 0x60, puVar3 + 0x60);
    return puVar3;
}
