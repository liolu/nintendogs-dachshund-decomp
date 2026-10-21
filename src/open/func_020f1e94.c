#include "m2c.h"
extern s8 *data_02159e70;
extern s32 *data_02159fc4;
extern s8 *data_0215a064;
extern void func_020f0d14(void *arg0, s32 arg1);
extern void func_020d5a60(void *arg0, s32 arg1);
extern void func_020f2278(s32 arg0, s32 arg1);
extern void func_020d6068(s32 arg0, s32 arg1, s32 arg2);
void func_020f1e94(s32 arg0) {
    s32 v;

    if (M2C_FIELD(data_02159e70, s32 *, 0xA8) == 7) {
        func_020f0d14((void *) (arg0 + 0xC4), 1);
        func_020f0d14((void *) (arg0 + 0xE4), 1);
        v = M2C_FIELD(data_02159fc4, s32 *, 8);
        switch (v) {
        case 1:
        case 2:
            func_020f0d14((void *) (arg0 + 0x104), 0);
            break;
        default:
            func_020f0d14((void *) (arg0 + 0x124), 0);
            break;
        }
        M2C_FIELD(arg0, s32 *, 0xB8) = (s16) -M2C_FIELD(data_0215a064, s16 *, 0x64);
        M2C_FIELD(arg0, s32 *, 0xBC) = M2C_FIELD(data_0215a064, s16 *, 0x68) * 100 / 60;
        func_020d5a60((void *) (arg0 + 0x18), M2C_FIELD(arg0, s32 *, 0xB8));
        func_020d5a60((void *) (arg0 + 0x40), M2C_FIELD(arg0, s32 *, 0xBC));
    }
    func_020f2278(0, arg0);
    if (M2C_FIELD(arg0, s32 *, 0x10) <= 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x10) = M2C_FIELD(arg0, s32 *, 0x10) - 1;
    if (M2C_FIELD(arg0, s32 *, 0x10) != 0) {
        return;
    }
    func_020d6068(0, 4, 0);
}
