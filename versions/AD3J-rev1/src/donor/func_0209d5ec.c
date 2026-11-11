/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020b5918 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020b5918.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef signed short s16;
typedef signed int s32;
s32 func_0209d5ec(u8 *p) {
    s16 sum2  = 0;
    s16 outer = 0;
    u8 *row   = p;
    do {
        s16 j;
        s16 acc;
        acc = 0;
        j   = 0;
        do {
            s32 k = j * 2;
            acc   = (s16) (acc + *(s16 *) (row + k + 0x42));
            j     = (s16) (j + 1);
        } while (j < 5);
        acc += *(s16 *) (p + outer * 2 + 0x60);
        if (acc < 0) {
            acc = 0;
        }
        sum2  = (s16) (sum2 + acc);
        outer = (s16) (outer + 1);
        row   = row + 10;
    } while (outer < 3);
    return (s16) (sum2 / 3);
}
