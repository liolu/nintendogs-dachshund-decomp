/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020be8ec from projets/nintendogs-chihuahua-friends/src/donor/func_020be8ec.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
extern void func_020bddb8(u8 *p, u32 v);
void func_020be8ec(u8 *p) {
    s32 i;
    u8 *q = p + 168;
    for (i = 0; i < 4; i++) {
        func_020bddb8(q, 0);
        q = q + 32;
    }
}
