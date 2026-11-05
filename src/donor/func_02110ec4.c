/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02110ebc from projets/nintendogs-shiba-friends/src/donor/func_02110ebc.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_02156080;
extern s32 func_01ffda04(u32 v);
extern s32 func_0210763c(s32 a, u8 *b);
extern s32 func_020340c4(s32 a);
u32 func_02110ec4(u8 *param_1, u32 param_2) {
    s32 iVar2;
    u32 uVar3;
    u32 *pp;

    iVar2 = func_01ffda04(param_2);
    if (iVar2 == 0) {
        goto ret0;
    }
    if (func_0210763c(iVar2, param_1) == 0) {
        goto ret0;
    }
    if (*(s32 *) (param_1 + 0xc0) < *(s32 *) (param_1 + 0xf8) * 2) {
        return 1;
    }
    uVar3 = func_020340c4(iVar2);
    if (uVar3 == 0) {
        goto ret0;
    }
    if (*(s16 *) (param_1 + 0x90) != 3) {
        goto ret1b;
    }
    pp    = *(u32 **) &data_02156080;
    uVar3 = *pp * 0x10dcd + 1;
    *pp   = uVar3;
    if ((u16) uVar3 >= 0x4000) {
        goto ret0;
    }
    return 1;
ret1b:
    return 1;
ret0:
    return 0;
}
