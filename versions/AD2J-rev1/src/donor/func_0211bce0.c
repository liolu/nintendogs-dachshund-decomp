/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0211bcd8 from projets/nintendogs-shiba-friends/src/donor/func_0211bcd8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_02153720;
extern u32 data_02156080;
extern void func_02044644(s32 a);
extern void func_02113ab0(void *a, s32 b, s32 c);
extern void func_02119bf0(u8 *a, s32 b);
extern void func_0211290c(s32 a);
extern void func_021199f8(u8 *a, u8 *b, s32 *c, s32 d, s32 e, s32 f);
void func_0211bce0(u8 *param_1, s32 param_2) {
    s32 iVar1;
    s32 idx;
    s32 aiStack_38[10];
    func_02044644(0);
    idx = (s16) * (s16 *) (*(u8 **) &data_02153720 + 0x7a);
    if (idx < 0 || *(s16 *) (*(u8 **) &data_02156080 + 0x20) <= idx) {
        iVar1 = 0;
    } else {
        iVar1 = *(s32 *) (*(u8 **) &data_02156080 + idx * 4 + 4);
    }
    switch (*(u32 *) (param_1 + 0x28)) {
        case 0:
            func_02113ab0(param_1, 0, 40960);
            func_02119bf0(param_1, param_2);
            if (iVar1 == 0) {
                return;
            }
            *(u32 *) (param_1 + 0x28) = 1;
            func_02113ab0(param_1, 1, 40960);
            return;
        case 1:
            func_0211290c(-1);
            func_02113ab0(aiStack_38, 2, 40960);
            func_021199f8(param_1, param_1, aiStack_38, 128, 32, 64);
            func_02119bf0(param_1, param_2);
            return;
    }
}
