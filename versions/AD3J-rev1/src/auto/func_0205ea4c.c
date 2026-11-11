/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_0205e8bc(void *, const void *, u32);

s32 func_0205ea4c(u8 *obj, const void *src, u32 n) {
    u32 pos = *(u32 *) (obj + 8);
    u32 cap = *(u32 *) (obj + 4);
    u32 cnt = n;

    if (pos + n > cap) {
        cnt = cap - pos;
    }
    func_0205e8bc(*(u8 **) obj + pos, src, cnt);
    *(u32 *) (obj + 8) = *(u32 *) (obj + 8) + cnt;
    return 1;
}
