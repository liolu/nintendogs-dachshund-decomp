/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209c084 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0209c084.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern s32 func_020f7178(s32 *p);
extern void func_02072320(s32 *p, s32 v);
extern s32 func_020ea668(s32 *p);
u32 func_020eae74(s32 *param_1, s32 param_2) {
    s32 iVar2;
    u32 uVar3;
    u32 uVar4;
    u16 uVar1;

    iVar2 = func_020f7178(param_1);
    if (iVar2 != -11) {
        goto body;
    }
    goto fail;
body:
    uVar4 = 0xff;
    uVar3 = 0;
    if (0 < param_1[0]) {
        do {
            if ((param_1 + uVar3)[6] != 0 && param_2 == *(s16 *) ((u8 *) param_1 + uVar3 * 2 + 0x12)) {
                uVar4 = uVar3;
                func_02072320(param_1 + 6 + uVar3, 0);
                break;
            }
            uVar3 = (s16) (uVar3 + 1);
        } while ((s32) uVar3 < param_1[0]);
    }
    if (uVar4 == 0xff) {
        uVar4 = func_020ea668(param_1);
    }
    if (uVar4 != 0xffffffff) {
        *(s16 *) ((u8 *) param_1 + uVar4 * 2 + 0x12) = (s16) param_2;
        uVar1                                        = (u16) (1 << uVar4);
        *(u16 *) (param_1 + 2)                       = *(u16 *) (param_1 + 2) | uVar1;
        (param_1 + uVar4)[11]                        = 0;
        (param_1 + uVar4)[14]                        = 0;
        *(u16 *) ((u8 *) param_1 + 0x2a)             = *(u16 *) ((u8 *) param_1 + 0x2a) & ~uVar1;
    }
    return uVar4;
fail:
    return 0xffffffff;
}
