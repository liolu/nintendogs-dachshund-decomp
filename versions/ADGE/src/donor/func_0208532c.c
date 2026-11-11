/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0204d150 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0204/func_0204d150.c (license: MIT), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
#pragma opt_strength_reduction off
void func_0208532c(char *r0, char *r1, int r2) {
    u8 *t = *((u8 **) (r1 + 0x10));
    int i = 0;
    int acc;
    int count = t[8];
    u8 width;
    int new_var;
    if (count <= (new_var = 0)) {
        return;
    }
    width = t[9];
    acc   = 0;
    do {
        if (r2 < (acc + width)) {
            r0[0x42] = t[i];
            return;
        }
        i++;
        acc += width;
    } while (i < t[8]);
}
