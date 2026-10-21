#include "m2c.h"

typedef struct {
    s32 p[3];
    s32 o[3];
} Buf;

extern void *data_0215a048;
s32 func_020a5fcc(void);
void func_020c9bf0(s32 arg0, void *arg1, void *arg2);
void func_0208fc74(s32 arg0, s32 arg1, void *arg2);
void func_021106d8(void) {
    s32 in[3];
    s32 out[3];
    s32 r;
    s32 v;

    M2C_FIELD(M2C_FIELD(M2C_FIELD(data_0215a048, void **, 0), void **, 0x74), s32 *, 0x1C) = 0x1000;
    r = func_020a5fcc();
    v = (s32) M2C_FIELD(data_0215a048, s32 *, 0x10);
    in[0] = 0x5000;
    in[1] = 0x9000;
    in[2] = v;
    func_020c9bf0(r, in, out);
    func_0208fc74(0x31, 2, out);
    v = (s32) M2C_FIELD(data_0215a048, s32 *, 0x10);
    in[0] = -0x6000;
    in[1] = 0;
    in[2] = v;
    func_020c9bf0(r, in, out);
    func_0208fc74(0x31, 3, out);
}
