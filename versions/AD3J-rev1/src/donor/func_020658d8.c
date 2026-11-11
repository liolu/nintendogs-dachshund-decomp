/* compiler: 1.2/sp2p3  */
/* func_0206b8ec from projets/madagascar/src/auto/func_0206b8ec.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02080820(void *, M2C_UNK);
extern s32 func_0206521c(M2C_UNK, M2C_UNK, M2C_UNK);
extern void *func_0206533c();
s32 func_020658d8(void) {
    s32 var_r5;
    u16 temp_r5;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r4;

    temp_r4 = func_0206533c();
    if (func_0206521c(2, 7, 8) != 0) {
        return 0;
    }
    func_02080820((*(void **) ((s8 *) (temp_r4) + (4))) + 0x10, 4);
    temp_r1 = (*(void **) ((s8 *) (temp_r4) + (4)));
    if ((*(s32 *) ((s8 *) (temp_r1) + (0x10))) == 1) {
        return 0;
    }
    func_02080820(temp_r1 + 0x184, 2);
    temp_r1_2 = (*(void **) ((s8 *) (temp_r4) + (4)));
    if ((*(u16 *) ((s8 *) (temp_r1_2) + (0x184))) == 0) {
        var_r5 = 1;
    } else {
        var_r5 = 0;
    }
    func_02080820(temp_r1_2 + 0x190, 2);
    temp_r1_3 = (*(void **) ((s8 *) (temp_r4) + (4)));
    temp_r5   = (*(u16 *) ((s8 *) (temp_r1_3) + (0x190)));
    if (var_r5 != 1) {
        return ((temp_r5 + 0x51) & ~0x1F) * 2;
    }
    func_02080820(temp_r1_3 + 0xF4, 2);
    return ((((temp_r5 + 0xC) * (*(u16 *) ((s8 *) ((*(void **) ((s8 *) (temp_r4) + (4)))) + (0xF4)))) + 0x29) & ~0x1F) * 2;
}
