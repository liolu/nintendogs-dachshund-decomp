/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02060368 from projets/children-of-mana/src/auto/func_02060368.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern s32 data_0213b3d4;
extern u8 *func_02071510(void);
extern s32 func_0206f658(u8 *p, s32 x, u16 *a, u32 b);
extern s32 func_0206f724(u8 *p, s32 x, u16 *a, u32 b);
extern s32 func_0206f464(u8 *p, s32 x, u16 *a, u32 b);
extern s32 func_0206f6bc(u8 *p, s32 x, u16 *a, u32 b);
extern s32 func_0206f260(u8 *p, u16 *a, u32 b);
extern s32 func_0206eff8(u8 *p, u16 *a, u32 b);
extern s32 func_0206f508(u8 *p, s32 x, u16 *a, u32 b);
extern s32 func_0206f3c4(u8 *p, s32 x, u16 *a, u32 b);
extern void func_02070934(u16 *a, u32 v, s32 z);
s32 func_02070ea4(u16 *param_1, u32 param_2) {
    u8 *p5;
    s32 x;
    s32 i;

    p5 = func_02071510();
    x  = data_0213b3d4;
    for (;;) {
        x = x + 1;
        if (x > 15) {
            x = 1;
        }
        if (func_0206f658(p5, x, param_1, param_2)) {
            data_0213b3d4 = x;
            return;
        }
        if (func_0206f724(p5, x, param_1, param_2)) {
            data_0213b3d4 = x;
            return;
        }
        if (func_0206f464(p5, x, param_1, param_2)) {
            data_0213b3d4 = x;
            return;
        }
        if (func_0206f6bc(p5, x, param_1, param_2)) {
            data_0213b3d4 = x;
            return;
        }
        if (x == data_0213b3d4) {
            break;
        }
    }
    if (func_0206f260(p5, param_1, param_2)) {
        return;
    }
    if (func_0206eff8(p5, param_1, param_2)) {
        return;
    }
    x = data_0213b3d4;
    for (;;) {
        x = x + 1;
        if (x > 15) {
            x = 1;
        }
        if (func_0206f508(p5, x, param_1, param_2)) {
            data_0213b3d4 = x;
            return;
        }
        if (x == data_0213b3d4) {
            break;
        }
    }
    for (i = 1; i < 16; i++) {
        if (func_0206f3c4(p5, i, param_1, param_2)) {
            return;
        }
    }
    func_02070934(param_1, 0xfffe, 0);
}
