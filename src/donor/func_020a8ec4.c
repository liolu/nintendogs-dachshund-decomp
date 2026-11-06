/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a8ec4 from projets/nintendogs-chihuahua-friends/src/donor/func_020a8ec4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef volatile u16 vu16;
extern u32 data_02153744;
extern void func_0206dfbc(u16 a, void *b, u32 c);
void func_020a8ec4(void) {
    s32 iVar2;
    vu16 zero;
    u8 *iVar3;

    iVar2                         = 0;
    *(u16 *) (u8 *) data_02153744 = 0;
    *(u16 *) (u8 *) data_02153744 = 0;
    iVar3                         = (u8 *) data_02153744 + 4;
    do {
        *(u32 *) (iVar3 + 4)    = 0;
        *(u32 *) (iVar3 + 8)    = 0;
        *(u16 *) (iVar3 + 0xc)  = 0;
        *(u16 *) (iVar3 + 0xe)  = 0;
        *(u32 *) (iVar3 + 0x14) = 0;
        zero                    = 0;
        func_0206dfbc(zero, iVar3 + 0x18, 0x1a0);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x1b8;
    } while (iVar2 < 0x18);
    *(u32 *) ((u8 *) data_02153744 + 0x7348) = (u32) ((u8 *) data_02153744 + 0x2948);
}
