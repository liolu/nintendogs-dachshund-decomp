/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020eacd4 from projets/nintendogs-chihuahua-friends/src/donor/func_020eacd4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern u32 func_020ead20(u32 a, u32 b);
// clang-format off
void func_020eacd4(u32 *param_1, u32 param_2, u32 param_3)
{
    u32 uVar1;
    u8 *q;
    u16 h;
    u16 one;
    uVar1 = func_020ead20((u32)param_1, param_2);
    if (uVar1 != 0xffffffff) {
        asm { add q, param_1, uVar1, lsl #2 }
        *(u32 *)(q + 0x2c) = param_3;
        h = *(u16 *)((u8 *)param_1 + 0x2a);
        one = 1;
        asm { orr one, h, one, lsl uVar1 }
        *(u16 *)((u8 *)param_1 + 0x2a) = one;
    }
}
// clang-format on
