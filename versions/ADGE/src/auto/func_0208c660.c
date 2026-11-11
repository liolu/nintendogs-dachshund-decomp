#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0213cf48;

s32 func_0208c660(s32 arg0) {
    void *temp_r0;

    temp_r0 = *((M2C_UNK *) ((s8 *) &data_0213cf48 + (arg0 * 4)));
    if (temp_r0 != NULL) {
        return M2C_FIELD(temp_r0, s32 *, 4);
    }
    return -1;
}
