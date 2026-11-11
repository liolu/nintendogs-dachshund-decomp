/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0208ff8c(M2C_UNK);                     /* extern */
M2C_UNK func_02098bac(void *, M2C_UNK, M2C_UNK);    /* extern */
extern void *data_02154224;

s32 func_02088e24(void) {
    if (M2C_FIELD(data_02154224, s16 *, 0x4E30) == 0) {
        return 0;
    }
    func_02098bac(data_02154224, 0x39, 1);
    func_0208ff8c(0x7E);
    return 1;
}
