/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020efb4c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020efb4c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef struct {
    u32 a[6];
} T6;
extern u8 data_02145694[];
extern void func_020dd9b4(u8 *p);
extern void func_02112724(u8 *p);
extern void func_02112638(u8 *p, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
extern s32 func_02111cb4(u32 a, u32 b);
extern void func_0210fe50(u8 *p, u32 a, u8 *b, u8 *c, s32 d, u32 e, u32 f, u32 g, u32 h, u32 i);
extern void func_0211233c(u8 *p, u32 a, u32 *b);
extern void func_021122a8(u8 *p, u32 a);
extern void func_021121bc(u8 *p);
extern void func_020ddb6c(void);
extern void func_020ddb38(void);
extern void func_020ddb1c(void);
extern void func_020ddb10(void);
extern void func_020dd940(void);
void func_020dd7e4(u8 *param_1) {
    s32 iVar1;
    u8 *iv;
    u32 loc[6];

    switch (*(s16 *) (param_1 + 0x90)) {
        case 2:
            func_02112724(param_1);
            return;
        case 3:
            iv = *(u8 **) (*(u8 **) (param_1 + 0x214));
            func_02112638(param_1, *(u32 *) (iv + 0x48), *(u32 *) (iv + 0x4c), *(u32 *) (iv + 0x50), *(u32 *) (iv + 0x54),
                          *(u32 *) (iv + 0x58), 4);
            iVar1 = func_02111cb4(*(u16 *) (param_1 + 0xa0), *(u32 *) (param_1 + 0xf8));
            func_0210fe50(param_1, *(u32 *) (param_1 + 0xf8), param_1 + 0xfc, param_1 + 0x108, iVar1, (u32) func_020ddb6c, 0,
                          (u32) func_020ddb38, (u32) func_020ddb1c, (u32) func_020ddb10);
            return;
        case 1:
            func_020dd9b4(param_1);
            return;
        case 4:
            *(T6 *) loc = *(T6 *) data_02145694;
            func_0211233c(param_1, (u32) func_020dd940, loc);
            return;
        case 5:
            func_021122a8(param_1, 0x1000);
            return;
        case 8:
            func_021121bc(param_1);
            break;
    }
}
