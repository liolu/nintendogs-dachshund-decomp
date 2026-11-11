/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0212ec04 from https://github.com/RonyxDumb/mkds src/arm9/0212ec04_func_0212ec04.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef signed char s8;
typedef signed short int s16;
typedef signed long s32;
typedef signed long long int s64;
typedef volatile u8 vu8;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef volatile u64 vu64;
typedef volatile s8 vs8;
typedef volatile s16 vs16;
typedef volatile s32 vs32;
typedef volatile s64 vs64;
typedef float f32;
typedef volatile f32 vf32;
typedef u8 REGType8;
typedef u16 REGType16;
typedef u32 REGType32;
typedef u64 REGType64;
typedef vu8 REGType8v;
typedef vu16 REGType16v;
typedef vu32 REGType32v;
typedef vu64 REGType64v;
typedef int BOOL;
typedef s32 (*MIi_InitReadStreamCallback)(const u8 *devicep, void *ramp, const void *paramp);
typedef s32 (*MIi_TerminateReadStreamCallback)(const u8 *devicep);
typedef u8 (*MIi_ReadByteStreamCallback)(const u8 *devicep);
typedef u16 (*MIi_ReadShortStreamCallback)(const u8 *devicep);
typedef u32 (*MIi_ReadWordStreamCallback)(const u8 *devicep);
typedef struct {
    MIi_InitReadStreamCallback initStream;
    MIi_TerminateReadStreamCallback terminateStream;
    MIi_ReadByteStreamCallback readByteStream;
    MIi_ReadShortStreamCallback readShortStream;
    MIi_ReadWordStreamCallback readWordStream;
} MIReadStreamCallbacks;
extern MIReadStreamCallbacks *MI_GetReadStreamFromMemoryCallbacks(void);
typedef unsigned long size_t;
typedef long ptrdiff_t;
typedef unsigned short wchar_t;
typedef char *va_list;
extern int sprintf(char *, const char *, ...);
extern int snprintf(char *, size_t, const char *, ...);
extern int vsnprintf(char *, size_t, const char *, va_list);
extern int vsprintf(char *, const char *, va_list);
extern int printf(const char *, ...);
extern int OS_SPrintf(char *dst, const char *fmt, ...);
extern int OS_VSPrintf(char *dst, const char *fmt, va_list vlist);
extern int OS_SNPrintf(char *dst, size_t len, const char *fmt, ...);
extern int OS_VSNPrintf(char *dst, size_t len, const char *fmt, va_list vlist);
extern int OS_VSNPrintfEx(char *dst, size_t len, const char *fmt, va_list vlist);
extern void OS_Terminate();
typedef union {
    u16 s;
    char c[2];
} OSPrintWChar;
typedef volatile struct {
    u32 in;
    u32 out;
    OSPrintWChar buffer[(1024 / sizeof(OSPrintWChar))];
} OSPrintServerBuffer;
extern void OSi_ReferSymbol(void *symbol);
static inline void *OSi_AbortByUnsupportedRegister(const char *regname, const char *file, int line) {
    (void) regname;
    (void) file;
    (void) line;
    OS_Terminate();
    return 0;
}
typedef enum {
    MI_COMPRESSION_LZ           = 0x10,
    MI_COMPRESSION_HUFFMAN      = 0x20,
    MI_COMPRESSION_RL           = 0x30,
    MI_COMPRESSION_DIFF         = 0x80,
    MI_COMPRESSION_TYPE_MASK    = 0xf0,
    MI_COMPRESSION_TYPE_EX_MASK = 0xff
} MICompressionType;
typedef struct {
    u32 compParam : 4;
    u32 compType : 4;
    u32 destSize : 24;
} MICompressionHeader;
typedef struct {
    u16 srcNum;
    u16 srcBitNum : 8;
    u16 destBitNum : 8;
    u32 destOffset : 31;
    u32 destOffset0_on : 1;
} MIUnpackBitsParam;
extern void MI_UnpackBits(const void *srcp, void *destp, MIUnpackBitsParam *paramp);
extern void MI_UncompressLZ8(const void *srcp, void *destp);
extern void MI_UncompressLZ16(const void *srcp, void *destp);
extern void MI_UncompressHuffman(const void *srcp, void *destp);
extern void MI_UncompressRL8(const void *srcp, void *destp);
extern void MI_UncompressRL16(const void *srcp, void *destp);
extern void MI_UnfilterDiff8(const void *srcp, void *destp);
extern void MI_UnfilterDiff16(const void *srcp, void *destp);
static inline u32 MI_GetUncompressedSize(const void *srcp) {
    return (*(u32 *) srcp >> 8);
}
static inline MICompressionType MI_GetCompressionType(const void *srcp) {
    return (MICompressionType) (*(u32 *) srcp & MI_COMPRESSION_TYPE_MASK);
}
extern void MIi_UncompressBackward(void *bottom);
extern void SVC_WaitByLoop(s32 count);
extern void SVC_CpuSet(const void *srcp, void *destp, u32 dmaCntData);
extern void SVC_CpuSetFast(const void *srcp, void *destp, u32 dmaCntData);
extern void SVC_UnpackBits(const void *srcp, void *destp, const MIUnpackBitsParam *paramp);
extern void SVC_UncompressLZ8(const void *srcp, void *destp);
extern void SVC_UncompressRL8(const void *srcp, void *destp);
extern s32 SVC_UncompressLZ16FromDevice(const void *srcp, void *destp, const void *paramp,
                                        const MIReadStreamCallbacks *callbacks);
extern s32 SVC_UncompressRL16FromDevice(const void *srcp, void *destp, const void *paramp,
                                        const MIReadStreamCallbacks *callbacks);
extern s32 SVC_UncompressHuffmanFromDevice(const void *srcp, void *destp, u8 *tableBufp,
                                           const MIReadStreamCallbacks *callbacks);
extern u16 SVC_GetCRC16(u32 start, const void *datap, u32 size);
extern BOOL SVC_IsMmemExpanded(void);
extern s32 SVC_Div(s32 number, s32 denom);
extern s32 SVC_DivRem(s32 number, s32 denom);
extern u16 SVC_Sqrt(u32 src);
extern void SVC_Halt(void);
typedef enum {
    OS_PROCMODE_USER  = 0x10,
    OS_PROCMODE_FIQ   = 0x11,
    OS_PROCMODE_IRQ   = 0x12,
    OS_PROCMODE_SVC   = 0x13,
    OS_PROCMODE_ABORT = 0x17,
    OS_PROCMODE_UNDEF = 0x1b,
    OS_PROCMODE_SYS   = 0x1f
} OSProcMode;
typedef enum {
    OS_INTRMODE_IRQ_DISABLE = 0x80,
    OS_INTRMODE_IRQ_ENABLE  = 0
} OSIntrMode_Irq;
typedef enum {
    OS_INTRMODE_FIQ_DISABLE = 0x40,
    OS_INTRMODE_FIQ_ENABLE  = 0
} OSIntrMode_Fiq;
typedef u32 OSIntrMode;
extern OSIntrMode OS_EnableInterrupts(void);
extern OSIntrMode OS_DisableInterrupts(void);
extern OSIntrMode OS_RestoreInterrupts(OSIntrMode state);
extern OSIntrMode OS_EnableInterrupts_IrqAndFiq(void);
extern OSIntrMode OS_DisableInterrupts_IrqAndFiq(void);
extern OSIntrMode OS_RestoreInterrupts_IrqAndFiq(OSIntrMode state);
extern OSIntrMode_Irq OS_GetCpsrIrq(void);
extern OSProcMode OS_GetProcMode(void);
extern void OS_Terminate(void);
extern void OS_Halt(void);
extern void OS_Exit(int status);
extern void OS_SpinWait(u32 cycle);
typedef u32 OSIrqMask;
extern void OS_WaitInterrupt(BOOL clear, OSIrqMask irqFlags);
extern void OS_WaitVBlankIntr(void);
extern u32 SDK_AUTOLOAD_DTCM_START[];
typedef volatile struct {

    u8 sys_and_irq_stack[(0x4000 - 0x40 - 0x40)];
    u8 svc_stack[0x40];

    u8 reserved[0x40 - 8];
    u32 intr_check;
    void *intr_vector;

} OS_DTCM;
static inline void CP_SetDivControl(u16 parameter) {
    (*(REGType16v *) (0x04000000 + 0x280)) = parameter;
}
static inline void CP_SetDivImm32_32_NS_(u32 numer, u32 denom) {
    *(REGType32 *) (0x04000000 + 0x290) = numer;
    *(REGType64 *) (0x04000000 + 0x298) = denom;
}
static inline void CP_SetDivImm64_32_NS_(u64 numer, u32 denom) {
    *(REGType64 *) (0x04000000 + 0x290) = numer;
    *(REGType64 *) (0x04000000 + 0x298) = denom;
}
static inline void CP_SetDivImm64_64_NS_(u64 numer, u64 denom) {
    *(REGType64 *) (0x04000000 + 0x290) = numer;
    *(REGType64 *) (0x04000000 + 0x298) = denom;
}
static inline void CP_SetDivImm32_32(u32 numer, u32 denom) {
    CP_SetDivImm32_32_NS_(numer, denom);
}
static inline void CP_SetDivImm64_32(u64 numer, u32 denom) {
    CP_SetDivImm64_32_NS_(numer, denom);
}
static inline void CP_SetDivImm64_64(u64 numer, u64 denom) {
    CP_SetDivImm64_64_NS_(numer, denom);
}
static inline void CP_SetDiv32_32(u32 numer, u32 denom) {
    (*(REGType16v *) (0x04000000 + 0x280)) = (0UL << 0);
    CP_SetDivImm32_32_NS_(numer, denom);
}
static inline void CP_SetDiv64_32(u64 numer, u32 denom) {
    (*(REGType16v *) (0x04000000 + 0x280)) = (1UL << 0);
    CP_SetDivImm64_32_NS_(numer, denom);
}
static inline void CP_SetDiv64_64(u64 numer, u64 denom) {
    (*(REGType16v *) (0x04000000 + 0x280)) = (2UL << 0);
    CP_SetDivImm64_64_NS_(numer, denom);
}
static inline s32 CP_IsDivBusy(void) {
    return ((*(REGType16v *) (0x04000000 + 0x280)) & 0x8000);
}
static inline void CP_WaitDiv(void) {
    while (CP_IsDivBusy()) {
    }
}
static inline s64 CP_GetDivResultImm64(void) {
    return (s64) (*(REGType64 *) (0x04000000 + 0x2a0));
}
static inline s32 CP_GetDivResultImm32(void) {
    return (s32) (*(REGType32 *) (0x04000000 + 0x2a0));
}
static inline s16 CP_GetDivResultImm16(void) {
    return (s16) (*(REGType16 *) (0x04000000 + 0x2a0));
}
static inline s8 CP_GetDivResultImm8(void) {
    return (s8) (*(REGType8 *) (0x04000000 + 0x2a0));
}
static inline s64 CP_GetDivResult64(void) {
    CP_WaitDiv();
    return CP_GetDivResultImm64();
}
static inline s32 CP_GetDivResult32(void) {
    CP_WaitDiv();
    return CP_GetDivResultImm32();
}
static inline s16 CP_GetDivResult16(void) {
    CP_WaitDiv();
    return CP_GetDivResultImm16();
}
static inline s8 CP_GetDivResult8(void) {
    CP_WaitDiv();
    return CP_GetDivResultImm8();
}
static inline s64 CP_GetDivRemainderImm64(void) {
    return (s64) (*(REGType64 *) (0x04000000 + 0x2a8));
}
static inline s32 CP_GetDivRemainderImm32(void) {
    return (s32) (*(REGType32 *) (0x04000000 + 0x2a8));
}
static inline s16 CP_GetDivRemainderImm16(void) {
    return (s16) (*(REGType16 *) (0x04000000 + 0x2a8));
}
static inline s8 CP_GetDivRemainderImm8(void) {
    return (s8) (*(REGType8 *) (0x04000000 + 0x2a8));
}
static inline s64 CP_GetDivRemainder64(void) {
    CP_WaitDiv();
    return CP_GetDivRemainderImm64();
}
static inline s32 CP_GetDivRemainder32(void) {
    CP_WaitDiv();
    return CP_GetDivRemainderImm32();
}
static inline s16 CP_GetDivRemainder16(void) {
    CP_WaitDiv();
    return CP_GetDivRemainderImm16();
}
static inline s8 CP_GetDivRemainder8(void) {
    CP_WaitDiv();
    return CP_GetDivRemainderImm8();
}
typedef struct CPContext {
    u64 div_numer;
    u64 div_denom;
    u64 sqrt;
    u16 div_mode;
    u16 sqrt_mode;
} CPContext;
extern void CP_SaveContext(CPContext *context);
extern void CPi_RestoreContext(const CPContext *context);
static inline void CP_RestoreContext(const CPContext *context) {
    CPi_RestoreContext(context);
    CP_WaitDiv();
}
typedef struct OSContext {
    u32 cpsr;
    u32 r[13];
    u32 sp;
    u32 lr;
    u32 pc_plus4;

    u32 sp_svc;

    CPContext cp_context;

} OSContext;
extern void OS_InitContext(OSContext *context, u32 newpc, u32 newsp);
extern BOOL OS_SaveContext(OSContext *context);
extern void OS_LoadContext(OSContext *context);
extern void OS_DumpContext(OSContext *context);
extern void __PROFILE_ENTRY(void);
extern void __PROFILE_EXIT(void);
typedef struct {
    u32 name;
    u32 returnAddress;

    u32 level;

    u32 r0;

    u32 r1;

    u32 r2;

    u32 r3;

} OSCallTrace;
typedef struct {
    OSCallTrace *current;
    OSCallTrace *limit;
    u16 enable;
    u16 circular;

    u32 level;

    OSCallTrace array[1];
} OSCallTraceInfo;
typedef enum {
    OS_CALLTRACE_STACK = 0,
    OS_CALLTRACE_LOG   = 1
} OSCallTraceMode;
extern void OS_InitCallTrace(void *buf, u32 size, OSCallTraceMode mode);
extern void OS_DumpCallTrace(void);
extern int OS_CalcCallTraceLines(u32 size);
extern u32 OS_CalcCallTraceBufferSize(int lines);
extern void OS_ClearCallTraceBuffer(void);
extern BOOL OS_EnableCallTrace(void);
extern BOOL OS_DisableCallTrace(void);
extern BOOL OS_RestoreCallTrace(BOOL enable);
extern void OSi_SetCallTraceEntry(const char *name, u32 lr);
typedef struct _OSThread OSThread;
typedef struct _OSThreadQueue OSThreadQueue;
typedef struct _OSThreadLink OSThreadLink;
typedef struct _OSMutexQueue OSMutexQueue;
typedef struct _OSMutexLink OSMutexLink;
typedef struct OSMutex OSMutex;
typedef struct OSiAlarm OSAlarm;
struct _OSThreadQueue {
    OSThread *head;
    OSThread *tail;
};
struct _OSThreadLink {
    OSThread *prev;
    OSThread *next;
};
struct _OSMutexQueue {
    OSMutex *head;
    OSMutex *tail;
};
struct _OSMutexLink {
    OSMutex *next;
    OSMutex *prev;
};
typedef enum {
    OS_THREAD_STATE_WAITING    = 0,
    OS_THREAD_STATE_READY      = 1,
    OS_THREAD_STATE_TERMINATED = 2
} OSThreadState;
typedef void (*OSThreadDestructor)(void *);
struct _OSThread {
    OSContext context;
    OSThreadState state;
    OSThread *next;
    u32 id;
    u32 priority;
    void *profiler;

    OSThreadQueue *queue;
    OSThreadLink link;

    OSMutex *mutex;
    OSMutexQueue mutexQueue;

    u32 stackTop;
    u32 stackBottom;
    u32 stackWarningOffset;

    OSThreadQueue joinQueue;
    void *specific[3];
    OSAlarm *alarmForSleep;
    OSThreadDestructor destructor;
    void *userParameter;
    int systemErrno;
};
typedef struct OSThreadInfo {
    u16 isNeedRescheduling;

    u16 irqDepth;

    OSThread *current;
    OSThread *list;
    void *switchCallback;

} OSThreadInfo;
typedef enum {
    OS_STACK_NO_ERROR          = 0,
    OS_STACK_OVERFLOW          = 1,
    OS_STACK_ABOUT_TO_OVERFLOW = 2,
    OS_STACK_UNDERFLOW         = 3
} OSStackStatus;
typedef void (*OSSwitchThreadCallback)(OSThread *from, OSThread *to);
extern void OSi_CheckStack(const char *file, int line, const OSThread *thread);
extern u32 OSi_GetSystemStackPointer(void);
extern u32 OSi_GetCurrentStackPointer(void);
extern OSThread *OSi_GetIdleThread(void);
extern void OS_InitThread(void);
extern BOOL OS_IsThreadAvailable(void);
extern void OS_CreateThread(OSThread *thread, void (*func)(void *), void *arg, void *stack, u32 stackSize, u32 prio);
extern void OS_ExitThread(void);
extern void OS_DestroyThread(OSThread *thread);
extern void OS_KillThread(OSThread *thread, void *arg);
extern void OS_KillThreadWithPriority(OSThread *thread, void *arg, u32 prio);
extern void OS_JoinThread(OSThread *thread);
extern BOOL OS_IsThreadTerminated(const OSThread *thread);
extern OSThread *OS_SelectThread(void);
extern void OS_RescheduleThread(void);
extern void OS_YieldThread(void);
extern void OS_SleepThread(OSThreadQueue *queue);
extern void OS_SleepThreadDirect(OSThread *thread, OSThreadQueue *queue);
extern void OS_WakeupThread(OSThreadQueue *queue);
extern void OS_WakeupThreadDirect(OSThread *thread);
extern void OS_DumpThreadList(void);
extern int OS_GetNumberOfThread(void);
extern OSThreadInfo OSi_ThreadInfo;
static inline OSThreadInfo *OS_GetThreadInfo(void) {
    return &OSi_ThreadInfo;
}
static inline u32 OS_GetMaxThreadId(void) {

    return 0x7fffffff;
}
extern OSThread *OS_GetThread(u32 id);
static inline u32 OS_GetThreadId(const OSThread *thread) {
    ((void) 0);
    return thread->id;
}
static inline OSThreadState OS_GetThreadState(const OSThread *thread) {
    ((void) 0);
    return thread->state;
}
static inline OSContext *OS_GetThreadContext(const OSThread *thread) {
    ((void) 0);
    return (OSContext *) &thread->context;
}
static inline BOOL OS_IsThreadRunnable(const OSThread *thread) {
    return thread->state == OS_THREAD_STATE_READY;
}
static inline void OS_InitThreadQueue(OSThreadQueue *queue) {

    queue->head = queue->tail = ((void *) 0);
}
static inline OSThread *OS_GetCurrentThread(void) {
    return OS_GetThreadInfo()->current;
}
static inline void OS_SetCurrentThread(OSThread *thread) {
    OS_GetThreadInfo()->current = thread;
}
extern void OS_SetThreadStackWarningOffset(OSThread *thread, u32 offset);
extern OSStackStatus OS_GetStackStatus(const OSThread *thread);
extern BOOL OS_SetThreadPriority(OSThread *thread, u32 prio);
extern u32 OS_GetThreadPriority(const OSThread *thread);
extern void OS_Sleep(u32 msec);
extern OSSwitchThreadCallback OS_SetSwitchThreadCallback(OSSwitchThreadCallback callback);
extern void OS_DumpThreadCallTrace(const OSThread *thread);
extern u32 OS_DisableScheduler(void);
extern u32 OS_EnableScheduler(void);
extern void OS_SetThreadDestructor(OSThread *thread, OSThreadDestructor dtor);
extern OSThreadDestructor OS_GetThreadDestructor(const OSThread *thread);
extern void OS_SetThreadParameter(OSThread *thread, void *parameter);
extern void *OS_GetThreadParameter(const OSThread *thread);
extern int OS_GetErrno(void);
extern BOOL OS_IsThreadInList(const OSThread *thread);
extern void OS_SetThreadDestructorStack(void *stack);
extern OSMutex *OSi_RemoveMutexLinkFromQueue(OSMutexQueue *queue);
extern void OSi_SetSystemErrno(OSThread *thread, int errno);
extern int OSi_GetSystemErrno(const OSThread *thread);
static inline void OSi_SetSpecificData(OSThread *thread, int index, void *data) {
    ((void) 0);
    thread->specific[index] = data;
}
static inline void *OSi_GetSpecificData(const OSThread *thread, int index) {
    ((void) 0);
    return thread->specific[index];
}
static inline OSThread *OS_GetThreadList(void) {
    return OS_GetThreadInfo()->list;
}
static inline OSThread *OS_GetNextThread(const OSThread *thread) {
    ((void) 0);
    return thread->next;
}
extern void OSi_EnterDmaCallback(u32 dmaNo, void (*callback)(void *), void *arg);
extern void OSi_EnterTimerCallback(u32 timerNo, void (*callback)(void *), void *arg);
typedef void (*OSIrqFunction)(void);
typedef struct {
    void (*func)(void *);
    u32 enable;
    void *arg;
} OSIrqCallbackInfo;
extern OSIrqFunction OS_IRQTable[];
extern OSIrqCallbackInfo OSi_IrqCallbackInfo[(7 + 1)];
extern void OS_IrqDummy(void);
extern void OS_IrqHandler(void);
extern void OS_IrqHandler_ThreadSwitch(void);
static inline BOOL OS_EnableIrq(void) {
    u16 prep                               = (*(REGType16v *) (0x04000000 + 0x208));
    (*(REGType16v *) (0x04000000 + 0x208)) = (1UL << 0);
    return (BOOL) prep;
}
static inline BOOL OS_DisableIrq(void) {
    u16 prep                               = (*(REGType16v *) (0x04000000 + 0x208));
    (*(REGType16v *) (0x04000000 + 0x208)) = (0UL << 0);
    return (BOOL) prep;
}
static inline BOOL OS_RestoreIrq(BOOL enable) {
    u16 prep                               = (*(REGType16v *) (0x04000000 + 0x208));
    (*(REGType16v *) (0x04000000 + 0x208)) = (u16) enable;
    return (BOOL) prep;
}
extern OSIrqMask OS_SetIrqMask(OSIrqMask intr);
static inline OSIrqMask OS_GetIrqMask(void) {
    return (*(REGType32v *) (0x04000000 + 0x210));
}
extern OSIrqMask OS_EnableIrqMask(OSIrqMask intr);
extern OSIrqMask OS_DisableIrqMask(OSIrqMask intr);
extern OSIrqMask OS_ResetRequestIrqMask(OSIrqMask intr);
static inline OSIrqMask OS_GetRequestIrqMask(void) {
    return (*(REGType32v *) (0x04000000 + 0x214));
}
extern void OS_InitIrqTable(void);
extern void OS_SetIrqFunction(OSIrqMask intrBit, OSIrqFunction function);
extern OSIrqFunction OS_GetIrqFunction(OSIrqMask intrBit);
static inline void OS_SetIrqCheckFlag(OSIrqMask intr) {
    *(vu32 *) ((((u32) SDK_AUTOLOAD_DTCM_START) + 0x00003fc0) + 0x38) |= (u32) intr;
}
static inline void OS_ClearIrqCheckFlag(OSIrqMask intr) {
    *(vu32 *) ((((u32) SDK_AUTOLOAD_DTCM_START) + 0x00003fc0) + 0x38) &= (u32) ~intr;
}
static inline OSIrqMask OS_GetIrqCheckFlag(void) {
    return *(OSIrqMask *) ((((u32) SDK_AUTOLOAD_DTCM_START) + 0x00003fc0) + 0x38);
}
extern void OS_WaitIrq(BOOL clear, OSIrqMask irqFlags);
extern void OS_WaitAnyIrq(void);
static inline vu32 OS_GetVBlankCount(void) {
    return *(vu32 *) (0x02000000 + 0x007ffc3c);
}
static inline void OSi_SetVBlankCount(u32 count) {
    *(u32 *) (0x02000000 + 0x007ffc3c) = count;
}
extern void OS_SetIrqStackWarningOffset(u32 offset);
extern OSStackStatus OS_GetIrqStackStatus(void);
extern void OS_SetIrqStackChecker(void);
extern void OSi_CheckIrqStack(char *file, int line);
typedef volatile struct OSLockWord {
    u32 lockFlag;
    u16 ownerID;
    u16 extension;
} OSLockWord;
extern void OS_InitLock(void);
extern s32 OS_LockByWord(u16 lockID, OSLockWord *lockp, void (*ctrlFuncp)(void));
extern s32 OS_LockCartridge(u16 lockID);
extern s32 OS_LockCard(u16 lockID);
extern s32 OS_UnlockByWord(u16 lockID, OSLockWord *lockp, void (*ctrlFuncp)(void));
extern s32 OS_UnlockCartridge(u16 lockID);
extern s32 OS_UnlockCard(u16 lockID);
extern s32 OS_UnLockByWord(u16 lockID, OSLockWord *lockp, void (*ctrlFuncp)(void));
extern s32 OS_UnLockCartridge(u16 lockID);
extern s32 OS_UnLockCard(u16 lockID);
extern s32 OS_TryLockByWord(u16 lockID, OSLockWord *lockp, void (*crtlFuncp)(void));
extern s32 OS_TryLockCartridge(u16 lockID);
extern s32 OS_TryLockCard(u16 lockID);
extern u16 OS_ReadOwnerOfLockWord(OSLockWord *lockp);
extern s32 OS_GetLockID(void);
extern void OS_ReleaseLockID(u16 lockID);
typedef enum {
    OS_TIMER_PRESCALER_1    = (0UL << 0),
    OS_TIMER_PRESCALER_64   = (1UL << 0),
    OS_TIMER_PRESCALER_256  = (2UL << 0),
    OS_TIMER_PRESCALER_1024 = (3UL << 0)
} OSTimerPrescaler;
typedef enum {
    OS_TIMER_0 = 0,
    OS_TIMER_1 = 1,
    OS_TIMER_2 = 2,
    OS_TIMER_3 = 3
} OSTimer;
typedef enum {
    OS_TIMER32_01 = 0,
    OS_TIMER32_12 = 1,
    OS_TIMER32_23 = 2
} OSTimer32;
typedef enum {
    OS_TIMER48_012 = 0,
    OS_TIMER48_123 = 1
} OSTimer48;
static inline void OS_SetTimerCount(OSTimer id, u16 count) {
    ((void) 0);
    *((REGType16 *) ((u32) (0x04000000 + 0x100) + id * 4)) = count;
}
static inline void OS_SetTimerControl(OSTimer id, u16 control) {
    ((void) 0);
    *((REGType16 *) ((u32) (0x04000000 + 0x102) + id * 4)) = control;
}
extern void OS_StartTimer(OSTimer id, u16 count, OSTimerPrescaler preScale);
extern void OS_StartTimer32(OSTimer32 id, u32 count, OSTimerPrescaler preScale);
extern void OS_StartTimer48(OSTimer48 id, u64 count, OSTimerPrescaler preScale);
extern void OS_StartTimer64(u64 count, OSTimerPrescaler preScale);
extern void OS_StopTimer(OSTimer id);
extern void OS_StopTimer32(OSTimer32 id);
extern void OS_StopTimer48(OSTimer48 id);
extern void OS_StopTimer64(void);
extern BOOL OS_IsRunOnEmulator(void);
extern u32 OS_GetConsoleType(void);
typedef struct OSMessageQueue OSMessageQueue;
typedef void *OSMessage;
struct OSMessageQueue {
    OSThreadQueue queueSend;
    OSThreadQueue queueReceive;
    OSMessage *msgArray;
    s32 msgCount;
    s32 firstIndex;
    s32 usedCount;
};
extern void OS_InitMessageQueue(OSMessageQueue *mq, OSMessage *msgArray, s32 msgCount);
extern BOOL OS_SendMessage(OSMessageQueue *mq, OSMessage msg, s32 flags);
extern BOOL OS_ReceiveMessage(OSMessageQueue *mq, OSMessage *msg, s32 flags);
extern BOOL OS_JamMessage(OSMessageQueue *mq, OSMessage msg, s32 flags);
extern BOOL OS_ReadMessage(OSMessageQueue *mq, OSMessage *msg, s32 flags);
static inline s32 OS_GetMessageCount(OSMessageQueue *mq) {
    ((void) 0);
    return mq->msgCount;
}
static inline BOOL OS_IsMessageQueueFull(OSMessageQueue *mq) {
    ((void) 0);
    return (mq->usedCount >= mq->msgCount);
}
struct OSMutex {
    OSThreadQueue queue;
    OSThread *thread;
    s32 count;

