/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0211109c from projets/nintendogs-chihuahua-friends/src/donor/func_0211109c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
typedef struct {
    u32 a;
    u32 b;
    u32 c;
} Tri3;
typedef struct {
    u32 w[12];
} Twelve;
extern void func_02069668(s32 *a, s32 *b, s32 *c);
extern s32 func_02069430(s32 *a);
extern void func_020ec220(s32 *a, s32 b, s32 c);
static inline s32 mulr(s32 k, s32 x) {
    s64 v = (s64) k * (s64) x + 0x800;
    return (s32) (u32) (v >> 12);
}
void func_0211109c(u8 *param_1, s32 *param_2, u32 *param_3, s32 param_4, s32 param_5, s32 param_6) {
    s32 local_20[3];
    s32 iVar2;
    s32 iVar5;

    *(Tri3 *) local_20 = *(Tri3 *) param_2;
    if (local_20[0] > 0x333) {
        local_20[0] = 0x333;
    }
    if (local_20[1] > 0x333) {
        local_20[1] = 0x333;
    }
    if (local_20[2] > 0x333) {
        local_20[2] = 0x333;
    }
    if (local_20[0] < -0x333) {
        local_20[0] = -0x333;
    }
    if (local_20[1] < -0x333) {
        local_20[1] = -0x333;
    }
    if (local_20[2] < -0x333) {
        local_20[2] = -0x333;
    }
    func_02069668((s32 *) (param_1 + 0xbc), local_20, (s32 *) (param_1 + 0xbc));
    if (*(s32 *) (param_1 + 0xb4) >= 0) {
        return;
    }
    iVar5 = *(s32 *) (param_1 + 0xb0);
    if (iVar5 > 0) {
        iVar2 = iVar5;
    } else {
        iVar2 = -iVar5;
    }
    if (iVar2 < 41) {
        *(s32 *) (param_1 + 0xb0) = 0;
    } else {
        *(s32 *) (param_1 + 0xb0) = mulr(iVar5, param_5);
    }
    iVar5 = *(s32 *) (param_1 + 0xb8);
    if (iVar5 > 0) {
        iVar2 = iVar5;
    } else {
        iVar2 = -iVar5;
    }
    if (iVar2 < 41) {
        *(s32 *) (param_1 + 0xb8) = 0;
    } else {
        *(s32 *) (param_1 + 0xb8) = mulr(iVar5, param_5);
    }
    iVar2 = func_02069430((s32 *) (param_1 + 0xb0));
    if (iVar2 > 0x333) {
        if (param_6 >= 0) {
            iVar2 = *(s32 *) (param_1 + 0xb4);
            if (iVar2 > 0) {
            } else {
                iVar2 = -iVar2;
            }
            func_020ec220((s32 *) (param_1 + 400), 0, iVar2);
        }
        *(s32 *) (param_1 + 0xb4) = -mulr(*(s32 *) (param_1 + 0xb4), param_4);
        return;
    }
    *(s32 *) (param_1 + 0xb4)   = *(s32 *) (param_1 + 0xb4) - (*(s32 *) (param_1 + 0xb4) >> 2);
    *(Twelve *) (param_1 + 200) = *(Twelve *) param_3;
}
