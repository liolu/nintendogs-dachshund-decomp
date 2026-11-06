/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020cabfc from projets/nintendogs-chihuahua-friends/src/donor/func_020cabfc.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
extern u32 data_02154c48;
extern void func_0206dfd4(u8 *, u8 *, u32);
void func_020cabfc(u8 *param_1, s16 param_2) {
    u8 *iVar1;
    iVar1 = *(u8 **) ((u8 *) data_02154c48 + param_2 * 24 + 0x144c);
    func_0206dfd4(param_1, iVar1 + 4, 0x85c);
    *(u16 *) (iVar1 + 0x8fe) = *(u16 *) (iVar1 + 0x8fe) | 1;
}
