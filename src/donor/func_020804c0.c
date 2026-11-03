/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020fab1c from projets/sims-2-the/src/donor/func_020fab1c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef u16 OsThreadQueue;
extern u32 func_0208120c(void);
extern u32 func_02081220(u32 state);
extern void func_0207fc44(OsThreadQueue *queue);
extern void func_0207fcb8(OsThreadQueue *queue);
typedef struct OsMessageQueue {
    OsThreadQueue send_waiters;
    OsThreadQueue receive_waiters;
    void **messages;
    int capacity;
    int first;
    int count;
} OsMessageQueue;
extern int func_020804c0(OsMessageQueue *queue, void *message, int flags);
int func_020804c0(OsMessageQueue *queue, void *message, int flags) {
    u32 state = func_0208120c();
    while (queue->capacity <= queue->count) {
        if (!(flags & 1)) {
            func_02081220(state);
            return 0;
        }
        func_0207fcb8(&queue->send_waiters);
    }
    queue->messages[(queue->first + queue->count) % queue->capacity] = message;
    queue->count++;
    func_0207fc44(&queue->receive_waiters);
    func_02081220(state);
    return 1;
}
