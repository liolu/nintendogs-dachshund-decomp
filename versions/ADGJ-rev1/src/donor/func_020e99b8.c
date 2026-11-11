/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020e99b8 from projets/nintendogs-chihuahua-friends/src/donor/func_020e99b8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 data_02154cd8[];
extern u8 data_02154dd8[];
extern u8 data_02154cb8[];
extern void func_020ee5e0(u32 a, u32 b);
extern void func_0207472c(u8 *p, s32 a, s32 b);
extern void func_02071f4c(u8 *p, s32 a, s32 b);
void func_020e99b8(void) {
    u8 *piVar1;
    piVar1 = data_02154cd8;
    if (*(s32 *) piVar1 == 0) {
        func_020ee5e0(0, 0);
        func_0207472c(piVar1, (s32) * (s16 *) (data_02154dd8 + 0x20), 0x14);
        func_02071f4c(piVar1, 8, (s32) * (s16 *) (data_02154cb8 + 0x24));
        return;
    }
}
