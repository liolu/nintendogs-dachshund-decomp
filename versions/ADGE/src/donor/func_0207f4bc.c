/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* OS_RescheduleThread from https://github.com/sturmds/advance-wars-dual-strike-decomp src/sdk/os/os_reschedule_thread.c
 * (license: CC0-1.0), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef struct OSThread OSThread;
typedef struct OSMutex OSMutex;
typedef struct OSThreadQueue {
    u16 head;
    u16 tail;
} OSThreadQueue;
typedef struct OSMutexQueue {
    OSMutex *head;
    OSMutex *tail;
} OSMutexQueue;
struct OSMutex {
    OSThreadQueue queue;
    OSThread *thread;
    s32 count;
    OSMutex *prev;
    OSMutex *next;
};
typedef void (*ThreadSwapHook)(OSThread *from, OSThread *to);
typedef struct OSThreadInfo {
    u16 isNeedRescheduling;
    u16 maxEntry;
    u16 inIrq;
    u16 pad_6;
    OSThread *current;
    OSThread *list;
    ThreadSwapHook switchCallback;
    OSThread *threads[16];
} OSThreadInfo;
typedef struct OSContext {
    u32 cpsr;
    u32 r[13];
    u32 sp;
    u32 lr;
    u32 pcPlus4;
    u32 spSvc;
    u8 cpContext[0x1c];
} OSContext;
struct OSThread {
    OSContext context;
    u32 state;
    OSThread *next;
    u32 id;
    u32 priority;
    void *profiler;
    OSMutex *mutex;
    OSMutexQueue mutexQueue;
    u32 stackTop;
    u32 stackBottom;
    u32 stackWarningOffset;
    OSThreadQueue joinQueue;
};
extern OSThreadInfo data_02153e78;
extern OSThread **data_02153e6c;
extern OSThread **data_02153e6c;
extern u32 data_02153e68;
extern ThreadSwapHook data_02153e74;
extern u32 func_02080c80(void);
extern OSThread *func_0207f59c(void);
extern int func_0207fb00(OSThread *thread);
extern void func_0207fb4c(OSThread *thread);
void func_0207f4bc(void) {
    OSThread *current;
    OSThread *next;
    OSThreadInfo *info = &data_02153e78;

    if (data_02153e68 != 0) {
        return;
    }
    if (info->inIrq != 0 || func_02080c80() == 0x12) {
        info->isNeedRescheduling = 1;
        return;
    }
    current = *data_02153e6c;
    next    = func_0207f59c();
    if (current == next || next == ((void *) 0)) {
        return;
    }
    if (func_0207fb00(current) != 0) {
        return;
    }
    if (data_02153e74 != ((void *) 0)) {
        data_02153e74(current, next);
    }
    if (info->switchCallback != ((void *) 0)) {
        info->switchCallback(current, next);
    }
    data_02153e78.current = next;
    func_0207fb4c(next);
}
