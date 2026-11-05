/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_ov007_0215dd0c from https://github.com/chasmlol/nintendogs-decomp src/overlays/ov007/func_ov007_0215dd0c.c (license:
 * none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
extern int data_021560e8;
extern void func_0211e6a0(void);
extern u32 func_02120060(u32 n, s16 *buf);
extern u32 func_0211fee4(void (*cb)(void), s16 *buf);
u32 func_0211eba4(void) {
    u8 *obj;
    s16 buf[2];

    obj = *(u8 **) &data_021560e8;
    if (*(u32 *) (obj + 0x28) != 0) {
        goto ret0;
    }
    *(u32 *) (obj + 0x34)                     = 0;
    *(u16 *) (*(u8 **) &data_021560e8 + 0x30) = 0;
    *(u16 *) (*(u8 **) &data_021560e8 + 0x32) = 0;
    if (func_02120060(2, buf) != 0) {
        return func_0211fee4(func_0211e6a0, buf);
    }
    return 0;
ret0:
    return 0;
}
