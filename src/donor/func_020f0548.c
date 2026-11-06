/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f0548 from projets/nintendogs-chihuahua-friends/src/donor/func_020f0548.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_021471a0[];
extern s16 data_02154d88;
extern u8 data_02154de0[];
extern u8 data_02154dd8[];
extern s32 func_020ed320(s32 a);
extern void func_0207472c(u8 *a, s32 b, s32 c);
extern void func_020f07bc(s32 a);
void func_020f0548(s32 param_1, s32 param_2) {
    u8 *iVar1;

    if (param_1 == 0) {
        iVar1 = (u8 *) data_021471a0[param_2];
        if (iVar1 != ((void *) 0) && param_2 != data_02154d88) {
            if (iVar1[1] == '0' && func_020ed320(0x1e) != 0) {
                func_0207472c(data_02154de0, 0x30, 9);
            }
            *(u16 *) (data_02154dd8 + 54) = 1;
        }
    }
    func_020f07bc(0x21);
}
