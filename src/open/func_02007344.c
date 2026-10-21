#include "m2c.h"
extern u8 data_02124d30[];
extern volatile s32 data_0214cd14;
s32 func_0205df50(s32);
void func_02007344(u8 *arg0, s32 arg1, s32 arg2) {
    s32 step;
    s32 i;
    s32 pitch;
    s32 src;
    s32 count;
    s32 data;
    void (*fn)();

    step = (*(u16 *) (arg0 + 8) == 0) ? 0x20 : 0x40;
    pitch = step * (arg1 + arg2 * 0x20);
    src = *(s32 *) arg0;
    count = *(u16 *) (arg0 + 6) >> 3;
    data = func_0205e15c(*(s32 *) (arg0 + 0x10), count);
    i = 0;
    if (count <= 0) {
        return;
    }
    fn = (void (*)()) ((u32 *) data_02124d30)[2];
    do {
        (*fn)(src, pitch, data);
        src += (*(u16 *) (arg0 + 4) >> 3) * step;
        pitch += step * 0x20;
        i++;
    } while (i < (*(u16 *) (arg0 + 6) >> 3));
}
