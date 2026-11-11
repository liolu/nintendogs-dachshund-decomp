/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020b9bb0 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020b9bb0.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
extern int data_02153740;
extern u8 func_02095610(int a);
extern short *func_020a1a08(short *a);
extern u8 func_02095524(int a);
extern short *func_02095784(int a);
short *func_020a1820(short *param_1) {
    u8 bVar1;

    switch (param_1[0x17]) {
        case 0:
            if (*(int *) (data_02153740 + 0xb8) != 0x26) {
                break;
            }
            bVar1 = func_02095610((int) param_1);
            return (short *) (u32) bVar1;
        case 1:
            return func_020a1a08(param_1);
        case 4:
            bVar1 = func_02095524((int) param_1);
            if (!bVar1) {
                return (short *) (u32) bVar1;
            }
            return func_02095784((int) param_1);
        case 2:
        case 3:
            break;
        default:
            break;
    }
}
