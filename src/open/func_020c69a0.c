#include "m2c.h"

typedef struct {
    u8 pad0[0x20];
    u32 unk_20;
    u32 startPosition;
    u8 pad1[0x1C];
} FS_FileL;

extern u8 data_02131358[];
extern u8 data_02140df8[];
extern void *data_02159e30;
void func_0205ece8(void *dst, s32 size, const void *fmt, ...);
void func_0208831c(void *file);
s32 func_02087fcc(void *file, const void *name);
u8 *func_020038a8(s32 arg0, s32 size);
void func_02087e70(void *file, void *dst, s32 size);
void func_02087f84(void *file);
s32 func_020cbbe8(s32 arg0, s32 arg1, s32 arg2);
void func_020d0174(u8 *p, s32 arg1);
void func_020d01e0(u8 *p);
u8 *func_020c69a0(s32 arg0, s16 arg1) {
    char name[0x40];
    FS_FileL file;
    u8 *p;
    u32 size;
    s32 *rec = (s32 *) (data_02131358 + arg1 * 0xC);

    func_0205ece8(name, 0x40, data_02140df8, *(u16 *) rec, M2C_FIELD(rec, s8 *, 2));
    p = 0;
    func_0208831c(&file);
    if (func_02087fcc(&file, name) != 0) {
        size = file.startPosition - file.unk_20;
        p = func_020038a8(arg0, size);
        func_02087e70(&file, p, size);
        func_02087f84(&file);
    }
    func_020d0174(p, func_020cbbe8(M2C_FIELD(data_02159e30, s32 *, 0x38), rec[2], 0));
    *(s16 *) (p + 0x66) = *(s16 *) ((u8 *) rec + 4);
    func_020d01e0(p);
    return p;
}
