#include "engine.h"
extern u8 data_02130fb4[];
extern u8 data_02140f88[];
extern void func_0208831c(FS_File *file);
extern s32 func_02087fcc(FS_File *file, const char *path);
extern void func_02087e70(FS_File *file, s32 dest, u32 size);
extern s32 func_02087f84(FS_File *file);
extern s32 func_020038a8(s32 *arg0, u32 size);
extern s32 func_0205ece8(char *buffer, s32 bufsz, const char *format, ...);
extern char data_02140ee4[];
extern char data_02140f00[];
s32 func_020c744c(s32 *arg0, s32 arg1) {
    FS_File file;
    char buf[0x40];
    s32 result;
    u32 size;
    char *name;

    result = 0;
    func_0208831c(&file);
    name = *(char **) (data_02130fb4 + arg1 * 0x1C + 8);
    if (name != NULL) {
        func_0205ece8(buf, 0x40, (char *) data_02140f88, name);
        if (func_02087fcc(&file, buf) != 0) {
            size = file.startPosition - file.unk_20;
            result = func_020038a8(arg0, size);
            func_02087e70(&file, result, size);
            func_02087f84(&file);
        }
    }
    return result;
}
