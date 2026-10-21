#include "m2c.h"
#include "engine.h"
extern s32 data_0214cf5c;
extern s32 data_0214cf58;
void func_0208831c(void *file);
s32 func_02087fcc(void *file, const void *name);
u8 *func_020038a8(s32 arg0, s32 size);
void func_02087e70(void *file, void *dst, s32 size);
void func_02087f84(void *file);
s32 func_02006b9c(s32 arg0);
void *func_02006b68(s32 arg0);
extern void *data_0214cf54;
extern u8 data_0214cfe0[];
void func_0206cbc4(M2C_UNK, void *, M2C_UNK);
#pragma opt_strength_reduction off
s32 func_020092e4(M2C_UNK, M2C_UNK);
void func_020b777c(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK func_020cba74(M2C_UNK);
void func_0207ca98(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern M2C_UNK data_02145614[];
void func_02006074(s32 arg0, const char *arg1, const char *arg2) {
    u8 file[0x44];
    u8 *buf;
    s32 size;

    if (data_0214cf5c != 0) {
        return;
    }
    func_0208831c(file);
    func_02087fcc(file, arg1);
    size = *(u32 *) (file + 0x24) - *(u32 *) (file + 0x20);
    buf = func_020038a8(arg0, size);
    func_02087e70(file, buf, size);
    func_02087f84(file);
    data_0214cf5c = func_02006b9c((s32) buf);
    func_02087fcc(file, arg2);
    size = *(u32 *) (file + 0x24) - *(u32 *) (file + 0x20);
    buf = func_020038a8(arg0, size);
    func_02087e70(file, buf, size);
    func_02087f84(file);
    data_0214cf58 = (s32) func_02006b68((s32) buf);
}
