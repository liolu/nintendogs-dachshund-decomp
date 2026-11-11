/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020e98fc from projets/nintendogs-chihuahua-friends/src/donor/func_020e98fc.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02154cb4;
extern u8 *data_02154d84;
extern u8 data_02154dd8;
extern u32 data_02154cb8[];
extern void func_020f9a68(u8 *a, u8 *b, s32 c, s32 d);
extern void func_020ed3c0(s32 a);
void func_020e98fc(s32 param_1) {
    u8 *iVar2;

    iVar2                     = data_02154cb4;
    *(u16 *) (iVar2 + 0x4e30) = 1;
    func_020f9a68(data_02154d84, iVar2, param_1, *(s16 *) ((&data_02154dd8) + 0x32) + 0x100);
    func_020ed3c0(param_1);
    data_02154cb8[10] = 1;
    data_02154cb8[11] = 1;
    data_02154cb8[12] = 0;
    data_02154cb8[13] = 0;
}
