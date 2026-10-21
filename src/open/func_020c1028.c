#define M2C_SELF_func_0206fd48
#include "m2c.h"

M2C_UNK func_0206fd48(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
u64 func_02080978(void);
extern void *data_02156ec0;
extern s32 data_02156ec4[];

void func_020c1028(s32 arg0) {
    s32 temp;

    temp = func_0206ffd0(*(u16 *) (arg0 + 0xA));
    switch (*(s32 *) (arg0 + 4)) {
    case 10:
        switch (*(u8 *) (arg0 + 0x14)) {
        case 1:
            M2C_FIELD(data_02156ec0, s32 *, 0x124) = 1;
            break;
        case 2:
            M2C_FIELD(data_02156ec0, s32 *, 0x124) = 2;
            break;
        }
        break;
    case 8:
        if (*(u32 *) (arg0 + 0x14) < 0x3E8) {
            break;
        }
        M2C_FIELD(data_02156ec0, s32 *, 4) = 0;
        M2C_FIELD(data_02156ec0, s32 *, 0x10C) = 1;
        break;
    case 3:
        if (func_020bee78() != 0) {
            M2C_FIELD(data_02156ec0, s16 *, 0x12E) = *(s16 *) (arg0 + 0x14);
            M2C_FIELD(data_02156ec0, s16 *, 0x130) = 0;
        }
        if (*(u16 *) (arg0 + 8) != 0) {
            break;
        }
        if (func_0206fda0(M2C_FIELD(data_02156ec0, u16 *, 0x10A), 0, (s32) data_02156ec0 + 0x80,
                          (M2C_UNK) func_020c1028)
            == 0) {
            M2C_FIELD(data_02156ec0, s32 *, 4) = 2;
        }
        break;
    case 7:
        if (*(u16 *) (arg0 + 8) != 0) {
            break;
        }
        if (func_020bee78() != 0 && func_02080f80(M2C_FIELD(data_02156ec0, s32 *, 0x80 + temp * 4), 0x400058, 0)
                                        == 0) {
            M2C_FIELD(data_02156ec0, s16 *, 0x130)++;
            if (M2C_FIELD(data_02156ec0, s16 *, 0x130) >= M2C_FIELD(data_02156ec0, s16 *, 0x12E)) {
                M2C_FIELD(data_02156ec0, s32 *, 4) = 2;
                break;
            }
            if (func_0206fda0(M2C_FIELD(data_02156ec0, u16 *, 0x10A),
                              M2C_FIELD(data_02156ec0, s16 *, 0x130), (s32) data_02156ec0 + 0x80,
                              (M2C_UNK) func_020c1028)
                == 0) {
                M2C_FIELD(data_02156ec0, s32 *, 4) = 2;
            }
        } else {
            s32 *p;

            p = (s32 *) M2C_FIELD(data_02156ec0, s32 *, 0x80 + temp * 4);
            if (func_0206fd48(M2C_FIELD(data_02156ec0, u16 *, 0x10A), p[0], (s32) data_02156ec0 + 0x40,
                              p[1], (s32) data_02156ec0 + 0xC0, (M2C_UNK) func_020c1028)
                == 0) {
                M2C_FIELD(data_02156ec0, s32 *, 4) = 2;
            } else {
                *(u64 *) data_02156ec4 = func_02080978();
            }
        }
        break;
    case 5:
        if (*(u16 *) (arg0 + 8) != 0) {
            break;
        }
        M2C_FIELD(data_02156ec0, s32 *, 4) = 0;
        M2C_FIELD(data_02156ec0, s32 *, 0x110) = 1;
        break;
    case 11:
        switch (M2C_FIELD(data_02156ec0, u8 *, 0x100)) {
        case 1:
            M2C_FIELD(data_02156ec0, s32 *, 0x128) = 1;
            break;
        case 2:
            M2C_FIELD(data_02156ec0, s32 *, 0x128) = 2;
            break;
        }
        break;
    case 16:
        M2C_FIELD(data_02156ec0, s32 *, 4) = 0;
        break;
    }
}
