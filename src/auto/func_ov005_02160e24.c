/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_ov005_02165fa0;
s32 func_01ffdb08(s16 a);
void func_ov005_02161dec(s32 a, s32 b, void *c);
void func_02081b5c(void *a, void *b, void *c);
s32 func_02028120(s32 a);

void func_ov005_02160e24(u8 *arg0) {
    s32 sa[3];
    s32 sb[3];
    s32 t;
    s64 p;

    t = func_01ffdb08(*(s16 *) data_ov005_02165fa0);
    func_ov005_02161dec(t, 0, sa);
    func_ov005_02161dec(t, 1, sb);
    func_02081b5c(arg0, sa, sb);
    p = (s64) func_02028120(t) * 0xA66;
    p += 0x800;
    *(s32 *) (arg0 + 0x44) = (s32) (p >> 12);
    *(s32 *) (arg0 + 0x54) = *(s16 *) (data_ov005_02165fa0 + 8);
}
