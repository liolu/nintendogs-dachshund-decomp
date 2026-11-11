/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0207db64 from projets/nintendogs-shiba-friends/src/donor/func_0207db64.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int BOOL;
typedef struct MBlockHead {
    u16 signature;
    u16 attribute;
    u32 blockSize;
    struct MBlockHead *pMBHeadPrev;
    struct MBlockHead *pMBHeadNext;
} MBlockHead;
typedef struct {
    MBlockHead *head;
    MBlockHead *tail;
} MBlockList;
typedef struct {
    MBlockList mbFreeList;
    MBlockList mbUsedList;
    u16 groupID;
    u16 feature;
} ExpHeapHead;
typedef struct {
    void *prev;
    void *next;
} Link;
typedef struct {
    void *headObject;
    void *tailObject;
    u16 numObjects;
    u16 offset;
} List;
typedef struct {
    u32 signature;
    Link link;
    List childList;
    void *heapStart;
    void *heapEnd;
    u32 attribute;
} HeapHead;
typedef HeapHead *HeapHandle;
typedef struct {
    void *start;
    void *end;
} MemRegion;
extern void func_0207e2ac(MemRegion *region, MBlockHead *block);
extern MBlockHead *func_0207e284(MBlockList *list, MBlockHead *block);
extern MBlockHead *func_0207e224(MemRegion *region, u16 signature);
extern MBlockHead *func_0207e254(MBlockList *list, MBlockHead *target, MBlockHead *prev);
extern void func_0206dff0(u32 data, void *destp, u32 size);
extern BOOL func_0207dd88(ExpHeapHead *pEHHead, MemRegion *region);
static inline u32 NNSiGetUIntPtr(const void *ptr) {
    return (u32) ptr;
}
static inline void *AddU32ToPtr(void *ptr, u32 val) {
    return (void *) (NNSiGetUIntPtr(ptr) + val);
}
static inline ExpHeapHead *GetExpHeapHeadPtrFromHandle(HeapHandle heap) {
    return (ExpHeapHead *) ((u8 *) heap + sizeof(HeapHead));
}
static inline MBlockHead *GetMBlockHeadPtr(void *memBlock) {
    return (MBlockHead *) ((u8 *) memBlock - sizeof(MBlockHead));
}
static inline u32 GetOffsetFromPtr(const void *start, const void *end) {
    return NNSiGetUIntPtr(end) - NNSiGetUIntPtr(start);
}
static inline void *GetMemPtrForMBlock(MBlockHead *pMBlkHd) {
    return AddU32ToPtr(pMBlkHd, sizeof(MBlockHead));
}
static inline void *GetMBlockEndAddr(MBlockHead *pMBHead) {
    return AddU32ToPtr(GetMemPtrForMBlock(pMBHead), pMBHead->blockSize);
}
static inline MBlockHead *InitFreeMBlock(MemRegion *pRegion) {
    return func_0207e224(pRegion, 0x4652);
}
static inline u16 GetOptForHeap(HeapHandle heap) {
    return (u16) (heap->attribute & 0xff);
}
static inline void MI_CpuFill32(void *dest, u32 data, u32 size) {
    func_0206dff0(data, dest, size);
}
static inline void FillAllocMemory(HeapHandle heap, void *address, u32 size) {
    if (GetOptForHeap(heap) & 1) {
        volatile u32 val = 0;
        MI_CpuFill32(address, val, size);
    }
}
u32 func_0207db64(HeapHandle heap, void *memBlock, u32 size) {
    ExpHeapHead *pEHHead;
    MBlockHead *pMBHead;

    pEHHead = GetExpHeapHeadPtrFromHandle(heap);
    pMBHead = GetMBlockHeadPtr(memBlock);

    size = (size + 3) & ~3;
    if (size == pMBHead->blockSize) {
        return size;
    }

    if (size > pMBHead->blockSize) {
        void *crUsedEnd = GetMBlockEndAddr(pMBHead);
        MBlockHead *block;

        for (block = pEHHead->mbFreeList.head; block; block = block->pMBHeadNext) {
            if (block == crUsedEnd) {
                break;
            }
        }

        if (!block || size > pMBHead->blockSize + sizeof(MBlockHead) + block->blockSize) {
            return 0;
        }

        {
            MemRegion rgnNewFree;
            void *oldFreeStart;
            MBlockHead *nextBlockPrev;

            func_0207e2ac(&rgnNewFree, block);
            nextBlockPrev = func_0207e284(&pEHHead->mbFreeList, block);

            oldFreeStart     = rgnNewFree.start;
            rgnNewFree.start = AddU32ToPtr(memBlock, size);

            if (GetOffsetFromPtr(rgnNewFree.start, rgnNewFree.end) < sizeof(MBlockHead)) {
                rgnNewFree.start = rgnNewFree.end;
            }

            pMBHead->blockSize = GetOffsetFromPtr(memBlock, rgnNewFree.start);

            if (GetOffsetFromPtr(rgnNewFree.start, rgnNewFree.end) >= sizeof(MBlockHead)) {
                (void) func_0207e254(&pEHHead->mbFreeList, InitFreeMBlock(&rgnNewFree), nextBlockPrev);
            }

            FillAllocMemory(heap, oldFreeStart, GetOffsetFromPtr(oldFreeStart, rgnNewFree.start));
        }
    } else {
        MemRegion rgnNewFree;
        const u32 oldBlockSize = pMBHead->blockSize;

        rgnNewFree.start = AddU32ToPtr(memBlock, size);
        rgnNewFree.end   = GetMBlockEndAddr(pMBHead);

        pMBHead->blockSize = size;

        if (!func_0207dd88(pEHHead, &rgnNewFree)) {
            pMBHead->blockSize = oldBlockSize;
        }
    }

    return pMBHead->blockSize;
}
