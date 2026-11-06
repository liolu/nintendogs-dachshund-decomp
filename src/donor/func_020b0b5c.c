/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020b0b5c from projets/nintendogs-chihuahua-friends/src/donor/func_020b0b5c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern u32 data_02153740;
void func_020b0b5c(u16 param_1) {
    u8 *obj = (u8 *) data_02153740;
    u8 *q   = obj + 0xc4;
    if (*(u32 *) (obj + 0xb8) == 2) {
        *(u16 *) (q + 0x334 - 0xc4) = 1;
        *(u16 *) (q + 0x336 - 0xc4) = param_1;
    }
}
