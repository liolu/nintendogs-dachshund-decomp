/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02070018 from projets/nintendogs-dachshund/src/donor/func_02070018.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
struct Node65 {
    int key;
    char pad[0x24];
    struct Node65 *next;
};
extern struct Node65 *func_0207145c(void);
s32 func_02071410(s32 arg0) {
    s32 *node = (s32 *) func_0207145c();
    while (node != 0) {
        if (node[0] == arg0) {
            return (s32) node;
        }
        node = (s32 *) node[0x28 / 4];
    }
    return 0;
}
