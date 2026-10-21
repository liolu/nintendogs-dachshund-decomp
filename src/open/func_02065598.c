#include "m2c.h"

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
typedef void (*CARDCallback)(void *arg);
typedef void (*GameCardTaskStep)(void *common);
typedef struct CARDiCommon CARDiCommon;
struct CARDiCommon {
    void *cmd;
    u32 unk_04;
    volatile int lockOwner;
    volatile int lockCount;
    OSThreadQueue lockQueue;
    u32 lockTarget;
    u32 src;
    u32 dst;
    u32 len;
    u32 unk_24;
    CARDCallback callback;
    void *callbackArg;
    GameCardTaskStep task;
    u32 flag;
    u32 priorityMode;
    OSThread thread;
    OSThread *waiter;
    OSThreadQueue queue;
    u8 unk_D8[8];
    u8 pageBuffer[0x100];
    u8 stack[0x400];
};
extern CARDiCommon data_0214ec20;
extern int func_02080c28(void);
extern void func_02080c3c(int state);
extern void func_0207f670(OSThreadQueue *queue);
#pragma opt_propagation off
void func_02065598(void) {
    CARDiCommon *common;
    int state;
    OSThread *thread;
    OSThreadQueue *noQueue;
    common = &data_0214ec20;
    noQueue = NULL;
    thread = &common->thread;

    while (1) {
        state = func_02080c28();
        while (1) {
            if (common->flag & 8) {
                break;
            }
            common->waiter = thread;
            func_0207f670(noQueue);
        }
        func_02080c3c(state);
        common->task(common);
    }
}
