/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0206465c from projets/children-of-mana/src/auto/func_0206465c.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
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
extern void func_0207d7e8(UnkFndList *list, void *obj);
extern void func_0207d7e8(UnkFndList *list, void *obj);
extern void func_0207d784(UnkFndList *list, void *obj);
void func_0207d704(UnkFndList *list, void *target, void *obj) {
    if (target == 0) {
        func_0207d7e8(list, obj);
    } else if (target == list->unk_00) {
        func_0207d784(list, obj);
    } else {
        UnkFndLink *link     = ((UnkFndLink *) ((u32) (obj) + (list)->unk_0a));
        void *prev           = ((UnkFndLink *) ((u32) (target) + (list)->unk_0a))->unk_00;
        UnkFndLink *prevLink = ((UnkFndLink *) ((u32) (prev) + (list)->unk_0a));

        link->unk_00                                               = prev;
        link->unk_04                                               = target;
        prevLink->unk_04                                           = obj;
        ((UnkFndLink *) ((u32) (target) + (list)->unk_0a))->unk_00 = obj;
        list->unk_08++;
    }
}
