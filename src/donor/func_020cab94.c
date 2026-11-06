/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020cab94 from projets/nintendogs-chihuahua-friends/src/donor/func_020cab94.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef volatile u16 vu16;
extern u32 data_02154c48;
extern void func_0206dfbc(u32 a, u32 b, u32 c);
void func_020cab94(s16 param_1) {
    u8 *p;
    s32 iVar1;
    vu16 z;
    p     = *(u8 **) &data_02154c48;
    iVar1 = *(s32 *) (p + param_1 * 24 + 0x144c);
    z     = 0;
    func_0206dfbc((u32) z, (u32) (iVar1 + 4), 0x85c);
    *(u16 *) (iVar1 + 4)                 = 0xffff;
    *(u16 *) ((u8 *) iVar1 + 2048 + 254) = *(u16 *) ((u8 *) iVar1 + 2048 + 254) | 1;
}
