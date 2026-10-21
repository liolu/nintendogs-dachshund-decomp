#include "m2c.h"

typedef struct UnkNode_020887d8 {
    struct UnkNode_020887d8 *next;
    void (*func)(void *);
    void *arg;
} UnkNode_020887d8;

typedef struct UnkStruct_020887d8 {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
} UnkStruct_020887d8;

extern UnkNode_020887d8 *data_0214dfb0;
extern u32 func_02080c28(void);
extern void func_02080c3c(u32 state);

void func_020887d8(UnkStruct_020887d8 *arg0) {
    for (;;) {
        UnkNode_020887d8 *prevA;
        UnkNode_020887d8 *pNull = NULL;
        UnkNode_020887d8 *headB = NULL;
        UnkNode_020887d8 *tailB;
        s32 size = (s32)arg0->unk_08;
        s32 start = (s32)arg0->unk_04;
        s32 c = (s32)arg0->unk_0c;
        s32 end = start + size;
        s32 t = size + c;
        s32 end2;
        u32 irq;
        UnkNode_020887d8 *head;
        UnkNode_020887d8 *cur;

        t = t - size;
        tailB = NULL;
        end2 = end + t;
        irq = func_02080c28();
        head = data_0214dfb0;
        prevA = NULL;
        cur = head;

        if (cur != NULL) {
            do {
                u32 func = (u32)cur->func;
                UnkNode_020887d8 *next = cur->next;
                u32 arg = (u32)cur->arg;
                if ((func >= start && func < end) || (arg >= end && arg < end2)) {
                    if (tailB != NULL) {
                        tailB->next = cur;
                    } else {
                        headB = cur;
                    }
                    if (head == cur) {
                        data_0214dfb0 = next;
                        head = next;
                    }
                    cur->next = pNull;
                    tailB = cur;
                    if (prevA != NULL) {
                        prevA->next = next;
                    }
                } else {
                    prevA = cur;
                }
                cur = next;
            } while (cur != NULL);
        }
        func_02080c3c(irq);
        if (headB == NULL) {
            return;
        }
        do {
            void (*func)(void *) = headB->func;
            UnkNode_020887d8 *next = headB->next;
            if (func != NULL) {
                func(headB->arg);
            }
            headB = next;
        } while (headB != NULL);
    }
}
