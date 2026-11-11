/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c75c0 from projets/nintendogs-chihuahua-friends/src/donor/func_020c75c0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 data_0212d2dc[];
extern u32 func_020c6350(s32 a, s32 b, u32 c);
extern s32 func_020c6344(s32 a, u32 b);
void func_020c75c0(u16 *param_1, s32 param_2, s32 param_3, u32 param_4) {
    u32 uVar1;
    s32 iVar2;
    s32 iVar3;

    uVar1                     = func_020c6350(param_2, param_3, param_4);
    *param_1                  = 1;
    *(s32 *) (param_1 + 0x16) = param_2;
    *(u32 *) (param_1 + 0x10) = uVar1;
    iVar2                     = func_020c6344(param_2, uVar1);
    *(s32 *) (param_1 + 0x18) = iVar2;
    iVar3                     = 0;
    param_1[4]                = 0;
    param_1[0xd]              = 1;
    param_1[6]                = 0x1e;
    param_1[8]                = 0;
    iVar2                     = (s32) data_0212d2dc;
    param_1[10]               = 1;
    param_1[2]                = *(s16 *) (iVar2 + 10);
    if (0 < *(s16 *) (param_1 + 0x2c)) {
        do {
            u16 *q  = param_1 + iVar3;
            q[0x2d] = 0;
            iVar3   = iVar3 + 1;
        } while (iVar3 < *(s16 *) (param_1 + 0x2c));
    }
    param_1[0x2c] = 0;
    param_1[0x1a] = 0;
    uVar1         = 0;
    do {
        u32 *w   = (u32 *) (param_1 + 0x1c);
        w[uVar1] = 0;
        uVar1    = uVar1 + 1;
    } while (uVar1 < 2);
}
