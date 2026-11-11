/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ee7e4 from projets/nintendogs-chihuahua-friends/src/donor/func_020ee7e4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
extern s32 data_02154dd8[];
extern s32 data_02154db8[];
extern s32 func_020ed320(void);
extern void func_02072320(s32 *p, s32 v);
u32 func_020ee7e4(s32 param_1) {
    s32 *piVar1;
    s32 iVar2;
    s32 iVar3;

    piVar1           = data_02154dd8;
    iVar2            = func_020ed320();
    iVar3            = *piVar1;
    data_02154db8[2] = -1;
    if (iVar3 != 0 && iVar2 == 0) {
        func_02072320(piVar1, param_1);
        piVar1[0x40] = 0;
        return 1;
    }
    return 0;
}
