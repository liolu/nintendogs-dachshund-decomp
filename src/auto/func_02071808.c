/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0207d698(M2C_UNK *, void *);           /* extern */
M2C_UNK func_02071a6c(M2C_UNK *, void *);           /* extern */
M2C_UNK func_02071a0c(void *);                      /* extern */
extern M2C_UNK data_0214f370;

void func_02071808(void *arg0, s8 arg1) {
    M2C_UNK *temp_r4;

    temp_r4 = M2C_FIELD(arg0, M2C_UNK **, 4);
    if (temp_r4 != NULL) {
        func_0207d698(temp_r4, arg0);
        M2C_FIELD(arg0, M2C_UNK **, 4) = NULL;
    }
    func_0207d698(&data_0214f370, arg0);
    M2C_FIELD(arg0, s8 *, 0x3D) = arg1;
    if (temp_r4 != NULL) {
        func_02071a6c(temp_r4, arg0);
    }
    func_02071a0c(arg0);
}
