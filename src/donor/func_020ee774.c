/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ee774 from projets/nintendogs-chihuahua-friends/src/donor/func_020ee774.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern u8 data_02154dd8[];
extern void func_02072214(u8 *p, u32 a, u32 b);
u32 func_020ee774(u32 param_1) {
    u8 *piVar2;
    u32 iVar3;
    u16 uVar1;
    u16 uVar2;
    piVar2 = data_02154dd8;
    iVar3  = 0x1e;
    if (*(u32 *) piVar2 != 0) {
        *(u16 *) (piVar2 + 12) = (u16) param_1;
        if (*(u32 *) (piVar2 + 0x1c) != 0) {
            uVar2                    = *(u16 *) (piVar2 + 0x1a);
            uVar1                    = *(u16 *) (piVar2 + 0x18);
            *(u16 *) (piVar2 + 0x18) = 0;
            *(u32 *) (piVar2 + 0x1c) = 0;
            iVar3                    = (u32) uVar2 - (u32) uVar1;
        }
        func_02072214(piVar2, param_1, iVar3);
        return 1;
    }
    return 0;
}
