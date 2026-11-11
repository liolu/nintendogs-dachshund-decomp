/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02077360 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_irqwait.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef volatile u32 vu32;
typedef struct UnkIrqCallbackInfo {
    void (*func)(void *);
    u32 enable;
    void *arg;
} UnkIrqCallbackInfo;
extern u8 data_027c0000[];
extern UnkIrqCallbackInfo data_021532d4[8];
extern u16 data_0213b66c[8];
extern u32 func_0207f39c(u32 mask);
void func_0207f2c8(int index) {
    u32 mask             = 1 << data_0213b66c[index];
    void (*func)(void *) = data_021532d4[index].func;

    data_021532d4[index].func = 0;
    if (func != 0) {
        func(data_021532d4[index].arg);
    }

    (*(vu32 *) ((u32) data_027c0000 + 0x3FF8)) |= mask;

    if (!data_021532d4[index].enable) {
        func_0207f39c(mask);
    }
}
