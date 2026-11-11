/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov003_0216b4ec(void);
extern s32 *data_ov003_0216be24;

s32 func_ov003_0216a084(void) {
    if ((data_ov003_0216be24 != NULL) && (*data_ov003_0216be24 != 0)) {
        return func_ov003_0216b4ec();
    }
    return 0;
}
