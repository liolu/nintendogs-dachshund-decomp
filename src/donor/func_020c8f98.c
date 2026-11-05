/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c8f94 from projets/nintendogs-shiba-friends/src/donor/func_020c8f94.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02154c48;
void func_020c8f98(u16 *param_1) {
    u8 *g;
    u8 *q;
    u8 *e;
    s32 i;
    s32 j;
    u16 v;
    g = data_02154c48;
    g = g + 0x1000;
    q = *(u8 **) (g + 0x41c);
    e = q + 4;
    i = 0;
    do {
        *(u16 *) (e + i * 2 + 34) = 0;
        i                         = (s16) (i + 1);
    } while (i < 27);
    j = 0;
    do {
        v = *param_1;
        if (v == 0) {
            return;
        }
        *(u16 *) (e + j * 2 + 34) = v;
        j                         = (s16) (j + 1);
        param_1                   = param_1 + 1;
    } while (j < 26);
}
