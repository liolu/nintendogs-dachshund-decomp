/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c7f7c from projets/nintendogs-chihuahua-friends/src/donor/func_020c7f7c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
extern s32 func_02007290(u32 *p);
extern s32 func_0200725c(u32 *p);
u32 func_020c7f7c(u8 *param_1) {
    s32 bVar1;
    s32 iVar2;
    u32 loc[7];
    bVar1 = 0;
    iVar2 = 0;
    do {
        if (*(param_1 + iVar2 + 8) != 0) {
            bVar1 = 1;
            break;
        }
        iVar2 = (iVar2 + 1) * 0x10000 >> 16;
    } while (iVar2 < 6);
    if (bVar1 != 0) {
        loc[0] = param_1[0x13];
        loc[1] = param_1[0x12];
        loc[2] = param_1[0x11];
        loc[3] = 0;
        loc[4] = param_1[0x10];
        loc[5] = param_1[0xf];
        loc[6] = param_1[0xe];
        iVar2  = func_02007290(loc);
        if (iVar2 == 0) {
            goto zero;
        }
        if (func_0200725c(&loc[4]) != 0) {
            bVar1 = 1;
            goto end;
        }
    zero:
        bVar1 = 0;
    end:;
    }
    return bVar1;
}
