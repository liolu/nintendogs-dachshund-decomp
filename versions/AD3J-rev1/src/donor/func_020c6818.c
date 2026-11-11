/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02091080 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02091080.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 data_0212d2d4[];
extern u32 func_020c6e3c(s16 *p);
extern void func_020c6b44(s16 *p);
extern void func_020c6a24(s16 *p);
u32 func_020c6818(s16 *param_1) {
    s32 r4;
    s32 iVar2;
    u8 cVar1;

    r4         = 0;
    param_1[1] = 0;
    if (param_1[7] > 0) {
        param_1[7] = (s16) (param_1[7] - 1);
    }
    switch (param_1[0]) {
        case 0:
            goto done;
        case 1:
            goto c1;
        case 2:
            goto done;
        case 3:
            goto c3;
        case 4:
            goto c4;
        case 5:
            goto c5;
        case 6:
            goto c6;
        case 7:
            goto c7;
        default:
            goto done;
    }
c1:
    r4    = 0;
    cVar1 = **(u8 **) (param_1 + 0x18);
    if (cVar1 == 1) {
        goto k1;
    }
    if (cVar1 == 2) {
        goto k2;
    }
    if (cVar1 != 3) {
        goto done;
    }
    goto k3;
k1:
    r4 = func_020c6e3c(param_1);
    goto done;
k2:
    func_020c6b44(param_1);
    goto done;
k3:
    func_020c6a24(param_1);
    goto done;
c3:
    if ((u16) param_1[34] == 0) {
        goto done;
    }
    param_1[0]           = 1;
    ((u16 *) param_1)[4] = (u16) (((u16 *) param_1)[4] & ~1);
    ((u16 *) param_1)[4] = (u16) (((u16 *) param_1)[4] & ~2);
    param_1[1]           = 2;
    iVar2                = 0;
    if (param_1[44] > 0) {
        do {
            (param_1 + iVar2)[45] = 0;
            iVar2                 = iVar2 + 1;
        } while (iVar2 < param_1[44]);
    }
    param_1[44] = 0;
    param_1[2]  = *(s16 *) (data_0212d2d4 + 10);
    goto done;
c4:
    param_1[5] = (s16) (param_1[5] - 1);
    if (param_1[5] <= 0) {
        param_1[0] = 1;
    }
    goto done;
c5:
    if (param_1[36] >= 0) {
        param_1[0] = 1;
    }
    goto done;
c6:
    param_1[5] = (s16) (param_1[5] - 1);
    if (param_1[5] <= 0) {
        param_1[0]  = 1;
        param_1[13] = 0;
    }
    goto done;
c7:
    param_1[5] = (s16) (param_1[5] - 1);
    if (param_1[5] > 0) {
        goto done;
    }
    param_1[0]  = 1;
    param_1[4]  = 0;
    param_1[13] = 1;
    param_1[6]  = 30;
    param_1[2]  = *(s16 *) (data_0212d2d4 + 10);
    param_1[1]  = 2;
    iVar2       = 0;
    if (param_1[44] > 0) {
        do {
            (param_1 + iVar2)[45] = 0;
            iVar2                 = iVar2 + 1;
        } while (iVar2 < param_1[44]);
    }
    param_1[44] = 0;
done:
    param_1[34] = 0;
    return (u32) r4;
}
