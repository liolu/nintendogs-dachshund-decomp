/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef signed char s8;
typedef struct CallbackNode {
    void (*func)(void);
    void *arg;
    struct CallbackNode *next;
} CallbackNode;
extern s8 data_0214fddc;
extern u32 data_0214fde4;
extern u32 data_0214fde0;
extern CallbackNode data_0214fdf4;
extern CallbackNode data_0214fde8;
extern void func_020701bc(void);
extern void func_020701b0(void);
extern void func_020c52d0(void);
extern void func_02002240(CallbackNode *node);
extern void func_02002228(CallbackNode *node);
extern void *func_020702d4(void);
extern void func_02071968(void);
extern void func_02070ae0(void);

/* SoundSystem_Init from https://github.com/sturmds/advance-wars-dual-strike-decomp src/game/main/sound/sound_system_init.c
 * (license: CC0-1.0), reused by tools/donor_match.py */
void func_0207022c(void) {
    if (data_0214fde4 != 0) {
        return;
    }
    data_0214fde4 = 1;
    func_020c52d0();
    data_0214fde8.func = func_020701bc;
    data_0214fde8.arg  = ((void *) 0);
    data_0214fdf4.func = func_020701b0;
    data_0214fdf4.arg  = ((void *) 0);
    func_02002240(&data_0214fde8);
    func_02002228(&data_0214fdf4);
    func_020702d4();
    func_02071968();
    func_02070ae0();
    data_0214fddc = -1;
    data_0214fde0 = 1;
}
