/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020b0df8 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020b0df8.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern s32 func_02095610(u8 *p);
extern u32 func_0209feec(u8 *p);
extern s32 func_02095524(u8 *p);
extern u32 func_02095784(u8 *p);
u32 func_0209fe88(u8 *param_1) {
    s32 b;

    switch (*(s16 *) (param_1 + 0x2e)) {
        case 0:
            return func_02095610(param_1);
        case 1:
            return func_0209feec(param_1);
        case 2:
            break;
        case 3:
            break;
        case 4:
            b = func_02095524(param_1);
            if (b == 0) {
                return (u32) b;
            }
            return func_02095784(param_1);
    }
}
