/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* NNS_SndHeapLoadState from https://github.com/sturmds/advance-wars-dual-strike-decomp
 * src/game/main/sound/nns_snd_heap_load_state.c (license: CC0-1.0), reused by tools/donor_match.py */
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
extern void *func_0207d024(LinkList *list, void *object);
extern void func_0207d050(LinkList *list, void *object);
extern void func_020721a0(void *heap, int level);
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
extern BOOL func_02072100(SoundHeap *heap);
extern int func_0207dd68(void *frameHeap, int level);
extern int func_0207ddc4(void *frameHeap, int level);
extern void func_020720dc(void);
extern int func_02072100(SoundHeap *heap);
extern void func_02072340(SoundHeap *heap);
void func_020721a0(void *heapArg, int level) {
    SoundHeap *heap = heapArg;
    LinkList *saved;
    SoundHeapItem *item = ((void *) 0);

    if (level == 0) {
        func_02072340(heap);
        return;
    }
    if (level < heap->levels.count) {
        LinkList *levels = &heap->levels;
        void *none       = item;

        do {
            saved = func_0207d024(levels, none);
            item  = func_0207d024(saved, item);
            while (item != ((void *) 0)) {
                if (item->onUnload != ((void *) 0)) {
                    item->onUnload(item->payload, item->unk_08, item->unk_10, item->unk_14);
                }
                item = func_0207d024(saved, item);
            }
            func_0207d050(levels, saved);
        } while (level < heap->levels.count);
    }
    func_0207dd68(heap->frameHeap, level);
    func_020720dc();
    func_0207ddc4(heap->frameHeap, heap->levels.count);
    func_02072100(heap);
}
