/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c2c10 from projets/nintendogs-chihuahua-friends/src/donor/func_020c2c10.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef volatile u32 vu32;
extern u8 data_021538e4[];
extern u32 func_02003844(int *a, int b);
extern void func_0206e034(vu32 a, void *b, u32 c);
extern void func_0208ba94(void *a);
extern void func_0200668c(int a, void *b);
extern void func_020c2cf4(void);
void func_020c2c10(int *param_1, s16 param_2) {
    u16 w;
    s16 *psVar1;
    int iVar5;
    u8 *puVar4;
    int iVar3;
    vu32 zero;
    u32 uVar2;

    psVar1                = (s16 *) func_02003844(param_1, 8);
    *psVar1               = param_2 * 4 + 1;
    uVar2                 = func_02003844(param_1, (s32) *psVar1 * 0x5048u);
    *(u32 *) (psVar1 + 2) = uVar2;
    w                     = 0xffff;
    iVar5                 = 0;
    if (0 < *psVar1) {
        iVar3 = 0;
        do {
            puVar4 = (u8 *) (*(int *) (psVar1 + 2) + iVar3);
            zero   = 0;
            func_0206e034(zero, puVar4, 0x5000);
            func_0208ba94(puVar4 + 0x5000);
            *(u16 *) (puVar4 + 0x5044) = w;
            *(u16 *) (puVar4 + 0x5046) = 0;
            iVar5                      = (iVar5 + 1) * 0x10000 >> 0x10;
            iVar3                      = iVar3 + 0x5048;
        } while (iVar5 < *psVar1);
    }
    *(s16 **) data_021538e4 = psVar1;
    func_0200668c(0xc, (void *) func_020c2cf4);
}
