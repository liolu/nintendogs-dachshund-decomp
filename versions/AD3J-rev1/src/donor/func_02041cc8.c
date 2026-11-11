/* compiler: 1.2/sp2p3 -O2 */
/* func_02041cc8 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_02041cc8.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_020418c8(M2C_UNK);
extern s32 func_020c3bc8(s32);
extern M2C_UNK func_020c4ea8(void *, M2C_UNK *);
extern M2C_UNK func_020c4eec(M2C_UNK, void *);
extern void *func_020c4f6c();
extern M2C_UNK func_020c5198(void *, s32);
extern M2C_UNK func_020c51a4(void *, M2C_UNK);
extern void *func_020c5464(M2C_UNK, M2C_UNK, s32);
extern void *data_0214b484;
extern M2C_UNK func_02024114;
extern M2C_UNK func_0203e090;
void func_02041cc8(M2C_UNK arg0, M2C_UNK arg1) {
    s32 sp0;
    s16 var_r8;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r4;

    temp_r0 = func_020c4f6c();
    func_020c4ea8(temp_r0, &func_02024114);
    func_020c4eec(arg1, temp_r0);
    var_r8 = 0;
    sp0    = 0;
    do {
        temp_r0_2                                = func_020c5464(arg0, 0x8C, (*(s32 *) ((s8 *) (data_0214b484) + (0x7404))));
        (*(u16 *) ((s8 *) (temp_r0_2) + (0x20))) = (u16) ((*(u16 *) ((s8 *) (temp_r0_2) + (0x20))) | 8);
        (*(s16 *) ((s8 *) (temp_r0_2) + (0x84))) = 0;
        (*(s16 *) ((s8 *) (temp_r0_2) + (0x86))) = 0;
        func_020c4ea8(temp_r0_2, &func_0203e090);
        func_020c51a4(temp_r0_2, 8);
        func_020c5198(temp_r0_2, func_020c3bc8(sp0));
        (*(s16 *) ((s8 *) (temp_r0_2) + (0x88)))                          = var_r8;
        (*(void **) ((s8 *) ((data_0214b484 + (var_r8 * 4))) + (0x7408))) = temp_r0_2;
        func_020c4eec(arg1, (*(void **) ((s8 *) ((data_0214b484 + (var_r8 * 4))) + (0x7408))));
        var_r8 += 1;
    } while ((s32) var_r8 < 3);
    temp_r4                                  = data_0214b484;
    (*(s32 *) ((s8 *) (temp_r4) + (0x741C))) = func_020418c8(arg0);
    func_020c4eec(arg1, (*(void **) ((s8 *) (data_0214b484) + (0x741C))));
}
