/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f1568 from projets/nintendogs-chihuahua-friends/src/donor/func_020f1568.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern int data_02154f64;
extern int data_02154fa8;
extern int func_020f1d70(int a, u32 b);
u32 func_020f1568(u32 param_1, int param_2) {
    int iVar1;
    int iVar2;
    u32 uVar3;
    u8 *base;
    u32 one = 1;

    base = (u8 *) &data_02154f64;
    if (*(int *) (base + 0x8c) != 0) {
        *(int *) (base + 0x8c) = 0;
        *(s16 *) (base + 2)    = -1;
    }
    iVar1 = (int) &data_02154fa8;
    if (*(int *) (base + 0x94) == 0) {
        return 0xfffffffd;
    }
    uVar3                  = 0;
    *(int *) (base + 0x94) = 0;
    if (*(s16 *) (iVar1 + 2) == -1) {
        goto fail;
    }
    if (*(s16 *) (base + 0x8a) > 1) {
        goto fail;
    }
    for (uVar3 = 0; (s32) uVar3 < 20; uVar3 = (u32) (s16) (uVar3 + 1)) {
        if (((param_1 & (one << uVar3)) != 0) && (iVar2 = func_020f1d70(param_2, uVar3), iVar2 != 0)) {
            goto LAB_020a28fc;
        }
    }
    uVar3 = 0xffffffff;
LAB_020a28fc:
    if (uVar3 == 0xffffffff) {
        return 0xfffffffe;
    }
    return uVar3;
fail:
    return 0xffffffff;
}
