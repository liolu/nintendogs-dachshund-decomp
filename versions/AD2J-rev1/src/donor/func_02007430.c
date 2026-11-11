/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02007430 from projets/nintendogs-shiba-friends/src/donor/func_02007430.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern u32 func_0207d0e0(s32 a, u32 b, u8 *c, u32 d);
u32 func_02007430(u8 *param_1) {
    u32 b;
    u32 d;
    b = (*(u32 *) (param_1 + 0x2c) & 0xffff) << 3;
    d = (u32) (*(u16 *) (param_1 + 0x30)) << 3;
    func_0207d0e0(1, b, param_1 + *(u32 *) (param_1 + 0x38), d);
    *(u16 *) (param_1 + 0x32) = *(u16 *) (param_1 + 0x32) | 1;
    return 1;
}
