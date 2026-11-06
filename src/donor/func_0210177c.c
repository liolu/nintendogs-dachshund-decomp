/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02101784 from projets/nintendogs-chihuahua-friends/src/donor/func_02101784.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef signed int s32;
extern u64 _s32_div_f(u32 a, u32 b);
extern void func_020b8dbc(u32 a, u32 b, u32 c, u32 d);
u32 func_0210177c(u8 *param_1) {
    s32 iVar2;
    s32 iVar1;
    s32 bVar3;
    u64 uVar4;
    bVar3                     = 0;
    *(s32 *) (param_1 + 0x58) = *(s32 *) (param_1 + 0x58) + 1;
    uVar4 = _s32_div_f((u32) (*(s32 *) (param_1 + 0x58) * *(s32 *) (param_1 + 0x40)), *(u32 *) (param_1 + 0x54));
    *(s32 *) (param_1 + 0x5c) = (s32) uVar4;
    if (*(s32 *) (param_1 + 0x58) == *(s32 *) (param_1 + 0x54)) {
        *(u32 *) (param_1 + 0x5c) = 0;
        bVar3                     = 1;
    } else if (*(s32 *) (param_1 + 0x4c) > *(s32 *) (param_1 + 0x48)) {
        *(s32 *) (param_1 + 0x5c) = -*(s32 *) (param_1 + 0x5c);
    }
    iVar2 = 0;
    if (0 < *(s32 *) (param_1 + 0x3c)) {
        do {
            iVar1 = 0;
            if (0 < *(s32 *) (param_1 + 0x14)) {
                do {
                    func_020b8dbc(2, (u16) (iVar2 + *(u16 *) (param_1 + ((u32) iVar1 << 1) + 0x18)), 0,
                                  *(s32 *) (param_1 + 0x5c));
                    iVar1 = iVar1 + 1;
                } while (iVar1 < *(s32 *) (param_1 + 0x14));
            }
            iVar2 = iVar2 + 1;
        } while (iVar2 < *(s32 *) (param_1 + 0x3c));
    }
    return bVar3;
}
