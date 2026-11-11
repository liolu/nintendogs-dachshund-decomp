/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c9e7c from projets/nintendogs-chihuahua-friends/src/donor/func_020c9e7c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02154c48;
extern u8 *func_020b54bc(s32 a, s32 b);
u32 func_020c9e78(void) {
    u32 found;
    s32 i;
    s32 off;
    u8 *ent;
    u8 *e;
    found = 0;
    i     = 0;
    off   = 0;
    do {
        ent = *(u8 **) (data_02154c48 + 0x141c) + 0x248 + off;
        if ((s8) ent[3] > 0) {
            e = func_020b54bc((s8) ent[2], *(s16 *) ent);
            if (*(s16 *) (e + 4) != 7) {
                if (*(u16 *) (e + 20) != 128) {
                    found = 1;
                    break;
                }
            }
        }
        i = (s16) (i + 1);
        off += 4;
    } while (i < 200);
    return found;
}
