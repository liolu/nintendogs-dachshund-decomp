/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0211b3b0 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0211b3b0.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
extern u16 *func_020cac40(int a);
int func_020fa9b8(int param_1) {
    int iVar7 = 0;
    int iVar6 = 0;
    int iVar5 = -1;
    u32 uVar3 = 0xffff;
    int iVar2;
    int tmp;
    u16 *puVar4;
    do {
        iVar2 = (iVar5 + 1) * 0x10000;
        iVar5 = iVar2 >> 16;
        goto CMP;
    LAB:
        iVar2 = (iVar5 + 1) * 0x10000;
        iVar5 = iVar2 >> 16;
    CMP:
        if (iVar5 < 3) {
            puVar4 = func_020cac40(iVar5);
            if (*puVar4 == uVar3) {
                goto LAB;
            }
        }
        tmp   = iVar6;
        iVar6 = (iVar6 + 1) * 0x10000 >> 16;
        if (tmp < param_1) {
            continue;
        }
        if (iVar5 >= 3) {
            iVar5 = -1;
        }
        if (iVar5 >= 0) {
            iVar7 = (int) func_020cac40(iVar5);
        }
        return iVar7;
    } while (1);
}
