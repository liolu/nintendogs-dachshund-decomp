/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f2f38 from projets/resident-evil-deadly-silence/src/donor/func_020f2f38.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
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
typedef struct HeapBlock {
    u16 signature;
    u16 attribute;
    u32 size;
    struct HeapBlock *prev;
    struct HeapBlock *next;
} HeapBlock;
typedef struct HeapBlockList {
    HeapBlock *head;
    HeapBlock *tail;
} HeapBlockList;
typedef struct HeapRegion {
    void *start;
    void *end;
} HeapRegion;
typedef struct ExpHeapData {
    HeapBlockList freeBlocks;
    HeapBlockList usedBlocks;
    u16 groupId;
    u16 allocMode;
} ExpHeapData;
typedef struct ExpHeap {
    HeapHead head;
    ExpHeapData data;
} ExpHeap;
extern void *func_0207d9c4(ExpHeapData *data, HeapBlock *freeBlock, void *memory, u32 size, u16 fromTop);
extern HeapBlock *func_0207dbdc(HeapRegion *region, u16 signature);
extern void func_0207dc64(HeapRegion *region, HeapBlock *block);
extern HeapBlock *func_0207dc0c(HeapBlockList *list, HeapBlock *block, HeapBlock *prev);
extern HeapBlock *func_0207dc3c(HeapBlockList *list, HeapBlock *block);
extern void func_0206cbf8(u32 value, void *dest, u32 size);
static inline void HeapBlock_SetFromTop(HeapBlock *block, u16 fromTop) {
    block->attribute &= ~0x8000;
    block->attribute |= (fromTop & 1) << 15;
}
static inline void HeapBlock_SetPadding(HeapBlock *block, u16 padding) {
    block->attribute &= ~0x7F00;
    block->attribute |= (padding & 0x7F) << 8;
}
static inline void HeapBlock_SetGroupId(HeapBlock *block, u8 groupId) {
    block->attribute &= ~0xFF;
    block->attribute |= groupId;
}
void *func_0207d9c4(ExpHeapData *data, HeapBlock *freeBlock, void *memory, u32 size, u16 fromTop) {
    HeapRegion front;
    HeapRegion back;
    HeapRegion used;
    HeapBlock *prev;
    HeapBlock *block;
    volatile u32 fill;
    u32 usedSize;
    u8 *blockStart;

    func_0207dc64(&front, freeBlock);
    blockStart = (u8 *) memory - sizeof(HeapBlock);
    back.end   = front.end;
    front.end  = blockStart;
    back.start = (void *) (size + (u32) memory);

    prev = func_0207dc3c(&data->freeBlocks, freeBlock);

    if ((u32) front.end - (u32) front.start < sizeof(HeapBlock)) {
        front.end = front.start;
    } else {
        prev = func_0207dc0c(&data->freeBlocks, func_0207dbdc(&front, 0x4652), prev);
    }

    if ((u32) back.end - (u32) back.start < sizeof(HeapBlock)) {
        back.start = back.end;
    } else {
        func_0207dc0c(&data->freeBlocks, func_0207dbdc(&back, 0x4652), prev);
    }

    usedSize = (u32) back.start - (u32) front.end;

    if ((u16) (((ExpHeap *) ((u32) data - sizeof(HeapHead)))->head.options & 0xFF) & 1) {
        fill = 0;
        func_0206cbf8(fill, front.end, usedSize);
    }

    used.start = blockStart;
    used.end   = back.start;
    block      = func_0207dbdc(&used, 0x5544);
    HeapBlock_SetFromTop(block, fromTop);
    HeapBlock_SetPadding(block, (u32) block - (u32) front.end);
    HeapBlock_SetGroupId(block, data->groupId);
    func_0207dc0c(&data->usedBlocks, block, data->usedBlocks.tail);
    return memory;
}
