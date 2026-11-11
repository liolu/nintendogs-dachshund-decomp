/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* SoundHeap_Reset from https://github.com/sturmds/advance-wars-dual-strike-decomp src/game/main/sound/sound_heap_reset.c
 * (license: CC0-1.0), reused by tools/donor_match.py */
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
extern void func_0207de5c(void *frameHeap, int flags);
extern void func_020720dc(void);
void func_02072340(SoundHeap *heap) {
    LinkList *saved;
    SoundHeapItem *item;

    saved = func_0207d024(&heap->levels, ((void *) 0));
    while (saved != ((void *) 0)) {
        item = func_0207d024(saved, ((void *) 0));
        while (item != ((void *) 0)) {
            if (item->onUnload != ((void *) 0)) {
                item->onUnload(item->payload, item->unk_08, item->unk_10, item->unk_14);
            }
            item = func_0207d024(saved, item);
        }
        func_0207d050(&heap->levels, saved);
        saved = func_0207d024(&heap->levels, ((void *) 0));
    }
    func_0207de5c(heap->frameHeap, 3);
    func_020720dc();
    func_02072100(heap);
}
