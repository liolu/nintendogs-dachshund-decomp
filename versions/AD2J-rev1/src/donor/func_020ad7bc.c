/* compiler: 1.2/sp2p3  */
/* func_020dffe0 from projets/nintendogs-dachshund/src/auto/func_020dffe0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_01ffda04(s16);
extern void *func_02028144();
extern M2C_UNK func_020c6534(s32, s32, M2C_UNK);
extern void *data_02154c3c;
extern s16 *data_02153700;
extern void *data_02153708;
void func_020ad7bc(s32 arg0) {
    s16 temp_r1;
    s16 var_r4;
    s32 var_r1;
    void *temp_r0;

    var_r4 = 1;
    if (arg0 == 0) {
        var_r4 = *data_02153700;
    } else if (arg0 == 1) {
        func_01ffda04((*(s16 *) ((s8 *) (data_02153708) + (0xE))));
        temp_r0 = func_02028144();
        temp_r1 = (*(s16 *) ((s8 *) (data_02153708) + (6)));
        switch (temp_r1) {
            case 2:
                var_r4 = (*(s16 *) ((s8 *) (temp_r0) + (0x6C)));
                break;
            case 0:
                var_r4 = (*(s16 *) ((s8 *) (temp_r0) + (0x68)));
                break;
            case 1:
                var_r4 = (*(s16 *) ((s8 *) (temp_r0) + (0x6A)));
                break;
        }
    }
    var_r1 = 0;
    switch (var_r4) {
        default:
            break;
        case 1:
            var_r1 = 0x57B;
            break;
        case 2:
            var_r1 = 0x57C;
            break;
        case 3:
            var_r1 = 0x57D;
            break;
        case 4:
            var_r1 = 0x57E;
            break;
        case 5:
            var_r1 = 0x57F;
            break;
    }
    func_020c6534((*(s32 *) ((s8 *) (data_02154c3c) + (4))), var_r1, 0);
}
