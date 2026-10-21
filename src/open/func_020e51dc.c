#include "m2c.h"

typedef struct {
    s32 unk0;
    s16 unk4;
    u8 pad[2];
} Table02144de4;

extern u8 *data_02159e70;
extern Table02144de4 data_02144de4[];
extern s16 data_02144de8[];
extern s8 data_02144e24[];
extern s8 data_02144e34[];
extern s8 data_02144e44[];
extern s8 data_02144e48[];
extern s8 data_02144e54[];
extern s8 data_02144e64[];

void func_0205ece8();
void func_020e8084();
s32 func_020c78f4();
M2C_UNK func_0207e0d0();
s32 func_0207e124();

void func_020e51dc(s32 *out, s32 arg1, s32 arg2) {
    char name[0x40];
    char name2[0x40];
    char name3[0x40];
    u32 key;
    s32 result;

    out[0] = arg2;
    key = M2C_FIELD(data_02159e70, u32 *, 0x1113C);
    if (data_02144de4[key].unk0 != 0) {
        func_0205ece8(name, 0x40, data_02144e24, data_02144de8[key * 4]);
    } else {
        func_0205ece8(name, 0x40, data_02144e34, data_02144de8[key * 4]);
    }
    func_020e8084(name2, 0x40, name);
    result = func_020c78f4(arg1, (s32) data_02144e44, name2);
    func_0205ece8(name3, 0x40, data_02144e48, name);
    out[1] = func_0207e0d0(name3);
    func_0205ece8(name3, 0x40, data_02144e54, name);
    out[2] = func_0207e0d0(name3);
    func_0205ece8(name3, 0x40, data_02144e64, name);
    out[3] = func_0207e0d0(name3);
    func_0207e124(result);
}
