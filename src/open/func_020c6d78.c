#include "engine.h"
extern void func_0208831c(FS_File *file);
extern s32 func_02087fcc(FS_File *file, const char *path);
extern void func_02087e70(FS_File *file, s32 dest, u32 size);
extern s32 func_02087f84(FS_File *file);
extern s32 func_020038a8(s32 *arg0, u32 size);
extern char data_02140e9c[];
extern void *func_02078714(void *arg0, u32 arg1);
extern char data_02140eb0[];
#pragma opt_propagation off
s32 func_020c6d78(s32 *arg0) {
    FS_File file;
    s32 result;
    u32 size;
    const char *path;

    path = data_02140e9c;
    result = 0;
    func_0208831c(&file);
    if (func_02087fcc(&file, path) != 0) {
        size = file.startPosition - file.unk_20;
        result = func_020038a8(arg0, size);
        func_02087e70(&file, result, size);
        func_02087f84(&file);
    }
    return result;
}
