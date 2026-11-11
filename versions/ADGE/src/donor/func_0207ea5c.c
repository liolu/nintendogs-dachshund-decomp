/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205e7e0 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0205/func_0205e7e0.c (license: MIT), reused
 * by tools/donor_match.py */
extern int func_0207e524(char *c);
int func_0207ea5c(unsigned int *thiz, unsigned char *out) {
    int i;
    unsigned int r;
    if (thiz == 0 || out == 0) {
        return 1;
    }
    r = thiz[0x19];
    if (r != 0) {
        return r;
    }
    if (thiz[0x18] == 0) {
        char *p = (char *) thiz;
        func_0207e524(p);
        for (i = 0; i < 0x40; i++) {
            (p + i)[0x20] = 0;
        }
        thiz[5]    = 0;
        thiz[6]    = 0;
        thiz[0x18] = 1;
    }
    for (i = 0; i < 0x14; i++) {
        unsigned int idx = i >> 2;
        int shift        = (3 - (i & 3)) * 8;
        out[i]           = (unsigned char) (thiz[idx] >> shift);
    }
    return 0;
}
