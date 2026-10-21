#include "m2c.h"
extern u8 data_02144280;
extern u8 data_02144298;
extern u8 data_021442b0;
extern u8 data_021442c0;
extern u8 data_021442d0;
extern u8 data_021442f0;
extern u8 data_021442fc;
extern u8 data_02144314;
extern u8 data_0214431c;
extern u8 data_02144324;
extern u8 data_0214432c;
extern u8 data_02144344;
extern u8 data_02144358;
extern u8 data_0214436c;
extern u8 data_02144378;
extern u8 data_02144380;
extern u8 data_02144394;
extern u8 data_0214439c;
void *func_020d5e94(s32 arg0) {
    void *p;

    p = &data_02144280;
    switch (arg0 - 0x30000) {
    case 0:
        return &data_02144298;
    case 2:
        return &data_021442b0;
    case 3:
        return &data_021442c0;
    case 4:
        return &data_021442d0;
    case 5:
        return &data_021442f0;
    case 6:
        return &data_021442fc;
    case 8:
        return &data_02144314;
    case 9:
        return &data_0214431c;
    case 11:
        return &data_02144324;
    case 13:
        return &data_0214432c;
    case 14:
        return &data_02144344;
    case 15:
        return &data_02144358;
    case 16:
        return &data_0214436c;
    case 17:
        return &data_02144378;
    case 18:
        return &data_02144380;
    case 19:
        return &data_02144394;
    case 21:
        return &data_0214439c;
    }
    return p;
}
