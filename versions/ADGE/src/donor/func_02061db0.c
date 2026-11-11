/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* raise from https://github.com/sturmds/advance-wars-dual-strike-decomp src/sdk/msl/raise.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
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
extern OSThreadInfo data_02153e78;
extern u32 data_0214db98[9];
extern int data_0214dbbc[9];
typedef void (*SignalHandler)(int sig);
extern OSMutex data_0214dc6c;
extern SignalHandler data_0214df94[7];
extern BOOL func_0207ffb4(OSMutex *mutex);
extern void func_020800e0(OSMutex *mutex);
extern void func_02080070(OSMutex *mutex);
extern void func_0205e51c(int status);
int func_02061db0(int sig) {
    SignalHandler handler;

    if (sig < 1 || sig > 7) {
        return -1;
    }

    if (!func_0207ffb4(&data_0214dc6c)) {
        data_0214db98[7] = data_02153e78.current->id;
        data_0214dbbc[7] = 1;
    } else if (data_0214db98[7] == data_02153e78.current->id) {
        data_0214dbbc[7]++;
    } else {
        func_020800e0(&data_0214dc6c);
        data_0214db98[7] = data_02153e78.current->id;
        data_0214dbbc[7] = 1;
    }

    handler = data_0214df94[sig - 1];
    if (handler != ((SignalHandler) 1)) {
        data_0214df94[sig - 1] = ((SignalHandler) 0);
    }

    if (--data_0214dbbc[7] == 0) {
        func_02080070(&data_0214dc6c);
    }

    if (handler == ((SignalHandler) 1) || (handler == ((SignalHandler) 0) && sig == 1)) {
        return 0;
    }
    if (handler == ((SignalHandler) 0)) {
        func_0205e51c(0);
    }
    handler(sig);
    return 0;
}
