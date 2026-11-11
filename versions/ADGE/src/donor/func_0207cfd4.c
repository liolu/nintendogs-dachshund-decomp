/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* IntrusiveListWrapper_GetAtIndex from https://github.com/RonyxDumb/mkds src/arm9/020172d8_IntrusiveListWrapper_GetAtIndex.c
 * (license: none), reused by tools/donor_match.py */
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
extern void *func_0207d038(NNSFndList *list, void *object);
extern void *func_0207cfd4(NNSFndList *list, u16 index);
extern void *func_0207d038(NNSFndList *list, void *object);
#pragma thumb off
void *func_0207cfd4(NNSFndList *list, u16 index) {
    int count          = 0;
    NNSFndLink *object = 0;

    ((void) 0);

    while ((object = func_0207d038(list, object)) != 0) {
        if (index == count) {
            return object;
        }
        count++;
    }
    return 0;
}
