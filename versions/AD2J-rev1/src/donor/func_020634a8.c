/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0200e104 from projets/children-of-mana/src/auto/func_0200e104.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
struct Node72 {
    struct Node72 *next;
    void (*fn)(void *object, int v);
    void *object;
};
extern struct Node72 *data_0214b9b0;
void func_020634a8(void) {
    struct Node72 *head = data_0214b9b0;
    if (head == 0) {
        return;
    }
    do {
        data_0214b9b0 = head->next;
        head->fn(head->object, -1);
        head = data_0214b9b0;
    } while (head != 0);
}
