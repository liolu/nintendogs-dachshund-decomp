/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d16f8 from projets/nintendogs-chihuahua-friends/src/donor/func_020d16f8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
extern void func_020d79ac(u32 a, u32 b, u32 c, u32 d, u32 e);
void func_020d16f0(u8 *param_1) {
    *(u32 *) (param_1 + 0xa8) = *(u32 *) (param_1 + 0xa8) + 0xc000;
    func_020d79ac((u32) (param_1 + 0xa8), (u32) (param_1 + 0xb0), (u32) (*(s16 *) (param_1 + 0x90) == 3) << 1, 0, 0);
}