    OSMutexLink link;
};
extern void OS_InitMutex(OSMutex *mutex);
extern void OS_LockMutex(OSMutex *mutex);
extern void OS_UnlockMutex(OSMutex *mutex);
extern BOOL OS_TryLockMutex(OSMutex *mutex);
extern void OSi_UnlockAllMutex(OSThread *thread);
typedef void (*OSExceptionHandler)(u32, void *);
extern void OS_SetExceptionVectorUpper(void);
extern void OS_SetExceptionVectorLower(void);
extern void OS_InitException(void);
extern void OS_SetUserExceptionHandler(OSExceptionHandler handler, void *arg);
extern void OS_EnableUserExceptionHandlerOnDebugger(void);
extern void OS_Init(void);
typedef enum {
    OS_ARENA_MAIN         = 0,
    OS_ARENA_MAIN_SUBPRIV = 1,
    OS_ARENA_MAINEX       = 2,
    OS_ARENA_ITCM         = 3,
    OS_ARENA_DTCM         = 4,
    OS_ARENA_SHARED       = 5,
    OS_ARENA_WRAM_MAIN    = 6,
    OS_ARENA_WRAM_SUB     = 7,
    OS_ARENA_WRAM_SUBPRIV = 8,
    OS_ARENA_MAX          = 9
} OSArenaId;
typedef struct {
    void *lo[OS_ARENA_MAX];
    void *hi[OS_ARENA_MAX];
    u16 initialized;
    u8 padding[2];
} OSArenaInfo;
extern void OS_InitArena(void);
extern void OS_InitArenaEx(void);
extern void *OS_GetArenaInfo(void);
extern void *OS_GetArenaHi(OSArenaId id);
extern void *OS_GetArenaLo(OSArenaId id);
extern void *OS_GetInitArenaHi(OSArenaId id);
extern void *OS_GetInitArenaLo(OSArenaId id);
extern void OS_SetArenaHi(OSArenaId id, void *newHi);
extern void OS_SetArenaLo(OSArenaId id, void *newLo);
extern void *OS_AllocFromArenaLo(OSArenaId id, u32 size, u32 align);
extern void *OS_AllocFromArenaHi(OSArenaId id, u32 size, u32 align);
static inline void OS_SetMainArenaHi(void *newHi) {
    OS_SetArenaHi(OS_ARENA_MAIN, newHi);
}
static inline void OS_SetMainArenaLo(void *newLo) {
    OS_SetArenaLo(OS_ARENA_MAIN, newLo);
}
static inline void *OS_GetMainArenaHi(void) {
    return OS_GetArenaHi(OS_ARENA_MAIN);
}
static inline void *OS_GetMainArenaLo(void) {
    return OS_GetArenaLo(OS_ARENA_MAIN);
}
static inline void *OS_AllocFromMainArenaLo(u32 size, u32 align) {
    return OS_AllocFromArenaLo(OS_ARENA_MAIN, size, align);
}
static inline void *OS_AllocFromMainArenaHi(u32 size, u32 align) {
    return OS_AllocFromArenaHi(OS_ARENA_MAIN, size, align);
}
static inline void OS_SetSubPrivArenaHi(void *newHi) {
    OS_SetArenaHi(OS_ARENA_MAIN_SUBPRIV, newHi);
}
static inline void OS_SetSubPrivArenaLo(void *newLo) {
    OS_SetArenaLo(OS_ARENA_MAIN_SUBPRIV, newLo);
}
static inline void *OS_GetSubPrivArenaHi(void) {
    return OS_GetArenaHi(OS_ARENA_MAIN_SUBPRIV);
}
static inline void *OS_GetSubPrivArenaLo(void) {
    return OS_GetArenaLo(OS_ARENA_MAIN_SUBPRIV);
}
static inline void *OS_AllocFromSubPrivArenaLo(u32 size, u32 align) {
    return OS_AllocFromArenaLo(OS_ARENA_MAIN_SUBPRIV, size, align);
}
static inline void *OS_AllocFromSubPrivArenaHi(u32 size, u32 align) {
    return OS_AllocFromArenaHi(OS_ARENA_MAIN_SUBPRIV, size, align);
}
static inline void OS_SetMainExArenaHi(void *newHi) {
    OS_SetArenaHi(OS_ARENA_MAINEX, newHi);
}
static inline void OS_SetMainExArenaLo(void *newLo) {
    OS_SetArenaLo(OS_ARENA_MAINEX, newLo);
}
static inline void *OS_GetMainExArenaHi(void) {
    return OS_GetArenaHi(OS_ARENA_MAINEX);
}
static inline void *OS_GetMainExArenaLo(void) {
    return OS_GetArenaLo(OS_ARENA_MAINEX);
}
static inline void *OS_AllocFromMainExArenaLo(u32 size, u32 align) {
    return OS_AllocFromArenaLo(OS_ARENA_MAINEX, size, align);
}
static inline void *OS_AllocFromMainExArenaHi(u32 size, u32 align) {
    return OS_AllocFromArenaHi(OS_ARENA_MAINEX, size, align);
}
static inline void OS_SetITCMArenaHi(void *newHi) {
    OS_SetArenaHi(OS_ARENA_ITCM, newHi);
}
static inline void OS_SetITCMArenaLo(void *newLo) {
    OS_SetArenaLo(OS_ARENA_ITCM, newLo);
}
static inline void *OS_GetITCMArenaHi(void) {
    return OS_GetArenaHi(OS_ARENA_ITCM);
}
static inline void *OS_GetITCMArenaLo(void) {
    return OS_GetArenaLo(OS_ARENA_ITCM);
}
static inline void *OS_AllocFromITCMArenaLo(u32 size, u32 align) {
    return OS_AllocFromArenaLo(OS_ARENA_ITCM, size, align);
}
static inline void *OS_AllocFromITCMArenaHi(u32 size, u32 align) {
    return OS_AllocFromArenaHi(OS_ARENA_ITCM, size, align);
}
static inline void OS_SetDTCMArenaHi(void *newHi) {
    OS_SetArenaHi(OS_ARENA_DTCM, newHi);
}
static inline void OS_SetDTCMArenaLo(void *newLo) {
    OS_SetArenaLo(OS_ARENA_DTCM, newLo);
}
static inline void *OS_GetDTCMArenaHi(void) {
    return OS_GetArenaHi(OS_ARENA_DTCM);
}
static inline void *OS_GetDTCMArenaLo(void) {
    return OS_GetArenaLo(OS_ARENA_DTCM);
}
static inline void *OS_AllocFromDTCMArenaLo(u32 size, u32 align) {
    return OS_AllocFromArenaLo(OS_ARENA_DTCM, size, align);
}
static inline void *OS_AllocFromDTCMArenaHi(u32 size, u32 align) {
    return OS_AllocFromArenaHi(OS_ARENA_DTCM, size, align);
}
static inline void OS_SetSharedArenaHi(void *newHi) {
    OS_SetArenaHi(OS_ARENA_SHARED, newHi);
}
static inline void OS_SetSharedArenaLo(void *newLo) {
    OS_SetArenaLo(OS_ARENA_SHARED, newLo);
}
static inline void *OS_GetSharedArenaHi(void) {
    return OS_GetArenaHi(OS_ARENA_SHARED);
}
static inline void *OS_GetSharedArenaLo(void) {
    return OS_GetArenaLo(OS_ARENA_SHARED);
}
static inline void *OS_AllocFromSharedArenaLo(u32 size, u32 align) {
    return OS_AllocFromArenaLo(OS_ARENA_SHARED, size, align);
}
static inline void *OS_AllocFromSharedArenaHi(u32 size, u32 align) {
    return OS_AllocFromArenaHi(OS_ARENA_SHARED, size, align);
}
static inline void OS_SetWramMainArenaHi(void *newHi) {
    OS_SetArenaHi(OS_ARENA_WRAM_MAIN, newHi);
}
static inline void OS_SetWramMainArenaLo(void *newLo) {
    OS_SetArenaLo(OS_ARENA_WRAM_MAIN, newLo);
}
static inline void *OS_GetWramMainArenaHi(void) {
    return OS_GetArenaHi(OS_ARENA_WRAM_MAIN);
}
static inline void *OS_GetWramMainArenaLo(void) {
    return OS_GetArenaLo(OS_ARENA_WRAM_MAIN);
}
static inline void *OS_AllocFromWramMainArenaLo(u32 size, u32 align) {
    return OS_AllocFromArenaLo(OS_ARENA_WRAM_MAIN, size, align);
}
static inline void *OS_AllocFromWramMainArenaHi(u32 size, u32 align) {
    return OS_AllocFromArenaHi(OS_ARENA_WRAM_MAIN, size, align);
}
static inline void OS_SetWramSubArenaHi(void *newHi) {
    OS_SetArenaHi(OS_ARENA_WRAM_SUB, newHi);
}
static inline void OS_SetWramSubArenaLo(void *newLo) {
    OS_SetArenaLo(OS_ARENA_WRAM_SUB, newLo);
}
static inline void *OS_GetWramSubArenaHi(void) {
    return OS_GetArenaHi(OS_ARENA_WRAM_SUB);
}
static inline void *OS_GetWramSubArenaLo(void) {
    return OS_GetArenaLo(OS_ARENA_WRAM_SUB);
}
static inline void *OS_AllocFromWramSubArenaLo(u32 size, u32 align) {
    return OS_AllocFromArenaLo(OS_ARENA_WRAM_SUB, size, align);
}
static inline void *OS_AllocFromWramSubArenaHi(u32 size, u32 align) {
    return OS_AllocFromArenaHi(OS_ARENA_WRAM_SUB, size, align);
}
static inline void OS_SetWramSubPrivArenaHi(void *newHi) {
    OS_SetArenaHi(OS_ARENA_WRAM_SUBPRIV, newHi);
}
static inline void OS_SetWramSubPrivArenaLo(void *newLo) {
    OS_SetArenaLo(OS_ARENA_WRAM_SUBPRIV, newLo);
}
static inline void *OS_GetWramSubPrivArenaHi(void) {
    return OS_GetArenaHi(OS_ARENA_WRAM_SUBPRIV);
}
static inline void *OS_GetWramSubPrivArenaLo(void) {
    return OS_GetArenaLo(OS_ARENA_WRAM_SUBPRIV);
}
static inline void *OS_AllocFromWramSubPrivArenaLo(u32 size, u32 align) {
    return OS_AllocFromArenaLo(OS_ARENA_WRAM_SUBPRIV, size, align);
}
static inline void *OS_AllocFromWramSubPrivArenaHi(u32 size, u32 align) {
    return OS_AllocFromArenaHi(OS_ARENA_WRAM_SUBPRIV, size, align);
}
static inline void OS_InitArenaHi(OSArenaId id) {
    OS_SetArenaHi((id), OS_GetInitArenaHi((OSArenaId) id));
}
static inline void OS_InitArenaLo(OSArenaId id) {
    OS_SetArenaLo((id), OS_GetInitArenaLo(id));
}
static inline void OS_InitArenaHiAndLo(OSArenaId id) {
    OS_InitArenaHi(id);
    OS_InitArenaLo(id);
}
extern void OS_EnableMainExArena(void);
extern void OS_DisableMainExArena(void);
typedef int OSHeapHandle;
typedef void (*OSAllocVisitor)(void *obj, u32 size);
extern void *OS_InitAlloc(OSArenaId id, void *arenaStart, void *arenaEnd, int maxHeaps);
extern void OS_ClearAlloc(OSArenaId id);
extern OSHeapHandle OS_CreateHeap(OSArenaId id, void *start, void *end);
extern void OS_DestroyHeap(OSArenaId id, OSHeapHandle heap);
extern void OS_AddToHeap(OSArenaId id, OSHeapHandle heap, void *start, void *end);
extern OSHeapHandle OS_SetCurrentHeap(OSArenaId id, OSHeapHandle heap);
extern void *OS_AllocFromHeap(OSArenaId id, OSHeapHandle heap, u32 size);
extern void *OS_AllocFixed(OSArenaId id, void **rstart, void **rend);
extern void OS_FreeToHeap(OSArenaId id, OSHeapHandle heap, void *ptr);
extern void OS_FreeAllToHeap(OSArenaId id, OSHeapHandle heap);
extern s32 OS_CheckHeap(OSArenaId id, OSHeapHandle heap);
extern void OS_DumpHeap(OSArenaId id, OSHeapHandle heap);
extern u32 OS_ReferentSize(OSArenaId id, void *ptr);
extern void OS_VisitAllocated(OSArenaId id, OSAllocVisitor visitor);
extern u32 OSi_GetTotalAllocSize(OSArenaId id, OSHeapHandle heap, BOOL isHeadInclude);
static inline u32 OS_GetTotalAllocSize(OSArenaId id, OSHeapHandle heap) {
    return OSi_GetTotalAllocSize(id, heap, 0);
}
static inline u32 OS_GetTotalOccupiedSize(OSArenaId id, OSHeapHandle heap) {
    return OSi_GetTotalAllocSize(id, heap, 1);
}
extern u32 OS_GetTotalFreeSize(OSArenaId id, OSHeapHandle heap);
extern u32 OS_GetMaxFreeSize(OSArenaId id, OSHeapHandle heap);
extern void OS_ClearHeap(OSArenaId id, OSHeapHandle heap, void *start, void *end);
static inline void *OS_AllocFromMain(u32 size) {
    return OS_AllocFromHeap(OS_ARENA_MAIN, ((OSHeapHandle) -1), size);
}
static inline void OS_FreeToMain(void *ptr) {
    OS_FreeToHeap(OS_ARENA_MAIN, ((OSHeapHandle) -1), ptr);
}
static inline void OS_FreeAllToMain(void) {
    OS_FreeAllToHeap(OS_ARENA_MAIN, ((OSHeapHandle) -1));
}
static inline void *OS_AllocFromSubPriv(u32 size) {
    return OS_AllocFromHeap(OS_ARENA_MAIN_SUBPRIV, ((OSHeapHandle) -1), size);
}
static inline void OS_FreeToSubPriv(void *ptr) {
    OS_FreeToHeap(OS_ARENA_MAIN_SUBPRIV, ((OSHeapHandle) -1), ptr);
}
static inline void OS_FreeAllToSubPriv(void) {
    OS_FreeAllToHeap(OS_ARENA_MAIN_SUBPRIV, ((OSHeapHandle) -1));
}
static inline void *OS_AllocFromMainEx(u32 size) {
    return OS_AllocFromHeap(OS_ARENA_MAINEX, ((OSHeapHandle) -1), size);
}
static inline void OS_FreeToMainEx(void *ptr) {
    OS_FreeToHeap(OS_ARENA_MAINEX, ((OSHeapHandle) -1), ptr);
}
static inline void OS_FreeAllToMainEx(void) {
    OS_FreeAllToHeap(OS_ARENA_MAINEX, ((OSHeapHandle) -1));
}
static inline void *OS_AllocFromITCM(u32 size) {
    return OS_AllocFromHeap(OS_ARENA_ITCM, ((OSHeapHandle) -1), size);
}
static inline void OS_FreeToITCM(void *ptr) {
    OS_FreeToHeap(OS_ARENA_ITCM, ((OSHeapHandle) -1), ptr);
}
static inline void OS_FreeAllToITCM(void) {
    OS_FreeAllToHeap(OS_ARENA_ITCM, ((OSHeapHandle) -1));
}
static inline void *OS_AllocFromDTCM(u32 size) {
    return OS_AllocFromHeap(OS_ARENA_DTCM, ((OSHeapHandle) -1), size);
}
static inline void OS_FreeToDTCM(void *ptr) {
    OS_FreeToHeap(OS_ARENA_DTCM, ((OSHeapHandle) -1), ptr);
}
static inline void OS_FreeAllToDTCM(void) {
    OS_FreeAllToHeap(OS_ARENA_DTCM, ((OSHeapHandle) -1));
}
static inline void *OS_AllocFromShared(u32 size) {
    return OS_AllocFromHeap(OS_ARENA_SHARED, ((OSHeapHandle) -1), size);
}
static inline void OS_FreeToShared(void *ptr) {
    OS_FreeToHeap(OS_ARENA_SHARED, ((OSHeapHandle) -1), ptr);
}
static inline void OS_FreeAllToShared(void) {
    OS_FreeAllToHeap(OS_ARENA_SHARED, ((OSHeapHandle) -1));
}
static inline void *OS_AllocFromWramMain(u32 size) {
    return OS_AllocFromHeap(OS_ARENA_WRAM_MAIN, ((OSHeapHandle) -1), size);
}
static inline void OS_FreeToWramMain(void *ptr) {
    OS_FreeToHeap(OS_ARENA_WRAM_MAIN, ((OSHeapHandle) -1), ptr);
}
static inline void OS_FreeAllToWramMain(void) {
    OS_FreeAllToHeap(OS_ARENA_WRAM_MAIN, ((OSHeapHandle) -1));
}
static inline void *OS_AllocFromWramSub(u32 size) {
    return OS_AllocFromHeap(OS_ARENA_WRAM_SUB, ((OSHeapHandle) -1), size);
}
static inline void OS_FreeToWramSub(void *ptr) {
    OS_FreeToHeap(OS_ARENA_WRAM_SUB, ((OSHeapHandle) -1), ptr);
}
static inline void OS_FreeAllToWramSub(void) {
    OS_FreeAllToHeap(OS_ARENA_WRAM_SUB, ((OSHeapHandle) -1));
}
static inline void *OS_AllocFromSubPrivWram(u32 size) {
    return OS_AllocFromHeap(OS_ARENA_WRAM_SUBPRIV, ((OSHeapHandle) -1), size);
}
static inline void OS_FreeToSubPrivWram(void *ptr) {
    OS_FreeToHeap(OS_ARENA_WRAM_SUBPRIV, ((OSHeapHandle) -1), ptr);
}
static inline void OS_FreeAllToSubPrivWram(void) {
    OS_FreeAllToHeap(OS_ARENA_WRAM_SUBPRIV, ((OSHeapHandle) -1));
}
typedef u64 OSTick;
extern void OS_InitTick(void);
extern BOOL OS_IsTickAvailable(void);
extern OSTick OS_GetTick(void);
extern u16 OS_GetTickLo(void);
extern void OS_SetTick(OSTick count);
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
extern void OS_InitAlarm(void);
extern void OS_EndAlarm(void);
extern BOOL OS_IsAlarmAvailable(void);
extern void OS_CreateAlarm(OSAlarm *alarm);
extern void OS_SetAlarm(OSAlarm *alarm, OSTick tick, OSAlarmHandler handler, void *arg);
extern void OS_SetPeriodicAlarm(OSAlarm *alarm, OSTick start, OSTick period, OSAlarmHandler handler, void *arg);
extern void OS_SetAlarmTag(OSAlarm *alarm, u32 tag);
extern void OS_CancelAlarm(OSAlarm *alarm);
extern void OS_CancelAlarms(u32 tag);
extern void OS_CancelAllAlarms(void);
struct OSiAlarmQueue {
    OSAlarm *head;
    OSAlarm *tail;
};
extern struct OSiAlarmQueue *OSi_GetAlarmQueue(void);
typedef void (*OSVAlarmHandler)(void *);
typedef struct OSiVAlarm OSVAlarm;
struct OSiVAlarm {
    OSVAlarmHandler handler;
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
extern void OS_InitVAlarm(void);
extern void OS_EndVAlarm(void);
extern BOOL OS_IsVAlarmAvailable(void);
extern void OS_CreateVAlarm(OSVAlarm *alarm);
extern void OS_SetVAlarm(OSVAlarm *alarm, s16 count, s16 delay, OSVAlarmHandler handler, void *arg);
static inline void OS_SetOneTimeVAlarm(OSVAlarm *alarm, s16 count, OSVAlarmHandler handler, void *arg) {
    OS_SetVAlarm(alarm, count, 10, handler, arg);
}
extern void OS_SetPeriodicVAlarm(OSVAlarm *alarm, s16 count, s16 delay, OSVAlarmHandler handler, void *arg);
extern void OS_SetVAlarmTag(OSVAlarm *alarm, u32 tag);
extern void OS_CancelVAlarm(OSVAlarm *alarm);
extern void OS_CancelVAlarms(u32 tag);
extern void OS_CancelAllVAlarms(void);
extern void OS_InitReset(void);
extern void OS_ResetSystem(u32 parameter);
extern BOOL OS_IsResetOccurred(void);
inline u32 OS_GetResetParameter(void) {
    return (u32) * (u32 *) (0x02000000 + 0x007ffc20);
}
typedef struct NVRAMConfigDate {
    u8 month;
    u8 day;
} NVRAMConfigDate;
typedef struct NVRAMConfigNickname {
    u16 str[10];
    u8 length;
    u8 rsv;
} NVRAMConfigNickname;
typedef struct NVRAMConfigComment {
    u16 str[26];
    u8 length;
    u8 rsv;
} NVRAMConfigComment;
typedef struct NVRAMConfigOwnerInfo {
    u8 favoriteColor : 4;
    u8 rsv : 4;
    NVRAMConfigDate birthday;
    u8 pad;
    NVRAMConfigNickname nickname;
    NVRAMConfigComment comment;
} NVRAMConfigOwnerInfo;
typedef struct NVRAMConfigAlarm {
    u8 hour;
    u8 minute;
    u8 second;
    u8 pad;
    u16 enableWeek : 7;
    u16 alarmOn : 1;
    u16 rsv : 8;
} NVRAMConfigAlarm;
typedef struct NVRAMConfigTpCalibData {
    u16 raw_x1;
    u16 raw_y1;
    u8 dx1;
    u8 dy1;
    u16 raw_x2;
    u16 raw_y2;
    u8 dx2;
    u8 dy2;
} NVRAMConfigTpCalibData;
typedef struct NVRAMConfigOption {
    u16 language : 3;
    u16 agbLcd : 1;
    u16 detectPullOutCardFlag : 1;
    u16 detectPullOutCtrdgFlag : 1;
    u16 autoBootFlag : 1;
    u16 rsv : 4;
    u16 input_favoriteColor : 1;
    u16 input_tp : 1;
    u16 input_language : 1;
    u16 input_rtc : 1;
    u16 input_nickname : 1;
    u8 timezone;
    u8 rtcClockAdjust;
    s64 rtcOffset;
} NVRAMConfigOption;
typedef struct NVRAMConfigData {
    u8 version;
    u8 pad;
    NVRAMConfigOwnerInfo owner;
    NVRAMConfigAlarm alarm;
    NVRAMConfigTpCalibData tp;
    NVRAMConfigOption option;
} NVRAMConfigData;
typedef struct NVRAMConfig {
    NVRAMConfigData ncd;
    u16 saveCount;
    u16 crc16;
} NVRAMConfig;
typedef struct NVRAMConfigDataEx {
    u8 version;
    u8 language;
    u16 valid_language_bitmap;
    u8 padding[256 - sizeof(NVRAMConfigData) - 4 - 4 - 2];
} NVRAMConfigDataEx;
typedef struct NVRAMConfigEx {
    NVRAMConfigData ncd;
    u16 saveCount;
    u16 crc16;
    NVRAMConfigDataEx ncd_ex;
    u16 crc16_ex;
} NVRAMConfigEx;
extern void MIi_CpuClear16(u16 data, void *destp, u32 size);
extern void MIi_CpuCopy16(const void *srcp, void *destp, u32 size);
extern void MIi_CpuSend16(const void *srcp, volatile void *destp, u32 size);
extern void MIi_CpuClear32(u32 data, void *destp, u32 size);
extern void MIi_CpuCopy32(const void *srcp, void *destp, u32 size);
extern void MIi_CpuSend32(const void *srcp, volatile void *destp, u32 size);
extern void MIi_CpuClearFast(u32 data, void *destp, u32 size);
extern void MIi_CpuCopyFast(const void *srcp, void *destp, u32 size);
static inline void MI_CpuFill32(void *dest, u32 data, u32 size) {
    ((void) 0);
    ((void) 0);

    MIi_CpuClear32(data, dest, size);
}
static inline void MI_CpuCopy32(const void *src, void *dest, u32 size) {
    ((void) 0);
    ((void) 0);
    ((void) 0);

    MIi_CpuCopy32(src, dest, size);
}
static inline void MI_CpuClear32(void *dest, u32 size) {
    MI_CpuFill32(dest, 0, size);
}
static inline void MI_CpuSend32(const void *src, volatile void *dest, u32 size) {
    ((void) 0);
    ((void) 0);
    ((void) 0);

    MIi_CpuSend32(src, dest, size);
}
static inline void MI_CpuFill16(void *dest, u16 data, u32 size) {
    ((void) 0);
    ((void) 0);

    MIi_CpuClear16(data, dest, size);
}
static inline void MI_CpuCopy16(const void *src, void *dest, u32 size) {
    ((void) 0);
    ((void) 0);
    ((void) 0);

    MIi_CpuCopy16(src, dest, size);
}
static inline void MI_CpuClear16(void *dest, u32 size) {
    MI_CpuFill16(dest, 0, size);
}
static inline void MI_CpuSend16(const void *src, volatile void *dest, u32 size) {
    ((void) 0);
    ((void) 0);
    ((void) 0);

    MIi_CpuSend16(src, dest, size);
}
static inline void MI_CpuFillFast(void *dest, u32 data, u32 size) {
    ((void) 0);
    ((void) 0);

    MIi_CpuClearFast(data, dest, size);
}
static inline void MI_CpuCopyFast(const void *src, void *dest, u32 size) {
    ((void) 0);
    ((void) 0);
    ((void) 0);

    MIi_CpuCopyFast(src, dest, size);
}
static inline void MI_CpuClearFast(void *dest, u32 size) {
    MI_CpuFillFast(dest, 0, size);
}
extern void MI_CpuFill8(void *dest, u8 data, u32 size);
extern void MI_CpuCopy8(const void *src, void *dest, u32 size);
static inline void MI_CpuClear8(void *dest, u32 size) {
    MI_CpuFill8(dest, 0, size);
}
extern void MI_Copy16B(register const void *pSrc, register void *pDest);
extern void MI_Copy32B(register const void *pSrc, register void *pDest);
extern void MI_Copy36B(register const void *pSrc, register void *pDest);
extern void MI_Copy48B(register const void *pSrc, register void *pDest);
extern void MI_Copy64B(register const void *pSrc, register void *pDest);
extern void MI_Copy128B(register const void *pSrc, register void *pDest);
extern void MI_Zero32B(register void *pDest);
extern void MI_Zero36B(register void *pDest);
extern void MI_Zero48B(register void *pDest);
extern void MI_Zero64B(register void *pDest);
typedef s32 fx32;
typedef s64 fx64;
typedef s64 fx64c;
typedef s16 fx16;
typedef struct {
    fx32 x;
    fx32 y;
    fx32 z;
} VecFx32;
typedef struct {
    fx16 x;
    fx16 y;
    fx16 z;
} VecFx16;
typedef union {
    struct {
        fx32 _00, _01, _02, _03;
        fx32 _10, _11, _12, _13;
        fx32 _20, _21, _22, _23;
        fx32 _30, _31, _32, _33;
    };
    fx32 m[4][4];
    fx32 a[16];
} MtxFx44;
typedef union {
    struct {
        fx32 _00, _01, _02;
        fx32 _10, _11, _12;
        fx32 _20, _21, _22;
        fx32 _30, _31, _32;
    };
    fx32 m[4][3];
    fx32 a[12];
} MtxFx43;
typedef union {
    struct {
        fx32 _00, _01, _02;
        fx32 _10, _11, _12;
        fx32 _20, _21, _22;
    };
    fx32 m[3][3];
    fx32 a[9];
} MtxFx33;
typedef union {
    struct {
        fx32 _00, _01;
        fx32 _10, _11;
    };
    fx32 m[2][2];
    fx32 a[4];
} MtxFx22;
extern void FX_Init(void);
extern s32 FX_Whole(fx32 v);
extern fx32 FX_Floor(fx32 v);
extern fx32 FX_Modf(fx32 x, fx32 *iPtr);
static inline s32 FX_Whole(fx32 v) {
    return (s32) (v >> 12);
}
static inline fx32 FX_Floor(fx32 v) {
    return (fx32) (v & (0x7ffff000 | 0x80000000));
}
static inline fx32 FX32_CAST(s64 res) {
    ((void) 0);
    return (fx32) res;
}
extern fx32 FX_MulFunc(fx32 v1, fx32 v2);
extern fx32 FX_MulInline(fx32 v1, fx32 v2);
static inline fx32 FX_MulInline(fx32 v1, fx32 v2) {
    return FX32_CAST(((s64) (v1) *v2 + 0x800LL) >> 12);
}
extern fx32 FX_Mul32x64cFunc(fx32 v32, fx64c v64c);
extern fx32 FX_Mul32x64cInline(fx32 v32, fx64c v64c);
static inline fx32 FX_Mul32x64cInline(fx32 v32, fx64c v64c) {
    fx64c tmp = v64c * v32 + 0x80000000LL;
    return FX32_CAST(tmp >> 32);
}
extern u32 GXi_DmaId;
typedef u16 GXRgb;
typedef u16 GXRgba;
typedef u32 VecFx10;
typedef enum OSLanguage {
    OS_LANGUAGE_JAPANESE = 0,
    OS_LANGUAGE_ENGLISH  = 1,
    OS_LANGUAGE_FRENCH   = 2,
    OS_LANGUAGE_GERMAN   = 3,
    OS_LANGUAGE_ITALIAN  = 4,
    OS_LANGUAGE_SPANISH  = 5,

    OS_LANGUAGE_CHINESE = 6,
    OS_LANGUAGE_HANGUL  = 7,

    OS_LANGUAGE_CODE_MAX = 8
} OSLanguage;
typedef struct OSBirthday {
    u8 month;
    u8 day;
} OSBirthday;
typedef struct OSOwnerInfo {
    u8 language;
    u8 favoriteColor;
    OSBirthday birthday;
    u16 nickName[10 + 1];
    u16 nickNameLength;
    u16 comment[26 + 1];
    u16 commentLength;
} OSOwnerInfo;
extern void OS_GetOwnerInfo(OSOwnerInfo *info);
extern s64 OS_GetOwnerRtcOffset(void);
extern void OS_GetMacAddress(u8 *macAddress);
extern const GXRgb *OS_GetFavoriteColorTable(void);
static inline GXRgb OS_GetFavoriteColor(int index) {
    return OS_GetFavoriteColorTable()[index & 0x0F];
}
extern void OS_GetLowEntropyData(u32 buffer[32 / sizeof(u32)]);
typedef union {
    u32 b32;
    u16 b16;
} OSDmaClearSrc;
typedef struct {
    u8 bootCheckInfo[0x20];
    u32 resetParameter;
    u8 padding5[0x8];
    u32 romBaseOffset;
    u8 cartridgeModuleInfo[12];
    u32 vblankCount;
    u8 wmBootBuf[0x40];
    u8 nvramUserInfo[0x100];
    u8 isd_reserved1[0x20];
    u8 arenaInfo[0x48];
    u8 real_time_clock[8];
    u32 dmaClearBuf[4];
    u8 rom_header[0x160];
    u8 isd_reserved2[32];
    u32 pxiSignalParam[2];
    u32 pxiHandleChecker[2];
    u32 mic_last_address;
    u16 mic_sampling_data;
    u16 wm_callback_control;
    u16 wm_rssi_pool;
    u8 ctrdg_SetModuleInfoFlag;
    u8 ctrdg_IsExisting;
    u32 component_param;
    OSThreadInfo *threadinfo_mainp;
    OSThreadInfo *threadinfo_subp;
    u16 button_XY;
    u8 touch_panel[4];
    u16 autoloadSync;
    u32 lockIDFlag_mainp[2];
    u32 lockIDFlag_subp[2];
    struct OSLockWord lock_VRAM_C;
    struct OSLockWord lock_VRAM_D;
    struct OSLockWord lock_WRAM_BLOCK0;
    struct OSLockWord lock_WRAM_BLOCK1;
    struct OSLockWord lock_CARD;
    struct OSLockWord lock_CARTRIDGE;
    struct OSLockWord lock_INIT;
    u16 mmem_checker_mainp;
    u16 mmem_checker_subp;
    u8 padding4[2];
    u16 command_area;
} OSSystemWork;
typedef union {
    struct {
        u32 name;
        u32 time;

    } entry;
    struct {
        u32 tag;
        u32 time;

    } exit;
} OSFunctionCost;
typedef struct {
    OSFunctionCost *current;
    OSFunctionCost *limit;
    u16 enable;
    u16 padding;

    OSFunctionCost array[1];
} OSFunctionCostInfo;
typedef struct {
    u32 name;
    u32 count;
    u64 time;
} OSFunctionCostStatistics;
typedef struct {
    u32 size;
    OSFunctionCostStatistics *limit;
    OSFunctionCostStatistics array[1];
} OSFunctionCostStatisticsInfo;
extern void OS_InitFunctionCost(void *buf, u32 size);
extern int OS_CalcFunctionCostLines(u32 size);
extern u32 OS_CalcFunctionCostBufferSize(int lines);
extern BOOL OS_CheckFunctionCostBuffer(void *buf);
extern void OSi_ClearThreadFunctionCostBuffer(OSThread *thread);
static inline void OS_ClearFunctionCostBuffer(void) {
    OSi_ClearThreadFunctionCostBuffer(((void *) 0));
}
extern BOOL OS_EnableFunctionCost(void);
extern BOOL OS_DisableFunctionCost(void);
extern BOOL OS_RestoreFunctionCost(BOOL enable);
extern void OS_InitStatistics(void *statBuf, u32 size);
extern void OS_CalcThreadStatistics(void *statBuf, OSThread *thread);
static inline void OS_CalcStatistics(void *statBuf) {
    OS_CalcThreadStatistics(statBuf, ((void *) 0));
}
extern BOOL OS_CheckStatisticsBuffer(void *statBuf);
extern void OS_DumpStatistics(void *statBuf);
extern void OS_EnableICacheForProtectionRegion(register u32 flags);
extern void OS_DisableICacheForProtectionRegion(register u32 flags);
extern u32 OS_GetICacheEnableFlagsForProtectionRegion(void);
extern void OS_SetIPermissionsForProtectionRegion(u32 setMask, u32 flags);
extern u32 OS_GetIPermissionsForProtectionRegion(void);
extern void OS_EnableDCacheForProtectionRegion(u32 flags);
extern void OS_DisableDCacheForProtectionRegion(u32 flags);
extern u32 OS_GetDCacheEnableFlagsForProtectionRegion(u32 flags);
extern void OS_SetDPermissionsForProtectionRegion(u32 setMask, u32 flags);
extern u32 OS_GetDPermissionsForProtectionRegion(void);
extern void OS_EnableWriteBufferForProtectionRegion(u32 flags);
extern void OS_DisableWriteBufferForProtectionRegion(u32 flags);
extern u32 OS_GetWriteBufferEnableFlagsForProtectionRegion(u32 flags);
typedef enum {
    OSi_PR_BASE_MASK_4KB   = 0xfffff000,
    OSi_PR_BASE_MASK_8KB   = 0xffffe000,
    OSi_PR_BASE_MASK_16KB  = 0xffffc000,
    OSi_PR_BASE_MASK_32KB  = 0xffff8000,
    OSi_PR_BASE_MASK_64KB  = 0xffff0000,
    OSi_PR_BASE_MASK_128KB = 0xfffe0000,
    OSi_PR_BASE_MASK_256KB = 0xfffc0000,
    OSi_PR_BASE_MASK_512KB = 0xfff80000,
    OSi_PR_BASE_MASK_1MB   = 0xfff00000,
    OSi_PR_BASE_MASK_2MB   = 0xffe00000,
    OSi_PR_BASE_MASK_4MB   = 0xffc00000,
    OSi_PR_BASE_MASK_8MB   = 0xff800000,
    OSi_PR_BASE_MASK_16MB  = 0xff000000,
    OSi_PR_BASE_MASK_32MB  = 0xfe000000,
    OSi_PR_BASE_MASK_64MB  = 0xfc000000,
    OSi_PR_BASE_MASK_128MB = 0xf8000000,
    OSi_PR_BASE_MASK_256MB = 0xf0000000,
    OSi_PR_BASE_MASK_512MB = 0xe0000000,
    OSi_PR_BASE_MASK_1GB   = 0xc0000000,
    OSi_PR_BASE_MASK_2GB   = 0x80000000,
    OSi_PR_BASE_MASK_4GB   = 0x00000000
} OSiProtectionRegionBaseMask;
static inline u32 OSi_CalcPRParam(u32 address, u32 size, OSiProtectionRegionBaseMask mask) {

    return ((address & mask) | size);
}
extern void OS_SetProtectionRegion0(u32 param);
extern void OS_SetProtectionRegion1(u32 param);
extern void OS_SetProtectionRegion2(u32 param);
extern void OS_SetProtectionRegion3(u32 param);
extern void OS_SetProtectionRegion4(u32 param);
extern void OS_SetProtectionRegion5(u32 param);
extern void OS_SetProtectionRegion6(u32 param);
extern void OS_SetProtectionRegion7(u32 param);
extern u32 OS_GetProtectionRegion0(void);
extern u32 OS_GetProtectionRegion1(void);
extern u32 OS_GetProtectionRegion2(void);
extern u32 OS_GetProtectionRegion3(void);
extern u32 OS_GetProtectionRegion4(void);
extern u32 OS_GetProtectionRegion5(void);
extern u32 OS_GetProtectionRegion6(void);
extern u32 OS_GetProtectionRegion7(void);
extern void OS_EnableITCM(void);
extern void OS_DisableITCM(void);
extern void OS_SetITCMParam(u32 param);
extern u32 OS_GetITCMParam(void);
static inline u32 OS_GetITCMAddress(void) {
    return (u32) 0x01ff8000;
}
extern void OS_EnableDTCM(void);
extern void OS_DisableDTCM(void);
extern void OS_SetDTCMParam(u32 param);
extern u32 OS_GetDTCMParam(void);
extern void OS_SetDTCMAddress(u32 address);
extern u32 OS_GetDTCMAddress(void);
extern BOOL DC_Enable(void);
extern BOOL DC_Disable(void);
extern BOOL DC_Restore(BOOL enable);
extern void DC_InvalidateAll(void);
extern void DC_StoreAll(void);
extern void DC_FlushAll(void);
extern void DC_InvalidateRange(void *startAddr, u32 nBytes);
extern void DC_StoreRange(const void *startAddr, u32 nBytes);
extern void DC_FlushRange(const void *startAddr, u32 nBytes);
extern void DC_TouchRange(const void *startAddr, u32 nBytes);
extern void DC_LockdownRange(const void *startAddr, u32 nBytes);
extern void DC_UnlockdownAll(void);
extern void DC_Unlockdown(u32 num);
extern void DC_WaitWriteBufferEmpty(void);
static inline void DC_CleanAll(void) {
    DC_StoreAll();
}
static inline void DC_CleanAndInvalidateAll(void) {
    DC_FlushAll();
}
static inline void DC_CleanRange(const void *startAddr, u32 nBytes) {
    DC_StoreRange(startAddr, nBytes);
}
static inline void DC_CleanAndInvalidateRange(const void *startAddr, u32 nBytes) {
    DC_FlushRange(startAddr, nBytes);
}
extern BOOL IC_Enable(void);
extern BOOL IC_Disable(void);
extern BOOL IC_Restore(BOOL enable);
extern void IC_InvalidateAll(void);
extern void IC_InvalidateRange(void *startAddr, u32 nBytes);
extern void IC_PrefetchRange(const void *startAddr, u32 nBytes);
extern void IC_LockdownRange(const void *startAddr, u32 nBytes);
extern void IC_Unlockdown(u32 num);
extern void IC_UnlockdownAll(void);
extern void OS_EnableProtectionUnit(void);
extern void OS_DisableProtectionUnit(void);
extern void OSi_InitVramExclusive(void);
extern BOOL OSi_TryLockVram(u16 bank, u16 lockId);
extern void OSi_UnlockVram(u16 bank, u16 lockId);
extern void OS_InitChina(const char **isbn);
extern void OS_ShowAttentionChina(const char **isbn);
typedef struct OSArgumentBuffer {
    char argMark[18];
    u16 size;

    const char buffer[256];

} OSArgumentBuffer;
static inline int OS_GetArgc(void) {
    return 0;
}
static inline const char *OS_GetArgv(int n) {

#pragma unused(n)
#line 59
    return ((void *) 0);
}
static inline int OS_GetOpt(const char *optstring) {

#pragma unused(optstring)
#line 69
    return -1;
}
extern const char *OSi_OptArg;
extern int OSi_OptInd;
extern int OSi_OptOpt;
static inline const char *OS_GetOptArg(void) {
    return OSi_OptArg;
}
static inline int OS_GetOptInd(void) {
    return OSi_OptInd;
}
static inline int OS_GetOptOpt(void) {
    return OSi_OptOpt;
}
static inline void OS_ConvertToArguments(const char *str, char cs, char *buffer, u32 bufSize) {

#pragma unused(str, cs, buffer, bufSize)
#line 98
}
static inline void OS_SetArgumentBuffer(const char *buffer) {

#pragma unused(buffer)
#line 107
}
static inline const char *OS_GetArgumentBuffer(void) {
    return ((void *) 0);
}
extern void SND_Init(void);
extern void SNDi_LockMutex(void);
extern void SNDi_UnlockMutex(void);
typedef void (*SNDAlarmHandler)(void *);
typedef struct SNDAlarm {
    u8 enable;
    u8 id;
    u16 padding;
    struct {
        OSTick tick;
        OSTick period;
    } setting;
    OSAlarm alarm;
} SNDAlarm;
extern void SND_AlarmInit(void);
extern void SNDi_IncAlarmId(int alarmNo);
extern u8 SNDi_SetAlarmHandler(int alarmNo, SNDAlarmHandler handler, void *arg);
extern void SNDi_CallAlarmHandler(int alarmNo);
typedef enum SNDCommandID {
    SND_COMMAND_START_SEQ,
    SND_COMMAND_STOP_SEQ,
    SND_COMMAND_PREPARE_SEQ,
    SND_COMMAND_START_PREPARED_SEQ,
    SND_COMMAND_PAUSE_SEQ,
    SND_COMMAND_SKIP_SEQ,
    SND_COMMAND_PLAYER_PARAM,
    SND_COMMAND_TRACK_PARAM,
    SND_COMMAND_MUTE_TRACK,
    SND_COMMAND_ALLOCATABLE_CHANNEL,
    SND_COMMAND_PLAYER_LOCAL_VAR,
    SND_COMMAND_PLAYER_GLOBAL_VAR,
    SND_COMMAND_START_TIMER,
    SND_COMMAND_STOP_TIMER,
    SND_COMMAND_SETUP_CHANNEL_PCM,
    SND_COMMAND_SETUP_CHANNEL_PSG,
    SND_COMMAND_SETUP_CHANNEL_NOISE,
    SND_COMMAND_SETUP_CAPTURE,
    SND_COMMAND_SETUP_ALARM,
    SND_COMMAND_CHANNEL_TIMER,
    SND_COMMAND_CHANNEL_VOLUME,
    SND_COMMAND_CHANNEL_PAN,
    SND_COMMAND_SURROUND_DECAY,
    SND_COMMAND_MASTER_VOLUME,
    SND_COMMAND_MASTER_PAN,
    SND_COMMAND_OUTPUT_SELECTOR,
    SND_COMMAND_LOCK_CHANNEL,
    SND_COMMAND_UNLOCK_CHANNEL,
    SND_COMMAND_STOP_UNLOCKED_CHANNEL,
    SND_COMMAND_SHARED_WORK,
    SND_COMMAND_INVALIDATE_SEQ,
    SND_COMMAND_INVALIDATE_BANK,
    SND_COMMAND_INVALIDATE_WAVE,
    SND_COMMAND_READ_DRIVER_INFO
} SNDCommandID;
typedef struct SNDCommand {
    struct SNDCommand *next;
    SNDCommandID id;
    u32 arg[4];
} SNDCommand;
extern void SND_CommandInit(void);
extern struct SNDCommand *SND_AllocCommand(u32 flags);
extern void SND_PushCommand(struct SNDCommand *command);
extern const SNDCommand *SND_RecvCommandReply(u32 flags);
extern BOOL SND_FlushCommand(u32 flags);
extern void SND_WaitForCommandProc(u32 tag);
extern void SND_WaitForFreeCommand(int count);
extern u32 SND_GetCurrentCommandTag(void);
extern BOOL SND_IsFinishedCommandTag(u32 tag);
extern int SND_CountFreeCommand(void);
extern int SND_CountReservedCommand(void);
extern int SND_CountWaitingCommand(void);
typedef enum SNDChannelOut {
    SND_CHANNEL_OUT_MIXER,
    SND_CHANNEL_OUT_BYPASS
} SNDChannelOut;
typedef enum SNDOutput {
    SND_OUTPUT_MIXER,
    SND_OUTPUT_CHANNEL1,
    SND_OUTPUT_CHANNEL3,
    SND_OUTPUT_CHANNEL1_3
} SNDOutput;
typedef enum {
    SND_CAPTURE_0,
    SND_CAPTURE_1
} SNDCapture;
typedef enum {
    SND_CAPTURE_FORMAT_PCM16,
    SND_CAPTURE_FORMAT_PCM8
} SNDCaptureFormat;
typedef enum {
    SND_CAPTURE_REPEAT_YES,
    SND_CAPTURE_REPEAT_NO
} SNDCaptureRepeat;
typedef enum {
    SND_CAPTURE_IN_MIXER,
    SND_CAPTURE_IN_CHANNEL,
    SND_CAPTURE_IN_MIXER_L  = SND_CAPTURE_IN_MIXER,
    SND_CAPTURE_IN_MIXER_R  = SND_CAPTURE_IN_MIXER,
    SND_CAPTURE_IN_CHANNEL0 = SND_CAPTURE_IN_CHANNEL,
    SND_CAPTURE_IN_CHANNEL2 = SND_CAPTURE_IN_CHANNEL
} SNDCaptureIn;
typedef enum {
    SND_CAPTURE_OUT_NORMAL,
    SND_CAPTURE_OUT_CHANNEL_MIX,
    SND_CAPTURE_OUT_CHANNEL0_MIX = SND_CAPTURE_OUT_CHANNEL_MIX,
    SND_CAPTURE_OUT_CHANNEL2_MIX = SND_CAPTURE_OUT_CHANNEL_MIX
} SNDCaptureOut;
typedef enum {
    SND_CHANNEL_0,
    SND_CHANNEL_1,
    SND_CHANNEL_2,
    SND_CHANNEL_3,
    SND_CHANNEL_4,
    SND_CHANNEL_5,
    SND_CHANNEL_6,
    SND_CHANNEL_7,
    SND_CHANNEL_8,
    SND_CHANNEL_9,
    SND_CHANNEL_10,
    SND_CHANNEL_11,
    SND_CHANNEL_12,
    SND_CHANNEL_13,
    SND_CHANNEL_14,
    SND_CHANNEL_15
} SNDChannelId;
typedef enum {
    SND_WAVE_FORMAT_PCM8,
    SND_WAVE_FORMAT_PCM16,
    SND_WAVE_FORMAT_ADPCM,
    SND_WAVE_FORMAT_PSG,
    SND_WAVE_FORMAT_NOISE = SND_WAVE_FORMAT_PSG
} SNDWaveFormat;
typedef enum {
    SND_CHANNEL_LOOP_MANUAL,
    SND_CHANNEL_LOOP_REPEAT,
    SND_CHANNEL_LOOP_1SHOT
} SNDChannelLoop;
typedef enum {
    SND_DUTY_1_8,
    SND_DUTY_2_8,
    SND_DUTY_3_8,
    SND_DUTY_4_8,
    SND_DUTY_5_8,
    SND_DUTY_6_8,
    SND_DUTY_7_8
} SNDDuty;
typedef enum {
    SND_CHANNEL_DATASHIFT_NONE,
    SND_CHANNEL_DATASHIFT_1BIT,
    SND_CHANNEL_DATASHIFT_2BIT,
    SND_CHANNEL_DATASHIFT_4BIT
} SNDChannelDataShift;
struct SNDExChannel;
typedef enum SNDExChannelType {
    SND_EX_CHANNEL_PCM,
    SND_EX_CHANNEL_PSG,
    SND_EX_CHANNEL_NOISE
} SNDExChannelType;
typedef enum SNDExChannelCallbackStatus {
    SND_EX_CHANNEL_CALLBACK_DROP,
    SND_EX_CHANNEL_CALLBACK_FINISH
} SNDExChannelCallbackStatus;
typedef enum SNDEnvStatus {
    SND_ENV_ATTACK,
    SND_ENV_DECAY,
    SND_ENV_SUSTAIN,
    SND_ENV_RELEASE
} SNDEnvStatus;
typedef enum SNDLfoTarget {
    SND_LFO_PITCH,
    SND_LFO_VOLUME,
    SND_LFO_PAN
} SNDLfoTarget;
typedef void (*SNDExChannelCallback)(struct SNDExChannel *ch_p, SNDExChannelCallbackStatus status, void *userData);
typedef struct SNDWaveParam {
    u8 format;
    u8 loopflag;
    u16 rate;
    u16 timer;
    u16 loopstart;
    u32 looplen;
} SNDWaveParam;
typedef struct SNDLfoParam {
    u8 target;
    u8 speed;
    u8 depth;
    u8 range;
    u16 delay;
} SNDLfoParam;
typedef struct SNDLfo {
    struct SNDLfoParam param;
    u16 delay_counter;
    u16 counter;
} SNDLfo;
typedef struct SNDExChannel {
    u8 myNo;
    u8 type;
    u8 env_status;
    u8 active_flag : 1;
    u8 start_flag : 1;
    u8 auto_sweep : 1;
    u8 sync_flag : 5;
    u8 pan_range;
    u8 original_key;
    s16 user_decay2;
    u8 key;
    u8 velocity;
    s8 init_pan;
    s8 user_pan;
    s16 user_decay;
    s16 user_pitch;
    s32 env_decay;
    s32 sweep_counter;
    s32 sweep_length;
    u8 attack;
    u8 sustain;
    u16 decay;
    u16 release;
    u8 prio;
    u8 pan;
    u16 volume;
    u16 timer;
    struct SNDLfo lfo;
    s16 sweep_pitch;
    s32 length;

    struct SNDWaveParam wave;
    union {
        const void *data;
        SNDDuty duty;
    };

    SNDExChannelCallback callback;
    void *callback_data;
    struct SNDExChannel *nextLink;
} SNDExChannel;
typedef enum {
    SND_SEQ_MUTE_OFF,
    SND_SEQ_MUTE_NO_STOP,
    SND_SEQ_MUTE_RELEASE,
    SND_SEQ_MUTE_STOP
} SNDSeqMute;
struct SNDBankData;
typedef struct SNDPlayer {
    u8 active_flag : 1;
    u8 prepared_flag : 1;
    u8 pause_flag : 1;
    u8 pad_ : 5;
    u8 myNo;
    u8 pad2_;
    u8 pad3_;
    u8 prio;
    u8 volume;
    s16 extFader;
    u8 tracks[16];
    u16 tempo;
    u16 tempo_ratio;
    u16 tempo_counter;
    u16 pad__;
    struct SNDBankData *bank;
} SNDPlayer;
typedef struct SNDTrack {
    u8 active_flag : 1;
    u8 note_wait : 1;
    u8 mute_flag : 1;
    u8 tie_flag : 1;
    u8 note_finish_wait : 1;
    u8 porta_flag : 1;
    u8 cmp_flag : 1;
    u8 channel_mask_flag : 1;
    u8 pan_range;
    u16 prgNo;
    u8 volume;
    u8 volume2;
    s8 pitch_bend;
    u8 bend_range;
    s8 pan;
    s8 ext_pan;
    s16 extFader;
    s16 ext_pitch;
    u8 attack;
    u8 decay;
    u8 sustain;
    u8 release;
    u8 prio;
    s8 transpose;
    u8 porta_key;
    u8 porta_time;
    s16 sweep_pitch;
    struct SNDLfoParam mod;
    u16 channel_mask;
    s32 wait;
    const u8 *base;
    const u8 *cur;
    const u8 *call_stack[3];
    u8 loop_count[3];
    u8 call_stack_depth;
    struct SNDExChannel *channel_list;
} SNDTrack;
struct SNDBankData;
struct SNDSharedWork;
struct SNDSpCallback;
struct SNDDriverInfo;
extern void SND_StartSeq(int playerNo, const void *base, u32 offset, const struct SNDBankData *bank);
extern void SND_PrepareSeq(int playerNo, const void *base, u32 offset, const struct SNDBankData *bank);
extern void SND_StartPreparedSeq(int playerNo);
extern void SND_StopSeq(int playerNo);
extern void SND_StopSeq(int playerNo);
extern void SND_PauseSeq(int playerNo, BOOL flag);
extern void SND_SetPlayerTempoRatio(int playerNo, int ratio);
extern void SND_SetPlayerVolume(int playerNo, int volume);
extern void SND_SetPlayerChannelPriority(int playerNo, int prio);
extern void SND_SetPlayerLocalVariable(int playerNo, int varNo, s16 var);
extern void SND_SetPlayerGlobalVariable(int varNo, s16 var);
extern void SND_SetTrackMute(int playerNo, u32 trackBitMask, BOOL flag);
extern void SND_SetTrackMuteEx(int playerNo, u32 trackBitMask, SNDSeqMute mute);
extern void SND_SetTrackVolume(int playerNo, u32 trackBitMask, int volume);
extern void SND_SetTrackPitch(int playerNo, u32 trackBitMask, int pitch);
extern void SND_SetTrackPan(int playerNo, u32 trackBitMask, int pan);
extern void SND_SetTrackPanRange(int playerNo, u32 trackBitMask, int panRange);
extern void SND_SetTrackModDepth(int playerNo, u32 trackBitMask, int depth);
extern void SND_SetTrackModSpeed(int playerNo, u32 trackBitMask, int speed);
extern void SND_SetTrackAllocatableChannel(int playerNo, u32 trackBitMask, u32 chBitMask);
extern void SND_StartTimer(u32 chBitMask, u32 capBitMask, u32 alarmBitMask, u32 flags);
extern void SND_StopTimer(u32 chBitMask, u32 capBitMask, u32 alarmBitMask, u32 flags);
extern void SND_LockChannel(u32 chBitMask, u32 flags);
extern void SND_UnlockChannel(u32 chBitMask, u32 flags);
extern void SND_StopUnlockedChannel(u32 chBitMask, u32 flags);
extern void SND_SetupChannelPcm(int chNo, SNDWaveFormat format, const void *dataAddr, SNDChannelLoop loop, int loopStart,
                                int dataLen, int volume, SNDChannelDataShift shift, int timer, int pan);
extern void SND_SetupChannelPsg(int chNo, SNDDuty duty, int volume, SNDChannelDataShift shift, int timer, int pan);
extern void SND_SetupChannelNoise(int chNo, int volume, SNDChannelDataShift shift, int timer, int pan);
extern void SND_SetChannelVolume(u32 chBitMask, int volume, SNDChannelDataShift shift);
extern void SND_SetChannelTimer(u32 chBitMask, int timer);
extern void SND_SetChannelPan(u32 chBitMask, int pan);
extern void SND_SetupCapture(SNDCapture capture, SNDCaptureFormat format, void *buffer_p, u32 length, BOOL loopFlag,
                             SNDCaptureIn in, SNDCaptureOut out);
extern void SND_SetupAlarm(int alarmNo, u32 tick, u32 period, SNDAlarmHandler handler, void *arg);
extern void SND_SetMasterVolume(int volume);
extern void SND_SetOutputSelector(SNDOutput left, SNDOutput right, SNDChannelOut channel1, SNDChannelOut channel3);
extern void SND_SetMasterPan(int pan);
extern void SND_ResetMasterPan(void);
extern void SND_InvalidateSeqData(const void *start, const void *end);
extern void SND_InvalidateBankData(const void *start, const void *end);
extern void SND_InvalidateWaveData(const void *start, const void *end);
extern void SND_ReadDriverInfo(struct SNDDriverInfo *info);
extern void SNDi_SetPlayerParam(int playerNo, u32 offset, u32 data, int size);
extern void SNDi_SetTrackParam(int playerNo, u32 trackBitMask, u32 offset, u32 data, int size);
extern void SNDi_SkipSeq(int playerNo, u32 tick);
extern void SNDi_SetSurroundDecay(int decay);
typedef struct SNDWork {
    SNDExChannel channel[16];
    SNDPlayer player[16];
    SNDTrack track[32];

    SNDAlarm alarm[8];

} SNDWork;
typedef struct SNDSharedWork {
    vu32 finishCommandTag;
    vu32 playerStatus;
    vu16 channelStatus;
    vu16 captureStatus;
    vu32 padding[5];
    struct {
        vs16 variable[16];
        vu32 tickCounter;
    } player[16];
    vs16 globalVariable[16];
} SNDSharedWork;
typedef struct SNDSpReg {
    u32 chCtrl[16];
} SNDSpReg;
typedef struct SNDDriverInfo {
    SNDWork work;
    u32 chCtrl[16];
    SNDWork *workAddress;
    u32 lockedChannels;
    u32 padding[6];
} SNDDriverInfo;
typedef struct SNDChannelInfo {
    BOOL activeFlag : 1;
    BOOL lockFlag : 1;
    u16 volume;
    u8 pan;
    u8 pad_;
    SNDEnvStatus envStatus;
} SNDChannelInfo;
typedef struct SNDPlayerInfo {
    BOOL activeFlag : 1;
    BOOL pauseFlag : 1;
    u16 trackBitMask;
    u16 tempo;
    u8 volume;
    u8 pad_;
    u16 pad2_;
} SNDPlayerInfo;
typedef struct SNDTrackInfo {
    u16 prgNo;
    u8 volume;
    u8 volume2;
    s8 pitchBend;
    u8 bendRange;
    u8 pan;
    s8 transpose;
    u8 pad_;
    u8 chCount;
    u8 channel[16];
} SNDTrackInfo;
extern SNDSharedWork *SNDi_SharedWork;
extern s16 SND_GetPlayerLocalVariable(int playerNo, int varNo);
extern s16 SND_GetPlayerGlobalVariable(int varNo);
extern u32 SND_GetPlayerTickCounter(int playerNo);
extern u32 SND_GetPlayerStatus(void);
extern u32 SND_GetChannelStatus(void);
extern u32 SND_GetCaptureStatus(void);
extern BOOL SND_ReadChannelInfo(const SNDDriverInfo *driverInfo, int chNo, SNDChannelInfo *chInfo);
extern BOOL SND_ReadPlayerInfo(const SNDDriverInfo *driverInfo, int playerNo, SNDPlayerInfo *playerInfo);
extern BOOL SND_ReadTrackInfo(const SNDDriverInfo *driverInfo, int playerNo, int trackNo, SNDTrackInfo *trackInfo);
extern u32 SNDi_GetFinishedCommandTag(void);
extern void SNDi_InitSharedWork(SNDSharedWork *work);
typedef struct SNDBinaryFileHeader {
    char signature[4];
    u16 byteOrder;
    u16 version;
    u32 fileSize;
    u16 headerSize;
    u16 dataBlocks;
} SNDBinaryFileHeader;
typedef struct SNDBinaryBlockHeader {
    u32 kind;
    u32 size;
} SNDBinaryBlockHeader;
struct SNDWaveArc;
struct SNDExChannel;
typedef enum SNDInstType {
    SND_INST_INVALID = 0,
    SND_INST_PCM     = 0x01,
    SND_INST_PSG,
    SND_INST_NOISE,
    SND_INST_DIRECTPCM,
    SND_INST_NULL,
    SND_INST_DRUM_SET = 0x10,
    SND_INST_KEY_SPLIT
} SNDInstType;
typedef struct SNDWaveArcLink {
    struct SNDWaveArc *waveArc;
    struct SNDWaveArcLink *next;
} SNDWaveArcLink;
typedef struct SNDWaveArc {
    struct SNDBinaryFileHeader fileHeader;
    struct SNDBinaryBlockHeader blockHeader;
    struct SNDWaveArcLink *topLink;
    u32 reserved[7];
    u32 waveCount;
    u32 waveOffset[0];
} SNDWaveArc;
typedef struct SNDWaveData {
    struct SNDWaveParam param;
    u8 samples[0];
} SNDWaveData;
typedef struct SNDBankData {
    struct SNDBinaryFileHeader fileHeader;
    struct SNDBinaryBlockHeader blockHeader;
    struct SNDWaveArcLink waveArcLink[4];
    u32 instCount;
    u32 instOffset[0];
} SNDBankData;
typedef struct SNDInstParam {
    u16 wave[2];
    u8 original_key;
    u8 attack;
    u8 decay;
    u8 sustain;
    u8 release;
    u8 pan;
} SNDInstParam;
typedef struct SNDInstData {
    u8 type;
    u8 padding_;
    struct SNDInstParam param;
} SNDInstData;
typedef struct SNDKeySplit {
    u8 key[8];
    struct SNDInstData instOffset[0];
} SNDKeySplit;
typedef struct SNDDrumSet {
    u8 min;
    u8 max;
    struct SNDInstData instOffset[0];
} SNDDrumSet;
typedef struct SNDInstPos {
    u32 prgNo;
    u32 index;
} SNDInstPos;
extern void SND_AssignWaveArc(struct SNDBankData *bank, int index, struct SNDWaveArc *waveArc);
extern void SND_DestroyBank(struct SNDBankData *bank);
extern void SND_DestroyWaveArc(struct SNDWaveArc *waveArc);
extern BOOL SND_ReadInstData(const struct SNDBankData *bank, int prgNo, int key, struct SNDInstData *inst);
extern BOOL SND_WriteInstData(struct SNDBankData *bank, int prgNo, int key, const struct SNDInstData *inst);
extern struct SNDInstPos SND_GetFirstInstDataPos(const struct SNDBankData *bank);
extern BOOL SND_GetNextInstData(const struct SNDBankData *bank, struct SNDInstData *inst, struct SNDInstPos *pos);
extern u32 SND_GetWaveDataCount(const struct SNDWaveArc *waveArc);
extern void SND_SetWaveDataAddress(struct SNDWaveArc *waveArc, int index, const SNDWaveData *address);
extern const SNDWaveData *SND_GetWaveDataAddress(const struct SNDWaveArc *waveArc, int index);
struct SNDBankData;
typedef struct SNDMidiChannel {
    struct SNDExChannel *chp;
    u8 key;
    u8 pad1;
    u16 pad2;
} SNDMidiChannel;
typedef struct SNDMidiTrack {
    struct SNDMidiChannel channels[16];
    SNDLfoParam mod;
    s16 sweep_pitch;
    u16 prgNo;
    s8 pitchbend;
    u8 porta_time;
    u8 volume;
    s8 pan;
    u8 expression;
    s8 transpose;
    u8 prio;
    u8 bendrange;
    u8 porta_flag;
    u8 porta_key;
    u8 attack;
    u8 decay;
    u8 sustain;
    u8 release;
    u8 rpnLSB;
    u8 rpnMSB;
    u8 nrpnLSB;
    u8 nrpnMSB;
    u8 rpn_flag;
    u8 pad1;
    u16 pad2;
} SNDMidiTrack;
typedef struct SNDMidiPlayer {
    const struct SNDBankData *bank;
    SNDMidiTrack track[16];
    u8 main_volume;
    u8 prio;
    u16 pad;
} SNDMidiPlayer;
extern const s16 SNDi_DecibelTable[128];
extern const s16 SNDi_DecibelSquareTable[128];
static inline

