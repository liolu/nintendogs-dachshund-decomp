/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 *data_0214da84;
void func_02026484(void *);
void func_02025850(void *);
void func_02033e78(void *);

void func_ov003_02163bc4(void *arg0) {
    u32 v;
    u16 t;

    v                              = (u32) *data_0214da84 * 0x10DCD + 1;
    *data_0214da84                 = (s32) v;
    t                              = (u16) ((v << 16) >> 30);
    *(u16 *) ((u8 *) arg0 + 0x152) = (u16) (t + 0x9B);
    func_02026484(arg0);
    func_02025850(arg0);
    func_02033e78(arg0);
}
