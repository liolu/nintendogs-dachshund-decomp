/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* FrameHeap_AllocFromTail from https://github.com/sturmds/advance-wars-dual-strike-decomp
 * src/game/main/mem/frame_heap_alloc_from_tail.c (license: CC0-1.0), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef struct ListLink {
    void *prev;
    void *next;
} ListLink;
typedef struct LinkList {
    void *head;
    void *tail;
    u16 count;
    u16 linkOffset;
} LinkList;
typedef struct HeapHead {
    u32 signature;
    ListLink link;
    LinkList children;
    void *start;
    void *end;
    u32 options;
} HeapHead;
typedef struct HeapRegion {
    void *start;
    void *end;
} HeapRegion;
typedef struct FrameHeapState {
    u32 tag;
    void *head;
    void *tail;
    struct FrameHeapState *prev;
} FrameHeapState;
typedef struct FrameHeapData {
    HeapRegion free;
    FrameHeapState *states;
} FrameHeapData;
typedef struct FrameHeap {
    HeapHead head;
    FrameHeapData data;
} FrameHeap;
extern void *func_0207df84(FrameHeapData *data, u32 size, int align);
extern void func_0206cbf8(u32 value, void *dest, u32 size);
void *func_0207df84(FrameHeapData *data, u32 size, int align) {
    void *oldEnd = data->free.end;
    u32 start    = ~(align - 1) & ((u32) oldEnd - size);
    volatile u32 fill;
    u32 fillSize;

    if (start < (u32) data->free.start) {
        return ((void *) 0);
    }
    fillSize = (u32) oldEnd - start;

    if ((u16) (((FrameHeap *) ((u32) data - sizeof(HeapHead)))->head.options & 0xFF) & 1) {
        fill = 0;
        func_0206cbf8(fill, (void *) start, fillSize);
    }
    data->free.end = (void *) start;
    return (void *) start;
}
