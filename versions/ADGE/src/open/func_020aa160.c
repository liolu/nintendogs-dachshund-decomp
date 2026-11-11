#include "m2c.h"
extern s32 func_01ffdb08(s16);
extern void func_020a8a94(void *, void *);
extern void func_020aa73c(void *, void *, void *);
extern void func_020aa550(void *);
extern void func_020aa380(void *);
extern s32 func_02033ec4(s32);
extern s32 func_02033eb8(s32);
extern void func_020afb00(void *);
extern void func_020afbc4(void *);
void func_020aa160(void *arg0) {
    u8 buf[16];
    s32 *var_r5;
    s32 var_r4;

    var_r5 = M2C_FIELD(arg0, s32 **, 0x214);
    var_r4 = func_01ffdb08(M2C_FIELD(arg0, s16 *, 0x98));
    func_020a8a94(arg0, buf);
    if (M2C_FIELD(var_r5, s32 *, 0x1C) == 0) {
        func_020aa73c(arg0, NULL, buf);
    } else {
        func_020aa73c(arg0, buf, NULL);
    }
    func_020aa550(arg0);
    func_020aa380(arg0);
    if (func_02033ec4(var_r4) != 0) {
        return;
    }
    if (func_02033eb8(var_r4) != 0) {
        func_020afb00(arg0);
        return;
    }
    func_020afbc4(arg0);
}
