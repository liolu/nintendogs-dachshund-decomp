/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d275c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020d275c.c (license: none), reused by
 * tools/donor_match.py */
extern void func_0211a600(int *p);
extern void func_02119ce4(int *p);
extern void func_02119cb0(int *p, int *arr);
extern void func_02119be8(int *arr, int v);
void func_0211bbe0(int *param_1, int param_2) {
    int aiStack_38[11];

    func_0211a600(param_1);
    func_02119ce4(param_1);
    func_02119cb0(param_1, aiStack_38);
    func_02119be8(aiStack_38, param_2);
    return;
}
