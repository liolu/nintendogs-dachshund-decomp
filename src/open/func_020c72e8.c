#include "m2c.h"
#include "engine.h"

typedef struct {
    u8 pad0[0x20];
    u32 unk_20;
    u32 startPosition;
    u8 pad1[0x1C];
} FS_FileL;

extern u8 data_02130fb4[];
extern u8 data_02140f48[];
void func_0205ece8(void *dst, s32 size, const void *fmt, s32 value);
void func_0208831c(void *file);
s32 func_02087fcc(void *file, const void *name);
u8 *func_020038a8(s32 arg0, s32 size);
void func_02087e70(void *file, void *dst, s32 size);
void func_02087f84(void *file);
s32 func_02078714(void *p, s32 arg1);

extern u8 data_0212c9e0[];
extern u8 data_02140f18[];
s32 func_020c72e8(s32 arg0, s32 arg1) {
    char name[0x40];
    FS_FileL file;
    u8 *result;
    u32 size;

    result = 0;
    if (M2C_FIELD(data_02130fb4 + arg1 * 0x1C, s8 *, 0x19) != 0) {
        func_0205ece8(name, 0x40, data_02140f48, M2C_FIELD(data_02130fb4 + arg1 * 0x1C, s32 *, 4));
        func_0208831c(&file);
        if (func_02087fcc(&file, name) != 0) {
            size = file.startPosition - file.unk_20;
            result = func_020038a8(arg0, size);
            func_02087e70(&file, result, size);
            func_02087f84(&file);
            result = (u8 *) func_02078714(result, 0);
        }
    }
    return (s32) result;
}
