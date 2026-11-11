/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a36f8 from projets/nintendogs-chihuahua-friends/src/donor/func_020a36f8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 func_020b9144(u32 a, u32 b);
extern void func_020b8b0c(u32 a, u32 b, u32 c);
extern void func_020a35a4(s32 *p, u32 a);
void func_020a36f8(s32 *param_1, s32 param_2, u32 param_3, u16 param_4, u16 param_5, u32 param_6, s32 param_7, u16 param_8) {
    s32 i;
    u32 cur;
    u32 zero;
    u32 uVar1;
    *param_1                         = param_2;
    *(u16 *) (param_1 + 6)           = param_4;
    *(u16 *) ((u8 *) param_1 + 0x1a) = param_5;
    *(u16 *) (param_1 + 7)           = param_8;
    param_1[8]                       = param_6;
    param_1[9]                       = param_7;
    cur                              = param_3;
    i                                = 0;
    zero                             = i;
    do {
        uVar1                               = func_020b9144(param_2, (u16) cur);
        *((s16 *) ((u8 *) param_1 + 4) + i) = (s16) uVar1;
        func_020b8b0c(param_2, (u16) (s32) cur, zero);
        i   = i + 1;
        cur = cur + 1;
    } while (i < 10);
    func_020a35a4(param_1, param_6);
}
