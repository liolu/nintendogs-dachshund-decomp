/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0207f4bc from projets/nintendogs-dachshund/src/donor/func_0207f4bc.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
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
extern OSThreadInfo data_02153348;
extern OSThread **data_0215333c;
extern OSThread **data_0215333c;
extern u32 data_02153338;
extern ThreadSwapHook data_02153344;
extern u32 func_02081264(void);
extern OSThread *func_0207fbe4(void);
extern int func_02080148(OSThread *thread);
extern void func_02080194(OSThread *thread);
void func_0207fb04(void) {
    OSThread *current;
    OSThread *next;
    OSThreadInfo *info = &data_02153348;

    if (data_02153338 != 0) {
        return;
    }
    if (info->inIrq != 0 || func_02081264() == 0x12) {
        info->isNeedRescheduling = 1;
        return;
    }
    current = *data_0215333c;
    next    = func_0207fbe4();
    if (current == next || next == ((void *) 0)) {
        return;
    }
    if (func_02080148(current) != 0) {
        return;
    }
    if (data_02153344 != ((void *) 0)) {
        data_02153344(current, next);
    }
    if (info->switchCallback != ((void *) 0)) {
        info->switchCallback(current, next);
    }
    data_02153348.current = next;
    func_02080194(next);
}
