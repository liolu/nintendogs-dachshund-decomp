#include "m2c.h"
extern M2C_UNK data_02130ea8;
extern s32 data_02143c58;
extern void func_02002f94();
extern void func_02002e60();
s32 func_020d2b28(s32 arg0, s32 arg1) {
    u8 buf[0x20];
    s32 *entry = (s32 *) ((s8 *) &data_02130ea8 + arg0 * 8);
    s32 v = entry[0];
    s32 rc;

    data_02143c58 = v;
    func_02002f94(buf, entry[1], v);
    rc = ((s32 (*) ()) func_02002e60)(buf, arg1);
    data_02143c58 = -1;
    return rc;
}
