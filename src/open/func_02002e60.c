#include "m2c.h"

typedef struct Unk02002e60 {
    u8 unk00[4];
    s32 unk04;
    void *unk08;
    void *unk0C;
    void *unk10;
    void *unk14;
    void *unk18;
} Unk02002e60;

extern void *data_0214cd58;
s32 func_02002ff8(void);
s32 func_02002fe8(void);
s32 func_0200360c(s32);
void func_02003718(s32);
void func_02088760(s32, s32);
void func_0208870c(s32, s32);
s32 func_02002e60(u8 *arg0, s32 arg1) {
    u8 *ctx;
    s32 old0c;
    s32 old10;
    s32 old14;
    s32 result;

    *(void **) (arg0 + 0x18) = data_0214cd58;
    ctx                      = *(u8 **) (arg0 + 0x18);
    if (ctx != NULL) {
        old0c = *(s32 *) (ctx + 0xc);
        old10 = *(s32 *) (ctx + 0x10);
        old14 = *(s32 *) (ctx + 0x14);
    } else {
        old0c = func_02002ff8();
        old10 = func_02002fe8();
        old14 = 0;
    }
    *(s32 *) (arg0 + 0xc) = func_0200360c(old0c);
    if (old10 == 0) {
        *(s32 *) (arg0 + 0x10) = 0;
    } else {
        *(s32 *) (arg0 + 0x10) = func_0200360c(old10);
    }
    if (old14 == 0) {
        *(s32 *) (arg0 + 0x14) = 0;
    } else {
        *(s32 *) (arg0 + 0x14) = func_0200360c(old14);
    }
    data_0214cd58 = arg0;
    if (*(s32 *) (arg0 + 0x4) != -1) {
        func_02088760(0, *(s32 *) (arg0 + 0x4));
    }
    result = ((s32 (*)(s32)) * (void **) (arg0 + 0x8))(arg1);
    if (*(s32 *) (arg0 + 0x4) != -1) {
        func_0208870c(0, *(s32 *) (arg0 + 0x4));
    }
    data_0214cd58 = *(void **) (arg0 + 0x18);
    func_02003718(*(s32 *) (arg0 + 0xc));
    *(s32 *) (arg0 + 0xc) = 0;
    if (*(s32 *) (arg0 + 0x10) != 0) {
        func_02003718(*(s32 *) (arg0 + 0x10));
        *(s32 *) (arg0 + 0x10) = 0;
    }
    if (*(s32 *) (arg0 + 0x14) != 0) {
        func_02003718(*(s32 *) (arg0 + 0x14));
        *(s32 *) (arg0 + 0x14) = 0;
    }
    return result;
}
