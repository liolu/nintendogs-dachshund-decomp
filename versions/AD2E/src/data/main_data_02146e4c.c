/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 func_020f1750[];
extern u8 func_020f1768[];
extern u8 func_020f176c[];
extern u8 func_020f1838[];
extern u8 func_020f1844[];
extern u8 func_020f1848[];
extern u8 func_020f184c[];
extern u8 func_020f1880[];

u32 data_02146e4c[3] = {
    0x00080001, 0x000A0009, 0xFFFF000B
};
u32 data_02146e58[4] = {
    0x00100003, 0x00120011, 0x00140013, 0x0000FFFF
};
u32 data_02146e68[8] = {
    (u32)&func_020f1880, (u32)&func_020f184c, (u32)&func_020f1848, (u32)&func_020f1844,
    (u32)&func_020f1838, (u32)&func_020f176c, (u32)&func_020f1768, (u32)&func_020f1750
};
