/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02106264 from projets/nintendogs-chihuahua-friends/src/donor/func_02106264.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_0215607c;
extern u8 data_02124be0[];
extern u8 data_02148924[];
extern u8 func_021059c4[];
extern u8 func_02105868[];
extern u8 *func_02003844(s32 *p, s32 n);
extern void func_021081f8(s32 *p);
extern void func_020c4818(u8 *p);
extern void func_020c4eac(u8 *p, s32 v);
extern void func_0200668c(u32 a, s32 b);
s32 func_02106264(s32 *param_1) {
    u8 *g;

    data_0215607c = func_02003844(param_1, 0x340);
    func_021081f8(param_1);
    func_020c4818(data_0215607c);
    func_020c4eac(data_0215607c, (s32) func_021059c4);
    g                               = data_0215607c;
    *(u16 *) (g + 0x6c)             = *(s16 *) (data_02124be0 + 0xc4);
    *(u16 *) (g + 0x6e)             = *(s16 *) (data_02124be0 + 0xc6);
    *(u32 *) (data_0215607c + 0x74) = 0x1000;
    *(u32 *) (data_0215607c + 0x78) = 0x2bc000;
    *(u32 *) (data_0215607c + 0x34) = 0x8000;
    *(u32 *) (data_0215607c + 0x7c) = 0;
    *(u16 *) (data_0215607c + 0x82) = 1;
    *(u16 *) (data_0215607c + 0x84) = 0;
    *(u16 *) (data_0215607c + 0x86) = 0;
    *(u16 *) (data_0215607c + 0x80) = 0;
    func_021081f8(param_1);
    func_0200668c(*(u16 *) data_02148924, (s32) func_02105868);
    return (s32) data_0215607c;
}
