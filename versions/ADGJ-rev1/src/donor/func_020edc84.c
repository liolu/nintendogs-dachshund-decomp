/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020edc84 from projets/nintendogs-chihuahua-friends/src/donor/func_020edc84.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef signed short s16;
typedef signed int s32;
extern u8 data_02154dc4[];
extern u8 data_02154dd8[];
extern u8 data_02154cb8[];
extern void func_020722b0(u32 a, u32 b, u32 c);
extern void func_020e9b68(void);
extern void func_020740fc(u32 a, s32 b);
extern void func_020e9b9c(u32 a);
extern void func_020e9c68(u32 a);
extern void func_020747c4(u8 *p, u32 a);
extern void func_02072214(u8 *p, u32 a, u32 b);
extern u64 _s32_div_f(u32 a, u32 b);
u32 func_020edc84(u32 param_1, s32 param_2) {
    s32 r8;
    u8 *p5;
    u8 *p4;

    p5 = data_02154dd8;
    p4 = data_02154dc4;
    if (param_1 == 0x1d || param_1 == 0x1e) {
        goto COMMON;
    }
    if (param_1 != 0x1f) {
        goto OTHER;
    }
    if (*(s32 *) (p4 + 0x10) == 0) {
        return 0;
    }
    func_020722b0(0x13, 0x40, 0);
    *(s32 *) (p4 + 0x10) = 0;
COMMON:
    r8 = *(s32 *) (data_02154cb8 + 4);
    if (*(u16 *) (data_02154cb8 + 24) != 0x18) {
        func_020e9b68();
    }
    func_020740fc(param_1, r8);
    goto LAB;
OTHER:
    r8 = *(s32 *) data_02154cb8;
    func_020e9b9c(3);
    func_020740fc(param_1, r8);
    func_020e9c68(4);
LAB:
    func_020747c4(p4, param_1);
    func_02072214(p4, param_2, 0);
    *(s32 *) (p4 + 0xc) = 1;
    if (*(s32 *) p5 != 0) {
        u64 uVar4 = _s32_div_f(*(s16 *) (p5 + 12), *(s32 *) (p4 + 4));
        func_02072214(p5, (u32) uVar4, 0);
    }
    return 1;
}
