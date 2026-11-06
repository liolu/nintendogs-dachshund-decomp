/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02085458 from projets/nintendogs-chihuahua-friends/src/donor/func_02085458.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern void func_02085f74(u32 a);
extern void func_02086060(int p, void *q);
extern void func_02086de0(int p, void *q);
extern void func_02086580(int p, void *q);
void func_02085458(int param_1) {
    int iVar5;
    u32 *puVar3;
    void (*pcVar2)(int, void *);
    u32 *piVar4;
    u32 uVar1;

    pcVar2 = (void (*)(int, void *)) 0;
    iVar5  = *(int *) (param_1 + 0x34);
    puVar3 = *(u32 **) (iVar5 + 0x18);
    if (((*(u32 *) (*puVar3)) << 15) >> 31 == 0) {
        return;
    }
    func_02085f74((u32) * (u8 *) (puVar3[5] + 0xf) * 20 + *(u32 *) (param_1 + 0x20));
    uVar1 = ((u32) (*(u16 *) puVar3[5]) << 23) >> 30;
    switch (uVar1) {
        case 0:
            pcVar2 = (void (*)(int, void *)) func_02086de0;
            break;
        case 1:
            pcVar2 = (void (*)(int, void *)) func_02086580;
            break;
        case 2:
            pcVar2 = (void (*)(int, void *)) func_02086060;
            break;
    }
    piVar4 = *(u32 **) (iVar5 + 0x10);
    if (piVar4 == (u32 *) 0) {
        return;
    }
    do {
        pcVar2(param_1, piVar4);
        piVar4 = (u32 *) *piVar4;
    } while (piVar4 != (u32 *) 0);
}
