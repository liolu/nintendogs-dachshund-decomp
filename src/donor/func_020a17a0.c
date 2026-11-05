/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020b9b30 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020b9b30.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
extern u8 *data_02154c70;
extern u32 func_02095610(s16 *p);
extern s16 *func_020a1a08(s16 *p);
extern u32 func_02095524(s16 *p);
extern s16 *func_02095784(s16 *p);
s16 *func_020a17a0(s16 *p) {
    u32 b;

    switch (p[23]) {
        case 0:
            return (s16 *) func_02095610(p);
        case 1:
            return func_020a1a08(p);
        case 2:
            break;
        case 3:
            break;
        case 4:
            if (*(s16 *) (data_02154c70 + 108) != 0) {
                return p;
            }
            b = func_02095524(p);
            if (b == 0) {
                return (s16 *) b;
            }
            return func_02095784(p);
    }
}
