/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 func_020f8d80[];
extern u8 func_020f8d98[];
extern u8 func_020f8d9c[];
extern u8 func_020f8e68[];
extern u8 func_020f8e74[];
extern u8 func_020f8e78[];
extern u8 func_020f8e7c[];
extern u8 func_020f8eb0[];

u32 data_02142f00[3] = {
    0x00080001, 0x000A0009, 0xFFFF000B
};
u32 data_02142f0c[4] = {
    0x00100003, 0x00120011, 0x00140013, 0x0000FFFF
};
u32 data_02142f1c[8] = {
    (u32)&func_020f8eb0, (u32)&func_020f8e7c, (u32)&func_020f8e78, (u32)&func_020f8e74,
    (u32)&func_020f8e68, (u32)&func_020f8d9c, (u32)&func_020f8d98, (u32)&func_020f8d80
};
