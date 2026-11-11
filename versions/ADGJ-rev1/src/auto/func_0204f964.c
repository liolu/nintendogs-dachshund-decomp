/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0204f964 from projets/nintendogs-shiba-friends/src/donor/func_0204f964.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
extern void func_0202761c(u32 a, s32 *b);
extern void func_02069634(s32 *a, s32 *b, s32 *c);
extern u32 func_02009b80(s32 *a, s32 *b, s32 *c);
extern s32 func_0202d9e0(u8 *p);
extern void func_0203e2b8(u8 *p, u32 a);
s32 func_0204f964(u8 *p1, u32 p2) {
    s32 A[4];
    u32 b;
    s32 r;

    func_0202761c(p2, A);
    func_02069634(A, (s32 *) (p1 + 0x2a0), A);
    b = func_02009b80(A, (s32 *) (p1 + 0x1a4), (s32 *) (p1 + 0x18c));
    switch (b) {
        case 0:
        case 4:
            goto tabA;
        case 1:
        case 6:
            goto tabB;
        default:
            goto tail;
    }
tabA:
    r = func_0202d9e0(p1);
    switch (r) {
        case 0:
            goto a0;
        case 1:
        case 2:
        case 3:
            goto a1;
        case 4:
        case 5:
        case 6:
            goto a2;
        case 7:
        case 9:
        case 11:
        case 13:
            goto a3;
        case 8:
        case 10:
        case 12:
        case 14:
            goto a4;
        default:
            goto tail;
    }
a0:
    func_0203e2b8(p1, 0x2da);
    return 1;
a1:
    func_0203e2b8(p1, 0x2dc);
    return 1;
a2:
    func_0203e2b8(p1, 0x2de);
    return 1;
a3:
    func_0203e2b8(p1, 0x2e0);
    return 1;
a4:
    func_0203e2b8(p1, 0x2e2);
    return 1;
tabB:
    r = func_0202d9e0(p1);
    switch (r) {
        case 0:
            goto b0;
        case 1:
        case 2:
        case 3:
            goto b1;
        case 4:
        case 5:
        case 6:
            goto b2;
        case 7:
        case 9:
        case 11:
        case 13:
            goto b3;
        case 8:
        case 10:
        case 12:
        case 14:
            goto b4;
        default:
            goto tail;
    }
b0:
    func_0203e2b8(p1, 0x2d9);
    return 1;
b1:
    func_0203e2b8(p1, 0x2db);
    return 1;
b2:
    func_0203e2b8(p1, 0x2dd);
    return 1;
b3:
    func_0203e2b8(p1, 0x2df);
    return 1;
b4:
    func_0203e2b8(p1, 0x2e1);
    return 1;
tail:
    func_0203e2b8(p1, 0x2e5);
    return 1;
}
