/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020dd7e4 from projets/nintendogs-shiba-friends/src/donor/func_020dd7e4.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef struct {
    u32 a[6];
} T6;
extern u8 data_02145694[];
extern void func_020dd9bc(u8 *p);
extern void func_0211272c(u8 *p);
extern void func_02112640(u8 *p, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
extern s32 func_02111cbc(u32 a, u32 b);
extern void func_0210fe58(u8 *p, u32 a, u8 *b, u8 *c, s32 d, u32 e, u32 f, u32 g, u32 h, u32 i);
extern void func_02112344(u8 *p, u32 a, u32 *b);
extern void func_021122b0(u8 *p, u32 a);
extern void func_021121c4(u8 *p);
extern void func_020ddb74(void);
extern void func_020ddb40(void);
extern void func_020ddb24(void);
extern void func_020ddb18(void);
extern void func_020dd948(void);
void func_020dd7ec(u8 *param_1) {
    s32 iVar1;
    u8 *iv;
    u32 loc[6];

    switch (*(s16 *) (param_1 + 0x90)) {
        case 2:
            func_0211272c(param_1);
            return;
        case 3:
            iv = *(u8 **) (*(u8 **) (param_1 + 0x214));
            func_02112640(param_1, *(u32 *) (iv + 0x48), *(u32 *) (iv + 0x4c), *(u32 *) (iv + 0x50), *(u32 *) (iv + 0x54),
                          *(u32 *) (iv + 0x58), 4);
            iVar1 = func_02111cbc(*(u16 *) (param_1 + 0xa0), *(u32 *) (param_1 + 0xf8));
            func_0210fe58(param_1, *(u32 *) (param_1 + 0xf8), param_1 + 0xfc, param_1 + 0x108, iVar1, (u32) func_020ddb74, 0,
                          (u32) func_020ddb40, (u32) func_020ddb24, (u32) func_020ddb18);
            return;
        case 1:
            func_020dd9bc(param_1);
            return;
        case 4:
            *(T6 *) loc = *(T6 *) data_02145694;
            func_02112344(param_1, (u32) func_020dd948, loc);
            return;
        case 5:
            func_021122b0(param_1, 0x1000);
            return;
        case 8:
            func_021121c4(param_1);
            break;
    }
}
