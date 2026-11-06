/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* _Z19GetInterruptHandlerj from projets/children-of-mana/src/donor/_Z19GetInterruptHandlerj.cpp (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef void (*DMACompletionCallback)(int userdata);
typedef void (*InterruptHandlerProc)();
extern InterruptHandlerProc GetInterruptHandler(unsigned int mask);
typedef unsigned long long uint64_t;
struct ProcessorContext;
struct Alarm {

    typedef void (*PFNCompletion)(ProcessorContext **);

    PFNCompletion completionProc;
    ProcessorContext **ppContext;
    unsigned int unknown_8;
    uint64_t alarmTime;
    Alarm *pPrev;
    Alarm *pNext;
    uint64_t alarmIntervalLength;
    uint64_t alarmIntervalResidue;
};
struct ProcessorContext;
struct Mutex;
struct MutexList {
    Mutex *pFirst;
    Mutex *pLast;
};
struct BlockedContextList {
    ProcessorContext *first;
    ProcessorContext *last;

    void Insert(ProcessorContext *context);
    ProcessorContext *PopFront();

    ProcessorContext *Remove(ProcessorContext *context);
};
struct ProcessorContext {
    typedef void (*ExitRoutine)(int maybeExitCode);

    unsigned int programStatusRegister;
    unsigned int userModeRegisters[15];
    unsigned int resumeAddress;
    unsigned int supervisorStackPointer;

    struct MathRegisters {
        unsigned long long div_numer;
        unsigned long long div_denom;
        unsigned long long sqrt_param;
        unsigned short div_control;
        unsigned short sqrt_control;
    } mathRegisters;

    int blockState;

    ProcessorContext *pNext;
    unsigned int uniqueID;
    unsigned int priority;
    unsigned int unknown_74;
    BlockedContextList *containerBlockedQueue;
    ProcessorContext *pPrevBlocked;
    ProcessorContext *pNextBlocked;
    Mutex *blockingMutex;
    MutexList lockedMutexes;
    unsigned int stackTop;
    unsigned int stackBottom;
    unsigned int stackUnknownTopSubspaceSize;
    BlockedContextList contextsAwaitingThisCompletion;
    unsigned int unknown_A4;
    unsigned int unknown_A8;
    unsigned int unknown_AC;
    Alarm *sleepAlarm;
    ExitRoutine exitProc;
    unsigned int unknown_B8;
    unsigned int unknown_BC;
};
struct DTCMData {
    void (*interruptProcTable[24])();
    BlockedContextList block_60;
    char unknown_60[0x3b80 - 0x68];
    unsigned int irqModeStack[0x100];
    char unknown_3f80[0xf8 - 0x80];

    unsigned int interruptsFired;
    unsigned int interruptJumpAddress;
};
extern DTCMData data_027c00ac;
struct DMAOrTimerResponse {
    DMACompletionCallback callback;
    unsigned int stayEnabledAfter;
    int userdata;
};
extern DMAOrTimerResponse data_021532d4[8];
InterruptHandlerProc GetInterruptHandler(unsigned int mask) {
    int interruptId             = 0;
    InterruptHandlerProc *pProc = &data_027c00ac.interruptProcTable[0];
    do {
        if (!(mask & 1)) {
            continue;
        }

        if (interruptId >= 8 && interruptId <= 11) {
            return (InterruptHandlerProc) data_021532d4[interruptId - 8].callback;
        } else if (interruptId >= 3 && interruptId <= 6) {
            return (InterruptHandlerProc) data_021532d4[interruptId + 1].callback;
        } else {
            return *pProc;
        }

    } while (interruptId++, mask >>= 1, pProc++, interruptId < 22);
    return 0;
}
