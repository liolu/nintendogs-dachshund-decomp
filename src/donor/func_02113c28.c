/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02113c20 from projets/nintendogs-shiba-friends/src/donor/func_02113c20.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef volatile u32 vu32;
typedef struct {
    u32 w0;
    u32 w1;
    u32 w2;
} V3;
extern u32 data_021560a4;
extern u32 data_02153704;
extern u32 data_021560ac;
extern int func_01ffda04(int a);
extern void func_021170f0(int *a, int *b, int c, int d, u32 e);
extern void func_02027630(int a, u32 *b);
extern void func_02113df4(int *a, u32 *b, u32 c, int *d, u32 e, int *f, u32 g, u32 h, u32 i);
void func_02113c28(int *param_1, int param_2, int param_3, u32 param_4) {
    int iVar1;
    int iStack_44;
    vu32 uStack_40[2];
    u32 aiStack_38[3];
    V3 cp;
    V3 zero;

    iVar1 = func_01ffda04(param_2);
    if (param_3 != 0) {
        zero.w0 = 0;
        zero.w1 = 0;
        zero.w2 = 0;
        func_021170f0(&iStack_44, (int *) &zero, *(int *) (data_02153704 + 0xc), 0, *(u16 *) &data_021560a4);
        uStack_40[0] = data_021560ac;
        func_02027630(iVar1, aiStack_38);
        cp = *(V3 *) (param_3 + 0xbc);
        func_02113df4(param_1, aiStack_38, 0x1000, (int *) &cp, 0xa000, &iStack_44, param_4, 0xa000, 0x3c000);
    }
}
