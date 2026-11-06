/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0211eb28 from projets/nintendogs-chihuahua-friends/src/donor/func_0211eb28.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
extern u8 *data_021560e8;
extern void func_0211e660(void);
extern u32 func_0211fe28(u32 a, u32 *b);
u32 func_0211eb20(void) {
    u32 local;
    u32 uVar1;
    if (*(u32 *) (data_021560e8 + 0x28) != 1) {
        goto ret0;
    }
    *(u32 *) (data_021560e8 + 0x28) = 4;
    uVar1                           = (u32) func_0211e660;
    if (func_0211fe28(uVar1, &local) == 0) {
        return 0;
    }
    *(u32 *) (data_021560e8 + 0x2c) = 0;
    return 1;
ret0:
    return 0;
}
