/* compiler: 1.2/sp2p3  */
/* func_020aab8c from projets/nintendogs-chihuahua-friends/src/donor/func_020aab8c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02093000(void);
extern M2C_UNK func_020aadfc(void);
extern void func_020b8b0c(s32, s32, s32);
extern void func_020bd9f0(s32, s32);
extern void func_020bda9c(s32);
extern void *data_02153740;
extern s32 data_02156080;
void func_020aab8c(s32 arg0) {
    s32 temp_r2;
    s32 var_r0;
    s32 var_r2;
    s32 var_r2_2;
    s32 var_r4;
    s32 var_r4_2;
    s32 var_r6;

    var_r4 = 0;
    if ((*(s32 *) ((s8 *) (arg0) + (0xC))) != 0) {
        if ((*(s32 *) ((s8 *) (data_02153740) + (0xB8))) == 1) {
            return;
        }
        func_020b8b0c(1, 0x18, 0);
        func_020b8b0c(1, 0x19, 0);
        func_020b8b0c(1, 0x1A, 0);
        func_020b8b0c(1, 0x1C, 0);
        func_020b8b0c(3, 0x1C, 0);
        func_020bda9c(arg0 + 0x120);
        func_020bda9c(arg0 + 0xE4);
        return;
    }
    var_r0 = 0;
    if (data_02156080 != 0) {
        var_r0 = func_02093000();
    }
    switch (var_r0) {
        case 0:
            var_r4 = 0;
            break;
        case 1:
            (*(s32 *) ((s8 *) (arg0) + (0x50))) = 0;
            var_r4                              = 1;
            break;
        case 2:
            var_r4 = 2;
            if ((*(s32 *) ((s8 *) (arg0) + (0x14))) != 0) {
                (*(s32 *) ((s8 *) (arg0) + (0x50))) = 1;
                if ((*(s32 *) ((s8 *) (arg0) + (0x54))) == 0) {
                    (*(s32 *) ((s8 *) (arg0) + (0x58))) = 1;
                }
            } else {
                (*(s32 *) ((s8 *) (arg0) + (0x50))) = 0;
            }
            break;
    }
    if (((*(s32 *) ((s8 *) (arg0) + (0x58))) != 0) && (func_020aadfc() != 0)) {
        (*(s32 *) ((s8 *) (arg0) + (0x58))) = 0;
    }
    var_r2 = 0;
    var_r6 = 0;
    switch (var_r4) {
        case 2:
            var_r2 = 1;
            break;
        case 1:
            var_r6 = 1;
            break;
    }
    if ((*(s32 *) ((s8 *) (arg0) + (0x14))) == 0) {
        var_r6 = 0;
        var_r2 = 0;
    }
    func_020b8b0c(1, 0x18, var_r2);
    func_020b8b0c(1, 0x19, var_r6);
    func_020b8b0c(1, 0x1A, (*(s32 *) ((s8 *) (arg0) + (0x50))));
    (*(s32 *) ((s8 *) (arg0) + (0x54))) = (s32) (*(s32 *) ((s8 *) (arg0) + (0x50)));
    temp_r2                             = (*(s32 *) ((s8 *) (arg0) + (0x14)));
    if (temp_r2 == 0) {
        var_r4_2 = 1;
    } else {
        var_r4_2 = 0;
    }
    if ((*(s32 *) ((s8 *) (arg0) + (0x13C))) == 4) {
        func_020b8b0c(1, 0x1B, temp_r2);
    } else {
        func_020bd9f0(arg0 + 0x120, temp_r2);
    }
    if ((*(s32 *) ((s8 *) (arg0) + (0x100))) == 4) {
        func_020b8b0c(3, 0x1B, var_r4_2);
    } else {
        func_020bd9f0(arg0 + 0xE4, var_r4_2);
    }
    if ((*(s32 *) ((s8 *) (data_02153740) + (0xB8))) == 3) {
        func_020b8b0c(1, 0x1C, 0);
        func_020b8b0c(3, 0x1C, 0);
        return;
    }
    func_020b8b0c(1, 0x1C, (*(s32 *) ((s8 *) (arg0) + (0x14))));
    if ((*(s32 *) ((s8 *) (arg0) + (0x14))) == 0) {
        var_r2_2 = 1;
    } else {
        var_r2_2 = 0;
    }
    func_020b8b0c(3, 0x1C, var_r2_2);
}
