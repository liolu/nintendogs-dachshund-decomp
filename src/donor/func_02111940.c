/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c7df0 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020c7df0.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
extern u32 data_02153708;
extern int func_020343a4(int a);
extern void func_02027480(int a, void *b);
extern void func_02027044(int a, int b);
extern void func_0202745c(int a, void *b);
void func_02111940(int param_1, int param_2, int param_3) {
    if (*(s16 *) (param_1 + 0x90) != 1) {
        return;
    }
    if (*(u16 *) (*(u32 *) &data_02153708) == 1) {
        return;
    }
    if (func_020343a4(param_2) != 0) {
        return;
    }
    switch (param_3) {
        case 0:
            break;
        case 1:
            func_02027480(param_2, (void *) (param_1 + 0xbc));
            func_02027044(param_2, 4);
            return;
        case 2:
            func_02027044(param_2, 3);
            return;
        case 3:
            func_02027044(param_2, 2);
            return;
        case 4:
            func_0202745c(param_2, (void *) (param_1 + 0xbc));
            func_02027044(param_2, 1);
            break;
    }
    return;
}
