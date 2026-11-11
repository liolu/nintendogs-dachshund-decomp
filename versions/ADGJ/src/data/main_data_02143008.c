/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 func_020f925c[];
extern u8 func_020f9288[];
extern u8 func_020f92f8[];
extern u8 func_020f9324[];
extern u8 func_020f93e0[];
extern u8 func_020f94b0[];
extern u8 func_020f94c4[];
extern u8 func_020f95ec[];

u32 data_02143008[4] = {
    0x00120011, 0x00140013, 0x00160015, 0xFFFF0017
};
u32 data_02143018[8] = {
    (u32)&func_020f95ec, (u32)&func_020f94c4, (u32)&func_020f94b0, (u32)&func_020f93e0,
    (u32)&func_020f9324, (u32)&func_020f92f8, (u32)&func_020f9288, (u32)&func_020f925c
};
u32 data_02143038[9] = {
    0x00020001, 0x00040003, 0x00060005, 0x00080007,
    0x000A0009, 0x000C000B, 0x000E000D, 0x0010000F,
    0x0000FFFF
};
