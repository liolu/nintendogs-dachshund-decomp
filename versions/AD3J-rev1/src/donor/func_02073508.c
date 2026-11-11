/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020721a0 from projets/nintendogs-dachshund/src/donor/func_020721a0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int BOOL;
typedef struct LinkList {
    void *head;
    void *tail;
    u16 count;
    u16 linkOffset;
} LinkList;
extern void *func_0207d66c(LinkList *list, void *object);
extern void func_0207d698(LinkList *list, void *object);
extern void func_02073508(void *heap, int level);
typedef struct SoundHeapItem {
    u8 pad_00[8];
    u32 unk_08;
    void (*onUnload)(void *payload, u32 arg1, u32 arg2, u32 arg3);
    u32 unk_10;
    u32 unk_14;
    u8 pad_18[8];
    u8 payload[1];
} SoundHeapItem;
typedef struct SoundHeap {
    void *frameHeap;
    LinkList levels;
} SoundHeap;
extern BOOL func_02073468(SoundHeap *heap);
extern int func_0207e3b0(void *frameHeap, int level);
extern int func_0207e40c(void *frameHeap, int level);
extern void func_02073444(void);
extern int func_02073468(SoundHeap *heap);
extern void func_020736a8(SoundHeap *heap);
void func_02073508(void *heapArg, int level) {
    SoundHeap *heap = heapArg;
    LinkList *saved;
    SoundHeapItem *item = ((void *) 0);

    if (level == 0) {
        func_020736a8(heap);
        return;
    }
    if (level < heap->levels.count) {
        LinkList *levels = &heap->levels;
        void *none       = item;

        do {
            saved = func_0207d66c(levels, none);
            item  = func_0207d66c(saved, item);
            while (item != ((void *) 0)) {
                if (item->onUnload != ((void *) 0)) {
                    item->onUnload(item->payload, item->unk_08, item->unk_10, item->unk_14);
                }
                item = func_0207d66c(saved, item);
            }
            func_0207d698(levels, saved);
        } while (level < heap->levels.count);
    }
    func_0207e3b0(heap->frameHeap, level);
    func_02073444();
    func_0207e40c(heap->frameHeap, heap->levels.count);
    func_02073468(heap);
}
