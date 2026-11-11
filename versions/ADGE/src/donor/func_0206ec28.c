/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0206470c from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0206/func_0206470c.c (license: MIT), reused
 * by tools/donor_match.py */
typedef struct BitmapFind {
    int field0;
    int max;
    int result;
    int current;
    int pad10;
    unsigned int *bits;
} BitmapFind;
int func_0206ec28(BitmapFind *self) {
    int idx = self->current + 1;
    int start;
    int bit;
    unsigned int *word;
    if (idx >= self->max) {
        idx = 0;
    }
    word  = self->bits + (idx >> 5);
    start = idx;
    bit   = idx & 0x1f;
    for (;;) {
        if (!(*word & (1 << bit))) {
            goto found;
        }
        idx++;
        if (idx >= self->max) {
            goto wrap;
        }
        bit++;
        if (bit > 0x1f) {
            bit = 0;
            word++;
        }
        goto check;
    wrap:
        idx  = 0;
        bit  = 0;
        word = self->bits;
    check:
        if (idx == start) {
            goto fail;
        }
    }
found:
    self->result = idx;
    return idx;
fail:
    return -1;
}
