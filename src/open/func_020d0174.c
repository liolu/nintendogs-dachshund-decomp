#include "m2c.h"
extern void *data_02159e74;
void func_0206cbc4(M2C_UNK, M2C_UNK, M2C_UNK);
extern char data_0214da84[];
extern s32 data_02159e38;
s32 func_02028714(void *, M2C_UNK, M2C_UNK);
s32 func_0202c9f0(void *, M2C_UNK);
void *func_020350fc(void *);
M2C_UNK func_0203e5ac(void *, M2C_UNK, M2C_UNK);
M2C_UNK func_0203e5e8(void *, M2C_UNK);
s32 func_ov003_02196338(void *);
void func_02022b6c(M2C_UNK);
s32 func_02022ddc(void *, s16, u8);
extern void *data_02159e70;
void func_020ccd00(s32, s32, s32, s32);
void func_020d0174(char *arg0, unsigned short *arg1) {
    short i;
    unsigned short v;

    for (i = 0; i < 0x8; i = (short) (i + 1)) {
        *(short *) (arg0 + (i * 2) + 0x78) = 0;
    }
    for (i = 0; i < 0x7; i = (short) (i + 1)) {
        v = *arg1;
        if (v == 0) {
            return;
        }
        *(short *) (arg0 + (i * 2) + 0x78) = v;
        arg1++;
    }
}
