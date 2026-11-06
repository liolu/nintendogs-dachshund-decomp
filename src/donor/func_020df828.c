/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020df830 from projets/nintendogs-chihuahua-friends/src/donor/func_020df830.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed char s8;
typedef signed int s32;
extern u8 *data_02154ca8;
extern void func_020c2fe4(u8 *a, s32 b, s32 *c, s32 d);
extern void func_020c2fc8(u8 *a);
extern void func_020c2e0c(u8 *a, u32 b, s32 c, s32 d);
extern void func_020c2df4(u8 *a);
extern void func_020df594(void);
void func_020df828(u32 param_1, s32 param_2, s32 *param_3, s32 param_4) {
    func_020c2fe4(*(u8 **) (data_02154ca8 + 0x1c), param_2, param_3, param_4);
    if (*(s32 *) (data_02154ca8 + 0x14) != 0) {
        func_020c2fc8(*(u8 **) (data_02154ca8 + 0x1c));
        func_020c2e0c(*(u8 **) (data_02154ca8 + 0x1c), *(u16 *) (data_02154ca8 + 0x10), 1, 0x88);
        func_020c2df4(*(u8 **) (data_02154ca8 + 0x1c));
        *(s32 *) (data_02154ca8 + 0x8)  = ((*(s8 *) (*(u8 **) (data_02154ca8 + 0x24) + 0x13)) << 12) / 10;
        *(s32 *) (data_02154ca8 + 0xc)  = ((*(u8 *) (*(u8 **) (data_02154ca8 + 0x24) + 0x12)) << 12) / 10;
        *(s32 *) (data_02154ca8 + 0x14) = 0;
        *(u16 *) (data_02154ca8 + 0x10) = 0xffff;
        *(s32 *) (data_02154ca8 + 0x18) = 1;
    }
    if (*(s32 *) data_02154ca8 != 0) {
        func_020df594();
    }
}
