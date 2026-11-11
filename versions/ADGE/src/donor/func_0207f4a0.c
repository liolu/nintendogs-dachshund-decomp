/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02057f38 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0205/func_02057f38.c (license: MIT), reused
 * by tools/donor_match.py */
struct S57f38 {
    char pad84[0x84];
    unsigned char *base;
    int pad88[1];
    int idx;
};
void func_0207f4a0(struct S57f38 *c, int v) {
    c->idx                      = v;
    *(int *) (c->base + c->idx) = 0x597dfbd9;
}
