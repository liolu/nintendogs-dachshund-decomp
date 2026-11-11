/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0210f564 from projets/nintendogs-chihuahua-friends/src/donor/func_0210f564.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern void func_02107ca4(u8 *o, s32 v);
extern void *func_02003844(u32 *a, s32 v);
extern u32 func_02078bf4(u32 a, u32 b);
extern void func_020c51d4(u8 *o, s32 v, void *p);
extern u8 data_0213328c[];
extern u8 data_0213327c[];
extern u8 data_021332ac[];
extern u8 data_0213325c[];
extern u8 data_0213324c[];
extern u8 data_0213329c[];
extern u8 data_021332bc[];
extern u8 data_0213323c[];
extern u8 data_0213326c[];
extern u8 data_021332cc[];
extern void func_0210f400(void);
extern void func_0210e694(void);
extern void func_0210f560(void);
extern void func_0210e638(void);
extern void func_0210e524(void);
extern void func_0210f8cc(void);
extern void func_0210f8bc(void);
extern void func_0210f8ac(void);
extern void func_0210f89c(void);
extern void func_0210f88c(void);
extern void func_0210f87c(void);
extern void func_0210f86c(void);
extern void func_0210f85c(void);
extern void func_0210f84c(void);
extern void func_0210f83c(void);
void func_0210f564(u8 *param_1, u32 *param_2) {
    s32 i;
    u32 *p;
    u32 v;

    func_02107ca4(param_1, 0x4e);
    *(u32 *) (param_1 + 0x1f4)   = (u32) func_0210f400;
    *(u32 *) (param_1 + 0x1f8)   = (u32) func_0210e694;
    *(u32 *) (param_1 + 0x1f0)   = (u32) func_0210f560;
    *(u32 *) (param_1 + 0x1fc)   = (u32) func_0210e638;
    *(u32 *) (param_1 + 0x200)   = (u32) func_0210e524;
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

    v = func_02078bf4(*(u32 *) (*(u32 *) (param_1 + 0x1c) + 8) + 0x40, (u32) data_0213328c);
    func_020c51d4(param_1, (s16) v, (void *) func_0210f8cc);
    v = func_02078bf4(*(u32 *) (*(u32 *) (param_1 + 0x1c) + 8) + 0x40, (u32) data_0213327c);
    func_020c51d4(param_1, (s16) v, (void *) func_0210f8bc);
    v = func_02078bf4(*(u32 *) (*(u32 *) (param_1 + 0x1c) + 8) + 0x40, (u32) data_021332ac);
    func_020c51d4(param_1, (s16) v, (void *) func_0210f8ac);
    v = func_02078bf4(*(u32 *) (*(u32 *) (param_1 + 0x1c) + 8) + 0x40, (u32) data_0213325c);
    func_020c51d4(param_1, (s16) v, (void *) func_0210f89c);
    v = func_02078bf4(*(u32 *) (*(u32 *) (param_1 + 0x1c) + 8) + 0x40, (u32) data_0213324c);
    func_020c51d4(param_1, (s16) v, (void *) func_0210f88c);
    v = func_02078bf4(*(u32 *) (*(u32 *) (param_1 + 0x1c) + 8) + 0x40, (u32) data_0213329c);
    func_020c51d4(param_1, (s16) v, (void *) func_0210f87c);
    v = func_02078bf4(*(u32 *) (*(u32 *) (param_1 + 0x1c) + 8) + 0x40, (u32) data_021332bc);
    func_020c51d4(param_1, (s16) v, (void *) func_0210f86c);
    v = func_02078bf4(*(u32 *) (*(u32 *) (param_1 + 0x1c) + 8) + 0x40, (u32) data_0213323c);
    func_020c51d4(param_1, (s16) v, (void *) func_0210f85c);
    v = func_02078bf4(*(u32 *) (*(u32 *) (param_1 + 0x1c) + 8) + 0x40, (u32) data_0213326c);
    func_020c51d4(param_1, (s16) v, (void *) func_0210f84c);
    v = func_02078bf4(*(u32 *) (*(u32 *) (param_1 + 0x1c) + 8) + 0x40, (u32) data_021332cc);
    func_020c51d4(param_1, (s16) v, (void *) func_0210f83c);
}
