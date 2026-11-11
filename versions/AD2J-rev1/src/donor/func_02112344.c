/* compiler: 1.2/sp2p3  */
/* func_020b23f4 from projets/nintendogs-dachshund/src/auto/func_020b23f4.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_01ffda04(s16);
extern s32 func_02033dbc(s32);
extern s32 func_02033dc8(s32);
extern M2C_UNK func_02108510(void *, s32, s32, s32);
extern M2C_UNK func_021085ec(void *, s32, s32, s32);
extern M2C_UNK func_02108740(void *);
extern M2C_UNK func_0210fcd4(void *);
extern M2C_UNK func_0210fd98(void *);
void func_02112344(void *arg0, M2C_UNK (*arg1)(void *), void *arg2) {
    s32 temp_r5;

    temp_r5 = func_01ffda04((*(s16 *) ((s8 *) (arg0) + (0x98))));
    func_02108740(arg0);
    arg1(arg0);
    if ((*(s32 *) ((s8 *) (arg0) + (0x16C))) & 7) {
        func_02108510(arg0, (*(s32 *) ((s8 *) (arg2) + (0xC))), (*(s32 *) ((s8 *) (arg2) + (0x10))),
                      (*(s32 *) ((s8 *) (arg2) + (0x14))));
        if ((s32) (*(s32 *) ((s8 *) (arg0) + (0xB0))) > 0x99A) {
            (*(s32 *) ((s8 *) (arg0) + (0xB0))) = 0x99A;
        }
        if ((s32) (*(s32 *) ((s8 *) (arg0) + (0xB4))) > 0x99A) {
            (*(s32 *) ((s8 *) (arg0) + (0xB4))) = 0x99A;
        }
        if ((s32) (*(s32 *) ((s8 *) (arg0) + (0xB8))) > 0x99A) {
            (*(s32 *) ((s8 *) (arg0) + (0xB8))) = 0x99A;
        }
        if ((s32) (*(s32 *) ((s8 *) (arg0) + (0xB0))) < -2458) {
            (*(s32 *) ((s8 *) (arg0) + (0xB0))) = -0x99A;
        }
        if ((s32) (*(s32 *) ((s8 *) (arg0) + (0xB4))) < -2458) {
            (*(s32 *) ((s8 *) (arg0) + (0xB4))) = -0x99A;
        }
        if ((s32) (*(s32 *) ((s8 *) (arg0) + (0xB8))) < -2458) {
            (*(s32 *) ((s8 *) (arg0) + (0xB8))) = -0x99A;
        }
        return;
    }
    if (func_02033dc8(temp_r5) != 0) {
        return;
    }
    if (func_02033dbc(temp_r5) != 0) {
        func_0210fcd4(arg0);
        return;
    }
    func_021085ec(arg0, (*(s32 *) ((s8 *) (arg2) + (0))), (*(s32 *) ((s8 *) (arg2) + (4))), (*(s32 *) ((s8 *) (arg2) + (8))));
    if ((s32) (*(s32 *) ((s8 *) (arg0) + (0xB0))) > 0x99A) {
        (*(s32 *) ((s8 *) (arg0) + (0xB0))) = 0x99A;
    }
    if ((s32) (*(s32 *) ((s8 *) (arg0) + (0xB4))) > 0x99A) {
        (*(s32 *) ((s8 *) (arg0) + (0xB4))) = 0x99A;
    }
    if ((s32) (*(s32 *) ((s8 *) (arg0) + (0xB8))) > 0x99A) {
        (*(s32 *) ((s8 *) (arg0) + (0xB8))) = 0x99A;
    }
    if ((s32) (*(s32 *) ((s8 *) (arg0) + (0xB0))) < -2458) {
        (*(s32 *) ((s8 *) (arg0) + (0xB0))) = -0x99A;
    }
    if ((s32) (*(s32 *) ((s8 *) (arg0) + (0xB4))) < -2458) {
        (*(s32 *) ((s8 *) (arg0) + (0xB4))) = -0x99A;
    }
    if ((s32) (*(s32 *) ((s8 *) (arg0) + (0xB8))) < -2458) {
        (*(s32 *) ((s8 *) (arg0) + (0xB8))) = -0x99A;
    }
    func_0210fd98(arg0);
}
