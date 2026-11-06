/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020dfd3c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020dfd3c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern u32 data_021473f8;
extern u8 data_0215549c[];
extern u8 data_02155494[];
extern u8 data_021554b8[];
extern u8 data_02155490[];
extern void func_02002108(void);
extern void func_02002c54(void);
extern void func_020026f0(u32 a);
extern void func_020026d8(u32 a);
u8 *func_020f7de0(u32 param_1, u32 param_2) {
    u8 *base;
    u16 z;
    z = 0;
    func_02002108();
    func_02002c54();
    func_020026f0(1);
    func_020026d8(data_021473f8);
    base                         = data_0215549c;
    *(u32 *) (base + 0)          = 3;
    *(u32 *) (base + 4)          = param_1;
    *(u32 *) (base + 8)          = param_2;
    *(u32 *) (base + 12)         = 0x105d;
    *(u32 *) (base + 16)         = 1;
    *(u32 *) (base + 20)         = 0;
    *(u32 *) data_02155494       = 1;
    *(u16 *) data_021554b8       = z;
    *(u16 *) (data_021554b8 + 4) = z;
    *(u16 *) (data_021554b8 + 2) = z;
    *(u32 *) data_02155490       = 0;
    return base;
}
