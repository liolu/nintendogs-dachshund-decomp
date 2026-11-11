/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0208fe1c from projets/nintendogs-shiba-friends/src/donor/func_0208fe1c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02153708;
extern void func_02090508(u8 *p, u32 a);
void func_0208fe1c(u16 param_1) {
    u8 *q;
    s16 s;
    s32 off;
    u8 *b;
    q = data_02153708;
    func_02090508(q, 7);
    *(u16 *) (q + 4)       = 4;
    *(u16 *) (q + 14)      = param_1;
    s                      = *(s16 *) (q + 14);
    b                      = q + 32;
    off                    = (s32) s * 20;
    *(u16 *) (b + off)     = (u16) (*(u16 *) (b + off) | 1);
    *(s16 *) (b + off + 2) = s;
}
