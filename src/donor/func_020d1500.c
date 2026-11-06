/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d1508 from projets/nintendogs-chihuahua-friends/src/donor/func_020d1508.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef struct {
    u32 w[3];
} T3;
typedef struct {
    u32 w[12];
} T12;
void func_020d1500(u8 *p0) {
    u8 *p;
    u8 *iv;
    p                    = (__typeof__(p)) (p0);
    iv                   = (__typeof__(iv)) (*(u32 *) ((u8 *) (p) + (0x214)));
    *(u32 *) (p + 0xb0)  = 0;
    *(u32 *) (p + 0xb4)  = 0;
    *(u32 *) (p + 0xb8)  = 0;
    *(u16 *) (p + 0xa6)  = 0;
    *(u32 *) (iv + 0x4)  = 0;
    *(u32 *) (iv + 0xc)  = 0;
    *(u32 *) (iv + 0x14) = 0;
    *(u32 *) (iv + 0x10) = 0;
    *(u32 *) (iv + 0x38) = 0;
    if (*(u32 *) (iv + 0x34) != 0) {
        *(u32 *) (iv + 0x3c) = 0xa000;
    } else {
        *(u32 *) (iv + 0x3c) = 0x28000;
    }
    *(T3 *) (iv + 0x28)  = *(T3 *) (p + 0xbc);
    *(T12 *) (iv + 0x40) = *(T12 *) (p + 0xc8);
    *(u32 *) (p + 0xa8)  = 0;
}
