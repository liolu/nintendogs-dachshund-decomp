/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020eed7c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020eed7c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef struct {
    u32 w[3];
} T3;
extern u32 data_02150330;
extern u32 data_02153720;
extern u32 data_021245cc;
extern void func_02044644(s32 a);
extern void func_02069668(s32 *a, s32 *b, s32 *c);
extern void func_02069634(s32 *a, s32 *b, s32 *c);
extern void func_02069504(s32 *a, s32 *b, s32 *c);
extern void func_020069bc(s32 *a, s32 *b);
void func_020dca1c(u8 *param_1, u32 *param_2) {
    s32 st[12];
    u8 *o;
    s64 sum;
    s64 lim;
    s32 i;

    func_02044644((s16) * (s16 *) (param_1 + 0x9c));
    st[0]          = *(s32 *) ((u8 *) &data_02150330 + 0x4c);
    st[1]          = *(s32 *) ((u8 *) &data_02150330 + 0x58);
    st[2]          = *(s32 *) ((u8 *) &data_02150330 + 0x64);
    st[0]          = st[0] >> 2;
    st[1]          = st[1] >> 2;
    st[2]          = st[2] >> 2;
    o              = *(u8 **) (*(u8 **) &data_02153720 + 0x1c);
    *(T3 *) &st[6] = *(T3 *) (o + 0x48);
    st[9]          = st[6] >> 2;
    st[10]         = st[7] >> 2;
    st[11]         = st[8] >> 1;
    func_02069668(&st[6], &st[0], &st[6]);
    lim = *(s64 *) &data_021245cc;
    sum = (s64) st[6] * st[6] + (s64) st[7] * st[7] + (s64) st[8] * st[8];
    if (sum >= lim) {
        func_020069bc(&st[6], &st[6]);
    }
    st[3] = 0;
    st[5] = 0;
    st[4] = 0x1000;
    func_02069634(&st[3], &st[9], &st[3]);
    sum = (s64) st[3] * st[3] + (s64) st[4] * st[4] + (s64) st[5] * st[5];
    if (sum >= lim) {
        func_020069bc(&st[3], &st[3]);
    }
    func_02069504(&st[3], &st[6], &st[0]);
    func_02069504(&st[0], &st[3], &st[6]);
    param_2[0] = st[0];
    param_2[1] = st[1];
    param_2[2] = st[2];
    param_2[3] = st[3];
    param_2[4] = st[4];
    param_2[5] = st[5];
    param_2[6] = st[6];
    param_2[7] = st[7];
    param_2[8] = st[8];
}
