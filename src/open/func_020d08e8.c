#include "m2c.h"
extern u16 data_02159e34;
extern void *data_02159e38;
void func_02065144(M2C_UNK);
void func_020d08e8(void) {
    M2C_FIELD(data_02159e38, u32 *, 0x0) = 1;
    {
        void *p = data_02159e38;
        M2C_FIELD(p, u16 *, 0x4) = 0;
        M2C_FIELD(p, u16 *, 0x6) = 0;
        M2C_FIELD(p, u16 *, 0x8) = 0;
    }
    func_02065144(data_02159e34);
}
