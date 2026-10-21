#include "m2c.h"
extern void func_020a7924(s32, s32);
extern u8 *func_020038a8(s32, s32);
extern void *func_02102fd0(s32);
extern void func_0205ece8(void *, s32, const void *, s32);
extern void *func_0207e0d0(void *);
extern void *func_02078714(void *, s32);
extern void func_020ca9b8(s32, s32, s32);
extern s32 func_0207837c(s32, const void *);
extern void func_020ca7f0(s32, s32, s32);
extern void func_020c95fc(s32, s32);
extern void func_02102f2c(s32, s32);
extern void func_020f5354(void);
extern void func_020f47d4(void);
extern void func_020f557c(void);
extern u8 data_02149bb4[];
extern u8 data_02149bc8[];
extern u8 data_021315c0[];
typedef struct {
    u8 pad[0x24];
} Blk;
void func_020f5588(s32 arg0, s32 arg1) {
    u8 buf[0x40];
    u8 *p;

    func_020a7924(arg0, 0x4B);
    M2C_FIELD(arg0, void **, 0x1F4) = (void *) func_020f5354;
    M2C_FIELD(arg0, void **, 0x1F8) = (void *) func_020f47d4;
    M2C_FIELD(arg0, void **, 0x1F0) = (void *) func_020f557c;

    M2C_FIELD(arg0, void **, 0x214) = func_020038a8(arg1, 0xB0);
    p = M2C_FIELD(arg0, void **, 0x214);
    M2C_FIELD(p, void **, 0) = func_02102fd0(0x20);

    func_0205ece8(buf, 0x40, data_02149bb4, M2C_FIELD(arg0, s32 *, 0x1EC));
    M2C_FIELD(p, s32 *, 0xA8) = (s32) func_02078714(func_0207e0d0(buf), 0);
    func_0205ece8(buf, 0x40, data_02149bc8, M2C_FIELD(arg0, s32 *, 0x1EC));
    M2C_FIELD(p, s32 *, 0xAC) = (s32) func_02078714(func_0207e0d0(buf), 0);

    func_020ca9b8(arg0, arg1, 2);
    func_020ca7f0(arg0, 1,
                  (s16) func_0207837c(M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x1C), s32 *, 8) + 0x40, data_021315c0));

    func_020c95fc(M2C_FIELD(arg0, s32 *, 0x74), M2C_FIELD(p, s32 *, 0xA8));
    func_020c95fc(M2C_FIELD(arg0, s32 *, 0x74) + 0x24, M2C_FIELD(p, s32 *, 0xAC));

    M2C_FIELD(p, s32 *, 0xA0) = M2C_FIELD(arg0, s32 *, 0x74) + 0x14;
    M2C_FIELD(p, s32 *, 0xA4) = (s32) ((u8 *) ((Blk *) M2C_FIELD(arg0, u8 **, 0x74) + 1) + 0x14);
    M2C_FIELD(p, s32 *, 8) = M2C_FIELD(M2C_FIELD(p, s32 *, 0xA4), s16 *, 4) << 12;

    func_02102f2c(0x20, arg0);
}
