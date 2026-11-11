/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f5548 from projets/nintendogs-chihuahua-friends/src/donor/func_020f5548.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_021550ac;
extern s32 data_021550a4;
extern s16 data_0215507c;
extern s32 data_021550e4;
extern s32 data_0215508c;
extern s32 data_021550e0;
extern u32 data_021550ec;
extern void func_020f7cdc(void);
extern s32 func_020f4f08(void *a, u8 *p, s32 b, s32 c, s16 d);
s32 func_020f5548(u8 *param_1) {
    s32 a;
    s32 uVar1;
    if (data_021550ac == 1) {
        data_021550ac = 0;
        func_020f7cdc();
        a             = data_021550a4;
        data_0215508c = a;
        uVar1         = (a - data_021550e4) / 2;
        data_021550e0 = uVar1;
        return func_020f4f08(&data_021550ec, param_1, data_021550e4, uVar1, data_0215507c);
    }
    return 0;
}
