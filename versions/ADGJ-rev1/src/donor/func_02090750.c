/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02090750 from projets/nintendogs-chihuahua-friends/src/donor/func_02090750.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_0215370c;
void func_02090750(void) {
    s32 i                                       = 0;
    *(s32 *) (*(u8 *volatile *) &data_0215370c) = -1;
    do {
        *(s16 *) ((*(u8 *volatile *) &data_0215370c) + i * 2 + 4) = -1;
        *(s32 *) ((*(u8 *volatile *) &data_0215370c) + i * 4 + 8) = 1;
        i                                                         = (s16) (i + 1);
    } while (i < 2);
}
