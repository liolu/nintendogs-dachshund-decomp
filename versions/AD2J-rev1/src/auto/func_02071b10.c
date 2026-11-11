/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_0207d680(void *, M2C_UNK);               /* extern */
M2C_UNK func_0207d698(void *, void *);              /* extern */
extern M2C_UNK data_0214f37c;

s32 func_02071b10(s32 arg0, void *arg1) {
    void *temp_r0;
    void *temp_r5;

    temp_r5 = (M2C_UNK *) ((s8 *) &data_0214f37c + (arg0 << 5));
    temp_r0 = func_0207d680(temp_r5 + 0xC, 0);
    if (temp_r0 == NULL) {
        return 0;
    }
    func_0207d698(temp_r5 + 0xC, temp_r0);
    M2C_FIELD(temp_r0, void **, 0xC) = arg1;
    M2C_FIELD(arg1, void **, 8)      = temp_r0;
    return M2C_FIELD(temp_r0, s32 *, 8);
}
