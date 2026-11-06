/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0210a3ac from projets/nintendogs-chihuahua-friends/src/donor/func_0210a3ac.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern s32 func_02044644(s32 a);
extern s32 func_01ffda04(s32 a);
extern void func_02108e48(u8 *p, s32 a, s32 *b);
extern void func_0210aabc(u8 *p, s32 *a, s32 *b);
extern void func_0210a8d0(u8 *p);
extern void func_0210a700(u8 *p);
extern void func_0211c8e8(u8 *p, u32 i, s32 *out);
extern s32 func_02092d80(s32 g, s32 *p, s32 v);
extern u32 func_0210fc0c(u8 *p, u32 a);
extern u32 func_02033dbc(s32 a);
extern u32 func_0210fd98(u8 *p);
u32 func_0210a3ac(u8 *p) {
    u8 *iv;
    s32 A[3];
    s32 B[3];
    s32 C[3];
    s32 r6;
    s32 bv;
    s32 g;
    s32 r;

    iv = *(u8 **) (p + 0x214);
    func_02044644(*(s16 *) (p + 156));
    r6 = func_01ffda04(*(s16 *) (p + 152));
    if (r6 != 0) {
        func_02108e48(p, r6, A);
    }
    if (*(s32 *) (iv + 0x1c) == 0) {
        func_0210aabc(p, 0, A);
    } else {
        func_0210aabc(p, A, 0);
    }
    func_0210a8d0(p);
    func_0210a700(p);
    iv = *(u8 **) (p + 0x214);
    g  = func_02044644(*(s16 *) (p + 156));
    func_0211c8e8(iv, 1, B);
    func_0211c8e8(iv, 2, C);
    r = func_02092d80(g, B, 0xe66);
    if (r != 0) {
        bv = 1;
    } else {
        r  = func_02092d80(g, C, 0xe66);
        bv = (r != 0);
    }
    if (bv) {
        return func_0210fc0c(p, 0x2ccc);
    }
    r = func_02033dbc(r6);
    if (r != 0) {
        return r;
    }
    return func_0210fd98(p);
}
