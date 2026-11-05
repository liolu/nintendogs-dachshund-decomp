/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f4f00 from projets/nintendogs-shiba-friends/src/donor/func_020f4f00.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
extern int func_020f4868(int a, u32 *b, int c, int d);
extern int func_020f438c(u16 *a, int b, u32 c);
extern void func_020f3f1c(u32 a, int b, u32 c, int d);
int func_020f4f08(int *param_1, u32 param_2, int param_3, u32 param_4, ...) {
    int iVar1;
    int iVar2;
    u32 *puVar3;
    u8 *base;

    if ((param_1 == ((void *) 0)) || ((u32 *) *param_1 == ((void *) 0))) {
        return 0;
    }
    if (param_2 >= *(u32 *) *param_1) {
        return 0;
    }
    iVar1 = func_020f4868(param_3, &param_4, 0, (int) *(s16 *) ((u8 *) &param_4 + 4));
    if (iVar1 >= 0) {
        base   = (u8 *) (*param_1 + 0x94);
        puVar3 = (u32 *) (base + param_2 * 0x18);
        iVar2  = func_020f438c((u16 *) puVar3[5], param_3, param_4);
        if (iVar2 == 1) {
            func_020f3f1c(puVar3[5], param_3, param_4, (int) *(s16 *) ((u8 *) &param_4 + 4));
            puVar3[1] = 1;
            *puVar3   = 1;
        } else {
            iVar1 = -4;
        }
    }
    return iVar1;
}
