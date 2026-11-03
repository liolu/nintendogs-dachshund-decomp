/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c3970 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020c3970.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
extern u8 data_021245c4[];
extern u8 data_02124cd8[];
extern s32 func_01ffda04(s32 a);
extern void func_02027140(s32 a, u32 *b, s32 c);
extern void func_02069504(u32 *a, u32 *b, u32 *c);
extern void func_020069bc(u32 *a, u32 *b);
extern void func_02068a88(u32 *a, u32 *b, s32 c, s32 d);
extern void func_01ff810c(u32 *a, u32 *b, u32 *c);
extern void func_0210916c(u8 *p);
extern u8 *func_02027508(s32 a);
extern void func_020eae6c(u8 *a, s32 b);
extern void func_020ec298(u8 *a, s32 b);
void func_0210d780(u8 *param_1) {
    u32 L[37];
    s32 iVar2;
    u8 *iVar6;
    s64 lVar1;
    u32 t0;
    u32 t1;
    u32 t2;
    u32 t6;
    u32 t7;
    u32 t8;
    u8 *piVar3;

    iVar2 = func_01ffda04(*(s16 *) (param_1 + 0x98));
    iVar6 = *(u8 **) (param_1 + 0x214);
    func_02027140(iVar2, &L[9], 12);
    L[3] = L[12];
    L[4] = L[13];
    L[5] = L[14];
    t8   = *(u32 *) (param_1 + 0xe8);
    t7   = *(u32 *) (param_1 + 0xe4);
    t6   = *(u32 *) (param_1 + 0xe0);
    L[6] = t6;
    L[7] = t7;
    L[8] = t8;
    func_02069504(&L[3], &L[6], &L[0]);
    lVar1 = (s64) (s32) L[0] * (s64) (s32) L[0] + (s64) (s32) L[1] * (s64) (s32) L[1] + (s64) (s32) L[2] * (s64) (s32) L[2];
    if (lVar1 >= *(s64 *) data_021245c4) {
        func_020069bc(&L[0], &L[0]);
    }
    func_02069504(&L[0], &L[3], &L[6]);
    *(u32 *) (param_1 + 0xc8) = L[0];
    *(u32 *) (param_1 + 0xcc) = L[1];
    *(u32 *) (param_1 + 0xd0) = L[2];
    *(u32 *) (param_1 + 0xd4) = L[3];
    *(u32 *) (param_1 + 0xd8) = L[4];
    *(u32 *) (param_1 + 0xdc) = L[5];
    *(u32 *) (param_1 + 0xe0) = L[6];
    *(u32 *) (param_1 + 0xe4) = L[7];
    *(u32 *) (param_1 + 0xe8) = L[8];
    L[33]                     = L[15];
    L[34]                     = L[16];
    L[35]                     = L[17];
    func_02068a88(&L[21], &L[33], -(s32) * (s16 *) (data_02124cd8 + 0x80), (s32) * (s16 *) (data_02124cd8 + 0x82));
    func_01ff810c((u32 *) (param_1 + 200), &L[21], (u32 *) (param_1 + 200));
    func_0210916c(param_1);
    *(u16 *) (iVar6 + 8) = 2;
    piVar3               = func_02027508(iVar2);
    func_020eae6c(piVar3, 33);
    func_020ec298(param_1 + 400, 3);
}
