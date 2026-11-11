/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02032288 from projets/code-lyoko/src/donor/func_02032288.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
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
typedef struct NNSiFndFrmHeapState NNSiFndFrmHeapState;
struct NNSiFndFrmHeapState {
    u32 tagName;
    void *headAllocator;
    void *tailAllocator;
    NNSiFndFrmHeapState *pPrevState;
};
typedef struct NNSiFndFrmHeapHead NNSiFndFrmHeapHead;
struct NNSiFndFrmHeapHead {
    void *headAllocator;
    void *tailAllocator;
    NNSiFndFrmHeapState *pState;
};
extern void *func_0207de9c(NNSFndHeapHandle heap, u32 size, int alignment);
typedef u32 NNSiUIntPtr;
inline NNSiUIntPtr NNSiGetUIntPtr(const void *ptr) {
    return (NNSiUIntPtr) ptr;
}
inline void *AddU32ToPtr(void *ptr, u32 val) {
    return (void *) (NNSiGetUIntPtr(ptr) + val);
}
static inline NNSiFndFrmHeapHead *GetFrmHeapHeadPtrFromHeapHead(NNSiFndHeapHead *pHHead) {
    return AddU32ToPtr(pHHead, sizeof(NNSiFndHeapHead));
}
extern void *func_0207e000(NNSiFndFrmHeapHead *pFrmHeapHd, u32 size, int alignment);
extern void *func_0207df84(NNSiFndFrmHeapHead *pFrmHeapHd, u32 size, int alignment);
void *func_0207de9c(NNSFndHeapHandle heap, u32 size, int alignment) {
    void *memory = 0;
    NNSiFndFrmHeapHead *pFrmHeapHd;

    ((void) 0);

    ((void) 0);
    ((void) 0);

    pFrmHeapHd = GetFrmHeapHeadPtrFromHeapHead(heap);

    if (size == 0) {
        size = 1;
    }

    size = (((size) + (4 - 1)) & ~(4 - 1));

    if (alignment >= 0) {
        memory = func_0207e000(pFrmHeapHd, size, alignment);
    } else {
        memory = func_0207df84(pFrmHeapHd, size, -alignment);
    }

    return memory;
}
