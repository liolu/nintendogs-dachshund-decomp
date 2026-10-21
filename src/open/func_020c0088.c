#include "m2c.h"
#include "engine.h"
s32 func_020648b8(M2C_UNK, void *);                  /* extern */
s32 func_02080c28();                                /* extern */
M2C_UNK func_02080c3c(s32);                         /* extern */
extern u16 data_0215566c;
extern u16 data_02155668;
extern M2C_UNK data_02155680;
extern s32 data_0215567c;
s32 func_020648b8(M2C_UNK, void *);
s32 func_02080c28();
M2C_UNK func_02080c3c(s32);
s32 func_020643e8(void);
extern u16 data_02155664;
extern s32 data_02155678;
s32 func_020c0088(M2C_UNK arg0, u16 *arg1) {
    s32 temp_r4;

    temp_r4 = func_02080c28();
    if ((data_0215567c == 1) || (data_0215566c == 1)) {
        *arg1 = 0x17;
        return 0;
    }
    if (data_02155668 == 0x8000) {
        *arg1 = 3;
        func_02080c3c(temp_r4);
        return 0;
    }
    if (data_02155668 == 0) {
        *arg1 = 0x15;
        func_02080c3c(temp_r4);
        return 0;
    }
    *arg1 = func_020648b8(arg0, &data_02155680);
    if (*arg1 == 2) {
        data_0215567c = 1;
        func_02080c3c(temp_r4);
        return 1;
    }
    func_02080c3c(temp_r4);
    return 0;
}
