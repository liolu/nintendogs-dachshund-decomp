#include "m2c.h"

typedef struct {
    u32 unk_0x00;
    u32 unk_0x04;
    u32 unk_0x08;
    u32 unk_0x0c;
    u32 unk_0x10;
    u32 unk_0x14;
    u16 unk_0x18;
} FileReader;

extern FileReader data_0214d5e0;

void func_020062a4(s32 amount, s32 whence);

u32 func_0200615c(void) {
    u32 result;
    u32 bit;
    u8 mask;
    u16 h;
    u8 byte;
    u16 b;

    if (data_0214d5e0.unk_0x08 + data_0214d5e0.unk_0x14 > data_0214d5e0.unk_0x04) {
        return 0;
    }
    if (data_0214d5e0.unk_0x14 == 1) {
        byte = *(u8 *) data_0214d5e0.unk_0x08;
        h = data_0214d5e0.unk_0x18;
        result = 0;
        for (bit = 1, mask = 1; bit < 0x10000; bit <<= 1) {
            b = bit;
            if (b & h) {
                if (mask & byte) {
                    result |= b;
                }
                mask <<= 1;
                if (mask == 0) {
                    break;
                }
            }
        }
    } else {
        result = *(u16 *) data_0214d5e0.unk_0x08;
    }
    func_020062a4(1, 1);
    return result;
}
