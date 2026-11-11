/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209da30 from projets/nintendogs-shiba-friends/src/donor/func_0209da30.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef signed short s16;
typedef signed int s32;
void func_0209da30(u8 *param_1, s32 param_2) {
    s32 iVar4;
    s16 *psVar3;
    s32 iVar5;
    s32 iVar6;
    s16 q5;
    s32 vz;

    vz = 0;
    (void) &vz;
    iVar6 = (s32) param_1 + 0x42;
    q5    = (s16) ((param_2 * 4) / 5);
    iVar4 = 0;
    do {
        psVar3 = (s16 *) (iVar6 + *(s16 *) (param_1 + 0x20) * 2);
        switch (iVar4) {
            case 0:
                *psVar3 = *psVar3 - *(s16 *) (param_1 + 0x2a) * 10;
                if (*(s16 *) (param_1 + 0x22) == 0) {
                    *psVar3 = *psVar3 - 200;
                } else {
                    iVar5 = (s16) (*(s16 *) (param_1 + 0x3c) - *(s16 *) (param_1 + 0x28));
                    if (iVar5 < 0) {
                        iVar5 = 0;
                    }
                    *psVar3 = *psVar3 - (iVar5 / 60) * 20;
                }
                break;
            case 1:
                iVar5 = (s16) ((param_2 - *(s16 *) (param_1 + 2)) - q5);
                if (iVar5 < 0) {
                    iVar5 = 0;
                }
                *psVar3 = *psVar3 - (iVar5 / 60) * 10;
                if (*(s16 *) (param_1 + 0x22) == 0) {
                    *psVar3 = *psVar3 - 200;
                } else {
                    iVar5 = (s16) (*(s16 *) (param_1 + 0x3c) - *(s16 *) (param_1 + 0x28));
                    if (iVar5 < 0) {
                        iVar5 = 0;
                    }
                    *psVar3 = *psVar3 - (iVar5 / 60) * 20;
                }
                break;
            case 2:
                *psVar3 = *psVar3 - (*(s16 *) (param_1 + 0x2a) / 2) * 10;
                if (*(s16 *) (param_1 + 0x22) == 0) {
                    *psVar3 = *psVar3 - 200;
                } else {
                    iVar5 = (s16) (*(s16 *) (param_1 + 0x3c) - *(s16 *) (param_1 + 0x28));
                    if (iVar5 < 0) {
                        iVar5 = vz;
                    }
                    *psVar3 = *psVar3 - (iVar5 / 120) * 20;
                }
                break;
        }
        iVar6 = iVar6 + 10;
        if (*psVar3 < 0) {
            *psVar3 = 0;
        }
        iVar4 = (s16) (iVar4 + 1);
    } while (iVar4 < 3);
}
