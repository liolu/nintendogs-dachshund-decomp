/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02085b04 from projets/nintendogs-dachshund/src/donor/func_02085b04.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef struct Node Node;
typedef struct List List;
struct Node {
    Node *next;
    Node *prev;
};
struct List {
    Node *head;
    int count;
};
Node *func_0208927c(List *list) {
    Node *ret = 0;
    Node *node;
    if ((node = list->head) != 0) {
        ret        = node;
        list->head = node->next;
        if (list->head) {
            node->next->prev = 0;
        }
        list->count--;
    }
    return ret;
}
