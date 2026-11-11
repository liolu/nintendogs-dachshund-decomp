/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02089644 from projets/nintendogs-chihuahua-friends/src/donor/func_02089644.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
u32 func_02089644(u8 *param_1, u16 *param_2, u32 param_3) {
    u32 uVar1 = param_1[0x17];
    u16 c     = *param_2;
    if (c == 0) {
        return uVar1;
    }
    param_3 = param_3 + uVar1;
    do {
        if (c == 10) {
            uVar1 = uVar1 + param_3;
        }
        param_2 = param_2 + 1;
        c       = *param_2;
    } while (c != 0);
    return uVar1;
}
