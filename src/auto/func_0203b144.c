/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02033b9c(void *);                      /* extern */
extern void *data_02153720;

typedef struct {
    s32 f0;
    s32 f1;
    s32 f2;
} M2C_S12;

void func_0203b144(void *arg0) {
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r3;

    temp_r3                          = arg0 + 0x3D8;
    temp_r0                          = M2C_FIELD(data_02153720, void **, 0x1C);
    temp_r0_2                        = temp_r0 + 0x30;
    *(M2C_S12 *) ((s8 *) arg0 + 984) = *(M2C_S12 *) ((s8 *) temp_r0 + 48);

    func_02033b9c(arg0);
}