    s16
    SND_CalcDecibel(int scale) {
    ((void) 0);
    return SNDi_DecibelTable[scale];
}
static inline

    s16
    SND_CalcDecibelSquare(int scale) {
    ((void) 0);
    return SNDi_DecibelSquareTable[scale];
}
extern u16 SND_CalcTimer(int orgTimer, int pitch);
extern u16 SND_CalcChannelVolume(int dB);
typedef struct {
    void *prevObject;
    void *nextObject;
} NNSFndLink;
typedef struct {
    void *headObject;
    void *tailObject;
    u16 numObjects;
    u16 offset;
} NNSFndList;
extern void NNS_FndInitList(NNSFndList *list, u16 offset);
extern void NNS_FndAppendListObject(NNSFndList *list, void *object);
extern void NNS_FndPrependListObject(NNSFndList *list, void *object);
extern void NNS_FndInsertListObject(NNSFndList *list, void *target, void *object);
extern void NNS_FndRemoveListObject(NNSFndList *list, void *object);
extern void *NNS_FndGetNextListObject(NNSFndList *list, void *object);
extern void *NNS_FndGetPrevListObject(NNSFndList *list, void *object);
extern void *NNS_FndGetNthListObject(NNSFndList *list, u16 index);
enum {
    NNS_FND_HEAP_FILL_NOUSE,
    NNS_FND_HEAP_FILL_ALLOC,
    NNS_FND_HEAP_FILL_FREE,
    NNS_FND_HEAP_FILL_MAX
};
typedef struct NNSiFndHeapHead NNSiFndHeapHead;
struct NNSiFndHeapHead {
    u32 signature;
    NNSFndLink link;
    NNSFndList childList;
    void *heapStart;
    void *heapEnd;
    u32 attribute;
};
typedef NNSiFndHeapHead *NNSFndHeapHandle;
extern NNSFndHeapHandle NNS_FndFindContainHeap(const void *memBlock);
enum {
    NNS_FND_EXPHEAP_ALLOC_DIR_FRONT,
    NNS_FND_EXPHEAP_ALLOC_DIR_REAR
};
enum {
    NNS_FND_EXPHEAP_ALLOC_MODE_FIRST,
    NNS_FND_EXPHEAP_ALLOC_MODE_NEAR
};
typedef struct NNSiFndExpHeapMBlockHead NNSiFndExpHeapMBlockHead;
struct NNSiFndExpHeapMBlockHead {
    u16 signature;
    u16 attribute;
    u32 blockSize;
    NNSiFndExpHeapMBlockHead *pMBHeadPrev;
    NNSiFndExpHeapMBlockHead *pMBHeadNext;
};
typedef struct NNSiFndExpMBlockList NNSiFndExpMBlockList;
struct NNSiFndExpMBlockList {
    NNSiFndExpHeapMBlockHead *head;
    NNSiFndExpHeapMBlockHead *tail;
};
typedef struct NNSiFndExpHeapHead NNSiFndExpHeapHead;
struct NNSiFndExpHeapHead {
    NNSiFndExpMBlockList mbFreeList;
    NNSiFndExpMBlockList mbUsedList;
    u16 groupID;
    u16 feature;
};
typedef void (*NNSFndHeapVisitor)(void *memBlock, NNSFndHeapHandle heap, u32 userParam);
extern NNSFndHeapHandle NNS_FndCreateExpHeapEx(void *startAddress, u32 size, u16 optFlag);
extern void NNS_FndDestroyExpHeap(NNSFndHeapHandle heap);
extern void *NNS_FndAllocFromExpHeapEx(NNSFndHeapHandle heap, u32 size, int alignment);
extern u32 NNS_FndResizeForMBlockExpHeap(NNSFndHeapHandle heap, void *memBlock, u32 size);
extern void NNS_FndFreeToExpHeap(NNSFndHeapHandle heap, void *memBlock);
extern u32 NNS_FndGetTotalFreeSizeForExpHeap(NNSFndHeapHandle heap);
extern u32 NNS_FndGetAllocatableSizeForExpHeapEx(NNSFndHeapHandle heap, int alignment);
extern u16 NNS_FndSetAllocModeForExpHeap(NNSFndHeapHandle heap, u16 mode);
extern u16 NNS_FndGetAllocModeForExpHeap(NNSFndHeapHandle heap);
extern u16 NNS_FndSetGroupIDForExpHeap(NNSFndHeapHandle heap, u16 groupID);
extern u16 NNS_FndGetGroupIDForExpHeap(NNSFndHeapHandle heap);
extern void NNS_FndVisitAllocatedForExpHeap(NNSFndHeapHandle heap, NNSFndHeapVisitor visitor, u32 userParam);
extern u32 NNS_FndGetSizeForMBlockExpHeap(const void *memBlock);
extern u16 NNS_FndGetGroupIDForMBlockExpHeap(const void *memBlock);
extern u16 NNS_FndGetAllocDirForMBlockExpHeap(const void *memBlock);
typedef struct NNSiFndFrmHeapState NNSiFndFrmHeapState;
struct NNSiFndFrmHeapState {
    u32 tagName;
    void *headAllocator;
    void *tailAllocator;
    NNSiFndFrmHeapState *pPrevState;
};
typedef struct NNSiFndFrmHeapHead NNSiFndFrmHeapHead;
struct NNSiFndFrmHeapHead {
    void *headAllocator;
    void *tailAllocator;
    NNSiFndFrmHeapState *pState;
};
extern void *NNSi_FndGetFreeStartForFrmHeap(NNSFndHeapHandle heap);
extern void *NNSi_FndGetFreeEndForFrmHeap(NNSFndHeapHandle heap);
extern NNSFndHeapHandle NNS_FndCreateFrmHeapEx(void *startAddress, u32 size, u16 optFlag);
extern void NNS_FndDestroyFrmHeap(NNSFndHeapHandle heap);
extern void *NNS_FndAllocFromFrmHeapEx(NNSFndHeapHandle heap, u32 size, int alignment);
extern void NNS_FndFreeToFrmHeap(NNSFndHeapHandle heap, int mode);
extern u32 NNS_FndGetAllocatableSizeForFrmHeapEx(NNSFndHeapHandle heap, int alignment);
extern BOOL NNS_FndRecordStateForFrmHeap(NNSFndHeapHandle heap, u32 tagName);
extern BOOL NNS_FndFreeByStateToFrmHeap(NNSFndHeapHandle heap, u32 tagName);
extern u32 NNS_FndAdjustFrmHeap(NNSFndHeapHandle heap);
extern u32 NNS_FndResizeForMBlockFrmHeap(NNSFndHeapHandle heap, void *memBlock, u32 newSize);
typedef struct NNSiFndUntHeapMBlockHead NNSiFndUntHeapMBlockHead;
struct NNSiFndUntHeapMBlockHead {
    NNSiFndUntHeapMBlockHead *pMBlkHdNext;
};
typedef struct NNSiFndUntMBlockList NNSiFndUntMBlockList;
struct NNSiFndUntMBlockList {
    NNSiFndUntHeapMBlockHead *head;
};
typedef struct NNSiFndUntHeapHead NNSiFndUntHeapHead;
struct NNSiFndUntHeapHead {
    NNSiFndUntMBlockList mbFreeList;
    u32 mBlkSize;
};
extern NNSFndHeapHandle NNS_FndCreateUnitHeapEx(void *startAddress, u32 heapSize, u32 memBlockSize, int alignment,
                                                u16 optFlag);
extern void NNS_FndDestroyUnitHeap(NNSFndHeapHandle heap);
extern void *NNS_FndAllocFromUnitHeap(NNSFndHeapHandle heap);
extern void NNS_FndFreeToUnitHeap(NNSFndHeapHandle heap, void *memBlock);
extern u32 NNS_FndCountFreeBlockForUnitHeap(NNSFndHeapHandle heap);
extern u32 NNS_FndCalcHeapSizeForUnitHeap(u32 memBlockSize, u32 memBlockNum, int alignment);
enum {
    FS_ARCHIVE_NAME_LEN_MAX = 3
};
typedef enum {
    FS_COMMAND_ASYNC_BEGIN = 0,
    FS_COMMAND_READFILE    = FS_COMMAND_ASYNC_BEGIN,
    FS_COMMAND_WRITEFILE,
    FS_COMMAND_ASYNC_END,
    FS_COMMAND_SYNC_BEGIN = FS_COMMAND_ASYNC_END,
    FS_COMMAND_SEEKDIR    = FS_COMMAND_SYNC_BEGIN,
    FS_COMMAND_READDIR,
    FS_COMMAND_FINDPATH,
    FS_COMMAND_GETPATH,
    FS_COMMAND_OPENFILEFAST,
    FS_COMMAND_OPENFILEDIRECT,
    FS_COMMAND_CLOSEFILE,
    FS_COMMAND_SYNC_END,
    FS_COMMAND_STATUS_BEGIN = FS_COMMAND_SYNC_END,
    FS_COMMAND_ACTIVATE     = FS_COMMAND_STATUS_BEGIN,
    FS_COMMAND_IDLE,
    FS_COMMAND_SUSPEND,
    FS_COMMAND_RESUME,
    FS_COMMAND_STATUS_END,
    FS_COMMAND_INVALID
} FSCommandType;
typedef enum {
    FS_RESULT_SUCCESS = 0,
    FS_RESULT_FAILURE,
    FS_RESULT_BUSY,
    FS_RESULT_CANCELED,
    FS_RESULT_CANCELLED = FS_RESULT_CANCELED,
    FS_RESULT_UNSUPPORTED,
    FS_RESULT_ERROR,
    FS_RESULT_PROC_ASYNC,
    FS_RESULT_PROC_DEFAULT,
    FS_RESULT_PROC_UNKNOWN
} FSResult;
struct FSFile;
struct FSFileLink;
struct FSArchiveFAT;
struct FSArchiveFNT;
struct FSArchive;
typedef FSResult (*FS_ARCHIVE_PROC_FUNC)(struct FSFile *, FSCommandType);
typedef FSResult (*FS_ARCHIVE_READ_FUNC)(struct FSArchive *p, void *dst, u32 pos, u32 size);
typedef FSResult (*FS_ARCHIVE_WRITE_FUNC)(struct FSArchive *p, const void *src, u32 pos, u32 size);
typedef struct FSFileLink {
    struct FSFile *prev;
    struct FSFile *next;
} FSFileLink;
typedef struct FSArchiveFAT {
    u32 top;
    u32 bottom;
} FSArchiveFAT;
typedef struct FSArchiveFNT {
    u32 start;
    u16 index;
    u16 parent;
} FSArchiveFNT;
typedef struct FSArchive {
    union {
        char ptr[FS_ARCHIVE_NAME_LEN_MAX + 1];
        u32 pack;
    } name;
    struct FSArchive *next;
    struct FSArchive *prev;
    OSThreadQueue sync_q;
    OSThreadQueue stat_q;
    u32 flag;
    FSFileLink list;
    u32 base;
    u32 fat;
    u32 fat_size;
    u32 fnt;
    u32 fnt_size;
    u32 fat_bak;
    u32 fnt_bak;
    void *load_mem;
    FS_ARCHIVE_READ_FUNC read_func;
    FS_ARCHIVE_WRITE_FUNC write_func;
    FS_ARCHIVE_READ_FUNC table_func;
    FS_ARCHIVE_PROC_FUNC proc;
    u32 proc_flag;
} FSArchive;
extern void FS_InitArchive(FSArchive *p_arc);
static inline const char *FS_GetArchiveName(const FSArchive *p_arc) {
    return p_arc->name.ptr;
}
static inline u32 FS_GetArchiveBase(const FSArchive *p_arc) {
    return p_arc->base;
}
static inline u32 FS_GetArchiveFAT(const FSArchive *p_arc) {
    return p_arc->fat;
}
static inline u32 FS_GetArchiveFNT(const FSArchive *p_arc) {
    return p_arc->fnt;
}
static inline u32 FS_GetArchiveOffset(const FSArchive *p_arc, u32 pos) {
    return p_arc->base + pos;
}
static inline BOOL FS_IsArchiveLoaded(volatile const FSArchive *p_arc) {
    return (p_arc->flag & 0x00000002) ? 1 : 0;
}
static inline BOOL FS_IsArchiveTableLoaded(volatile const FSArchive *p_arc) {
    return (p_arc->flag & 0x00000004) ? 1 : 0;
}
static inline BOOL FS_IsArchiveSuspended(volatile const FSArchive *p_arc) {
    return (p_arc->flag & 0x00000008) ? 1 : 0;
}
extern FSArchive *FS_FindArchive(const char *name, int name_len);
extern BOOL FS_RegisterArchiveName(FSArchive *p_arc, const char *name, u32 name_len);
extern void FS_ReleaseArchiveName(FSArchive *p_arc);
extern BOOL FS_LoadArchive(FSArchive *p_arc, u32 base, u32 fat, u32 fat_size, u32 fnt, u32 fnt_size,
                           FS_ARCHIVE_READ_FUNC read_func, FS_ARCHIVE_WRITE_FUNC write_func);
extern BOOL FS_UnloadArchive(FSArchive *p_arc);
extern u32 FS_LoadArchiveTables(FSArchive *p_arc, void *p_mem, u32 max_size);
extern void *FS_UnloadArchiveTables(FSArchive *p_arc);
extern BOOL FS_SuspendArchive(FSArchive *p_arc);
extern BOOL FS_ResumeArchive(FSArchive *p_arc);
extern void FS_SetArchiveProc(struct FSArchive *p_arc, FS_ARCHIVE_PROC_FUNC proc, u32 flags);
extern void FS_NotifyArchiveAsyncEnd(FSArchive *p_arc, FSResult ret);
extern void FSi_EndArchive(void);
typedef void (*MIDmaCallback)(void *);
extern void MI_DmaFill32(u32 dmaNo, void *dest, u32 data, u32 size);
extern void MI_DmaCopy32(u32 dmaNo, const void *src, void *dest, u32 size);
static inline void MI_DmaClear32(u32 dmaNo, void *dest, u32 size) {
    MI_DmaFill32(dmaNo, dest, 0, size);
}
extern void MI_DmaSend32(u32 dmaNo, const void *src, volatile void *dest, u32 size);
extern void MI_DmaFill16(u32 dmaNo, void *dest, u16 data, u32 size);
extern void MI_DmaCopy16(u32 dmaNo, const void *src, void *dest, u32 size);
static inline void MI_DmaClear16(u32 dmaNo, void *dest, u32 size) {
    MI_DmaFill16(dmaNo, dest, 0, size);
}
extern void MI_DmaSend16(u32 dmaNo, const void *src, volatile void *dest, u32 size);
extern void MI_DmaFill32Async(u32 dmaNo, void *dest, u32 data, u32 size, MIDmaCallback callback, void *arg);
extern void MI_DmaCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg);
static inline void MI_DmaClear32Async(u32 dmaNo, void *dest, u32 size, MIDmaCallback callback, void *arg) {
    MI_DmaFill32Async(dmaNo, dest, 0, size, callback, arg);
}
extern void MI_DmaSend32Async(u32 dmaNo, const void *src, volatile void *dest, u32 size, MIDmaCallback callback, void *arg);
extern void MI_DmaFill16Async(u32 dmaNo, void *dest, u16 data, u32 size, MIDmaCallback callback, void *arg);
extern void MI_DmaCopy16Async(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg);
static inline void MI_DmaClear16Async(u32 dmaNo, void *dest, u32 size, MIDmaCallback callback, void *arg) {
    MI_DmaFill16Async(dmaNo, dest, 0, size, callback, arg);
}
extern void MI_DmaSend16Async(u32 dmaNo, const void *src, volatile void *dest, u32 size, MIDmaCallback callback, void *arg);
extern void MI_HBlankDmaCopy32(u32 dmaNo, const void *src, void *dest, u32 size);
extern void MI_HBlankDmaCopy16(u32 dmaNo, const void *src, void *dest, u32 size);
extern void MI_HBlankDmaCopy32If(u32 dmaNo, const void *src, void *dest, u32 size);
extern void MI_HBlankDmaCopy16If(u32 dmaNo, const void *src, void *dest, u32 size);
extern void MI_VBlankDmaCopy32(u32 dmaNo, const void *src, void *dest, u32 size);
extern void MI_VBlankDmaCopy16(u32 dmaNo, const void *src, void *dest, u32 size);
extern void MI_VBlankDmaCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg);
extern void MI_VBlankDmaCopy16Async(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg);
extern void MIi_CardDmaCopy32(u32 dmaNo, const void *src, void *dest, u32 size);
extern void MI_DispMemDmaCopy(u32 dmaNo, const void *src);
extern void MI_SendGXCommand(u32 dmaNo, const void *src, u32 commandLength);
extern void MI_SendGXCommandAsync(u32 dmaNo, const void *src, u32 commandLength, MIDmaCallback callback, void *arg);
extern void MI_SendGXCommandFast(u32 dmaNo, const void *src, u32 commandLength);
extern void MI_SendGXCommandAsyncFast(u32 dmaNo, const void *src, u32 commandLength, MIDmaCallback callback, void *arg);
extern BOOL MI_IsDmaBusy(u32 dmaNo);
extern void MI_WaitDma(u32 dmaNo);
extern void MI_StopDma(u32 dmaNo);
typedef enum {
    MI_PROCESSOR_ARM9 = 0,
    MI_PROCESSOR_ARM7 = 1
} MIProcessor;
typedef enum {
    MIi_PHI_CLOCK_LOW   = 0,
    MIi_PHI_CLOCK_4MHZ  = 1,
    MIi_PHI_CLOCK_8MHZ  = 2,
    MIi_PHI_CLOCK_16MHZ = 3
} MIiPhiClock;
typedef enum {
    MI_CTRDG_ROMCYCLE1_10 = 0,
    MI_CTRDG_ROMCYCLE1_8  = 1,
    MI_CTRDG_ROMCYCLE1_6  = 2,
    MI_CTRDG_ROMCYCLE1_18 = 3
} MICartridgeRomCycle1st;
typedef enum {
    MI_CTRDG_ROMCYCLE2_6 = 0,
    MI_CTRDG_ROMCYCLE2_4 = 1
} MICartridgeRomCycle2nd;
typedef enum {
    MI_CTRDG_RAMCYCLE_10 = 0,
    MI_CTRDG_RAMCYCLE_8  = 1,
    MI_CTRDG_RAMCYCLE_6  = 2,
    MI_CTRDG_RAMCYCLE_18 = 3
} MICartridgeRamCycle;
typedef enum {
    MI_WMWAIT0_1_9  = 0,
    MI_WMWAIT0_1_7  = 1,
    MI_WMWAIT0_1_5  = 2,
    MI_WMWAIT0_1_17 = 3
} MIWMWait0_1;
typedef enum {
    MI_WMWAIT0_2_5 = 0,
    MI_WMWAIT0_2_3 = 1
} MIWMWait0_2;
typedef enum {
    MI_WMWAIT1_1_9  = 0,
    MI_WMWAIT1_1_7  = 1,
    MI_WMWAIT1_1_5  = 2,
    MI_WMWAIT1_1_17 = 3
} MIWMWait1_1;
typedef enum {
    MI_WMWAIT1_2_9 = 0,
    MI_WMWAIT1_2_3 = 1
} MIWMWait1_2;
typedef enum {
    MI_PHI_CLOCK_CARTRIDGE = 0,
    MI_PHI_CLOCK_33MHZ     = 1
} MIPhiControl;
static inline void MI_SetMainMemoryPriority(MIProcessor proc) {
    ((void) 0);
    (*(REGType16v *) (0x04000000 + 0x204)) = (u16) (((*(REGType16v *) (0x04000000 + 0x204)) & ~0x8000) | (proc << 15));
}
static inline MIProcessor MI_GetMainMemoryPriority(void) {
    return (MIProcessor) (((*(REGType16v *) (0x04000000 + 0x204)) & 0x8000) >> 15);
}
static inline void MIi_SetCardProcessor(MIProcessor proc) {
    ((void) 0);
    (*(REGType16v *) (0x04000000 + 0x204)) = (u16) (((*(REGType16v *) (0x04000000 + 0x204)) & ~0x0800) | (proc << 11));
}
static inline MIProcessor MI_GetCardProcessor(void) {
    return (MIProcessor) (((*(REGType16v *) (0x04000000 + 0x204)) & 0x0800) >> 11);
}
static inline void MIi_SetCartridgeProcessor(MIProcessor proc) {
    ((void) 0);
    (*(REGType16v *) (0x04000000 + 0x204)) = (u16) (((*(REGType16v *) (0x04000000 + 0x204)) & ~0x0080) | (proc << 7));
}
static inline MIProcessor MI_GetCartridgeProcessor(void) {
    return (MIProcessor) (((*(REGType16v *) (0x04000000 + 0x204)) & 0x0080) >> 7);
}
static inline void MIi_SetPhiClock(MIiPhiClock clock) {
    ((void) 0);
    (*(REGType16v *) (0x04000000 + 0x204)) = (u16) (((*(REGType16v *) (0x04000000 + 0x204)) & ~0x0060) | (clock << 5));
}
static inline MIiPhiClock MIi_GetPhiClock(void) {
    return (MIiPhiClock) (((*(REGType16v *) (0x04000000 + 0x204)) & 0x0060) >> 5);
}
static inline void MI_SetCartridgeRomCycle1st(MICartridgeRomCycle1st c1) {
    ((void) 0);
    (*(REGType16v *) (0x04000000 + 0x204)) = (u16) (((*(REGType16v *) (0x04000000 + 0x204)) & ~0x000c) | (c1 << 2));
}
static inline MICartridgeRomCycle1st MI_GetCartridgeRomCycle1st(void) {
    return (MICartridgeRomCycle1st) (((*(REGType16v *) (0x04000000 + 0x204)) & 0x000c) >> 2);
}
static inline void MI_SetCartridgeRomCycle2nd(MICartridgeRomCycle2nd c2) {
    ((void) 0);
    (*(REGType16v *) (0x04000000 + 0x204)) = (u16) (((*(REGType16v *) (0x04000000 + 0x204)) & ~0x0010) | (c2 << 4));
}
static inline MICartridgeRomCycle2nd MI_GetCartridgeRomCycle2nd(void) {
    return (MICartridgeRomCycle2nd) (((*(REGType16v *) (0x04000000 + 0x204)) & 0x0010) >> 4);
}
extern void MI_SetAgbCartridgeFastestRomCycle(MICartridgeRomCycle1st *prev1st, MICartridgeRomCycle2nd *prev2nd);
static inline void MI_SetCartridgeRamCycle(MICartridgeRamCycle c) {
    ((void) 0);
    (*(REGType16v *) (0x04000000 + 0x204)) = (u16) (((*(REGType16v *) (0x04000000 + 0x204)) & ~0x0003) | (c << 0));
}
static inline MICartridgeRamCycle MI_GetCartridgeRamCycle(void) {
    return (MICartridgeRamCycle) (((*(REGType16v *) (0x04000000 + 0x204)) & 0x0003) >> 0);
}
typedef enum {
    MI_WRAM_ARM9_ALL = 0 << 0,
    MI_WRAM_1616_1   = 1 << 0,
    MI_WRAM_1616_2   = 2 << 0,
    MI_WRAM_ARM7_ALL = 3 << 0
} MIWram;
extern void MI_SetWramBank(MIWram cnt);
extern MIWram MI_GetWramBank(void);
extern u32 MI_SwapWord(u32 setData, volatile u32 *destp);
extern u8 MI_SwapByte(u32 setData, volatile u8 *destp);
static inline u8 MI_ReadByte(const void *address) {
    return *(u8 *) address;
}
static inline void MI_WriteByte(void *address, u8 value) {
    *(u8 *) address = value;
}
typedef enum {
    CARD_RESULT_SUCCESS = 0,
    CARD_RESULT_FAILURE,
    CARD_RESULT_INVALID_PARAM,
    CARD_RESULT_UNSUPPORTED,
    CARD_RESULT_TIMEOUT,
    CARD_RESULT_ERROR,
    CARD_RESULT_NO_RESPONSE,
    CARD_RESULT_CANCELED
} CARDResult;
typedef enum {
    CARD_BACKUP_TYPE_EEPROM_4KBITS   = (((1) << 0) | ((9) << 8) | ((0) << 16)),
    CARD_BACKUP_TYPE_EEPROM_64KBITS  = (((1) << 0) | ((13) << 8) | ((0) << 16)),
    CARD_BACKUP_TYPE_EEPROM_512KBITS = (((1) << 0) | ((16) << 8) | ((0) << 16)),
    CARD_BACKUP_TYPE_FLASH_2MBITS    = (((2) << 0) | ((18) << 8) | ((0) << 16)),
    CARD_BACKUP_TYPE_FLASH_4MBITS    = (((2) << 0) | ((19) << 8) | ((0) << 16)),
    CARD_BACKUP_TYPE_FLASH_8MBITS    = (((2) << 0) | ((20) << 8) | ((0) << 16)),
    CARD_BACKUP_TYPE_FLASH_16MBITS   = (((2) << 0) | ((21) << 8) | ((0) << 16)),
    CARD_BACKUP_TYPE_FLASH_64MBITS   = (((2) << 0) | ((23) << 8) | ((0) << 16)),
    CARD_BACKUP_TYPE_FRAM_256KBITS   = (((3) << 0) | ((15) << 8) | ((0) << 16)),
    CARD_BACKUP_TYPE_NOT_USE         = 0
} CARDBackupType;
typedef enum {
    CARD_REQ_INIT = 0,
    CARD_REQ_ACK,
    CARD_REQ_IDENTIFY,
    CARD_REQ_READ_ID,
    CARD_REQ_READ_ROM,
    CARD_REQ_WRITE_ROM,
    CARD_REQ_READ_BACKUP,
    CARD_REQ_WRITE_BACKUP,
    CARD_REQ_PROGRAM_BACKUP,
    CARD_REQ_VERIFY_BACKUP,
    CARD_REQ_ERASE_PAGE_BACKUP,
    CARD_REQ_ERASE_SECTOR_BACKUP,
    CARD_REQ_ERASE_CHIP_BACKUP,
    CARD_REQ_READ_STATUS,
    CARD_REQ_WRITE_STATUS,
    CARD_REQ_ERASE_SUBSECTOR_BACKUP,
    CARD_REQ_MAX
} CARDRequest;
typedef enum {
    CARD_REQUEST_MODE_RECV,
    CARD_REQUEST_MODE_SEND,
    CARD_REQUEST_MODE_SEND_VERIFY,
    CARD_REQUEST_MODE_SPECIAL
} CARDRequestMode;
extern void CARD_Init(void);
extern BOOL CARD_IsAvailable(void);
extern BOOL CARD_IsEnabled(void);
extern void CARD_CheckEnabled(void);
extern void CARD_Enable(BOOL enable);
extern u32 CARD_GetThreadPriority(void);
extern u32 CARD_SetThreadPriority(u32 prior);
extern CARDResult CARD_GetResultCode(void);
extern const u8 *CARD_GetRomHeader(void);
extern void CARD_GetCacheFlushThreshold(u32 *icache, u32 *dcache);
extern void CARD_SetCacheFlushThreshold(u32 icache, u32 dcache);
extern BOOL CARD_IdentifyBackup(CARDBackupType type);
extern u32 CARD_GetBackupTotalSize(void);
extern u32 CARD_GetBackupSectorSize(void);
extern u32 CARD_GetBackupPageSize(void);
extern CARDBackupType CARD_GetCurrentBackupType(void);
extern void CARD_LockBackup(u16 lock_id);
extern void CARD_UnlockBackup(u16 lock_id);
extern BOOL CARD_TryWaitBackupAsync(void);
extern BOOL CARD_WaitBackupAsync(void);
extern void CARD_CancelBackupAsync(void);
extern BOOL CARDi_RequestStreamCommand(u32 src, u32 dst, u32 len, MIDmaCallback callback, void *arg, BOOL is_async,
                                       CARDRequest req_type, int req_retry, CARDRequestMode req_mode);
