#include "m2c.h"

extern void *data_02159e70;

s32 func_020d640c(s32, s32, s32, s32);
void func_020da82c(s32, s32, s32, s32, s32, s32);
void func_020da98c(s32, s32, s32, s32, s32);
void func_020daae8();
void func_020e8544(s32, s32, s32, s32, s32);

void func_020d9e64(s32 arg0, s32 arg1) {
    s32 n;
    s8 *r;
    s8 *q;
    u16 id3;
    u16 id;
    u16 id2;
    s32 handle;

    q = (s8 *) data_02159e70 + 0xC4;
    id3 = arg0 + 0xF;
    id = arg0;
    id2 = arg0 + 6;
    if (arg1 < 0 || arg1 >= 0x46) {
        arg1 = 0;
    }
    r = q + 0x6C + arg1 * 0x20;
    n = *(u16 *) (r + 0xC);
    {
        u16 buf[4] = {0};
        handle = func_020d640c(2, 0, *(u16 *) (r + 6), 0);
        func_020daae8(0, id);
        func_020da98c(0, M2C_FIELD(data_02159e70, s32 *, 0x232C), id, id2, handle);
        buf[0] = 0x78;
        buf[1] = n / 10 % 10 + 0x30;
        buf[2] = n % 10 + 0x30;
        buf[3] = 0;
        func_020da82c(0, M2C_FIELD(data_02159e70, s32 *, 0x232C), id, id, (s32) buf, 7);
    }
    func_020e8544(M2C_FIELD(q, s32 *, 0), 2, id3, M2C_FIELD(r, s32 *, 8), arg0 + 8);
}
