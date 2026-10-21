#include "m2c.h"

typedef struct {
    s32 quotient;
    s32 remainder;
} DivMod;

extern u16 data_02144f68[];
void func_020dab90(s32 a0, s32 a1, s32 a2);
void func_020dae20(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5);
DivMod func_0205df50(s32 a0, s32 a1);
void func_020ebc18(s32 a0, s32 a1, s32 a2, s32 a3);
void func_020ebbdc(s32 a0, s32 a1, s32 a2, s32 a3);

void func_020e65dc(void *arg0) {
    s32 i;
    s32 j;
    s32 idx;
    u16 id;
    s32 cnt;
    s32 lim;
    u16 h;
    s32 x;

    *(u16 *)((u8 *)arg0 + 0x32) = 1;
    func_020dab90(0, *(s32 *)((u8 *)arg0 + 0x10), 0);
    for (i = 0; i < 2; i++) {
        idx = i * 13;
        for (j = 0, x = 2; j < 13; j++, idx++, x += 0x10) {
            id = data_02144f68[idx];
            if (id == 0) {
                i = 2;
                break;
            }
            func_020dae20(0, *(s32 *)((u8 *)arg0 + 0x10), x, (i << 4) + 5, id, 1);
        }
    }
    lim = *(s32 *)((u8 *)arg0 + 0x874) - 2;
    cnt = *(u16 *)((u8 *)arg0 + 0x30);
    if (cnt >= lim) {
        cnt = lim;
    }
    h = *(u16 *)((u8 *)arg0 + 0x880);
    *(u16 *)((u8 *)arg0 + 0x882) = (*(u16 *)((u8 *)arg0 + 0x878) << 3) + ((u32)(cnt % h) << 16 >> 12);
    *(u16 *)((u8 *)arg0 + 0x884) = (*(u16 *)((u8 *)arg0 + 0x87a) << 3) + ((u32)(cnt / h) << 16 >> 12) + 3;
    func_020ebc18(2, 0xE, 0, 0);
    func_020ebbdc(2, 0xE, *(s16 *)((u8 *)arg0 + 0x882), *(s16 *)((u8 *)arg0 + 0x884));
}
