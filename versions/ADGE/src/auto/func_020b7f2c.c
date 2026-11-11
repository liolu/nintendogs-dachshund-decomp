/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020b81d8(s32, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */

void func_020b7f2c(s32 *arg0, void *arg1, void *arg2, s32 *arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8,
                   void *arg9) {
    s32 *sp18;
    s32 *sp14;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r0_6;
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r2_3;
    s32 temp_r2_4;
    s32 temp_r2_5;
    s32 temp_r2_6;

    sp14 = arg0;
    sp18 = arg3;
    if (arg5 == arg4) {
        if (arg6 == arg7) {
            temp_r2                   = M2C_FIELD(arg2, s32 *, 0);
            temp_r0                   = M2C_FIELD(arg1, s32 *, 0);
            M2C_FIELD(arg9, s32 *, 0) = func_020b81d8(temp_r0, temp_r0, temp_r2, temp_r2, arg5, arg5, arg6, arg6, arg8);
            temp_r2_2                 = M2C_FIELD(arg2, s32 *, 4);
            temp_r0_2                 = M2C_FIELD(arg1, s32 *, 4);
            M2C_FIELD(arg9, s32 *, 4) =
                func_020b81d8(temp_r0_2, temp_r0_2, temp_r2_2, temp_r2_2, arg5, arg5, arg6, arg6, arg8);
            temp_r2_3 = M2C_FIELD(arg2, s32 *, 8);
            temp_r0_3 = M2C_FIELD(arg1, s32 *, 8);
            M2C_FIELD(arg9, s32 *, 8) =
                func_020b81d8(temp_r0_3, temp_r0_3, temp_r2_3, temp_r2_3, arg5, arg5, arg6, arg6, arg8);
            return;
        }
        temp_r0_4 = M2C_FIELD(arg1, s32 *, 0);
        M2C_FIELD(arg9, s32 *, 0) =
            func_020b81d8(temp_r0_4, temp_r0_4, M2C_FIELD(arg2, s32 *, 0), *arg3, arg5, arg5, arg6, arg7, arg8);
        temp_r0_5                 = M2C_FIELD(arg1, s32 *, 4);
        M2C_FIELD(arg9, s32 *, 4) = func_020b81d8(temp_r0_5, temp_r0_5, M2C_FIELD(arg2, s32 *, 4), M2C_FIELD(sp18, s32 *, 4),
                                                  arg5, arg5, arg6, arg7, arg8);
        temp_r0_6                 = M2C_FIELD(arg1, s32 *, 8);
        M2C_FIELD(arg9, s32 *, 8) = func_020b81d8(temp_r0_6, temp_r0_6, M2C_FIELD(arg2, s32 *, 8), M2C_FIELD(sp18, s32 *, 8),
                                                  arg5, arg5, arg6, arg7, arg8);
        return;
    }
    if (arg6 == arg7) {
        temp_r2_4 = M2C_FIELD(arg2, s32 *, 0);
        M2C_FIELD(arg9, s32 *, 0) =
            func_020b81d8(*arg0, M2C_FIELD(arg1, s32 *, 0), temp_r2_4, temp_r2_4, arg4, arg5, arg6, arg6, arg8);
        temp_r2_5                 = M2C_FIELD(arg2, s32 *, 4);
        M2C_FIELD(arg9, s32 *, 4) = func_020b81d8(M2C_FIELD(sp14, s32 *, 4), M2C_FIELD(arg1, s32 *, 4), temp_r2_5, temp_r2_5,
                                                  arg4, arg5, arg6, arg6, arg8);
        temp_r2_6                 = M2C_FIELD(arg2, s32 *, 8);
        M2C_FIELD(arg9, s32 *, 8) = func_020b81d8(M2C_FIELD(sp14, s32 *, 8), M2C_FIELD(arg1, s32 *, 8), temp_r2_6, temp_r2_6,
                                                  arg4, arg5, arg6, arg6, arg8);
        return;
    }
    M2C_FIELD(arg9, s32 *, 0) =
        func_020b81d8(*arg0, M2C_FIELD(arg1, s32 *, 0), M2C_FIELD(arg2, s32 *, 0), *arg3, arg4, arg5, arg6, arg7, arg8);
    M2C_FIELD(arg9, s32 *, 4) = func_020b81d8(M2C_FIELD(sp14, s32 *, 4), M2C_FIELD(arg1, s32 *, 4), M2C_FIELD(arg2, s32 *, 4),
                                              M2C_FIELD(sp18, s32 *, 4), arg4, arg5, arg6, arg7, arg8);
    M2C_FIELD(arg9, s32 *, 8) = func_020b81d8(M2C_FIELD(sp14, s32 *, 8), M2C_FIELD(arg1, s32 *, 8), M2C_FIELD(arg2, s32 *, 8),
                                              M2C_FIELD(sp18, s32 *, 8), arg4, arg5, arg6, arg7, arg8);
}
