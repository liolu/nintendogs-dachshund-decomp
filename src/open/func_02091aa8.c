#include "engine.h"
extern void func_0208831c(FS_File *file);
extern s32 func_02087fcc(FS_File *file, const char *path);
extern s32 func_02087f84(FS_File *file);
extern s32 func_02087e70(FS_File *file, void *dest, s32 size);
extern s32 func_0205ece8(char *buffer, s32 bufsz, const char *format, ...);
extern s32 data_0213cf14[];
extern char data_0213cf38[];
extern u8 data_02154578[];
void func_02091aa8(void *arg0, s32 arg1) {
    u8 file[0x44];
    char buf[0x80];
    u8 *p = data_02154578;

    func_0208831c((FS_File *) file);
    func_0205ece8(buf, 0x80, data_0213cf38, data_0213cf14[arg1]);
    if (func_02087fcc((FS_File *) file, buf) != 0) {
        func_02087e70((FS_File *) file, arg0,
                      M2C_FIELD(file, u32 *, 0x24) - M2C_FIELD(file, u32 *, 0x20));
        M2C_FIELD(p, u32 *, 0) = (u32) arg0;
        M2C_FIELD(p, s16 *, 4) = arg1;
        M2C_FIELD(p, u32 *, 0x34) = 1;
        M2C_FIELD(p, s16 *, 0x3C) = 0;
        M2C_FIELD(p, u32 *, 0x40) = 0;
        func_02087f84((FS_File *) file);
    }
}
