/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed short int s16;
typedef signed long s32;
typedef int BOOL;
typedef void (*OSAlarmHandler)(void *);
typedef struct OSiVAlarm OSVAlarm;
struct OSiVAlarm {
    OSAlarmHandler handler;
    void *arg;
    u32 tag;
    u32 frame;
    s16 fire;
    s16 delay;
    OSVAlarm *prev;
    OSVAlarm *next;
    BOOL period;
    BOOL finish;
    BOOL canceled;
};
extern void func_02080ba4(void);
typedef u32 OSIrqMask;
extern OSIrqMask func_0207ed54(OSIrqMask mask);
extern struct OSiVAlarmQueue {
    OSVAlarm *head;
    OSVAlarm *tail;
} data_0215417c;
extern u16 data_02154170;
extern s32 data_02154178;
extern s32 data_02154174;

/* Os_InitializeVAlarm from https://github.com/RonyxDumb/mkds src/arm9/0200fc1c_Os_InitializeVAlarm.c (license: none), reused
 * by tools/donor_match.py */
void func_02080ba4(void) {
    if (!data_02154170) {
        data_02154170 = 1;

        data_0215417c.head = ((void *) 0);
        data_0215417c.tail = ((void *) 0);

        (void) func_0207ed54((1UL << 2));

        data_02154178 = 0;
        data_02154174 = 0;
    }
}
