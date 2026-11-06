/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020111fc from projets/code-lyoko/src/auto/func_020111fc.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef void (*UnkPmSleepCallback)(void *arg);
typedef struct UnkPmCallbackInfo {
    UnkPmSleepCallback func;
    void *arg;
    struct UnkPmCallbackInfo *next;
} UnkPmCallbackInfo;
void func_02002224(UnkPmCallbackInfo **list, UnkPmCallbackInfo *info) {
    UnkPmCallbackInfo *p;
    UnkPmCallbackInfo *prev;

    if (!list) {
        return;
    }
    prev = p = *list;
    while (p) {
        if (p == info) {
            if (p == prev) {
                *list = p->next;
            } else {
                prev->next = p->next;
            }
            return;
        }
        prev = p;
        p    = p->next;
    }
}
