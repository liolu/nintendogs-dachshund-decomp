/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02077594 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_interrupt.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef struct UnkIrqCallbackInfo {
    void (*func)(void *);
    u32 enable;
    void *arg;
} UnkIrqCallbackInfo;
extern UnkIrqCallbackInfo data_021532d4[8];
extern void _Z24SetDMACompletionCallbackiPFviEi(u32 dmaNo, void (*func)(void *), void *arg);
extern u32 _Z24EnableSpecificInterruptsj(u32 mask);
extern UnkIrqCallbackInfo data_021532d4[8];
void _Z24SetDMACompletionCallbackiPFviEi(u32 dmaNo, void (*func)(void *), void *arg) {
    u32 mask                    = 1 << (dmaNo + 8);
    data_021532d4[dmaNo].func   = func;
    data_021532d4[dmaNo].arg    = arg;
    data_021532d4[dmaNo].enable = _Z24EnableSpecificInterruptsj(mask) & mask;
}
u32 _Z24EnableSpecificInterruptsj(u32 mask);
