/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d8e44 from projets/nintendogs-chihuahua-friends/src/donor/func_020d8e44.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_021467e8[];
typedef struct {
    u32 a[6];
} S6;
extern void func_020e118c(u8 *p);
extern void func_02112724(u8 *p);
extern void func_02112638(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
extern s32 func_02111cb4(u32 a, s32 b);
extern void func_0210fe50(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i);
extern void func_0211233c(u8 *p, s32 a, u32 *b);
extern void func_021122a8(u8 *p, s32 a);
extern void func_021121bc(u8 *p);
extern void func_020e111c(void);
extern void func_020e1494(void);
extern void func_020e12fc(void);
extern void func_020e12e4(void);
extern void func_020e12d8(void);
void func_020e0fcc(u8 *param_1) {
    u32 L6[6];
    s32 iVar1;
    s16 sVar;

    sVar = *(s16 *) (param_1 + 0x90);
    switch (sVar) {
        case 2:
            func_02112724(param_1);
            return;
        case 3:
            func_02112638(param_1, 0x50, 0x50, 0x70, 0x1ec, 0x800, 4);
            iVar1 = func_02111cb4(*(u16 *) (param_1 + 0xa0), *(s32 *) (param_1 + 0xf8));
            func_0210fe50(param_1, *(s32 *) (param_1 + 0xf8), 0, 0, iVar1, (s32) func_020e1494, (s32) func_020e12fc, 0,
                          (s32) func_020e12e4, (s32) func_020e12d8);
            return;
        case 1:
            func_020e118c(param_1);
            return;
        case 4:
            *(S6 *) L6 = *(S6 *) data_021467e8;
            func_0211233c(param_1, (s32) func_020e111c, L6);
            return;
        case 5:
            func_021122a8(param_1, 0x1000);
            return;
        case 8:
            func_021121bc(param_1);
            return;
        case 0:
        case 6:
        case 7:
        default:
            return;
    }
}
