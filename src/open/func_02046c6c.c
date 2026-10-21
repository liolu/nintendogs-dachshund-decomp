#include "m2c.h"
s32 func_0204722c(M2C_UNK, M2C_UNK);                /* extern */
void func_0204f918(s32);                            /* extern */
extern u32 data_0214da84;                           /* extern */
s32 func_0204722c(M2C_UNK, M2C_UNK);
void func_0204f918(s32);
extern u32 data_0214da84;
s32 func_02028114(M2C_UNK);
void func_0202507c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_02024f08(M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_0203535c(M2C_UNK);
void func_0202fa5c(M2C_UNK);
void func_0204f918(M2C_UNK);
void func_02046c6c(s32 arg0) {
    u32 *p;
    u32 t;
    u32 q;

    if (func_0204722c(arg0, 1) != 0) {
        return;
    }
    p = (u32 *) data_0214da84;
    t = *p * 0x10DCD + 1;
    q = (u16) t * 50;
    *p = t;
    if ((u16) (q >> 16) == 0) {
        func_0204f918(arg0);
    }
}
