/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209944c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0209944c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef volatile u32 vu32;
extern u8 *data_02154c70;
extern void func_0206d0a8(u8 *a, s32 b, s32 c);
extern void func_0206d040(u8 *a, s32 b, s32 c);
extern void func_0206c7d4(u32 *a, s32 b, s32 c);
extern void func_0206c9dc(u32 *a, s32 b, s32 c);
extern void func_0206cb14(u8 *a, s32 b, s32 c);
extern void func_0206cd1c(u8 *a, s32 b, s32 c);
void func_020cec68(void) {
    *(u16 *) (data_02154c70 + 0x6c) = 0;
    *(u16 *) (data_02154c70 + 0x7a) = 0xffff;
    func_0206d0a8(data_02154c70 + 0x1c, 0x1c0, 0x40);
    func_0206d040(data_02154c70 + 0x1c, 0x1c0, 0x40);
    func_0206c7d4(*(u32 **) (*(u8 **) data_02154c70 + 0x14), 0x1800, 0x800);
    func_0206c9dc(*(u32 **) (*(u8 **) data_02154c70 + 0x14), 0x1800, 0x800);
    func_0206cb14(*(u8 **) (data_02154c70 + 4) + 0xc, 0, 0x800);
    func_0206cd1c(*(u8 **) (data_02154c70 + 4) + 0xc, 0, 0x800);
    *(vu32 *) 0x04000000            = *(vu32 *) 0x04000000 & 0xfffff7ff;
    *(vu32 *) 0x04001000            = *(vu32 *) 0x04001000 & 0xfffffeff;
    *(s32 *) (data_02154c70 + 0xa8) = 1;
}
