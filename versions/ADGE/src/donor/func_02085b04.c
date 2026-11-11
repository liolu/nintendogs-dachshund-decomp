/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ff8a8 from https://github.com/banatic/acww-decomp src/autoload_2/func_020ff8a8.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
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
Node *func_02085b04(List *list) {
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
