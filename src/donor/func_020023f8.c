/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0200245c from projets/nintendogs-dachshund/src/donor/func_0200245c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef int BOOL;
extern void func_02069bf8(void);
extern void func_02069c44(void);
typedef volatile u32 vu32;
typedef u32 OSIrqMask;
extern OSIrqMask func_0207f39c(OSIrqMask mask);
extern OSIrqMask func_0207f41c(OSIrqMask mask);
extern int func_0208120c(void);
extern void func_02081220(int state);
extern void func_0208127c(u32 cycles);
typedef struct PowerHookEntry PowerHookEntry;
struct PowerHookEntry {
    void (*callback)(void *arg);
    void *arg;
    PowerHookEntry *next;
};
extern void func_020021f4(PowerHookEntry *list);
extern BOOL func_020022cc(void);
extern BOOL func_02002308(int on, int led, BOOL force, BOOL sync);
extern PowerHookEntry *data_0214a708;
extern PowerHookEntry *data_0214a710;
extern void func_02081270(void);
extern BOOL func_02000cd0(void);
extern int func_02002660(int *topBackLight, int *bottomBackLight);
extern int func_02002708(void);
extern int func_0200275c(int target, int value);
extern int func_02002828(int led);
extern int func_02002ab0(u16 trigger, u16 keys);
static inline u16 SetIme(u16 value) {
    u16 previous                   = *((volatile u16 *) 0x04000208);
    *((volatile u16 *) 0x04000208) = value;
    return previous;
}
void func_020023f8(u32 trigger, u16 logic, u16 keyPattern) {
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

    func_020021f4(data_0214a708);
    savedIme        = SetIme(0);
    savedInterrupts = func_0208120c();
    savedIrqMask    = func_0207f39c(0x3fffff);
    func_0207f41c(0x40000);
    func_02081220(savedInterrupts);
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
    lcdWasOn        = func_020022cc();
    func_02002660(&topBackLight, &bottomBackLight);
    func_0200275c(2, 0);

    tick = *((volatile u32 *) 0x027ffc3c);
    do {
        now = *((volatile u32 *) 0x027ffc3c);
    } while (tick == now);
    tick = *((volatile u32 *) 0x027ffc3c);
    func_02069c44();
    *((volatile u32 *) 0x04001000) &= ~0x10000;
    do {
        now = *((volatile u32 *) 0x027ffc3c);
    } while (tick == now);
    tick = *((volatile u32 *) 0x027ffc3c);
    do {
        now = *((volatile u32 *) 0x027ffc3c);
    } while (tick == now);

    command = trigger | (topBackLight << 5) | (bottomBackLight << 6);
    while (func_02002ab0(command, logic | keyPattern) != 0) {
    }

    func_02081270();
    func_0208127c(0x332340);

    if (trigger & 0x8) {
        if (*((volatile u32 *) 0x04000214) & 0x100000) {
            cardEjected = 1;
        }
    }
    if (!cardEjected) {
        if (lcdWasOn == 1) {
            func_02002308(1, 1, 1, 0);
            func_02069bf8();
        } else {
            func_02002828(1);
        }
        *((volatile u32 *) 0x04000000) = savedDispcnt;
        *((volatile u32 *) 0x04001000) = savedSubDispcnt;
    }

    func_0208120c();
    func_0207f41c(savedIrqMask);
    func_02081220(savedInterrupts);
    SetIme(savedIme);
    if (cardEjected) {
        func_02002708();
    }
    func_020021f4(data_0214a710);
}
