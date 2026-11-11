/* compiler: 1.2/sp2p3  */
/* func_0201dcd8 from projets/nintendogs-chihuahua-friends/src/auto/func_0201dcd8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_02025a2c(M2C_UNK);
extern void func_02026b54(M2C_UNK);
extern void *data_02153720;
extern void *data_02156080;
void func_0201dcd8(s32 arg0) {
    s16 temp_r2;
    void *var_r0;

    (*(s16 *) ((s8 *) (arg0) + (0x150))) = 0xCD;
    func_02026b54(arg0);
    func_02025a2c(arg0);
    temp_r2 = (*(s16 *) ((s8 *) (data_02153720) + (0x7A)));
    if (((s32) temp_r2 < 0) || ((s32) (*(s16 *) ((s8 *) (data_02156080) + (0x20))) <= (s32) temp_r2)) {
        var_r0 = ((void *) 0);
    } else {
        var_r0 = (*(void **) ((s8 *) ((data_02156080 + (temp_r2 * 4))) + (4)));
    }
    if (var_r0 == ((void *) 0)) {
        return;
    }
    if ((*(s8 *) ((s8 *) (arg0) + (0x88))) == (*(s16 *) ((s8 *) (var_r0) + (0x98)))) {
        (*(s16 *) ((s8 *) (arg0) + (0x154))) = 1;
    }
}
