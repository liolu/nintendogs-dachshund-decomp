/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_01ffdb08(M2C_UNK);
M2C_UNK func_020344e8(M2C_UNK);
void func_0208deb4(M2C_UNK, M2C_UNK);
void func_020a83c0(M2C_UNK);
s32 func_020afb54(void *, M2C_UNK);
M2C_UNK func_020b1ddc(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_021057c8(void);
M2C_UNK func_021057d0(void);
void func_02118da0(void *);
void func_ov004_0215a6b4(void);

extern void *data_0215a064;
extern void *data_0215a078;

void func_020c26bc(s32 arg0) {
    u8 sp0[12];
    s16 temp_r1;
    s32 temp_r5;

    temp_r1 = M2C_FIELD(arg0, s16 *, 0x90);
    switch (temp_r1) {                              /* irregular */
        case 2:
            return;
        case 1:
            temp_r5                      = func_01ffdb08((s32) M2C_FIELD(data_0215a078, s16 *, 2));
            M2C_FIELD(arg0, s32 *, 0xBC) = (s32) (M2C_FIELD(arg0, s32 *, 0xBC) - func_021057d0());
            if ((temp_r5 != 0) && (func_020344e8(temp_r5) != 0) &&
                (func_020b1ddc(temp_r5, arg0 + 0xBC, 0x5EC, (s32) sp0) != 0)) {
                func_020afb54((void *) arg0, (s32) M2C_FIELD(data_0215a078, s16 *, 2));
                func_0208deb4(0, 0x96);
                return;
            }
            if ((s32) M2C_FIELD(arg0, s32 *, 0xBC) >= (s32) (0 - func_021057c8())) {
                return;
            }
            func_02118da0(data_0215a064);
            func_ov004_0215a6b4();
            return;
        case 4:
            func_020a83c0(arg0);
            return;
    }
}
