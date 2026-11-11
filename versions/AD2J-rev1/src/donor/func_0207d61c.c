/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a0fe0 from projets/eyeshield-21/src/auto/func_020a0fe0.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned short int u16;
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
extern void *func_0207d680(NNSFndList *list, void *object);
extern void *func_0207d61c(NNSFndList *list, u16 index);
extern void *func_0207d680(NNSFndList *list, void *object);
#pragma thumb off
void *func_0207d61c(NNSFndList *list, u16 index) {
    int count          = 0;
    NNSFndLink *object = 0;

    ((void) 0);

    while ((object = func_0207d680(list, object)) != 0) {
        if (index == count) {
            return object;
        }
        count++;
    }
    return 0;
}
