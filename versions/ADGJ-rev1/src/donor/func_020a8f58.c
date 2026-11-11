/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a8f58 from projets/nintendogs-chihuahua-friends/src/donor/func_020a8f58.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef volatile u16 vu16;
extern u8 *data_02153744;
extern void func_0206dfbc(u16 a, u8 *b, u32 c);
void func_020a8f58(void) {
    vu16 loc;
    *(u16 *) data_02153744 = 0;
    loc                    = 0;
    func_0206dfbc((u16) loc, data_02153744 + 0x2948, 0x4a00);
}
