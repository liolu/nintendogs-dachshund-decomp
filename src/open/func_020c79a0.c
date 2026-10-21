#include "engine.h"
extern void func_0208831c(FS_File *file);
extern s32 func_02087fcc(FS_File *file, const char *path);
extern void func_02087e70(FS_File *file, s32 dest, u32 size);
extern s32 func_02087f84(FS_File *file);
extern s32 func_020038a8(s32 *arg0, u32 size);
extern u8 data_02130fb4[];
extern char data_02140ee4[];
extern char data_02140f00[];
extern u8 data_02140f88[];
extern s32 func_0205ece8(char *buffer, s32 bufsz, const char *format, ...);
s32 func_020c79a0(s32 *arg0, const char *arg1) {
    FS_File file;
    s32 result;
    u32 size;

    result = 0;
    func_0208831c(&file);
    if (func_02087fcc(&file, arg1) != 0) {
        size = file.startPosition - file.unk_20;
        result = func_020038a8(arg0, size);
        func_02087e70(&file, result, size);
        func_02087f84(&file);
    }
    return result;
}
