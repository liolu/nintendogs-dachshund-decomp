/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205a84c from projets/children-of-mana/src/auto/func_0205a84c.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef void (*UnkIrqFunction)(void);
typedef struct UnkIrqCallbackInfo {
    void (*func)(void *);
    u32 enable;
    void *arg;
} UnkIrqCallbackInfo;
extern UnkIrqFunction data_027c00ac[22];
extern UnkIrqCallbackInfo data_021532d4[8];
extern void func_0207f574(u32 mask, UnkIrqFunction func);
extern UnkIrqCallbackInfo data_021532d4[8];
void func_0207f574(u32 mask, UnkIrqFunction func) {
    s32 i;
    for (i = 0; i < 22; i++) {
        if (mask & 1) {
            UnkIrqCallbackInfo *info = 0;

            if (8 <= i && i <= 11) {
                info = &data_021532d4[i - 8];
            } else if (3 <= i && i <= 6) {
                info = &data_021532d4[i + 1];
            } else {
                data_027c00ac[i] = func;
            }

            if (info != 0) {
                info->func   = (void (*)(void *)) func;
                info->arg    = 0;
                info->enable = 1;
            }
        }
        mask >>= 1;
    }
}
