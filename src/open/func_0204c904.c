#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Blk3;

void *func_02036258(void *);
void func_02027644(void *, void *);
void func_0203910c(void *);
s32 func_02037130(void *, s32);
s32 func_0203260c(void *);
s32 func_020276f8(void *);
void func_020358c8(void *);
s32 func_02028714(void *, s32, s32);
s32 func_0203560c(void *, s32);
s32 func_020354a8(void *, s32);
void func_0202fa6c(void *, s32);
s32 func_01ffdb08(s32);
void func_02027658(s32, void *);
void func_0203913c(void *, void *, s32);
s32 func_0204e4c4(void *, s32);
s32 func_02028114(void *);
s32 func_0203278c(void *, s32);
void func_02056404(void *, void *);
void func_020554bc(void *, void *);

void func_0204c904(void *arg0, s32 arg1) {
    s32 var_r9;
    s32 var_r8;
    void *temp_r5;
    s32 sp0[3];
    s32 temp_r4;
    s32 temp_q;
    s32 var_r0;

    var_r9 = -1;
    var_r8 = var_r9;
    temp_r5 = func_02036258(arg0);
    if (temp_r5 != NULL) {
        func_02027644(temp_r5, (u8 *) arg0 + 0x26C);
        *(Blk3 *) ((u8 *) arg0 + 0x3B4) = *(Blk3 *) ((u8 *) arg0 + 0x26C);
        func_0203910c(arg0);
        temp_r4 = func_02037130(arg0, 0x302);
        var_r9 = func_0203260c(arg0);
        var_r8 = func_020276f8(temp_r5);
    }
    func_020358c8(arg0);
    if (func_02028714(arg0, 0, 1) != 0) {
        return;
    }
    if (func_0203560c(arg0, 0) != 0) {
        return;
    }
    if (func_020354a8(arg0, 0) != 0) {
        return;
    }
    if (temp_r5 == NULL) {
        func_0202fa6c(arg0, 0);
        return;
    }
    if ((var_r9 != -1) && (var_r9 != var_r8)) {
        temp_q = func_01ffdb08(var_r9);
        if (temp_q == 0) {
            return;
        }
        func_02027658(temp_q, sp0);
        func_0203913c(arg0, sp0, var_r9);
        return;
    }
    if (func_0204e4c4(arg0, arg1) != 0) {
        return;
    }
    if (M2C_FIELD(temp_r5, s16 *, 0xEA) >= 0x270) {
        if (M2C_FIELD(temp_r5, s16 *, 0xEA) <= 0x273) {
            var_r0 = 1;
            goto L_a1;
        }
    }
    var_r0 = 0;
L_a1:
    if (var_r0 != 0) {
        var_r0 = 1;
        goto L_test1;
    }
    if (M2C_FIELD(temp_r5, s16 *, 0xEA) >= 0x259) {
        if (M2C_FIELD(temp_r5, s16 *, 0xEA) <= 0x25F) {
            var_r0 = 1;
            goto L_b1;
        }
    }
    var_r0 = 0;
L_b1:
    if (var_r0 != 0) {
        if (M2C_FIELD(temp_r5, s16 *, 0xEE) >= 0x270) {
            if (M2C_FIELD(temp_r5, s16 *, 0xEE) <= 0x273) {
                var_r0 = 1;
                goto L_c1;
            }
        }
        var_r0 = 0;
    L_c1:
        if (var_r0 != 0) {
            var_r0 = 1;
            goto L_test1;
        }
    }
    var_r0 = 0;
L_test1:
    if (var_r0 != 0) {
        if (M2C_FIELD(arg0, u16 *, 0xFC) > 0x12C) {
            if (temp_r4 < func_02028114(arg0)) {
                goto L_tail;
            }
            if (func_0203278c(arg0, func_020276f8(temp_r5)) != 0) {
                goto L_tail;
            }
        }
    }
    if (M2C_FIELD(temp_r5, s16 *, 0xEA) >= 0x270) {
        if (M2C_FIELD(temp_r5, s16 *, 0xEA) <= 0x273) {
            var_r0 = 1;
            goto L_a2;
        }
    }
    var_r0 = 0;
L_a2:
    if (var_r0 != 0) {
        var_r0 = 1;
        goto L_test2;
    }
    if (M2C_FIELD(temp_r5, s16 *, 0xEA) >= 0x259) {
        if (M2C_FIELD(temp_r5, s16 *, 0xEA) <= 0x25F) {
            var_r0 = 1;
            goto L_b2;
        }
    }
    var_r0 = 0;
L_b2:
    if (var_r0 != 0) {
        if (M2C_FIELD(temp_r5, s16 *, 0xEE) >= 0x270) {
            if (M2C_FIELD(temp_r5, s16 *, 0xEE) <= 0x273) {
                var_r0 = 1;
                goto L_c2;
            }
        }
        var_r0 = 0;
    L_c2:
        if (var_r0 != 0) {
            var_r0 = 1;
            goto L_test2;
        }
    }
    var_r0 = 0;
L_test2:
    if (var_r0 != 0) {
        return;
    }
    if (temp_r4 < func_02028114(arg0)) {
        goto L_tail;
    }
    if (func_0203278c(arg0, func_020276f8(temp_r5)) == 0) {
        return;
    }
L_tail:
    if (arg1 == 3) {
        func_02056404(arg0, temp_r5);
    } else {
        func_020554bc(arg0, temp_r5);
    }
}
