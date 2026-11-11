/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_ov027_02159524();                      /* extern */
extern void *data_ov027_02159bb0;

s32 func_ov027_021594e4(void) {
    if (M2C_FIELD(data_ov027_02159bb0, s32 *, 0x1C) != 1) {
        return 0;
    }
    func_ov027_02159524();
    return 1;
}
