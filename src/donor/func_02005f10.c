/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02005f10 from projets/nintendogs-chihuahua-friends/src/donor/func_02005f10.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef volatile u16 vu16;
extern u8 data_0214a954[];
extern u8 data_0214a9e0[];
extern void func_0206dfbc(u16 a, u8 *b, u32 c);
void func_02005f10(void) {
    vu16 loc;
    if (*(u32 *) data_0214a954 != 0) {
        loc = 0xf000;
        func_0206dfbc((u16) loc, data_0214a9e0, 0x600);
    }
}
