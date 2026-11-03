/* compiler: 1.2/sp2p3  */
/* func_02035710 from projets/nintendogs-chihuahua-friends/src/auto/func_02035710.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_02035ae4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern void *data_0214b484;
void func_02035710(s32 arg0) {
    s32 sp0;
    s16 temp_r0;
    s16 temp_r4;
    s32 var_r0;

    if ((*(s8 *) ((s8 *) (arg0) + (0x88))) != (*(u16 *) ((s8 *) (data_0214b484) + (0x38)))) {
        return;
    }
    temp_r0 = (*(s16 *) ((s8 *) (arg0) + (0xF0)));
    if (((s32) temp_r0 >= 0xA) && ((s32) temp_r0 < 0x6F)) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        return;
    }
    sp0                                  = 0;
    temp_r4                              = (*(s16 *) ((s8 *) (arg0) + (0x146)));
    (*(s16 *) ((s8 *) (arg0) + (0x146))) = -1;
    if ((*(s8 *) ((s8 *) (arg0) + (0xA4))) != 5) {
        func_02035ae4(arg0, (s32) &sp0, 1, 0);
    }
    if ((*(s16 *) ((s8 *) (arg0) + (0x146))) == -1) {
        (*(s16 *) ((s8 *) (arg0) + (0x146))) = temp_r4;
    }
}
