/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0210893c from projets/nintendogs-chihuahua-friends/src/donor/func_0210893c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
extern u32 data_02148b18[];
extern s32 func_01ffda04(s32 a);
extern u16 func_020280e0(s32 a);
extern void func_02027630(s32 a, s32 *b);
extern void func_02027534(s32 a, s32 *b);
extern s32 func_020280f8(s32 a);
extern void func_01ff832c(s32 a, s32 *b, s32 *c, s32 *d);
extern s32 func_02034b3c(s32 a);
extern void func_02069668(s32 *a, s32 *b, s32 *c);
extern s32 func_02111d04(s32 a, s32 b, s32 c);
extern void func_02111378(s32 a, s32 *b, s32 c, s32 d, s32 e);
extern s32 func_021100d0(s32 a, s32 *b, s32 *c, s32 d, s32 *e);
extern void func_0211109c(s32 a, s32 *b, s32 *c, s32 d, s32 e, s32 f);
typedef struct {
    s32 e8[2];
    s32 e0;
    s32 dc[6];
    s32 c4;
    s32 padA;
    s32 bc;
    s32 padB[3];
    s32 ac[18];
    s32 a64[3];
    s32 a58[6];
    s32 l40;
    s32 l3c;
    s32 l38;
    s32 padC[3];
    s32 l28;
    s32 l24;
    s32 l20;
    s32 padD;
} Frame;
static inline s32 mulr(s32 k, s32 x) {
    s64 v = (s64) k * (s64) x + 0x800;
    return (s32) (u32) (v >> 12);
}
void func_0210893c(s32 param_1) {
    s32 iVar3;
    s32 iVar4;
    s32 iVar5;
    s32 iVar7;
    s32 c4v;
    s32 bcv;
    s32 t1;
    s32 t2;
    s32 *pa;
    Frame F;

    iVar3 = func_01ffda04((s32) * (s16 *) (param_1 + 0x98));
    iVar5 = *(s32 *) (param_1 + 0x128);
    iVar7 = (s32) data_02148b18 + func_020280e0(iVar3) * 8;
    func_02027630(iVar3, F.a64);
    func_02027534(iVar3, F.a58);
    F.l28 = F.l40;
    F.l24 = F.l3c;
    F.l20 = F.l38;
    iVar4 = func_020280f8(iVar3);
    func_01ff832c(iVar5 + mulr(*(s32 *) (iVar7 + 4), iVar4), &F.l28, F.a64, F.e8);
    iVar4 = func_02034b3c(iVar3);
    if (iVar4 != 0) {
        func_02027534(iVar3, F.dc);
        c4v                       = F.c4;
        bcv                       = F.bc;
        *(s32 *) (param_1 + 0xb4) = 0xcd;
        t1                        = mulr(c4v, 0xcd);
        t2                        = mulr(bcv, 0xcd);
        *(s32 *) (param_1 + 0xb0) = t1;
        *(s32 *) (param_1 + 0xb8) = t2;
    }
    *(s32 *) (param_1 + 0xb4) = *(s32 *) (param_1 + 0xb4) - 0x52;
    *(s32 *) (param_1 + 0xb0) = *(s32 *) (param_1 + 0xb0) + mulr(0x333, F.e8[0] - *(s32 *) (param_1 + 0xbc));
    *(s32 *) (param_1 + 0xb8) = *(s32 *) (param_1 + 0xb8) + mulr(0x333, F.e0 - *(s32 *) (param_1 + 0xc4));
    func_02069668((s32 *) (param_1 + 0xbc), (s32 *) (param_1 + 0xb0), (s32 *) (param_1 + 0xbc));
    if (*(s32 *) (param_1 + 0x168) == 1) {
        pa    = F.ac;
        pa[0] = 0;
        pa[1] = 0;
        pa[2] = 0;
        iVar3 = func_02111d04(param_1 + 0xbc, *(s32 *) (param_1 + 0xf8), (s32) pa);
        if (iVar3 != 0) {
            func_02111378(param_1, F.ac, 0x333, 0x99a, -1);
        }
        return;
    }
    pa    = F.ac + 3;
    pa[0] = 0;
    pa[1] = 0;
    pa[2] = 0;
    iVar3 = func_021100d0(param_1, (s32 *) (param_1 + 0xfc), (s32 *) (param_1 + 0x108), (s32) pa, F.ac + 6);
    if (iVar3 != 0) {
        func_0211109c(param_1, F.ac + 3, F.ac + 6, 0x333, 0x99a, -1);
    }
}
