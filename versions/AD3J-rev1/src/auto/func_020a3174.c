/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020b3920 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020b3920.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
extern u8 func_02095610(u8 *p);
extern u8 func_02095524(u8 *p);
extern u32 func_02095784(u8 *p);
u32 func_020a3174(u8 *param_1) {
    u8 t;
    switch (*(s16 *) (param_1 + 0x2e)) {
        case 0:
            return func_02095610(param_1);
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            t = func_02095524(param_1);
            if (t == 0) {
                return t;
            }
            return func_02095784(param_1);
    }
}
