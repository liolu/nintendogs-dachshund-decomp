/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020e8d3c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020e8d3c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 func_021077d8(u8 *p);
extern u32 func_021077e8(u8 *p);
extern void func_02069504(u32 *a, u32 *b, u32 *c);
extern void func_020069bc(u32 *a, u32 *b);
extern s32 func_01ffda04(s32 a);
extern void func_02028fc4(s32 a, s32 b, s32 c);
u32 func_020d6a48(u8 *p) {
    u32 A[9];
    s32 i;
    u32 t;
    u32 rv;

    switch (*(s16 *) (p + 0x90)) {
        case 0:
            return func_021077d8(p);
        case 1: {
            u32 w5;
            u32 w4;
            u32 w3;
            u32 w2 = *(u32 *) (p + 0xd0);
            u32 w1 = *(u32 *) (p + 0xcc);
            u32 w0 = *(u32 *) (p + 0xc8);
            A[0]   = w0;
            A[1]   = w1;
            A[2]   = w2;
            w5     = *(u32 *) (p + 0xdc);
            w4     = *(u32 *) (p + 0xd8);
            w3     = *(u32 *) (p + 0xd4);
            A[3]   = w3;
            A[4]   = w4;
            A[5]   = w5;
        }
            func_02069504(&A[0], &A[3], &A[6]);
            func_020069bc(&A[0], &A[0]);
            func_020069bc(&A[6], &A[6]);
            func_02069504(&A[6], &A[0], &A[3]);
            *(u32 *) (p + 0xc8) = A[0];
            *(u32 *) (p + 0xcc) = A[1];
            *(u32 *) (p + 0xd0) = A[2];
            *(u32 *) (p + 0xd4) = A[3];
            *(u32 *) (p + 0xd8) = A[4];
            *(u32 *) (p + 0xdc) = A[5];
            *(u32 *) (p + 0xe0) = A[6];
            *(u32 *) (p + 0xe4) = A[7];
            t                   = A[8];
            *(u32 *) (p + 0xe8) = t;
            return t;
        case 2:
            return func_021077e8(p);
        case 3:
            *(u32 *) (p + 0xa8) = 0;
            i                   = 0;
            do {
                t = func_01ffda04(i);
                if (t != 0) {
                    func_02028fc4(t, 75, 1);
                }
                rv = (u32) ((i + 1) * 0x10000);
                i  = (s32) rv >> 16;
            } while (i < 3);
            goto fin;
        default:
            goto fin;
    }
fin:
    return rv;
}
