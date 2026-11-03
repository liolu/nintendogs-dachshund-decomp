/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a305c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020a305c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_02154fa8;
extern u8 *func_02044410(u8 *a, u8 *b);
u32 func_020f1d68(u8 *param_1, u8 *param_2) {
    u8 *iVar1;
    s16 iVar5;
    s16 iVar3;
    s32 iVar6;
    s32 iVar4;
    u8 *iVar2;

    iVar1 = (u8 *) &data_02154fa8;
    iVar5 = 0;
    iVar2 = func_02044410(param_1, param_2);
    iVar3 = 0;
    do {
        iVar6 = *(s16 *) (iVar2 + iVar3 * 4 + 2);
        iVar4 = *(s16 *) (iVar1 + iVar3 * 4 + 2);
        if (iVar4 != iVar6) {
            if (iVar6 == -1 && iVar4 != -1) {
                iVar5 = (s16) (iVar5 + 1);
            } else if (iVar4 == -1 && iVar6 != -1) {
                iVar5 = (s16) (iVar5 + 1);
            } else {
                iVar4 = iVar6 - iVar4;
                if (iVar4 <= 2 && iVar4 >= -2) {
                    iVar5 = (s16) (iVar5 + 1);
                } else if (iVar4 > 2 || iVar4 < -2) {
                    return 0;
                }
            }
        }
        if (iVar5 > 1) {
            return 0;
        }
        iVar3 = (s16) (iVar3 + 1);
    } while (iVar3 < 16);
    return 1;
}
