#include "m2c.h"

extern u8 data_02147e8c[];
void *func_02114cec(s16);

extern void *data_02159fe4;
extern void *data_02159e70;
void func_0206cbc4(u16, void *, s32);
void func_0207e124(s32);
s32 func_0207dd68(s32, u32);
s32 func_020034f0(s32, s32);
extern s16 data_02147e8c2[];
void func_020e8570(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32);
M2C_UNK func_020b114c(void *, M2C_UNK, M2C_UNK, s32, s32, s32);
void func_020e82bc(void) {
    u8 *e;
    u8 *t;
    s16 i;
    s16 key;
    s8 key2;
    s8 *obj;

    for (e = data_02147e8c; M2C_FIELD(e, s16 *, 4) != -1; e += 0x20) {
        M2C_FIELD(e, u16 *, 0xC) = 0;
    }
    for (i = 0; i < 0xC8; i = (s16) (i + 1)) {
        obj = func_02114cec(i);
        if (M2C_FIELD(obj, s16 *, 0) == -1) {
            continue;
        }
        key = M2C_FIELD(obj, s16 *, 0);
        key2 = M2C_FIELD(obj, s8 *, 2);
        t = data_02147e8c;
        while (M2C_FIELD(t, s16 *, 4) != -1) {
            if (M2C_FIELD(t, s16 *, 2) == key && M2C_FIELD(t, s16 *, 0) == key2) {
                goto found;
            }
            t += 0x20;
        }
        t = NULL;
    found:
        if (t != NULL) {
            M2C_FIELD(t, u16 *, 0xC) = M2C_FIELD(obj, s8 *, 3);
        }
    }
}
