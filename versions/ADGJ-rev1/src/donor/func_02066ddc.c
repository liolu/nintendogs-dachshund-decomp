/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02066ddc from projets/nintendogs-chihuahua-friends/src/donor/func_02066ddc.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef u16 OsThreadQueue;
typedef struct OsMutex OsMutex;
typedef struct OsContext {
    u32 cpsr;
    u32 registers[13];
    u32 sp;
    u32 lr;
    u32 pc;
    u32 supervisor_sp;
    u32 coprocessor[7];
} OsContext;
typedef struct OsThread {
    OsContext context;
    u32 state;
    struct OsThread *next;
    u32 id;
    u32 priority;
    u32 unknown74;
    OsMutex *waiting_mutex;
    OsMutex *mutex_head;
    OsMutex *mutex_tail;
    u32 *stack_bottom;
    u32 *stack_top;
    u32 stack_offset;
    OsThreadQueue join_waiters;
    u16 padding92;
} OsThread;
typedef void (*OsThreadSwitchCallback)(OsThread *previous, OsThread *next);
struct OsMutex {
    OsThreadQueue queue;
    u16 padding02;
    OsThread *owner;
    s32 count;
    OsMutex *previous;
    OsMutex *next;
};
typedef struct OsThreadInfo {
    u16 needs_reschedule;
    u16 thread_count;
    u16 reschedule_lock;
    u16 padding06;
    OsThread *current;
    OsThread *head;
    OsThreadSwitchCallback callback;
    OsThread *threads[16];
} OsThreadInfo;
extern OsThreadInfo data_02153348;
extern u32 func_0208120c(void);
extern u32 func_02081220(u32 state);
extern void func_0207fcb8(OsThreadQueue *queue);
typedef void (*CardCallback)(void *argument);
typedef struct CardCommand {
    u32 result;
    u32 backup_type;
    u32 rom_id;
    u32 source;
    u32 destination;
    u32 length;
    u32 total_size;
    u32 sector_size;
    u32 page_size;
    u32 address_width;
    u32 write_delay;
    u32 erase_delay;
    u32 erase_timeout;
    u32 total_erase_delay;
    u32 total_erase_timeout;
    u32 program_timeout;
} CardCommand;
typedef struct CardWork CardWork;
typedef void (*CardTask)(CardWork *work);
struct CardWork {
    CardCommand *command;
    u32 reserved04;
    volatile s32 lock_owner;
    volatile s32 lock_count;
    OsThreadQueue lock_queue;
    u16 padding12;
    u32 resource;
    const u8 *volatile source;
    u8 *volatile destination;
    volatile u32 length;
    int dma;
    CardCallback callback;
    void *argument;
    CardTask task;
    volatile u32 flags;
    volatile u32 priority;
    OsThread thread;
    OsThread *volatile current_thread;
    OsThreadQueue task_queue;
    u16 paddingd6;
    u32 reservedd8[2];
    u8 buffer[256];
};
extern CardWork data_0214e180;
static inline CardWork *CARDi_GetCommon(void) {
    return (CardWork *) (u32) &data_0214e180;
}
extern void func_02066944(CardTask task);
extern int func_02066ddc(u32 source, void *destination, u32 length, CardCallback callback, void *argument, int asynchronous);
extern void func_02066f8c(CardWork *work);
static inline void CARDi_BeginTask(CardWork *work) {
    u32 state = func_0208120c();
    while (work->flags & 4) {
        func_0207fcb8(&work->task_queue);
    }
    work->flags |= 4;
    func_02081220(state);
}
extern void func_02066f8c(CardWork *work);
int func_02066ddc(u32 source, void *destination, u32 length, CardCallback callback, void *argument, int asynchronous) {
    CardWork *work = CARDi_GetCommon();
    CARDi_BeginTask(work);
    work->source      = (const u8 *) source;
    work->destination = (u8 *) destination;
    work->length      = length;
    work->callback    = callback;
    work->argument    = argument;
    if (asynchronous) {
        func_02066944(func_02066f8c);
        return 1;
    }
    data_0214e180.current_thread = data_02153348.current;
    func_02066f8c(work);
    return work->command->result == 0;
}
