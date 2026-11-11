/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0207f4a0 from projets/nintendogs-dachshund/src/donor/func_0207f4a0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
struct S57f38 {
    char pad84[0x84];
    unsigned char *base;
    int pad88[1];
    int idx;
};
void func_0207fae8(struct S57f38 *c, int v) {
    c->idx                      = v;
    *(int *) (c->base + c->idx) = 0x597dfbd9;
}
