/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02116308 from projets/nintendogs-chihuahua-friends/src/donor/func_02116308.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed int s32;
typedef signed long long s64;
typedef struct {
    s32 v[3];
} Vec3;
extern s32 func_02112b90(Vec3 *out);
extern void func_02069668(Vec3 *a, Vec3 *b, Vec3 *out);
extern void func_02116f58(Vec3 *a, Vec3 *b, Vec3 *c, Vec3 *p, Vec3 *v);
extern void func_021166d4(Vec3 *a, Vec3 *b, Vec3 *p, Vec3 *q, Vec3 *d, s32 flag);
extern void func_02069634(Vec3 *a, Vec3 *b, Vec3 *out);
extern void func_020069bc(Vec3 *a, Vec3 *out);
extern void func_02069504(Vec3 *a, Vec3 *b, Vec3 *out);
extern s32 func_020695f0(Vec3 *a, Vec3 *b);
extern s32 func_02069098(s32 a, s32 b);
extern s32 func_02069a4c(s32 x);
extern s32 func_02069430(Vec3 *v);
extern void func_01ff832c(s32 x, Vec3 *b, Vec3 *p, Vec3 *a);
extern s32 data_02149078;
extern s32 data_02149080;
void func_02116308(s32 *param_1, Vec3 *param_2, s32 param_3, s32 param_4) {
    Vec3 A, B, C, D, P, E, F, G, H, K, I, J, L, M, N, O, T, R, S, U;
    s32 r4, v1, v2, t, w, x, iv8;

    r4 = func_02112b90(&A);
    if (r4 == 0) {
        return;
    }
    if (param_4 != 0) {
        func_02069668((Vec3 *) (param_4 + 0xbc), &A, &A);
        A.v[0] = ((s32) ((((s64) (A.v[0])) * (0x800) + 0x800) >> 12));
        A.v[1] = ((s32) ((((s64) (A.v[1])) * (0x800) + 0x800) >> 12));
        A.v[2] = ((s32) ((((s64) (A.v[2])) * (0x800) + 0x800) >> 12));
    }
    P = *param_2;
    func_02116f58(&D, &C, &B, &P, &A);
    func_021166d4(&E, &F, &P, &B, &D, param_4);
    func_02069634(&E, &P, &G);
    func_02069634(&F, &P, &H);
    I = G;
    J = H;
    func_020069bc(&I, &I);
    func_020069bc(&J, &J);
    func_02069668(&I, &J, &K);
    func_020069bc(&K, &K);
    func_02069504(&C, &K, &D);
    func_020069bc(&D, &D);
    func_02069504(&D, &C, &B);
    v1 = func_020695f0(&G, &B);
    t  = func_020695f0(&G, &D);
    if (t <= 0) {
        t = -t;
    }
    v1 = func_02069098(t, v1);
    func_021166d4(&L, &M, &P, &B, &C, param_4);
    func_02069634(&L, &P, &N);
    func_02069634(&M, &P, &O);
    R = N;
    S = O;
    func_020069bc(&R, &R);
    func_020069bc(&S, &S);
    func_02069668(&R, &S, &T);
    func_020069bc(&T, &T);
    func_02069504(&T, &D, &C);
    func_020069bc(&C, &C);
    func_02069504(&D, &C, &B);
    w = func_020695f0(&N, &B);
    if (func_020695f0(&N, &C) > 0) {
        x = func_020695f0(&N, &C);
    } else {
        x = -func_020695f0(&N, &C);
    }
    v2 = func_02069098(x, w);
    func_02069634(&A, &P, &U);
    iv8 = func_02069430(&U);
    func_01ff832c(iv8, &B, &P, &A);
    iv8 = func_02069098(v1, param_3);
    if (iv8 < v2) {
        iv8 = v2;
    }
    param_1[9] = (s32) ((((s64) func_02069a4c(iv8)) * 0x1680000 + 0x80000) >> 20);
    if (r4 == 1 && param_4 == 0) {
        param_1[9] = data_02149078;
    } else if (param_1[9] > data_02149080) {
        param_1[9] = data_02149080;
    }
    *(Vec3 *) param_1       = P;
    *(Vec3 *) (param_1 + 3) = A;
    param_1[6]              = 0;
    param_1[7]              = 0x1000;
    param_1[8]              = 0;
}
