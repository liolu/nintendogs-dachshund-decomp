#include "m2c.h"
#include "engine.h"
extern u16 data_02155668;
extern s32 data_02155678;
extern s32 data_0215567c;
s32 func_020643e8(void);
s32 func_020648b8(M2C_UNK, void *);
s32 func_02080c28();
M2C_UNK func_02080c3c(s32);
extern u16 data_0215566c;
extern u16 data_02155664;
extern M2C_UNK data_02155680;
s32 func_020c046c(s32 arg0) {
    s32 ret;
    if (M2C_FIELD(arg0, u16 *, 2) == 0) {
        data_0215567c = 0;
        data_02155678 = 3;
        ret = 1;
    } else {
        ret = 0;
    }
    if (ret != 0) {
        if (data_02155668 == 0) {
            data_02155668 = func_020643e8();
        }
        return 1;
    }
    return 0;
}
