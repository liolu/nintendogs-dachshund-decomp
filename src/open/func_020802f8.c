#include "m2c.h"
extern u32 data_021540c0;
u32 func_0207fc98(void);
u32 func_020802f8(u32 arg0) {
    switch (arg0) {
    case 0:
        return 0x02198860;
    case 2:
        if (data_021540c0 == 0 || (func_0207fc98() & 3) == 1) {
            return 0;
        }
        return 0x02400000;
    case 3:
        return 0x01FFEB00;
    case 4:
        return 0x027C0BE0;
    case 5:
        return 0x027FF000;
    case 6:
        return 0x037F8000;
    }
    return 0;
}
