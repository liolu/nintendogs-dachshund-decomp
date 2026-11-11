/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209b878 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0209b878.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed short s16;
typedef signed int s32;
typedef struct {
    s32 count;
    u8 pad4[6];
    u16 used;
    u8 padc[12];
    void *slot[16];
} Pool;
s32 func_020ea668(Pool *p) {
    s16 i;
    u16 mask;

    for (i = 0; i < p->count; i++) {
        mask = 1 << i;
        if (p->slot[i] == 0 && (p->used & mask) == 0) {
            p->used |= mask;
            return i;
        }
    }
    return -1;
}
