#include "m2c.h"

typedef struct {
    u8 pad[0x294];
} PsgCh;

extern void *data_02159e70;

static inline PsgCh * GetPsgCh(s32 idx) {
    return (PsgCh *) ((u8 *) data_02159e70 + 0x1DEC) + idx;
}

extern u8 data_021455e0[];
extern u8 data_021455ec[];
extern u8 data_021455f8[];
extern u8 data_02145608[];
s32 func_020e7ec4(s32, u8 *);
void func_020ec328(s32, void *);
void func_020ec134(s32, void *);
void *func_02006b68(void *);
void func_020eb128(s32 arg0) {
    s32 a;
    s32 b;
    s32 c;
    s32 d;

    a = func_020e7ec4(arg0, data_021455e0);
    b = func_020e7ec4(arg0, data_021455ec);
    c = func_020e7ec4(arg0, data_021455f8);
    d = func_020e7ec4(arg0, data_02145608);

    {
        PsgCh *q = GetPsgCh(3);

        if (a == 0) {
            M2C_FIELD(q, s32 *, 4) = 0;
        } else {
            M2C_FIELD(q, s32 *, 4) = a;
        }
    }
    func_020ec328(3, (void *) b);

    {
        PsgCh *q = GetPsgCh(3);

        if (d == 0) {
            M2C_FIELD(q, s32 *, 0x10) = 0;
            M2C_FIELD(q, s32 *, 0) = 0;
        } else {
            M2C_FIELD(q, s32 *, 0x10) = M2C_FIELD(func_02006b68((void *) d), s32 *, 0xC);
            M2C_FIELD(q, s32 *, 0) = 1;
        }
    }
    func_020ec134(3, (void *) c);

    {
        PsgCh *q = GetPsgCh(1);

        if (a == 0) {
            M2C_FIELD(q, s32 *, 4) = 0;
        } else {
            M2C_FIELD(q, s32 *, 4) = a;
        }
    }
    func_020ec328(1, (void *) b);

    {
        PsgCh *q = GetPsgCh(1);

        if (d == 0) {
            M2C_FIELD(q, s32 *, 0x10) = 0;
            M2C_FIELD(q, s32 *, 0) = 0;
        } else {
            M2C_FIELD(q, s32 *, 0x10) = M2C_FIELD(func_02006b68((void *) d), s32 *, 0xC);
            M2C_FIELD(q, s32 *, 0) = 1;
        }
    }
    func_020ec134(1, (void *) c);
}
