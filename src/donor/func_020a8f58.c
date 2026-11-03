/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02101d88 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02101d88.c (license: none), reused by
 * tools/donor_match.py */
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
