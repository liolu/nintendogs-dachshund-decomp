/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020eb130 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020eb130.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_021467e8[];
typedef struct {
    u32 a[6];
} S6;
extern void func_020e1194(u8 *p);
extern void func_0211272c(u8 *p);
extern void func_02112640(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
extern s32 func_02111cbc(u32 a, s32 b);
extern void func_0210fe58(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i);
extern void func_02112344(u8 *p, s32 a, u32 *b);
extern void func_021122b0(u8 *p, s32 a);
extern void func_021121c4(u8 *p);
extern void func_020e1124(void);
extern void func_020e149c(void);
extern void func_020e1304(void);
extern void func_020e12ec(void);
extern void func_020e12e0(void);
void func_020e0fd4(u8 *param_1) {
    u32 L6[6];
    s32 iVar1;
    s16 sVar;

    sVar = *(s16 *) (param_1 + 0x90);
    switch (sVar) {
        case 2:
            func_0211272c(param_1);
            return;
        case 3:
            func_02112640(param_1, 0x50, 0x50, 0x70, 0x1ec, 0x800, 4);
            iVar1 = func_02111cbc(*(u16 *) (param_1 + 0xa0), *(s32 *) (param_1 + 0xf8));
            func_0210fe58(param_1, *(s32 *) (param_1 + 0xf8), 0, 0, iVar1, (s32) func_020e149c, (s32) func_020e1304, 0,
                          (s32) func_020e12ec, (s32) func_020e12e0);
            return;
        case 1:
            func_020e1194(param_1);
            return;
        case 4:
            *(S6 *) L6 = *(S6 *) data_021467e8;
            func_02112344(param_1, (s32) func_020e1124, L6);
            return;
        case 5:
            func_021122b0(param_1, 0x1000);
            return;
        case 8:
            func_021121c4(param_1);
            return;
        case 0:
        case 6:
        case 7:
        default:
            return;
    }
}
