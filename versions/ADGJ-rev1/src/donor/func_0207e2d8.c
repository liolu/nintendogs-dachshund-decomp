/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0207e2d8 from projets/nintendogs-chihuahua-friends/src/donor/func_0207e2d8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef volatile u32 vu32;
extern void func_0206dff0(u32 fill, u32 *dst, u32 n);
u32 func_0207e2d8(u8 *p, u32 param_2, u32 param_3) {
    u32 *base;
    u32 *puVar2;
    u32 uVar1, uVar4;
    vu32 zero;

    base = (u32 *) (p + 0x24);
    if (param_3 == 0) {
        param_3 = 1;
    }
    param_3 = (param_3 + 3) & ~3;
    puVar2  = (u32 *) base[0];
    uVar4   = param_3 + param_2;
    uVar1   = (u32) puVar2 - param_2;
    if (param_3 == uVar1) {
        return param_3;
    }
    if (param_3 > uVar1) {
        if ((s32) (uVar4 - base[1]) > 0) {
            return 0;
        }
        if ((((u16) (*(u32 *) (p + 0x20) & 0xff)) & 1) != 0) {
            zero = 0;
            func_0206dff0(zero, puVar2, param_3 - uVar1);
        }
    }
    base[0] = uVar4;
    return param_3;
}
