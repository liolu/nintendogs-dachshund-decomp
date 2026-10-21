#include "m2c.h"

typedef struct {
    s32 f[3];
} Blk3;

typedef struct {
    s32 f[6];
} Blk6;

void func_01ff832c(s32, void *, void *, void *);
void func_01ff810c(void *, void *, void *);
void func_020271d8(void *, void *, s32);

void func_02033c98(u8 *arg0) {
    s32 buf[6];
    s32 work[12];

    if ((*(s8 *) (arg0 + 0x8B) == 2 || *(s16 *) (arg0 + 0xEA) == 0x4EC)
        && (*(s8 *) (arg0 + 0x95) == 0 || *(s8 *) (arg0 + 0x95) == 4)) {
        func_01ff832c(0x8000, arg0 + 0x1A4, arg0 + 0x3B4, arg0 + 0x3A8);
        func_01ff832c(-0x8000, arg0 + 0x198, arg0 + 0x3A8, arg0 + 0x3A8);
        *(Blk3 *) (arg0 + 0x39C) = *(Blk3 *) (arg0 + 0x3A8);
    } else {
        func_020271d8(arg0, work, 0xB);
        func_01ff810c(work, arg0 + 0x1E0, work);
        buf[0] = work[0];
        buf[1] = work[1];
        buf[2] = work[2];
        buf[3] = work[3];
        buf[4] = work[4];
        buf[5] = work[5];
        func_01ff832c(0x800, buf, arg0 + 0x3B4, arg0 + 0x3A8);
        func_01ff832c(0x400, buf + 3, arg0 + 0x3A8, arg0 + 0x3A8);
        func_01ff832c(-0x800, buf, arg0 + 0x3B4, arg0 + 0x39C);
        func_01ff832c(-0x400, buf + 3, arg0 + 0x39C, arg0 + 0x39C);
    }
}
