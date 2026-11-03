/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020fa740 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020fa740.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
extern void func_0206b7b8(u32 a, u32 b, u32 c, s32 d, s32 e);
void func_020e8044(s32 *param_1) {
    vu16 *puVar1;
    vu16 *puVar2;
    u16 *puVar3;
    vu16 *puVar4;
    u16 *puVar5;
    vu32 *puVar6;
    s32 iVar7;
    u32 t;

    *(u32 *) 0x04001014 = 0x01ff0000 & ((-param_1[13] >> 12) << 16);
    if (param_1[0] == 5 || param_1[0] == 9) {
        func_0206b7b8(0x04001050, 2, 6, param_1[14] >> 12, 16 - (param_1[14] >> 12));
    }
    if (param_1[0] == 6 || param_1[0] == 8) {
        func_0206b7b8(0x04001050, 0, 2, param_1[15] >> 12, 16 - (param_1[15] >> 12));
    }
    if (param_1[0] == 5 || param_1[0] == 9) {
        puVar1  = (vu16 *) 0x04001048;
        puVar2  = (vu16 *) 0x0400104a;
        puVar3  = (u16 *) 0x04001040;
        t       = (*puVar1 & ~63u) | 31u;
        *puVar1 = t | 32;
        puVar5  = (u16 *) 0x04001042;
        puVar4  = (vu16 *) 0x04001044;
        t       = (*puVar1 & ~0x3f00u) | 0x1f00u;
        *puVar1 = t | 0x2000u;
        puVar1  = (vu16 *) 0x04001046;
        t       = (*puVar2 & ~63u) | 29u;
        *puVar2 = t | 32;
        puVar6  = (vu32 *) 0x04001000;
        iVar7   = param_1[13];
        *puVar3 = 150;
        *puVar4 = ((iVar7 >> 12) << 8 & 0xff00) | 0xc0;
        iVar7   = param_1[13];
        *puVar5 = 0x6400;
        *puVar1 = ((iVar7 >> 12) << 8 & 0xff00) | 0xc0;
        *puVar6 = (*puVar6 & 0xffff1fff) | 0x6000;
    }
    if (param_1[0] >= 5 && param_1[0] <= 9) {
        *(u32 *) 0x04001000 = *(u32 *) 0x04001000 | 0x200;
        return;
    }
    *(u32 *) 0x04001000 = *(u32 *) 0x04001000 & 0xfffffdff;
}
