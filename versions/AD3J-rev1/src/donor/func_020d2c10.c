/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020e3a20 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020e3a20.c (license: none), reused by
 * tools/donor_match.py */
typedef signed short s16;
extern void func_020d2c68(int a);
extern void func_020d36e0(int a);
extern void func_020d32b0(int a);
void func_020d2c10(int param_1) {
    switch (*(s16 *) (param_1 + 0x90)) {
        case 0:
            break;
        case 2:
            func_020d36e0(param_1);
            return;
        case 3:
            func_020d32b0(param_1);
            return;
        case 1:
            func_020d2c68(param_1);
            break;
    }
}
