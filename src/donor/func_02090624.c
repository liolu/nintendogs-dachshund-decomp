/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02090624 from projets/nintendogs-chihuahua-friends/src/donor/func_02090624.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed short s16;
void func_02090624(u8 *param_1, s16 param_2, u16 param_3, u16 param_4) {
    u8 *iVar1;
    param_1 += 0x18;
    *(s16 *) (param_1 + param_2 * 10) = param_2;
    iVar1                             = param_1 + param_2 * 10;
    *(s16 *) (iVar1 + 2)              = -2;
    *(u16 *) (iVar1 + 4)              = param_3;
    *(u16 *) (iVar1 + 6)              = param_4;
}
