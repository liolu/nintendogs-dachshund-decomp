/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_ov004_02163cc0;
s32 func_01ffda04(s16 a);
void func_ov004_0215f9b4(s32 a, s32 b, void *c);
void func_020852d4(void *a, void *b, void *c);
s32 func_020280f8(s32 a);

void func_ov004_0215e9ec(u8 *arg0) {
    s32 sa[3];
    s32 sb[3];
    s32 t;
    s64 p;

    t = func_01ffda04(*(s16 *) data_ov004_02163cc0);
    func_ov004_0215f9b4(t, 0, sa);
    func_ov004_0215f9b4(t, 1, sb);
    func_020852d4(arg0, sa, sb);
    p = (s64) func_020280f8(t) * 0xA66;
    p += 0x800;
    *(s32 *) (arg0 + 0x44) = (s32) (p >> 12);
    *(s32 *) (arg0 + 0x54) = *(s16 *) (data_ov004_02163cc0 + 8);
}
