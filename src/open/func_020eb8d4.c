#include "m2c.h"

extern void *data_02159e70;
extern s32 func_02085d64(s32, s32);
extern s32 func_02085d3c(s32, s32);

typedef struct {
    u32 word0;
    u32 : 12;
    u32 nibble : 4;
    u32 : 16;
    u32 word2;
} UnkElem;

void func_020eb8d4(s32 arg0, volatile u16 *arg1, s32 arg2) {
    u8 *elem;
    s32 count;
    s32 idx;
    u8 *p;
    s32 i;
    u16 n;

    while (*arg1 != 0xFFFF) {
        elem = (u8 *) data_02159e70 + 0x1DEC + arg0 * 0x294;
        n = *arg1;
        idx = M2C_FIELD(M2C_FIELD(elem, s32 *, 8) + n * 8, s32 *, 0xC);
        count = func_02085d64(M2C_FIELD(elem, s32 *, 0xC), idx);
        p = (u8 *) func_02085d3c(M2C_FIELD((u8 *) data_02159e70 + arg0 * 0x294 + 0x1000, s32 *, 0xDF8), idx);

        for (i = 0; i < count; i++) {
            ((UnkElem *) p)->nibble = arg2;
            p += 0xC;
        }
        arg1++;
    }
}
