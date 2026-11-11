/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0208120c(void);
void func_02081220(M2C_UNK);

extern s32 data_02153680;
extern M2C_UNK data_02153684;

void func_0208ade8(s32 arg0) {
    s32 temp_r0;
    void *temp_r2;
    void *temp_r2_2;

    if (M2C_FIELD(arg0, s32 *, 0) == 0) {
        return;
    }
    temp_r0 = func_0208120c();
    temp_r2 = M2C_FIELD(arg0, void **, 4);
    if (temp_r2 != NULL) {
        M2C_FIELD(temp_r2, void **, 8) = (void *) M2C_FIELD(arg0, void **, 8);
    }
    temp_r2_2 = M2C_FIELD(arg0, void **, 8);
    if (temp_r2_2 != NULL) {
        M2C_FIELD(temp_r2_2, void **, 4) = (void *) M2C_FIELD(arg0, void **, 4);
    }
    M2C_FIELD(arg0, s32 *, 0)    = 0;
    M2C_FIELD(arg0, void **, 8)  = NULL;
    M2C_FIELD(arg0, void **, 4)  = (void *) M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) & ~1);
    if (M2C_FIELD(&data_02153684, s32 *, 0) == arg0) {
        M2C_FIELD(&data_02153684, s32 *, 8) = 0;
        M2C_FIELD(&data_02153684, s16 *, 6) = 0;
        M2C_FIELD(&data_02153684, s32 *, 0) = (s32) data_02153680;
        M2C_FIELD(&data_02153684, s16 *, 4) = 0;
    }
    func_02081220(temp_r0);
}
