/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020cd4d8 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020cd4d8.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef struct {
    s32 w[3];
} T3;
extern s32 data_0214907c;
extern s32 data_02148f48;
extern s32 data_02149078;
extern s32 func_02112b88(void *a);
extern void func_020069bc(void *a, void *b);
extern void func_01ff832c(s32 a, void *b, void *c, void *d);
extern void func_02027630(s32 a, void *b);
extern void func_02027518(s32 a, void *b);
extern s32 func_01ffda04(s32 a);
extern s32 func_02112a3c(s32 a);
extern s32 func_020695f0(void *a, void *b);
extern void func_02069634(void *a, void *b, void *c);
extern void func_02069668(void *a, void *b, void *c);
extern void func_02069504(void *a, void *b, void *c);
extern s32 func_02069098(u32 a, u32 b);
extern void func_02112a84(void *a, void *b, void *c, void *d, void *e);
extern void func_0211299c(s32 a, void *b);
extern void func_02116f50(void *a, void *b, void *c, void *d, void *e);
extern s16 func_02069a4c(s32 a);
extern s32 func_02069430(void *a);
void func_021169bc(s32 *param_1, s32 *param_2, u32 param_3) {
    s32 iVar4;
    s32 iVar10;
    u32 uVar5;
    u32 uVar6;
    s32 uVar7;
    s16 sVar2;
    s32 iVar3;
    s16 h0;
    s16 h1;
    s16 h2;
    s16 h3;
    T3 v0;
    T3 v1;
    T3 v2;
    T3 v3;
    T3 v4;
    T3 v5;
    T3 v6;
    T3 v7;
    T3 v8;
    T3 v9;
    T3 v10;
    T3 v11;
    T3 v12;
    T3 v13;
    T3 v14;
    T3 v15;
    T3 v16;
    T3 v17;
    T3 v18;
    T3 v19;
    T3 v20;
    T3 v21;
    T3 v22;
    T3 v23;

    iVar3 = func_02112b88(&v0);
    if (iVar3 == 0) {
        *(T3 *) param_1 = *(T3 *) param_2;
        v22.w[0]        = -param_1[0];
        v22.w[1]        = 0;
        v22.w[2]        = -param_1[2];
        iVar3           = data_0214907c;
        func_020069bc(&v22, &v22);
        v23.w[0] = param_1[0];
        v23.w[1] = 0;
        v23.w[2] = param_1[2];
        func_01ff832c(iVar3, &v22, &v23, param_1 + 3);
        param_1[6] = 0;
        param_1[7] = 0x1000;
        param_1[8] = 0;
        param_1[9] = data_02148f48;
        return;
    }
    v4 = *(T3 *) param_2;
    func_02116f50(&v3, &v2, &v1, &v4, &v0);
    func_02112a84(&h0, &h1, &v4, &v1, &v3);
    iVar10 = func_01ffda04(h0);
    func_02027630(iVar10, &v5);
    iVar10 = func_01ffda04(h1);
    func_02027630(iVar10, &v6);
    iVar10 = func_01ffda04(h0);
    iVar4  = func_01ffda04(h1);
    func_02027518(iVar10, &v11);
    func_02027518(iVar4, &v12);
    uVar5 = func_02112a3c(h0);
    func_01ff832c(-(uVar5 + 0x2000), &v3, &v5, &v5);
    uVar5 = func_02112a3c(h1);
    func_01ff832c(uVar5 + 0x2000, &v3, &v6, &v6);
    uVar5 = func_020695f0(&v11, &v3);
    func_01ff832c(uVar5 * 0x1e, &v3, &v5, &v5);
    uVar5 = func_020695f0(&v12, &v3);
    func_01ff832c(uVar5 * 0x1e, &v3, &v6, &v6);
    func_02069634(&v5, &v4, &v7);
    func_02069634(&v6, &v4, &v8);
    v9  = v7;
    v10 = v8;
    func_020069bc(&v9, &v9);
    func_020069bc(&v10, &v10);
    func_02069668(&v9, &v10, &v13);
    func_020069bc(&v13, &v13);
    func_02069504(&v2, &v13, &v3);
    func_020069bc(&v3, &v3);
    func_02069504(&v3, &v2, &v1);
    uVar6 = func_020695f0(&v7, &v1);
    uVar5 = func_020695f0(&v7, &v3);
    if ((s32) uVar5 <= 0) {
        uVar5 = -uVar5;
    }
    uVar7 = func_02069098(uVar5, uVar6);
    func_02112a84(&h2, &h3, &v4, &v1, &v2);
    iVar10 = func_01ffda04(h2);
    func_0211299c(iVar10, &v14);
    iVar10 = func_01ffda04(h3);
    func_0211299c(iVar10, &v15);
    uVar5 = func_02112a3c(h2);
    func_01ff832c(-uVar5, &v2, &v14, &v14);
    uVar5 = func_02112a3c(h3);
    func_01ff832c(uVar5, &v2, &v15, &v15);
    func_02069634(&v14, &v4, &v16);
    func_02069634(&v15, &v4, &v17);
    v18 = v16;
    v19 = v17;
    func_020069bc(&v18, &v18);
    func_020069bc(&v19, &v19);
    func_02069668(&v18, &v19, &v20);
    func_020069bc(&v20, &v20);
    func_02069504(&v20, &v3, &v2);
    func_020069bc(&v2, &v2);
    func_02069504(&v3, &v2, &v1);
    uVar6 = func_020695f0(&v16, &v1);
    uVar5 = func_020695f0(&v16, &v2);
    if ((s32) uVar5 <= 0) {
        uVar5 = -uVar5;
    }
    iVar4 = func_02069098(uVar5, uVar6);
    func_02069634(&v0, &v4, &v21);
    iVar10 = func_02069430(&v21);
    func_01ff832c(iVar10, &v1, &v4, &v0);
    iVar10 = func_02069098(uVar7, param_3);
    if (iVar10 < iVar4) {
        iVar10 = iVar4;
    }
    sVar2      = func_02069a4c(iVar10);
    param_1[9] = (s32) ((((s64) sVar2) * 0x1680000 + 0x80000) >> 20);
    if (iVar3 == 1) {
        param_1[9] = data_02149078;
    }
    *(T3 *) param_1       = v4;
    *(T3 *) (param_1 + 3) = v0;
    param_1[6]            = 0;
    param_1[7]            = 0x1000;
    param_1[8]            = 0;
}
