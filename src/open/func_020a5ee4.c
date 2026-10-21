#define M2C_SELF_func_020a5ee4
#define M2C_SELF_func_020066f0
#define M2C_SELF_func_020ca4b0
#define M2C_SELF_func_020a561c
#define M2C_SELF_func_020a54c0
#include "m2c.h"

extern void *data_021555f4;
extern u8 data_02124f68[];
extern u16 data_0213e718[];
void func_020ca4b0(s32, s32);
void func_020066f0(s32, s32);
void func_020a561c(void);
void func_020a54c0(void);

void *func_020a5ee4(s32 arg0) {
    void *p;

    data_021555f4 = (void *) func_020038a8((s32 *) arg0, 0x340);
    func_020a7e78(arg0);
    func_020c9e1c(data_021555f4);
    func_020ca4b0((s32) data_021555f4, (s32) func_020a561c);
    p = data_021555f4;
    M2C_FIELD(p, u16 *, 0x6C) = (u16) M2C_FIELD(data_02124f68, s16 *, 0xC4);
    M2C_FIELD(p, u16 *, 0x6E) = (u16) M2C_FIELD(data_02124f68, s16 *, 0xC6);
    M2C_FIELD(data_021555f4, u32 *, 0x74) = 0x1000;
    M2C_FIELD(data_021555f4, u32 *, 0x78) = 0x2BC000;
    M2C_FIELD(data_021555f4, u32 *, 0x34) = 0x8000;
    M2C_FIELD(data_021555f4, u32 *, 0x7C) = 0;
    M2C_FIELD(data_021555f4, u16 *, 0x82) = 1;
    M2C_FIELD(data_021555f4, u16 *, 0x84) = 0;
    M2C_FIELD(data_021555f4, u16 *, 0x86) = 0;
    M2C_FIELD(data_021555f4, u16 *, 0x80) = 0;
    func_020a7e78(arg0);
    func_020066f0((s32) data_0213e718[0], (s32) func_020a54c0);
    return data_021555f4;
}
