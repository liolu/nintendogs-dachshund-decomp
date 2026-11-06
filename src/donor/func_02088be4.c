/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02088be4 from projets/nintendogs-chihuahua-friends/src/donor/func_02088be4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
#pragma opt_common_subs off
void func_02088be4(u8 *o, u32 *p2, s32 p3) {
    int ab;
    s32 b;
    int ar;
    u8 *q;
    u16 A;
    s32 r;
    s32 g;
    u8 *p0;
    s32 cb;
    s32 cg;
    u8 b2;
    int cr;
    int ag;
    s32 num;
    int b5;
    int C;
    s32 den;
    int b3;

    p0 = *(u8 **) p2;
    q  = (u8 *) p2[2];
    b5 = q[5];
    b2 = q[4];
    b3 = q[6];
    if (p3 < b2) {
        *(u16 *) (o + 0x3a) = *(u16 *) q;
        return;
    }
    if (p3 < b5) {
        A   = *(u16 *) (0x22 + p0);
        C   = *(u16 *) q;
        ab  = A & 31;
        cb  = 31 & C;
        ag  = (A >> 5) & 31;
        cg  = (C >> 5) & 31;
        ar  = (A >> 10) & 31;
        cr  = (C >> 10) & 31;
        den = b5 - b2;
        num = p3 - b2;
        if ((((u32) * (u16 *) (q + 8) << 29) >> 31) == 0) {
            num = den;
        }
        g                   = num * (ag - cg) / den;
        r                   = num * (ar - cr) / den;
        b                   = num * (ab - cb) / den;
        *(u16 *) (0x3a + o) = (cb + b) | ((cg + g) << 5) | ((cr + r) << 10);
        return;
    }
    if (p3 < b3) {
        s32 den2;

        A    = *(u16 *) (0x22 + p0);
        C    = *(u16 *) (2 + q);
        ab   = A & 31;
        cb   = 31 & C;
        ag   = (A >> 5) & 31;
        cg   = (C >> 5) & 31;
        ar   = (A >> 10) & 31;
        cr   = (C >> 10) & 31;
        num  = p3 - b5;
        den2 = b3 - b5;
        if ((((u32) * (u16 *) (q + 8) << 29) >> 31) == 0) {
            num = den2;
        }
        g                   = num * (cg - ag) / den2;
        r                   = num * (cr - ar) / den2;
        b                   = num * (cb - ab) / den2;
        *(u16 *) (0x3a + o) = (ab + b) | ((ag + g) << 5) | ((ar + r) << 10);
        return;
    }
    *(u16 *) (0x3a + o) = *(u16 *) (2 + q);
}
