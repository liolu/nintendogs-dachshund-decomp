#include "m2c.h"
extern void *data_02159e70;
void func_020eae68(s32 arg0, s32 arg1, s32 arg2);
void func_020eae18(s32 arg0, s32 arg1, s32 arg2);
void func_02003db4(s32 arg0);
void func_0209db9c(s32 arg0) {
    switch (M2C_FIELD(data_02159e70, s32 *, 0xBC)) {
    case 0x18:
    case 0x1A:
        func_020eae68(0x14, *(s16 *) (arg0 + 0x1C18), *(s16 *) (arg0 + 0x1C1A));
        break;
    case 0x19:
    case 0x1B:
        func_02003db4(0xA);
        func_020eae18(0x14, *(s16 *) (arg0 + 0x1C18), *(s16 *) (arg0 + 0x1C1A));
        break;
    }
}
