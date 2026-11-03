/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020320b8 from projets/code-lyoko/src/auto/func_020320b8.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
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
extern UnkFndList data_021532c4;
extern UnkFndHeapHead *func_0207d984(UnkFndList *list, const void *memBlock);
UnkFndList *func_0207d958(void *heap) {
    UnkFndList *list            = &data_021532c4;
    UnkFndHeapHead *containHeap = func_0207d984(list, heap);

    if (containHeap != 0) {
        list = &containHeap->unk_0c;
    }
    return list;
}
