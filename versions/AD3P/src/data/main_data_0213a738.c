/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_02139ebc[];
extern u8 data_02139ed0[];
extern u8 data_02139ee4[];
extern u8 data_02139ef8[];
extern u8 data_02139f0c[];
extern u8 data_02139f20[];
extern u8 data_02139f34[];
extern u8 data_02139f48[];
extern u8 data_02139f5c[];
extern u8 data_02139f70[];
extern u8 data_02139f84[];
extern u8 data_02139f98[];
extern u8 data_02139fac[];
extern u8 data_02139fc0[];
extern u8 data_02139fd4[];
extern u8 data_02139fe8[];
extern u8 data_02139ffc[];
extern u8 data_0213a010[];
extern u8 data_0213a024[];
extern u8 data_0213a038[];
extern u8 data_0213a04c[];
extern u8 data_0213a060[];
extern u8 data_0213a074[];
extern u8 data_0213a088[];
extern u8 data_0213a09c[];
extern u8 data_0213a0b0[];
extern u8 data_0213a0c4[];
extern u8 data_0213a0d8[];
extern u8 data_0213a0ec[];
extern u8 data_0213a100[];
extern u8 data_0213a114[];
extern u8 data_0213a128[];
extern u8 data_0213a13c[];
extern u8 data_0213a15c[];
extern u8 data_0213a17c[];
extern u8 data_0213a19c[];
extern u8 data_0213a1bc[];
extern u8 data_0213a1dc[];
extern u8 data_0213a1fc[];
extern u8 data_0213a21c[];
extern u8 data_0213a23c[];
extern u8 data_0213a25c[];
extern u8 data_0213a27c[];
extern u8 data_0213a29c[];
extern u8 data_0213a2bc[];
extern u8 data_0213a2dc[];
extern u8 data_0213a2fc[];
extern u8 data_0213a31c[];
extern u8 data_0213a33c[];
extern u8 data_0213a35c[];
extern u8 data_0213a37c[];
extern u8 data_0213a39c[];
extern u8 data_0213a3bc[];
extern u8 data_0213a3dc[];
extern u8 data_0213a3fc[];
extern u8 data_0213a41c[];
extern u8 data_0213a43c[];
extern u8 data_0213a45c[];
extern u8 data_0213a47c[];
extern u8 data_0213a49c[];
extern u8 data_0213a4bc[];
extern u8 data_0213a4dc[];
extern u8 data_0213a4fc[];
extern u8 data_0213a51c[];
extern u8 data_0213a53c[];
extern u8 data_0213a55c[];
extern u8 data_0213a584[];
extern u8 data_0213a5ac[];
extern u8 data_0213a5d4[];
extern u8 data_0213a5fc[];
extern u8 data_0213a624[];
extern u8 data_0213a64c[];
extern u8 data_0213a674[];
extern u8 data_0213a69c[];
extern u8 data_0213a6d0[];
extern u8 data_0213a704[];

u32 data_0213a738[13] = {
    0x03010000, 0xFFFF0000, 0x0000FFFF, 0x02000304,
    0x008F0083, 0x03040000, 0x00840300, 0x00000090,
    0x02000304, 0x00910085, 0x03040000, 0x00860300,
    0x00000092
};
u32 data_0213a76c[18] = {
    0x03020002, 0xFFFF0001, 0x0002FFFF, 0x03010302,
    0x01880188, 0x03020002, 0x01910301, 0x00020191,
    0x03010303, 0x01970197, 0x03030002, 0x01980301,
    0x00020198, 0x03010302, 0x01760176, 0x03020002,
    0x017F0301, 0x0000017F
};
u32 data_0213a7b4[23] = {
    0x03030020, 0xFFFF0000, 0x0020FFFF, 0x00000302,
    0x03A4039C, 0x03020020, 0x039D0000, 0x002003A4,
    0x00000303, 0x03A5039E, 0x03030020, 0x039F0000,
    0x002003A5, 0x00000304, 0x03A603A0, 0x03040020,
    0x03A10000, 0x002003A6, 0x00000305, 0x03A703A2,
    0x03050020, 0x03A30000, 0x000003A7
};
u32 data_0213a810[25] = {
    0x04010000, 0xFFFF0001, 0x0000FFFF, 0x00010401,
    0x01BD01BD, 0x04010000, 0x01BE0101, 0x000001BE,
    0x02010401, 0x01BF01BF, 0x04010000, 0x01C00301,
    0x000001C0, 0x04010401, 0x01C101C1, 0x04010000,
    0x01C20501, 0x000001C2, 0x06010401, 0x01C301C3,
    0x04010000, 0x01C40701, 0x000001C4, 0x08010401,
    0x01C501C5
};
u32 data_0213a874[80] = {
    (u32)&data_0213a024, (u32)&data_0213a584, (u32)&data_0213a810, (u32)&data_0213a33c,
    (u32)&data_0213a49c, (u32)&data_0213a51c, (u32)&data_0213a1fc, (u32)&data_0213a53c,
    (u32)&data_0213a37c, (u32)&data_0213a3fc, (u32)&data_0213a6d0, (u32)&data_0213a76c,
    (u32)&data_0213a704, (u32)&data_0213a45c, (u32)&data_0213a29c, (u32)&data_0213a624,
    (u32)&data_0213a64c, (u32)&data_0213a4fc, (u32)&data_0213a4dc, (u32)&data_02139f20,
    (u32)&data_02139fe8, (u32)&data_02139f34, (u32)&data_02139fc0, (u32)&data_0213a43c,
    (u32)&data_0213a1bc, (u32)&data_0213a1dc, (u32)&data_0213a0ec, (u32)&data_02139fac,
    (u32)&data_0213a010, (u32)&data_0213a21c, (u32)&data_02139ee4, (u32)&data_0213a23c,
    (u32)&data_0213a25c, (u32)&data_0213a27c, (u32)&data_02139ef8, (u32)&data_0213a7b4,
    (u32)&data_0213a2bc, (u32)&data_0213a2dc, (u32)&data_0213a2fc, (u32)&data_02139f0c,
    (u32)&data_0213a0c4, (u32)&data_0213a038, (u32)&data_0213a47c, (u32)&data_0213a35c,
    (u32)&data_0213a39c, (u32)&data_0213a3bc, (u32)&data_0213a41c, (u32)&data_0213a31c,
    (u32)&data_0213a738, (u32)&data_0213a4bc, (u32)&data_0213a13c, (u32)&data_0213a15c,
    (u32)&data_0213a19c, (u32)&data_02139ffc, (u32)&data_0213a0b0, (u32)&data_02139f48,
    (u32)&data_02139f5c, (u32)&data_02139f70, (u32)&data_02139ebc, (u32)&data_02139f84,
    (u32)&data_02139f98, (u32)&data_0213a0d8, (u32)&data_02139ed0, (u32)&data_0213a3dc,
    (u32)&data_02139fd4, (u32)&data_0213a128, (u32)&data_0213a55c, (u32)&data_0213a100,
    (u32)&data_0213a09c, (u32)&data_0213a04c, (u32)&data_0213a060, (u32)&data_0213a5ac,
    (u32)&data_0213a5d4, (u32)&data_0213a114, (u32)&data_0213a17c, (u32)&data_0213a074,
    (u32)&data_0213a088, (u32)&data_0213a5fc, (u32)&data_0213a69c, (u32)&data_0213a674
};
