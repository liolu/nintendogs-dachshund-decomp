/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_ov002_0218b24c(void *, s32, s32);

void func_ov002_0218b1bc(void *arg0) {
    u8 *p = (u8 *) arg0;
    s64 prod;
    u64 sum;

    prod                 = (s64) * (s32 *) (p + 0x260) * (s64) * (s32 *) (p + 0x258);
    sum                  = (u64) prod + 0x800;
    *(s32 *) (p + 0x260) = (s32) (sum >> 12);

    prod                 = (s64) * (s32 *) (p + 0x268) * (s64) * (s32 *) (p + 0x258);
    sum                  = (u64) prod + 0x800;
    *(s32 *) (p + 0x268) = (s32) (sum >> 12);

    func_ov002_0218b24c(arg0, 0, -1);
}
