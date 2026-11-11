/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov004_0216da70(void);
extern s32 *data_ov004_0216e3c4;

s32 func_ov004_0216c608(void) {
    if ((data_ov004_0216e3c4 != NULL) && (*data_ov004_0216e3c4 != 0)) {
        return func_ov004_0216da70();
    }
    return 0;
}
