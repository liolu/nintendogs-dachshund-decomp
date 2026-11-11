/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ca9a0 from projets/nintendogs-chihuahua-friends/src/donor/func_020ca9a0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02154c48;
s32 func_020ca9a0(void) {
    s32 r = 0;
    s16 i = 0;
    u8 *p = data_02154c48;
    do {
        if (*(u16 *) (*(u8 **) (p + 0x1000 + 0x44c) + 4) != 0xffff) {
            r = 1;
            break;
        }
        i = i + 1;
        p = p + 24;
    } while (i < 3);
    return r;
}
