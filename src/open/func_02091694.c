#include "engine.h"
extern void func_0208831c(FS_File *file);
extern s32 func_02087fcc(FS_File *file, const char *path);
extern s32 func_0205ece8(char *buffer, s32 bufsz, const char *format, ...);
extern s32 data_0213cf14[];
extern char data_0213cf28[];
s32 func_02091694(s32 arg0) {
    u8 file[0x44];
    char buf[0x80];

    func_0208831c((FS_File *) file);
    func_0205ece8(buf, 0x80, data_0213cf28, data_0213cf14[arg0]);
    if (func_02087fcc((FS_File *) file, buf) != 0) {
        return M2C_FIELD(file, u32 *, 0x24) - M2C_FIELD(file, u32 *, 0x20);
    }
    return 0;
}
