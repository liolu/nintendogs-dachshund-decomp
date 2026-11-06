/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020df9a0 from projets/nintendogs-chihuahua-friends/src/donor/func_020df9a0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern u8 data_02154ca8[];
extern u32 func_02003844(u32 *p, u32 a);
extern u16 *func_020c356c(u32 *p);
extern void func_020df208(void);
void func_020df998(u32 *param_1, u32 param_2) {
    u8 *piVar1;
    u32 uVar2;
    u32 uVar3;
    u32 iVar4;
    u16 *puVar5;
    iVar4                                     = func_02003844(param_1, 0x28);
    *(u32 *) data_02154ca8                    = iVar4;
    puVar5                                    = func_020c356c(param_1);
    uVar2                                     = (u32) func_020df208;
    piVar1                                    = *(u8 **) data_02154ca8;
    *(u16 **) (*(u8 **) data_02154ca8 + 0x1c) = puVar5;

    *(u32 *) (*(u8 **) (*(u8 **) data_02154ca8 + 0x1c) + 0x2c) = uVar2;
    *(u32 *) *(u8 **) data_02154ca8                            = 0;
    *(u32 *) (*(u8 **) data_02154ca8 + 4)                      = 1;
    *(u16 *) (*(u8 **) data_02154ca8 + 0x10)                   = 0xffff;
    *(u32 *) (*(u8 **) data_02154ca8 + 0x14)                   = 0;
    *(u32 *) (*(u8 **) data_02154ca8 + 0x18)                   = 0;
    *(u32 *) (*(u8 **) data_02154ca8 + 0x20)                   = param_2;
}
