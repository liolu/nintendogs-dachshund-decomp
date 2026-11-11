/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02060a64 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0206/func_02060a64.c (license: MIT), reused
 * by tools/donor_match.py */
typedef struct {
    unsigned char pad[0x18];
    unsigned int src;
    unsigned int dst;
    unsigned int size;
} CardXferState;
extern CardXferState data_0214e180;
extern void func_020675c8(unsigned int a, unsigned int b);
extern int func_020676e8(char *self);
int func_020672a8(char *self) {
    CardXferState *g = &data_0214e180;
    unsigned int *buf;
    unsigned int *altBuf            = (unsigned int *) (self + 0x20);
    volatile unsigned int *romctrl  = (volatile unsigned int *) 0x40001A4;
    volatile unsigned int *fifoData = (volatile unsigned int *) 0x4100010;
    unsigned int mask               = (unsigned int) -0x200;

    for (;;) {
        unsigned int src     = g->src;
        unsigned int aligned = src & mask;
        unsigned int i;
        unsigned int status;
        unsigned int cmd;

        if (aligned == src && (g->dst & 3) == 0 && g->size >= 0x200) {
            buf = (unsigned int *) g->dst;
        } else {
            buf                          = altBuf;
            *(unsigned int *) (self + 8) = aligned;
        }

        func_020675c8((aligned >> 8) | 0xb7000000, aligned << 0x18);

        cmd      = *(unsigned int *) (self + 4);
        i        = 0;
        *romctrl = cmd;
        do {
            status = *romctrl;
            if (status & 0x800000) {
                unsigned int val = *fifoData;
                if (i < 0x200) {
                    buf[i] = val;
                    i++;
                }
            }
        } while (status & 0x80000000);

        if (buf == (unsigned int *) *(volatile unsigned int *) &data_0214e180.dst) {
            data_0214e180.src += 0x200;
            data_0214e180.dst += 0x200;
            data_0214e180.size -= 0x200;
            if (data_0214e180.size == 0) {
                return data_0214e180.size;
            }
        } else {
            int rc = func_020676e8(self);
            if (rc == 0) {
                return rc;
            }
        }
    }
}
