/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c5788 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020c5788.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern void func_02107c9c(u8 *o, s32 v);
extern void *func_02003844(u32 *a, s32 v);
extern u32 func_02078bf4(u32 a, u32 b);
extern void func_020c51d0(u8 *o, s32 v, void *p);
extern u8 data_02133284[];
extern u8 data_02133274[];
extern u8 data_021332a4[];
extern u8 data_02133254[];
extern u8 data_02133244[];
extern u8 data_02133294[];
extern u8 data_021332b4[];
extern u8 data_02133234[];
extern u8 data_02133264[];
extern u8 data_021332c4[];
extern void func_0210f3f8(void);
extern void func_0210e68c(void);
extern void func_0210f558(void);
extern void func_0210e630(void);
extern void func_0210e51c(void);
extern void func_0210f8c4(void);
extern void func_0210f8b4(void);
extern void func_0210f8a4(void);
extern void func_0210f894(void);
extern void func_0210f884(void);
extern void func_0210f874(void);
extern void func_0210f864(void);
extern void func_0210f854(void);
extern void func_0210f844(void);
extern void func_0210f834(void);
void func_0210f55c(u8 *param_1, u32 *param_2) {
    s32 i;
    u32 *p;
    u32 v;

    func_02107c9c(param_1, 0x4e);
    *(u32 *) (param_1 + 0x1f4)   = (u32) func_0210f3f8;
    *(u32 *) (param_1 + 0x1f8)   = (u32) func_0210e68c;
    *(u32 *) (param_1 + 0x1f0)   = (u32) func_0210f558;
    *(u32 *) (param_1 + 0x1fc)   = (u32) func_0210e630;
    *(u32 *) (param_1 + 0x200)   = (u32) func_0210e51c;
    *(u32 *) (param_1 + 0x124)   = 0x19a;
    *(u16 *) (param_1 + 0xa6)    = 2;
    *(void **) (param_1 + 0x214) = func_02003844(param_2, 0x124);

    p = *(u32 **) (param_1 + 0x214);
    i = 0;
    do {
        p[0]    = 0;
        p[1]    = 0;
        p[2]    = i * -0x1000;
        p[0x21] = 0;
        p[0x22] = 0;
        p[0x23] = 0;
        p += 3;
        i = (s16) (i + 1);
    } while (i < 11);

    if (param_1 != 0) {
        *(u32 *) (param_1 + 0x24) = 0x1000;
        *(u32 *) (param_1 + 0x28) = 0x1000;
        *(u32 *) (param_1 + 0x2c) = 0x1000;
    }

    v = func_02078bf4(*(u32 *) (*(u32 *) (param_1 + 0x1c) + 8) + 0x40, (u32) data_02133284);
    func_020c51d0(param_1, (s16) v, (void *) func_0210f8c4);
    v = func_02078bf4(*(u32 *) (*(u32 *) (param_1 + 0x1c) + 8) + 0x40, (u32) data_02133274);
    func_020c51d0(param_1, (s16) v, (void *) func_0210f8b4);
    v = func_02078bf4(*(u32 *) (*(u32 *) (param_1 + 0x1c) + 8) + 0x40, (u32) data_021332a4);
    func_020c51d0(param_1, (s16) v, (void *) func_0210f8a4);
    v = func_02078bf4(*(u32 *) (*(u32 *) (param_1 + 0x1c) + 8) + 0x40, (u32) data_02133254);
    func_020c51d0(param_1, (s16) v, (void *) func_0210f894);
    v = func_02078bf4(*(u32 *) (*(u32 *) (param_1 + 0x1c) + 8) + 0x40, (u32) data_02133244);
    func_020c51d0(param_1, (s16) v, (void *) func_0210f884);
    v = func_02078bf4(*(u32 *) (*(u32 *) (param_1 + 0x1c) + 8) + 0x40, (u32) data_02133294);
    func_020c51d0(param_1, (s16) v, (void *) func_0210f874);
    v = func_02078bf4(*(u32 *) (*(u32 *) (param_1 + 0x1c) + 8) + 0x40, (u32) data_021332b4);
    func_020c51d0(param_1, (s16) v, (void *) func_0210f864);
    v = func_02078bf4(*(u32 *) (*(u32 *) (param_1 + 0x1c) + 8) + 0x40, (u32) data_02133234);
    func_020c51d0(param_1, (s16) v, (void *) func_0210f854);
    v = func_02078bf4(*(u32 *) (*(u32 *) (param_1 + 0x1c) + 8) + 0x40, (u32) data_02133264);
    func_020c51d0(param_1, (s16) v, (void *) func_0210f844);
    v = func_02078bf4(*(u32 *) (*(u32 *) (param_1 + 0x1c) + 8) + 0x40, (u32) data_021332c4);
    func_020c51d0(param_1, (s16) v, (void *) func_0210f834);
}
