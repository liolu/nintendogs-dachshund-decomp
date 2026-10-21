#include "m2c.h"
extern void func_02100ca0(void);
extern void func_0210069c(void);
extern void func_02100cfc(void);
extern void func_02100688(void);
extern u8 *func_020038a8(s32, s32);
extern void func_0205ece8(void *, s32, const void *, s32);
extern void *func_0207e0d0(void *);
extern void *func_02078714(void *, s32);
extern void func_020ca9b8(s32, s32, s32);
extern s32 func_0207837c(void *, const void *);
extern void func_020ca7f0(s32, s32, s32);
extern void func_020c95fc(s32, s32);
extern u8 data_02149eec[];
extern u8 data_02149f00[];
extern u8 data_02131738[];
extern u8 data_02131748[];
typedef struct {
    u8 pad[0x24];
} Blk;
void func_02100df8(s32 arg0, s32 arg1) {
    u8 *p;
    u8 buf[0x40];
    s16 a;
    s16 b;

    M2C_FIELD(arg0, void **, 0x1F4) = (void *) func_02100ca0;
    M2C_FIELD(arg0, void **, 0x1F8) = (void *) func_0210069c;
    M2C_FIELD(arg0, void **, 0x1F0) = (void *) func_02100cfc;
    M2C_FIELD(arg0, void **, 0x204) = (void *) func_02100688;
    M2C_FIELD(arg0, void **, 0x214) = func_020038a8(arg1, 0x1C);
    p = (u8 *) M2C_FIELD(arg0, void **, 0x214);
    if (p != 0) {
        func_0205ece8(buf, 0x40, data_02149eec, M2C_FIELD(arg0, s32 *, 0x1EC));
        M2C_FIELD(p, void **, 0x14) = func_02078714(func_0207e0d0(buf), 0);
        func_0205ece8(buf, 0x40, data_02149f00, M2C_FIELD(arg0, s32 *, 0x1EC));
        M2C_FIELD(p, void **, 0x18) = func_02078714(func_0207e0d0(buf), 0);
        func_020ca9b8(arg0, arg1, 3);
        a = (s16) (func_0207837c(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x1C), u8 **, 8) + 0x40, data_02131738) + 0);
        func_020ca7f0(arg0, 1, a);
        b = (s16) (func_0207837c(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x1C), u8 **, 8) + 0x40, data_02131748) + 0);
        func_020ca7f0(arg0, 2, b);
        func_020c95fc((s32) M2C_FIELD(arg0, u8 **, 0x74) + 0x24, (s32) M2C_FIELD(p, void **, 0x14));
        func_020c95fc((s32) M2C_FIELD(arg0, u8 **, 0x74) + 0x48, (s32) M2C_FIELD(p, void **, 0x18));
        M2C_FIELD(p, void **, 0xC) = (u8 *) ((Blk *) M2C_FIELD(arg0, u8 **, 0x74) + 1) + 0x14;
        M2C_FIELD(p, void **, 0x10) = (u8 *) ((Blk *) M2C_FIELD(arg0, u8 **, 0x74) + 2) + 0x14;
        M2C_FIELD(M2C_FIELD(p, u8 **, 0xC), s32 *, 0xC) = 0;
        M2C_FIELD(M2C_FIELD(p, u8 **, 0x10), s32 *, 0xC) = 0;
        M2C_FIELD(M2C_FIELD(p, u8 **, 0xC), s32 *, 8) = 0;
        M2C_FIELD(M2C_FIELD(p, u8 **, 0x10), s32 *, 8) = 0;
        M2C_FIELD(p, s32 *, 0) = 0;
        M2C_FIELD(p, s32 *, 4) = 0;
        M2C_FIELD(p, u16 *, 8) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0xAC) = 0;
}
