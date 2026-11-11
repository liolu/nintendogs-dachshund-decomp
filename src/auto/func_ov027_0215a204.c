/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0208022c(s32, s32);
void func_02007344(void *, s32, s32);
extern void *data_ov027_0215a660;

void func_ov027_0215a204(void) {
    void *temp_r1;
    s32 t;

    temp_r1 = *(void **) ((u8 *) data_ov027_0215a660 + 0x4);
    t       = *(s32 *) temp_r1;
    func_0208022c(t, *(s32 *) ((u8 *) temp_r1 + 0x10));
    func_02007344(*(void **) ((u8 *) data_ov027_0215a660 + 0x4), 0, 0);
}
