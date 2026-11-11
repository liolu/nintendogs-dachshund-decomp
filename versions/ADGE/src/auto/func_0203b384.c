/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02033c98(void *);                      /* extern */
extern void *data_0215a064;

typedef struct {
    s32 f0;
    s32 f1;
    s32 f2;
} M2C_S12;

void func_0203b384(void *arg0) {
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r3;

    temp_r3                          = arg0 + 0x3B4;
    temp_r0                          = M2C_FIELD(data_0215a064, void **, 0x1C);
    temp_r0_2                        = temp_r0 + 0x30;
    *(M2C_S12 *) ((s8 *) arg0 + 948) = *(M2C_S12 *) ((s8 *) temp_r0 + 48);

    func_02033c98(arg0);
}
