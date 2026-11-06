/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020903d4 from projets/nintendogs-chihuahua-friends/src/donor/func_020903d4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
extern int data_02153708;
extern void func_02090508(u16 *a, int b);
void func_020903d4(u32 *param_1, s16 *param_2) {
    u16 *puVar3;
    int iVar2;
    u16 *puVar1;
    int iVar3;

    puVar3 = (u16 *) data_02153708;
    func_02090508(puVar3, 0);
    iVar2       = 0;
    puVar3[2]   = 0;
    puVar1      = puVar3 + 0x10;
    puVar3[6]   = param_2[1];
    puVar3[9]   = param_2[2];
    puVar3[10]  = param_2[3];
    puVar3[0xb] = param_2[4];
    puVar3[0xc] = param_2[5];
    do {
        *puVar1   = *puVar1 | 1;
        puVar1[1] = (u16) iVar2;
        iVar2     = iVar2 + 1;
        puVar1    = puVar1 + 10;
    } while (iVar2 < 3);
    if (param_2[0] >= 0) {
        iVar3                                   = param_2[0] * 0x14;
        *(u16 *) (data_02153708 + 0x20 + iVar3) = *(u16 *) (data_02153708 + 0x20 + iVar3) | 4;
    }
    if (param_1 != (u32 *) 0) {
        *param_1                     = 0x434e5454;
        *(u16 *) (param_1 + 1)       = 0;
        *(s16 *) ((int) param_1 + 6) = -1;
        *(s16 *) (param_1 + 2)       = -1;
        return;
    }
}
