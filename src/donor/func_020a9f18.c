/* compiler: 1.2/sp2p3  */
/* func_020a9f18 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020a9f18.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020ab39c();
extern M2C_UNK func_020ab3ac();
extern s32 func_020bdca0(void *, M2C_UNK, M2C_UNK);
extern void *data_02153740;
void func_020a9f18(s32 arg0, void *arg1, M2C_UNK arg2, M2C_UNK arg3) {
    void *temp_r6;
    void *var_r1;

    var_r1  = arg1;
    temp_r6 = var_r1;
    if (arg0 == 1) {
        var_r1 = (*(void **) ((s8 *) (temp_r6) + (0x1CC)));
    } else if (arg0 == 3) {
        var_r1 = (*(void **) ((s8 *) (temp_r6) + (0x1AC)));
    }
    if ((*(s32 *) ((s8 *) (temp_r6) + (0x64))) == 0) {
        return;
    }
    if (var_r1 != (void *) 3) {
        return;
    }
    if ((*(s32 *) ((s8 *) (temp_r6) + (8))) != 0) {
        return;
    }
    if ((*(s32 *) ((s8 *) (temp_r6) + (0x68))) != 0) {
        func_020ab39c();
    } else {
        func_020ab3ac();
    }
    if (arg0 == 1) {
        if (func_020bdca0(temp_r6 + 0xA8, arg2, arg3) != 0) {
            (*(s32 *) ((s8 *) (data_02153740) + (0x3528))) = 1;
        }
    } else if ((arg0 == 3) && (func_020bdca0(temp_r6 + 0x6C, arg2, arg3) != 0)) {
        (*(s32 *) ((s8 *) (data_02153740) + (0x3528))) = 1;
    }
    (*(s32 *) ((s8 *) (temp_r6) + (4))) = 0;
}
