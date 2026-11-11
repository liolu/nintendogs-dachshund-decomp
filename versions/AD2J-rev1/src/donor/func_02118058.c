/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02118050 from projets/nintendogs-shiba-friends/src/donor/func_02118050.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef struct {
    u32 w[10];
} T10;
extern u32 data_02149084;
extern void func_02119bf0(u8 *p, s32 m);
extern void func_0211a608(u8 *p);
extern void func_02119cec(u8 *p);
extern void func_02119cb8(u8 *p, u32 *out);
extern s32 func_02069098(s32 a, s32 b);
extern void func_021199f8(u8 *d, u8 *s, u32 *t, s32 a, s32 b, s32 c);
void func_02118058(u8 *p, s32 p2) {
    T10 local;
    s32 iv;

    switch (*(u16 *) p) {
        case 0:
            *(s32 *) (p + 0x6c) = *(s32 *) (p + 0x6c) - 1;
            if (*(s32 *) (p + 0x6c) <= 0) {
                *(u16 *) p = 1;
            }
            func_02119bf0(p + 4, p2);
            return;
        case 1:
            func_0211a608(p + 0x2c);
            func_02119cec(p + 0x2c);
            func_02119cb8(p + 0x2c, (u32 *) (p + 4));
            func_02119bf0(p + 4, p2);
            return;
        case 2:
            func_0211a608(p + 0x2c);
            func_02119cec(p + 0x2c);
            func_02119cb8(p + 0x2c, local.w);
            if (*(s32 *) (p + 0x6c) > 0) {
                *(s32 *) (p + 0x6c) = *(s32 *) (p + 0x6c) - 1;
                iv                  = func_02069098(data_02149084 - *(s32 *) (p + 0x6c), data_02149084);
                func_021199f8(p + 4, p + 4, local.w, iv, iv, iv);
            } else {
                *(T10 *) (p + 4) = local;
            }
            func_02119bf0(p + 4, p2);
            return;
    }
}
