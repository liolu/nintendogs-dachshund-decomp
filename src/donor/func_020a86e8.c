/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a86e8 from projets/nintendogs-chihuahua-friends/src/donor/func_020a86e8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_02153744;
extern void func_020a85bc(u32 a, u8 *b);
s32 func_020a86e8(u32 param_1, u32 param_2, u32 param_3, u16 param_4, u16 param_5, u16 param_6, u16 param_7, u16 param_8,
                  u16 param_9, u16 param_10) {
    s32 ret   = -1;
    s32 iVar2 = 0;
    u8 *iVar1;
    u8 *pv;
    iVar1 = (u8 *) (data_02153744 + 4);
    do {
        if (*(s32 *) (iVar1 + 4) == 0) {
            ret                     = iVar2;
            *(s32 *) (iVar1 + 4)    = 1;
            *(u16 *) (iVar1 + 0xc)  = param_6;
            *(u16 *) (iVar1 + 0xe)  = param_7;
            *(u32 *) (iVar1 + 0x14) = (u32) param_6 * (u32) param_7 * 0x20;
            *(u32 *) (iVar1 + 0x18) = param_2;
            pv                      = iVar1 + 24;
            *(u16 *) (pv + 8)       = param_4;
            *(u16 *) (pv + 10)      = param_5;
            *(u32 *) (pv + 4)       = param_3;
            *(u16 *) (pv + 30)      = param_9;
            *(u16 *) (pv + 28)      = param_8;
            *(u16 *) (pv + 36)      = param_10;
            func_020a85bc(param_1, iVar1);
            break;
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x1b8;
    } while (iVar2 < 0x18);
    return ret;
}
