/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef signed long s32;
typedef struct OSiAlarm OSAlarm;
typedef enum {
    OS_TIMER_0 = 0,
    OS_TIMER_1 = 1,
    OS_TIMER_2 = 2,
    OS_TIMER_3 = 3
} OSTimer;
extern void func_0208095c(s32 timerNum);
typedef u64 OSTick;
typedef void (*OSAlarmHandler)(void *);
struct OSiAlarm {
    OSAlarmHandler handler;
    void *arg;

    u32 tag;
    OSTick fire;
    OSAlarm *prev;
    OSAlarm *next;

    OSTick period;
    OSTick start;
};
struct OSiAlarmQueue {
    OSAlarm *head;
    OSAlarm *tail;
};
extern void func_02080b4c(void);
typedef u32 OSIrqMask;
extern OSIrqMask func_0207ed54(OSIrqMask mask);
extern u16 data_02154164;
extern struct OSiAlarmQueue data_02154168;

/* Os_InitializeAlarm from https://github.com/RonyxDumb/mkds src/arm9/0200fb28_Os_InitializeAlarm.c (license: none), reused by
 * tools/donor_match.py */
void func_02080b4c(void) {
    if (!data_02154164) {
        data_02154164 = 1;

        func_0208095c(OS_TIMER_1);

        data_02154168.head = ((void *) 0);
        data_02154168.tail = ((void *) 0);

        (void) func_0207ed54((1UL << 4));
    }
}
