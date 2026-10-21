#include "m2c.h"

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} Buf;

extern u16 data_0214d5fc[];
extern s32 data_0213e8f0;
extern s32 data_0213e8f4;
extern s32 data_0213e8fc;
extern s32 data_0213e8f8;
extern void *data_0215a048;
extern void *data_021555fc;
extern void func_020b780c(void *, void *, s32, s32, s32);
void func_020a7af4(void) {
    s32 buf[3];
    u8 *p = (u8 *) data_021555fc;

    switch (*(s16 *) (p + 8)) {
    case 0:
        if ((u16) (*(volatile u16 *) &data_0214d5fc[1] & 0x20)) {
            *(u16 *) p -= 0x100;
        }
        if ((u16) (*(volatile u16 *) &data_0214d5fc[1] & 0x10)) {
            *(u16 *) p += 0x100;
        }
        if ((u16) (*(volatile u16 *) &data_0214d5fc[1] & 0x80)) {
            *(s32 *) (p + 4) -= 0x400;
            if (*(s32 *) (p + 4) < data_0213e8f0) {
                *(s32 *) (p + 4) = data_0213e8f0;
            }
        }
        if ((u16) (*(volatile u16 *) &data_0214d5fc[1] & 0x40)) {
            *(s32 *) (p + 4) += 0x400;
            if (*(s32 *) (p + 4) > data_0213e8f4) {
                *(s32 *) (p + 4) = data_0213e8f4;
            }
        }
        if (*(s32 *) (p + 4) < data_0213e8f0) {
            *(s32 *) (p + 4) = data_0213e8f0;
        }
        if (*(s32 *) (p + 4) > data_0213e8f4) {
            *(s32 *) (p + 4) = data_0213e8f4;
        }
        break;
    case 1:
        *(s32 *) (p + 4) = data_0213e8fc;
        break;
    case 2:
        break;
    }
    buf[0] = 0;
    buf[1] = 0;
    buf[2] = 0;
    func_020b780c((u8 *) data_021555fc + 0xC, buf, data_0213e8f8 + M2C_FIELD(data_0215a048, s32 *, 0xC), 0, *(u16 *) p);
    M2C_FIELD(data_021555fc, s32 *, 0x10) = *(s32 *) (p + 4);
}
