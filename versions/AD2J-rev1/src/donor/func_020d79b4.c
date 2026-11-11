/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d79ac from projets/nintendogs-shiba-friends/src/donor/func_020d79ac.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef signed int s32;
void func_020d79b4(s32 *param_1, s32 *param_2, s32 param_3, s32 param_4, s32 param_5) {
    s32 iVar3;
    s32 iVar2;
    s32 iVar4;
    iVar2 = param_2[0];
    {
        u8 bVar1;
        if (iVar2 > 0xa000) {
            bVar1 = 1;
            goto out;
        }
        if (iVar2 < -0xa000) {
            bVar1 = 1;
            goto out;
        }
        if (param_2[1] > 0xa000) {
            bVar1 = 1;
            goto out;
        }
        if (param_2[1] < -0xa000) {
            bVar1 = 1;
            goto out;
        }
        if (param_2[2] > 0xa000) {
            bVar1 = 1;
            goto out;
        }
        if (param_2[2] < -0xa000) {
            bVar1 = 1;
        } else {
            bVar1 = 0;
        }
    out:
        if (!bVar1) {
            iVar4 = param_2[1];
            iVar3 = param_2[2];
            if (iVar4 <= 0) {
                iVar4 = -iVar4;
            }
            if (iVar2 <= 0) {
                iVar2 = -iVar2;
            }
            if (iVar3 <= 0) {
                iVar3 = -iVar3;
            }
            *param_1 = *param_1 + ((iVar3 + (iVar2 + iVar4)) << (param_3 + 6));
        }
    }
    if (param_4 != 0) {
        *param_1 = *param_1 + (0x190000 << param_5);
    }
    *param_1 = *param_1 - 0x8000;
    if (*param_1 > 0x1f40000) {
        *param_1 = 0x1f40000;
    }
    if (*param_1 < 0) {
        *param_1 = 0;
    }
}
