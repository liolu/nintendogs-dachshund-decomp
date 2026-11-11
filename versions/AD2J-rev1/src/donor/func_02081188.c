/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205c8c4 from projets/children-of-mana/src/auto/func_0205c8c4.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
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
extern void func_02081188(void);
typedef u32 OSIrqMask;
extern OSIrqMask func_0207f39c(OSIrqMask mask);
extern struct OSiVAlarmQueue {
    OSVAlarm *head;
    OSVAlarm *tail;
} data_0215364c;
extern u16 data_02153640;
extern s32 data_02153648;
extern s32 data_02153644;
void func_02081188(void) {
    if (!data_02153640) {
        data_02153640 = 1;

        data_0215364c.head = ((void *) 0);
        data_0215364c.tail = ((void *) 0);

        (void) func_0207f39c((1UL << 2));

        data_02153648 = 0;
        data_02153644 = 0;
    }
}
