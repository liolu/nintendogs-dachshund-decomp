/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02110d94 from projets/nintendogs-chihuahua-friends/src/donor/func_02110d94.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 *data_02156080;
extern u8 *data_02153720;
extern s32 func_01ffda04(s32 a);
extern s32 func_0210763c(s32 a, u8 *p);
extern s32 func_020340c4(s32 a);
extern void func_0210fd28(u8 *p, s32 a);
extern u32 func_0210fd98(u8 *p);
u32 func_02110d94(u8 *param_1, s32 param_2) {
    s32 iVar2;
    u32 uVar3;
    u32 flag;

    iVar2 = func_01ffda04(param_2);
    if (iVar2 == 0) {
        return iVar2;
    }
    iVar2 = func_01ffda04(param_2);
    if (iVar2 == 0) {
        goto zero;
    }
    if (func_0210763c(iVar2, param_1) == 0) {
        goto zero;
    }
    if (*(s32 *) (param_1 + 0xc0) < (*(s32 *) (param_1 + 0xf8) << 1)) {
        flag = 1;
        goto test;
    }
    if (func_020340c4(iVar2) == 0) {
        goto zero;
    }
    if (*(s16 *) (param_1 + 0x90) != 3) {
        goto one;
    }
    uVar3          = *data_02156080 * 0x10dcd + 1;
    *data_02156080 = uVar3;
    if ((u16) uVar3 >= 0x4000) {
        goto zero;
    }
    flag = 1;
    goto test;
one:
    flag = 1;
    goto test;
zero:
    flag = 0;
test:
    if (flag == 0) {
        return flag;
    }
    switch (*(s16 *) (param_1 + 0x90)) {
        case 4:
        case 5:
            return func_0210fd98(param_1);
        case 1:
        case 3:
            func_0210fd28(param_1, param_2);
            uVar3                   = (u32) data_02153720;
            *(u32 *) (uVar3 + 0x50) = 0;
            return uVar3;
        case 0:
        case 2:
        case 6:
        case 7:
        case 8:
            break;
        default:
            break;
    }
    return (u32) * (s16 *) (param_1 + 0x90);
}
