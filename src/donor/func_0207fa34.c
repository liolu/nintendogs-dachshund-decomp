/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0207f3ec from projets/nintendogs-dachshund/src/donor/func_0207f3ec.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef int BOOL;
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
extern BOOL func_0207fa34(OSThread *thread, u32 priority);
extern int func_0208120c(void);
extern void func_02081220(int state);
extern OSThreadInfo data_02153348;
extern OSThread data_0215339c;
extern void func_0207fb04(void);
extern void func_0208004c(OSThread *thread);
BOOL func_0207fa34(OSThread *thread, u32 priority) {
    OSThread *cur;
    OSThread *prev;
    int irqState;
    prev     = ((void *) 0);
    cur      = data_02153348.list;
    irqState = func_0208120c();

    while (cur != ((void *) 0) && cur != thread) {
        prev = cur;
        cur  = cur->next;
    }
    if (cur == ((void *) 0) || cur == &data_0215339c) {
        func_02081220(irqState);
        return 0;
    }
    if (cur->priority != priority) {
        if (prev == ((void *) 0)) {
            data_02153348.list = thread->next;
        } else {
            prev->next = thread->next;
        }
        thread->priority = priority;
        func_0208004c(thread);
        func_0207fb04();
    }
    func_02081220(irqState);
    return 1;
}
