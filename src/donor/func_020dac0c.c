/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ecf40 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020ecf40.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef signed short s16;
extern void func_020db994(u8 *p);
extern void func_020dac54(u8 *p);
void func_020dac0c(u8 *param_1) {
    switch (*(s16 *) (param_1 + 0x90)) {
        case 0:
            break;
        case 1:
            break;
        case 2:
            func_020db994(param_1);
            return;
        case 3:
            func_020dac54(param_1);
            break;
    }
}
