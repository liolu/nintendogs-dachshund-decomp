/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ed7a8 from projets/nintendogs-chihuahua-friends/src/donor/func_020ed7a8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
extern u8 data_02154dd8[];
extern int data_02154ddc;
extern void func_02072214(int *p, int a, int b);
u32 func_020ed7a0(int param_1, int param_2) {
    int iVar2;
    s16 *base;

    base     = (s16 *) data_02154dd8;
    base[18] = (s16) param_1;
    if (data_02154ddc != 0) {
        iVar2 = base[17] * param_1;
        func_02072214(&data_02154ddc, iVar2 / 100, param_2);
        return 1;
    }
    return 0;
}
