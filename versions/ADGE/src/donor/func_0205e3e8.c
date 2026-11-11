/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* MSL_Exit from https://github.com/sturmds/advance-wars-dual-strike-decomp src/sdk/msl/msl_exit.c (license: CC0-1.0), reused
 * by tools/donor_match.py */
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
typedef struct FileModes {
    u32 openMode : 2;
    u32 ioMode : 3;
    u32 bufferMode : 2;
    u32 fileKind : 3;
    u32 orientation : 2;
    u32 binaryIo : 1;
} FileModes;
typedef struct FileState {
    u32 ioState : 3;
} FileState;
typedef int (*FileIoProc)(u32 handle, u8 *buffer, u32 *count, void *refCon);
typedef struct FILE {
    u32 handle;
    FileModes mode;
    FileState state;
    u8 unk_0C;
    u8 error;
    u8 unk_0E[10];
    u32 position;
    u8 *buffer;
    u32 bufferSize;
    u8 *bufferPtr;
    u32 bufferLen;
    u32 bufferAlignment;
    u32 unk_30;
    u32 bufferPos;
    void *positionProc;
    FileIoProc readProc;
    FileIoProc writeProc;
    void *closeProc;
    void *refCon;
} FILE;
extern int func_0205e958(FILE *file);
typedef void (*AtExitFunction)(void);
extern OSMutex data_0214dbe0;
extern int data_0214da90;
extern AtExitFunction data_0214da98[64];
extern AtExitFunction data_0214da88;
extern BOOL func_0207ffb4(OSMutex *mutex);
extern void func_020800e0(OSMutex *mutex);
extern void func_02080070(OSMutex *mutex);
extern void func_020638e8(void);
void func_0205e3e8(int status) {

    if (!func_0207ffb4(&data_0214dbe0)) {
        data_0214db98[0] = data_02153e78.current->id;
        data_0214dbbc[0] = 1;
    } else if (data_0214db98[0] == data_02153e78.current->id) {
        data_0214dbbc[0]++;
    } else {
        func_020800e0(&data_0214dbe0);
        data_0214db98[0] = data_02153e78.current->id;
        data_0214dbbc[0] = 1;
    }

    while (data_0214da90 > 0) {
        data_0214da98[--data_0214da90]();
    }

    if (--data_0214dbbc[0] == 0) {
        func_02080070(&data_0214dbe0);
    }

    if (data_0214da88 != ((void *) 0)) {
        data_0214da88();
        data_0214da88 = ((void *) 0);
    }

    func_0205e958(((void *) 0));
    func_020638e8();
}
