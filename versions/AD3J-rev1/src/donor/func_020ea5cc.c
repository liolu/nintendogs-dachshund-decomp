/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ea5d4 from projets/nintendogs-chihuahua-friends/src/donor/func_020ea5d4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern void func_02072320(u32 a, u32 b);
void func_020ea5cc(s32 *p0) {
    s16 i = 0;
    u32 *e;
    if (p0[0] > 0) {
        e = (u32 *) ((u8 *) p0 + 24);
        do {
            if (*e != 0) {
                func_02072320((u32) e, 0);
            }
            i = (s16) (i + 1);
            e = e + 1;
        } while (i < p0[0]);
    }
    p0[0] = 0;
}
