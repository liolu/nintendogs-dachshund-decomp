#include "m2c.h"
s32 func_02028714(void *, void *, void *);          /* extern */
s32 func_02027700(void *, void *);                  /* extern */
void func_02027658(void *, void *);                 /* extern */
void func_02027644(void *, void *);                 /* extern */
s32 func_02027700(void *, void *);                  /* extern */
void func_0202706c(void *, s32);                    /* extern */
void *func_02036258(void *);                        /* extern */
s32 func_0203910c(void *);                          /* extern */
s32 func_02037130(void *, void *);                  /* extern */
void func_020358c8(void *);                         /* extern */
s32 func_0203560c(void *, void *);                  /* extern */
s32 func_020354a8(void *, void *);                  /* extern */
s32 func_0202f9a0(void *);                          /* extern */
void func_02035fd8(void *);                         /* extern */
void func_0202fa5c(void *);                         /* extern */
s32 func_0203535c(void *);                          /* extern */
s32 func_0204469c(void);                            /* extern */
void func_02035fcc(void *, s16);                    /* extern */
void func_0203e5e8(void *, s32);                    /* extern */
s32 func_0206823c(void *, void *, void *);          /* extern */
void func_0204b164(void *arg0) {
    u8 local_c[12];
    void *temp_r4;
    s32 var_r0;

    temp_r4 = func_02036258(arg0);
    if (temp_r4 != NULL) {
        func_02027658(temp_r4, local_c);
        func_0206823c(arg0 + 0x2A0, local_c, arg0 + 0x26C);
        func_02027644(temp_r4, arg0 + 0x3B4);
        func_0203910c(arg0);
        func_02037130(arg0, (void *) 0x302);
    }
    func_020358c8(arg0);
    if (func_02028714(arg0, (void *) 0, (void *) 1) != 0) {
        var_r0 = 1;
    } else if (func_0203560c(arg0, (void *) 0) != 0) {
        var_r0 = 1;
    } else if (func_020354a8(arg0, (void *) 0) != 0) {
        var_r0 = 1;
    } else if (temp_r4 != 0) {
        var_r0 = 0;
    } else {
        func_0202f9a0(arg0);
        func_02035fd8(arg0);
        var_r0 = 1;
    }
    if (var_r0 != 0) {
        return;
    }
    temp_r4 = func_02036258(arg0);
    if (M2C_FIELD(arg0, u16 *, 0xFC) > 0xC8) {
        func_02035fd8(arg0);
        func_0202fa5c(arg0);
        return;
    }
    if (temp_r4 == 0) {
        func_02035fd8(arg0);
        func_0202f9a0(arg0);
        return;
    }
    if (func_0203535c(temp_r4) == 0) {
        return;
    }
    switch (func_02027700(arg0, temp_r4)) {
    case 1:
        func_02035fd8(arg0);
        func_0202fa5c(arg0);
        return;
    case 0:
        func_02035fd8(arg0);
        func_0202fa5c(arg0);
        return;
    case -1:
        if ((func_0204469c() & 0x100) == 0) {
            func_0202fa5c(arg0);
            return;
        }
        break;
    default:
        return;
    }
    if ((u8) ((s8) (M2C_FIELD(arg0, s8 *, 0x8B) - 4)) <= 1) {
        return;
    }
    if ((u8) ((s8) (M2C_FIELD(temp_r4, s8 *, 0x8B) - 4)) <= 1) {
        return;
    }
    func_02035fcc(arg0, (s32) (s16) M2C_FIELD(temp_r4, s8 *, 0x88));
    func_0203e5e8(arg0, 0x273);
    func_02035fcc(temp_r4, (s32) (s16) M2C_FIELD(arg0, s8 *, 0x88));
    func_0202706c(temp_r4, 0x16);
}
