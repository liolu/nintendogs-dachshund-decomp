/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c66ac from projets/nintendogs-chihuahua-friends/src/donor/func_020c66ac.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed short s16;
extern u32 *data_02154c3c;
void func_020c66ac(void) {
    s16 i;
    for (i = 0; i < 14; i++) {
        u32 *p = data_02154c3c;
        if ((p[0] & (1u << i)) == 0) {
            u32 *q = p + i;
            q[1]   = 0;
        }
    }
}
