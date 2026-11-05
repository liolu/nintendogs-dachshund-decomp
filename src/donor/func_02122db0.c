/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02122da8 from projets/nintendogs-shiba-friends/src/donor/func_02122da8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
extern u8 *data_02153704;
extern s32 data_0214a554;
extern s32 data_0214a548;
extern s32 data_0214a54c;
extern s32 data_0214a544;
extern s32 data_0214a530;
extern s32 data_0214a524;
extern s32 data_0214a528;
extern s32 data_0214a568;
extern s32 func_021081a4(void);
extern s32 func_02108194(void);
extern s32 func_0211290c(s32 a);
extern void func_02114dfc(s32 *a, s32 *b, s32 c);
extern void func_02122910(s32 *p, s32 a);
extern s32 func_020619e4(void);
static inline s32 FX_Mul(s32 v1, s32 v2) {
    return (s32) (((s64) v1 * v2 + 0x800LL) >> 12);
}
static inline s32 RandLerp(s32 start, s32 end) {
    s32 t = (s32) (func_020619e4() << 12) / 0x7fff;
    return start + FX_Mul(end - start, t);
}
void func_02122db0(s32 *param_1) {
    s32 local[3];
    s32 iVar7;
    s32 iVar8;
    u32 uVar6;
    s32 t;
    s32 u;
    s32 v;
    s64 lVar1;

    *(volatile s32 *) param_1 = 1;
    if (*(volatile s32 *) param_1 == 0) {
        return;
    }
    *(volatile s32 *) param_1 = 0;
    iVar7                     = *(volatile s32 *) param_1;
    switch (iVar7) {
        case 0:
            func_02122910(param_1, 1);
            return;
        case 1: {
            s32 a;
            a                                = func_021081a4();
            local[1]                         = func_02108194();
            local[0]                         = 0;
            local[2]                         = a;
            *(s16 *) ((u8 *) param_1 + 0x42) = (s16) func_0211290c(-1);
            func_02114dfc(param_1 + 1, local, *(s16 *) ((u8 *) param_1 + 0x42));
        }
            return;
        case 2:
            if (*(u16 *) (data_02153704 + 6) != 0x12) {
                param_1[13] = data_0214a554;
                *(s16 *) (param_1 + 14) =
                    (s16) ((((s64) RandLerp(data_0214a54c, data_0214a548) * 0xb60b60b60bLL) + 0x80000000000LL) >> 44);
                param_1[15] = data_0214a544;
            } else {
                param_1[13] = data_0214a530;
                *(s16 *) (param_1 + 14) =
                    (s16) ((((s64) RandLerp(data_0214a528, data_0214a524) * 0xb60b60b60bLL) + 0x80000000000LL) >> 44);
                param_1[15] = data_0214a568;
            }
            return;
    }
}
