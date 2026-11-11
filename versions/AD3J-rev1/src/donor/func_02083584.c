/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a9b84 from projets/pokemon-dash/src/donor/func_020a9b84.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef void (*CopyFn)(void *self, void *buf, int len);
struct Stream {
    char pad[0x10];
    CopyFn fn;
};
extern unsigned char data_02128f80[];
#pragma optimize_for_size on
void func_02083584(struct Stream *self, unsigned int n) {
    while (n != 0) {
        int chunk = 0x10;
        if (n < 0x10) {
            chunk = n;
        }
        self->fn(self, data_02128f80, chunk);
        n -= chunk;
    }
}
