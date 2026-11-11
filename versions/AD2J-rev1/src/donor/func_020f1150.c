/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f1148 from projets/nintendogs-shiba-friends/src/donor/func_020f1148.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_02154cb8;
extern u32 data_0214b150;
extern u8 data_02154eec[];
extern void func_020e9b9c(s32 a);
extern void func_02074110(s32 a, void *b);
extern void func_0207472c(void *a, s32 b, s32 c);
extern void func_02071f4c(void *a, s32 b, s32 c);
void func_020f1150(void) {
    s32 iVar1;
    s32 iVar2;
    s32 iVar3;
    u32 uVar4;
    u32 uVar5;
    u32 *piVar5;
    u8 *q5;
    u8 *q;

    piVar5 = *(u32 **) &data_02154cb8;
    q      = *(u8 **) &data_0214b150;
    q5     = q + 44;
    func_020e9b9c(0);
    func_02074110(0x1c, piVar5);
    iVar2 = *(s32 *) (q + 0x2c);
    iVar1 = *(s32 *) (q5 + 0x4);
    iVar3 = *(s32 *) (q5 + 0x8);
    uVar4 = (u32) (iVar3 + (iVar2 + iVar1));
    func_0207472c(data_02154eec, 0x12, 0);
    uVar4 = uVar4 * 0x10dcd + 1;
    func_02071f4c(data_02154eec, 0, (s16) (u16) (((u32) (u16) uVar4 * 6) >> 16));
    uVar5 = uVar4 * 0x10dcd + 1;
    func_02071f4c(data_02154eec, 1, (s16) (u16) (((u32) (u16) uVar5 * 10) >> 16));
    uVar4 = uVar5;
    iVar1 = 1;

    iVar2 = 0x10dcd;
    do {
        uVar4 = uVar4 * iVar2 + 1;
        func_02071f4c(data_02154eec, iVar1 + 1, (s16) (u16) (((u32) (u16) uVar4 * 9) >> 16));
        iVar1 = (s16) (iVar1 + 1);
    } while (iVar1 < 5);
}
