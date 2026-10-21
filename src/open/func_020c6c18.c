#include "m2c.h"
#include "engine.h"

typedef struct {
    u8 pad0[0x20];
    u32 unk_20;
    u32 startPosition;
    u8 pad1[0x1C];
} FS_FileL;

extern char *data_02140d88[];
extern s8 data_02140e54[];
extern s8 data_02140e58[];
extern s8 data_02140e6c[];
extern s8 data_02140e78[];
extern s8 data_02140e8c[];

void func_0205ece8();
void func_0208831c();
s32 func_02087fcc();
M2C_UNK func_02003850();
s32 func_02087e70();
s32 func_0207e154();
void func_02087f84();
M2C_UNK func_0207e0d0();
M2C_UNK func_02006b68();
void func_0207e124();

#pragma opt_propagation off

#pragma opt_propagation off
void func_020c6c18(s32 arg0, s32 arg1, s32 *arg2) {
    char name[0x40];
    FS_FileL file;
    s8 *sec;
    s32 key;
    s32 result;
    s32 buf;
    s32 data;
    u32 size;

    sec = data_02140e54;
    key = (s32) data_02140d88[arg1];
    func_0205ece8(name, 0x40, data_02140e58, key);
    result = 0;
    arg2[0] = 0;
    arg2[1] = 0;
    arg2[2] = 0;
    func_0208831c(&file);
    if (func_02087fcc(&file, name) != 0) {
        size = file.startPosition - file.unk_20;
        buf = func_02003850(arg0, ((size + 0xF) & ~0xF) + 0x60, 0x10);
        if (buf != 0) {
            data = buf + 0x60;
            if (func_02087e70(&file, (u8 *) data, size) == size) {
                if (func_0207e154((void *) buf, sec, (void *) data) != 0) {
                    result = buf;
                }
            }
        }
        func_02087f84(&file);
    }
    func_0205ece8(name, 0x40, data_02140e6c, sec, key);
    arg2[0] = func_0207e0d0(name);
    func_0205ece8(name, 0x40, data_02140e78, sec, key);
    arg2[1] = func_0207e0d0(name);
    func_0205ece8(name, 0x40, data_02140e8c, sec, key);
    arg2[2] = func_02006b68(func_0207e0d0(name));
    func_0207e124(result);
}
