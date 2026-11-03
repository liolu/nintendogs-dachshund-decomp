/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02125a24 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02125a24.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
extern u8 *data_02153740;
extern s32 func_020a3a70(s32 a, s32 b, s32 c);
extern s32 func_02100214(u8 *p);
extern void func_0206b7b8(vu16 *a, s32 b, s32 c, u32 d, u32 e);
void func_02104b74(u8 *param_1) {
    vu16 *puVar1;
    vu16 *puVar2;
    vu32 *puVar3;
    vu16 *puVar4;
    s32 iVar5;
    s32 iVar6;
    u32 t;

    if (*(s32 *) (data_02153740 + 0xac) == 2) {
        func_020a3a70(2, 2, 1);
        puVar1 = (vu16 *) 0x0400104a;
        if (*(s32 *) (param_1 + 0xf0) == 0 || *(s32 *) (param_1 + 0xf0) == 7) {
            iVar6                = *(s32 *) (param_1 + 0x74);
            t                    = *(vu16 *) 0x04001048;
            t                    = (t & ~63) | 6;
            t                    = t | 32;
            *(vu16 *) 0x04001048 = t;
            puVar2               = (vu16 *) 0x04001040;
            *puVar1              = ((*puVar1 & ~63) | 20);
            puVar1               = (vu16 *) 0x04001044;
            *puVar2              = 0xff;
            puVar3               = (vu32 *) 0x04001000;
            *puVar1              = (((-iVar6) << 8) & 0xff00) | 0xc4;
            puVar4               = (vu16 *) 0x04001050;
            *puVar3              = (*puVar3 & ~0xe000) | 0x2000;
            func_0206b7b8(puVar4, 2, 4, *(u32 *) (param_1 + 0x78), 0x10 - *(u32 *) (param_1 + 0x78));
        } else {
            iVar6                = func_02100214(param_1);
            puVar4               = (vu16 *) 0x04001050;
            iVar6                = -0x20 - (iVar6 % 80);
            *(vu32 *) 0x04001000 = *(vu32 *) 0x04001000 & ~0xe000;
            *puVar4              = 0;
        }
    } else {
        iVar6 = 0;
        func_020a3a70(2, 2, 0);
        puVar4               = (vu16 *) 0x04001050;
        *(vu32 *) 0x04001000 = *(vu32 *) 0x04001000 & ~0xe000;
        *puVar4              = 0;
    }
    *(vu32 *) 0x04001014 = 0x01ff0000 & (iVar6 << 16);
}
