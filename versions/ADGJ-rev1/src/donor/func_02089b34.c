/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02089b34 from projets/nintendogs-chihuahua-friends/src/donor/func_02089b34.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
extern u32 func_02089b88(int a, u32 b);
extern void func_02089958(int *a, int *b, u32 c, u32 d, u16 e, u32 f);
void func_02089b34(int *param_1, int *param_2, u32 param_3, u32 param_4, u16 param_5, u32 param_6) {
    u16 uVar1;

    uVar1 = func_02089b88((int) param_1, (u32) param_5);
    func_02089958(param_1, param_2, param_3, param_4, uVar1, param_6);
}
