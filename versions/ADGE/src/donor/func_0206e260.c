/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02063d3c from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0206/func_02063d3c.c (license: MIT), reused
 * by tools/donor_match.py */
extern int func_0206ef44(int off, unsigned short v, unsigned char b);
#pragma opt_propagation off
int func_0206e260(char *c, int idx, int arg2) {
    unsigned char *base = (unsigned char *) (c + 0x1d4 + idx * 0x68);
    unsigned short mask = (unsigned short) (1 << idx);
    int ret             = 0;
    if (base[0] != 2) {
        return ret;
    }
    if (base[1] != 0xa) {
        return ret;
    }
    ret     = func_0206ef44(arg2, mask, base[2]);
    base[0] = 1;
    return ret;
}
