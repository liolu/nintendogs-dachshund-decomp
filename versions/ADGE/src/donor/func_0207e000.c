/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* FrameHeap_AllocFromHead from https://github.com/sturmds/advance-wars-dual-strike-decomp
 * src/game/main/mem/frame_heap_alloc_from_head.c (license: CC0-1.0), reused by tools/donor_match.py */
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
extern void *func_0207e000(FrameHeapData *data, u32 size, int align);
extern void func_0206cbf8(u32 value, void *dest, u32 size);
void *func_0207e000(FrameHeapData *data, u32 size, int align) {
    void *oldStart = data->free.start;
    u32 start      = ((align - 1) + (u32) oldStart) & ~(align - 1);
    u32 newStart   = size + start;
    volatile u32 fill;
    u32 fillSize;

    if (newStart > (u32) data->free.end) {
        return ((void *) 0);
    }
    fillSize = newStart - (u32) oldStart;

    if ((u16) (((FrameHeap *) ((u32) data - sizeof(HeapHead)))->head.options & 0xFF) & 1) {
        fill = 0;
        func_0206cbf8(fill, oldStart, fillSize);
    }
    data->free.start = (void *) newStart;
    return (void *) start;
}
