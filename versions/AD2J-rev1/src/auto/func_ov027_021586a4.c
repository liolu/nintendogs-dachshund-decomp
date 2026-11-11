/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov027_02159378(void);
void func_02070a24(void *, s32, void *);

void func_ov027_021586a4(void *arg0, void *arg1, s32 arg2) {
    if (func_ov027_02159378() != 2) {
        return;
    }
    if (arg1 == 0) {
        return;
    }
    func_02070a24(arg1, arg2, arg0);
}
