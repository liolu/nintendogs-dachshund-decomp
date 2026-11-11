/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020c2578(M2C_UNK, M2C_UNK);

extern s32 data_021555f4;

void func_020a5960(s32 arg0) {
    switch (arg0) {                                 /* irregular */
        case 0:
            func_020c2578(data_021555f4 + 0x88, 1);
            return;
        case 1:
            func_020c2578(data_021555f4 + 0x88, 2);
            return;
    }
}
