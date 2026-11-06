/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f13e4 from projets/nintendogs-chihuahua-friends/src/donor/func_020f13e4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
extern int data_02154eec;
extern int data_02154f24;
extern int data_02154ef4;
extern int data_02154ef0;
extern int data_02154ee8;
extern void func_02072294(u32 a);
void func_020f13e4(void) {
    int iVar1;
    u16 *puVar2;
    int iVar3;
    int iVar5;
    u32 *puVar4;

    iVar1  = (int) &data_02154f24;
    puVar2 = (u16 *) &data_02154ef4;
    func_02072294((u32) &data_02154eec);
    func_02072294((u32) &data_02154ef0);
    *(u16 *) &data_02154ee8 = 100;
    puVar4                  = (u32 *) (iVar1 + 0x28);
    iVar5                   = 0;
    do {
        *(u16 *) (iVar1 + iVar5 * 2) = 0;
        iVar3                        = iVar1 + iVar5 * 2;
        *(u16 *) (iVar3 + 8)         = 0;
        *(u16 *) (iVar3 + 0x10)      = 0x7f;
        func_02072294((u32) puVar4);
        iVar5  = (iVar5 + 1) * 0x10000 >> 0x10;
        puVar4 = puVar4 + 1;
    } while (iVar5 < 4);
    *(u16 *) (iVar1 + 0x18) = 0;
    *(u16 *) (iVar1 + 0x1a) = 0;
    *(u16 *) (iVar1 + 0x1c) = 0;
    *(u16 *) (iVar1 + 0x1e) = 0;
    *(u32 *) (iVar1 + 0x20) = 0;
    *(u32 *) (iVar1 + 0x24) = 0;
    func_02072294((u32) (iVar1 + 0x38));
    func_02072294((u32) (puVar2 + 4));
    *puVar2                = 1;
    *(u32 *) (puVar2 + 10) = 0xffffffff;
    iVar5                  = 0;
    *(u32 *) (puVar2 + 12) = 0;
    *(u32 *) (puVar2 + 14) = 0;
    puVar2[16]             = 0;
    *(u32 *) (puVar2 + 18) = 0;
    *(u32 *) (puVar2 + 20) = 0;
    *(u32 *) (puVar2 + 22) = 0;
    puVar4                 = (u32 *) (puVar2 + 6);
    do {
        func_02072294((u32) puVar4);
        iVar5  = (iVar5 + 1) * 0x10000 >> 0x10;
        puVar4 = puVar4 + 1;
    } while (iVar5 < 2);
    ((s16 *) puVar2)[1] = -1;
}
