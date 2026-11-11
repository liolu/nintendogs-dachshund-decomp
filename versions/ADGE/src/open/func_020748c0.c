#include "m2c.h"

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
} Struct12;

typedef struct {
    u8 pad[0xFC];
    u32 flags;
} StructE58;

extern Struct12 data_02150f44;
extern StructE58 data_02150e58;
void func_020748c0(M2C_UNK arg0) {
    data_02150f44 = *(Struct12 *) arg0;
    data_02150e58.flags &= ~0xA4;
}
