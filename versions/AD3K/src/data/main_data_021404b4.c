/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_02140468[];
extern u8 data_0214046c[];
extern u8 data_02140470[];
extern u8 data_02140480[];
extern u8 data_02140498[];
extern u8 data_021404a4[];
extern u8 data_021404e4[];
extern u8 data_0214053c[];
extern u8 data_021405b0[];

u32 data_021404b4[4] = {
    0x00000041, 0x0000003A, 0x00000000, (u32)&data_0214053c
};
u32 data_021404c4[8] = {
    (u32)&data_02140470, (u32)&data_021404a4, (u32)&data_02140498, (u32)&data_02140480,
    (u32)&data_0214046c, (u32)&data_021404e4, (u32)&data_021405b0, (u32)&data_02140468
};
