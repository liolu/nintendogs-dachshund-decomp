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
extern u32 func_0207dc90(FrameHeap *heap, void *memBlock, u32 newSize);
extern void func_0206cbf8(u32 value, void *dest, u32 size);

u32 func_0207dc90(FrameHeap *heap, void *memBlock, u32 newSize) {
    FrameHeapData *data = &heap->data;
    u32 newStart;
    u32 oldSize;
    volatile u32 fill;

    newSize = (newSize ?: 1);
    newSize = (newSize + 3) & ~3;
    newStart = newSize + (u32) memBlock;
    oldSize  = (u32) data->free.start - (u32) memBlock;
    if (newSize == oldSize) {
        return newSize;
    }
    if (newSize > oldSize) {
        if ((int) (newStart - (u32) data->free.end) > 0) {
            return 0;
        }
        if ((u16) (heap->head.options & 0xFF) & 1) {
            fill = 0;
            func_0206cbf8(fill, data->free.start, newSize - oldSize);
        }
    }
    data->free.start = (void *) newStart;
    return newSize;
}
