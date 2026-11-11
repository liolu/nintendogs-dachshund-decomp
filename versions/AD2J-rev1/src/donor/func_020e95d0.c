/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020e95c8 from projets/nintendogs-shiba-friends/src/donor/func_020e95c8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_0212ff54;
extern void func_020e9444(void);
extern void func_020e93e0(void);
extern void func_020e953c(void);
extern void func_02107ca4(u8 *p, s32 a);
extern u32 func_02003844(s32 *p, s32 n);
void func_020e95d0(u8 *param_1, s32 *param_2) {
    u32 v;

    func_02107ca4(param_1, 0x73);
    *(u32 *) (param_1 + 0x1f4) = (u32) func_020e9444;
    *(u32 *) (param_1 + 0x1f8) = (u32) func_020e93e0;
    *(u32 *) (param_1 + 0x1f0) = (u32) func_020e953c;
    *(u32 *) (param_1 + 0x214) = func_02003844(param_2, 4);
    if (*(u32 **) (param_1 + 0x214) != 0) {
        **(u32 **) (param_1 + 0x214) = 0;
    }
    *(u32 *) (param_1 + 0xac)  = 1200;
    v                          = *(u32 *) ((u8 *) &data_0212ff54 + 4);
    *(u32 *) (param_1 + 0xf8)  = v;
    *(u32 *) (param_1 + 0x120) = v;
    *(u32 *) (param_1 + 0x128) = v;
    *(u32 *) (param_1 + 0x12c) = 1;
}
