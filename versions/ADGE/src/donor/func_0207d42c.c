/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020686ac from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/fnd/fnd_expheap.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef struct UnkFndLink {
    void *unk_00;
    void *unk_04;
} UnkFndLink;
typedef struct UnkFndList {
    void *unk_00;
    void *unk_04;
    u16 unk_08;
    u16 unk_0a;
} UnkFndList;
typedef struct UnkFndHeapHead {
    u32 unk_00;
    UnkFndLink unk_04;
    UnkFndList unk_0c;
    void *unk_18;
    void *unk_1c;
    u32 unk_20;
} UnkFndHeapHead;
typedef struct UnkExpMBlock {
    u16 unk_00;
    u16 unk_02;
    u32 unk_04;
    struct UnkExpMBlock *unk_08;
    struct UnkExpMBlock *unk_0c;
} UnkExpMBlock;
typedef struct UnkExpMBlockList {
    UnkExpMBlock *unk_00;
    UnkExpMBlock *unk_04;
} UnkExpMBlockList;
typedef struct UnkExpHeapHead {
    UnkExpMBlockList unk_00;
    UnkExpMBlockList unk_08;
    u16 unk_10;
    u16 unk_12;
} UnkExpHeapHead;
typedef struct UnkExpHeap {
    UnkFndHeapHead unk_00;
    UnkExpHeapHead unk_24;
} UnkExpHeap;
static inline void *GetMemPtrForMBlock(UnkExpMBlock *block) {
    return (void *) ((u32) block + sizeof(UnkExpMBlock));
}
extern int func_0205e878(int);
u32 func_0207d42c(UnkExpHeap *heap, int alignment) {
    u32 maxSize;
    u32 offsetMin;
    UnkExpMBlock *block;

    alignment = func_0205e878(alignment);
    maxSize   = 0;
    offsetMin = 0xffffffff;
    for (block = heap->unk_24.unk_00.unk_00; block != 0; block = block->unk_0c) {
        void *mem         = GetMemPtrForMBlock(block);
        void *baseAddress = (void *) ((((alignment) -1) + (u32) (mem)) & ~((alignment) -1));
        void *memEnd      = (void *) (block->unk_04 + (u32) mem);

        if ((u32) baseAddress < (u32) memEnd) {
            u32 blockSize = (u32) memEnd - (u32) baseAddress;
            u32 offset    = (u32) baseAddress - (u32) mem;

            if (maxSize < blockSize || (maxSize == blockSize && offsetMin > offset)) {
                maxSize   = blockSize;
                offsetMin = offset;
            }
        }
    }
    return maxSize;
}
