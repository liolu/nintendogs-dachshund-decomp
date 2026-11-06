/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0206714c from projets/nintendogs-shiba-friends/src/auto/func_0206714c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
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
extern u32 data_0214e760;
typedef struct CardRomStat CardRomStat;
struct CardRomStat {
    void (*read)(CardRomStat *stat);
    u32 control;
    u32 cache_address;
    u32 reserved0c[5];
    u8 buffer[512];
};
extern CardRomStat data_0214e780;
extern void func_02066944(CardTask task);
extern void func_020666cc(void);
extern void func_0206714c(u32 dma, u32 source, void *destination, u32 size, CardCallback callback, void *argument,
                          int asynchronous);
extern int func_02067140(void);
extern void func_02067274(CardWork *work);
extern int func_020673a8(CardRomStat *stat);
extern void func_0206d7e4(u32 dma);
extern void func_02067274(CardWork *work);
void func_0206714c(u32 dma, u32 source, void *destination, u32 size, CardCallback callback, void *argument, int asynchronous) {
    CardWork *work    = CARDi_GetCommon();
    CardRomStat *stat = &data_0214e780;
    u32 state;
    func_020666cc();
    state = func_0208120c();
    while (work->flags & 4) {
        func_0207fcb8(&work->task_queue);
    }
    work->flags |= 4;
    func_02081220(state);
    work->dma         = dma;
    work->source      = (u8 *) (source + data_0214e760);
    work->destination = destination;
    work->length      = size;
    work->callback    = callback;
    work->argument    = argument;
    if (dma <= 3) {
        func_0206d7e4(dma);
    }
    if (func_020673a8(stat)) {
        if (!asynchronous) {
            func_02067140();
        }
    } else if (asynchronous) {
        func_02066944(func_02067274);
    } else {
        work->current_thread = data_02153348.current;
        func_02067274(work);
    }
}
extern int func_02067140(void);
