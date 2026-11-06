/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c87e8 from projets/nintendogs-chihuahua-friends/src/donor/func_020c87e8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02154c48;
s32 func_020c87e8(void) {
    s32 cnt = 0;
    s16 i   = 0;
    u8 *p   = data_02154c48;
    u8 *e;
    do {
        e = *(u8 **) (p + 0x1000 + 0x4f4);
        p = p + 24;
        if (*(u16 *) (e + 4) != 0xffff) {
            cnt = (s16) (cnt + 1);
        }
        i = i + 1;
    } while (i < 5);
    return cnt;
}
