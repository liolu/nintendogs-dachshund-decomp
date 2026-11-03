/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c5624 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020c5624.c (license: none), reused by
 * tools/donor_match.py */
typedef signed short s16;
extern void func_021077d8(int p);
extern void func_0210f460(int p);
extern int func_01ffda04(int a);
void func_0210f3f8(int param_1) {
    switch (*(s16 *) (param_1 + 0x90)) {
        case 0:
            func_021077d8(param_1);
            return;
        case 1:
            break;
        case 2:
            func_0210f460(param_1);
            return;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            func_01ffda04((int) *(s16 *) (param_1 + 0x98));
    }
}
