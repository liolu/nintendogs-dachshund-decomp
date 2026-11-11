/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0211a734 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0211a734.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern s32 func_0202752c(u32 x);
void func_020c0978(u8 *param_1) {
    u32 r4    = 0;
    s32 iVar1 = func_0202752c(*(u32 *) (param_1 + 4));

    switch (iVar1) {
        case 2:
            r4 = 0;
            break;
        case 0:
            r4 = 1;
            break;
        case 3:
            r4 = 2;
            break;
        case 4:
            r4 = 3;
            break;
        case 1:
            r4 = 4;
            break;
        default:
            break;
    }
    *(u16 *) (param_1 + 2) = (u16) r4;
}
