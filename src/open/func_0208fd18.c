#include "m2c.h"
extern u32 data_0213cf48[];
extern u8 data_02154300[];
extern u8 data_02154358[];
extern u8 data_02154350[];
s32 func_0208c9ac(s32);
void func_02073328(void *, s32, s32);
void func_0208ff8c(s32);
void func_0208fd18(s32 arg0, s32 arg1) {
    u8 *p;

    if (arg0 == 0) {
        p = (u8 *) data_0213cf48[arg1];
        if (p != 0 && arg1 != *(s16 *) data_02154300) {
            if (p[1] == 0x30 && func_0208c9ac(0x1E) != 0) {
                func_02073328(data_02154358, 0x30, 0x9);
            }
            *(u16 *) (data_02154350 + 0x36) = 1;
        }
    }
    func_0208ff8c(0x21);
}
