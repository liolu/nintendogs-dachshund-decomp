/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 func_020f1c2c[];
extern u8 func_020f1c58[];
extern u8 func_020f1cc8[];
extern u8 func_020f1cf4[];
extern u8 func_020f1db0[];
extern u8 func_020f1e80[];
extern u8 func_020f1e94[];
extern u8 func_020f1fbc[];

u32 data_02146f54[4] = {
    0x00120011, 0x00140013, 0x00160015, 0xFFFF0017
};
u32 data_02146f64[8] = {
    (u32)&func_020f1fbc, (u32)&func_020f1e94, (u32)&func_020f1e80, (u32)&func_020f1db0,
    (u32)&func_020f1cf4, (u32)&func_020f1cc8, (u32)&func_020f1c58, (u32)&func_020f1c2c
};
u32 data_02146f84[9] = {
    0x00020001, 0x00040003, 0x00060005, 0x00080007,
    0x000A0009, 0x000C000B, 0x000E000D, 0x0010000F,
    0x0000FFFF
};
