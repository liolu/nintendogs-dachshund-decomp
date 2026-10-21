#include "m2c.h"
#include "engine.h"

extern u8 data_02140f58[];
extern u8 data_02140f70[];
void func_0208831c(void *file);
s32 func_02087fcc(void *file, const void *name);
u8 *func_020038a8(s32 arg0, s32 size);
void func_02087e70(void *file, void *dst, s32 size);
void func_02087f84(void *file);
s32 func_02078714(void *p, s32 arg1);

s32 func_020c739c(s32 arg0, s32 arg1) {
    FS_File file;
    s32 result;
    u8 *p;
    u32 size;

    result = 0;
    p = 0;
    if (arg1 != 0x1b) {
        if (arg1 == 0x1f) {
            p = data_02140f70;
        }
    } else {
        p = data_02140f58;
    }
    if (p != 0) {
        result = 0;
        func_0208831c(&file);
        if (func_02087fcc(&file, p) != 0) {
            size = file.startPosition - file.unk_20;
            p = func_020038a8(arg0, size);
            func_02087e70(&file, p, size);
            func_02087f84(&file);
            result = func_02078714(p, 0);
        }
    }
    return result;
}
