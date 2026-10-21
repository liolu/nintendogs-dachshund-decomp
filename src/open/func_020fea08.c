#include "m2c.h"

typedef struct {
    s32 _00, _01, _10, _11;
} UnkMtx22;

extern void func_02068770(s32);
extern void func_02066718(UnkMtx22 *m, s32 x, s32 y);
extern void func_0206a3dc(volatile u32 *reg, const UnkMtx22 *mtx, s32 centerX, s32 centerY, s32 x1, s32 y1);
extern char data_02124e68[];
extern s8 data_02131710[];
extern u8 data_02131708[];
void func_020fea08(void *arg0) {
    u8 *p;
    UnkMtx22 m1;
    UnkMtx22 m2;
    s32 i;
    s32 j;

    p = M2C_FIELD(arg0, u8 **, 0x214);
    if (M2C_FIELD(p, u32 *, 0x154) != 0) {
        func_02068770(2);
        *(volatile u16 *) 0x400100A = (*(volatile u16 *) 0x400100A & 0x43) | 0x504;
        *(volatile u16 *) 0x400100C = (*(volatile u16 *) 0x400100C & 0x43) | 0x4608;
        *(volatile u16 *) 0x400100E = (*(volatile u16 *) 0x400100E & 0x43) | 0x4708;
        *(volatile u32 *) 0x4001000 = *(volatile u32 *) 0x4001000 | 0x1E00;
        *(volatile u16 *) 0x400100A = (*(volatile u16 *) 0x400100A & ~3) | 3;
        *(volatile u16 *) 0x400100C = (*(volatile u16 *) 0x400100C & ~3) | 2;
        *(volatile u16 *) 0x400100E = (*(volatile u16 *) 0x400100E & ~3) | 1;
        *(volatile u32 *) 0x4001000 = *(volatile u32 *) 0x4001000 & ~0xE000;
        *(volatile u16 *) 0x4001050 = 0;
        M2C_FIELD(p, u32 *, 0x154) = 0;
    }
    i = ((s32) M2C_FIELD(p, u16 *, 0xC) >> 4) * 2;
    j = i + 1;
    func_02066718(&m1, ((s16 *) data_02124e68)[i], ((s16 *) data_02124e68)[j]);
    i = ((s32) M2C_FIELD(p, u16 *, 0x1C) >> 4) * 2;
    j = i + 1;
    func_02066718(&m2, ((s16 *) data_02124e68)[i], ((s16 *) data_02124e68)[j]);
    func_0206a3dc((volatile u32 *) 0x4001020, &m1, data_02131708[0], data_02131708[1],
                  data_02131710[0], data_02131710[1]);
    func_0206a3dc((volatile u32 *) 0x4001030, &m2, data_02131708[2], data_02131708[3],
                  data_02131710[2], data_02131710[3]);
    *(volatile u32 *) 0x4001014 = (data_02131710[4] & 0x1FF) | ((data_02131710[5] << 16) & 0x1FF0000);
}
