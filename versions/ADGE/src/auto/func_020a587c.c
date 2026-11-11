/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020c36c0(M2C_UNK, M2C_UNK);

extern s32 data_021555f4;

void func_020a587c(s32 arg0) {
    switch (arg0) {                                 /* irregular */
        case 0:
            func_020c36c0(data_021555f4 + 0x27C, 2);
            return;
        case 1:
            func_020c36c0(data_021555f4 + 0x27C, 1);
            return;
    }
}
