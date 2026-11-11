/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02009058 from projets/nintendogs-shiba-friends/src/donor/func_02009058.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef struct {
    u8 pad0[0x4c];
    s32 f4c;
    s32 f50;
    s32 f54;
    s32 f58;
    s32 f5c;
    s32 f60;
    s32 f64;
    s32 f68;
    s32 f6c;
} Gobj;
extern Gobj data_02150330;
extern s32 func_020280f8(u8 *p);
extern void func_01ff832c(u32 a, u32 *b, u32 *c, u32 *d);
void func_02009058(u8 *p1, u8 *p2, s32 *p3, s32 *p4) {
    u32 A[3];
    u32 B[6];
    s32 t50, t5c, t68, t54, t60, t6c;
    s32 iv;

    {
        volatile Gobj *g = &data_02150330;
        t50              = g->f50;
        t5c              = g->f5c;
        t68              = g->f68;
        t54              = g->f54;
        t60              = g->f60;
        t6c              = g->f6c;
    }
    B[0] = t50;
    B[1] = t5c;
    B[4] = t60;
    B[5] = t6c;
    B[2] = t68;
    B[3] = t54;
    iv   = *p4;
    A[0] = ((s32) (((s64) (data_02150330.f4c) * (iv) + 0x800) >> 12));
    A[1] = ((s32) (((s64) (data_02150330.f58) * (iv) + 0x800) >> 12));
    A[2] = ((s32) (((s64) (data_02150330.f64) * (iv) + 0x800) >> 12));
    func_01ff832c(p4[1], B, A, A);
    func_01ff832c(p4[2], &B[3], A, A);
    func_01ff832c(func_020280f8(p1), A, (u32 *) p3, A);
    if (p2 != 0) {
        *(u32 *) (p2 + 0x20) = A[0] + *(u32 *) (*(u8 **) (*(u8 **) (p2 + 0x18)) + 4);
        *(u32 *) (p2 + 0x24) = A[1] + *(u32 *) (*(u8 **) (*(u8 **) (p2 + 0x18)) + 8);
        *(u32 *) (p2 + 0x28) = A[2] + *(u32 *) (*(u8 **) (*(u8 **) (p2 + 0x18)) + 0xc);
        *(s32 *) (p2 + 0x54) = (s16) func_020280f8(p1);
    }
}
