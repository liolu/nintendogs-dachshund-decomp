/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 func_02070598[];
extern u8 func_020730a4[];
extern u8 func_0207312c[];
extern u8 func_020731b4[];
extern u8 func_0207323c[];
extern u8 func_020732c4[];
extern u8 func_0207334c[];
extern u8 func_020733d4[];
extern u8 func_0207345c[];
extern u8 func_020734e4[];
extern u8 func_0207356c[];
extern u8 func_020735f4[];
extern u8 func_0207367c[];
extern u8 func_02073704[];
extern u8 func_0207378c[];
extern u8 func_02073814[];
extern u8 func_02074cfc[];
extern u8 func_02087dd0[];
extern u8 func_02087de0[];
extern u8 func_02089594[];
extern u8 func_02089608[];
extern u8 func_0208967c[];
extern u8 func_020896f0[];
extern u8 func_02089e18[];
extern u8 func_0210b40c[];
extern u8 func_0210c9a4[];
extern u8 func_0210eac0[];
extern u8 func_0210ead0[];
extern u8 func_0210eae0[];
extern u8 func_0210f59c[];
extern u8 func_0210f5ac[];
extern u8 func_021104a0[];
extern u8 func_02110a08[];
extern u8 func_02110a84[];
extern u8 func_02111de0[];
extern u8 func_02111df0[];
extern u8 func_02111e00[];
extern u8 func_021122fc[];
extern u8 func_02112aa0[];
extern u8 func_02113190[];
extern u8 func_02113230[];
extern u8 func_02115ab0[];
extern u8 func_02115ae4[];
extern u8 func_02115b18[];
extern u8 func_02115b4c[];
extern u8 func_02115b80[];
extern u8 func_02115bb4[];
extern u8 func_02115be8[];
extern u8 func_02115c1c[];
extern u8 func_02115c50[];
extern u8 func_02115c84[];
extern u8 func_02115cb8[];
extern u8 func_02115cec[];
extern u8 func_02115d20[];
extern u8 func_02115d54[];
extern u8 func_02115d88[];
extern u8 func_02115dbc[];
extern u8 func_02115df0[];
extern u8 func_02115e24[];
extern u8 func_02115e58[];
extern u8 func_02115e8c[];
extern u8 func_02115ec0[];
extern u8 func_02116b00[];
extern u8 func_02116b30[];
extern u8 func_02116b60[];
extern u8 func_02116b90[];
extern u8 func_02116bc0[];
extern u8 func_02117a60[];
extern u8 func_02117a88[];
extern u8 func_02117bd8[];
extern u8 func_02117c4c[];
extern u8 func_02117cc0[];
extern u8 func_02117d34[];
extern u8 func_02117da8[];
extern u8 func_02117e1c[];
extern u8 func_02117e90[];
extern u8 func_02117f04[];
extern u8 func_02117f78[];
extern u8 func_02117fec[];
extern u8 func_02118060[];
extern u8 func_021180d4[];
extern u8 func_02118148[];
extern u8 func_021181bc[];
extern u8 func_02118230[];
extern u8 func_021182a4[];
extern u8 func_02118318[];
extern u8 func_0211838c[];
extern u8 func_02118400[];
extern u8 func_02118474[];
extern u8 func_021184e8[];
extern u8 func_0211855c[];
extern u8 func_021185d0[];
extern u8 func_02118644[];
extern u8 func_021186b8[];
extern u8 func_0211b2e0[];
extern u8 func_02123378[];
extern u8 func_02123408[];
extern u8 func_02123498[];
extern u8 func_ov003_02161684[];
extern u8 func_ov004_02160c84[];
extern u8 func_ov004_021620d8[];
extern u8 func_ov004_021620e8[];

u32 data_0213a2a0[1] = {
    0x00000006
};
u32 data_0213a2a4[117] = {
    (u32)&func_02113230, (u32)&func_021122fc, (u32)&func_02113190, (u32)&func_0211b2e0,
    (u32)&func_021184e8, (u32)&func_02118474, (u32)&func_02118400, (u32)&func_0211838c,
    (u32)&func_02118318, (u32)&func_021186b8, (u32)&func_02118644, (u32)&func_021185d0,
    (u32)&func_0211855c, (u32)&func_021182a4, (u32)&func_02118230, (u32)&func_021181bc,
    (u32)&func_02118148, (u32)&func_021180d4, (u32)&func_02118060, (u32)&func_02117fec,
    (u32)&func_02117f78, (u32)&func_02117f04, (u32)&func_02117e90, (u32)&func_02117e1c,
    (u32)&func_02117da8, (u32)&func_02117d34, (u32)&func_02117cc0, (u32)&func_02117c4c,
    (u32)&func_02117bd8, (u32)&func_020896f0, (u32)&func_0208967c, (u32)&func_02089608,
    (u32)&func_02089594, (u32)&func_02073814, (u32)&func_0207378c, (u32)&func_02073704,
    (u32)&func_0207367c, (u32)&func_020735f4, (u32)&func_0207356c, (u32)&func_020734e4,
    (u32)&func_0207345c, (u32)&func_020733d4, (u32)&func_0207334c, (u32)&func_020732c4,
    (u32)&func_0207323c, (u32)&func_020731b4, (u32)&func_0207312c, (u32)&func_020730a4,
    (u32)&func_02070598, (u32)&func_0210c9a4, (u32)&func_021104a0, (u32)&func_02117a88,
    (u32)&func_02117a60, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, (u32)&func_02110a84, (u32)&func_02110a08,
    0x00000000, 0x00000000, (u32)&func_ov004_021620e8, (u32)&func_ov004_021620d8,
    (u32)&func_0210eae0, (u32)&func_0210ead0, (u32)&func_0210eac0, (u32)&func_0210f5ac,
    (u32)&func_0210f59c, 0x00000000, (u32)&func_02116bc0, (u32)&func_02116b90,
    (u32)&func_02116b60, (u32)&func_02116b30, (u32)&func_02116b00, (u32)&func_0210b40c,
    0x00000000, (u32)&func_02089e18, (u32)&func_02074cfc, (u32)&func_02112aa0,
    (u32)&func_02115ec0, (u32)&func_02115e8c, (u32)&func_02115e58, (u32)&func_02115e24,
    (u32)&func_02115df0, (u32)&func_02115dbc, (u32)&func_02115d88, (u32)&func_02115d54,
    (u32)&func_02115d20, (u32)&func_02115cec, (u32)&func_02115cb8, (u32)&func_02115c84,
    (u32)&func_02115c50, (u32)&func_02115c1c, (u32)&func_02115be8, (u32)&func_02115bb4,
    (u32)&func_02115b80, (u32)&func_02115b4c, (u32)&func_02115b18, (u32)&func_02115ae4,
    (u32)&func_02115ab0, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, (u32)&func_02111e00,
    (u32)&func_02111df0, (u32)&func_02111de0, (u32)&func_ov004_02160c84, (u32)&func_ov003_02161684,
    (u32)&func_02087de0, (u32)&func_02087dd0, (u32)&func_02123498, (u32)&func_02123408,
    (u32)&func_02123378
};
