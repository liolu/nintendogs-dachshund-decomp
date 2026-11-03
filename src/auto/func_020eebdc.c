/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020ee8c8(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020efa24(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020efa78(M2C_UNK, M2C_UNK);
void func_020efb78(M2C_UNK);

void func_020eebdc(s32 arg0) {
    switch (arg0) {                                 /* irregular */
        case 0x2D:
            func_020efa78(7, 0);
            func_020efa78(6, 0);
            func_020efb78(0xD);
            func_020efa24(0, 0x6E, 0x78);
            break;
        case 0x36:
            func_020efb78(0xB);
            break;
    }
    func_020ee8c8(arg0, 0x7F, 0);
}
