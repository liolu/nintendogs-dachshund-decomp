#include "m2c.h"

typedef struct {
    s32 d[10];
} S40;

extern s32 data_021402c8;
extern s32 data_021402c4;
extern s32 data_021402cc;
s32 func_020b29bc(s32 arg0);
s32 func_01ffdb08(s32 arg0);
void func_020b34c8(void *arg0, s32 arg1);
void func_02027540(s32 arg0, void *arg1);
s32 func_02068038(void *arg0);
void func_020ba16c(void *arg0, void *arg1, void *arg2, s32 arg3, s32 arg4, s32 arg5);
void func_020b33ac(void *arg0, s32 arg1);
void func_020bd278(void *arg0, void *arg1) {
    /* buffers: sp+8, sp+0x30, sp+0x3c */
    u8 buf8[40];
    u8 buf30[12];
    u8 buf3c[44];
    s32 var_r6;
    s32 v;
    s32 x;

    *(u16 *) ((s8 *) arg0 + 0x5C) = (u16) func_020b29bc(-1);
    var_r6 = func_01ffdb08(*(s16 *) ((s8 *) arg0 + 0x5C));
    func_020b34c8(buf8, *(s16 *) ((s8 *) arg0 + 0x5C));
    func_02027540(var_r6, buf30);
    x = func_02068038(buf30);
    v = data_021402c8 + (s32) (((s64) x * (s64) data_021402c4 + 0x800) >> 12);
    if (v > data_021402cc) {
        v = data_021402cc;
    }
    func_020ba16c((s8 *) arg0 + 8, (s8 *) arg0 + 8, buf8, v, v, 0x400);
    x = *(s32 *) ((s8 *) arg0 + 0x58);
    if (x == 0) {
        *(S40 *) arg1 = *(S40 *) ((s8 *) arg0 + 8);
        return;
    }
    if (x != 1) {
        return;
    }
    func_020b33ac(buf3c, *(s16 *) ((s8 *) arg0 + 0x5C));
    func_020ba16c((s8 *) arg0 + 0x30, (s8 *) arg0 + 0x30, buf3c, 0x1000, 0x1000, 0x20);
    *(S40 *) arg1 = *(S40 *) ((s8 *) arg0 + 0x30);
}
