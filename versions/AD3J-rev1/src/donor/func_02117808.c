/* compiler: 1.2/sp2p3  */
/* func_020b7f2c from projets/nintendogs-dachshund/src/auto/func_020b7f2c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
extern s32 func_02117ab4(s32, s32, s32, s32, s32, s32, s32, s32, s32);
void func_02117808(s32 *arg0, void *arg1, void *arg2, s32 *arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8,
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
            temp_r2                          = (*(s32 *) ((s8 *) (arg2) + (0)));
            temp_r0                          = (*(s32 *) ((s8 *) (arg1) + (0)));
            (*(s32 *) ((s8 *) (arg9) + (0))) = func_02117ab4(temp_r0, temp_r0, temp_r2, temp_r2, arg5, arg5, arg6, arg6, arg8);
            temp_r2_2                        = (*(s32 *) ((s8 *) (arg2) + (4)));
            temp_r0_2                        = (*(s32 *) ((s8 *) (arg1) + (4)));
            (*(s32 *) ((s8 *) (arg9) + (4))) =
                func_02117ab4(temp_r0_2, temp_r0_2, temp_r2_2, temp_r2_2, arg5, arg5, arg6, arg6, arg8);
            temp_r2_3 = (*(s32 *) ((s8 *) (arg2) + (8)));
            temp_r0_3 = (*(s32 *) ((s8 *) (arg1) + (8)));
            (*(s32 *) ((s8 *) (arg9) + (8))) =
                func_02117ab4(temp_r0_3, temp_r0_3, temp_r2_3, temp_r2_3, arg5, arg5, arg6, arg6, arg8);
            return;
        }
        temp_r0_4 = (*(s32 *) ((s8 *) (arg1) + (0)));
        (*(s32 *) ((s8 *) (arg9) + (0))) =
            func_02117ab4(temp_r0_4, temp_r0_4, (*(s32 *) ((s8 *) (arg2) + (0))), *arg3, arg5, arg5, arg6, arg7, arg8);
        temp_r0_5                        = (*(s32 *) ((s8 *) (arg1) + (4)));
        (*(s32 *) ((s8 *) (arg9) + (4))) = func_02117ab4(temp_r0_5, temp_r0_5, (*(s32 *) ((s8 *) (arg2) + (4))),
                                                         (*(s32 *) ((s8 *) (sp18) + (4))), arg5, arg5, arg6, arg7, arg8);
        temp_r0_6                        = (*(s32 *) ((s8 *) (arg1) + (8)));
        (*(s32 *) ((s8 *) (arg9) + (8))) = func_02117ab4(temp_r0_6, temp_r0_6, (*(s32 *) ((s8 *) (arg2) + (8))),
                                                         (*(s32 *) ((s8 *) (sp18) + (8))), arg5, arg5, arg6, arg7, arg8);
        return;
    }
    if (arg6 == arg7) {
        temp_r2_4 = (*(s32 *) ((s8 *) (arg2) + (0)));
        (*(s32 *) ((s8 *) (arg9) + (0))) =
            func_02117ab4(*arg0, (*(s32 *) ((s8 *) (arg1) + (0))), temp_r2_4, temp_r2_4, arg4, arg5, arg6, arg6, arg8);
        temp_r2_5                        = (*(s32 *) ((s8 *) (arg2) + (4)));
        (*(s32 *) ((s8 *) (arg9) + (4))) = func_02117ab4((*(s32 *) ((s8 *) (sp14) + (4))), (*(s32 *) ((s8 *) (arg1) + (4))),
                                                         temp_r2_5, temp_r2_5, arg4, arg5, arg6, arg6, arg8);
        temp_r2_6                        = (*(s32 *) ((s8 *) (arg2) + (8)));
        (*(s32 *) ((s8 *) (arg9) + (8))) = func_02117ab4((*(s32 *) ((s8 *) (sp14) + (8))), (*(s32 *) ((s8 *) (arg1) + (8))),
                                                         temp_r2_6, temp_r2_6, arg4, arg5, arg6, arg6, arg8);
        return;
    }
    (*(s32 *) ((s8 *) (arg9) + (0))) = func_02117ab4(*arg0, (*(s32 *) ((s8 *) (arg1) + (0))), (*(s32 *) ((s8 *) (arg2) + (0))),
                                                     *arg3, arg4, arg5, arg6, arg7, arg8);
    (*(s32 *) ((s8 *) (arg9) + (4))) =
        func_02117ab4((*(s32 *) ((s8 *) (sp14) + (4))), (*(s32 *) ((s8 *) (arg1) + (4))), (*(s32 *) ((s8 *) (arg2) + (4))),
                      (*(s32 *) ((s8 *) (sp18) + (4))), arg4, arg5, arg6, arg7, arg8);
    (*(s32 *) ((s8 *) (arg9) + (8))) =
        func_02117ab4((*(s32 *) ((s8 *) (sp14) + (8))), (*(s32 *) ((s8 *) (arg1) + (8))), (*(s32 *) ((s8 *) (arg2) + (8))),
                      (*(s32 *) ((s8 *) (sp18) + (8))), arg4, arg5, arg6, arg7, arg8);
}
