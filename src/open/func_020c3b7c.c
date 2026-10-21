#include "m2c.h"

typedef struct {
    s32 f0, f4, f8;
} Work3;

M2C_UNK func_0208129c(M2C_UNK, M2C_UNK, void *);
void func_02114310(s16);
s32 func_020a5fcc(void);
void func_020c9bf0(M2C_UNK, void *, s32 *);
s32 func_0208b8ac(void *, M2C_UNK, M2C_UNK, s32 *);
void func_0208b81c(void *, M2C_UNK, s32 *);
void func_020ceeac(s32);
s32 func_020afc54(void *);
void func_020b114c(void *, M2C_UNK, M2C_UNK, s32, s32, s32);
extern s32 *data_02156f7c;
extern s32 *data_0215a02c;
void func_020c3b7c(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    Work3 work;
    void *temp_r4;
    void *temp_r5;
    s32 sp14[3];

    temp_r4 = M2C_FIELD(arg0, void **, 0x214);
    if (M2C_FIELD(arg0, s32 *, 0xB4) < (s32)data_02156f7c) {
        work = M2C_FIELD(arg0, Work3 *, 0xBC);
        work.f4 = 0;
        func_02114310(M2C_FIELD(arg0, s16 *, 0x94));
        switch (M2C_FIELD(arg0, s16 *, 0x94) - 0x1D) {
        case 0:
            func_0208129c(data_0215a02c ? *data_0215a02c : 0, 0x51, &work);
            func_0208129c(data_0215a02c ? *data_0215a02c : 0, 0x50, &work);
            break;
        case 1:
            func_0208129c(data_0215a02c ? *data_0215a02c : 0, 0x48, &work);
            func_0208129c(data_0215a02c ? *data_0215a02c : 0, 0x52, &work);
            break;
        case 2:
            func_0208129c(data_0215a02c ? *data_0215a02c : 0, 0x53, &work);
            func_0208129c(data_0215a02c ? *data_0215a02c : 0, 0x54, &work);
            break;
        case 3:
            func_0208129c(data_0215a02c ? *data_0215a02c : 0, 0x55, &work);
            func_0208129c(data_0215a02c ? *data_0215a02c : 0, 0x56, &work);
            break;
        }
        switch (M2C_FIELD(temp_r4, s32 *, 8)) {
        case 0:
            func_0208129c(data_0215a02c ? *data_0215a02c : 0, 0x79, &work);
            break;
        case 1:
            func_0208129c(data_0215a02c ? *data_0215a02c : 0, 0x60, &work);
            break;
        case 2:
            func_0208129c(data_0215a02c ? *data_0215a02c : 0, 0x5F, &work);
            func_0208129c(data_0215a02c ? *data_0215a02c : 0, 0x5E, &work);
            break;
        case 3:
            func_0208129c(data_0215a02c ? *data_0215a02c : 0, 0x5D, &work);
            break;
        case 4:
            func_0208129c(data_0215a02c ? *data_0215a02c : 0, 0x5C, &work);
            func_0208129c(data_0215a02c ? *data_0215a02c : 0, 0x5A, &work);
            break;
        case 5:
            func_0208129c(data_0215a02c ? *data_0215a02c : 0, 0x5B, &work);
            func_0208129c(data_0215a02c ? *data_0215a02c : 0, 0x59, &work);
            break;
        case 6:
            func_0208129c(data_0215a02c ? *data_0215a02c : 0, 0x58, &work);
            break;
        }
        func_020c9bf0(func_020a5fcc(), arg0 + 0xBC, sp14);
        func_0208b8ac(arg0 + 0x190, 6, M2C_FIELD(arg0, s32 *, 0xB4) <= 0 ? -M2C_FIELD(arg0, s32 *, 0xB4) : M2C_FIELD(arg0, s32 *, 0xB4), sp14);
        func_0208b81c(arg0 + 0x190, (s16)M2C_FIELD(temp_r4, s32 *, 8), sp14);
        func_020ceeac(M2C_FIELD(temp_r4, s32 *, 4));
        func_020afc54(arg0);
        return;
    }
    temp_r5 = M2C_FIELD(temp_r4, void **, 0);
    func_020b114c(arg0, arg1, arg2, M2C_FIELD(temp_r5, s32 *, 4), M2C_FIELD(temp_r5, s32 *, 0x10), 0);
}
