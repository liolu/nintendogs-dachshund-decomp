#include "m2c.h"

typedef struct {
    u32 unk0;
    u16 unk4;
} Buf;

extern u8 *data_0215a058;
extern u8 *data_0215a044;
void func_02006c64(void *arg0, void *arg1);

void func_02113ac4(void) {
    Buf buf;
    s32 x;
    s32 y;

    if (*(s16 *) (data_0215a058 + 8) == 0) {
        return;
    }
    for (y = 0; y < 0xC0; y += 0x40) {
        for (x = 0; x < 0x100; x += 0x40) {
            buf.unk0 = 0xC0000C00 | (y & 0xFF) | ((x & 0x1FF) << 16);
            buf.unk4 = ((x >> 3) + ((y >> 3) << 5) + 0x100) | 0xFC00;
            func_02006c64(*(void **) (data_0215a044 + 0x10), &buf);
        }
    }
}
