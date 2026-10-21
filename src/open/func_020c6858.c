#include "m2c.h"

typedef struct {
    u8 pad0[0x20];
    u32 unk_20;
    u32 startPosition;
    u8 pad1[0x1C];
} FS_FileL;

extern void func_0205ece8(char *buf, u32 len, const char *fmt, s32 arg);
extern void func_0208831c(FS_FileL *file);
extern s32 func_02087fcc(FS_FileL *file, const char *path);
extern void func_02087e70(FS_FileL *file, u8 *dest, u32 size);
extern s32 func_02087f84(FS_FileL *file);
extern u8 *func_020038a8(s32 arg0, u32 size);
extern s32 func_020cbbe8(s32 arg0, s32 arg1, s32 arg2);
extern void func_020d0174(u8 *arg0, s32 arg1);
extern void func_020d01e0(u8 *arg0);
extern char data_02140dc8[];
extern char data_02140de0[];
extern u8 data_02131334[];
extern void *data_02159e30;

void func_020c6858(s32 *arg0, s32 *arg1, s32 arg2, s16 arg3) {
    char name[0x40];
    FS_FileL file;
    FS_FileL file2;
    u8 *p;
    u32 size;
    s32 *rec = (s32 *) (data_02131334 + arg3 * 0xC);

    func_0205ece8(name, 0x40, data_02140dc8, arg3);
    p = 0;
    func_0208831c(&file);
    if (func_02087fcc(&file, name) != 0) {
        size = file.startPosition - file.unk_20;
        p = func_020038a8(arg2, size);
        func_02087e70(&file, p, size);
        func_02087f84(&file);
    }
    func_020d0174(p, func_020cbbe8(M2C_FIELD(data_02159e30, s32 *, 0x38), rec[2], 0));
    *(s16 *) ((u8 *) p + 0x66) = *(s16 *) ((u8 *) rec + 4);
    func_020d01e0(p);
    *arg0 = (s32) p;
    func_0205ece8(name, 0x40, data_02140de0, arg3);
    p = 0;
    func_0208831c(&file2);
    if (func_02087fcc(&file2, name) != 0) {
        size = file2.startPosition - file2.unk_20;
        p = func_020038a8(arg2, size);
        func_02087e70(&file2, p, size);
        func_02087f84(&file2);
    }
    *arg1 = (s32) p;
}
