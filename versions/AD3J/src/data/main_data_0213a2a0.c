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
extern u8 func_0210b404[];
extern u8 func_0210c99c[];
extern u8 func_0210eab8[];
extern u8 func_0210eac8[];
extern u8 func_0210ead8[];
extern u8 func_0210f594[];
extern u8 func_0210f5a4[];
extern u8 func_02110498[];
extern u8 func_02110a00[];
extern u8 func_02110a7c[];
extern u8 func_02111dd8[];
extern u8 func_02111de8[];
extern u8 func_02111df8[];
extern u8 func_021122f4[];
extern u8 func_02112a98[];
extern u8 func_02113188[];
extern u8 func_02113228[];
extern u8 func_02115aa8[];
extern u8 func_02115adc[];
extern u8 func_02115b10[];
extern u8 func_02115b44[];
extern u8 func_02115b78[];
extern u8 func_02115bac[];
extern u8 func_02115be0[];
extern u8 func_02115c14[];
extern u8 func_02115c48[];
extern u8 func_02115c7c[];
extern u8 func_02115cb0[];
extern u8 func_02115ce4[];
extern u8 func_02115d18[];
extern u8 func_02115d4c[];
extern u8 func_02115d80[];
extern u8 func_02115db4[];
extern u8 func_02115de8[];
extern u8 func_02115e1c[];
extern u8 func_02115e50[];
extern u8 func_02115e84[];
extern u8 func_02115eb8[];
extern u8 func_02116af8[];
extern u8 func_02116b28[];
extern u8 func_02116b58[];
extern u8 func_02116b88[];
extern u8 func_02116bb8[];
extern u8 func_02117a58[];
extern u8 func_02117a80[];
extern u8 func_02117bd0[];
extern u8 func_02117c44[];
extern u8 func_02117cb8[];
extern u8 func_02117d2c[];
extern u8 func_02117da0[];
extern u8 func_02117e14[];
extern u8 func_02117e88[];
extern u8 func_02117efc[];
extern u8 func_02117f70[];
extern u8 func_02117fe4[];
extern u8 func_02118058[];
extern u8 func_021180cc[];
extern u8 func_02118140[];
extern u8 func_021181b4[];
extern u8 func_02118228[];
extern u8 func_0211829c[];
extern u8 func_02118310[];
extern u8 func_02118384[];
extern u8 func_021183f8[];
extern u8 func_0211846c[];
extern u8 func_021184e0[];
extern u8 func_02118554[];
extern u8 func_021185c8[];
extern u8 func_0211863c[];
extern u8 func_021186b0[];
extern u8 func_0211b2d8[];
extern u8 func_02123370[];
extern u8 func_02123400[];
extern u8 func_02123490[];
extern u8 func_ov003_02161684[];
extern u8 func_ov004_02160c84[];
extern u8 func_ov004_021620d8[];
extern u8 func_ov004_021620e8[];

u32 data_0213a2a0[1] = {
    0x00000006
};
u32 data_0213a2a4[117] = {
    (u32)&func_02113228, (u32)&func_021122f4, (u32)&func_02113188, (u32)&func_0211b2d8,
    (u32)&func_021184e0, (u32)&func_0211846c, (u32)&func_021183f8, (u32)&func_02118384,
    (u32)&func_02118310, (u32)&func_021186b0, (u32)&func_0211863c, (u32)&func_021185c8,
    (u32)&func_02118554, (u32)&func_0211829c, (u32)&func_02118228, (u32)&func_021181b4,
    (u32)&func_02118140, (u32)&func_021180cc, (u32)&func_02118058, (u32)&func_02117fe4,
    (u32)&func_02117f70, (u32)&func_02117efc, (u32)&func_02117e88, (u32)&func_02117e14,
    (u32)&func_02117da0, (u32)&func_02117d2c, (u32)&func_02117cb8, (u32)&func_02117c44,
    (u32)&func_02117bd0, (u32)&func_020896f0, (u32)&func_0208967c, (u32)&func_02089608,
    (u32)&func_02089594, (u32)&func_02073814, (u32)&func_0207378c, (u32)&func_02073704,
    (u32)&func_0207367c, (u32)&func_020735f4, (u32)&func_0207356c, (u32)&func_020734e4,
    (u32)&func_0207345c, (u32)&func_020733d4, (u32)&func_0207334c, (u32)&func_020732c4,
    (u32)&func_0207323c, (u32)&func_020731b4, (u32)&func_0207312c, (u32)&func_020730a4,
    (u32)&func_02070598, (u32)&func_0210c99c, (u32)&func_02110498, (u32)&func_02117a80,
    (u32)&func_02117a58, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, (u32)&func_02110a7c, (u32)&func_02110a00,
    0x00000000, 0x00000000, (u32)&func_ov004_021620e8, (u32)&func_ov004_021620d8,
    (u32)&func_0210ead8, (u32)&func_0210eac8, (u32)&func_0210eab8, (u32)&func_0210f5a4,
    (u32)&func_0210f594, 0x00000000, (u32)&func_02116bb8, (u32)&func_02116b88,
    (u32)&func_02116b58, (u32)&func_02116b28, (u32)&func_02116af8, (u32)&func_0210b404,
    0x00000000, (u32)&func_02089e18, (u32)&func_02074cfc, (u32)&func_02112a98,
    (u32)&func_02115eb8, (u32)&func_02115e84, (u32)&func_02115e50, (u32)&func_02115e1c,
    (u32)&func_02115de8, (u32)&func_02115db4, (u32)&func_02115d80, (u32)&func_02115d4c,
    (u32)&func_02115d18, (u32)&func_02115ce4, (u32)&func_02115cb0, (u32)&func_02115c7c,
    (u32)&func_02115c48, (u32)&func_02115c14, (u32)&func_02115be0, (u32)&func_02115bac,
    (u32)&func_02115b78, (u32)&func_02115b44, (u32)&func_02115b10, (u32)&func_02115adc,
    (u32)&func_02115aa8, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, (u32)&func_02111df8,
    (u32)&func_02111de8, (u32)&func_02111dd8, (u32)&func_ov004_02160c84, (u32)&func_ov003_02161684,
    (u32)&func_02087de0, (u32)&func_02087dd0, (u32)&func_02123490, (u32)&func_02123400,
    (u32)&func_02123370
};
