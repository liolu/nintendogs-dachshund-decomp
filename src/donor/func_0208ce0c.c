/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0208ce0c from projets/nintendogs-chihuahua-friends/src/donor/func_0208ce0c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02153700;
extern u8 *func_02044670(s32 i);
u32 func_0208ce0c(void) {
    u32 r5 = 1;
    s32 i  = 0;
    if (*(s16 *) (data_02153700 + 0x20) > 0) {
        do {
            u8 *e = func_02044670(i);
            if (e != 0) {
                if (*(u32 *) (e + 0x94) == 0) {
                    r5 = 0;
                    break;
                }
            }
            i = (s16) (i + 1);
        } while (i < *(s16 *) (data_02153700 + 0x20));
    }
    return r5;
}
