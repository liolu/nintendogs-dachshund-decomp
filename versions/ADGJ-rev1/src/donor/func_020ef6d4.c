/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ef6d4 from projets/nintendogs-chihuahua-friends/src/donor/func_020ef6d4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern u32 data_02154ef4;
extern u32 data_02154cb8;
extern u8 func_020f2380(void);
void func_020ef6d4(int param_1) {
    u8 *iVar1;
    u8 cVar2;

    cVar2 = func_020f2380();
    if (cVar2 == 0xff) {
        return;
    }
    iVar1                = (u8 *) &data_02154ef4;
    *(u16 *) (iVar1 + 4) = 0;
    if (param_1 == 0x18) {
        *(u32 *) (iVar1 + 0x14) = 1;
        return;
    }
    if (param_1 == 0xd && *(u32 *) ((u8 *) &data_02154cb8 + 0x40) == 0) {
        return;
    }
    *(u32 *) (iVar1 + 0x14) = 0;
}
