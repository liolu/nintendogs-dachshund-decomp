/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* PM_GoSleepMode from https://github.com/sturmds/advance-wars-dual-strike-decomp src/sdk/pm/pm_go_sleep_mode.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef int BOOL;
extern void func_02068800(void);
extern void func_0206884c(void);
typedef volatile u32 vu32;
typedef u32 OSIrqMask;
extern OSIrqMask func_0207ed54(OSIrqMask mask);
extern OSIrqMask func_0207edd4(OSIrqMask mask);
extern int func_02080c28(void);
extern void func_02080c3c(int state);
extern void func_02080c98(u32 cycles);
typedef struct PowerHookEntry PowerHookEntry;
struct PowerHookEntry {
    void (*callback)(void *arg);
    void *arg;
    PowerHookEntry *next;
};
extern void func_02002258(PowerHookEntry *list);
extern BOOL func_02002330(void);
extern BOOL func_0200236c(int on, int led, BOOL force, BOOL sync);
extern PowerHookEntry *data_0214cd08;
extern PowerHookEntry *data_0214cd10;
extern void func_02080c8c(void);
extern BOOL func_02000cd0(void);
extern int func_020026c4(int *topBackLight, int *bottomBackLight);
extern int func_0200276c(void);
extern int func_020027c0(int target, int value);
extern int func_0200288c(int led);
extern int func_02002b14(u16 trigger, u16 keys);
static inline u16 SetIme(u16 value) {
    u16 previous                   = *((volatile u16 *) 0x04000208);
    *((volatile u16 *) 0x04000208) = value;
    return previous;
}
void func_0200245c(u32 trigger, u16 logic, u16 keyPattern) {
    u16 savedIme;
    BOOL cardEjected;
    volatile int savedInterrupts;
    u32 savedDispcnt;
    u32 savedSubDispcnt;
    u32 now;
    vu32 savedIrqMask;
    volatile BOOL lcdWasOn;
    int topBackLight;
    u16 command;
    int bottomBackLight;
    vu32 tick;

    cardEjected = 0;

    func_02002258(data_0214cd08);
    savedIme        = SetIme(0);
    savedInterrupts = func_02080c28();
    savedIrqMask    = func_0207ed54(0x3fffff);
    func_0207edd4(0x40000);
    func_02080c3c(savedInterrupts);
    SetIme(1);

    if (trigger & 0x8) {
        if (*((volatile u16 *) 0x027ffc40) == 2) {
            trigger &= ~0x8;
        }
    }
    if (trigger & 0x10) {
        if (!func_02000cd0()) {
            trigger &= ~0x10;
        }
    }

    savedDispcnt    = *((volatile u32 *) 0x04000000);
    savedSubDispcnt = *((volatile u32 *) 0x04001000);
    lcdWasOn        = func_02002330();
    func_020026c4(&topBackLight, &bottomBackLight);
    func_020027c0(2, 0);

    tick = *((volatile u32 *) 0x027ffc3c);
    do {
        now = *((volatile u32 *) 0x027ffc3c);
    } while (tick == now);
    tick = *((volatile u32 *) 0x027ffc3c);
    func_0206884c();
    *((volatile u32 *) 0x04001000) &= ~0x10000;
    do {
        now = *((volatile u32 *) 0x027ffc3c);
    } while (tick == now);
    tick = *((volatile u32 *) 0x027ffc3c);
    do {
        now = *((volatile u32 *) 0x027ffc3c);
    } while (tick == now);

    command = trigger | (topBackLight << 5) | (bottomBackLight << 6);
    while (func_02002b14(command, logic | keyPattern) != 0) {
    }

    func_02080c8c();
    func_02080c98(0x332340);

    if (trigger & 0x8) {
        if (*((volatile u32 *) 0x04000214) & 0x100000) {
            cardEjected = 1;
        }
    }
    if (!cardEjected) {
        if (lcdWasOn == 1) {
            func_0200236c(1, 1, 1, 0);
            func_02068800();
        } else {
            func_0200288c(1);
        }
        *((volatile u32 *) 0x04000000) = savedDispcnt;
        *((volatile u32 *) 0x04001000) = savedSubDispcnt;
    }

    func_02080c28();
    func_0207edd4(savedIrqMask);
    func_02080c3c(savedInterrupts);
    SetIme(savedIme);
    if (cardEjected) {
        func_0200276c();
    }
    func_02002258(data_0214cd10);
}
