#include "m2c.h"
s32 func_020a5d54(M2C_UNK);
void func_020eb9fc(M2C_UNK, M2C_UNK, M2C_UNK);
extern void *data_02159e70;
extern void func_02003d80(s32);
extern void func_ov006_02162a30(s32);
extern void func_020e26e0(s32);
void func_020f0a5c(M2C_UNK);
void func_020e23fc(M2C_UNK);
extern char data_02124e68[];
M2C_UNK func_020d6068(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020039c8(void);                        /* extern */
void func_020d6a1c(void);                           /* extern */
extern s32 func_01ffdb08(s16);
extern void func_020eb9a8(s32, u16 *, s32);
extern u16 *data_02146a54[];
extern u16 *data_02146a60[];
void func_020ef10c(s32 arg0) {
    s32 arr[3];
    s32 v;
    s32 i;

    v = func_020a5d54(arg0);
    for (i = 0; i < 3; i++) {
        arr[i] = 0;
    }
    if (v >= 0 && v < 3) {
        arr[v] = 1;
    }
    for (i = 0; i < 3; i++) {
        func_020eb9fc(2, (u16) arg0, arr[i]);
        arg0++;
    }
}
