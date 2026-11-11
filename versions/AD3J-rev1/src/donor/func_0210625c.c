/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020bc2dc from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020bc2dc.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_0215607c;
extern u8 data_02124bd8[];
extern u8 data_02148924[];
extern u8 func_021059bc[];
extern u8 func_02105860[];
extern u8 *func_02003844(s32 *p, s32 n);
extern void func_021081f0(s32 *p);
extern void func_020c4814(u8 *p);
extern void func_020c4ea8(u8 *p, s32 v);
extern void func_0200668c(u32 a, s32 b);
s32 func_0210625c(s32 *param_1) {
    u8 *g;

    data_0215607c = func_02003844(param_1, 0x340);
    func_021081f0(param_1);
    func_020c4814(data_0215607c);
    func_020c4ea8(data_0215607c, (s32) func_021059bc);
    g                               = data_0215607c;
    *(u16 *) (g + 0x6c)             = *(s16 *) (data_02124bd8 + 0xc4);
    *(u16 *) (g + 0x6e)             = *(s16 *) (data_02124bd8 + 0xc6);
    *(u32 *) (data_0215607c + 0x74) = 0x1000;
    *(u32 *) (data_0215607c + 0x78) = 0x2bc000;
    *(u32 *) (data_0215607c + 0x34) = 0x8000;
    *(u32 *) (data_0215607c + 0x7c) = 0;
    *(u16 *) (data_0215607c + 0x82) = 1;
    *(u16 *) (data_0215607c + 0x84) = 0;
    *(u16 *) (data_0215607c + 0x86) = 0;
    *(u16 *) (data_0215607c + 0x80) = 0;
    func_021081f0(param_1);
    func_0200668c(*(u16 *) data_02148924, (s32) func_02105860);
    return (s32) data_0215607c;
}
