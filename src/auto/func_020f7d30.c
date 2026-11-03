/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02001f54(M2C_UNK *);                   /* extern */
extern s32 data_0215548c;
extern s32 data_02155494;
extern s32 data_02155498;
extern M2C_UNK data_0215549c;

void func_020f7d30(void) {
    if (data_02155494 == 0) {
        return;
    }
    if (data_02155498 != 0) {
        return;
    }
    func_02001f54(&data_0215549c);
    data_0215548c = M2C_FIELD(&data_0215549c, s32 *, 4);
    data_02155498 = 1;
}
