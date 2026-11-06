/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02098984 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02098984.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern s32 _s32_div_f(s32 a, s32 b);
extern void func_0207d0e0(s32 a, s32 b, s32 c, s32 d);
extern s32 data_02154c70;
void func_020ce1bc(s32 param_1, u32 param_2, u32 param_3) {
    s16 iVar2;
    s16 iVar4;
    s16 uVar3;
    s32 *piVar1;
    u16 ret;
    s32 base;
    s32 arg;
    u16 *pa;
    u8 *t;

    if (param_2 == 0) {
        uVar3 = 20;
        iVar4 = 26;
        iVar2 = 17;
    } else if (param_2 == param_3) {
        uVar3 = 11;
        iVar4 = 20;
        iVar2 = 4;
    } else {
        uVar3 = (s16) (_s32_div_f(param_2 * -9, param_3) + 20);
        iVar4 = (s16) (_s32_div_f(param_2 * -6, param_3) + 26);
        iVar2 = (s16) (_s32_div_f(param_2 * -13, param_3) + 17);
    }
    piVar1                                      = &data_02154c70;
    ret                                         = (u16) (uVar3 | (iVar4 << 5) | (iVar2 << 10));
    base                                        = *piVar1;
    pa                                          = (u16 *) (base + 0x1c + (param_1 + 29) * 2);
    *(u16 *) (base + (param_1 + 13) * 2 + 0x1c) = ret;
    *pa                                         = ret;
    t                                           = *(u8 *volatile *) piVar1;
    arg                                         = (s32) (t + 0x1c);
    if (*(s16 *) (t + 0x74) != 0) {
        func_0207d0e0(0xf, 0x1c0, arg, 0x40);
        return;
    }
    func_0207d0e0(0x1f, 0x1c0, arg, 0x40);
    return;
}
