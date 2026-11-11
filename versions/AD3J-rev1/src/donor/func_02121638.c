/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d819c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020d819c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef signed short s16;
extern int func_02112904(int v);
extern void func_01ffda04(int v);
extern void func_0211310c(int *p, int v);
extern void func_021199f0(int *a, int *b, int *c, int d, int e, int f);
extern int func_021081c0(void);
extern int *func_02106344(void);
extern void func_02114318(int *a, int *b, int c, int d);
extern void func_02119be8(int *a, int b);
void func_02121638(int *param_1, int param_2) {
    int iVar2;
    int iVar3;
    int aiStack_48[10];
    int local_20[4];

    iVar2 = func_02112904(-1);
    func_01ffda04(iVar2);
    switch (*(s16 *) ((u8 *) param_1 + 40)) {
        case 0:
            func_0211310c(aiStack_48, iVar2);
            func_021199f0(param_1, param_1, aiStack_48, 0x100, 0x100, 0x80);
            break;
        case 1:
            break;
        case 2:
            iVar3       = func_021081c0() + 0x2000;
            local_20[0] = 0;
            local_20[1] = 0x3000;
            local_20[2] = iVar3;
            iVar3       = (int) func_02106344();
            func_02114318(aiStack_48, local_20, *(int *) (iVar3 + 0x70), iVar2);
            func_021199f0(param_1, param_1, aiStack_48, 0x80, 0x80, 0x40);
            break;
    }
    func_02119be8(param_1, param_2);
}
