#include "m2c.h"
s32 func_021057d0(void);
s32 func_021057c8(void);
void func_02118da0(void *);
void func_ov004_0215a6b4(void);
extern void *data_0215a064;
void func_0210d7ec(void *arg0) {
    switch (M2C_FIELD(arg0, s16 *, 0x90)) {
    case 1:
        M2C_FIELD(arg0, s32 *, 0xBC) = M2C_FIELD(arg0, s32 *, 0xBC) - func_021057d0();
        if (M2C_FIELD(arg0, s32 *, 0xBC) >= -func_021057c8()) {
            return;
        }
        func_02118da0(data_0215a064);
        func_ov004_0215a6b4();
        return;
    case 2:
        return;
    }
}
