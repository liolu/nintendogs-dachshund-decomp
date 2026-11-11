/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f2a50 from projets/resident-evil-deadly-silence/src/donor/func_020f2a50.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef int BOOL;
extern const u16(*ctrdgi_fl_maxtime);
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
typedef struct NNSiFndHeapHead NNSiFndHeapHead;
struct NNSiFndHeapHead {
    u32 signature;
    NNSFndLink link;
    NNSFndList childList;
    void *heapStart;
    void *heapEnd;
    u32 attribute;
};
typedef NNSiFndHeapHead *NNSFndHeapHandle;
typedef struct NNSiFndExpHeapMBlockHead NNSiFndExpHeapMBlockHead;
struct NNSiFndExpHeapMBlockHead {
    u16 signature;
    u16 attribute;
    u32 blockSize;
    NNSiFndExpHeapMBlockHead *pMBHeadPrev;
    NNSiFndExpHeapMBlockHead *pMBHeadNext;
};
typedef struct NNSiFndExpMBlockList NNSiFndExpMBlockList;
struct NNSiFndExpMBlockList {
    NNSiFndExpHeapMBlockHead *head;
    NNSiFndExpHeapMBlockHead *tail;
};
typedef struct NNSiFndExpHeapHead NNSiFndExpHeapHead;
struct NNSiFndExpHeapHead {
    NNSiFndExpMBlockList mbFreeList;
    NNSiFndExpMBlockList mbUsedList;
    u16 groupID;
    u16 feature;
};
extern void func_0207d4dc(NNSFndHeapHandle heap, void *memBlock);
typedef u32 NNSiUIntPtr;
inline NNSiUIntPtr NNSiGetUIntPtr(const void *ptr) {
    return (NNSiUIntPtr) ptr;
}
inline void *AddU32ToPtr(void *ptr, u32 val) {
    return (void *) (NNSiGetUIntPtr(ptr) + val);
}
inline void *SubU32ToPtr(void *ptr, u32 val) {
    return (void *) (NNSiGetUIntPtr(ptr) - val);
}
typedef struct NNSiMemRegion NNSiMemRegion;
struct NNSiMemRegion {
    void *start;
    void *end;
};
static inline NNSiFndExpHeapHead *GetExpHeapHeadPtrFromHeapHead(NNSiFndHeapHead *pHHead) {
    return AddU32ToPtr(pHHead, sizeof(NNSiFndHeapHead));
}
static inline NNSiFndExpHeapHead *GetExpHeapHeadPtrFromHandle(NNSFndHeapHandle heap) {
    return GetExpHeapHeadPtrFromHeapHead(heap);
}
static inline NNSiFndExpHeapMBlockHead *GetMBlockHeadPtr(void *memBlock) {
    return SubU32ToPtr(memBlock, sizeof(NNSiFndExpHeapMBlockHead));
}
extern void func_0207dc64(NNSiMemRegion *region, NNSiFndExpHeapMBlockHead *block);
extern NNSiFndExpHeapMBlockHead *func_0207dc3c(NNSiFndExpMBlockList *list, NNSiFndExpHeapMBlockHead *block);
extern BOOL func_0207d740(NNSiFndExpHeapHead *pEHHead, const NNSiMemRegion *pRegion);
void func_0207d4dc(NNSFndHeapHandle heap, void *memBlock) {
    ((void) 0);

    {
        NNSiFndHeapHead *pHeapHd          = heap;
        NNSiFndExpHeapHead *pExpHeapHd    = GetExpHeapHeadPtrFromHandle(pHeapHd);
        NNSiFndExpHeapMBlockHead *pMBHead = GetMBlockHeadPtr(memBlock);
        NNSiMemRegion region;

        ((void) 0);

        func_0207dc64(&region, pMBHead);
        (void) func_0207dc3c(&pExpHeapHd->mbUsedList, pMBHead);
        (void) func_0207d740(pExpHeapHd, &region);
    }
}
