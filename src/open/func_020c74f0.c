#include "m2c.h"

#include "engine.h"
typedef struct {
    u8 pad0[0x20];
    u32 unk_20;
    u32 startPosition;
    u8 pad1[0x1C];
} FS_FileL;

extern u8 data_02130fb4[];
extern u8 data_02140f98[];
extern u8 data_02140fac[];
void func_0205ece8(char *buf, s32 size, const char *fmt, ...);
void func_0208831c(FS_FileL *file);
s32 func_02087fcc(FS_FileL *file, const char *name);
s32 func_020038a8(s32 *arg0, u32 size);
void func_02087e70(FS_FileL *file, s32 dst, u32 size);
void func_02087f84(FS_FileL *file);

#pragma opt_propagation off
s32 func_020c74f0(s32 *arg0, s32 arg1) {
    FS_FileL file;
    char buf[0x40];
    s32 result;
    u32 size;
    char *name;
    char *sub;

    result = 0;
    func_0208831c(&file);
    name = *(char **) (data_02130fb4 + arg1 * 0x1C + 4);
    if (name != NULL) {
        sub = NULL;
        if (sub != NULL) {
            func_0205ece8(buf, 0x40, (char *) data_02140f98, sub, name);
        } else {
            func_0205ece8(buf, 0x40, (char *) data_02140fac, name);
        }
        if (func_02087fcc(&file, buf) != 0) {
            size = file.startPosition - file.unk_20;
            result = func_020038a8(arg0, size);
            func_02087e70(&file, result, size);
            func_02087f84(&file);
        }
    }
    return result;
}
