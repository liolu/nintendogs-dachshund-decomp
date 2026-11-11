/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d9494 from projets/nintendogs-chihuahua-friends/src/donor/func_020d9494.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02154ca0;
extern u32 data_0212db6c[];
extern void func_020c4eb0(u8 *a, s32 b);
extern void func_020c4d80(s32 a);
extern void func_0207e76c(s32 a, u8 *b);
extern void func_0207e3b0(s32 a, s32 b);
extern void func_0207e40c(s32 a, s32 b);
s32 func_020d948c(s32 param_1) {
    u8 *iVar5;
    s32 off;
    u8 *iVar2;
    void (*cb)(s32, s32, s32);
    s32 t;
    s32 v;

    if (*(s16 *) (data_02154ca0 + 0x174) != param_1) {
        *(u32 *) (data_02154ca0 + param_1 * 4 + 0x178) = 0;
        iVar2                                          = data_02154ca0;
        off                                            = param_1 * 12;
        cb                                             = *(void (**)(s32, s32, s32))(iVar2 + 0x2c);
        iVar5                                          = iVar2 + 0x150 + off;
        if (cb != 0) {
            cb(1, param_1, *(s16 *) (iVar2 + param_1 * 8 + 0x184));
        }
        func_020c4eb0(data_02154ca0 + 4, *(s32 *) (iVar5 + 4));
        *(u32 *) (iVar5 + 4) = 0;
        v                    = *(s32 *) (data_02154ca0 + off + 0x134);
        if (v != 0) {
            func_020c4d80(v);
        }
        iVar2 = data_02154ca0 + 0x30 + param_1 * 84;
        func_0207e76c(*(s32 *) (iVar2 + 0x4c), data_02154ca0 + 0x30);
        off                     = (u32) param_1 * 12;
        *(u32 *) (iVar2 + 0x4c) = 0;
        t                       = data_0212db6c[param_1];
        func_0207e3b0(*(s32 *) (data_02154ca0 + off + 0x158), t);
        func_0207e40c(*(s32 *) (data_02154ca0 + off + 0x158), t);
        return 1;
    }
    return 0;
}
