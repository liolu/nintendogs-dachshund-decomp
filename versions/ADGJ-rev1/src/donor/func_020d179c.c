/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d179c from projets/nintendogs-chihuahua-friends/src/donor/func_020d179c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
extern u8 *data_0214a798;
extern u32 *data_02156080;
extern void func_02044644(s32 a);
extern s32 func_020d1b68(s32 *a, s32 b);
extern void func_02069668(s32 *a, s32 *b, s32 *c);
extern void func_020d2594(u8 *p, s32 a);
extern s32 func_02111cbc(u32 a, s32 b);
extern void func_0210fe58(u8 *p, s32 a, s32 *b, s32 *c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i);
extern void func_02108220(u8 *p, s32 a);
extern void func_02069504(s32 *a, s32 *b, s32 *c);
extern void func_020069bc(s32 *a, s32 *b);
extern void func_020d2494(void);
extern void func_020d23e8(void);
extern void func_020d2328(void);
extern void func_020d21e8(void);
void func_020d179c(u8 *p1) {
    u8 *iv6p;
    s32 iv5;
    s32 iv6;
    s32 bV4;
    s32 t;
    s32 uv7;
    s32 sp24[3];
    s32 sp36[3];
    s32 sp48[3];
    s32 seed;
    s32 v;
    s32 r8v;
    s32 r3v;
    s32 k;
    u32 *pseed;

    iv6p = *(u8 **) (p1 + 0x214);
    func_02044644((*(s16 *) (p1 + (0x9c))));
    iv5                    = 0x19a;
    *(u16 *) (iv6p + 0x10) = *(u16 *) (iv6p + 0x10) + 1;
    iv6                    = 8;
    bV4                    = func_020d1b68((s32 *) (p1 + 0xb0), iv5);
    if (bV4 != 0) {
        iv6 = 4;
    } else {
        bV4 = func_020d1b68((s32 *) (p1 + 0xb0), 41);
        if (bV4 != 0) {
            iv6 = 6;
        }
    }
    (*(s32 *) (p1 + (0xb0))) = (*(s32 *) (p1 + (0xb0))) - ((*(s32 *) (p1 + (0xb0))) >> iv6);
    (*(s32 *) (p1 + (0xb4))) = (*(s32 *) (p1 + (0xb4))) - ((*(s32 *) (p1 + (0xb4))) >> iv6);
    (*(s32 *) (p1 + (0xb8))) = (*(s32 *) (p1 + (0xb8))) - ((*(s32 *) (p1 + (0xb8))) >> iv6);
    (*(s32 *) (p1 + (0xb4))) = (*(s32 *) (p1 + (0xb4))) - 4;
    func_02069668((s32 *) (p1 + 0xbc), (s32 *) (p1 + 0xb0), (s32 *) (p1 + 0xbc));

    if (((*(s16 *) (p1 + (0x88))) & 1) == (*(s32 *) (data_0214a798 + 0x28) & 1)) {
        uv7 = (s32) ((((s64) (*(s32 *) (p1 + (0x24))) * 0x166c) + 0x800) >> 12);
        func_020d2594(p1, uv7);
        (*(s32 *) (p1 + (0xf8)))  = uv7;
        (*(s32 *) (p1 + (0xfc)))  = uv7;
        (*(s32 *) (p1 + (0x100))) = uv7;
        (*(s32 *) (p1 + (0x104))) = uv7;
        iv5                       = func_02111cbc(*(u16 *) (p1 + 0xa0), (*(s32 *) (p1 + (0xf8))));
        func_0210fe58(p1, (*(s32 *) (p1 + (0xf8))), 0, 0, iv5, (s32) func_020d2494, (s32) func_020d23e8, 0,
                      (s32) func_020d2328, (s32) func_020d21e8);
    }

    if ((*(s32 *) (p1 + (0xb0))) > 16) {
        t = 1;
        goto LT;
    }
    if ((*(s32 *) (p1 + (0xb0))) < -16) {
        t = 1;
        goto LT;
    }
    if ((*(s32 *) (p1 + (0xb4))) > 16) {
        t = 1;
        goto LT;
    }
    if ((*(s32 *) (p1 + (0xb4))) < -16) {
        t = 1;
        goto LT;
    }
    if ((*(s32 *) (p1 + (0xb8))) > 16) {
        t = 1;
        goto LT;
    }
    t = ((*(s32 *) (p1 + (0xb8))) < -16) ? 1 : 0;
LT:
    if (t != 0) {
        if ((((*(s16 *) (p1 + (0x88))) & 31) == ((*(s32 *) (data_0214a798 + 0x28) + 1) & 31))) {
            func_02108220(p1, 2048);
            {
                s32 l0  = (*(s32 *) (p1 + (0xd0)));
                s32 l1  = (*(s32 *) (p1 + (0xcc)));
                s32 l2  = (*(s32 *) (p1 + (0xc8)));
                sp24[0] = l2;
                sp24[1] = l1;
                sp24[2] = l0;
            }
            {
                s32 r6v  = (*(s32 *) (p1 + (0xdc)));
                s32 r5v  = (*(s32 *) (p1 + (0xd8)));
                s32 r3v2 = (*(s32 *) (p1 + (0xd4)));
                sp36[0]  = r3v2;
                sp36[1]  = r5v;
                sp36[2]  = r6v;
            }
            func_02069504(sp24, sp36, sp48);
            func_020069bc(sp24, sp24);
            func_020069bc(sp48, sp48);
            func_02069504(sp48, sp24, sp36);
            (*(s32 *) (p1 + (0xc8))) = sp24[0];
            (*(s32 *) (p1 + (0xcc))) = sp24[1];
            (*(s32 *) (p1 + (0xd0))) = sp24[2];
            (*(s32 *) (p1 + (0xd4))) = sp36[0];
            (*(s32 *) (p1 + (0xd8))) = sp36[1];
            (*(s32 *) (p1 + (0xdc))) = sp36[2];
            (*(s32 *) (p1 + (0xe0))) = sp48[0];
            (*(s32 *) (p1 + (0xe4))) = sp48[1];
            (*(s32 *) (p1 + (0xe8))) = sp48[2];
            return;
        }
        func_02108220(p1, 2048);
        return;
    }
    if (((*(s16 *) (p1 + (0x88))) & 31) != ((*(s32 *) (data_0214a798 + 0x28) + 1) & 31)) {
        return;
    }
    pseed                    = data_02156080;
    seed                     = (s32) *pseed;
    v                        = (s16) (u16) ((0x10dcd * seed + 1) & 0xfff);
    r8v                      = (s32) ((((s64) v * 0x6000) + 0x800) >> 12);
    *(u32 *) pseed           = (u32) (0x10dcd * seed + 1);
    (*(s32 *) (p1 + (0xb0))) = (r8v - 0x3000) >> 7;
    {
        u32 *pb2                 = data_02156080;
        s32 sb                   = (s32) *pb2;
        s32 vb                   = (s16) (u16) ((0x10dcd * sb + 1) & 0xfff);
        s32 r3b                  = (s32) ((((s64) vb * 0x6000) + 0x800) >> 12);
        *pb2                     = (u32) (0x10dcd * sb + 1);
        (*(s32 *) (p1 + (0xb8))) = (r3b - 0x3000) >> 7;
    }
    (void) k;
}
