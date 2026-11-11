/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f1914 from projets/nintendogs-chihuahua-friends/src/donor/func_020f1914.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
extern u8 data_02154f64[];
void func_020f1914(void) {
    u8 *p = data_02154f64;
    if (*(u32 *) (p + 0x8c) != 0) {
        *(u32 *) (p + 0x8c) = 0;
        *(s16 *) (p + 2)    = -1;
    }
}
