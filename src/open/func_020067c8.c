#include "m2c.h"
extern s32 data_0214d62c;
extern u8 data_0214d630[];
extern u8 *data_0214d628;
void func_02002ff8(void);
s32 func_02002e50(void);
s32 func_02002e48(void);
void func_02002e40(s32);
void func_020037f4(s32);
s32 func_02003798(s32 *, s16);
u16 func_0207d41c(u32 arg0, u16 arg1);
u8 *func_020038a8(s32 arg0, s32 size);
void func_02005f74(void);
void func_020067c8(void) {
    s32 a;
    s32 b;
    u16 i;

    func_02002ff8();
    a = func_02002e50();
    b = func_02002e48();
    func_02002e40(a);
    func_020037f4(b);

    for (i = 0; i < 8; i++) {
        ((s32 (*)(s32 *, u16)) func_02003798)((s32 *) data_0214d62c,
                                              *(u16 *) (data_0214d630 + i * 8 + 4));
    }
    for (i = 0; i < M2C_FIELD(data_0214d628, u16 *, 0x10); i++) {
        ((s32 (*)(s32 *, u16)) func_02003798)(
            (s32 *) b, *(u16 *) (M2C_FIELD(data_0214d628, u8 **, 0x30) + i * 8 + 4));
    }
}