extern BOOL CARDi_RequestWriteSectorCommand(u32 src, u32 dst, u32 len, BOOL verify, MIDmaCallback callback, void *arg,
                                            BOOL is_async);
static inline BOOL CARDi_ReadBackup(u32 src, void *dst, u32 len, MIDmaCallback callback, void *arg, BOOL is_async) {
    return CARDi_RequestStreamCommand((u32) src, (u32) dst, len, callback, arg, is_async, CARD_REQ_READ_BACKUP, 1,
                                      CARD_REQUEST_MODE_RECV);
}
static inline BOOL CARDi_ProgramBackup(u32 dst, const void *src, u32 len, MIDmaCallback callback, void *arg, BOOL is_async) {
    return CARDi_RequestStreamCommand((u32) src, (u32) dst, len, callback, arg, is_async, CARD_REQ_PROGRAM_BACKUP, 10,
                                      CARD_REQUEST_MODE_SEND);
}
static inline BOOL CARDi_WriteBackup(u32 dst, const void *src, u32 len, MIDmaCallback callback, void *arg, BOOL is_async) {
    return CARDi_RequestStreamCommand((u32) src, (u32) dst, len, callback, arg, is_async, CARD_REQ_WRITE_BACKUP, 10,
                                      CARD_REQUEST_MODE_SEND);
}
static inline BOOL CARDi_VerifyBackup(u32 dst, const void *src, u32 len, MIDmaCallback callback, void *arg, BOOL is_async) {
    return CARDi_RequestStreamCommand((u32) src, (u32) dst, len, callback, arg, is_async, CARD_REQ_VERIFY_BACKUP, 1,
                                      CARD_REQUEST_MODE_SEND);
}
static inline BOOL CARDi_ProgramAndVerifyBackup(u32 dst, const void *src, u32 len, MIDmaCallback callback, void *arg,
                                                BOOL is_async) {
    return CARDi_RequestStreamCommand((u32) src, (u32) dst, len, callback, arg, is_async, CARD_REQ_PROGRAM_BACKUP, 10,
                                      CARD_REQUEST_MODE_SEND_VERIFY);
}
static inline BOOL CARDi_WriteAndVerifyBackup(u32 dst, const void *src, u32 len, MIDmaCallback callback, void *arg,
                                              BOOL is_async) {
    return CARDi_RequestStreamCommand((u32) src, (u32) dst, len, callback, arg, is_async, CARD_REQ_WRITE_BACKUP, 10,
                                      CARD_REQUEST_MODE_SEND_VERIFY);
}
static inline BOOL CARDi_EraseBackupSector(u32 dst, u32 len, MIDmaCallback callback, void *arg, BOOL is_async) {
    return CARDi_RequestStreamCommand(0, (u32) dst, len, callback, arg, is_async, CARD_REQ_ERASE_SECTOR_BACKUP, 10,
                                      CARD_REQUEST_MODE_SPECIAL);
}
static inline BOOL CARDi_EraseBackupSubSector(u32 dst, u32 len, MIDmaCallback callback, void *arg, BOOL is_async) {
    return CARDi_RequestStreamCommand(0, (u32) dst, len, callback, arg, is_async, CARD_REQ_ERASE_SUBSECTOR_BACKUP, 10,
                                      CARD_REQUEST_MODE_SPECIAL);
}
static inline BOOL CARDi_EraseBackupChip(MIDmaCallback callback, void *arg, BOOL is_async) {
    return CARDi_RequestStreamCommand(0, 0, 0, callback, arg, is_async, CARD_REQ_ERASE_CHIP_BACKUP, 1,
                                      CARD_REQUEST_MODE_SPECIAL);
}
static inline void CARD_ReadBackupAsync(u32 src, void *dst, u32 len, MIDmaCallback callback, void *arg) {
    (void) CARDi_ReadBackup(src, dst, len, callback, arg, 1);
}
static inline BOOL CARD_ReadBackup(u32 src, void *dst, u32 len) {
    return CARDi_ReadBackup(src, dst, len, ((void *) 0), ((void *) 0), 0);
}
static inline void CARD_ProgramBackupAsync(u32 dst, const void *src, u32 len, MIDmaCallback callback, void *arg) {
    (void) CARDi_ProgramBackup(dst, src, len, callback, arg, 1);
}
static inline BOOL CARD_ProgramBackup(u32 dst, const void *src, u32 len) {
    return CARDi_ProgramBackup(dst, src, len, ((void *) 0), ((void *) 0), 0);
}
static inline void CARD_WriteBackupAsync(u32 dst, const void *src, u32 len, MIDmaCallback callback, void *arg) {
    (void) CARDi_WriteBackup(dst, src, len, callback, arg, 1);
}
static inline BOOL CARD_WriteBackup(u32 dst, const void *src, u32 len) {
    return CARDi_WriteBackup(dst, src, len, ((void *) 0), ((void *) 0), 0);
}
static inline void CARD_VerifyBackupAsync(u32 dst, const void *src, u32 len, MIDmaCallback callback, void *arg) {
    (void) CARDi_VerifyBackup(dst, src, len, callback, arg, 1);
}
static inline BOOL CARD_VerifyBackup(u32 dst, const void *src, u32 len) {
    return CARDi_VerifyBackup(dst, src, len, ((void *) 0), ((void *) 0), 0);
}
static inline void CARD_ProgramAndVerifyBackupAsync(u32 dst, const void *src, u32 len, MIDmaCallback callback, void *arg) {
    (void) CARDi_ProgramAndVerifyBackup(dst, src, len, callback, arg, 1);
}
static inline BOOL CARD_ProgramAndVerifyBackup(u32 dst, const void *src, u32 len) {
    return CARDi_ProgramAndVerifyBackup(dst, src, len, ((void *) 0), ((void *) 0), 0);
}
static inline void CARD_WriteAndVerifyBackupAsync(u32 dst, const void *src, u32 len, MIDmaCallback callback, void *arg) {
    (void) CARDi_WriteAndVerifyBackup(dst, src, len, callback, arg, 1);
}
static inline BOOL CARD_WriteAndVerifyBackup(u32 dst, const void *src, u32 len) {
    return CARDi_WriteAndVerifyBackup(dst, src, len, ((void *) 0), ((void *) 0), 0);
}
static inline void CARD_EraseBackupSectorAsync(u32 dst, u32 len, MIDmaCallback callback, void *arg) {
    (void) CARDi_EraseBackupSector(dst, len, callback, arg, 1);
}
static inline BOOL CARD_EraseBackupSector(u32 dst, u32 len) {
    return CARDi_EraseBackupSector(dst, len, ((void *) 0), ((void *) 0), 0);
}
static inline void CARD_EraseBackupSubSectorAsync(u32 dst, u32 len, MIDmaCallback callback, void *arg) {
    (void) CARDi_EraseBackupSubSector(dst, len, callback, arg, 1);
}
static inline BOOL CARD_EraseBackupSubSector(u32 dst, u32 len) {
    return CARDi_EraseBackupSubSector(dst, len, ((void *) 0), ((void *) 0), 0);
}
static inline void CARD_EraseBackupChipAsync(MIDmaCallback callback, void *arg) {
    (void) CARDi_EraseBackupChip(callback, arg, 1);
}
static inline BOOL CARD_EraseBackupChip(void) {
    return CARDi_EraseBackupChip(((void *) 0), ((void *) 0), 0);
}
static inline void CARD_WriteBackupSectorAsync(u32 dst, const void *src, u32 len, MIDmaCallback callback, void *arg) {
    (void) CARDi_RequestWriteSectorCommand((u32) src, dst, len, 0, callback, arg, 1);
}
static inline BOOL CARD_WriteBackupSector(u32 dst, const void *src, u32 len) {
    return CARDi_RequestWriteSectorCommand((u32) src, dst, len, 0, ((void *) 0), ((void *) 0), 0);
}
static inline void CARD_WriteAndVerifyBackupSectorAsync(u32 dst, const void *src, u32 len, MIDmaCallback callback, void *arg) {
    (void) CARDi_RequestWriteSectorCommand((u32) src, dst, len, 1, callback, arg, 1);
}
static inline BOOL CARD_WriteAndVerifyBackupSector(u32 dst, const void *src, u32 len) {
    return CARDi_RequestWriteSectorCommand((u32) src, dst, len, 1, ((void *) 0), ((void *) 0), 0);
}
extern int CARDi_AccessStatus(CARDRequest command, u8 value);
static inline int CARDi_ReadStatus(void) {
    return CARDi_AccessStatus(CARD_REQ_READ_STATUS, 0);
}
static inline BOOL CARDi_WriteStatus(u8 value) {
    return (CARDi_AccessStatus(CARD_REQ_WRITE_STATUS, value) >= 0);
}
static inline BOOL CARD_IsBackupEeprom(void) {
    const CARDBackupType t = CARD_GetCurrentBackupType();

    return (((t >> 0) & 0xFF) == 1);
}
static inline BOOL CARD_ReadEeprom(u32 src, void *dst, u32 len) {
    return CARD_ReadBackup(src, dst, len);
}
static inline void CARD_ReadEepromAsync(u32 src, void *dst, u32 len, MIDmaCallback callback, void *arg) {
    CARD_ReadBackupAsync(src, dst, len, callback, arg);
}
static inline BOOL CARD_WriteEeprom(u32 dst, const void *src, u32 len) {
    return CARD_ProgramBackup(dst, src, len);
}
static inline void CARD_WriteEepromAsync(u32 dst, const void *src, u32 len, MIDmaCallback callback, void *arg) {
    CARD_ProgramBackupAsync(dst, src, len, callback, arg);
}
static inline BOOL CARD_VerifyEeprom(u32 dst, const void *src, u32 len) {
    return CARD_VerifyBackup(dst, src, len);
}
static inline void CARD_VerifyEepromAsync(u32 dst, const void *src, u32 len, MIDmaCallback callback, void *arg) {
    CARD_VerifyBackupAsync(dst, src, len, callback, arg);
}
static inline BOOL CARD_WriteAndVerifyEeprom(u32 dst, const void *src, u32 len) {
    return CARD_ProgramAndVerifyBackup(dst, src, len);
}
static inline void CARD_WriteAndVerifyEepromAsync(u32 dst, const void *src, u32 len, MIDmaCallback callback, void *arg) {
    CARD_ProgramAndVerifyBackupAsync(dst, src, len, callback, arg);
}
static inline BOOL CARD_IsBackupFlash(void) {
    const CARDBackupType t = CARD_GetCurrentBackupType();

    return (((t >> 0) & 0xFF) == 2);
}
static inline BOOL CARD_ReadFlash(u32 src, void *dst, u32 len) {
    return CARD_ReadBackup(src, dst, len);
}
static inline void CARD_ReadFlashAsync(u32 src, void *dst, u32 len, MIDmaCallback callback, void *arg) {
    CARD_ReadBackupAsync(src, dst, len, callback, arg);
}
static inline BOOL CARD_WriteFlash(u32 dst, const void *src, u32 len) {
    return CARD_WriteBackup(dst, src, len);
}
static inline void CARD_WriteFlashAsync(u32 dst, const void *src, u32 len, MIDmaCallback callback, void *arg) {
    CARD_WriteBackupAsync(dst, src, len, callback, arg);
}
static inline BOOL CARD_VerifyFlash(u32 dst, const void *src, u32 len) {
    return CARD_VerifyBackup(dst, src, len);
}
static inline void CARD_VerifyFlashAsync(u32 dst, const void *src, u32 len, MIDmaCallback callback, void *arg) {
    CARD_VerifyBackupAsync(dst, src, len, callback, arg);
}
static inline BOOL CARD_WriteAndVerifyFlash(u32 dst, const void *src, u32 len) {
    return CARD_WriteAndVerifyBackup(dst, src, len);
}
static inline void CARD_WriteAndVerifyFlashAsync(u32 dst, const void *src, u32 len, MIDmaCallback callback, void *arg) {
    CARD_WriteAndVerifyBackupAsync(dst, src, len, callback, arg);
}
static inline BOOL CARD_EraseFlashSector(u32 dst, u32 len) {
    return CARD_EraseBackupSector(dst, len);
}
static inline void CARD_EraseFlashSectorAsync(u32 dst, u32 len, MIDmaCallback callback, void *arg) {
    CARD_EraseBackupSectorAsync(dst, len, callback, arg);
}
static inline BOOL CARD_ProgramFlash(u32 dst, const void *src, u32 len) {
    return CARD_ProgramBackup(dst, src, len);
}
static inline void CARD_ProgramFlashAsync(u32 dst, const void *src, u32 len, MIDmaCallback callback, void *arg) {
    CARD_ProgramBackupAsync(dst, src, len, callback, arg);
}
static inline BOOL CARD_ProgramAndVerifyFlash(u32 dst, const void *src, u32 len) {
    return CARD_ProgramAndVerifyBackup(dst, src, len);
}
static inline void CARD_ProgramAndVerifyFlashAsync(u32 dst, const void *src, u32 len, MIDmaCallback callback, void *arg) {
    CARD_ProgramAndVerifyBackupAsync(dst, src, len, callback, arg);
}
static inline BOOL CARD_WriteFlashSector(u32 dst, const void *src, u32 len) {
    return CARD_WriteBackupSector(dst, src, len);
}
static inline void CARD_WriteFlashSectorAsync(u32 dst, const void *src, u32 len, MIDmaCallback callback, void *arg) {
    CARD_WriteBackupSectorAsync(dst, src, len, callback, arg);
}
static inline BOOL CARD_WriteAndVerifyFlashSector(u32 dst, const void *src, u32 len) {
    return CARD_WriteAndVerifyBackupSector(dst, src, len);
}
static inline void CARD_WriteAndVerifyFlashSectorAsync(u32 dst, const void *src, u32 len, MIDmaCallback callback, void *arg) {
    CARD_WriteAndVerifyBackupSectorAsync(dst, src, len, callback, arg);
}
static inline BOOL CARD_IsBackupFram(void) {
    const CARDBackupType t = CARD_GetCurrentBackupType();

    return (((t >> 0) & 0xFF) == 3);
}
static inline BOOL CARD_ReadFram(u32 src, void *dst, u32 len) {
    return CARD_ReadBackup(src, dst, len);
}
static inline void CARD_ReadFramAsync(u32 src, void *dst, u32 len, MIDmaCallback callback, void *arg) {
    CARD_ReadBackupAsync(src, dst, len, callback, arg);
}
static inline BOOL CARD_WriteFram(u32 dst, const void *src, u32 len) {
    return CARD_ProgramBackup(dst, src, len);
}
static inline void CARD_WriteFramAsync(u32 dst, const void *src, u32 len, MIDmaCallback callback, void *arg) {
    CARD_ProgramBackupAsync(dst, src, len, callback, arg);
}
static inline BOOL CARD_VerifyFram(u32 dst, const void *src, u32 len) {
    return CARD_VerifyBackup(dst, src, len);
}
static inline void CARD_VerifyFramAsync(u32 dst, const void *src, u32 len, MIDmaCallback callback, void *arg) {
    CARD_VerifyBackupAsync(dst, src, len, callback, arg);
}
static inline BOOL CARD_WriteAndVerifyFram(u32 dst, const void *src, u32 len) {
    return CARD_ProgramAndVerifyBackup(dst, src, len);
}
static inline void CARD_WriteAndVerifyFramAsync(u32 dst, const void *src, u32 len, MIDmaCallback callback, void *arg) {
    CARD_ProgramAndVerifyBackupAsync(dst, src, len, callback, arg);
}
typedef struct {
    u32 offset;
    u32 length;
} CARDRomRegion;
typedef struct {
    char game_name[12];
    u32 game_code;
    u16 maker_code;
    u8 product_id;
    u8 device_type;
    u8 device_size;
    u8 reserved_A[9];
    u8 game_version;
    u8 property;
    void *main_rom_offset;
    void *main_entry_address;
    void *main_ram_address;
    u32 main_size;
    void *sub_rom_offset;
    void *sub_entry_address;
    void *sub_ram_address;
    u32 sub_size;
    CARDRomRegion fnt;
    CARDRomRegion fat;
    CARDRomRegion main_ovt;
    CARDRomRegion sub_ovt;
    u8 rom_param_A[8];
    u32 banner_offset;
    u16 secure_crc;
    u8 rom_param_B[2];
    void *main_autoload_done;
    void *sub_autoload_done;
    u8 rom_param_C[8];
    u32 rom_size;
    u32 header_size;
    u8 reserved_B[0x38];
    u8 logo_data[0x9C];
    u16 logo_crc;
    u16 header_crc;
} CARDRomHeader;
static inline const CARDRomRegion *CARD_GetRomRegionFNT(void) {
    return (const CARDRomRegion *) ((const u8 *) (0x02000000 + 0x007ffe00) + 0x40);
}
static inline const CARDRomRegion *CARD_GetRomRegionFAT(void) {
    return (const CARDRomRegion *) ((const u8 *) (0x02000000 + 0x007ffe00) + 0x48);
}
static inline const CARDRomRegion *CARD_GetRomRegionOVT(MIProcessor target) {
    return (target == MI_PROCESSOR_ARM9) ? (const CARDRomRegion *) ((const u8 *) (0x02000000 + 0x007ffe00) + 0x50)
                                         : (const CARDRomRegion *) ((const u8 *) (0x02000000 + 0x007ffe00) + 0x58);
}
extern void CARD_LockRom(u16 lock_id);
extern void CARD_UnlockRom(u16 lock_id);
extern void CARDi_ReadRom(u32 dma, const void *src, void *dst, u32 len, MIDmaCallback callback, void *arg, BOOL is_async);
extern BOOL CARD_TryWaitRomAsync(void);
extern void CARD_WaitRomAsync(void);
static inline void CARD_ReadRomAsync(u32 dma, const void *src, void *dst, u32 len, MIDmaCallback callback, void *arg) {
    CARDi_ReadRom(dma, src, dst, len, callback, arg, 1);
}
static inline void CARD_ReadRom(u32 dma, const void *src, void *dst, u32 len) {
    CARDi_ReadRom(dma, src, dst, len, ((void *) 0), ((void *) 0), 0);
}
extern u32 CARDi_ReadRomID(void);
typedef BOOL (*CARDPulledOutCallback)(void);
extern void CARD_InitPulledOutCallback(void);
extern void CARD_SetPulledOutCallback(CARDPulledOutCallback callback);
extern void CARD_TerminateForPulledOut(void);
extern void CARD_PulledOutCallbackProc(void);
extern void CARD_CheckPulledOut(void);
extern BOOL CARD_IsPulledOut(void);
extern BOOL CARD_IsCardIreqLo(void);
extern BOOL CARD_CompareCardID(void);
extern void MIi_LockCard(void);
extern void MIi_UnlockCard(void);
static inline u32 MI_ReadCardID(void) {
    u32 ret;
    MIi_LockCard();
    ret = CARDi_ReadRomID();
    MIi_UnlockCard();
    return ret;
}
static inline void MIi_ReadCard(u32 dmaNo, const void *src, void *dst, u32 size) {
    MIi_LockCard();

    (void) dmaNo;
    CARD_ReadRom((3 + 1), src, dst, size);
    MIi_UnlockCard();
}
extern void MIi_ReadCardAsync(u32 dmaNo, const void *srcp, void *dstp, u32 size, MIDmaCallback callback, void *arg);
static inline BOOL MIi_TryWaitCard(void) {
    return CARD_TryWaitRomAsync();
}
static inline void MIi_WaitCard(void) {
    CARD_WaitRomAsync();
}
typedef struct {
    u8 *destp;
    s32 destCount;
    u16 destTmp;
    u8 destTmpCnt;
    u8 flags;
    u16 length;
    u8 _padding[2];
} MIUncompContextRL;
typedef struct {
    u8 *destp;
    s32 destCount;
    u32 length;
    u16 destTmp;
    u8 destTmpCnt;
    u8 flags;
    u8 flagIndex;
    u8 lengthFlg;
    u8 exFormat;
    u8 _padding[1];
} MIUncompContextLZ;
typedef struct {
    u8 *destp;
    s32 destCount;
    u8 *treep;
    u32 srcTmp;
    u32 destTmp;
    s16 treeSize;
    u8 srcTmpCnt;
    u8 destTmpCnt;
    u8 bitSize;
    u8 _padding2[3];
    u8 tree[0x200];
} MIUncompContextHuffman;
extern void MI_InitUncompContextRL(MIUncompContextRL *context, u8 *dest, const MICompressionHeader *header);
extern void MI_InitUncompContextLZ(MIUncompContextLZ *context, u8 *dest, const MICompressionHeader *header);
extern void MI_InitUncompContextHuffman(MIUncompContextHuffman *context, u8 *dest, const MICompressionHeader *header);
extern s32 MI_ReadUncompRL8(MIUncompContextRL *context, const u8 *data, u32 len);
extern s32 MI_ReadUncompRL16(MIUncompContextRL *context, const u8 *data, u32 len);
extern s32 MI_ReadUncompLZ8(MIUncompContextLZ *context, const u8 *data, u32 len);
extern s32 MI_ReadUncompLZ16(MIUncompContextLZ *context, const u8 *data, u32 len);
extern s32 MI_ReadUncompHuffman(MIUncompContextHuffman *context, const u8 *data, u32 len);
extern u32 MI_CompressLZImpl(const u8 *srcp, u32 size, u8 *dstp, BOOL exFormat);
extern u32 MI_CompressLZFastImpl(const u8 *srcp, u32 size, u8 *dstp, u8 *work, BOOL exFormat);
inline u32 MI_CompressLZ(const u8 *srcp, u32 size, u8 *dstp) {
    return MI_CompressLZImpl(srcp, size, dstp, 0);
}
inline u32 MI_CompressLZEx(const u8 *srcp, u32 size, u8 *dstp) {
    return MI_CompressLZImpl(srcp, size, dstp, 1);
}
inline u32 MI_CompressLZFast(const u8 *srcp, u32 size, u8 *dstp, u8 *work) {
    return MI_CompressLZFastImpl(srcp, size, dstp, work, 0);
}
inline u32 MI_CompressLZExFast(const u8 *srcp, u32 size, u8 *dstp, u8 *work) {
    return MI_CompressLZFastImpl(srcp, size, dstp, work, 1);
}
extern u32 MI_CompressRL(const u8 *srcp, u32 size, u8 *dstp);
extern u32 MI_CompressHuffman(const u8 *srcp, u32 size, u8 *dstp, u8 huffBitSize, u8 *work);
extern void MI_Init(void);
typedef struct PLATFORM_LE8 {
    unsigned char byte[1];
} PLATFORM_LE8;
typedef struct PLATFORM_LE16 {
    unsigned char byte[2];
} PLATFORM_LE16;
typedef struct PLATFORM_LE32 {
    unsigned char byte[4];
} PLATFORM_LE32;
typedef struct PLATFORM_BE8 {
    unsigned char byte[1];
} PLATFORM_BE8;
typedef struct PLATFORM_BE16 {
    unsigned char byte[2];
} PLATFORM_BE16;
typedef struct PLATFORM_BE32 {
    unsigned char byte[4];
} PLATFORM_BE32;
static inline u8 MI_LoadLE8(const void *ptr) {
    const u8 *src = (const u8 *) ptr;
    return (u8) ((src[0] << 0UL));
}
static inline u16 MI_LoadLE16(const void *ptr) {
    const u8 *src = (const u8 *) ptr;
    return (u16) ((src[0] << 0UL) | (src[1] << 8UL));
}
static inline u32 MI_LoadLE32(const void *ptr) {
    const u8 *src = (const u8 *) ptr;
    return (u32) ((src[0] << 0UL) | (src[1] << 8UL) | (src[2] << 16UL) | (src[3] << 24UL));
}
static inline u8 MI_LoadBE8(const void *ptr) {
    const u8 *src = (const u8 *) ptr;
    return (u8) ((src[0] << 0UL));
}
static inline u16 MI_LoadBE16(const void *ptr) {
    const u8 *src = (const u8 *) ptr;
    return (u16) ((src[0] << 8UL) | (src[1] << 0UL));
}
static inline u32 MI_LoadBE32(const void *ptr) {
    const u8 *src = (const u8 *) ptr;
    return (u32) ((src[0] << 24UL) | (src[1] << 16UL) | (src[2] << 8UL) | (src[3] << 0UL));
}
static inline void MI_StoreLE8(void *ptr, u8 val) {
    u8 *src = (u8 *) ptr;
    src[0]  = (u8) (val >> 0UL);
}
static inline void MI_StoreLE16(void *ptr, u16 val) {
    u8 *src = (u8 *) ptr;
    src[0]  = (u8) (val >> 0UL);
    src[1]  = (u8) (val >> 8UL);
}
static inline void MI_StoreLE32(void *ptr, u32 val) {
    u8 *src = (u8 *) ptr;
    src[0]  = (u8) (val >> 0UL);
    src[1]  = (u8) (val >> 8UL);
    src[2]  = (u8) (val >> 16UL);
    src[3]  = (u8) (val >> 24UL);
}
static inline void MI_StoreBE8(void *ptr, u8 val) {
    u8 *src = (u8 *) ptr;
    src[0]  = (u8) (val >> 0UL);
}
static inline void MI_StoreBE16(void *ptr, u16 val) {
    u8 *src = (u8 *) ptr;
    src[0]  = (u8) (val >> 8UL);
    src[1]  = (u8) (val >> 0UL);
}
static inline void MI_StoreBE32(void *ptr, u32 val) {
    u8 *src = (u8 *) ptr;
    src[0]  = (u8) (val >> 24UL);
    src[1]  = (u8) (val >> 16UL);
    src[2]  = (u8) (val >> 8UL);
    src[3]  = (u8) (val >> 0UL);
}
typedef int (*MIDeviceReadFunction)(void *userdata, void *buffer, u32 offset, u32 length);
typedef int (*MIDeviceWriteFunction)(void *userdata, const void *buffer, u32 offset, u32 length);
typedef struct MIDevice {
    void *userdata;
    MIDeviceReadFunction Read;
    MIDeviceWriteFunction Write;
} MIDevice;
static inline void MI_InitDevice(MIDevice *device, void *userdata, MIDeviceReadFunction read, MIDeviceWriteFunction write) {
    device->userdata = userdata;
    device->Read     = read;
    device->Write    = write;
}
static inline int MI_ReadDevice(MIDevice *device, void *buffer, u32 offset, u32 length) {
    return device->Read(device->userdata, buffer, offset, length);
}
static inline int MI_WriteDevice(MIDevice *device, const void *buffer, u32 offset, u32 length) {
    return device->Write(device->userdata, buffer, offset, length);
}
typedef struct MICachePage {
    struct MICachePage *next;
    u32 offset;
    u8 *buffer;
} MICachePage;
typedef struct MICache {
    u32 pagewidth;
    MICachePage *valid;
    MICachePage *invalid;
    MICachePage *loading;
    int valid_total;
    int invalid_total;
    int loading_total;
} MICache;
extern void MI_InitCache(MICache *cache, u32 page, void *buffer, u32 length);
extern BOOL MI_ReadCache(MICache *cache, void *buffer, u32 offset, u32 length);
extern void MI_LoadCache(MICache *cache, MIDevice *device);
static inline BOOL MI_IsCacheLoading(const MICache *cache) {
    return (cache->loading != ((void *) 0));
}
typedef enum {
    FS_SEEK_SET,
    FS_SEEK_CUR,
    FS_SEEK_END
} FSSeekFileMode;
struct FSFile;
typedef struct {
    struct FSArchive *arc;
    u16 own_id;
    u16 index;
    u32 pos;
} FSDirPos;
typedef struct {
    struct FSArchive *arc;
    u32 file_id;
} FSFileID;
typedef struct {
    union {
        FSFileID file_id;
        FSDirPos dir_id;
    };
    u32 is_directory;
    u32 name_len;
    char name[127 + 1];
} FSDirEntry;
typedef struct {
    FSDirPos pos;
} FSSeekDirInfo;
typedef struct {
    FSDirEntry *p_entry;
    BOOL skip_string;
} FSReadDirInfo;
typedef struct {
    FSDirPos pos;
    const char *path;
    BOOL find_directory;
    union {
        FSFileID *file;
        FSDirPos *dir;
    } result;
} FSFindPathInfo;
typedef struct {
    u8 *buf;
    u32 buf_len;
    u16 total_len;
    u16 dir_id;
} FSGetPathInfo;
typedef struct {
    FSFileID id;
} FSOpenFileFastInfo;
typedef struct {
    u32 top;
    u32 bottom;
    u32 index;
} FSOpenFileDirectInfo;
typedef struct {
    u32 reserved;
} FSCloseFileInfo;
typedef struct {
    void *dst;
    u32 len_org;
    u32 len;
} FSReadFileInfo;
typedef struct {
    const void *src;
    u32 len_org;
    u32 len;
} FSWriteFileInfo;
typedef struct FSFile {
    FSFileLink link;
    struct FSArchive *arc;
    u32 stat;
    FSCommandType command;
    FSResult error;

    OSThreadQueue queue[1];

    union {
        struct {
            u32 own_id;
            u32 top;
            u32 bottom;
            u32 pos;
        } file;

        struct {
            FSDirPos pos;
            u32 parent;
        } dir;
    } prop;
    union {
        FSReadFileInfo readfile;
        FSWriteFileInfo writefile;
        FSSeekDirInfo seekdir;
        FSReadDirInfo readdir;
        FSFindPathInfo findpath;
        FSGetPathInfo getpath;
        FSOpenFileFastInfo openfilefast;
        FSOpenFileDirectInfo openfiledirect;
        FSCloseFileInfo closefile;
    } arg;

} FSFile;
extern void FS_Init(u32 default_dma_no);
extern BOOL FS_IsAvailable(void);
extern void FS_End(void);
extern u32 FS_GetDefaultDMA(void);
extern u32 FS_SetDefaultDMA(u32 dma_no);
extern u32 FS_TryLoadTable(void *p_mem, u32 size);
static inline u32 FS_GetTableSize(void) {
    return FS_TryLoadTable(((void *) 0), 0);
}
static inline BOOL FS_LoadTable(void *p_mem, u32 size) {
    return (FS_TryLoadTable(p_mem, size) <= size) ? 1 : 0;
}
static inline void *FS_UnloadTable(void) {
    FSArchive *const p_arc = FS_FindArchive("rom", 3);
    return FS_UnloadArchiveTables(p_arc);
}
static inline BOOL FS_IsBusy(volatile const FSFile *p_file) {
    return (p_file->stat & 0x00000001) ? 1 : 0;
}
static inline BOOL FS_IsCanceling(volatile const FSFile *p_file) {
    return (p_file->stat & 0x00000002) ? 1 : 0;
}
static inline BOOL FS_IsSucceeded(volatile const FSFile *p_file) {
    return (p_file->error == FS_RESULT_SUCCESS) ? 1 : 0;
}
static inline BOOL FS_IsFile(volatile const FSFile *p_file) {
    return (p_file->stat & 0x00000010) ? 1 : 0;
}
static inline BOOL FS_IsDir(volatile const FSFile *p_file) {
    return (p_file->stat & 0x00000020) ? 1 : 0;
}
static inline BOOL FS_IsFileSyncMode(const volatile FSFile *p) {
    return (p->stat & 0x00000004) ? 1 : 0;
}
static inline FSResult FS_GetResultCode(volatile const FSFile *p_file) {
    return p_file->error;
}
extern void FS_InitFile(FSFile *p_file);
extern BOOL FS_OpenFile(FSFile *p_file, const char *path);
extern BOOL FS_OpenFileFast(FSFile *p_file, FSFileID file_id);
extern BOOL FS_ConvertPathToFileID(FSFileID *p_file_id, const char *path);
extern BOOL FS_CloseFile(FSFile *p_file);
extern BOOL FS_GetPathName(FSFile *p_file, char *buf, u32 len);
extern s32 FS_GetPathLength(FSFile *p_file);
static inline u32 FS_GetLength(const FSFile *p_file) {
    return p_file->prop.file.bottom - p_file->prop.file.top;
}
static inline u32 FS_GetPosition(const FSFile *p_file) {
    return p_file->prop.file.pos - p_file->prop.file.top;
}
extern s32 FS_ReadFile(FSFile *p_file, void *dst, s32 len);
extern s32 FS_ReadFileAsync(FSFile *p_file, void *dst, s32 len);
extern s32 FS_WriteFile(FSFile *p_file, const void *src, s32 len);
extern s32 FS_WriteFileAsync(FSFile *p_file, const void *src, s32 len);
extern BOOL FS_WaitAsync(FSFile *p_file);
extern void FS_CancelFile(FSFile *p_file);
extern BOOL FS_SeekFile(FSFile *p_file, s32 offset, FSSeekFileMode origin);
static inline BOOL FS_SeekFileToBegin(FSFile *p_file) {
    return FS_SeekFile(p_file, 0, FS_SEEK_SET);
}
static inline BOOL FS_SeekFileToEnd(FSFile *p_file) {
    return FS_SeekFile(p_file, 0, FS_SEEK_END);
}
extern BOOL FS_ChangeDir(const char *path);
extern BOOL FS_FindDir(FSFile *p_dir, const char *path);
extern BOOL FS_ReadDir(FSFile *p_dir, FSDirEntry *p_entry);
extern BOOL FS_TellDir(const FSFile *p_dir, FSDirPos *p_pos);
extern BOOL FS_SeekDir(FSFile *p_dir, const FSDirPos *p_pos);
extern BOOL FS_RewindDir(FSFile *p_dir);
extern BOOL FS_OpenFileDirect(FSFile *p_file, FSArchive *p_arc, u32 image_top, u32 image_bottom, u32 file_index);
static inline FSArchive *FS_GetAttachedArchive(const FSFile *p_file) {
    return p_file->arc;
}
static inline u32 FS_GetFileImageTop(const FSFile *p_file) {
    return p_file->prop.file.top;
}
static inline u32 FS_GetFileImageBottom(const FSFile *p_file) {
    return p_file->prop.file.bottom;
}
extern BOOL FS_CreateFileFromRom(FSFile *p_file, u32 offset, u32 size);
extern BOOL FS_CreateFileFromMemory(FSFile *p_file, void *buf, u32 size);
static inline void FS_CreateReadServerThread(u32 priority) {
    (void) CARD_SetThreadPriority(priority);
}
typedef u32 FSOverlayID;
typedef void (*FSOverlayInitFunc)(void);
typedef struct {
    u32 id;
    u8 *ram_address;
    u32 ram_size;
    u32 bss_size;
    FSOverlayInitFunc *sinit_init;
    FSOverlayInitFunc *sinit_init_end;
    u32 file_id;
    u32 compressed : 24;
    u32 flag : 8;
} FSOverlayInfoHeader;
typedef struct {
    FSOverlayInfoHeader header;
    MIProcessor target;
    CARDRomRegion file_pos;
} FSOverlayInfo;
extern BOOL FS_LoadOverlayInfo(FSOverlayInfo *p_ovi, MIProcessor target, FSOverlayID id);
static inline u32 FS_GetOverlayTotalSize(const FSOverlayInfo *p_ovi) {
    return (u32) (p_ovi->header.ram_size + p_ovi->header.bss_size);
}
static inline u32 FS_GetOverlayImageSize(const FSOverlayInfo *p_ovi) {
    return (u32) (p_ovi->header.ram_size);
}
static inline void *FS_GetOverlayAddress(const FSOverlayInfo *p_ovi) {
    return p_ovi->header.ram_address;
}
extern FSFileID FS_GetOverlayFileID(const FSOverlayInfo *p_ovi);
extern void FS_ClearOverlayImage(FSOverlayInfo *p_ovi);
extern BOOL FS_LoadOverlayImage(FSOverlayInfo *p_ovi);
extern BOOL FS_LoadOverlayImageAsync(FSOverlayInfo *p_ovi, FSFile *p_file);
extern void FS_StartOverlay(FSOverlayInfo *p_ovi);
extern void FS_EndOverlay(FSOverlayInfo *p_ovi);
extern BOOL FS_UnloadOverlayImage(FSOverlayInfo *p_ovi);
extern BOOL FS_LoadOverlay(MIProcessor target, FSOverlayID id);
extern BOOL FS_UnloadOverlay(MIProcessor target, FSOverlayID id);
extern void FS_AttachOverlayTable(MIProcessor target, const void *ptr, u32 len);
static inline void FS_RegisterOverlayToDebugger(const FSOverlayInfo *p_ovi, const FSFile *p_file) {
    (void) p_ovi;
    (void) p_file;
}
typedef struct {
    u32 fileTop;
    u32 fileBottom;
} NNSiFndArchiveFatEntry;
typedef struct {
    u32 blockType;
    u32 blockSize;
    u16 numFiles;
    u16 reserved;
    NNSiFndArchiveFatEntry fatEntries[1];
} NNSiFndArchiveFatData;
typedef struct {
    u32 signature;
    u16 byteOrder;
    u16 version;
    u32 fileSize;
    u16 headerSize;
    u16 dataBlocks;
} NNSiFndArchiveHeader;
typedef struct {
    FSArchive fsArchive;
    NNSiFndArchiveHeader *arcBinary;
    NNSiFndArchiveFatData *fatData;
    u32 fileImage;
} NNSFndArchive;
extern BOOL NNS_FndMountArchive(NNSFndArchive *archive, const char *arcName, void *arcBinary);
extern BOOL NNS_FndUnmountArchive(NNSFndArchive *archive);
extern void *NNS_FndGetArchiveFileByName(const char *path);
extern void *NNS_FndGetArchiveFileByIndex(NNSFndArchive *archive, u32 index);
extern BOOL NNS_FndOpenArchiveFileByIndex(FSFile *file, NNSFndArchive *archive, u32 index);
typedef struct NNSFndAllocator NNSFndAllocator;
typedef void *(*NNSFndFuncAllocatorAlloc)(NNSFndAllocator *pAllocator, u32 size);
typedef void (*NNSFndFuncAllocatorFree)(NNSFndAllocator *pAllocator, void *memBlock);
typedef struct NNSFndAllocatorFunc NNSFndAllocatorFunc;
struct NNSFndAllocatorFunc {
    NNSFndFuncAllocatorAlloc pfAlloc;
    NNSFndFuncAllocatorFree pfFree;
};
struct NNSFndAllocator {
    NNSFndAllocatorFunc const *pFunc;
    void *pHeap;
    u32 heapParam1;
    u32 heapParam2;
};
extern void *NNS_FndAllocFromAllocator(NNSFndAllocator *pAllocator, u32 size);
extern void NNS_FndFreeToAllocator(NNSFndAllocator *pAllocator, void *memBlock);
extern void NNS_FndInitAllocatorForExpHeap(NNSFndAllocator *pAllocator, NNSFndHeapHandle heap, int alignment);
extern void NNS_FndInitAllocatorForFrmHeap(NNSFndAllocator *pAllocator, NNSFndHeapHandle heap, int alignment);
extern void NNS_FndInitAllocatorForUnitHeap(NNSFndAllocator *pAllocator, NNSFndHeapHandle heap);
extern void NNS_FndInitAllocatorForSDKHeap(NNSFndAllocator *pAllocator, OSArenaId id, OSHeapHandle heap);
struct NNSSndHeap;
typedef void (*NNSSndHeapDisposeCallback)(void *mem, u32 size, u32 data1, u32 data2);
typedef struct NNSSndHeap *NNSSndHeapHandle;
extern NNSSndHeapHandle NNS_SndHeapCreate(void *startAddress, u32 size);
extern void NNS_SndHeapDestroy(NNSSndHeapHandle heap);
extern void *NNS_SndHeapAlloc(NNSSndHeapHandle heap, u32 size, NNSSndHeapDisposeCallback callback, u32 data1, u32 data2);
extern void NNS_SndHeapClear(NNSSndHeapHandle heap);
extern int NNS_SndHeapSaveState(NNSSndHeapHandle heap);
extern void NNS_SndHeapLoadState(NNSSndHeapHandle heap, int level);
extern int NNS_SndHeapGetCurrentLevel(NNSSndHeapHandle heap);
extern u32 NNS_SndHeapGetSize(NNSSndHeapHandle heap);
extern u32 NNS_SndHeapGetFreeSize(NNSSndHeapHandle heap);
struct NNSSndHandle;
extern BOOL NNS_SndArcPlayerSetup(NNSSndHeapHandle heap);
extern BOOL NNS_SndArcPlayerStartSeq(struct NNSSndHandle *handle, int seqNo);
extern BOOL NNS_SndArcPlayerStartSeqArc(struct NNSSndHandle *handle, int seqArcNo, int index);
extern BOOL NNS_SndArcPlayerStartSeqEx(struct NNSSndHandle *handle, int playerNo, int bankNo, int playerPrio, int seqNo);
extern BOOL func_0207326c(struct NNSSndHandle *handle, int playerNo, int bankNo, int playerPrio, int seqArcNo, int index);
typedef struct NNSSndSeqParam {
    u16 bankNo;
    u8 volume;
    u8 channelPrio;
    u8 playerPrio;
    u8 playerNo;
    u16 reserved;
} NNSSndSeqParam;
typedef struct NNSSndSeqArcSeqInfo {
    u32 offset;
    struct NNSSndSeqParam param;
} NNSSndSeqArcSeqInfo;
typedef struct NNSSndSeqArc {
    struct SNDBinaryFileHeader fileHeader;
    struct SNDBinaryBlockHeader blockHeader;
    u32 baseOffset;
    u32 count;
    NNSSndSeqArcSeqInfo info[0];
} NNSSndSeqArc;
typedef struct NNSSndSeqData {
    struct SNDBinaryFileHeader fileHeader;
    struct SNDBinaryBlockHeader blockHeader;
    u32 baseOffset;
    u32 data[0];
} NNSSndSeqData;
extern u32 NNSi_SndSeqArcGetSeqCount(const struct NNSSndSeqArc *seqArc);
extern const NNSSndSeqArcSeqInfo *func_0207378c(const struct NNSSndSeqArc *seqArc, int seqNo);
typedef enum NNSSndArcSndType {
    NNS_SNDARC_SNDTYPE_SEQ,
    NNS_SNDARC_SNDTYPE_BANK,
    NNS_SNDARC_SNDTYPE_WAVEARC,
    NNS_SNDARC_SNDTYPE_SEQARC,
    NNS_SNDARC_SNDTYPE_INVALID = 0xff
} NNSSndArcSndType;
typedef struct NNSSndArcSeqInfo {
    u32 fileId;
    struct NNSSndSeqParam param;
} NNSSndArcSeqInfo;
typedef struct NNSSndArcSeqArcInfo {
    u32 fileId;
} NNSSndArcSeqArcInfo;
typedef struct NNSSndArcBankInfo {
    u32 fileId;
    u16 waveArcNo[4];
} NNSSndArcBankInfo;
typedef struct NNSSndArcWaveArcInfo {
    u32 fileId : 24;
    u32 flags : 8;
} NNSSndArcWaveArcInfo;
typedef struct NNSSndArcStrmInfo {
    u32 fileId;
    u8 volume;
    u8 playerPrio;
    u8 playerNo;
    u8 flags;
} NNSSndArcStrmInfo;
typedef struct NNSSndArcPlayerInfo {
    u8 seqMax;
    u8 padding;
    u16 allocChBitFlag;
    u32 heapSize;
} NNSSndArcPlayerInfo;
typedef struct NNSSndArcStrmPlayerInfo {
    u8 numChannels;
    u8 chNoList[2];
} NNSSndArcStrmPlayerInfo;
typedef struct NNSSndArcGroupItem {
    u8 type;
    u8 loadFlag;
    u16 padding;
    u32 index;
} NNSSndArcGroupItem;
typedef struct NNSSndArcGroupInfo {
    u32 count;
    struct NNSSndArcGroupItem item[0];
} NNSSndArcGroupInfo;
typedef struct NNSSndArcSeqArcOffset {
    u32 symbol;
    u32 table;
} NNSSndArcSeqArcOffset;
typedef struct NNSSndArcSeqArcOffsetTable {
    u32 count;
    NNSSndArcSeqArcOffset offset[0];
} NNSSndArcSeqArcOffsetTable;
typedef struct NNSSndArcOffsetTable {
    u32 count;
    u32 offset[0];
} NNSSndArcOffsetTable;
typedef struct NNSSndArcFileInfo {
    u32 offset;
    u32 size;
    void *mem;
    u32 reserved;
} NNSSndArcFileInfo;
typedef struct NNSSndArcFat {
    struct SNDBinaryBlockHeader blockHeader;
    u32 count;
    NNSSndArcFileInfo files[0];
} NNSSndArcFat;
typedef struct NNSSndArcInfo {
    struct SNDBinaryBlockHeader blockHeader;
    u32 seqOffset;
    u32 seqArcOffset;
    u32 bankOffset;
    u32 waveArcOffset;
    u32 playerInfoOffset;
    u32 groupInfoOffset;
    u32 strmPlayerInfoOffset;
    u32 strmOffset;
} NNSSndArcInfo;
typedef struct NNSSndArcSymbol {
    struct SNDBinaryBlockHeader blockHeader;
    u32 seqOffset;
    u32 seqArcOffset;
    u32 bankOffset;
    u32 waveArcOffset;
    u32 playerOffset;
    u32 groupOffset;
    u32 strmPlayerOffset;
    u32 strmOffset;
} NNSSndArcSymbol;
typedef struct NNSSndArcHeader {
    struct SNDBinaryFileHeader fileHeader;
    u32 symbolDataOffset;
    u32 symbolDataSize;
    u32 infoOffset;
    u32 infoSize;
    u32 fatOffset;
    u32 fatSize;
    u32 fileImageOffset;
    u32 fileImageSize;
} NNSSndArcHeader;
typedef struct NNSSndArc {
    NNSSndArcHeader header;
    BOOL file_open;

    FSFile file;
    FSFileID fileId;

    struct NNSSndArcFat *fat;
    struct NNSSndArcSymbol *symbol;
    struct NNSSndArcInfo *info;
    s32 loadBlockSize;
} NNSSndArc;
extern void NNS_SndArcInit(NNSSndArc *arc, const char *filePath, NNSSndHeapHandle heap, BOOL symbolLoadFlag);
extern BOOL NNS_SndArcInitWithResult(NNSSndArc *arc, const char *filePath, NNSSndHeapHandle heap, BOOL symbolLoadFlag);
extern BOOL NNS_SndArcSetup(NNSSndArc *arc, NNSSndHeapHandle heap, BOOL symbolLoadFlag);
extern void NNS_SndArcInitOnMemory(NNSSndArc *arc, void *data);
extern NNSSndArc *NNS_SndArcSetCurrent(NNSSndArc *arc);
extern NNSSndArc *NNS_SndArcGetCurrent(void);
extern const NNSSndSeqParam *NNS_SndArcGetSeqParam(int seqNo);
extern const NNSSndSeqParam *NNS_SndArcGetSeqArcParam(int seqArcNo, int index);
extern const NNSSndArcSeqInfo *NNS_SndArcGetSeqInfo(int seqNo);
extern const NNSSndArcSeqArcInfo *func_02071d48(int seqNo);
extern const NNSSndArcBankInfo *NNS_SndArcGetBankInfo(int bankNo);
extern const NNSSndArcWaveArcInfo *NNS_SndArcGetWaveArcInfo(int waveArcNo);
extern const NNSSndArcStrmInfo *NNS_SndArcGetStrmInfo(int strmNo);
extern const NNSSndArcPlayerInfo *NNS_SndArcGetPlayerInfo(int playerNo);
extern const NNSSndArcGroupInfo *NNS_SndArcGetGroupInfo(int groupNo);
extern const NNSSndArcStrmPlayerInfo *NNS_SndArcGetStrmPlayerInfo(int playerNo);
extern u32 NNS_SndArcGetSeqCount(void);
extern u32 NNS_SndArcGetSeqArcCount(void);
extern u32 NNS_SndArcGetBankCount(void);
extern u32 NNS_SndArcGetWaveArcCount(void);
extern u32 NNS_SndArcGetStrmCount(void);
extern u32 NNS_SndArcGetGroupCount(void);
extern u32 NNS_SndArcGetSeqArcSeqCount(int seqArcNo);
extern s32 NNS_SndArcReadFile(u32 fileId, void *buffer, s32 size, s32 offset);
extern FSFileID NNS_SndArcGetFileID(void);
extern u32 NNS_SndArcGetFileSize(u32 fileId);
extern u32 NNS_SndArcGetFileOffset(u32 fileId);
extern void *func_02071ae4(u32 fileId);
extern void NNS_SndArcSetFileAddress(u32 fileId, void *address);
extern void NNS_SndArcSetLoadBlockSize(s32 loadBlockSize);
extern s32 NNS_SndArcGetLoadBlockSize();
extern const char *NNS_SndArcGetSeqSymbol(int seqNo);
extern const char *NNS_SndArcGetSeqArcSymbol(int seqArcNo);
extern const char *NNS_SndArcGetSeqArcIdxSymbol(int seqArcNo, int index);
extern const char *NNS_SndArcGetBankSymbol(int bankNo);
extern const char *NNS_SndArcGetWaveArcSymbol(int waveArcNo);
extern const char *NNS_SndArcGetStrmSymbol(int strmNo);
extern const char *NNS_SndArcGetGroupSymbol(int groupNo);
typedef struct NNSSndFader {
    int origin;
    int target;
    int counter;
    int frame;
} NNSSndFader;
extern void NNSi_SndFaderInit(NNSSndFader *fader);
extern void NNSi_SndFaderSet(NNSSndFader *fader, int target, int frame);
extern int NNSi_SndFaderGet(const NNSSndFader *fader);
extern void NNSi_SndFaderUpdate(NNSSndFader *fader);
extern BOOL NNSi_SndFaderIsFinished(const NNSSndFader *fader);
struct SNDBankData;
struct NNSSndSeqArcHeader;
struct NNSSndSeqHeader;
struct NNSSndSeqPlayer;
struct NNSSndPlayer;
struct NNSSndPlayerHeap;
struct SNDPlayerInfo;
struct SNDTrackInfo;
enum NNSSndSeqPlayerStatus {
    NNS_SND_SEQ_PLAYER_STATUS_STOP,
    NNS_SND_SEQ_PLAYER_STATUS_PLAY,
    NNS_SND_SEQ_PLAYER_STATUS_FADEOUT
};
typedef enum NNSSndPlayerSeqType {
    NNS_SND_PLAYER_SEQ_TYPE_INVALID,
    NNS_SND_PLAYER_SEQ_TYPE_SEQ,
    NNS_SND_PLAYER_SEQ_TYPE_SEQARC
} NNSSndPlayerSeqType;
typedef enum NNSSndSeqMute {
    NNS_SND_SEQ_MUTE_OFF     = SND_SEQ_MUTE_OFF,
    NNS_SND_SEQ_MUTE_NO_STOP = SND_SEQ_MUTE_NO_STOP,
    NNS_SND_SEQ_MUTE_RELEASE = SND_SEQ_MUTE_RELEASE,
    NNS_SND_SEQ_MUTE_STOP    = SND_SEQ_MUTE_STOP
} NNSSndSeqMute;
typedef struct NNSSndHandle {
    struct NNSSndSeqPlayer *player;
} NNSSndHandle;
typedef struct NNSSndSeqPlayer {
    struct NNSSndHandle *handle;
    struct NNSSndPlayer *player;
    struct NNSSndPlayerHeap *heap;
    NNSFndLink playerLink;
    NNSFndLink prioLink;
    NNSSndFader fader;
    u8 status;
    u8 startFlag;
    u8 pauseFlag;
    u8 prepareFlag;
    u32 commandTag;
    u16 seqType;
    u16 pad2;
    u16 seqNo;
    u16 seqArcIndex;
    u8 playerNo;
    u8 prio;
    s16 volume;
    u8 initVolume;
    u8 extVolume;
    u16 pad3_;
} NNSSndSeqPlayer;
typedef struct NNSSndPlayer {
    NNSFndList playerList;
    NNSFndList heapList;
    u32 playableSeqCount;
    u32 allocChBitFlag;
    u8 volume;
    u8 pad_;
    u16 pad2_;
} NNSSndPlayer;
inline BOOL NNS_SndHandleIsValid(const struct NNSSndHandle *handle) {
    ((void) 0);
    return handle->player != ((void *) 0);
}
extern void NNS_SndPlayerStopSeq(NNSSndHandle *handle, int fadeFrame);
extern void NNS_SndPlayerStopSeqByPlayerNo(int playerNo, int fadeFrame);
extern void NNS_SndPlayerStopSeqBySeqNo(int seqNo, int fadeFrame);
extern void NNS_SndPlayerStopSeqBySeqArcNo(int seqArcNo, int fadeFrame);
extern void NNS_SndPlayerStopSeqBySeqArcIdx(int seqArcNo, int index, int fadeFrame);
extern void NNS_SndPlayerStopSeqAll(int fadeFrame);
extern void NNS_SndPlayerPause(NNSSndHandle *handle, BOOL flag);
extern void NNS_SndPlayerPauseByPlayerNo(int playerNo, BOOL flag);
extern void NNS_SndPlayerPauseAll(BOOL flag);
extern void NNS_SndPlayerSetTempoRatio(NNSSndHandle *handle, int ratio);
extern void NNS_SndPlayerSetVolume(NNSSndHandle *handle, int volume);
extern void NNS_SndPlayerSetInitialVolume(NNSSndHandle *handle, int volume);
extern void NNS_SndPlayerMoveVolume(NNSSndHandle *handle, int targetVolume, int frames);
extern void NNS_SndPlayerSetPlayerPriority(NNSSndHandle *handle, int priority);
extern void NNS_SndPlayerSetChannelPriority(NNSSndHandle *handle, int priority);
extern void NNS_SndPlayerSetTrackMute(NNSSndHandle *handle, u16 trackBitMask, BOOL flag);
extern void NNS_SndPlayerSetTrackMuteEx(NNSSndHandle *handle, u16 trackBitMask, NNSSndSeqMute mute);
extern void NNS_SndPlayerSetTrackVolume(NNSSndHandle *handle, u16 trackBitMask, int volume);
extern void NNS_SndPlayerSetTrackPitch(NNSSndHandle *handle, u16 trackBitMask, int pitch);
extern void NNS_SndPlayerSetTrackPan(NNSSndHandle *handle, u16 trackBitMask, int pan);
extern void NNS_SndPlayerSetTrackPanRange(NNSSndHandle *handle, u16 trackBitMask, int panRange);
extern void NNS_SndPlayerSetTrackModDepth(NNSSndHandle *handle, u16 trackBitMask, int depth);
extern void NNS_SndPlayerSetTrackModSpeed(NNSSndHandle *handle, u16 trackBitMask, int speed);
extern void NNS_SndPlayerSetTrackAllocatableChannel(NNSSndHandle *handle, u16 trackBitMask, u32 chBitFlag);
extern u32 NNS_SndPlayerGetTick(NNSSndHandle *handle);
extern int NNS_SndPlayerCountPlayingSeqByPlayerNo(int playerNo);
extern int NNS_SndPlayerCountPlayingSeqBySeqNo(int seqNo);
extern int NNS_SndPlayerCountPlayingSeqBySeqArcNo(int seqArcNo);
extern int NNS_SndPlayerCountPlayingSeqBySeqArcIdx(int seqArcNo, int index);
extern void NNS_SndPlayerSetSeqNo(NNSSndHandle *handle, int seqNo);
extern void NNS_SndPlayerSetSeqArcNo(NNSSndHandle *handle, int seqArcNo, int index);
extern NNSSndPlayerSeqType NNS_SndPlayerGetSeqType(NNSSndHandle *handle);
extern int NNS_SndPlayerGetSeqNo(NNSSndHandle *handle);
extern int NNS_SndPlayerGetSeqArcNo(NNSSndHandle *handle);
extern int NNS_SndPlayerGetSeqArcIdx(NNSSndHandle *handle);
extern BOOL NNS_SndPlayerReadVariable(NNSSndHandle *handle, int varNo, s16 *var);
extern BOOL NNS_SndPlayerReadGlobalVariable(int varNo, s16 *var);
extern BOOL NNS_SndPlayerWriteVariable(NNSSndHandle *handle, int varNo, s16 var);
extern BOOL NNS_SndPlayerWriteGlobalVariable(int varNo, s16 var);
extern void NNS_SndPlayerSetPlayerVolume(int playerNo, int volume);
extern void NNS_SndPlayerSetPlayableSeqCount(int playerNo, int seqCount);
extern void NNS_SndPlayerSetAllocatableChannel(int playerNo, u32 chBitFlag);
extern BOOL NNS_SndPlayerCreateHeap(int playerNo, NNSSndHeapHandle heap, u32 size);
extern BOOL NNS_SndPlayerReadDriverPlayerInfo(NNSSndHandle *handle, struct SNDPlayerInfo *info);
extern BOOL NNS_SndPlayerReadDriverTrackInfo(NNSSndHandle *handle, int trackNo, struct SNDTrackInfo *info);
extern void NNS_SndHandleInit(NNSSndHandle *handle);
extern void NNS_SndHandleReleaseSeq(NNSSndHandle *handle);
extern void NNSi_SndPlayerInit(void);
extern void NNSi_SndPlayerMain(void);
extern void NNSi_SndPlayerStartSeq(NNSSndSeqPlayer *seqPlayer, const void *seqDataBase, u32 seqDataOffset,
                                   const struct SNDBankData *bank);
