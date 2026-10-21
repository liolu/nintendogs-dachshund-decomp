#include "engine.h"
extern void func_0208831c(FS_File *file);
extern s32 func_02087fcc(FS_File *file, const char *path);
extern s32 func_02087e70(FS_File *file, s32 dest, u32 size);
extern s32 func_02087f84(FS_File *file);
extern s32 func_02003850(s32 *arg0, s32 size, s32 align);
extern s32 func_0207e154(s32 arg0, s32 arg1, s32 arg2);
s32 func_020c78f4(s32 *arg0, s32 arg1, const char *arg2) {
    FS_File file;
    s32 result;
    s32 buf;
    s32 data;
    u32 size;

    result = 0;
    func_0208831c(&file);
    if (func_02087fcc(&file, arg2) != 0) {
        size = file.startPosition - file.unk_20;
        buf = func_02003850(arg0, ((size + 0xF) & ~0xF) + 0x60, 0x10);
        if (buf != 0) {
            data = buf + 0x60;
            if (func_02087e70(&file, data, size) == size) {
                if (func_0207e154(buf, arg1, data) != 0) {
                    result = buf;
                }
            }
        }
        func_02087f84(&file);
    }
    return result;
}
