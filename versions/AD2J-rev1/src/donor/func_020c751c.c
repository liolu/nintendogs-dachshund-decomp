/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c7518 from projets/nintendogs-shiba-friends/src/donor/func_020c7518.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 data_0212d2dc[];
extern s32 func_020c6344(s32 a, s32 b);
void func_020c751c(u8 *param_1) {
    s32 iVar1;
    s32 iVar2;
    u32 uVar3;

    *(u16 *) (param_1 + 0)    = 1;
    iVar1                     = func_020c6344(*(s32 *) (param_1 + 0x2c), *(s32 *) (param_1 + 0x20));
    *(s32 *) (param_1 + 0x30) = iVar1;
    iVar2                     = 0;
    *(u16 *) (param_1 + 8)    = 0;
    *(u16 *) (param_1 + 26)   = 1;
    *(u16 *) (param_1 + 12)   = 30;
    *(u16 *) (param_1 + 16)   = 0;
    *(u16 *) (param_1 + 20)   = 1;
    *(u16 *) (param_1 + 4)    = *(s16 *) (data_0212d2dc + 10);
    if (*(s16 *) (param_1 + 88) > 0) {
        do {
            ((u16 *) (param_1 + 90))[iVar2] = 0;
            iVar2                           = iVar2 + 1;
        } while (iVar2 < *(s16 *) (param_1 + 88));
    }
    *(u16 *) (param_1 + 88) = 0;
    *(u16 *) (param_1 + 52) = 0;
    uVar3                   = 0;
    do {
        ((u32 *) (param_1 + 0x38))[uVar3] = 0;
        uVar3                             = uVar3 + 1;
    } while (uVar3 < 2);
}
