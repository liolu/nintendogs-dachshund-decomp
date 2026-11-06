/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02003e88 from projets/nintendogs-chihuahua-friends/src/donor/func_02003e88.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef unsigned long long u64;
extern u32 data_021338dc;
extern u32 data_0214a798;
typedef void (*FnV)(void);
extern u64 func_02080f5c(void);
extern u32 func_0205d9b0(u32 lo, u32 hi, u32 a, u32 b);
void func_02003e88(void) {
    u64 t;
    u64 d;
    u64 x;
    u8 *p;

    ((FnV) (*(u32 *) ((u8 *) &data_021338dc + 0xc)))();
    t                   = func_02080f5c();
    p                   = *(u8 **) &data_0214a798;
    *(u32 *) (p + 0x28) = *(u32 *) (p + 0x28) + 1;
    p                   = *(u8 **) &data_0214a798;
    x                   = *(u64 *) (p + 0xcc);
    d                   = t - x;
    *(u32 *) (p + 0xd8) = func_0205d9b0((u32) (d * 64000), (u32) ((d * 64000) >> 32), 0x82ea, 0);
    p                   = *(u8 **) &data_0214a798;
    x                   = *(u64 *) (p + 0xc4);
    d                   = t - x;
    *(u32 *) (p + 0xdc) = func_0205d9b0((u32) (d * 64000), (u32) ((d * 64000) >> 32), 0x82ea, 0);
}
