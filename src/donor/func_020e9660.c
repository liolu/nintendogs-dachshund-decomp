/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020e9660 from projets/nintendogs-chihuahua-friends/src/donor/func_020e9660.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
extern u32 data_0212ff54;
extern void func_02107ca4(int a, int b);
extern void func_020e9444(void);
extern void func_020e93e0(void);
extern void func_020e953c(void);
extern u32 func_02003844(int *a, int b);
void func_020e9660(int param_1, int *param_2) {
    u32 *puVar1;
    u32 uVar2;

    func_02107ca4(param_1, 0x72);
    *(u32 *) (param_1 + 500)   = (u32) func_020e9444;
    *(u32 *) (param_1 + 0x1f8) = (u32) func_020e93e0;
    *(u32 *) (param_1 + 0x1f0) = (u32) func_020e953c;
    uVar2                      = func_02003844(param_2, 4);
    *(u32 *) (param_1 + 0x214) = uVar2;
    if (*(u32 **) (param_1 + 0x214) != ((void *) 0)) {
        **(u32 **) (param_1 + 0x214) = 0;
    }
    puVar1                     = (u32 *) &data_0212ff54;
    *(u32 *) (param_1 + 0xac)  = 1200;
    uVar2                      = data_0212ff54;
    *(u32 *) (param_1 + 0xf8)  = uVar2;
    *(u32 *) (param_1 + 0x120) = uVar2;
    *(u32 *) (param_1 + 0x128) = uVar2;
    *(u32 *) (param_1 + 300)   = 1;
}
