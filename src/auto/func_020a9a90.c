/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a9be4(void *);                      /* extern */
M2C_UNK func_020aa014(void *);                      /* extern */
M2C_UNK func_020aa12c(void *);                      /* extern */
M2C_UNK func_020aab8c();                            /* extern */
M2C_UNK func_020aaed0(void *);                      /* extern */
M2C_UNK func_020aafc4(void *);                      /* extern */
M2C_UNK func_020ab30c();                            /* extern */
M2C_UNK func_020b8b0c(s32, u16, M2C_UNK);           /* extern */
M2C_UNK func_020bddb8(void *, M2C_UNK);             /* extern */

void func_020a9a90(void *arg0) {
    func_020aab8c();
    func_020aaed0(arg0);
    func_020aa12c(arg0);
    func_020aa014(arg0);
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        func_020a9be4(arg0);
    }
    func_020aafc4(arg0);
    func_020bddb8(arg0 + 0x198, 1);
    func_020bddb8(arg0 + 0x1B8, 1);
    func_020bddb8(arg0 + 0x1D8, 0);
    func_020bddb8(arg0 + 0x1F8, 0);
    if (M2C_FIELD(arg0, s32 *, 0x220) == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x21C) = (s32) (M2C_FIELD(arg0, s32 *, 0x21C) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x21C) >= 0x3C) {
        M2C_FIELD(arg0, s32 *, 0x21C) = 0;
        func_020ab30c();
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x21C) < 0x1E) {
        func_020b8b0c(M2C_FIELD(arg0, s32 *, 0x224), M2C_FIELD(arg0, u16 *, 0x228), 1);
        return;
    }
    func_020b8b0c(M2C_FIELD(arg0, s32 *, 0x224), M2C_FIELD(arg0, u16 *, 0x228), 0);
}
