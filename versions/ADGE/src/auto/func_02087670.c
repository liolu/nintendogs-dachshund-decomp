/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02080c28(void);
void func_02080c3c(M2C_UNK);

extern s32 data_021541a8;
extern M2C_UNK data_021541ac;

void func_02087670(s32 arg0) {
    s32 temp_r0;
    void *temp_r2;
    void *temp_r2_2;

    if (M2C_FIELD(arg0, s32 *, 0) == 0) {
        return;
    }
    temp_r0 = func_02080c28();
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
    if (M2C_FIELD(&data_021541ac, s32 *, 0) == arg0) {
        M2C_FIELD(&data_021541ac, s32 *, 8) = 0;
        M2C_FIELD(&data_021541ac, s16 *, 6) = 0;
        M2C_FIELD(&data_021541ac, s32 *, 0) = (s32) data_021541a8;
        M2C_FIELD(&data_021541ac, s16 *, 4) = 0;
    }
    func_02080c3c(temp_r0);
}
