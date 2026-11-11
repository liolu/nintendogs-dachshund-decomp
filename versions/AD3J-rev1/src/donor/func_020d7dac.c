/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ea0a0 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020ea0a0.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef signed short s16;
typedef signed int s32;
extern void func_01ffda04(s32 a);
extern s32 func_02110ebc(u8 *p, s32 a);
extern void func_0210fd20(u8 *p, s32 a);
void func_020d7dac(u8 *param_1, s32 param_2) {
    s32 iVar1;

    func_01ffda04(param_2);
    iVar1 = func_02110ebc(param_1, param_2);
    if (iVar1 == 0) {
        return;
    }
    switch (*(s16 *) (param_1 + 0x90)) {
        case 0:
            return;
        case 1:
            func_0210fd20(param_1, param_2);
            return;
        case 4:
            return;
    }
}
