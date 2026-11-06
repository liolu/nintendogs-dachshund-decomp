/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f0a98 from projets/nintendogs-chihuahua-friends/src/donor/func_020f0a98.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
extern u32 data_02154f24[];
extern void func_02072214(u32 *a, u32 b, u32 c);
void func_020f0a98(u32 param_1) {
    u8 *base    = (u8 *) data_02154f24;
    u32 *piVar2 = (u32 *) (base + 40);
    s16 i       = 0;
    do {
        if (*(u32 *) (base + (i << 2) + 0x28) != 0) {
            func_02072214(piVar2, 0, param_1);
        }
        i      = (s16) (i + 1);
        piVar2 = piVar2 + 1;
    } while (i < 4);
}