extern NNSSndSeqPlayer *NNSi_SndPlayerAllocSeqPlayer(NNSSndHandle *handle, int playerNo, int prio);
extern void NNSi_SndPlayerFreeSeqPlayer(NNSSndSeqPlayer *seqPlayer);
extern void NNSi_SndPlayerStopSeq(NNSSndSeqPlayer *seqPlayer, int fadeFrame);
extern void NNSi_SndPlayerPause(NNSSndSeqPlayer *seqPlayer, BOOL flag);
extern NNSSndHeapHandle NNSi_SndPlayerAllocHeap(int playerNo, NNSSndSeqPlayer *seqPlayer);
struct NNSSndSeqData;
struct NNSSndSeqArc;
struct SNDBankData;
struct SNDWaveArc;
typedef enum NNSSndArcLoadResult {
    NNS_SND_ARC_LOAD_SUCESS = 0,
    NNS_SND_ARC_LOAD_ERROR_INVALID_GROUP_NO,
    NNS_SND_ARC_LOAD_ERROR_INVALID_SEQ_NO,
    NNS_SND_ARC_LOAD_ERROR_INVALID_SEQARC_NO,
    NNS_SND_ARC_LOAD_ERROR_INVALID_BANK_NO,
    NNS_SND_ARC_LOAD_ERROR_INVALID_WAVEARC_NO,
    NNS_SND_ARC_LOAD_ERROR_FAILED_LOAD_SEQ,
    NNS_SND_ARC_LOAD_ERROR_FAILED_LOAD_SEQARC,
    NNS_SND_ARC_LOAD_ERROR_FAILED_LOAD_BANK,
    NNS_SND_ARC_LOAD_ERROR_FAILED_LOAD_WAVE
} NNSSndArcLoadResult;
extern BOOL NNS_SndArcLoadGroup(int groupNo, NNSSndHeapHandle heap);
extern BOOL NNS_SndArcLoadSeq(int seqNo, NNSSndHeapHandle heap);
extern BOOL NNS_SndArcLoadSeqArc(int seqArcNo, NNSSndHeapHandle heap);
extern BOOL NNS_SndArcLoadBank(int bankNo, NNSSndHeapHandle heap);
extern BOOL NNS_SndArcLoadWaveArc(int waveArcNo, NNSSndHeapHandle heap);
extern BOOL NNS_SndArcLoadSeqEx(int seqNo, u32 loadFlag, NNSSndHeapHandle heap);
extern BOOL NNS_SndArcLoadBankEx(int bankNo, u32 loadFlag, NNSSndHeapHandle heap);
extern void *NNSi_SndArcLoadFile(u32 fileId, NNSSndHeapDisposeCallback callback, u32 data1, u32 data2, NNSSndHeapHandle heap);
extern NNSSndArcLoadResult NNSi_SndArcLoadGroup(int groupNo, NNSSndHeapHandle heap);
extern NNSSndArcLoadResult NNSi_SndArcLoadSeq(int seqNo, u32 loadFlag, NNSSndHeapHandle heap, BOOL bSetAddr,
                                              struct NNSSndSeqData **pData);
