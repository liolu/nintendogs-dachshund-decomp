/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020b0d40 from projets/nintendogs-chihuahua-friends/src/donor/func_020b0d40.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
extern u32 data_0213c42c;
extern void func_020a358c(int a, int *b, u32 c, u32 d, u32 e);
extern void func_020a3788(int a, int b, int c, int d);
void func_020b0d40(int *param_1) {
    u32 uVar1;
    u32 uVar2;
    int iVar4;
    int *piVar3;
    u16 *puVar5;

    uVar1  = 0xffff;
    piVar3 = param_1 + 0x3c;
    iVar4  = 0;
    do {
        iVar4                       = iVar4 + 1;
        *(u16 *) ((int) piVar3 + 4) = (u16) uVar1;
        uVar2                       = 0xffff;
        piVar3                      = piVar3 + 4;
    } while (iVar4 < 0x14);
    piVar3 = param_1 + 0x3c;
    iVar4  = 0;
    puVar5 = (u16 *) &data_0213c42c;
    do {
        if (*puVar5 == uVar2) {
            break;
        }
        func_020a358c(2, piVar3, *puVar5, 0x100, 0);
        iVar4  = iVar4 + 1;
        piVar3 = piVar3 + 4;
        puVar5 = puVar5 + 1;
    } while (iVar4 < 0x14);
    *param_1 = 0;
    func_020a3788(2, (int) (param_1 + 0x3c), *param_1, 0x10);
}
