/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_02150f40[];
extern u8 data_02150f60[];
extern u8 data_02150f80[];

const u32 data_02138a70[2] = {
    0x003F0044, 0x0000003A
};
const u32 data_02138a78[3] = {
    (u32)&data_02150f40, (u32)&data_02150f60, (u32)&data_02150f80
};
