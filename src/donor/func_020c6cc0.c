/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02091528 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02091528.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef volatile u16 vu16;
extern u8 *func_020c6dcc(u8 *p, u32 n);
u32 func_020c6cc0(u8 *param_1, u32 param_2) {
    u32 uVar2;
    u8 *piVar3;
    u32 uVar4;
    u32 uVar5;
    u32 uVar6;
    u32 uVar8;
    u32 fl;
    u32 uVar7;
    u32 bit;

    uVar2  = 0xffff;
    piVar3 = func_020c6dcc(param_1, *(u32 *) (param_1 + 0x30));
    uVar4  = 0;
    uVar5  = 0;
    while (uVar5 < param_2) {
        if ((*(u16 *) (piVar3 + 4) & (1 << uVar5)) == 0) {
            uVar4 = (u16) (uVar4 + 1);
        }
        uVar5 = (u16) (uVar5 + 1);
    }
    if (uVar4 == 0) {
        *(u16 *) (piVar3 + 4) = 0;
        uVar4                 = param_2;
    }
    uVar6                     = *(u32 *) (param_1 + 0x40) * 0x10dcd + 1;
    *(u32 *) (param_1 + 0x40) = uVar6;
    uVar8                     = (u16) ((uVar4 * (u16) uVar6) >> 16);
    uVar5                     = 0;
    uVar7                     = 0;
    if (uVar7 < param_2) {
        fl = *(u16 *) (piVar3 + 4);
        do {
            bit = 1 << uVar7;
            if ((fl & bit) == 0) {
                if (uVar5 == uVar8) {
                    *(vu16 *) (piVar3 + 4) = *(vu16 *) (piVar3 + 4) | bit;
                    uVar2                  = uVar7;
                    break;
                }
                uVar5 = (u16) (uVar5 + 1);
            }
            uVar7 = (u16) (uVar7 + 1);
        } while (uVar7 < param_2);
    }
    return uVar2;
}
