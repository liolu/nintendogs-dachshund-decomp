/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02101c88 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02101c88.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef volatile u16 vu16;
extern u8 *data_02153744;
extern void func_0206dfbc(u32 a, u8 *b, u32 c);
void func_020a8e58(u8 *p0) {
    vu16 buf[2];
    buf[0]        = 0;
    data_02153744 = p0;
    func_0206dfbc(buf[0], p0, 0x734c);
    *(u16 *) data_02153744 = 0;
    buf[1]                 = 0;
    func_0206dfbc(buf[1], data_02153744 + 0x2948, 0x4a00);
}
