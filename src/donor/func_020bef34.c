/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020bef34 from projets/nintendogs-chihuahua-friends/src/donor/func_020bef34.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02153740;
extern u8 *data_02153894;
extern u8 *data_02153720;
extern void func_020bddb8(u8 *a, s32 b);
extern void func_020a35a4(u8 *a, u32 b);
extern void func_020bf318(u32 a, u8 *b);
extern void func_020a3a70(u32 a, u32 b, u32 c);
void func_020bef34(u8 *param_1) {
    s32 iVar1;
    s32 v;

    if (*(s32 *) (data_02153740 + 0xa8) == 7) {
        func_020bddb8(param_1 + 0xc4, 1);
        func_020bddb8(param_1 + 0xe4, 1);
        v = *(s32 *) (data_02153894 + 8);
        if (v == 1) {
            goto LAB_a;
        }
        if (v != 2) {
            goto LAB_b;
        }
    LAB_a:
        func_020bddb8(param_1 + 0x104, 0);
        goto LAB_c;
    LAB_b:
        func_020bddb8(param_1 + 0x124, 0);
    LAB_c:
        *(s32 *) (param_1 + 0xb8) = (s16) (-*(s16 *) (data_02153720 + 100));
        iVar1                     = *(s16 *) (data_02153720 + 104) * 100;
        *(s32 *) (param_1 + 0xbc) = iVar1 / 60;
        func_020a35a4(param_1 + 0x18, *(u32 *) (param_1 + 0xb8));
        func_020a35a4(param_1 + 0x40, *(u32 *) (param_1 + 0xbc));
    }
    func_020bf318(0, param_1);
    if (0 < *(s32 *) (param_1 + 0x10)) {
        *(s32 *) (param_1 + 0x10) = *(s32 *) (param_1 + 0x10) - 1;
        if (*(s32 *) (param_1 + 0x10) == 0) {
            func_020a3a70(0, 4, 0);
            return;
        }
        return;
    }
}
