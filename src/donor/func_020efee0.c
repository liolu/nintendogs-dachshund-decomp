/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a1164 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020a1164.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern u8 data_02154cb8[];
extern u8 data_02130735[];
extern u8 data_02130734[];
extern u16 data_02147108;
extern void func_0207472c(u32 *p, u32 a, u32 b);
extern void func_02072320(u32 *p, u32 a);
extern u32 func_020ea564(u32 *p);
extern u32 func_020ecb58(s32 a, u32 b, s32 c);
extern u32 func_020ecb10(s32 a, u32 b, s32 c);
extern u32 _s32_div_f(u32 a, u32 b);
extern void func_02072144(u32 *p, u32 a, u32 b);
extern void func_0207226c(u32 *p, u32 a);
extern u32 func_020ea52c(u32 *p);
extern void func_02072114(u32 *p, u32 a, u32 b);
u32 func_020efee0(u32 *param_1, s32 param_2, u32 param_3, s32 param_4, u32 *param_5) {
    s32 iVar4;
    s32 iVar5;
    u32 uVar2;
    u32 uVar3;
    u32 uVar6;
    u32 r4;

    iVar4 = -1;
    func_0207472c(param_1, param_2, param_3);
    if (*param_1 == 0) {
        goto LAB_ret1;
    }
    if (param_2 <= 23) {
        if (param_2 == 23) {
            iVar4 = 49;
        }
    } else {
        switch (param_2) {
            case 42:
                iVar4 = 78;
                break;
            case 37:
            case 38:
            case 39:
            case 40:
                iVar4 = 29;
                break;
            default:
                break;
        }
    }
    if (iVar4 != -1) {
        iVar5 = *(u16 *) (data_02154cb8 + 24) * 6;
        uVar3 = data_02130735[iVar5];
        uVar2 = func_020ea564(param_5);
        uVar6 = data_02130734[iVar5];
        if (uVar2 <= uVar6) {
            r4 = func_020ecb58(iVar4, param_3, param_4);
            goto Lcommon;
        }
        if (uVar2 >= uVar3) {
            goto Lzero;
        }
        r4 = _s32_div_f(func_020ecb58(iVar4, param_3, param_4) * (uVar3 - uVar2), uVar3 - uVar6);
        goto Lcommon;
    Lzero:
        func_02072320(param_1, 0);
        return 0;
    Lcommon:
        iVar4 = func_020ecb10(iVar4, param_3, param_4);
        func_02072144(param_1, data_02147108, iVar4);
        func_0207226c(param_1, r4);
        iVar4 = func_020ea52c(param_5);
        func_02072114(param_1, data_02147108, iVar4);
    }
LAB_ret1:
    return 1;
}
