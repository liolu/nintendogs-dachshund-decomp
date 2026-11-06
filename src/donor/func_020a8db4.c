/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a8db4 from projets/nintendogs-chihuahua-friends/src/donor/func_020a8db4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef volatile u16 vu16;
extern u8 *data_02153744;
extern void func_0206dfbc(u32 a, u32 b, u32 c);
void func_020a8db4(s32 param_1, u32 param_2) {
    u8 *r5;
    s32 r4;
    u32 lr;
    u16 acc;
    s32 k;
    vu16 t;

    r4  = param_1 * 440;
    lr  = param_2 & 15;
    acc = 0;
    r5  = data_02153744 + 4 + r4;
    if (*(u32 *) (r5 + 8) != 0 && *(u32 *) (r5 + 4) != 0 && *(u32 *) (r5 + 0x10) != 0) {
        for (k = 0; k < 8; k++) {
            acc = (u16) (acc | (lr << (k * 4)));
        }
        t = acc;
        func_0206dfbc(t, *(u32 *) (r5 + 0x10), *(u32 *) (r5 + 0x14));
    }
    *(u32 *) (data_02153744 + r4 + 0x1b0) = 1;
}
