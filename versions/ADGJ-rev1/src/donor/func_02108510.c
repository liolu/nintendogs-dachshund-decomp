/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02108510 from projets/nintendogs-chihuahua-friends/src/donor/func_02108510.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
extern u32 func_01ffda04(u32 a);
extern void func_02027518(int a, u32 *b);
extern void func_02027140(int a, u32 *b, int c);
extern void func_01ff832c(u32 a, u32 *b, u32 *c, u32 *d);
void func_02108510(int param_1, u32 param_2, u32 param_3, int param_4) {
    s32 uVar1;
    int iVar2;
    u32 loc[16];

    uVar1 = 0;
    do {
        if ((*(u32 *) (param_1 + 0x16c) & (1 << uVar1)) != 0) {
            goto LAB_020be5d0;
        }
        uVar1 = (s32) ((uVar1 + 1) * 0x10000) >> 0x10;
    } while (uVar1 < 3);
    uVar1 = 0xffffffff;
LAB_020be5d0:
    iVar2 = func_01ffda04(uVar1);
    if (iVar2 != 0) {
        func_02027518(iVar2, (u32 *) (param_1 + 0xb0));
        *(u32 *) (param_1 + 0xb0) = *(u32 *) (param_1 + 0xb0) << param_2;
        *(u32 *) (param_1 + 0xb4) = param_4 + (*(u32 *) (param_1 + 0xb4) << param_3);
        *(u32 *) (param_1 + 0xb8) = *(u32 *) (param_1 + 0xb8) << param_2;
        func_02027140(iVar2, &loc[3], 0x11);
        loc[0] = loc[3];
        loc[1] = loc[4];
        loc[2] = loc[5];
        loc[1] = 0;
        func_01ff832c(0x3d7, loc, (u32 *) (param_1 + 0xb0), (u32 *) (param_1 + 0xb0));
        return;
    }
}
