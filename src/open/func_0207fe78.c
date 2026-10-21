#include "m2c.h"

typedef struct {
    u16 queueSend;
    u16 queueReceive;
    void **msgArray;
    s32 msgCount;
    s32 firstIndex;
    s32 usedCount;
} OSMessageQueue;

extern s32 func_02080c28(void);
extern void func_02080c3c(s32 state);
extern void func_0207f670(u16 *queue);
extern void func_0207f5fc(void *queue);
extern s64 func_0205df50(s32 dividend, s32 divisor);

s32 func_0207fe78(OSMessageQueue *mq, void *msg, u32 flags) {
    s32 enabled;

    enabled = func_02080c28();
    while (mq->msgCount <= mq->usedCount) {
        if (!(flags & 1)) {
            func_02080c3c(enabled);
            return 0;
        }
        func_0207f670(&mq->queueSend);
    }
    mq->msgArray[(mq->firstIndex + mq->usedCount) % mq->msgCount] = msg;
    mq->usedCount++;
    func_0207f5fc(&mq->queueReceive);
    func_02080c3c(enabled);
    return 1;
}
