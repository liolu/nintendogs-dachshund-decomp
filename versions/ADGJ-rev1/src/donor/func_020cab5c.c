/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020cab5c from projets/nintendogs-chihuahua-friends/src/donor/func_020cab5c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed short s16;
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_02154c48;
void func_020cab5c(s16 param_1) {
    u8 *p;
    u8 *q;
    p                  = *(u8 **) &data_02154c48;
    p                  = p + (s32) param_1 * 24;
    p                  = p + 0x1000;
    q                  = *(u8 **) (p + 0x44c);
    *(s16 *) (q + 10)  = -1;
    q                  = q + 0x800;
    *(u16 *) (q + 254) = *(u16 *) (q + 254) | 1;
}
