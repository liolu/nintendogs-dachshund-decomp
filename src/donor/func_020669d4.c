/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02060580 from projets/need-for-speed-underground-2/src/auto/func_02060580.c (same code in another game of this
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
struct OsMutex {
    OsThreadQueue queue;
    u16 padding02;
    OsThread *owner;
    s32 count;
    OsMutex *previous;
    OsMutex *next;
};
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
extern void func_020669d4(void *argument);
void func_020669d4(void *argument) {
    CardWork *work = CARDi_GetCommon();
    for (;;) {
        u32 state = func_0208120c();
        for (;;) {
            if (work->flags & 8) {
                break;
            }
            work->current_thread = &work->thread;
            func_0207fcb8(0);
        }
        func_02081220(state);
        work->task(work);
    }
}