extern NNSSndArcLoadResult NNSi_SndArcLoadSeqArc(int seqArcNo, u32 loadFlag, NNSSndHeapHandle heap, BOOL bSetAddr,
                                                 struct NNSSndSeqArc **pData);
extern NNSSndArcLoadResult NNSi_SndArcLoadBank(int bankNo, u32 loadFlag, NNSSndHeapHandle heap, BOOL bSetAddr,
                                               struct SNDBankData **pData);
extern NNSSndArcLoadResult NNSi_SndArcLoadWaveArc(int waveArcNo, u32 loadFlag, NNSSndHeapHandle heap, BOOL bSetAddr,
                                                  struct SNDWaveArc **pData);
extern BOOL func_02073090(NNSSndHandle *handle, int playerNo, int bankNo, int playerPrio, const NNSSndSeqArcSeqInfo *sound,
                          const NNSSndSeqArc *seqArc, int seqArcNo, int index);
#pragma thumb off
BOOL func_0207326c(NNSSndHandle *handle, int playerNo, int bankNo, int playerPrio, int seqArcNo, int index) {
    const NNSSndArcSeqArcInfo *info;
    const NNSSndSeqArc *seqArc;
    const NNSSndSeqArcSeqInfo *sound;

    ((void) 0);
    ((void) 0);
    ((void) 0);

    info = func_02071d48(seqArcNo);
    if (info == ((void *) 0)) {
        return 0;
    }
    seqArc = (NNSSndSeqArc *) func_02071ae4(info->fileId);
    if (seqArc == ((void *) 0)) {
        return 0;
    }
    sound = func_0207378c(seqArc, index);
    if (sound == ((void *) 0)) {
        return 0;
    }

    return func_02073090(handle, playerNo >= 0 ? playerNo : sound->param.playerNo, bankNo >= 0 ? bankNo : sound->param.bankNo,
                         playerPrio >= 0 ? playerPrio : sound->param.playerPrio, sound, seqArc, seqArcNo, index);
}
