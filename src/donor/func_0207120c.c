/* compiler: 1.2/sp2p3  */
/* func_0207120c from projets/nintendogs-chihuahua-friends/src/auto/func_0207120c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0206e124(void *, M2C_UNK, M2C_UNK);
extern M2C_UNK func_0206e1b8(s32, void *, M2C_UNK);
extern M2C_UNK func_0207144c(void *);
extern void *func_0207145c();
extern s32 func_0208120c();
extern M2C_UNK func_02081220(s32);
s32 func_0207120c(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u16 arg5) {
    s32 temp_r4;
    void *var_r0;
    void *var_r1;

    temp_r4 = func_0208120c();
    if (func_0207145c() == ((void *) 0)) {
        func_0207144c(arg0);
    } else {
        var_r0 = func_0207145c();
        var_r1 = (*(void **) ((s8 *) (var_r0) + (0x28)));
        if (var_r1 != ((void *) 0)) {
            do {
                var_r0 = var_r1;
                var_r1 = (*(void **) ((s8 *) (var_r1) + (0x28)));
            } while (var_r1 != ((void *) 0));
        }
        (*(void **) ((s8 *) (var_r0) + (0x28))) = arg0;
    }
    if (arg3 == 0) {
        (*(s16 *) ((s8 *) (arg0) + (0x32))) = 1;
    } else {
        (*(s32 *) ((s8 *) (arg0) + (0x2C))) = arg3;
        (*(s16 *) ((s8 *) (arg0) + (0x32))) = 0;
    }
    (*(s32 *) ((s8 *) (arg0) + (0x28))) = 0;
    (*(s32 *) ((s8 *) (arg0) + (0)))    = arg1;
    (*(s32 *) ((s8 *) (arg0) + (4)))    = arg4;
    (*(u16 *) ((s8 *) (arg0) + (0x30))) = arg5;
    if (arg2 != 0) {
        func_0206e1b8(arg2, arg0 + 8, 0x20);
    } else {
        func_0206e124(arg0 + 8, 0, 0x20);
    }
    func_02081220(temp_r4);
    return 1;
}
