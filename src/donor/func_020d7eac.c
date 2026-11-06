/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ea198 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020ea198.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern void func_021077e0(s32 a);
extern void func_021077f0(s32 a);
extern void func_02109174(s32 a);
void func_020d7eac(s32 param_1) {
    switch (*(s16 *) (param_1 + 0x90)) {
        case 0:
            func_021077e0(param_1);
            return;
        case 1:
            func_021077f0(param_1);
            *(u32 *) (param_1 + 0xc0) = 0x1806;
            *(s16 *) (param_1 + 0xa6) = 1;
            return;
        case 2:
            break;
        case 3:
            break;
        case 4:
            func_02109174(param_1);
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
    }
    return;
}
