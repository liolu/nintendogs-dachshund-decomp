#include "m2c.h"
s32 func_0209fe30(s32 arg0);
extern void *data_02159e70;
typedef struct {
    s32 unk0;
    s32 unk4;
    u8 pad[0x930];
    s32 unk938;
    s32 unk93C;
    s32 unk940;
    s32 unk944;
    s32 unk948;
    s32 unk94C;
} Obj;
void func_020d9230(s32 arg0) {
    Obj *o = (Obj *) arg0;
    s32 x = func_0209fe30(arg0 + 4);
    s32 r = -0x20 - x % 0x48;

    if (M2C_FIELD(data_02159e70, s32 *, 0xAC) == 3) {
        r = 0;
    }
    M2C_FIELD(0x4001018, s32 *, 0) = 0x1FF0000 & (r << 16);
    if (o->unk948 != 0) {
        *(volatile u16 *) 0x400100E = (*(volatile u16 *) 0x400100E & 0x43) | 0x704;
        *(volatile u16 *) 0x400100E = (*(volatile u16 *) 0x400100E & ~3) | 1;
        o->unk948 = 0;
    }
    *(u32 *) 0x400101C = (-o->unk940) & 0x1FF;
    switch (o->unk94C) {
    case 4:
    case 5:
    case 6:
        *(u16 *) 0x4001048 = (*(u16 *) 0x4001048 & ~0x3F) | 0x18;
        *(u16 *) 0x400104A = (*(u16 *) 0x400104A & ~0x3F) | 0x17;
        *(u16 *) 0x4001040 = (o->unk940 + 0xFF) & 0xFF;
        *(u16 *) 0x4001044 = 0x20B0;
        *(u32 *) 0x4001000 = (*(u32 *) 0x4001000 & ~0xE000) | 0x2000;
        break;
    case 7:
        *(u32 *) 0x4001000 = *(u32 *) 0x4001000 & ~0xE000;
        break;
    }
}
