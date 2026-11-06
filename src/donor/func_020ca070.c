/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ca070 from projets/nintendogs-chihuahua-friends/src/donor/func_020ca070.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02154c48;
extern void func_0206dfd4(s32 a, s32 b, u32 c);
void func_020ca070(s32 param_1, s16 param_2, u32 param_3) {
    s32 iVar1;
    s32 iVar2;
    iVar1 = (s32) data_02154c48 + 0x155c;
    iVar2 = param_2 * 24 + iVar1;
    iVar2 = *(s32 *) (iVar2 + 4) * (s32) (u16) param_3 + *(s32 *) (iVar2 + 0x10);
    func_0206dfd4(param_1, iVar2 + 4, 0x13c);
    *(u16 *) (iVar2 + 0x186) = *(u16 *) (iVar2 + 0x186) | 1;
}
